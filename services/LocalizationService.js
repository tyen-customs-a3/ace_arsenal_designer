/**
 * LocalizationService - Manages localization string resolution and language support
 * 
 * This service provides the main interface for resolving $STR_ localization keys
 * to their translated strings. It uses the StringtableParser to load all available
 * stringtables and builds an efficient lookup system with language fallback support.
 * 
 * @author Arsenal Testbed Localization System
 * @version 1.0.0
 */

import { StringtableParser } from './StringtableParser.js';

export class LocalizationService {
    constructor(options = {}) {
        this.parser = new StringtableParser();
        this.localizationDb = new Map(); // Consolidated key -> translations lookup
        this.currentLanguage = options.defaultLanguage || 'English';
        this.fallbackLanguage = 'Original';
        this.isInitialized = false;
        
        // Configuration
        this.config = {
            enableFallback: true,
            cacheResolutions: true,
            logMissingKeys: true,
            ...options
        };
        
        // Statistics and caching
        this.stats = {
            totalKeys: 0,
            resolvedKeys: 0,
            missedKeys: 0,
            cacheHits: 0,
            availableLanguages: []
        };
        
        this.resolutionCache = new Map(); // Cache resolved strings
        this.missingKeys = new Set(); // Track missing keys to avoid repeated warnings
    }

    /**
     * Initialize the localization service by parsing all stringtables
     * @returns {Promise<boolean>} Success status
     */
    async initialize() {
        if (this.isInitialized) {
            return true;
        }
        
        console.log('LocalizationService: Initializing localization system...');
        
        try {
            // Parse all stringtable files
            const stringtables = await this.parser.parseAllStringtables();
            
            // Build consolidated localization database
            this._buildLocalizationDatabase(stringtables);
            
            // Update statistics
            this._updateStats();
            
            this.isInitialized = true;
            
            console.log(`LocalizationService: Initialized with ${this.stats.totalKeys} localization keys`);
            console.log(`LocalizationService: Available languages: ${this.stats.availableLanguages.join(', ')}`);
            
            return true;
            
        } catch (error) {
            console.error('LocalizationService: Initialization failed:', error);
            this.isInitialized = false;
            return false;
        }
    }

    /**
     * Resolves a localization string key to its translated text
     * @param {string} key - The localization key (with or without $STR_ prefix)
     * @param {string} [language] - Target language (defaults to current language)
     * @returns {string|null} Resolved string or null if not found
     */
    resolveString(key, language = null) {
        if (!this.isInitialized) {
            console.warn('LocalizationService: Service not initialized, cannot resolve string');
            return null;
        }
        
        if (!key || typeof key !== 'string') {
            return null;
        }
        
        // Clean the key - remove $STR_ prefix and convert to lowercase
        const cleanKey = this._cleanKey(key);
        const targetLanguage = language || this.currentLanguage;
        
        // Check cache first
        const cacheKey = `${cleanKey}:${targetLanguage}`;
        if (this.config.cacheResolutions && this.resolutionCache.has(cacheKey)) {
            this.stats.cacheHits++;
            return this.resolutionCache.get(cacheKey);
        }
        
        // Look up the key in the localization database
        const translations = this.localizationDb.get(cleanKey);
        if (!translations) {
            this._handleMissingKey(key);
            return null;
        }
        
        // Try to get the translation in the target language
        let resolvedString = translations[targetLanguage];
        
        // Fallback to other languages if not found
        if (!resolvedString && this.config.enableFallback) {
            resolvedString = this._tryLanguageFallback(translations, targetLanguage);
        }
        
        // Cache the result
        if (resolvedString && this.config.cacheResolutions) {
            this.resolutionCache.set(cacheKey, resolvedString);
        }
        
        if (resolvedString) {
            this.stats.resolvedKeys++;
        } else {
            this._handleMissingKey(key);
        }
        
        return resolvedString || null;
    }

    /**
     * Checks if a string is a localization key
     * @param {string} str - String to check
     * @returns {boolean} True if it's a localization key
     */
    isLocalizationKey(str) {
        return str && typeof str === 'string' && str.trim().startsWith('$STR_');
    }

    /**
     * Resolves a string that might be a localization key or plain text
     * @param {string} str - String to resolve
     * @param {string} [language] - Target language
     * @param {string} [fallbackValue] - Fallback value if resolution fails (e.g., className)
     * @returns {string} Resolved string, fallback value, or original string
     */
    resolveOrPassthrough(str, language = null, fallbackValue = null) {
        if (!str || typeof str !== 'string') {
            return fallbackValue || str;
        }
        
        if (this.isLocalizationKey(str)) {
            const resolved = this.resolveString(str, language);
            if (resolved) {
                return resolved;
            }
            
            // If resolution failed and we have a fallback value, use it
            if (fallbackValue) {
                console.log(`LocalizationService: Using fallback '${fallbackValue}' for unresolved key '${str}'`);
                return fallbackValue;
            }
            
            // Otherwise return the original string
            return str;
        }
        
        return str;
    }

    /**
     * Sets the current language for localization
     * @param {string} language - Language code
     * @returns {boolean} Success status
     */
    setLanguage(language) {
        if (!this.stats.availableLanguages.includes(language)) {
            console.warn(`LocalizationService: Language '${language}' not available`);
            return false;
        }
        
        console.log(`LocalizationService: Switching language from '${this.currentLanguage}' to '${language}'`);
        this.currentLanguage = language;
        
        // Clear cache since language changed
        this.resolutionCache.clear();
        
        return true;
    }

    /**
     * Gets the current language
     * @returns {string} Current language code
     */
    getCurrentLanguage() {
        return this.currentLanguage;
    }

    /**
     * Gets all available languages
     * @returns {string[]} Array of language codes
     */
    getAvailableLanguages() {
        return [...this.stats.availableLanguages];
    }

    /**
     * Gets service statistics
     * @returns {Object} Service statistics
     */
    getStats() {
        return {
            ...this.stats,
            isInitialized: this.isInitialized,
            currentLanguage: this.currentLanguage,
            cacheSize: this.resolutionCache.size,
            missingKeysCount: this.missingKeys.size
        };
    }

    /**
     * Gets a list of missing keys that couldn't be resolved
     * @returns {string[]} Array of missing keys
     */
    getMissingKeys() {
        return Array.from(this.missingKeys);
    }

    /**
     * Clears the resolution cache
     */
    clearCache() {
        this.resolutionCache.clear();
        console.log('LocalizationService: Resolution cache cleared');
    }

    // Private methods

    /**
     * Builds the consolidated localization database from parsed stringtables
     * @param {Map} stringtables - Parsed stringtable data
     * @private
     */
    _buildLocalizationDatabase(stringtables) {
        console.log('LocalizationService: Building localization database...');
        
        const allLanguages = new Set();
        
        // Iterate through all stringtables and merge their keys
        for (const [filePath, stringtableData] of stringtables) {
            // Add languages from this stringtable
            for (const lang of stringtableData.languages) {
                allLanguages.add(lang);
            }
            
            // Merge keys into the main database
            for (const [keyId, translations] of stringtableData.keys) {
                if (this.localizationDb.has(keyId)) {
                    // Merge translations for existing key
                    const existing = this.localizationDb.get(keyId);
                    this.localizationDb.set(keyId, { ...existing, ...translations });
                } else {
                    // Add new key
                    this.localizationDb.set(keyId, { ...translations });
                }
            }
        }
        
        this.stats.availableLanguages = Array.from(allLanguages);
        this.stats.totalKeys = this.localizationDb.size;
        
        console.log(`LocalizationService: Built database with ${this.stats.totalKeys} keys and ${this.stats.availableLanguages.length} languages`);
    }

    /**
     * Cleans a localization key by removing prefix and normalizing
     * @param {string} key - Raw key
     * @returns {string} Cleaned key
     * @private
     */
    _cleanKey(key) {
        let cleaned = key.trim();
        
        // Remove $STR_ prefix if present
        if (cleaned.startsWith('$STR_')) {
            cleaned = cleaned.substring(5);
        }
        
        return cleaned.toLowerCase();
    }

    /**
     * Tries to find a translation using language fallback
     * @param {Object} translations - All translations for a key
     * @param {string} targetLanguage - Original target language
     * @returns {string|null} Fallback translation
     * @private
     */
    _tryLanguageFallback(translations, targetLanguage) {
        // Fallback priority order
        const fallbackOrder = [
            this.fallbackLanguage, // 'Original'
            'English',
            'Original',
            ...Object.keys(translations) // Any available language
        ];
        
        for (const fallbackLang of fallbackOrder) {
            if (fallbackLang !== targetLanguage && translations[fallbackLang]) {
                return translations[fallbackLang];
            }
        }
        
        return null;
    }

    /**
     * Handles missing key logging and tracking
     * @param {string} key - Missing key
     * @private
     */
    _handleMissingKey(key) {
        if (!this.missingKeys.has(key)) {
            this.missingKeys.add(key);
            this.stats.missedKeys++;
            
            if (this.config.logMissingKeys) {
                console.warn(`LocalizationService: Missing localization key: ${key}`);
            }
        }
    }

    /**
     * Updates service statistics
     * @private
     */
    _updateStats() {
        const parserStats = this.parser.getStats();
        this.stats.availableLanguages = parserStats.languagesFound;
    }
}