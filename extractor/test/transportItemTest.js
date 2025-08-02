/**
 * Test to validate TransportItems filtering in DataExtractor
 */

import { DataExtractor } from '../dataExtractor.js';

/**
 * Mock resolved database with TransportItems examples
 */
function createMockDatabase() {
    const database = new Map();
    
    // Real equipment class
    database.set('ptv_zos', {
        className: 'ptv_zos',
        fullPath: 'CfgWeapons.ptv_zos',
        properties: {
            displayName: 'ZOs 4x30',
            scope: 2,
            author: 'Toadie, Project True Viking',
            picture: '\\ptv_weapons\\Data\\UI\\gear_ptv_zos_ui_ca.paa',
            model: '\\ptv_weapons\\accessories\\ptv_zos.p3d'
        },
        subClasses: {},
        metadata: { _sourceMod: 'PTV' }
    });
    
    // TransportItem reference (should be filtered)
    database.set('_xx_ptv_zos', {
        className: '_xx_ptv_zos',
        fullPath: 'CfgVehicles.B_supplyCrate_F.TransportItems._xx_ptv_zos',
        properties: {
            name: 'ptv_zos',
            count: 5
        },
        subClasses: {},
        metadata: { _sourceMod: 'PTV' }
    });
    
    // Another TransportItem reference
    database.set('_xx_ptv_specterdr', {
        className: '_xx_ptv_specterdr',
        fullPath: 'CfgVehicles.SomeContainer.TransportMagazines._xx_ptv_specterdr',
        properties: {
            name: 'ptv_specterdr',
            count: 3
        },
        subClasses: {},
        metadata: { _sourceMod: 'PTV' }
    });
    
    // Regular unknown class (should generate warning)
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
 * Test the TransportItems filtering
 */
async function testTransportItemsFiltering() {
    console.log('=== Testing TransportItems Filtering ===\n');
    
    const mockDb = createMockDatabase();
    const extractor = new DataExtractor({
        enableLogging: true,
        continueOnError: true
    });
    
    console.log('Mock database contains:');
    for (const [key, value] of mockDb) {
        console.log(`  - ${key} (${value.fullPath})`);
    }
    
    console.log('\nRunning data extraction...\n');
    
    try {
        const result = await extractor.enrich(mockDb);
        const enriched = result.enrichedDb;
        
        console.log('\nEnrichment results:');
        console.log(`Total classes processed: ${extractor.stats.totalClasses}`);
        console.log(`Enriched classes: ${extractor.stats.enrichedClasses}`);
        console.log(`Unenriched classes: ${extractor.stats.unenrichedClasses}`);
        console.log(`Warnings: ${extractor.stats.warnings.length}`);
        console.log(`Errors: ${extractor.stats.errors.length}`);
        
        console.log('\nWarnings generated:');
        extractor.stats.warnings.forEach(warning => {
            console.log(`  - ${warning}`);
        });
        
        console.log('\nClass types assigned:');
        for (const [key, value] of enriched) {
            console.log(`  - ${key}: ${value._meta.type} (${value._meta.noMatchReason || 'matched'})`);
        }
        
        // Validate results
        const transportItemCount = Array.from(enriched.values())
            .filter(cls => cls._meta.type === 'transport_item').length;
            
        const warningCount = extractor.stats.warnings.filter(w => 
            w.includes('No definition matched class')).length;
        
        console.log('\n=== Validation ===');
        console.log(`Transport items identified: ${transportItemCount}`);
        console.log(`"No definition matched" warnings: ${warningCount}`);
        
        // Should be 2 transport items, 1 warning (for UnknownClass only)
        if (transportItemCount === 2 && warningCount === 1) {
            console.log('✅ Test PASSED: TransportItems filtered correctly');
        } else {
            console.log('❌ Test FAILED: Expected 2 transport items and 1 warning');
        }
        
    } catch (error) {
        console.error('Test failed with error:', error);
    }
}

// Run the test
testTransportItemsFiltering();