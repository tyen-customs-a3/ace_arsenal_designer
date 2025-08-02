/**
 * Production-Optimized DataExtractor
 * 
 * This module extends the base DataExtractor with production-ready optimizations:
 * - Reduced logging verbosity
 * - Enhanced performance monitoring
 * - Better error categorization
 * - Configurable batch processing
 * - Memory-efficient operations
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

import { DataExtractor as BaseDataExtractor, DEFAULT_CONFIG } from './dataExtractor.js';
import { ProductionLogger, LogLevel, ProductionMetrics } from './productionConfig.js';

/**
 * Production configuration extensions
 */
const PRODUCTION_DEFAULT_CONFIG = {
    ...DEFAULT_CONFIG,
    // Production-specific settings
    batchSize: 100,                    // Larger batches for better performance
    logBatchProgress: false,           // Disable verbose batch logging
    logIndividualMatches: false,       // Disable per-class match logging
    suppressWarningTypes: [            // Suppress common warnings
        'no_definition_matched'
    ],
    logLevel: LogLevel.WARN,          // Only warnings and errors
    memoryOptimization: true,         // Enable memory optimizations
    collectDetailedStats: false       // Disable detailed stats collection
};

/**
 * Production-optimized DataExtractor
 */
export class ProductionDataExtractor extends BaseDataExtractor {
    /**
     * Create a production-optimized DataExtractor instance
     * @param {Object} config - Configuration options
     */
    constructor(config = {}) {
        const mergedConfig = { ...PRODUCTION_DEFAULT_CONFIG, ...config };
        super(mergedConfig);
        
        // Initialize production logging and metrics
        this.productionLogger = new ProductionLogger(mergedConfig);
        this.metrics = new ProductionMetrics();
        this.processedBatches = 0;
        this.suppressedWarnings = new Set();
    }

    /**
     * Production-optimized logging
     * @param {string} message - The message to log
     * @param {string} level - Log level
     * @param {string} messageType - Type of message for categorization
     * @param {Object} context - Additional context
     * @private
     */
    log(message, level = 'info', messageType = null, context = {}) {
        // Convert string levels to numeric for consistency
        const numericLevel = typeof level === 'string' ? LogLevel[level.toUpperCase()] : level;
        
        // Use production logger instead of console logging
        this.productionLogger.log(message, numericLevel, messageType, context);
        
        // Still maintain compatibility with base class stats
        if (numericLevel === LogLevel.ERROR) {
            this.stats.errors.push(message);
        } else if (numericLevel === LogLevel.WARN) {
            this.stats.warnings.push(message);
        }
    }

    /**
     * Enhanced batch processing with production optimizations
     * @param {Map} validatedDb - The validated database
     * @returns {Promise<Map>} Enriched database
     * @private
     */
    async processClassesBatch(validatedDb) {
        this.metrics.startTimer('batchProcessing');
        
        const enrichedDb = new Map();
        const classEntries = [...validatedDb.entries()];
        const batchSize = this.config.batchSize || 50;
        
        // Only log batch progress if explicitly enabled
        if (this.config.logBatchProgress) {
            this.log(`Processing ${classEntries.length} classes in batches of ${batchSize}`, LogLevel.INFO);
        }

        for (let i = 0; i < classEntries.length; i += batchSize) {
            const batch = classEntries.slice(i, i + batchSize);
            
            // Process batch with error isolation
            const batchPromises = batch.map(async ([className, classObj]) => {
                try {
                    const enrichedClass = await this.enrichSingleClass(className, classObj);
                    return { className, enrichedClass, success: true };
                } catch (error) {
                    return { className, classObj, error, success: false };
                }
            });
            
            const results = await Promise.all(batchPromises);
            
            // Process results
            for (const result of results) {
                if (result.success) {
                    enrichedDb.set(result.className, result.enrichedClass);
                } else {
                    this.log(
                        `Failed to enrich class ${result.className}`, 
                        LogLevel.ERROR, 
                        'enrichment_failure',
                        { className: result.className, error: result.error.message }
                    );
                    
                    if (!this.config.continueOnError) {
                        throw result.error;
                    }
                    
                    // Add class with error metadata
                    enrichedDb.set(result.className, {
                        ...result.classObj,
                        _meta: {
                            type: 'error',
                            extractedBy: null,
                            extractedAt: new Date().toISOString(),
                            error: result.error.message
                        }
                    });
                }
            }
            
            this.processedBatches++;
            
            // Only log progress if enabled and not too frequent
            if (this.config.logBatchProgress && this.processedBatches % 10 === 0) {
                const processed = Math.min(i + batchSize, classEntries.length);
                const percentage = ((processed / classEntries.length) * 100).toFixed(1);
                this.log(
                    `Batch progress: ${processed}/${classEntries.length} (${percentage}%)`,
                    LogLevel.INFO,
                    'batch_progress'
                );
            }
            
            // Memory optimization: periodic garbage collection hint
            if (this.config.memoryOptimization && this.processedBatches % 20 === 0) {
                if (global.gc) {
                    global.gc();
                }
            }
        }
        
        this.metrics.endTimer('batchProcessing');
        return enrichedDb;
    }

    /**
     * Enhanced single class enrichment with production optimizations
     * @param {string} className - The class name
     * @param {Object} classObj - The class object
     * @returns {Promise<Object>} Enriched class object
     * @private
     */
    async enrichSingleClass(className, classObj) {
        const startTime = performance.now();
        let metaData = null;
        let matchedDefinition = null;

        // Iterate through definitions to find a match
        for (const [definitionName, definition] of this.definitions) {
            try {
                const isMatch = await definition.isType(classObj);
                
                if (isMatch) {
                    this.stats.definitionStats[definitionName].matchCount++;
                    
                    const extractionStartTime = performance.now();
                    metaData = await definition.extract(classObj);
                    const extractionTime = performance.now() - extractionStartTime;
                    
                    // Update statistics
                    const defStats = this.stats.definitionStats[definitionName];
                    defStats.extractionCount++;
                    defStats.totalExtractionTimeMs += extractionTime;
                    defStats.averageExtractionTimeMs = defStats.totalExtractionTimeMs / defStats.extractionCount;
                    
                    matchedDefinition = definitionName;
                    
                    // Only log individual matches if explicitly enabled
                    if (this.config.logIndividualMatches) {
                        this.log(
                            `Class ${className} matched definition: ${definitionName}`,
                            LogLevel.DEBUG,
                            'class_match',
                            { className, definitionName, extractionTime }
                        );
                    }
                    
                    break; // First match wins
                }
                
            } catch (error) {
                this.stats.definitionStats[definitionName].errors++;
                this.log(
                    `Error applying ${definitionName} to ${className}`,
                    LogLevel.ERROR,
                    'definition_error',
                    { className, definitionName, error: error.message }
                );
                
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
                extractedBy: matchedDefinition,
                extractedAt: new Date().toISOString()
            };
            this.stats.enrichedClasses++;
        } else {
            // Handle unenriched classes with reduced logging
            this.stats.unenrichedClasses++;
            
            // Only log if warning type is not suppressed
            if (!this.config.suppressWarningTypes?.includes('no_definition_matched')) {
                this.log(
                    `No definition matched class: ${className}`,
                    LogLevel.WARN,
                    'no_definition_matched',
                    { className, fullPath: classObj.fullPath }
                );
            } else {
                this.suppressedWarnings.add(className);
            }
            
            // Add minimal meta information
            enrichedClass._meta = {
                type: 'unknown',
                extractedBy: null,
                extractedAt: new Date().toISOString(),
                noMatchReason: 'No definition modules matched this class'
            };
        }

        return enrichedClass;
    }

    /**
     * Production-optimized main enrichment function
     * @param {Map|Object} resolvedDb - Resolved database from Phase 2
     * @returns {Promise<Object>} Enriched database and comprehensive report
     */
    async enrich(resolvedDb) {
        this.metrics.startTimer('totalEnrichment');
        const overallStartTime = performance.now();
        
        try {
            this.log('Starting production DataExtractor enrichment', LogLevel.INFO, 'enrichment_start');
            
            // Reset state
            this.stats = this.initializeStats();
            this.processedBatches = 0;
            this.suppressedWarnings.clear();
            this.metrics.reset();
            
            // Validate input
            const validatedDb = this.validateInput(resolvedDb);
            this.stats.totalClasses = validatedDb.size;
            
            this.log(
                `Processing ${this.stats.totalClasses} classes for enrichment`,
                LogLevel.INFO,
                'enrichment_info',
                { totalClasses: this.stats.totalClasses }
            );
            
            // Load definitions
            this.metrics.startTimer('definitionLoading');
            await this.loadDefinitionModules();
            this.metrics.endTimer('definitionLoading');
            
            if (this.definitions.size === 0) {
                throw new Error('No definition modules were successfully loaded');
            }
            
            this.log(
                `Loaded ${this.definitions.size} definition modules`,
                LogLevel.INFO,
                'definitions_loaded',
                { 
                    definitionCount: this.definitions.size,
                    loadedModules: [...this.definitions.keys()]
                }
            );
            
            // Process classes with optimized batching
            const enrichedDb = await this.processClassesBatch(validatedDb);
            
            // Calculate final statistics
            this.stats.processingTimeMs = performance.now() - overallStartTime;
            this.metrics.endTimer('totalEnrichment');
            this.metrics.recordEnrichmentStats(this.stats);
            this.metrics.recordPerformanceMetrics(this.stats.totalClasses, this.stats.processingTimeMs);
            
            // Generate production report
            const report = this.generateProductionReport();
            
            this.log(
                'Enrichment process completed',
                LogLevel.INFO,
                'enrichment_complete',
                {
                    enrichedClasses: this.stats.enrichedClasses,
                    totalClasses: this.stats.totalClasses,
                    processingTimeMs: this.stats.processingTimeMs.toFixed(2),
                    enrichmentRate: report.summary.enrichmentRate
                }
            );
            
            // Log any critical issues
            if (this.stats.errors.length > 0) {
                this.log(
                    `Process completed with ${this.stats.errors.length} errors`,
                    LogLevel.WARN,
                    'enrichment_errors',
                    { errorCount: this.stats.errors.length }
                );
            }
            
            return {
                enrichedDb,
                report,
                metrics: this.metrics.generateMetricsReport(),
                logSummary: this.productionLogger.generateLogSummary()
            };
            
        } catch (error) {
            this.stats.processingTimeMs = performance.now() - overallStartTime;
            this.metrics.endTimer('totalEnrichment');
            
            this.log(
                `Enrichment process failed: ${error.message}`,
                LogLevel.ERROR,
                'enrichment_failure',
                { error: error.message, stack: error.stack }
            );
            
            throw new Error(`Production DataExtractor enrichment failed: ${error.message}`);
        }
    }

    /**
     * Generate production-ready report with enhanced metrics
     * @returns {Object} Comprehensive production report
     * @private
     */
    generateProductionReport() {
        const baseReport = this.generateReport();
        
        // Add production-specific metrics
        const productionMetrics = {
            suppressedWarnings: this.suppressedWarnings.size,
            batchesProcessed: this.processedBatches,
            averageBatchTime: this.metrics.durations.get('batchProcessing') / (this.processedBatches || 1),
            memoryEfficient: this.config.memoryOptimization,
            logLevel: this.config.logLevel,
            productionOptimized: true
        };

        return {
            ...baseReport,
            productionMetrics,
            recommendations: this.generateRecommendations()
        };
    }

    /**
     * Generate recommendations for production optimization
     * @returns {Array<string>} List of recommendations
     * @private
     */
    generateRecommendations() {
        const recommendations = [];
        const enrichmentRate = (this.stats.enrichedClasses / this.stats.totalClasses) * 100;
        const avgTimePerClass = this.stats.processingTimeMs / this.stats.totalClasses;
        
        if (enrichmentRate < 50) {
            recommendations.push('LOW_ENRICHMENT_RATE: Consider adding more definition modules or improving existing ones');
        }
        
        if (avgTimePerClass > 10) {
            recommendations.push('SLOW_PROCESSING: Consider increasing batch size or optimizing definition modules');
        }
        
        if (this.stats.errors.length > this.stats.totalClasses * 0.05) {
            recommendations.push('HIGH_ERROR_RATE: Review error logs and improve error handling');
        }
        
        if (this.suppressedWarnings.size > this.stats.totalClasses * 0.1) {
            recommendations.push('HIGH_WARNING_SUPPRESSION: Consider reviewing suppressed warning types');
        }
        
        return recommendations;
    }

    /**
     * Reset state for reuse
     */
    reset() {
        super.reset();
        this.productionLogger?.reset();
        this.metrics?.reset();
        this.processedBatches = 0;
        this.suppressedWarnings.clear();
    }
}

/**
 * Factory function for creating production-ready extractors
 * @param {string} environment - Environment type (PRODUCTION, DEVELOPMENT, DEBUG)
 * @param {Object} customConfig - Custom configuration overrides
 * @returns {ProductionDataExtractor} Configured extractor instance
 */
export function createProductionExtractor(environment = 'PRODUCTION', customConfig = {}) {
    const configs = {
        PRODUCTION: {
            ...PRODUCTION_DEFAULT_CONFIG,
            logLevel: LogLevel.WARN,
            batchSize: 100,
            logBatchProgress: false,
            logIndividualMatches: false,
            suppressWarningTypes: ['no_definition_matched']
        },
        DEVELOPMENT: {
            ...PRODUCTION_DEFAULT_CONFIG,
            logLevel: LogLevel.INFO,
            batchSize: 25,
            logBatchProgress: true,
            logIndividualMatches: false,
            suppressWarningTypes: []
        },
        DEBUG: {
            ...PRODUCTION_DEFAULT_CONFIG,
            logLevel: LogLevel.VERBOSE,
            batchSize: 10,
            logBatchProgress: true,
            logIndividualMatches: true,
            suppressWarningTypes: [],
            continueOnError: false
        }
    };
    
    const baseConfig = configs[environment.toUpperCase()] || configs.PRODUCTION;
    const finalConfig = { ...baseConfig, ...customConfig };
    
    return new ProductionDataExtractor(finalConfig);
}

/**
 * Convenience function for production enrichment
 * @param {Map|Object} resolvedDb - Resolved database
 * @param {Object} config - Optional configuration
 * @returns {Promise<Object>} Enrichment results
 */
export async function enrichProduction(resolvedDb, config = {}) {
    const extractor = createProductionExtractor('PRODUCTION', config);
    return await extractor.enrich(resolvedDb);
}

// Export the production-optimized class as default
export default ProductionDataExtractor;