/**
 * Complete Data Processing Pipeline Integration Example
 * Demonstrates how DataExtractor fits into the full Phase 1-3 pipeline
 */

import { parse } from './parser/configParser.js';
import { resolve } from './parser/inheritanceResolver.js';
import { enrich, DataExtractor } from './extractor/dataExtractor.js';

/**
 * Complete data processing pipeline from raw config to enriched database
 * @param {string} configContent - Raw Arma 3 config content
 * @returns {Promise<Object>} Complete processing results
 */
async function processArmaConfig(configContent) {
    console.log('=== Starting Complete Data Processing Pipeline ===\n');
    
    const results = {
        phase1: null,
        phase2: null,
        phase3: null,
        totalProcessingTime: 0
    };
    
    const overallStartTime = performance.now();
    
    try {
        // Phase 1: Parse raw config content
        console.log('Phase 1: Parsing config content...');
        const phase1Start = performance.now();
        
        const parsedClasses = await parse(configContent);
        const phase1Time = performance.now() - phase1Start;
        
        results.phase1 = {
            classCount: parsedClasses.size,
            processingTimeMs: phase1Time,
            success: true
        };
        
        console.log(`Phase 1 Complete: ${parsedClasses.size} classes parsed in ${phase1Time.toFixed(2)}ms\n`);
        
        // Phase 2: Resolve inheritance hierarchy
        console.log('Phase 2: Resolving inheritance...');
        const phase2Start = performance.now();
        
        const resolvedDatabase = await resolve(parsedClasses);
        const phase2Time = performance.now() - phase2Start;
        
        results.phase2 = {
            classCount: resolvedDatabase.size,
            processingTimeMs: phase2Time,
            success: true
        };
        
        console.log(`Phase 2 Complete: ${resolvedDatabase.size} classes resolved in ${phase2Time.toFixed(2)}ms\n`);
        
        // Phase 3: Enrich with metadata using DataExtractor
        console.log('Phase 3: Enriching with metadata...');
        const phase3Start = performance.now();
        
        const enrichmentConfig = {
            enableLogging: true,
            continueOnError: true,
            maxRetries: 3,
            trackPerformance: true
        };
        
        const extractor = new DataExtractor(enrichmentConfig);
        const enrichmentResult = await extractor.enrich(resolvedDatabase);
        const phase3Time = performance.now() - phase3Start;
        
        results.phase3 = {
            ...enrichmentResult.report.summary,
            processingTimeMs: phase3Time,
            success: true,
            fullReport: enrichmentResult.report
        };
        
        console.log(`Phase 3 Complete: ${enrichmentResult.report.summary.enrichedClasses}/${enrichmentResult.report.summary.totalClasses} classes enriched in ${phase3Time.toFixed(2)}ms\n`);
        
        // Calculate total processing time
        results.totalProcessingTime = performance.now() - overallStartTime;
        
        // Generate summary report
        console.log('=== Pipeline Summary ===');
        console.log(`Total processing time: ${results.totalProcessingTime.toFixed(2)}ms`);
        console.log(`Phase 1 (Parsing): ${results.phase1.processingTimeMs.toFixed(2)}ms (${((results.phase1.processingTimeMs / results.totalProcessingTime) * 100).toFixed(1)}%)`);
        console.log(`Phase 2 (Resolving): ${results.phase2.processingTimeMs.toFixed(2)}ms (${((results.phase2.processingTimeMs / results.totalProcessingTime) * 100).toFixed(1)}%)`);
        console.log(`Phase 3 (Enriching): ${results.phase3.processingTimeMs.toFixed(2)}ms (${((results.phase3.processingTimeMs / results.totalProcessingTime) * 100).toFixed(1)}%)`);
        
        console.log(`\nEnrichment Statistics:`);
        console.log(`- Enrichment rate: ${results.phase3.enrichmentRate}`);
        console.log(`- Definitions loaded: ${results.phase3.definitionsLoaded}`);
        console.log(`- Processing throughput: ${Math.round(results.phase3.totalClasses / (results.totalProcessingTime / 1000))} classes/second`);
        
        // Analyze enriched data by type
        console.log('\n=== Enriched Data Analysis ===');
        const typeAnalysis = analyzeEnrichedData(enrichmentResult.enrichedDb);
        
        for (const [type, count] of Object.entries(typeAnalysis.byType)) {
            console.log(`${type}: ${count} items`);
        }
        
        if (typeAnalysis.samples.weapon) {
            console.log('\nSample weapon metadata:');
            const weapon = typeAnalysis.samples.weapon;
            console.log(`  ${weapon.className}: ${weapon._meta.caliber} caliber, ${weapon._meta.damage} damage`);
        }
        
        if (typeAnalysis.samples.vest) {
            console.log('\nSample vest metadata:');
            const vest = typeAnalysis.samples.vest;
            console.log(`  ${vest.className}: ${vest._meta.armor} armor, ${vest._meta.capacity?.value || 'unknown'} capacity`);
        }
        
        console.log('\n=== Pipeline completed successfully! ===');
        
        return {
            success: true,
            results,
            enrichedDatabase: enrichmentResult.enrichedDb,
            typeAnalysis
        };
        
    } catch (error) {
        console.error('\n=== Pipeline failed ===');
        console.error('Error:', error.message);
        console.error('Phase:', getCurrentPhase(results));
        
        return {
            success: false,
            error: error.message,
            results,
            failedPhase: getCurrentPhase(results)
        };
    }
}

/**
 * Analyze enriched data by type and extract samples
 * @param {Map} enrichedDb - The enriched database
 * @returns {Object} Analysis results
 */
function analyzeEnrichedData(enrichedDb) {
    const analysis = {
        byType: {},
        samples: {}
    };
    
    for (const [className, classData] of enrichedDb) {
        const type = classData._meta?.type || 'unknown';
        
        // Count by type
        analysis.byType[type] = (analysis.byType[type] || 0) + 1;
        
        // Collect samples (first of each type)
        if (!analysis.samples[type]) {
            analysis.samples[type] = classData;
        }
    }
    
    return analysis;
}

/**
 * Determine which phase the pipeline failed in
 * @param {Object} results - Current results object
 * @returns {string} Phase name
 */
function getCurrentPhase(results) {
    if (!results.phase1) return 'Phase 1 (Parsing)';
    if (!results.phase2) return 'Phase 2 (Resolving)';
    if (!results.phase3) return 'Phase 3 (Enriching)';
    return 'Unknown';
}

/**
 * Example usage with mock config data
 */
async function runExample() {
    // Mock Arma 3 config content for demonstration
    const mockConfigContent = `
class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        displayName = "MX Base";
        magazines[] = {"30Rnd_65x39_caseless_mag"};
        modes[] = {"Single", "FullAuto"};
        class WeaponSlotsInfo {
            class CowsSlot {
                compatibleItems[] = {"optic_Aco"};
            };
        };
    };
    class arifle_MX_F: arifle_MX_Base_F {
        displayName = "MX 6.5 mm";
        damage = 11;
        initSpeed = 900;
    };
};

class CfgVehicles {
    class Vest_Base_F;
    class V_PlateCarrier1_rgr: Vest_Base_F {
        displayName = "Carrier Rig (Green)";
        class ItemInfo {
            containerClass = "Supply140";
            armor = 16;
            passThrough = 0.5;
        };
    };
};
    `;
    
    console.log('Running complete pipeline example with mock data...\n');
    
    const result = await processArmaConfig(mockConfigContent);
    
    if (result.success) {
        console.log('\nExample completed successfully!');
        console.log(`Processed ${result.results.phase3.totalClasses} classes in ${result.results.totalProcessingTime.toFixed(2)}ms`);
    } else {
        console.log('\nExample failed:', result.error);
    }
    
    return result;
}

/**
 * Performance benchmark with different dataset sizes
 */
async function runPerformanceBenchmark() {
    console.log('=== DataExtractor Performance Benchmark ===\n');
    
    const testSizes = [10, 50, 100, 500];
    const results = [];
    
    for (const size of testSizes) {
        console.log(`Testing with ${size} classes...`);
        
        // Generate mock resolved database
        const mockDb = new Map();
        for (let i = 0; i < size; i++) {
            mockDb.set(`test_weapon_${i}`, {
                className: `test_weapon_${i}`,
                baseClass: 'Rifle_Base_F',
                displayName: `Test Weapon ${i}`,
                WeaponSlotsInfo: { CowsSlot: true },
                magazines: ['30Rnd_556x45_Stanag'],
                modes: ['Single'],
                damage: 10 + (i % 5)
            });
        }
        
        // Benchmark enrichment
        const startTime = performance.now();
        const result = await enrich(mockDb);
        const endTime = performance.now();
        
        const throughput = Math.round(size / ((endTime - startTime) / 1000));
        
        results.push({
            size,
            timeMs: endTime - startTime,
            throughput,
            enrichmentRate: result.report.summary.enrichmentRate
        });
        
        console.log(`  Time: ${(endTime - startTime).toFixed(2)}ms`);
        console.log(`  Throughput: ${throughput} classes/second`);
        console.log(`  Enrichment rate: ${result.report.summary.enrichmentRate}\n`);
    }
    
    console.log('=== Benchmark Results Summary ===');
    console.log('Size\tTime(ms)\tThroughput(classes/s)\tEnrichment Rate');
    results.forEach(r => {
        console.log(`${r.size}\t${r.timeMs.toFixed(2)}\t${r.throughput}\t\t${r.enrichmentRate}`);
    });
    
    return results;
}

// Export functions for use in other modules
export {
    processArmaConfig,
    analyzeEnrichedData,
    runExample,
    runPerformanceBenchmark
};

// Auto-run example if this file is executed directly
if (import.meta.url === `file://${process.argv[1]}`) {
    runExample().catch(console.error);
}