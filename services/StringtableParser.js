/**
 * StringtableParser - Parses Arma 3 stringtable.xml files to extract localization strings
 * 
 * This service discovers and parses all stringtable.xml files in the data directory,
 * extracting localization key-value pairs for different languages. It handles the
 * standard Arma 3 stringtable format with support for multiple languages.
 * 
 * @author Arsenal Testbed Localization System
 * @version 1.0.0
 */

export class StringtableParser {
    constructor() {
        this.stringtables = new Map(); // filename -> parsed data
        this.languages = new Set(['Original', 'English']); // Track available languages
        this.parseStats = {
            filesProcessed: 0,
            keysExtracted: 0,
            languagesFound: new Set(),
            errors: []
        };
    }

    /**
     * Discovers and parses all stringtable.xml files in the data directory
     * @returns {Promise<Map<string, Object>>} Map of filename to parsed stringtable data
     */
    async parseAllStringtables() {
        console.log('StringtableParser: Starting stringtable discovery and parsing...');
        
        try {
            // Find all stringtable.xml files
            const stringtableFiles = await this._discoverStringtableFiles();
            console.log(`StringtableParser: Found ${stringtableFiles.length} stringtable files`);
            
            // Parse each file
            for (const filePath of stringtableFiles) {
                try {
                    await this._parseStringtableFile(filePath);
                    this.parseStats.filesProcessed++;
                } catch (error) {
                    console.error(`StringtableParser: Failed to parse ${filePath}:`, error);
                    this.parseStats.errors.push({
                        file: filePath,
                        error: error.message
                    });
                }
            }
            
            console.log(`StringtableParser: Completed parsing. Processed ${this.parseStats.filesProcessed} files, extracted ${this.parseStats.keysExtracted} keys`);
            console.log(`StringtableParser: Available languages: ${Array.from(this.parseStats.languagesFound).join(', ')}`);
            
            return this.stringtables;
            
        } catch (error) {
            console.error('StringtableParser: Failed to parse stringtables:', error);
            throw new Error(`Stringtable parsing failed: ${error.message}`);
        }
    }

    /**
     * Discovers all stringtable.xml files in the data directory
     * @returns {Promise<string[]>} Array of file paths
     * @private
     */
    async _discoverStringtableFiles() {
        const stringtableFiles = [];
        
        try {
            // Use fetch to get directory listing (works in browser environment)
            const response = await fetch('./data/');
            if (!response.ok) {
                throw new Error('Failed to access data directory');
            }
            
            // For now, we'll use a predefined list of known stringtable locations
            // In a real implementation, this would recursively scan directories
            const knownStringtablePaths = [
                './data/addons/a3/language_f/stringtable.xml',
                './data/addons/a3/language_f_beta/stringtable.xml',
                './data/addons/a3/language_f_gamma/stringtable.xml',
                './data/addons/a3/language_f_epa/stringtable.xml',
                './data/addons/a3/language_f_epb/stringtable.xml',
                './data/addons/a3/language_f_epc/stringtable.xml',
                './data/addons/a3/language_f_exp/stringtable.xml',
                './data/addons/a3/language_f_exp_a/stringtable.xml',
                './data/addons/a3/language_f_exp_b/stringtable.xml',
                './data/addons/a3/language_f_heli/stringtable.xml',
                './data/addons/a3/language_f_kart/stringtable.xml',
                './data/addons/a3/language_f_mark/stringtable.xml',
                './data/addons/a3/language_f_curator/stringtable.xml',
                './data/addons/a3/language_f_jets/stringtable.xml',
                './data/addons/a3/language_f_orange/stringtable.xml',
                './data/addons/a3/language_f_tank/stringtable.xml',
                './data/addons/a3/language_f_enoch/stringtable.xml',
                './data/addons/a3/language_f_contact/stringtable.xml'
            ];
            
            // Check which files actually exist
            for (const path of knownStringtablePaths) {
                try {
                    const testResponse = await fetch(path, { method: 'HEAD' });
                    if (testResponse.ok) {
                        stringtableFiles.push(path);
                    }
                } catch (error) {
                    // File doesn't exist, skip
                }
            }
            
            return stringtableFiles;
            
        } catch (error) {
            console.warn('StringtableParser: Could not discover stringtable files, using fallback list');
            // Return empty array if discovery fails - graceful degradation
            return [];
        }
    }

    /**
     * Parses a single stringtable.xml file
     * @param {string} filePath - Path to the stringtable file
     * @returns {Promise<Object>} Parsed stringtable data
     * @private
     */
    async _parseStringtableFile(filePath) {
        try {
            const response = await fetch(filePath);
            if (!response.ok) {
                throw new Error(`Failed to fetch ${filePath}: ${response.status}`);
            }
            
            const xmlText = await response.text();
            const parser = new DOMParser();
            const xmlDoc = parser.parseFromString(xmlText, 'text/xml');
            
            // Check for parsing errors
            const parserError = xmlDoc.querySelector('parsererror');
            if (parserError) {
                throw new Error(`XML parsing error in ${filePath}: ${parserError.textContent}`);
            }
            
            // Extract stringtable data
            const stringtableData = this._extractStringtableData(xmlDoc, filePath);
            
            // Store the parsed data
            this.stringtables.set(filePath, stringtableData);
            
            return stringtableData;
            
        } catch (error) {
            throw new Error(`Failed to parse stringtable ${filePath}: ${error.message}`);
        }
    }

    /**
     * Extracts string data from parsed XML document
     * @param {Document} xmlDoc - Parsed XML document
     * @param {string} filePath - File path for debugging
     * @returns {Object} Extracted stringtable data
     * @private
     */
    _extractStringtableData(xmlDoc, filePath) {
        const stringtableData = {
            filePath,
            keys: new Map(), // keyId -> translations object
            languages: new Set(),
            keyCount: 0
        };
        
        try {
            // Find all Key elements
            const keyElements = xmlDoc.querySelectorAll('Key');
            
            for (const keyElement of keyElements) {
                const keyId = keyElement.getAttribute('ID');
                if (!keyId) continue;
                
                const translations = {};
                
                // Extract all language translations for this key
                const childElements = keyElement.children;
                for (const childElement of childElements) {
                    const language = childElement.tagName;
                    const text = childElement.textContent?.trim();
                    
                    if (text) {
                        translations[language] = text;
                        stringtableData.languages.add(language);
                        this.parseStats.languagesFound.add(language);
                    }
                }
                
                // Store the key with all its translations
                if (Object.keys(translations).length > 0) {
                    stringtableData.keys.set(keyId.toLowerCase(), translations);
                    stringtableData.keyCount++;
                    this.parseStats.keysExtracted++;
                }
            }
            
            return stringtableData;
            
        } catch (error) {
            throw new Error(`Failed to extract data from ${filePath}: ${error.message}`);
        }
    }

    /**
     * Gets all parsed stringtable data
     * @returns {Map<string, Object>} All parsed stringtables
     */
    getAllStringtables() {
        return this.stringtables;
    }

    /**
     * Gets parsing statistics
     * @returns {Object} Parse statistics
     */
    getStats() {
        return {
            ...this.parseStats,
            languagesFound: Array.from(this.parseStats.languagesFound),
            totalStringtables: this.stringtables.size
        };
    }

    /**
     * Gets all available languages across all stringtables
     * @returns {string[]} Array of language codes
     */
    getAvailableLanguages() {
        return Array.from(this.parseStats.languagesFound);
    }
}