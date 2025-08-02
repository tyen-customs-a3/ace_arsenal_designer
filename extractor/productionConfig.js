/**
 * Production Configuration for DataExtractor
 * 
 * This module provides production-ready configuration and logging optimizations
 * for the DataExtractor to reduce verbosity and improve performance while
 * maintaining essential error tracking and monitoring capabilities.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Production logging levels
 */
export const LogLevel = {
    ERROR: 0,    // Only critical errors
    WARN: 1,     // Warnings and errors
    INFO: 2,     // Important information, warnings, and errors
    DEBUG: 3,    // All logging including debug information
    VERBOSE: 4   // Everything including batch progress
};

/**
 * Production-optimized configuration presets
 */
export const ProductionConfigs = {
    /**
     * Production environment - minimal logging, maximum performance
     */
    PRODUCTION: {
        enableLogging: true,
        enableDebugLogging: false,
        continueOnError: true,
        maxRetries: 3,
        trackPerformance: true,
        logLevel: LogLevel.WARN,
        batchSize: 100,              // Larger batches for better performance
        logBatchProgress: false,     // Disable verbose batch logging
        logIndividualMatches: false, // Disable per-class match logging
        suppressWarningTypes: [      // Suppress common, non-critical warnings
            'no_definition_matched'
        ]
    },

    /**
     * Development environment - moderate logging for debugging
     */
    DEVELOPMENT: {
        enableLogging: true,
        enableDebugLogging: true,
        continueOnError: true,
        maxRetries: 1,
        trackPerformance: true,
        logLevel: LogLevel.INFO,
        batchSize: 25,
        logBatchProgress: true,
        logIndividualMatches: false,
        suppressWarningTypes: []
    },

    /**
     * Debug environment - maximum logging for troubleshooting
     */
    DEBUG: {
        enableLogging: true,
        enableDebugLogging: true,
        continueOnError: false,
        maxRetries: 1,
        trackPerformance: true,
        logLevel: LogLevel.VERBOSE,
        batchSize: 10,
        logBatchProgress: true,
        logIndividualMatches: true,
        suppressWarningTypes: []
    },

    /**
     * Testing environment - structured logging for analysis
     */
    TESTING: {
        enableLogging: true,
        enableDebugLogging: false,
        continueOnError: true,
        maxRetries: 1,
        trackPerformance: true,
        logLevel: LogLevel.INFO,
        batchSize: 50,
        logBatchProgress: false,
        logIndividualMatches: false,
        suppressWarningTypes: [],
        collectDetailedStats: true
    }
};

/**
 * Enhanced logging system with production optimizations
 */
export class ProductionLogger {
    constructor(config = ProductionConfigs.PRODUCTION) {
        this.config = config;
        this.logBuffer = [];
        this.stats = {
            errors: [],
            warnings: [],
            info: [],
            totalMessages: 0,
            suppressedMessages: 0
        };
    }

    /**
     * Check if a message should be logged based on level and configuration
     */
    shouldLog(level, messageType = null) {
        if (!this.config.enableLogging) return false;
        
        // Check log level threshold
        const levelValue = typeof level === 'string' ? LogLevel[level.toUpperCase()] : level;
        if (levelValue > this.config.logLevel) return false;
        
        // Check if this warning type should be suppressed
        if (level === LogLevel.WARN && messageType && 
            this.config.suppressWarningTypes?.includes(messageType)) {
            this.stats.suppressedMessages++;
            return false;
        }
        
        return true;
    }

    /**
     * Enhanced logging method with categorization and filtering
     */
    log(message, level = LogLevel.INFO, messageType = null, metadata = {}) {
        if (!this.shouldLog(level, messageType)) return;
        
        const timestamp = new Date().toISOString();
        const logEntry = {
            timestamp,
            level,
            messageType,
            message,
            metadata
        };
        
        this.stats.totalMessages++;
        
        // Store in appropriate category
        switch (level) {
            case LogLevel.ERROR:
                this.stats.errors.push(logEntry);
                console.error(`[ERROR ${timestamp}] ${message}`, metadata);
                break;
            case LogLevel.WARN:
                this.stats.warnings.push(logEntry);
                console.warn(`[WARN ${timestamp}] ${message}`, metadata);
                break;
            case LogLevel.INFO:
                this.stats.info.push(logEntry);
                console.log(`[INFO ${timestamp}] ${message}`, metadata);
                break;
            case LogLevel.DEBUG:
                console.log(`[DEBUG ${timestamp}] ${message}`, metadata);
                break;
            case LogLevel.VERBOSE:
                console.log(`[VERBOSE ${timestamp}] ${message}`, metadata);
                break;
        }
        
        // Buffer management for memory efficiency
        this.logBuffer.push(logEntry);
        if (this.logBuffer.length > 1000) {
            this.logBuffer = this.logBuffer.slice(-500); // Keep last 500 entries
        }
    }

    /**
     * Log structured error with context
     */
    error(message, error = null, context = {}) {
        const metadata = {
            ...context,
            ...(error && {
                errorName: error.name,
                errorStack: error.stack?.split('\n').slice(0, 3).join('\n')
            })
        };
        this.log(message, LogLevel.ERROR, 'error', metadata);
    }

    /**
     * Log categorized warning
     */
    warn(message, warningType = 'general', context = {}) {
        this.log(message, LogLevel.WARN, warningType, context);
    }

    /**
     * Log informational message
     */
    info(message, context = {}) {
        this.log(message, LogLevel.INFO, 'info', context);
    }

    /**
     * Log debug information
     */
    debug(message, context = {}) {
        this.log(message, LogLevel.DEBUG, 'debug', context);
    }

    /**
     * Log verbose details
     */
    verbose(message, context = {}) {
        this.log(message, LogLevel.VERBOSE, 'verbose', context);
    }

    /**
     * Generate production-ready log summary
     */
    generateLogSummary() {
        return {
            summary: {
                totalMessages: this.stats.totalMessages,
                suppressedMessages: this.stats.suppressedMessages,
                errorCount: this.stats.errors.length,
                warningCount: this.stats.warnings.length,
                infoCount: this.stats.info.length
            },
            errors: this.stats.errors,
            warnings: this.stats.warnings,
            recentLogs: this.logBuffer.slice(-10) // Last 10 log entries
        };
    }

    /**
     * Clear log history and reset stats
     */
    reset() {
        this.logBuffer = [];
        this.stats = {
            errors: [],
            warnings: [],
            info: [],
            totalMessages: 0,
            suppressedMessages: 0
        };
    }
}

/**
 * Production metrics collector for monitoring enrichment performance
 */
export class ProductionMetrics {
    constructor() {
        this.reset();
    }

    /**
     * Start timing an operation
     */
    startTimer(operationName) {
        this.timers.set(operationName, performance.now());
    }

    /**
     * End timing and record duration
     */
    endTimer(operationName) {
        const startTime = this.timers.get(operationName);
        if (startTime) {
            const duration = performance.now() - startTime;
            this.durations.set(operationName, duration);
            this.timers.delete(operationName);
            return duration;
        }
        return 0;
    }

    /**
     * Record enrichment statistics
     */
    recordEnrichmentStats(stats) {
        this.enrichmentStats = {
            ...stats,
            recordedAt: new Date().toISOString()
        };
    }

    /**
     * Record performance metrics
     */
    recordPerformanceMetrics(totalClasses, processingTime) {
        this.performanceMetrics = {
            totalClasses,
            processingTimeMs: processingTime,
            averageTimePerClass: processingTime / totalClasses,
            classesPerSecond: (totalClasses / processingTime) * 1000,
            recordedAt: new Date().toISOString()
        };
    }

    /**
     * Generate production metrics report
     */
    generateMetricsReport() {
        return {
            timings: Object.fromEntries(this.durations),
            enrichment: this.enrichmentStats,
            performance: this.performanceMetrics,
            memoryUsage: this.getMemoryUsage()
        };
    }

    /**
     * Get memory usage information (Node.js environment)
     */
    getMemoryUsage() {
        if (typeof process !== 'undefined' && process.memoryUsage) {
            const usage = process.memoryUsage();
            return {
                heapUsed: Math.round(usage.heapUsed / 1024 / 1024) + ' MB',
                heapTotal: Math.round(usage.heapTotal / 1024 / 1024) + ' MB',
                external: Math.round(usage.external / 1024 / 1024) + ' MB'
            };
        }
        return { note: 'Memory usage not available in this environment' };
    }

    /**
     * Reset all metrics
     */
    reset() {
        this.timers = new Map();
        this.durations = new Map();
        this.enrichmentStats = null;
        this.performanceMetrics = null;
    }
}

/**
 * Factory function to create production-ready DataExtractor instance
 */
export function createProductionExtractor(environment = 'PRODUCTION', customConfig = {}) {
    const baseConfig = ProductionConfigs[environment.toUpperCase()] || ProductionConfigs.PRODUCTION;
    const config = { ...baseConfig, ...customConfig };
    
    // Note: This would need to be imported dynamically in actual usage
    // import { DataExtractor } from './dataExtractor.js';
    // return new DataExtractor(config);
    
    return config; // Return config for now, to be used with DataExtractor
}

/**
 * Utility function to analyze enrichment results for production monitoring
 */
export function analyzeEnrichmentResults(enrichedDb, report, logger) {
    const analysis = {
        qualityMetrics: {
            enrichmentRate: parseFloat(report.summary.enrichmentRate),
            errorRate: (report.errors.length / report.summary.totalClasses) * 100,
            warningRate: (report.warnings.length / report.summary.totalClasses) * 100
        },
        performanceMetrics: {
            avgProcessingTime: report.summary.processingTimeMs / report.summary.totalClasses,
            classesPerSecond: (report.summary.totalClasses / report.summary.processingTimeMs) * 1000
        },
        recommendations: []
    };

    // Generate recommendations based on metrics
    if (analysis.qualityMetrics.enrichmentRate < 50) {
        analysis.recommendations.push('LOW_ENRICHMENT_RATE: Consider adding more definition modules');
    }
    
    if (analysis.qualityMetrics.errorRate > 5) {
        analysis.recommendations.push('HIGH_ERROR_RATE: Review error logs and improve error handling');
    }
    
    if (analysis.performanceMetrics.avgProcessingTime > 10) {
        analysis.recommendations.push('SLOW_PROCESSING: Consider optimizing definition modules or increasing batch size');
    }

    if (logger) {
        logger.info('Enrichment analysis completed', analysis);
        
        if (analysis.recommendations.length > 0) {
            logger.warn('Performance recommendations available', {
                recommendationCount: analysis.recommendations.length,
                recommendations: analysis.recommendations
            });
        }
    }

    return analysis;
}