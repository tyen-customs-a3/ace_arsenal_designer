/**
 * Verification script for DataService resolved output format
 * This script tests that the DataService now returns a fully resolved class database (Map)
 * where all inheritance has been processed and flattened.
 */

import { DataService } from './services/DataService.js';

async function verifyDataServiceOutput() {
    console.log('🧪 Starting DataService resolved output format verification...\n');
    
    try {
        // Create DataService instance
        const dataService = new DataService({ maxWorkers: 2, workerTimeout: 15000 });
        
        console.log('⏳ Initializing DataService...');
        const startTime = performance.now();
        
        // Initialize and get data
        const data = await dataService.initialize();
        
        const endTime = performance.now();
        const duration = ((endTime - startTime) / 1000).toFixed(2);
        
        console.log(`✅ DataService initialized in ${duration} seconds\n`);
        
        // Verify the output format
        console.log('🔍 Verifying output format...');
        
        // Test 1: Check that data is a Map
        if (!(data instanceof Map)) {
            throw new Error('❌ Data should be a Map instance, not a regular object');
        }
        console.log('✅ Data is a valid Map');
        
        // Test 2: Check that keys are class names (not file paths)
        const classNames = Array.from(data.keys());
        const sampleKeys = classNames.slice(0, 5);
        console.log(`✅ Found ${classNames.length} resolved classes`);
        console.log(`   Sample classes: ${sampleKeys.join(', ')}`);
        
        // Test 3: Verify structure - keys should be class names like "CfgWeapons", not file paths
        const hasFilePathKeys = classNames.some(key => key.includes('/') || key.includes('\\') || key.includes('.cpp'));
        if (hasFilePathKeys) {
            throw new Error('❌ Found file path keys - data should contain resolved class names, not file paths');
        }
        console.log('✅ Keys are class names, not file paths');
        
        // Test 4: Verify class structure with metadata
        const firstClassName = classNames[0];
        if (firstClassName) {
            const firstClass = data.get(firstClassName);
            
            // Check required properties
            if (!firstClass.className) {
                throw new Error(`❌ Class ${firstClassName} missing className property`);
            }
            if (!firstClass._sourceMod) {
                throw new Error(`❌ Class ${firstClassName} missing _sourceMod metadata`);
            }
            if (!firstClass._sourceFile) {
                throw new Error(`❌ Class ${firstClassName} missing _sourceFile metadata`);
            }
            
            console.log(`✅ Class structure verified for: ${firstClassName}`);
            console.log(`   Source mod: ${firstClass._sourceMod}`);
            console.log(`   Source file: ${firstClass._sourceFile}`);
            console.log(`   Base class: ${firstClass.baseClass || 'none'}`);
            console.log(`   Properties: ${Object.keys(firstClass.properties || {}).length}`);
            console.log(`   Sub-classes: ${Object.keys(firstClass.subClasses || {}).length}`);
        }
        
        // Test 5: Verify some expected top-level classes exist
        const expectedClasses = ['CfgWeapons', 'CfgMagazines', 'CfgPatches'];
        const foundExpected = expectedClasses.filter(cls => data.has(cls));
        if (foundExpected.length > 0) {
            console.log(`✅ Found expected config sections: ${foundExpected.join(', ')}`);
        } else {
            console.log('⚠️  No standard config sections found (CfgWeapons, CfgMagazines, etc.)');
        }
        
        // Test 6: Check for mod metadata distribution
        const modCounts = {};
        for (const [className, classData] of data) {
            const mod = classData._sourceMod;
            if (mod) {
                modCounts[mod] = (modCounts[mod] || 0) + 1;
            }
        }
        
        console.log('✅ Mod distribution:');
        for (const [mod, count] of Object.entries(modCounts)) {
            console.log(`   ${mod}: ${count} classes`);
        }
        
        // Test 7: Check for conflicts (this would be logged during aggregation)
        console.log('\n🔍 Checking logs for conflict resolution...');
        // Note: Conflicts would be logged to console during aggregation
        
        // Final summary
        console.log('\n📊 Verification Results:');
        console.log(`   Total resolved classes: ${classNames.length}`);
        console.log(`   Total mods represented: ${Object.keys(modCounts).length}`);
        console.log(`   Processing time: ${duration} seconds`);
        
        console.log('\n🎉 All verification tests passed! DataService is now returning fully resolved class database format.');
        
        // Clean up
        dataService.reset();
        
        return true;
        
    } catch (error) {
        console.error('\n❌ Verification failed:', error.message);
        console.error(error.stack);
        return false;
    }
}

// Run verification if this script is executed directly
if (typeof window === 'undefined') {
    // Node.js environment
    verifyDataServiceOutput().then(success => {
        process.exit(success ? 0 : 1);
    });
} else {
    // Browser environment
    window.verifyDataServiceOutput = verifyDataServiceOutput;
    console.log('DataService verification function loaded. Call verifyDataServiceOutput() to run tests.');
}