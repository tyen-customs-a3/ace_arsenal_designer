/**
 * Quick test to verify basic functionality
 */

import { DataExtractor } from '../dataExtractor.js';

// Create test data with actual weapon properties
const testDb = new Map();
testDb.set('testWeapon', {
    className: 'testWeapon',
    fullPath: 'CfgWeapons.testWeapon',
    baseClass: 'Rifle_Base_F',
    properties: {
        displayName: 'Test Rifle',
        scope: 2,
        WeaponSlotsInfo: {
            mass: 80
        },
        magazines: ['30Rnd_65x39_caseless_mag'],
        modes: ['Single', 'FullAuto']
    },
    subClasses: {},
    metadata: { _sourceMod: 'Test' }
});

async function quickTest() {
    console.log('🔬 Quick DataExtractor Test');
    console.log('=' .repeat(30));
    
    const extractor = new DataExtractor({
        enableLogging: true,
        enableDebugLogging: false
    });
    
    try {
        const result = await extractor.enrich(testDb);
        const stats = extractor.getStats();
        
        console.log('\nResults:');
        console.log(`Total classes: ${stats.totalClasses}`);
        console.log(`Enriched: ${stats.enrichedClasses}`);
        console.log(`Enrichment rate: ${((stats.enrichedClasses/stats.totalClasses)*100).toFixed(1)}%`);
        console.log(`Errors: ${stats.errors.length}`);
        console.log(`Warnings: ${stats.warnings.length}`);
        
        // Check the enriched class
        const enrichedWeapon = result.enrichedDb.get('testWeapon');
        console.log(`\nWeapon type: ${enrichedWeapon._meta?.type || 'unknown'}`);
        console.log(`Extracted by: ${enrichedWeapon._meta?.extractedBy || 'none'}`);
        
        if (stats.enrichedClasses > 0) {
            console.log('✅ SUCCESS: DataExtractor is working!');
        } else {
            console.log('❌ FAIL: No classes were enriched');
        }
        
    } catch (error) {
        console.error('❌ ERROR:', error.message);
    }
}

quickTest();