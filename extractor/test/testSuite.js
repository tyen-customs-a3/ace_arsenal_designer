/**
 * Comprehensive Test Suite for DataExtractor
 * 
 * This test suite provides comprehensive testing of the DataExtractor functionality
 * with proper logging categorization and production readiness validation.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

import { DataExtractor, DEFAULT_CONFIG } from '../dataExtractor.js';

/**
 * Test configuration for different scenarios
 */
const TEST_CONFIGS = {
    PRODUCTION: {
        enableLogging: true,
        enableDebugLogging: false,
        continueOnError: true,
        maxRetries: 3,
        trackPerformance: true
    },
    DEVELOPMENT: {
        enableLogging: true,
        enableDebugLogging: true,
        continueOnError: true,
        maxRetries: 1,
        trackPerformance: true
    },
    SILENT: {
        enableLogging: false,
        enableDebugLogging: false,
        continueOnError: true,
        maxRetries: 1,
        trackPerformance: false
    }
};

/**
 * Mock data generators for different test scenarios
 */
class MockDataGenerator {
    /**
     * Create a mock database with various weapon types
     */
    static createWeaponDatabase() {
        const database = new Map();
        
        // Standard assault rifle
        database.set('arifle_MX_F', {
            className: 'arifle_MX_F',
            fullPath: 'CfgWeapons.arifle_MX_F',
            baseClass: 'Rifle_Base_F',
            properties: {
                displayName: 'MX 6.5 mm',
                scope: 2,
                WeaponSlotsInfo: {
                    mass: 80,
                    SlotInfo: []
                },
                magazines: ['30Rnd_65x39_caseless_mag'],
                modes: ['Single', 'FullAuto'],
                initSpeed: 850,
                magazineWell: ['CBA_65x39_MX']
            },
            subClasses: {},
            metadata: { _sourceMod: 'Arma3' }
        });

        // Pistol
        database.set('hgun_P07_F', {
            className: 'hgun_P07_F',
            fullPath: 'CfgWeapons.hgun_P07_F',
            baseClass: 'Pistol_Base_F',
            properties: {
                displayName: 'P07 9 mm',
                scope: 2,
                WeaponSlotsInfo: {
                    mass: 15,
                    SlotInfo: []
                },
                magazines: ['16Rnd_9x21_Mag'],
                modes: ['Single'],
                initSpeed: 380
            },
            subClasses: {},
            metadata: { _sourceMod: 'Arma3' }
        });

        // Attachment/Accessory
        database.set('optic_MRCO', {
            className: 'optic_MRCO',
            fullPath: 'CfgWeapons.optic_MRCO',
            baseClass: 'ItemOptics',
            properties: {
                displayName: 'MRCO',
                scope: 2,
                ItemInfo: {
                    mass: 4,
                    type: 201
                }
            },
            subClasses: {},
            metadata: { _sourceMod: 'Arma3' }
        });

        return database;
    }

    /**
     * Create a mock database with various item types
     */
    static createMixedDatabase() {
        const database = new Map();
        
        // Weapon
        database.set('TestWeapon', this.createWeaponDatabase().get('arifle_MX_F'));
        
        // Vest
        database.set('V_PlateCarrier1_rgr', {
            className: 'V_PlateCarrier1_rgr',
            fullPath: 'CfgWeapons.V_PlateCarrier1_rgr',
            baseClass: 'Vest_Base',
            properties: {
                displayName: 'Carrier Rig (Green)',
                scope: 2,
                ItemInfo: {
                    mass: 80,
                    type: 701,
                    containerClass: 'Supply140'
                }
            },
            subClasses: {},
            metadata: { _sourceMod: 'Arma3' }
        });

        // Backpack
        database.set('B_AssaultPack_khk', {
            className: 'B_AssaultPack_khk',
            fullPath: 'CfgVehicles.B_AssaultPack_khk',
            baseClass: 'Bag_Base',
            properties: {
                displayName: 'Assault Pack (Khaki)',
                scope: 2,
                maximumLoad: 160,
                mass: 20
            },
            subClasses: {},
            metadata: { _sourceMod: 'Arma3' }
        });

        // Magazine
        database.set('30Rnd_65x39_caseless_mag', {
            className: '30Rnd_65x39_caseless_mag',
            fullPath: 'CfgMagazines.30Rnd_65x39_caseless_mag',
            baseClass: 'CA_Magazine',
            properties: {
                displayName: '6.5 mm 30Rnd Mag',
                scope: 2,
                count: 30,
                ammo: '65x39_Caseless_mag',
                mass: 8
            },
            subClasses: {},
            metadata: { _sourceMod: 'Arma3' }
        });

        // TransportItems (should be filtered/handled specially)
        database.set('_xx_TestWeapon', {
            className: '_xx_TestWeapon',
            fullPath: 'CfgVehicles.Container.TransportItems._xx_TestWeapon',
            properties: {
                name: 'TestWeapon',
                count: 5
            },
            subClasses: {},
            metadata: { _sourceMod: 'Test' }
        });

        // Unknown/Unrecognized class
        database.set('UnknownClass', {
            className: 'UnknownClass',
            fullPath: 'CfgSomething.UnknownClass',
            properties: {
                someProperty: 'value'
            },
            subClasses: {},
            metadata: { _sourceMod: 'Test' }
        });

        return database;
    }

    /**
     * Create a large database for performance testing
     */
    static createLargeDatabase(size = 1000) {
        const database = new Map();
        const baseWeapon = this.createWeaponDatabase().get('arifle_MX_F');
        
        for (let i = 0; i < size; i++) {
            database.set(`TestWeapon_${i}`, {
                ...baseWeapon,
                className: `TestWeapon_${i}`,
                properties: {
                    ...baseWeapon.properties,
                    displayName: `Test Weapon ${i}`
                }
            });
        }
        
        return database;
    }
}

/**
 * Test result collector and reporter
 */
class TestReporter {
    constructor() {
        this.results = [];
        this.logs = [];
        this.warnings = [];
        this.errors = [];
        this.startTime = null;
        this.endTime = null;
    }

    /**
     * Start timing the test run
     */
    start() {
        this.startTime = performance.now();
        console.log('🚀 Starting DataExtractor Test Suite');
        console.log('=' .repeat(50));
    }

    /**
     * End timing and generate final report
     */
    end() {
        this.endTime = performance.now();
        this.generateFinalReport();
    }

    /**
     * Add a test result
     */
    addResult(testName, passed, details = {}) {
        const result = {
            testName,
            passed,
            timestamp: new Date().toISOString(),
            ...details
        };
        this.results.push(result);
        
        const status = passed ? '✅ PASSED' : '❌ FAILED';
        console.log(`${status}: ${testName}`);
        
        if (details.stats) {
            console.log(`  📊 Stats: ${JSON.stringify(details.stats, null, 2)}`);
        }
        
        if (details.error) {
            console.log(`  🚨 Error: ${details.error}`);
        }
        
        console.log('');
    }

    /**
     * Capture logs from DataExtractor for analysis
     */
    captureLogs(extractor) {
        const stats = extractor.getStats();
        this.logs.push(...stats.errors.map(e => ({ type: 'error', message: e })));
        this.warnings.push(...stats.warnings.map(w => ({ type: 'warning', message: w })));
        return {
            totalLogs: stats.errors.length + stats.warnings.length,
            errorCount: stats.errors.length,
            warningCount: stats.warnings.length
        };
    }

    /**
     * Generate final comprehensive report
     */
    generateFinalReport() {
        const duration = this.endTime - this.startTime;
        const passed = this.results.filter(r => r.passed).length;
        const total = this.results.length;
        
        console.log('📋 TEST SUITE SUMMARY');
        console.log('=' .repeat(50));
        console.log(`Total Tests: ${total}`);
        console.log(`Passed: ${passed}`);
        console.log(`Failed: ${total - passed}`);
        console.log(`Success Rate: ${((passed / total) * 100).toFixed(1)}%`);
        console.log(`Duration: ${duration.toFixed(2)}ms`);
        console.log('');

        // Log summary
        const totalLogs = this.logs.length + this.warnings.length;
        console.log('📝 LOGGING SUMMARY');
        console.log('-' .repeat(30));
        console.log(`Total Log Entries: ${totalLogs}`);
        console.log(`Errors: ${this.logs.filter(l => l.type === 'error').length}`);
        console.log(`Warnings: ${this.warnings.filter(l => l.type === 'warning').length}`);
        console.log('');

        // Failed tests detail
        const failedTests = this.results.filter(r => !r.passed);
        if (failedTests.length > 0) {
            console.log('❌ FAILED TESTS DETAIL');
            console.log('-' .repeat(30));
            failedTests.forEach(test => {
                console.log(`• ${test.testName}: ${test.error || 'Unknown error'}`);
            });
            console.log('');
        }

        return {
            summary: {
                total,
                passed,
                failed: total - passed,
                successRate: (passed / total) * 100,
                durationMs: duration
            },
            logs: {
                total: totalLogs,
                errors: this.logs.filter(l => l.type === 'error').length,
                warnings: this.warnings.filter(l => l.type === 'warning').length
            },
            failedTests
        };
    }
}

/**
 * Individual test implementations
 */
class DataExtractorTests {
    constructor(reporter) {
        this.reporter = reporter;
    }

    /**
     * Test basic enrichment functionality
     */
    async testBasicEnrichment() {
        const mockDb = MockDataGenerator.createWeaponDatabase();
        const extractor = new DataExtractor(TEST_CONFIGS.PRODUCTION);
        
        try {
            const result = await extractor.enrich(mockDb);
            const stats = extractor.getStats();
            const logStats = this.reporter.captureLogs(extractor);
            
            const passed = result.enrichedDb.size === mockDb.size && 
                          stats.enrichedClasses > 0 &&
                          stats.errors.length === 0;
            
            this.reporter.addResult('Basic Enrichment', passed, {
                stats: {
                    totalClasses: stats.totalClasses,
                    enrichedClasses: stats.enrichedClasses,
                    enrichmentRate: ((stats.enrichedClasses / stats.totalClasses) * 100).toFixed(1) + '%',
                    processingTimeMs: stats.processingTimeMs.toFixed(2)
                },
                logStats,
                error: passed ? null : 'Enrichment failed or had errors'
            });
            
        } catch (error) {
            this.reporter.addResult('Basic Enrichment', false, {
                error: error.message
            });
        }
    }

    /**
     * Test mixed item type detection
     */
    async testMixedItemTypes() {
        const mockDb = MockDataGenerator.createMixedDatabase();
        const extractor = new DataExtractor(TEST_CONFIGS.PRODUCTION);
        
        try {
            const result = await extractor.enrich(mockDb);
            const stats = extractor.getStats();
            const logStats = this.reporter.captureLogs(extractor);
            
            // Count different types
            const typeCounts = {};
            for (const [, classObj] of result.enrichedDb) {
                const type = classObj._meta?.type || 'unknown';
                typeCounts[type] = (typeCounts[type] || 0) + 1;
            }
            
            const passed = Object.keys(typeCounts).length > 1 && // Multiple types detected
                          typeCounts.weapon >= 1; // At least one weapon
            
            this.reporter.addResult('Mixed Item Types', passed, {
                stats: {
                    totalClasses: stats.totalClasses,
                    typeCounts,
                    enrichmentRate: ((stats.enrichedClasses / stats.totalClasses) * 100).toFixed(1) + '%'
                },
                logStats,
                error: passed ? null : 'Failed to detect multiple item types correctly'
            });
            
        } catch (error) {
            this.reporter.addResult('Mixed Item Types', false, {
                error: error.message
            });
        }
    }

    /**
     * Test production vs development logging levels
     */
    async testLoggingLevels() {
        const mockDb = MockDataGenerator.createWeaponDatabase();
        
        // Test production config (less verbose)
        const prodExtractor = new DataExtractor(TEST_CONFIGS.PRODUCTION);
        const prodResult = await prodExtractor.enrich(mockDb);
        const prodStats = prodExtractor.getStats();
        
        // Test development config (more verbose)
        const devExtractor = new DataExtractor(TEST_CONFIGS.DEVELOPMENT);
        const devResult = await devExtractor.enrich(mockDb);
        const devStats = devExtractor.getStats();
        
        // Test silent config (no logging)
        const silentExtractor = new DataExtractor(TEST_CONFIGS.SILENT);
        const silentResult = await silentExtractor.enrich(mockDb);
        const silentStats = silentExtractor.getStats();
        
        const passed = prodStats.processingTimeMs > 0 &&
                      devStats.processingTimeMs > 0 &&
                      silentStats.processingTimeMs > 0;
        
        this.reporter.addResult('Logging Levels', passed, {
            stats: {
                production: {
                    processingTimeMs: prodStats.processingTimeMs.toFixed(2),
                    logCount: prodStats.errors.length + prodStats.warnings.length
                },
                development: {
                    processingTimeMs: devStats.processingTimeMs.toFixed(2),
                    logCount: devStats.errors.length + devStats.warnings.length
                },
                silent: {
                    processingTimeMs: silentStats.processingTimeMs.toFixed(2),
                    logCount: silentStats.errors.length + silentStats.warnings.length
                }
            },
            error: passed ? null : 'Logging level configurations failed'
        });
    }

    /**
     * Test performance with large dataset
     */
    async testPerformance() {
        const largeDb = MockDataGenerator.createLargeDatabase(500);
        const extractor = new DataExtractor(TEST_CONFIGS.PRODUCTION);
        
        try {
            const result = await extractor.enrich(largeDb);
            const stats = extractor.getStats();
            const logStats = this.reporter.captureLogs(extractor);
            
            // Performance criteria
            const avgTimePerClass = stats.processingTimeMs / stats.totalClasses;
            const passed = avgTimePerClass < 5.0 && // Less than 5ms per class
                          stats.totalClasses === 500 &&
                          result.enrichedDb.size === 500;
            
            this.reporter.addResult('Performance Test', passed, {
                stats: {
                    totalClasses: stats.totalClasses,
                    processingTimeMs: stats.processingTimeMs.toFixed(2),
                    avgTimePerClass: avgTimePerClass.toFixed(3) + 'ms',
                    enrichmentRate: ((stats.enrichedClasses / stats.totalClasses) * 100).toFixed(1) + '%'
                },
                logStats,
                error: passed ? null : `Performance too slow: ${avgTimePerClass.toFixed(3)}ms per class`
            });
            
        } catch (error) {
            this.reporter.addResult('Performance Test', false, {
                error: error.message
            });
        }
    }

    /**
     * Test error handling and recovery
     */
    async testErrorHandling() {
        const mockDb = new Map();
        
        // Add a class that might cause issues
        mockDb.set('BadClass', {
            className: 'BadClass',
            fullPath: 'CfgWeapons.BadClass',
            properties: null, // This might cause issues
            subClasses: {},
            metadata: { _sourceMod: 'Test' }
        });
        
        mockDb.set('GoodClass', MockDataGenerator.createWeaponDatabase().get('arifle_MX_F'));
        
        const extractor = new DataExtractor({
            ...TEST_CONFIGS.PRODUCTION,
            continueOnError: true
        });
        
        try {
            const result = await extractor.enrich(mockDb);
            const stats = extractor.getStats();
            const logStats = this.reporter.captureLogs(extractor);
            
            const passed = result.enrichedDb.size === 2 && // Both classes processed
                          stats.totalClasses === 2;
            
            this.reporter.addResult('Error Handling', passed, {
                stats: {
                    totalClasses: stats.totalClasses,
                    enrichedClasses: stats.enrichedClasses,
                    errorCount: stats.errors.length,
                    warningCount: stats.warnings.length
                },
                logStats,
                error: passed ? null : 'Error handling failed to continue processing'
            });
            
        } catch (error) {
            this.reporter.addResult('Error Handling', false, {
                error: error.message
            });
        }
    }

    /**
     * Test enrichment rate optimization
     */
    async testEnrichmentRate() {
        const mockDb = MockDataGenerator.createMixedDatabase();
        const extractor = new DataExtractor(TEST_CONFIGS.PRODUCTION);
        
        try {
            const result = await extractor.enrich(mockDb);
            const stats = extractor.getStats();
            const logStats = this.reporter.captureLogs(extractor);
            
            const enrichmentRate = (stats.enrichedClasses / stats.totalClasses) * 100;
            const passed = enrichmentRate >= 50.0; // At least 50% enrichment rate
            
            this.reporter.addResult('Enrichment Rate', passed, {
                stats: {
                    totalClasses: stats.totalClasses,
                    enrichedClasses: stats.enrichedClasses,
                    unenrichedClasses: stats.unenrichedClasses,
                    enrichmentRate: enrichmentRate.toFixed(1) + '%'
                },
                logStats,
                error: passed ? null : `Enrichment rate too low: ${enrichmentRate.toFixed(1)}%`
            });
            
        } catch (error) {
            this.reporter.addResult('Enrichment Rate', false, {
                error: error.message
            });
        }
    }
}

/**
 * Main test runner
 */
async function runTestSuite() {
    const reporter = new TestReporter();
    const tests = new DataExtractorTests(reporter);
    
    reporter.start();
    
    try {
        // Run all tests
        await tests.testBasicEnrichment();
        await tests.testMixedItemTypes();
        await tests.testLoggingLevels();
        await tests.testPerformance();
        await tests.testErrorHandling();
        await tests.testEnrichmentRate();
        
    } catch (error) {
        console.error('Test suite failed:', error);
    } finally {
        reporter.end();
    }
}

/**
 * Utility function to run individual test
 */
async function runSingleTest(testName) {
    const reporter = new TestReporter();
    const tests = new DataExtractorTests(reporter);
    
    reporter.start();
    
    switch (testName.toLowerCase()) {
        case 'basic':
            await tests.testBasicEnrichment();
            break;
        case 'mixed':
            await tests.testMixedItemTypes();
            break;
        case 'logging':
            await tests.testLoggingLevels();
            break;
        case 'performance':
            await tests.testPerformance();
            break;
        case 'errors':
            await tests.testErrorHandling();
            break;
        case 'enrichment':
            await tests.testEnrichmentRate();
            break;
        default:
            console.error(`Unknown test: ${testName}`);
            console.log('Available tests: basic, mixed, logging, performance, errors, enrichment');
            return;
    }
    
    reporter.end();
}

// Export for module use
export { 
    runTestSuite, 
    runSingleTest, 
    DataExtractorTests, 
    MockDataGenerator, 
    TestReporter, 
    TEST_CONFIGS 
};

// Run if called directly
if (import.meta.url === `file://${process.argv[1]}`) {
    const testName = process.argv[2];
    if (testName) {
        runSingleTest(testName);
    } else {
        runTestSuite();
    }
}