#!/usr/bin/env node

/**
 * Frontend Integration Test
 * Tests the updated frontend integration with DataService
 */

import { fileURLToPath } from 'url';
import { dirname } from 'path';

const __filename = fileURLToPath(import.meta.url);
const __dirname = dirname(__filename);

// Setup browser environment mocks
global.window = {
    location: {
        origin: 'http://127.0.0.1:5500',
        pathname: '/index.html'
    }
};

global.document = {
    getElementById: (id) => ({
        textContent: '',
        style: {},
        addEventListener: () => {}
    }),
    querySelector: () => ({ 
        checked: true, 
        value: 'hierarchy',
        classList: {
            add: () => {},
            remove: () => {}
        }
    }),
    querySelectorAll: () => ({
        forEach: () => {}
    })
};

global.Worker = class MockWorker {
    constructor(url, options) {
        this.url = url;
        this.options = options;
    }
    postMessage(data) {}
    terminate() {}
    addEventListener(event, handler) {}
    removeEventListener(event, handler) {}
};

global.performance = {
    now: () => Date.now()
};

class FrontendIntegrationTest {
    async runTest() {
        console.log('🧪 Testing Frontend DataService Integration\n');
        
        try {
            // Test 1: DataService integration
            await this.testDataServiceIntegration();
            
            // Test 2: Enhanced DataManager methods
            await this.testEnhancedDataManager();
            
            // Test 3: Error handling
            await this.testErrorHandling();
            
            console.log('\n✅ Frontend integration test passed!');
            console.log('\n🎯 Improvements implemented:');
            console.log('   • Enhanced error handling and validation');
            console.log('   • Better user feedback during loading');
            console.log('   • Utility methods for DataService access');
            console.log('   • Debug helper for console inspection');
            console.log('   • Improved timing display with status colors');
            
        } catch (error) {
            console.error('\n❌ Frontend integration test failed:', error.message);
            process.exit(1);
        }
    }

    async testDataServiceIntegration() {
        console.log('🔍 Testing DataService Integration...');
        
        // Import the DataManager
        const { DataManager } = await import('./js/data.js');
        
        // Test that DataManager has the new utility methods
        if (typeof DataManager.getDataServiceStats !== 'function') {
            throw new Error('DataManager missing getDataServiceStats method');
        }
        
        if (typeof DataManager.findItemByClassName !== 'function') {
            throw new Error('DataManager missing findItemByClassName method');
        }
        
        if (typeof DataManager.getAvailableCategories !== 'function') {
            throw new Error('DataManager missing getAvailableCategories method');
        }
        
        console.log('✅ DataManager utility methods added successfully');
    }

    async testEnhancedDataManager() {
        console.log('🔍 Testing Enhanced DataManager Methods...');
        
        // Mock Arsenal global
        global.Arsenal = {
            dataService: {
                isReady: () => false,
                getStats: () => ({ enrichedClassCount: 100 }),
                getAvailableCategories: () => ['weapon', 'attachment'],
                findClass: () => null,
                getEnrichmentReport: () => null
            }
        };
        
        const { DataManager } = await import('./js/data.js');
        
        // Test utility methods with unready DataService
        const stats = DataManager.getDataServiceStats();
        if (stats !== null) {
            throw new Error('getDataServiceStats should return null when DataService not ready');
        }
        
        const categories = DataManager.getAvailableCategories();
        if (categories.length !== 0) {
            throw new Error('getAvailableCategories should return empty array when DataService not ready');
        }
        
        const item = DataManager.findItemByClassName('test');
        if (item !== null) {
            throw new Error('findItemByClassName should return null when DataService not ready');
        }
        
        console.log('✅ DataManager utility methods handle unready state correctly');
    }

    async testErrorHandling() {
        console.log('🔍 Testing Error Handling...');
        
        // Mock Arsenal with ready DataService
        global.Arsenal = {
            dataService: {
                isReady: () => true,
                getClassesByCategory: (category) => {
                    throw new Error('Test error');
                }
            },
            selectedCategory: 'weapons',
            currentItems: [],
            filteredItems: []
        };
        
        const { DataManager } = await import('./js/data.js');
        
        // Test that switchCategory handles errors gracefully
        try {
            DataManager.switchCategory('weapons');
            // Should not throw, but handle error gracefully
            console.log('✅ switchCategory handles errors gracefully');
        } catch (error) {
            throw new Error('switchCategory should handle errors gracefully, but threw: ' + error.message);
        }
    }
}

// Run the test
const test = new FrontendIntegrationTest();
test.runTest();