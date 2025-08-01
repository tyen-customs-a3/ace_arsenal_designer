# Services Documentation

This directory contains service classes that orchestrate the data loading and processing pipeline for the ACE3 Arsenal Testbed.

## DataService

The `DataService` class is the main orchestrator for parallel config file parsing. It replaces the sequential approach used in the original `data/loader.js` with a worker-based parallel processing system.

### Key Features

- **Parallel Processing**: Uses Web Workers to parse multiple config files simultaneously
- **Worker Pool Management**: Efficiently manages a pool of parser workers
- **Error Handling**: Comprehensive error handling with timeouts and recovery
- **Performance Monitoring**: Built-in statistics and monitoring capabilities
- **Resource Cleanup**: Proper worker termination and resource management

### Architecture

```
DataService
├── File Discovery: Identifies config files to parse
├── Worker Pool: Creates and manages parser.worker.js instances
├── Job Queue: Manages parsing tasks and worker assignment
├── Result Aggregation: Combines all AST results into single unified class hierarchy
└── Error Handling: Manages timeouts, failures, and cleanup
```

### Usage

#### Basic Usage

```javascript
import { DataService } from './services/DataService.js';

const dataService = new DataService();
const rawData = await dataService.initialize();

// rawData contains aggregated class hierarchy:
// {
//   "CfgWeapons": { className: "CfgWeapons", baseClass: null, properties: {...}, subClasses: {...}, _sourceMod: "ModName", _sourceFile: "..." },
//   "CfgMagazines": { className: "CfgMagazines", baseClass: null, properties: {...}, subClasses: {...}, _sourceMod: "ModName", _sourceFile: "..." },
//   ...
// }
```

#### Custom Configuration

```javascript
const dataService = new DataService({
    maxWorkers: 6,        // More workers for faster processing
    workerTimeout: 45000  // Longer timeout for complex files
});
```

#### Monitoring and Stats

```javascript
const stats = dataService.getStats();
console.log('Service statistics:', stats);

// Returns:
// {
//   isInitialized: boolean,
//   hasData: boolean,
//   aggregatedClassCount: number,
//   maxWorkers: number,
//   workerTimeout: number,
//   activeWorkers: number,
//   totalWorkers: number,
//   queuedJobs: number,
//   activeJobs: number
// }
```

### Migration from DataLoader

The DataService replaces the old `DataLoader` class with several improvements:

#### Old Approach (Sequential)
```javascript
// data/loader.js - Sequential processing
for (const configFile of configFiles) {
    const response = await fetch(configFile.path);
    const content = await response.text();
    const parsed = this.parser.parse(content, configFile.path);
    // Process one file at a time...
}
```

#### New Approach (Parallel)
```javascript
// services/DataService.js - Parallel processing
const jobs = configFiles.map(file => ({ filePath: file.path, mod: file.mod }));
const results = await this._processAllFiles(jobs);
// All files processed simultaneously by worker pool
```

### Output Format

The DataService returns a **single aggregated class hierarchy** instead of separate per-file results. This provides several advantages:

#### Aggregated Structure
```javascript
{
  "CfgWeapons": {
    className: "CfgWeapons",
    baseClass: null,
    properties: { /* parsed properties */ },
    subClasses: { 
      "arifle_MX_F": { /* weapon class data */ },
      // ... all weapon classes from all files merged here
    },
    _sourceMod: "ModName",      // Metadata: which mod this class came from
    _sourceFile: "path/to/config.cpp"  // Metadata: which file this class came from
  },
  "CfgMagazines": { /* all magazine classes aggregated */ },
  "CfgPatches": { /* all patch definitions aggregated */ },
  // ... other top-level configuration sections
}
```

#### Key Features
- **Unified Hierarchy**: All classes from all files merged into single structure
- **Conflict Resolution**: First-occurrence-wins policy for duplicate class names
- **Source Traceability**: Each class includes `_sourceMod` and `_sourceFile` metadata
- **Nested Metadata**: Source information propagated to all nested subClasses
- **Performance**: Single object reduces memory overhead and lookup complexity

#### Conflict Handling
When the same class name appears in multiple files:
- **First Occurrence Wins**: The first class encountered is kept
- **Logging**: Conflicts are logged with details about ignored duplicates
- **Metadata Preserved**: Original source information is maintained

### Performance Benefits

- **Parallelization**: Multiple config files parsed simultaneously
- **Non-blocking**: Parsing happens in Web Workers, keeping UI responsive  
- **Scalable**: Worker pool size can be tuned based on system capabilities
- **Efficient**: Better resource utilization compared to sequential processing
- **Memory Optimized**: Single aggregated result reduces memory fragmentation

### Error Handling

The DataService includes comprehensive error handling:

- **Worker Timeouts**: Configurable timeout for individual parsing jobs
- **Worker Errors**: Proper handling of worker crashes or failures
- **Network Errors**: Graceful handling of file fetch failures
- **Parsing Errors**: Individual file parse errors don't stop the entire process
- **Resource Cleanup**: Workers are properly terminated on success or failure

### Configuration Options

| Option | Type | Default | Description |
|--------|------|---------|-------------|
| `maxWorkers` | number | 4 | Maximum number of concurrent parser workers |
| `workerTimeout` | number | 30000 | Timeout in milliseconds for individual parsing jobs |

### Methods

#### Public Methods

- `initialize()`: Initialize the service and start parsing process
- `getData()`: Get the parsed data (must initialize first)
- `isReady()`: Check if service is initialized and has data
- `reset()`: Reset service to uninitialized state and cleanup resources
- `getStats()`: Get current service statistics

#### Private Methods

- `_runParsingStage()`: Main orchestration method for the parsing workflow
- `_getConfigFilePaths()`: Get list of config files to parse
- `_initializeWorkerPool()`: Create and initialize worker pool
- `_createWorker(id)`: Create individual worker instance
- `_processAllFiles(files)`: Process all files using worker pool and aggregate results
- `_aggregateASTResults(fileResults)`: Aggregate individual AST results into unified class hierarchy
- `_mergeClassWithMetadata(classData, mod, filePath)`: Add source metadata to class data
- `_addMetadataToSubClasses(subClasses, mod, filePath)`: Recursively add metadata to nested classes
- `_processJobQueue()`: Assign jobs to available workers
- `_handleWorkerMessage(event)`: Handle messages from workers
- `_handleWorkerError(event)`: Handle worker error events
- `_terminateWorkerPool()`: Cleanup and terminate all workers

### Integration Points

The DataService is designed to integrate with existing components:

1. **ConfigParser**: Uses existing `parser/configParser.js` via workers
2. **Web Workers**: Integrates with `workers/parser.worker.js`
3. **UI Components**: Provides non-blocking data loading for better UX
4. **Future Phases**: Sets up architecture for transformation and extraction phases

### Development Workflow

1. **Create DataService instance** with desired configuration
2. **Call initialize()** to start the parsing process
3. **Monitor progress** using getStats() if desired
4. **Access results** via getData() once initialization completes
5. **Process ASTs** using existing ConfigParser extraction methods
6. **Reset service** when done or to start over

### Testing

Use the provided test files to verify DataService functionality:

- `test-dataservice.html`: Interactive browser test page with updated aggregation format
- `verify-aggregation.html`: Specialized test page for verifying the aggregated output format
- `verify-dataservice.js`: Programmatic verification script with comprehensive format validation
- `integration-example.js`: Code examples showing integration patterns with aggregated data

### Future Enhancements

The DataService architecture supports future enhancements:

- **Auto-discovery**: Automatic discovery of config files in directories
- **Caching**: Cache parsed results to avoid re-parsing unchanged files
- **Progress Reporting**: Detailed progress callbacks for UI integration
- **Selective Parsing**: Parse only specific files or mod categories
- **Hot Reloading**: Re-parse changed files during development