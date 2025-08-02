/**
 * DataService - Main orchestrator for the parallel config file parsing, inheritance resolution, and data enrichment workflow
 * 
 * This service manages the entire data loading pipeline by coordinating:
 * - File discovery of config.cpp files
 * - Worker pool management for parallel parsing
 * - Result aggregation and error handling
 * - Inheritance resolution using the InheritanceResolver
 * - Data enrichment using the DataExtractor to add metadata
 * 
 * The DataService implements a three-stage pipeline:
 * 1. PARSE: Parallel worker-based parsing of config files into AST
 * 2. RESOLVE: Inheritance resolution to flatten class hierarchies
 * 3. ENRICH: Metadata extraction and enrichment using definition modules
 * 
 * The final result is a fully enriched class database where all inheritance 
 * has been flattened and classes contain _meta properties with extracted metadata.
 * 
 * @author DataService Implementation for ACE3 Arsenal Testbed
 */

import { resolve as resolveInheritance } from '../parser/inheritanceResolver.js';
import { enrich as enrichDatabase } from '../extractor/dataExtractor.js';
import { ConfigClassifier } from './ConfigClassifier.js';
import { SemanticConflictResolver } from './SemanticConflictResolver.js';

export class DataService {
    /**
     * Creates a new DataService instance
     * @param {Object} options - Configuration options
     * @param {number} options.maxWorkers - Maximum number of worker threads (default: 4)
     * @param {number} options.workerTimeout - Worker timeout in milliseconds (default: 30000)
     */
    constructor(options = {}) {
        this.maxWorkers = options.maxWorkers || 4;
        this.workerTimeout = options.workerTimeout || 30000; // 30 seconds
        this.workers = [];
        this.activeJobs = new Map();
        this.jobQueue = [];
        this.jobIdCounter = 0;
        this.isInitialized = false;
        this.rawData = null;
        this.resolvedData = null;
        this.enrichedData = null;
        this.enrichmentReport = null;
        
        // Initialize semantic analysis components
        this._classifier = null;
        this._resolver = null;
        
        // Bind methods to preserve context
        this._handleWorkerMessage = this._handleWorkerMessage.bind(this);
        this._handleWorkerError = this._handleWorkerError.bind(this);
    }

    /**
     * Initialize the DataService and begin the parsing, inheritance resolution, and enrichment workflow
     * @returns {Promise<Map<string, Object>>} Promise that resolves with the enriched class database (Map of className -> enriched class object)
     * @throws {Error} If initialization fails, no config files are found, inheritance resolution fails, or enrichment fails
     */
    async initialize() {
        if (this.isInitialized && this.enrichedData) {
            return this.enrichedData;
        }
        
        try {
            
            // Run the parsing stage to get raw AST data
            const rawData = await this._runParsingStage();
            
            // Run the inheritance resolution stage to get fully resolved class database
            const resolvedData = await this._runInheritanceResolutionStage(rawData);
            
            // Run the enrichment stage to add metadata to resolved classes
            const enrichmentResult = await this._runEnrichmentStage(resolvedData);
            
            // Store all data stages
            this.rawData = rawData;
            this.resolvedData = resolvedData;
            this.enrichedData = enrichmentResult.enrichedDb;
            this.enrichmentReport = enrichmentResult.report;
            this.isInitialized = true;
            
            return this.enrichedData;
            
        } catch (error) {
            console.error('DataService: Initialization failed:', error);
            this.isInitialized = false;
            this.rawData = null;
            this.resolvedData = null;
            this.enrichedData = null;
            this.enrichmentReport = null;
            throw new Error(`DataService initialization failed: ${error.message}`);
        }
    }

    /**
     * Private method that handles the file discovery, worker management, and parsing aggregation
     * @returns {Promise<Object>} Promise that resolves with a single aggregated class hierarchy object
     * @private
     */
    async _runParsingStage() {
        try {
            // Phase 1: File Discovery
            const configFiles = this._getConfigFilePaths();
            
            if (configFiles.length === 0) {
                throw new Error('No config files found to parse');
            }
            
            // Phase 2: Worker Pool Initialization
            await this._initializeWorkerPool();
            
            // Phase 3: Dispatch and Aggregate
            const startTime = performance.now();
            
            const results = await this._processAllFiles(configFiles);
            
            const endTime = performance.now();
            const duration = ((endTime - startTime) / 1000).toFixed(2);
            
            // Phase 4: Cleanup
            this._terminateWorkerPool();
            
            return results;
            
        } catch (error) {
            // Ensure cleanup on error
            this._terminateWorkerPool();
            throw error;
        }
    }

    /**
     * Private method that handles inheritance resolution using the InheritanceResolver
     * @param {Object} rawAst - The raw aggregated AST from the parsing stage
     * @returns {Promise<Map<string, Object>>} Promise that resolves with a fully resolved class database
     * @private
     */
    async _runInheritanceResolutionStage(rawAst) {
        try {
            const startTime = performance.now();
            
            // Use the InheritanceResolver to resolve all class inheritance
            const resolvedClasses = resolveInheritance(rawAst);
            
            const endTime = performance.now();
            const duration = ((endTime - startTime) / 1000).toFixed(2);
            
            
            return resolvedClasses;
            
        } catch (error) {
            console.error('DataService: Inheritance resolution failed:', error);
            throw new Error(`Inheritance resolution failed: ${error.message}`);
        }
    }

    /**
     * Private method that handles data enrichment using the DataExtractor
     * @param {Map<string, Object>} resolvedDb - The resolved class database from inheritance resolution
     * @returns {Promise<{enrichedDb: Map, report: Object}>} Promise that resolves with enriched database and report
     * @private
     */
    async _runEnrichmentStage(resolvedDb) {
        try {
            const startTime = performance.now();
            
            // Configure enrichment to continue on errors for robustness
            const enrichmentConfig = {
                enableLogging: true,
                continueOnError: true,
                maxRetries: 3,
                trackPerformance: true
            };
            
            // Use the DataExtractor to enrich all resolved classes
            const enrichmentResult = await enrichDatabase(resolvedDb, enrichmentConfig);
            
            const endTime = performance.now();
            const duration = ((endTime - startTime) / 1000).toFixed(2);
            
            
            // Log any enrichment warnings or errors
            if (enrichmentResult.report.errors.length > 0) {
                console.warn(`DataService: Enrichment completed with ${enrichmentResult.report.errors.length} errors`);
            }
            
            if (enrichmentResult.report.warnings.length > 0) {
                console.warn(`DataService: Enrichment completed with ${enrichmentResult.report.warnings.length} warnings`);
            }
            
            return enrichmentResult;
            
        } catch (error) {
            console.error('DataService: Data enrichment failed:', error);
            throw new Error(`Data enrichment failed: ${error.message}`);
        }
    }

    /**
     * Get the list of config file paths to parse
     * Currently uses a hardcoded list based on the existing loader.js
     * @returns {Array<{path: string, mod: string}>} Array of config file specifications
     * @private
     */
    _getConfigFilePaths() {
        // TODO: In future phases, this could be enhanced to auto-discover files
        // For now, use the hardcoded list from the existing loader.js
        // Note: Convert relative paths to absolute URLs for worker compatibility
        const basePath = this._getBasePath();
        const relativePaths = [
            // SFP mod configs
            { path: 'data/addons/sfp/ak5/config.cpp', mod: 'SFP' },
            { path: 'data/addons/sfp/attachments/config.cpp', mod: 'SFP' },
            
            // PTV mod configs
            { path: 'data/addons/ptv/weapons/config.cpp', mod: 'PTV' },
            { path: 'data/addons/ptv/weapons_cfg/config.cpp', mod: 'PTV' },
            { path: 'data/addons/ptv/amf/sig552/config.cpp', mod: 'PTV' },
            { path: 'data/addons/ptv/throwables/config.cpp', mod: 'PTV' },
            
            // SNS mod configs
            { path: 'data/addons/sns/sns_vehicles/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/sns_dutch/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/sns_dutch_cfg/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/sns_french/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/simc_uaf_67/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/simc_uaf_67_cfg/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/simc_nv_67_cfg/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/simc_uaf_68_cfg/config.cpp', mod: 'SNS' },
            { path: 'data/addons/sns/simc_mc_67_cfg/config.cpp', mod: 'SNS' }
        ];
        
        // Convert to absolute URLs for worker compatibility
        return relativePaths.map(item => ({
            ...item,
            path: basePath + item.path
        }));
    }

    /**
     * Get the base path for resolving file URLs
     * This ensures worker threads can access files using absolute URLs
     * @returns {string} The base URL path
     * @private
     */
    _getBasePath() {
        if (typeof window !== 'undefined') {
            // Browser environment - construct base path from current location
            const location = window.location;
            const pathWithoutFile = location.pathname.replace(/\/[^/]*$/, '/');
            return location.origin + pathWithoutFile;
        } else {
            // Node.js or other environment - return relative path
            return '';
        }
    }

    /**
     * Initialize the worker pool with the specified number of workers
     * @returns {Promise<void>} Promise that resolves when all workers are ready
     * @private
     */
    async _initializeWorkerPool() {
        this.workers = [];
        this.activeJobs.clear();
        
        const workerPromises = [];
        
        for (let i = 0; i < this.maxWorkers; i++) {
            const workerPromise = this._createWorker(i);
            workerPromises.push(workerPromise);
        }
        
        // Wait for all workers to be created
        this.workers = await Promise.all(workerPromises);
    }

    /**
     * Create a single worker instance
     * @param {number} workerId - Unique identifier for the worker
     * @returns {Promise<Object>} Promise that resolves with worker information
     * @private
     */
    async _createWorker(workerId) {
        return new Promise((resolve, reject) => {
            try {
                const worker = new Worker('workers/parser.worker.js', { type: 'module' });
                
                const workerInfo = {
                    id: workerId,
                    worker: worker,
                    busy: false,
                    currentJob: null
                };
                
                // Set up event listeners
                worker.addEventListener('message', this._handleWorkerMessage);
                worker.addEventListener('error', this._handleWorkerError);
                
                // Worker is ready immediately (no initialization handshake needed)
                resolve(workerInfo);
                
            } catch (error) {
                reject(new Error(`Failed to create worker ${workerId}: ${error.message}`));
            }
        });
    }

    /**
     * Process all config files using the worker pool
     * @param {Array<{path: string, mod: string}>} configFiles - Files to process
     * @returns {Promise<Object>} Promise that resolves with a single aggregated class hierarchy object
     * @private
     */
    async _processAllFiles(configFiles) {
        return new Promise((resolve, reject) => {
            const fileResults = {};
            let completedJobs = 0;
            let hasError = false;
            
            // Create jobs for all files
            const jobs = configFiles.map(fileSpec => ({
                id: ++this.jobIdCounter,
                filePath: fileSpec.path,
                mod: fileSpec.mod,
                resolve: null,
                reject: null,
                timeoutId: null
            }));
            
            // Set up completion handler
            const checkCompletion = () => {
                if (hasError) return; // Don't resolve if there's an error
                
                if (completedJobs === jobs.length) {
                    // Aggregate all AST results into a single unified class hierarchy
                    const aggregatedResult = this._aggregateASTResults(fileResults);
                    resolve(aggregatedResult);
                }
            };
            
            // Set up error handler
            const handleJobError = (error) => {
                if (hasError) return; // Prevent multiple error handling
                hasError = true;
                
                // Clear any pending timeouts
                jobs.forEach(job => {
                    if (job.timeoutId) {
                        clearTimeout(job.timeoutId);
                    }
                });
                
                reject(error);
            };
            
            // Process each job
            jobs.forEach(job => {
                // Set up timeout for this job
                job.timeoutId = setTimeout(() => {
                    handleJobError(new Error(`Parsing timeout for ${job.filePath} (${this.workerTimeout}ms)`));
                }, this.workerTimeout);
                
                // Set up completion handlers for this job
                job.resolve = (result) => {
                    if (hasError) return;
                    
                    clearTimeout(job.timeoutId);
                    fileResults[job.filePath] = {
                        ast: result.ast,
                        mod: job.mod,
                        filePath: job.filePath
                    };
                    completedJobs++;
                    checkCompletion();
                };
                
                job.reject = (error) => {
                    clearTimeout(job.timeoutId);
                    handleJobError(new Error(`Failed to parse ${job.filePath}: ${error.message}`));
                };
                
                // Queue the job
                this.jobQueue.push(job);
                this.activeJobs.set(job.id, job);
            });
            
            // Start processing the queue
            this._processJobQueue();
        });
    }

    /**
     * Aggregate individual AST results from all config files into a single unified class hierarchy
     * Uses semantic analysis to intelligently resolve class conflicts based on their type and purpose
     * @param {Object} fileResults - Object with filePath keys and {ast, mod, filePath} values
     * @returns {Object} Single aggregated class hierarchy object
     * @private
     */
    _aggregateASTResults(fileResults) {
        const aggregated = {};
        let totalClassCount = 0;
        const modClassCounts = {};
        const resolutionLog = {
            merges: [],
            prioritizations: [],
            conflicts: [],
            debugActions: []
        };
        
        // Initialize semantic analysis components
        const classifier = this._getConfigClassifier();
        const resolver = this._getSemanticConflictResolver();
        
        // Process each file's AST results
        for (const [filePath, fileData] of Object.entries(fileResults)) {
            const { ast, mod } = fileData;
            
            if (!ast || typeof ast !== 'object') {
                console.warn(`DataService: Skipping ${filePath} - invalid AST structure`);
                continue;
            }
            
            let fileClassCount = 0;
            
            // Merge each top-level class from this file's AST into the aggregated result
            for (const [className, classData] of Object.entries(ast)) {
                const mergedClassData = this._mergeClassWithMetadata(classData, mod, filePath);
                
                if (aggregated[className]) {
                    // Semantic conflict resolution
                    const context = { mod, filePath };
                    const classification = classifier.classifyClass(className, mergedClassData, context);
                    
                    const resolution = resolver.resolveConflict(
                        className,
                        aggregated[className],
                        mergedClassData,
                        classification.type,
                        {
                            ...context,
                            classification,
                            existingMod: aggregated[className]._sourceMod,
                            existingFile: aggregated[className]._sourceFile
                        }
                    );
                    
                    // Apply resolution result
                    aggregated[className] = resolution.mergedClass;
                    
                    // Log resolution with appropriate severity
                    this._logResolution(className, classification, resolution, resolutionLog);
                    
                } else {
                    // Add new class to aggregated result
                    aggregated[className] = mergedClassData;
                    fileClassCount++;
                    totalClassCount++;
                }
            }
            
            modClassCounts[mod] = (modClassCounts[mod] || 0) + fileClassCount;
        }
        
        // Log aggregation summary with semantic insights
        this._logAggregationSummary(totalClassCount, modClassCounts, resolutionLog);
        
        return aggregated;
    }

    /**
     * Merge class data with mod metadata for traceability
     * @param {Object} classData - Original class data from AST
     * @param {string} mod - Source mod name
     * @param {string} filePath - Source file path
     * @returns {Object} Class data with added metadata
     * @private
     */
    _mergeClassWithMetadata(classData, mod, filePath) {
        return {
            ...classData,
            _sourceMod: mod,
            _sourceFile: filePath,
            // Recursively add metadata to subClasses if they exist
            subClasses: classData.subClasses ? 
                this._addMetadataToSubClasses(classData.subClasses, mod, filePath) : 
                classData.subClasses
        };
    }

    /**
     * Recursively add metadata to nested subClasses
     * @param {Object} subClasses - Object containing nested class definitions
     * @param {string} mod - Source mod name
     * @param {string} filePath - Source file path
     * @returns {Object} SubClasses with added metadata
     * @private
     */
    _addMetadataToSubClasses(subClasses, mod, filePath) {
        const result = {};
        
        for (const [className, classData] of Object.entries(subClasses)) {
            result[className] = this._mergeClassWithMetadata(classData, mod, filePath);
        }
        
        return result;
    }

    /**
     * Process the job queue by assigning jobs to available workers
     * @private
     */
    _processJobQueue() {
        while (this.jobQueue.length > 0) {
            // Find an available worker
            const availableWorker = this.workers.find(w => !w.busy);
            if (!availableWorker) {
                break; // No workers available, wait for one to finish
            }
            
            // Get the next job
            const job = this.jobQueue.shift();
            
            // Assign job to worker
            availableWorker.busy = true;
            availableWorker.currentJob = job;
            
            // Send the job to the worker
            availableWorker.worker.postMessage({
                filePath: job.filePath
            });
        }
    }

    /**
     * Handle messages from workers
     * @param {MessageEvent} event - The message event from the worker
     * @private
     */
    _handleWorkerMessage(event) {
        const { success, ast, filePath, error } = event.data;
        
        // Find the worker that sent this message
        const worker = this.workers.find(w => w.worker === event.target);
        if (!worker) {
            console.error('DataService: Received message from unknown worker');
            return;
        }
        
        const job = worker.currentJob;
        if (!job) {
            console.error('DataService: Received message from worker with no active job');
            return;
        }
        
        // Mark worker as available
        worker.busy = false;
        worker.currentJob = null;
        
        // Remove job from active jobs
        this.activeJobs.delete(job.id);
        
        // Handle the result
        if (success) {
            job.resolve({ ast, filePath });
        } else {
            job.reject(new Error(error || 'Unknown parsing error'));
        }
        
        // Process any remaining jobs in the queue
        this._processJobQueue();
    }

    /**
     * Handle worker errors
     * @param {ErrorEvent} event - The error event from the worker
     * @private
     */
    _handleWorkerError(event) {
        console.error('DataService: Worker error:', event.error || event.message);
        
        // Find the worker that had the error
        const worker = this.workers.find(w => w.worker === event.target);
        if (!worker) {
            console.error('DataService: Error from unknown worker');
            return;
        }
        
        const job = worker.currentJob;
        if (job) {
            // Mark worker as available
            worker.busy = false;
            worker.currentJob = null;
            
            // Remove job from active jobs
            this.activeJobs.delete(job.id);
            
            // Reject the job
            job.reject(new Error(`Worker error: ${event.error?.message || event.message || 'Unknown worker error'}`));
        }
    }

    /**
     * Terminate all workers in the pool
     * @private
     */
    _terminateWorkerPool() {
        if (this.workers && this.workers.length > 0) {
            
            this.workers.forEach(workerInfo => {
                try {
                    workerInfo.worker.removeEventListener('message', this._handleWorkerMessage);
                    workerInfo.worker.removeEventListener('error', this._handleWorkerError);
                    workerInfo.worker.terminate();
                } catch (error) {
                    console.warn(`DataService: Error terminating worker ${workerInfo.id}:`, error);
                }
            });
            
            this.workers = [];
        }
        
        // Clear any remaining state
        this.activeJobs.clear();
        this.jobQueue = [];
    }

    /**
     * Get the enriched class database (must call initialize() first)
     * @returns {Map<string, Object>|null} The enriched class database or null if not initialized
     */
    getData() {
        return this.enrichedData;
    }
    
    /**
     * Get the resolved class database without enrichment (must call initialize() first)
     * @returns {Map<string, Object>|null} The resolved class database or null if not initialized
     */
    getResolvedData() {
        return this.resolvedData;
    }
    
    /**
     * Get the raw AST data (must call initialize() first)
     * @returns {Object|null} The raw aggregated AST data or null if not initialized
     */
    getRawData() {
        return this.rawData;
    }
    
    /**
     * Get the enrichment report with detailed statistics (must call initialize() first) 
     * @returns {Object|null} The enrichment report or null if not initialized
     */
    getEnrichmentReport() {
        return this.enrichmentReport;
    }
    
    /**
     * Get all classes from the enriched database
     * @returns {Map<string, Object>} The complete enriched class database
     */
    getAllClasses() {
        return this.enrichedData || new Map();
    }
    
    /**
     * Find a single class by className in the enriched database
     * @param {string} className - The class name to search for
     * @returns {Object|null} The enriched class object or null if not found
     */
    findClass(className) {
        if (!this.enrichedData) {
            return null;
        }
        return this.enrichedData.get(className) || null;
    }
    
    /**
     * Get classes filtered by category from enriched metadata
     * @param {string} category - The category to filter by (e.g., 'weapon', 'attachment', 'magazine')
     * @returns {Array<Object>} Array of enriched class objects matching the category
     */
    getClassesByCategory(category) {
        if (!this.enrichedData) {
            return [];
        }
        
        const results = [];
        for (const [className, classObj] of this.enrichedData) {
            if (classObj._meta && classObj._meta.category === category) {
                results.push({
                    className,
                    ...classObj
                });
            }
        }
        
        return results;
    }
    
    /**
     * Get classes filtered by type from enriched metadata
     * @param {string} type - The type to filter by (e.g., 'rifle', 'pistol', 'optics')
     * @returns {Array<Object>} Array of enriched class objects matching the type
     */
    getClassesByType(type) {
        if (!this.enrichedData) {
            return [];
        }
        
        const results = [];
        for (const [className, classObj] of this.enrichedData) {
            if (classObj._meta && classObj._meta.type === type) {
                results.push({
                    className,
                    ...classObj
                });
            }
        }
        
        return results;
    }
    
    /**
     * Get all available categories from enriched metadata
     * @returns {Array<string>} Array of unique category names
     */
    getAvailableCategories() {
        if (!this.enrichedData) {
            return [];
        }
        
        const categories = new Set();
        for (const classObj of this.enrichedData.values()) {
            if (classObj._meta && classObj._meta.category) {
                categories.add(classObj._meta.category);
            }
        }
        
        return Array.from(categories).sort();
    }
    
    /**
     * Get all available types from enriched metadata
     * @returns {Array<string>} Array of unique type names
     */
    getAvailableTypes() {
        if (!this.enrichedData) {
            return [];
        }
        
        const types = new Set();
        for (const classObj of this.enrichedData.values()) {
            if (classObj._meta && classObj._meta.type) {
                types.add(classObj._meta.type);
            }
        }
        
        return Array.from(types).sort();
    }

    /**
     * Check if the service has been initialized
     * @returns {boolean} True if initialized, false otherwise
     */
    isReady() {
        return this.isInitialized && this.enrichedData !== null;
    }

    /**
     * Reset the service to uninitialized state
     * This will terminate any active workers and clear cached data
     */
    reset() {
        this._terminateWorkerPool();
        this.isInitialized = false;
        this.rawData = null;
        this.resolvedData = null;
        this.enrichedData = null;
        this.enrichmentReport = null;
    }

    /**
     * Get service statistics including enrichment data
     * @returns {Object} Object containing comprehensive service statistics
     */
    getStats() {
        const baseStats = {
            isInitialized: this.isInitialized,
            hasRawData: this.rawData !== null,
            hasResolvedData: this.resolvedData !== null,
            hasEnrichedData: this.enrichedData !== null,
            aggregatedClassCount: this.rawData ? Object.keys(this.rawData).length : 0,
            resolvedClassCount: this.resolvedData ? this.resolvedData.size : 0,
            enrichedClassCount: this.enrichedData ? this.enrichedData.size : 0,
            maxWorkers: this.maxWorkers,
            workerTimeout: this.workerTimeout,
            activeWorkers: this.workers ? this.workers.filter(w => w.busy).length : 0,
            totalWorkers: this.workers ? this.workers.length : 0,
            queuedJobs: this.jobQueue.length,
            activeJobs: this.activeJobs.size
        };
        
        // Add enrichment statistics if available
        if (this.enrichmentReport) {
            baseStats.enrichment = {
                enrichmentRate: this.enrichmentReport.summary.enrichmentRate,
                enrichedClasses: this.enrichmentReport.summary.enrichedClasses,
                unenrichedClasses: this.enrichmentReport.summary.unenrichedClasses,
                processingTimeMs: this.enrichmentReport.summary.processingTimeMs,
                definitionsLoaded: this.enrichmentReport.summary.definitionsLoaded,
                errors: this.enrichmentReport.errors.length,
                warnings: this.enrichmentReport.warnings.length,
                definitionStats: this.enrichmentReport.definitionStats
            };
        }
        
        return baseStats;
    }

    /**
     * Get the list of config file paths for testing purposes
     * @returns {Array<{path: string, mod: string}>} Array of config file specifications
     */
    getConfigFilePaths() {
        return this._getConfigFilePaths();
    }

    /**
     * Get or create the ConfigClassifier instance
     * @returns {ConfigClassifier} The classifier instance
     * @private
     */
    _getConfigClassifier() {
        if (!this._classifier) {
            this._classifier = new ConfigClassifier();
        }
        return this._classifier;
    }

    /**
     * Get or create the SemanticConflictResolver instance
     * @returns {SemanticConflictResolver} The resolver instance
     * @private
     */
    _getSemanticConflictResolver() {
        if (!this._resolver) {
            // Configure resolver with mod priority based on our config files
            const modPriority = ['SFP', 'PTV', 'SNS']; // Can be made configurable
            this._resolver = new SemanticConflictResolver({ modPriority });
        }
        return this._resolver;
    }

    /**
     * Log conflict resolution with appropriate severity level
     * @param {string} className - The class name that was resolved
     * @param {Object} classification - The semantic classification result
     * @param {Object} resolution - The conflict resolution result
     * @param {Object} resolutionLog - The resolution log to update
     * @private
     */
    _logResolution(className, classification, resolution, resolutionLog) {
        const logEntry = {
            className,
            classType: classification.type,
            strategy: resolution.strategy,
            severity: resolution.severity,
            message: resolution.message,
            details: resolution.details
        };

        // Log with appropriate severity
        switch (resolution.severity) {
            case 'debug':
                // Framework classes and other expected duplicates - debug level
                console.debug(`DataService: ${resolution.message}`);
                resolutionLog.debugActions.push(logEntry);
                break;
                
            case 'info':
                // Interface merges and prioritizations - info level
                console.info(`DataService: ${resolution.message}`);
                if (resolution.strategy === 'MERGE') {
                    resolutionLog.merges.push(logEntry);
                } else {
                    resolutionLog.prioritizations.push(logEntry);
                }
                break;
                
            case 'warn':
                // True content conflicts - warning level
                console.warn(`DataService: ${resolution.message}`);
                resolutionLog.conflicts.push(logEntry);
                break;
                
            case 'error':
                // Serious structural issues - error level
                console.error(`DataService: ${resolution.message}`);
                resolutionLog.conflicts.push(logEntry);
                break;
                
            default:
                console.log(`DataService: ${resolution.message}`);
                break;
        }
    }

    /**
     * Log aggregation summary with semantic analysis insights
     * @param {number} totalClassCount - Total number of unique classes processed
     * @param {Object} modClassCounts - Class count per mod
     * @param {Object} resolutionLog - The resolution log with categorized actions
     * @private
     */
    _logAggregationSummary(totalClassCount, modClassCounts, resolutionLog) {
        const totalResolutions = resolutionLog.merges.length + 
                               resolutionLog.prioritizations.length + 
                               resolutionLog.conflicts.length + 
                               resolutionLog.debugActions.length;

        if (totalResolutions > 0) {
            console.info(`DataService: Semantic conflict resolution summary:`);
            console.info(`  - Framework/debug actions: ${resolutionLog.debugActions.length}`);
            console.info(`  - Successful merges: ${resolutionLog.merges.length}`);
            console.info(`  - Prioritizations: ${resolutionLog.prioritizations.length}`);
            console.info(`  - True conflicts: ${resolutionLog.conflicts.length}`);
            
            // Only warn if there are actual content conflicts
            if (resolutionLog.conflicts.length > 0) {
                console.warn(`DataService: ${resolutionLog.conflicts.length} true content conflicts detected and resolved`);
            }
        }

        console.info(`DataService: Aggregated ${totalClassCount} unique classes from ${Object.keys(modClassCounts).length} mods`);
    }
}

// Export a default instance for convenience
export const dataService = new DataService();