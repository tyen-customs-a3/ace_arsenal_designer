/**
 * Integration Example - Shows how DataService replaces the old loader.js
 * 
 * This demonstrates how to migrate from the sequential DataLoader
 * to the parallel DataService with inheritance resolution for improved performance.
 * 
 * The DataService now returns fully resolved class data where all inheritance
 * has been processed and flattened.
 */

import { DataService } from './services/DataService.js';

// Example 1: Basic usage with default settings
async function basicUsageExample() {
    console.log('=== Basic Usage Example ===');
    
    const dataService = new DataService();
    
    try {
        // Initialize and get resolved class database
        const resolvedData = await dataService.initialize();
        
        console.log(`Loaded ${resolvedData.size} fully resolved classes`);
        console.log('Sample class names:', Array.from(resolvedData.keys()).slice(0, 3));
        
        // Access specific class data
        const sampleClassName = Array.from(resolvedData.keys())[0];
        const sampleClass = resolvedData.get(sampleClassName);
        console.log(`Sample resolved class data for ${sampleClassName}:`, {
            className: sampleClass.className,
            baseClass: sampleClass.baseClass,
            sourceMod: sampleClass._sourceMod,
            sourceFile: sampleClass._sourceFile,
            propertyCount: Object.keys(sampleClass.properties || {}).length,
            subClassCount: Object.keys(sampleClass.subClasses || {}).length
        });
        
    } catch (error) {
        console.error('Failed to load data:', error);
    }
}

// Example 2: Custom configuration with performance tuning
async function customConfigExample() {
    console.log('=== Custom Configuration Example ===');
    
    const dataService = new DataService({
        maxWorkers: 6,           // Use more workers for faster parsing
        workerTimeout: 45000     // Longer timeout for complex files
    });
    
    try {
        const startTime = performance.now();
        const resolvedData = await dataService.initialize();
        const endTime = performance.now();
        
        const stats = dataService.getStats();
        console.log('Performance stats:', {
            duration: `${((endTime - startTime) / 1000).toFixed(2)}s`,
            rawClassesAggregated: stats.aggregatedClassCount,
            resolvedClassCount: stats.resolvedClassCount,
            workersUsed: stats.maxWorkers
        });
        
    } catch (error) {
        console.error('Custom config failed:', error);
    }
}

// Example 3: Integration with existing processing pipeline
async function pipelineIntegrationExample() {
    console.log('=== Pipeline Integration Example ===');
    
    const dataService = new DataService();
    
    try {
        // Step 1: Get resolved class database
        const resolvedData = await dataService.initialize();
        
        // Step 2: Process resolved classes (with full inheritance flattened)
        const processedItems = [];
        
        for (const [className, classData] of resolvedData) {
            const { _sourceMod, _sourceFile } = classData;
            
            // Here you would integrate with existing ConfigParser extraction methods
            // The advantage: each class now has all inherited properties flattened
            console.log(`Processing resolved class ${className} from ${_sourceMod}...`);
            
            // Placeholder for actual processing - note that inheritance is now resolved
            processedItems.push({
                className,
                sourceMod: _sourceMod,
                sourceFile: _sourceFile,
                propertyCount: Object.keys(classData.properties || {}).length,
                hasInheritance: !!classData.baseClass,
                isFullyResolved: true  // All inheritance has been flattened
            });
        }
        
        console.log(`Processed ${processedItems.length} fully resolved classes`);
        
    } catch (error) {
        console.error('Pipeline integration failed:', error);
    }
}

// Example 4: Error handling and recovery
async function errorHandlingExample() {
    console.log('=== Error Handling Example ===');
    
    const dataService = new DataService({
        maxWorkers: 2,
        workerTimeout: 5000  // Short timeout to demonstrate timeout handling
    });
    
    try {
        const resolvedData = await dataService.initialize();
        console.log('Initialization succeeded despite potential timeouts');
        
    } catch (error) {
        console.error('Expected error occurred:', error.message);
        
        // Show service stats even after failure
        const stats = dataService.getStats();
        console.log('Service state after error:', stats);
        
        // Reset and try again with better settings
        dataService.reset();
        console.log('Service reset, could try again with different settings');
    }
}

// Example 5: Monitoring and debugging
async function monitoringExample() {
    console.log('=== Monitoring Example ===');
    
    const dataService = new DataService({ maxWorkers: 3 });
    
    // Monitor stats during initialization
    const monitorInterval = setInterval(() => {
        const stats = dataService.getStats();
        if (stats.totalWorkers > 0 || stats.activeJobs > 0) {
            console.log('Current stats:', {
                activeWorkers: stats.activeWorkers,
                queuedJobs: stats.queuedJobs,
                activeJobs: stats.activeJobs,
                isInitialized: stats.isInitialized
            });
        }
    }, 500);
    
    try {
        const resolvedData = await dataService.initialize();
        clearInterval(monitorInterval);
        
        const finalStats = dataService.getStats();
        console.log('Final stats:', finalStats);
        
    } catch (error) {
        clearInterval(monitorInterval);
        console.error('Monitoring example failed:', error);
    }
}

// Export examples for use in other files
export {
    basicUsageExample,
    customConfigExample,
    pipelineIntegrationExample,
    errorHandlingExample,
    monitoringExample
};

// If running directly, run all examples
if (typeof window !== 'undefined') {
    console.log('DataService Integration Examples');
    console.log('Open browser console to see examples running...');
    
    // Run examples sequentially with delays
    (async () => {
        await basicUsageExample();
        await new Promise(resolve => setTimeout(resolve, 1000));
        
        await customConfigExample();
        await new Promise(resolve => setTimeout(resolve, 1000));
        
        await pipelineIntegrationExample();
        await new Promise(resolve => setTimeout(resolve, 1000));
        
        await errorHandlingExample();
        await new Promise(resolve => setTimeout(resolve, 1000));
        
        await monitoringExample();
        
        console.log('=== All Examples Complete ===');
    })();
}