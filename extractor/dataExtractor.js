/**
 * DataExtractor - Orchestrates the enrichment process by dynamically importing
 * all definition modules and applying them to the resolved database.
 * 
 * This module serves as the central coordinator for Phase 3 of the data processing
 * pipeline, taking the resolved class hierarchy from Phase 2 and enriching each
 * class with specialized metadata extracted by definition modules.
 * 
 * @module DataExtractor
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Performance metrics and statistics for the enrichment process
 * @typedef {Object} EnrichmentStats
 * @property {number} totalClasses - Total number of classes processed
 * @property {number} enrichedClasses - Number of classes that received metadata
 * @property {number} unenrichedClasses - Number of classes with no matching definitions
 * @property {Object} definitionStats - Per-definition statistics
 * @property {number} processingTimeMs - Total processing time in milliseconds
 * @property {Array<string>} errors - List of error messages encountered
 * @property {Array<string>} warnings - List of warning messages
 */

/**
 * Configuration for the enrichment process
 * @typedef {Object} EnrichmentConfig
 * @property {boolean} enableLogging - Whether to enable detailed logging
 * @property {boolean} enableDebugLogging - Whether to enable debug-level logging
 * @property {boolean} continueOnError - Whether to continue processing after definition errors
 * @property {number} maxRetries - Maximum retries for failed definition imports
 * @property {boolean} trackPerformance - Whether to collect detailed performance metrics
 */

/**
 * Default configuration for the enrichment process
 * @type {EnrichmentConfig}
 */
const DEFAULT_CONFIG = {
    enableLogging: true,
    enableDebugLogging: false,
    continueOnError: true,
    maxRetries: 3,
    trackPerformance: true,
    logIndividualMatches: false,    // Disable verbose match logging by default
    logBatchProgress: false         // Disable verbose batch progress by default
};

/**
 * Definition module information
 * @typedef {Object} DefinitionModule
 * @property {string} name - Module name
 * @property {Function} isType - Function to test if class matches this definition
 * @property {Function} extract - Function to extract metadata from matching classes
 * @property {string} filePath - Original file path of the module
 */

/**
 * DataExtractor class that handles the orchestration of the enrichment process
 */
class DataExtractor {
    /**
     * Create a new DataExtractor instance
     * @param {EnrichmentConfig} config - Configuration options
     */
    constructor(config = {}) {
        this.config = { ...DEFAULT_CONFIG, ...config };
        this.stats = this.initializeStats();
        this.definitions = new Map();
        this.loadedModules = new Set();
    }

    /**
     * Initialize statistics tracking object
     * @returns {EnrichmentStats} Initial statistics object
     * @private
     */
    initializeStats() {
        return {
            totalClasses: 0,
            enrichedClasses: 0,
            unenrichedClasses: 0,
            definitionStats: {},
            processingTimeMs: 0,
            errors: [],
            warnings: []
        };
    }

    /**
     * Log a message with optional level
     * @param {string} message - The message to log
     * @param {string} level - Log level (info, warn, error, debug)
     * @private
     */
    log(message, level = 'info') {
        if (!this.config.enableLogging) return;
        
        // Skip debug messages unless debug logging is enabled
        if (level === 'debug' && !this.config.enableDebugLogging) return;
        
        const timestamp = new Date().toISOString();
        const prefix = `[DataExtractor ${timestamp}]`;
        
        switch (level) {
            case 'error':
                console.error(`${prefix} ERROR: ${message}`);
                this.stats.errors.push(message);
                break;
            case 'warn':
                console.warn(`${prefix} WARN: ${message}`);
                this.stats.warnings.push(message);
                break;
            case 'debug':
                console.log(`${prefix} DEBUG: ${message}`);
                break;
            default:
                console.log(`${prefix} ${message}`);
        }
    }

    /**
     * Dynamically discover and import all definition modules from the definitions directory
     * @returns {Promise<Map<string, DefinitionModule>>} Map of loaded definition modules
     * @private
     */
    async loadDefinitionModules() {
        const startTime = performance.now();
        this.log('Starting dynamic import of definition modules...');

        // List of known definition files - in a real environment, this could be
        // discovered dynamically through file system APIs or build-time generation
        // ORDER MATTERS: More specific definitions should come first to avoid false positives
        const definitionFiles = [
            'binocularsDefinition.js',   // Process binoculars/laser designators first (very specific)
            'launcherDefinition.js',     // Process launchers (most specific)
            'handgunDefinition.js',      // Process handguns before general weapons
            'attachmentDefinition.js',   // Process attachments before weapons (to avoid accessories being classified as weapons)
            'magazineDefinition.js',     // Process magazines before weapons
            'vestDefinition.js',         // Process vests
            'backpackDefinition.js',     // Process backpacks
            'nvgDefinition.js',          // Process NVGs
            'weaponDefinition.js'        // Process general weapons last (most broad)
        ];

        const loadedDefinitions = new Map();
        const loadPromises = [];

        for (const filename of definitionFiles) {
            const loadPromise = this.loadSingleDefinition(filename, loadedDefinitions);
            loadPromises.push(loadPromise);
        }

        // Wait for all definitions to load
        const results = await Promise.allSettled(loadPromises);
        
        // Process results and track failures
        let successCount = 0;
        let failureCount = 0;
        
        results.forEach((result, index) => {
            if (result.status === 'fulfilled') {
                successCount++;
            } else {
                failureCount++;
                this.log(`Failed to load ${definitionFiles[index]}: ${result.reason}`, 'error');
            }
        });

        const loadTime = performance.now() - startTime;
        this.log(`Loaded ${successCount} definition modules (${failureCount} failures) in ${loadTime.toFixed(2)}ms`);

        if (loadedDefinitions.size === 0) {
            throw new Error('No definition modules could be loaded. Cannot proceed with enrichment.');
        }

        this.definitions = loadedDefinitions;
        return loadedDefinitions;
    }

    /**
     * Load a single definition module with retry logic
     * @param {string} filename - The definition file to load
     * @param {Map<string, DefinitionModule>} loadedDefinitions - Map to store loaded definitions
     * @returns {Promise<void>}
     * @private
     */
    async loadSingleDefinition(filename, loadedDefinitions) {
        const moduleName = filename.replace('.js', '');
        let lastError = null;

        for (let attempt = 1; attempt <= this.config.maxRetries; attempt++) {
            try {
                this.log(`Loading ${filename} (attempt ${attempt}/${this.config.maxRetries})`);
                
                // Dynamic import with cache-busting for development
                const timestamp = Date.now();
                const modulePath = `./definitions/${filename}?v=${timestamp}`;
                
                let module;
                try {
                    // Try relative import first
                    module = await import(modulePath);
                } catch (relativeError) {
                    // Fallback to absolute path if running from different context
                    const absolutePath = new URL(`./definitions/${filename}?v=${timestamp}`, import.meta.url).href;
                    module = await import(absolutePath);
                }

                // Handle both default and named exports
                const definition = module.default || module;
                
                // Validate that the module exports the required functions
                if (!definition.isType || typeof definition.isType !== 'function') {
                    throw new Error(`Module ${filename} does not export a valid isType function`);
                }
                
                if (!definition.extract || typeof definition.extract !== 'function') {
                    throw new Error(`Module ${filename} does not export a valid extract function`);
                }

                // Create definition module object
                const definitionModule = {
                    name: moduleName,
                    type: definition.type || moduleName,
                    isType: definition.isType.bind(definition),
                    extract: definition.extract.bind(definition),
                    filePath: `./definitions/${filename}`
                };

                loadedDefinitions.set(moduleName, definitionModule);
                this.loadedModules.add(moduleName);
                
                // Initialize stats for this definition
                this.stats.definitionStats[moduleName] = {
                    matchCount: 0,
                    extractionCount: 0,
                    errors: 0,
                    averageExtractionTimeMs: 0,
                    totalExtractionTimeMs: 0
                };

                this.log(`Successfully loaded ${filename}`);
                return; // Success, exit retry loop
                
            } catch (error) {
                lastError = error;
                this.log(`Attempt ${attempt} failed for ${filename}: ${error.message}`, 'warn');
                
                if (attempt < this.config.maxRetries) {
                    // Wait before retry with exponential backoff
                    const delay = Math.min(100 * Math.pow(2, attempt - 1), 1000);
                    await new Promise(resolve => setTimeout(resolve, delay));
                }
            }
        }

        // All retries failed
        throw new Error(`Failed to load ${filename} after ${this.config.maxRetries} attempts. Last error: ${lastError.message}`);
    }

    /**
     * Apply all loaded definitions to a single class object
     * @param {string} className - The class name being processed
     * @param {Object} classObj - The resolved class object
     * @returns {Object} The enriched class object with _meta property
     * @private
     */
    async enrichSingleClass(className, classObj) {
        let metaData = null;
        let matchedDefinition = null;

        // Iterate through all loaded definitions to find a match
        for (const [definitionName, definition] of this.definitions) {
            try {
                const startTime = performance.now();
                
                // Test if this definition applies to the current class
                const isMatch = await definition.isType(classObj);
                
                if (isMatch) {
                    this.stats.definitionStats[definitionName].matchCount++;
                    
                    // Extract metadata using the matched definition
                    const extractionStartTime = performance.now();
                    metaData = await definition.extract(classObj);
                    const extractionTime = performance.now() - extractionStartTime;
                    
                    // Update extraction statistics
                    const defStats = this.stats.definitionStats[definitionName];
                    defStats.extractionCount++;
                    defStats.totalExtractionTimeMs += extractionTime;
                    defStats.averageExtractionTimeMs = defStats.totalExtractionTimeMs / defStats.extractionCount;
                    
                    matchedDefinition = definitionName;
                    
                    // Use first match (prioritize first match as specified)
                    if (this.config.logIndividualMatches === true) {
                        this.log(`Class ${className} matched definition: ${definitionName}`, 'debug');
                    }
                    break;
                }
                
            } catch (error) {
                this.stats.definitionStats[definitionName].errors++;
                this.log(`Error applying ${definitionName} to ${className}: ${error.message}`, 'error');
                
                if (!this.config.continueOnError) {
                    throw error;
                }
            }
        }

        // Create enriched class object
        const enrichedClass = { ...classObj };
        
        if (metaData) {
            enrichedClass._meta = {
                ...metaData,
                category: metaData.type, // Set category to match type for DataService compatibility
                extractedBy: matchedDefinition,
                extractedAt: new Date().toISOString()
            };
            this.stats.enrichedClasses++;
        } else {
            // No definition matched this class
            this.stats.unenrichedClasses++;
            this.log(`No definition matched class: ${className}`, 'debug');
            
            // Add minimal meta information for tracking
            enrichedClass._meta = {
                type: 'unknown',
                category: 'unknown', // Set category for consistency
                extractedBy: null,
                extractedAt: new Date().toISOString(),
                noMatchReason: 'No definition modules matched this class'
            };
        }

        return enrichedClass;
    }

    /**
     * Validate the input database format
     * @param {Map|Object} resolvedDb - The resolved database to validate
     * @returns {Map} Validated and normalized database
     * @private
     */
    validateInput(resolvedDb) {
        if (!resolvedDb) {
            throw new Error('Resolved database is null or undefined');
        }

        // Convert to Map if it's a regular object
        if (!(resolvedDb instanceof Map)) {
            if (typeof resolvedDb === 'object') {
                this.log('Converting object database to Map format');
                const mapDb = new Map();
                for (const [key, value] of Object.entries(resolvedDb)) {
                    mapDb.set(key, value);
                }
                return mapDb;
            } else {
                throw new Error('Resolved database must be a Map or Object');
            }
        }

        if (resolvedDb.size === 0) {
            this.log('Warning: Resolved database is empty', 'warn');
        }

        return resolvedDb;
    }

    /**
     * Generate a comprehensive enrichment report
     * @returns {Object} Detailed report of the enrichment process
     * @private
     */
    generateReport() {
        const report = {
            summary: {
                totalClasses: this.stats.totalClasses,
                enrichedClasses: this.stats.enrichedClasses,
                unenrichedClasses: this.stats.unenrichedClasses,
                enrichmentRate: this.stats.totalClasses > 0 
                    ? ((this.stats.enrichedClasses / this.stats.totalClasses) * 100).toFixed(2) + '%'
                    : '0%',
                processingTimeMs: this.stats.processingTimeMs,
                definitionsLoaded: this.definitions.size
            },
            definitionStats: { ...this.stats.definitionStats },
            errors: [...this.stats.errors],
            warnings: [...this.stats.warnings],
            loadedModules: [...this.loadedModules]
        };

        return report;
    }

    /**
     * Main enrichment function that orchestrates the entire process
     * @param {Map|Object} resolvedDb - Map of resolved classes from Phase 2
     * @returns {Promise<{enrichedDb: Map, report: Object}>} Enriched database and processing report
     */
    async enrich(resolvedDb) {
        const overallStartTime = performance.now();
        
        try {
            this.log('=== Starting DataExtractor enrichment process ===');
            
            // Reset stats for new enrichment run
            this.stats = this.initializeStats();
            
            // Validate and normalize input
            const validatedDb = this.validateInput(resolvedDb);
            this.stats.totalClasses = validatedDb.size;
            
            this.log(`Processing ${this.stats.totalClasses} classes for enrichment`);
            
            // Step 1: Load all definition modules
            await this.loadDefinitionModules();
            
            if (this.definitions.size === 0) {
                throw new Error('No definition modules were successfully loaded');
            }
            
            this.log(`Loaded ${this.definitions.size} definition modules: ${[...this.definitions.keys()].join(', ')}`);
            
            // Step 2: Process each class in the database
            const enrichedDb = new Map();
            const processingPromises = [];
            
            // Process classes in batches to avoid overwhelming the system
            const batchSize = 50;
            const classEntries = [...validatedDb.entries()];
            
            for (let i = 0; i < classEntries.length; i += batchSize) {
                const batch = classEntries.slice(i, i + batchSize);
                
                const batchPromises = batch.map(async ([className, classObj]) => {
                    try {
                        const enrichedClass = await this.enrichSingleClass(className, classObj);
                        enrichedDb.set(className, enrichedClass);
                    } catch (error) {
                        this.log(`Failed to enrich class ${className}: ${error.message}`, 'error');
                        
                        if (!this.config.continueOnError) {
                            throw error;
                        }
                        
                        // Add class with error metadata
                        enrichedDb.set(className, {
                            ...classObj,
                            _meta: {
                                type: 'error',
                                extractedBy: null,
                                extractedAt: new Date().toISOString(),
                                error: error.message
                            }
                        });
                    }
                });
                
                // Process batch
                await Promise.all(batchPromises);
                
                // Log progress
                if (this.config.logBatchProgress === true) {
                    const processed = Math.min(i + batchSize, classEntries.length);
                    this.log(`Processed batch: ${processed}/${classEntries.length} classes (${((processed / classEntries.length) * 100).toFixed(1)}%)`);
                }
            }
            
            // Step 3: Calculate final statistics
            this.stats.processingTimeMs = performance.now() - overallStartTime;
            
            // Generate comprehensive report
            const report = this.generateReport();
            
            this.log('=== Enrichment process completed ===');
            this.log(`Enriched ${this.stats.enrichedClasses}/${this.stats.totalClasses} classes in ${this.stats.processingTimeMs.toFixed(2)}ms`);
            this.log(`Enrichment rate: ${report.summary.enrichmentRate}`);
            
            if (this.stats.errors.length > 0) {
                this.log(`Process completed with ${this.stats.errors.length} errors`, 'warn');
            }
            
            return {
                enrichedDb,
                report
            };
            
        } catch (error) {
            this.stats.processingTimeMs = performance.now() - overallStartTime;
            this.log(`Enrichment process failed: ${error.message}`, 'error');
            
            throw new Error(`DataExtractor enrichment failed: ${error.message}`);
        }
    }

    /**
     * Get current enrichment statistics
     * @returns {EnrichmentStats} Current statistics
     */
    getStats() {
        return { ...this.stats };
    }

    /**
     * Get loaded definition modules
     * @returns {Map<string, DefinitionModule>} Map of loaded definitions
     */
    getDefinitions() {
        return new Map(this.definitions);
    }

    /**
     * Clear all loaded definitions and reset state
     */
    reset() {
        this.definitions.clear();
        this.loadedModules.clear();
        this.stats = this.initializeStats();
        this.log('DataExtractor state reset');
    }
}

/**
 * Convenience function to create a new DataExtractor and run enrichment
 * @param {Map|Object} resolvedDb - Map of resolved classes from Phase 2
 * @param {EnrichmentConfig} config - Optional configuration
 * @returns {Promise<{enrichedDb: Map, report: Object}>} Enriched database and report
 */
export async function enrich(resolvedDb, config = {}) {
    const extractor = new DataExtractor(config);
    return await extractor.enrich(resolvedDb);
}

/**
 * Export the DataExtractor class for advanced usage
 */
export { DataExtractor };

/**
 * Export configuration defaults
 */
export { DEFAULT_CONFIG };