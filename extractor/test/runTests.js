/**
 * Simple Test Runner for DataExtractor
 * 
 * This script provides an easy way to run DataExtractor tests and
 * validate the production readiness of the system.
 * 
 * Usage:
 *   node runTests.js                    # Run all tests
 *   node runTests.js basic              # Run specific test
 *   node runTests.js --production       # Run with production config
 *   node runTests.js --help             # Show help
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

import { runTestSuite, runSingleTest, TEST_CONFIGS } from './testSuite.js';
import { ProductionConfigs, ProductionLogger, analyzeEnrichmentResults } from '../productionConfig.js';
import { DataExtractor } from '../dataExtractor.js';

/**
 * Parse command line arguments
 */
function parseArgs() {
    const args = process.argv.slice(2);
    const options = {
        testName: null,
        environment: 'PRODUCTION',
        showHelp: false,
        verbose: false
    };

    for (let i = 0; i < args.length; i++) {
        const arg = args[i];
        
        switch (arg) {
            case '--help':
            case '-h':
                options.showHelp = true;
                break;
            case '--production':
                options.environment = 'PRODUCTION';
                break;
            case '--development':
            case '--dev':
                options.environment = 'DEVELOPMENT';
                break;
            case '--debug':
                options.environment = 'DEBUG';
                break;
            case '--verbose':
            case '-v':
                options.verbose = true;
                break;
            default:
                if (!arg.startsWith('--') && !options.testName) {
                    options.testName = arg;
                }
        }
    }

    return options;
}

/**
 * Show help information
 */
function showHelp() {
    console.log(`
DataExtractor Test Runner

USAGE:
    node runTests.js [TEST_NAME] [OPTIONS]

TEST_NAMES:
    basic        - Test basic enrichment functionality
    mixed        - Test mixed item type detection
    logging      - Test logging level configurations
    performance  - Test performance with large dataset
    errors       - Test error handling and recovery
    enrichment   - Test enrichment rate optimization
    
    (no test name) - Run all tests

OPTIONS:
    --production     Use production configuration (default)
    --development    Use development configuration
    --debug          Use debug configuration
    --verbose, -v    Enable verbose output
    --help, -h       Show this help message

EXAMPLES:
    node runTests.js                    # Run all tests with production config
    node runTests.js basic              # Run basic test only
    node runTests.js --development      # Run all tests with dev config
    node runTests.js performance -v     # Run performance test with verbose output
`);
}

/**
 * Quick validation test for production readiness
 */
async function quickValidation() {
    console.log('🔍 Running Quick Production Validation...\n');
    
    const logger = new ProductionLogger(ProductionConfigs.PRODUCTION);
    
    // Test with minimal mock data
    const mockDb = new Map();
    mockDb.set('TestWeapon', {
        className: 'TestWeapon',
        fullPath: 'CfgWeapons.TestWeapon',
        properties: {
            displayName: 'Test Weapon',
            WeaponSlotsInfo: { mass: 80 },
            magazines: ['TestMag'],
            scope: 2
        },
        subClasses: {},
        metadata: { _sourceMod: 'Test' }
    });

    try {
        const extractor = new DataExtractor(ProductionConfigs.PRODUCTION);
        const result = await extractor.enrich(mockDb);
        const analysis = analyzeEnrichmentResults(result.enrichedDb, result.report, logger);
        
        console.log('✅ Production validation completed');
        console.log(`📊 Enrichment Rate: ${analysis.qualityMetrics.enrichmentRate.toFixed(1)}%`);
        console.log(`⚡ Performance: ${analysis.performanceMetrics.classesPerSecond.toFixed(0)} classes/sec`);
        
        if (analysis.recommendations.length > 0) {
            console.log('⚠️  Recommendations:');
            analysis.recommendations.forEach(rec => console.log(`   • ${rec}`));
        }
        
        console.log();
        return true;
        
    } catch (error) {
        console.error('❌ Production validation failed:', error.message);
        return false;
    }
}

/**
 * Demonstrate logging levels and production optimization
 */
async function demonstrateLogging() {
    console.log('📝 Demonstrating Logging Optimization...\n');
    
    const environments = ['PRODUCTION', 'DEVELOPMENT', 'DEBUG'];
    const mockDb = new Map();
    
    // Add some test data
    for (let i = 0; i < 10; i++) {
        mockDb.set(`TestItem_${i}`, {
            className: `TestItem_${i}`,
            properties: { displayName: `Test Item ${i}` },
            subClasses: {},
            metadata: { _sourceMod: 'Test' }
        });
    }

    for (const env of environments) {
        console.log(`--- ${env} Environment ---`);
        
        const config = ProductionConfigs[env];
        const extractor = new DataExtractor(config);
        
        const startTime = performance.now();
        await extractor.enrich(mockDb);
        const endTime = performance.now();
        
        const stats = extractor.getStats();
        console.log(`Processing Time: ${(endTime - startTime).toFixed(2)}ms`);
        console.log(`Log Messages: ${stats.errors.length + stats.warnings.length}`);
        console.log(`Errors: ${stats.errors.length}, Warnings: ${stats.warnings.length}`);
        console.log();
    }
}

/**
 * Main execution function
 */
async function main() {
    const options = parseArgs();
    
    if (options.showHelp) {
        showHelp();
        return;
    }
    
    console.log('🧪 DataExtractor Test Environment');
    console.log(`Environment: ${options.environment}`);
    console.log(`Test: ${options.testName || 'All Tests'}`);
    console.log();
    
    try {
        // Quick validation first
        const validationPassed = await quickValidation();
        if (!validationPassed) {
            console.error('❌ Quick validation failed. Consider reviewing the configuration.');
            process.exit(1);
        }
        
        // Demonstrate logging if verbose
        if (options.verbose) {
            await demonstrateLogging();
        }
        
        // Run requested tests
        if (options.testName) {
            await runSingleTest(options.testName);
        } else {
            await runTestSuite();
        }
        
        console.log('🎉 Test execution completed successfully!');
        
    } catch (error) {
        console.error('💥 Test execution failed:', error.message);
        if (options.verbose) {
            console.error(error.stack);
        }
        process.exit(1);
    }
}

// Run if executed directly
if (import.meta.url.endsWith(process.argv[1].replace(/\\/g, '/'))) {
    main().catch(error => {
        console.error('Fatal error:', error);
        process.exit(1);
    });
}

export { main, quickValidation, demonstrateLogging };