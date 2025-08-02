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
import { LocalizationService } from './LocalizationService.js';

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
        
        // Initialize localization service
        this.localizationService = new LocalizationService();
        
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
            // Initialize localization service first
            console.log('DataService: Initializing localization service...');
            await this.localizationService.initialize();
            
            // Run the parsing stage to get raw AST data
            const rawData = await this._runParsingStage();
            
            // Run the inheritance resolution stage to get fully resolved class database
            const resolvedData = await this._runInheritanceResolutionStage(rawData);
            
            // Run the enrichment stage to add metadata to resolved classes
            const enrichmentResult = await this._runEnrichmentStage(resolvedData);
            
            // Run the localization stage to resolve display names
            const localizedData = await this._runLocalizationStage(enrichmentResult.enrichedDb);
            
            // Store all data stages
            this.rawData = rawData;
            this.resolvedData = resolvedData;
            this.enrichedData = localizedData;
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
            // Vanilla Arma 3 configs (symlinked a3 directory)
            { path: 'data/addons/a3/weapons_f/config.cpp', mod: 'Vanilla' },
            { path: 'data/addons/a3/weapons_f_mark/config.cpp', mod: 'Vanilla' },
            { path: 'data/addons/a3/weapons_f_exp/config.cpp', mod: 'Vanilla' },
            { path: 'data/addons/a3/characters_f/config.cpp', mod: 'Vanilla' },
            { path: 'data/addons/a3/supplies_f_exp/config.cpp', mod: 'Vanilla' },
            
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
     * Aggregate AST results using proper namespace isolation without string-based assumptions
     * Organizes classes by mod namespace first, merges intra-namespace files structurally
     * @param {Object} fileResults - Object with filePath keys and {ast, mod, filePath} values
     * @returns {Object} Aggregated class hierarchy with proper namespace handling
     * @private
     */
    _aggregateASTResults(fileResults) {
        // Step 1: Organize files by mod namespace
        const namespaces = {};
        const aggregationLog = {
            totalFiles: Object.keys(fileResults).length,
            totalMods: 0,
            filesPerMod: {},
            classesPerMod: {}
        };
        
        // Step 2: Group files by mod namespace
        for (const [filePath, fileData] of Object.entries(fileResults)) {
            const { ast, mod } = fileData;
            
            if (!ast || typeof ast !== 'object') {
                console.warn(`DataService: Skipping ${filePath} - invalid AST structure`);
                continue;
            }
            
            // Initialize namespace if first time seeing this mod
            if (!namespaces[mod]) {
                namespaces[mod] = {
                    modName: mod,
                    configFiles: {},
                    mergedClasses: {},
                    stats: {
                        totalFiles: 0,
                        totalClasses: 0,
                        mergedClasses: 0
                    }
                };
                aggregationLog.totalMods++;
                aggregationLog.filesPerMod[mod] = 0;
                aggregationLog.classesPerMod[mod] = 0;
            }
            
            // Store this file's AST in the namespace
            namespaces[mod].configFiles[filePath] = {
                filePath,
                ast,
                classCount: Object.keys(ast).length
            };
            
            namespaces[mod].stats.totalFiles++;
            aggregationLog.filesPerMod[mod]++;
        }
        
        // Step 3: Within each namespace, merge all files from that mod
        for (const [modName, namespace] of Object.entries(namespaces)) {
            this._mergeIntraNamespaceFiles(namespace);
            aggregationLog.classesPerMod[modName] = namespace.stats.totalClasses;
        }
        
        // Step 4: Flatten namespaces into final aggregated structure for compatibility
        const aggregated = {};
        let totalClassCount = 0;
        
        for (const [modName, namespace] of Object.entries(namespaces)) {
            for (const [className, classData] of Object.entries(namespace.mergedClasses)) {
                // In the new architecture, there should be no conflicts at this level
                // because each namespace has been independently resolved
                if (aggregated[className]) {
                    // This should only happen for legitimate cross-mod inheritance
                    // Log it but don't treat as error - inheritance resolver will handle it
                    console.debug(`DataService: Class '${className}' exists in multiple namespaces - inheritance resolver will handle`);
                }
                
                aggregated[className] = classData;
                totalClassCount++;
            }
        }
        
        // Log aggregation summary
        this._logNamespaceAggregationSummary(aggregationLog, totalClassCount, namespaces);
        
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
     * Merge all config files within a single mod namespace
     * This is where same-mod, multi-file classes get properly combined
     * @param {Object} namespace - The namespace object containing all files for a mod
     * @private
     */
    _mergeIntraNamespaceFiles(namespace) {
        // Process all config files within this namespace
        for (const [filePath, fileData] of Object.entries(namespace.configFiles)) {
            const { ast } = fileData;
            
            // Merge each class from this file into the namespace's merged classes
            for (const [className, classData] of Object.entries(ast)) {
                const enhancedClassData = this._mergeClassWithMetadata(
                    classData, 
                    namespace.modName, 
                    filePath
                );
                
                if (namespace.mergedClasses[className]) {
                    // Same namespace, different files - merge without any conflict resolution
                    namespace.mergedClasses[className] = this._mergeIntraNamespaceClasses(
                        namespace.mergedClasses[className],
                        enhancedClassData,
                        className,
                        namespace.modName
                    );
                    namespace.stats.mergedClasses++;
                } else {
                    // First occurrence of this class in this namespace
                    namespace.mergedClasses[className] = enhancedClassData;
                    namespace.stats.totalClasses++;
                }
            }
        }
    }
    
    /**
     * Merge two class definitions from the same namespace (same mod, different files)
     * This is pure structural merging without any string-based assumptions
     * @param {Object} existingClass - The existing class definition
     * @param {Object} newClass - The new class definition from another file
     * @param {string} className - The class name for logging
     * @param {string} modName - The mod name for context
     * @returns {Object} Merged class definition
     * @private
     */
    _mergeIntraNamespaceClasses(existingClass, newClass, className, modName) {
        // Pure structural merge - no assumptions about class content
        const merged = this._deepMergeObjects({ ...existingClass }, newClass);
        
        // Update metadata to reflect the merge
        const existingFiles = existingClass._sourceFile.includes('+') ? 
            existingClass._sourceFile.split('+') : [existingClass._sourceFile];
        const allFiles = [...existingFiles, newClass._sourceFile];
        
        merged._sourceFile = allFiles.join('+');
        merged._processedAt = new Date().toISOString();
        merged._intraNamespaceMerge = true;
        
        console.debug(`DataService: Merged '${className}' from ${allFiles.length} files in ${modName} namespace`);
        
        return merged;
    }
    
    /**
     * Deep merge two objects recursively
     * @param {Object} target - Target object to merge into
     * @param {Object} source - Source object to merge from
     * @returns {Object} Merged object
     * @private
     */
    _deepMergeObjects(target, source) {
        for (const [key, value] of Object.entries(source)) {
            if (key === 'subClasses') {
                // Special handling for subClasses - merge recursively
                if (target.subClasses && typeof target.subClasses === 'object') {
                    target.subClasses = this._deepMergeObjects(target.subClasses, value);
                } else {
                    target.subClasses = this._deepClone(value);
                }
            } else if (value && typeof value === 'object' && !Array.isArray(value)) {
                // Deep merge nested objects
                if (target[key] && typeof target[key] === 'object' && !Array.isArray(target[key])) {
                    target[key] = this._deepMergeObjects(target[key], value);
                } else {
                    target[key] = this._deepClone(value);
                }
            } else {
                // Direct assignment for primitives, arrays, and null values
                target[key] = this._deepClone(value);
            }
        }
        
        return target;
    }
    
    /**
     * Deep clone an object
     * @param {*} obj - Object to clone
     * @returns {*} Cloned object
     * @private
     */
    _deepClone(obj) {
        if (obj === null || typeof obj !== 'object') {
            return obj;
        }
        
        if (Array.isArray(obj)) {
            return obj.map(item => this._deepClone(item));
        }
        
        const cloned = {};
        for (const [key, value] of Object.entries(obj)) {
            cloned[key] = this._deepClone(value);
        }
        
        return cloned;
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
     * Get the localization service instance
     * @returns {LocalizationService} The localization service
     */
    getLocalizationService() {
        return this.localizationService;
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
    /**
     * Log namespace-aware aggregation summary without string-based assumptions
     * @param {Object} aggregationLog - The aggregation statistics
     * @param {number} totalClassCount - Total unique classes across all namespaces
     * @param {Object} namespaces - The namespace data for detailed reporting
     * @private
     */
    _logNamespaceAggregationSummary(aggregationLog, totalClassCount, namespaces) {
        console.info(`DataService: Namespace-aware AST aggregation complete`);
        console.info(`  - Total files processed: ${aggregationLog.totalFiles}`);
        console.info(`  - Total mod namespaces: ${aggregationLog.totalMods}`);
        console.info(`  - Total unique classes: ${totalClassCount}`);
        
        // Log per-namespace statistics
        console.info(`DataService: Per-namespace breakdown:`);
        for (const [modName, namespace] of Object.entries(namespaces)) {
            const mergeRatio = namespace.stats.totalClasses > 0 ? 
                (namespace.stats.mergedClasses / namespace.stats.totalClasses * 100).toFixed(1) : 0;
            
            console.info(`  - ${modName}: ${namespace.stats.totalClasses} classes from ${namespace.stats.totalFiles} files (${namespace.stats.mergedClasses} merges, ${mergeRatio}% merge rate)`);
        }
        
        // Calculate total intra-namespace merges across all mods
        const totalIntraNamespaceMerges = Object.values(namespaces)
            .reduce((sum, ns) => sum + ns.stats.mergedClasses, 0);
        
        if (totalIntraNamespaceMerges > 0) {
            console.info(`DataService: Successfully handled ${totalIntraNamespaceMerges} intra-namespace merges without conflicts`);
        }
        
        console.info(`DataService: No string-based heuristics or assumptions used - pure structural analysis`);
    }

    /**
     * Phase 4: Localization Resolution Stage
     * Resolves $STR_ localization keys to their translated strings
     * @param {Map<string, Object>} enrichedData - The enriched class database from Phase 3
     * @returns {Promise<Map<string, Object>>} Map with resolved display names
     * @private
     */
    async _runLocalizationStage(enrichedData) {
        console.log('DataService: Starting localization resolution stage...');
        
        const startTime = Date.now();
        const localizedData = new Map();
        let resolvedCount = 0;
        let totalDisplayNames = 0;
        
        try {
            // Process each class and resolve its display name
            for (const [className, classObj] of enrichedData) {
                const localizedClass = { ...classObj };
                
                // Resolve display name if it exists
                if (classObj.displayName) {
                    totalDisplayNames++;
                    const resolvedDisplayName = this.localizationService.resolveOrPassthrough(
                        classObj.displayName, 
                        null, // use default language
                        className // fallback to className if localization fails
                    );
                    
                    if (resolvedDisplayName !== classObj.displayName) {
                        resolvedCount++;
                    }
                    
                    localizedClass.displayName = resolvedDisplayName;
                }
                
                // Also resolve display name in properties if it exists
                if (classObj.properties?.displayName) {
                    const resolvedPropsDisplayName = this.localizationService.resolveOrPassthrough(
                        classObj.properties.displayName,
                        null, // use default language
                        className // fallback to className if localization fails
                    );
                    localizedClass.properties = {
                        ...classObj.properties,
                        displayName: resolvedPropsDisplayName
                    };
                }
                
                // Add localized display name to _meta for easy access
                // Always ensure we have a display name, using className as final fallback
                const finalDisplayName = localizedClass.displayName || 
                                       localizedClass.properties?.displayName || 
                                       className;
                
                if (localizedClass._meta) {
                    localizedClass._meta.displayName = finalDisplayName;
                } else {
                    localizedClass._meta = {
                        displayName: finalDisplayName
                    };
                }
                
                localizedData.set(className, localizedClass);
            }
            
            const processingTime = Date.now() - startTime;
            const resolutionRate = totalDisplayNames > 0 ? ((resolvedCount / totalDisplayNames) * 100).toFixed(1) : '0.0';
            
            console.log(`DataService: Localization stage completed in ${processingTime}ms`);
            console.log(`DataService: Resolved ${resolvedCount}/${totalDisplayNames} display names (${resolutionRate}% resolution rate)`);
            
            // Log localization service statistics
            const locStats = this.localizationService.getStats();
            console.log(`DataService: Localization service stats: ${locStats.totalKeys} keys, ${locStats.resolvedKeys} resolved, ${locStats.missedKeys} missed`);
            
            return localizedData;
            
        } catch (error) {
            console.error('DataService: Localization stage failed:', error);
            throw new Error(`Localization resolution failed: ${error.message}`);
        }
    }
}

// Export a default instance for convenience
export const dataService = new DataService();