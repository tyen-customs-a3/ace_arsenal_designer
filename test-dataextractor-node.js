// Simple Node.js test for DataExtractor module
// Run with: node test-dataextractor-node.js

import { enrich, DataExtractor } from './extractor/dataExtractor.js';

// Create mock resolved database for testing
function createMockResolvedDatabase() {
    const mockDb = new Map();

    // Mock weapon data
    mockDb.set('arifle_MX_F', {
        className: 'arifle_MX_F',
        baseClass: 'arifle_MX_Base_F',
        displayName: 'MX 6.5 mm',
        WeaponSlotsInfo: {
            CowsSlot: true,
            PointerSlot: true,
            MuzzleSlot: true
        },
        magazines: ['30Rnd_65x39_caseless_mag', '30Rnd_65x39_caseless_mag_Tracer'],
        modes: ['Single', 'FullAuto'],
        initSpeed: 900,
        damage: 11,
        mass: 35,
        Single: {
            reloadTime: 0.1,
            maxRange: 500
        },
        FullAuto: {
            reloadTime: 0.08,
            maxRange: 300
        }
    });

    // Mock vest data
    mockDb.set('V_PlateCarrier1_rgr', {
        className: 'V_PlateCarrier1_rgr',
        baseClass: 'Vest_Base_F',
        displayName: 'Carrier Rig (Green)',
        ItemInfo: {
            containerClass: 'Supply140',
            armor: 16,
            passThrough: 0.5,
            mass: 80
        },
        armor: 16
    });

    // Mock attachment data
    mockDb.set('optic_Aco', {
        className: 'optic_Aco',
        baseClass: 'ItemCore',
        displayName: 'ACO (Red)',
        ItemInfo: {
            type: 201,
            mass: 2
        },
        optics: 2
    });

    return mockDb;
}

async function runTest() {
    console.log('=== DataExtractor Node.js Test ===\n');
    
    try {
        const mockDb = createMockResolvedDatabase();
        console.log(`Created mock database with ${mockDb.size} classes`);

        console.log('\nStarting enrichment process...');
        const result = await enrich(mockDb);

        console.log('\n=== Enrichment Results ===');
        console.log(`Total classes: ${result.report.summary.totalClasses}`);
        console.log(`Enriched classes: ${result.report.summary.enrichedClasses}`);
        console.log(`Enrichment rate: ${result.report.summary.enrichmentRate}`);
        console.log(`Processing time: ${result.report.summary.processingTimeMs.toFixed(2)}ms`);
        console.log(`Definitions loaded: ${result.report.summary.definitionsLoaded}`);

        if (result.report.errors.length > 0) {
            console.log('\n=== Errors ===');
            result.report.errors.forEach(error => console.log(`- ${error}`));
        }

        if (result.report.warnings.length > 0) {
            console.log('\n=== Warnings ===');
            result.report.warnings.forEach(warning => console.log(`- ${warning}`));
        }

        console.log('\n=== Definition Statistics ===');
        console.log(JSON.stringify(result.report.definitionStats, null, 2));

        console.log('\n=== Sample Enriched Data ===');
        let count = 0;
        for (const [className, classData] of result.enrichedDb) {
            if (count >= 2) break;
            console.log(`\n${className}:`);
            console.log(`  Type: ${classData._meta?.type || 'unknown'}`);
            console.log(`  Extracted by: ${classData._meta?.extractedBy || 'none'}`);
            if (classData._meta && Object.keys(classData._meta).length > 3) {
                console.log('  Metadata keys:', Object.keys(classData._meta).filter(k => !['type', 'extractedBy', 'extractedAt'].includes(k)));
            }
            count++;
        }

        console.log('\n=== Test completed successfully! ===');

    } catch (error) {
        console.error('\n=== Test failed ===');
        console.error('Error:', error.message);
        console.error('Stack:', error.stack);
    }
}

// Run the test
runTest().catch(console.error);