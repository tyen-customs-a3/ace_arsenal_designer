#!/usr/bin/env node

import { readFile } from 'fs/promises';
import { DataService } from './services/DataService.js';

// Simple test runner
class TestRunner {
    constructor() {
        this.tests = [];
        this.passed = 0;
        this.failed = 0;
    }

    test(name, fn) {
        this.tests.push({ name, fn });
    }

    async run() {
        console.log(`Running ${this.tests.length} tests...\n`);

        for (const { name, fn } of this.tests) {
            try {
                await fn();
                console.log(`✓ ${name}`);
                this.passed++;
            } catch (error) {
                console.log(`✗ ${name}: ${error.message}`);
                this.failed++;
            }
        }

        console.log(`\nResults: ${this.passed} passed, ${this.failed} failed`);
        return this.failed === 0;
    }
}

// Test DataService for Node.js environment
class TestDataService extends DataService {
    async initialize() {
        try {
            const text = await readFile(this.ndjsonPath, 'utf-8');
            const lines = text.split('\n').filter(line => line.trim());
            this.items = lines.map(line => JSON.parse(line));
            
            this._buildClassMaps();
            this._injectImplicitBaseClasses();
            this._buildInheritanceTree();
            this._resolveAllInheritance();
            this._annotateAccessorySlots();
            this._buildScopeFilteredLookup();
            
            this.isInitialized = true;
            this.loadError = null;
            return true;
        } catch (error) {
            this.isInitialized = false;
            this._resetState();
            this.loadError = error;
            throw new Error(`DataService loading failed: ${error.message}`);
        }
    }
}

const runner = new TestRunner();

// Test 1: Data loads successfully
runner.test('DataService loads database', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();
    
    if (!dataService.isInitialized) {
        throw new Error('DataService failed to initialize');
    }
    
    const stats = dataService.getStats();
    if (stats.itemCount === 0) {
        throw new Error('No items loaded from database');
    }
});

// Test 2: Frontend can get items by category
runner.test('Frontend can get items by category', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();
    
    const rifles = dataService.getClassesByCategory('rifles');
    if (!Array.isArray(rifles)) {
        throw new Error('getClassesByCategory should return an array');
    }
    
    if (rifles.length === 0) {
        throw new Error('No rifles found in database');
    }
    
    const rifle = rifles[0];
    if (!rifle.class_name || !rifle.displayName || !rifle.category) {
        throw new Error('Rifle missing required fields');
    }
});

// Test 3: Frontend can find specific items
runner.test('Frontend can find specific items', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();
    
    const allItems = dataService.getAllItems();
    if (allItems.length === 0) {
        throw new Error('No items returned');
    }
    
    const firstItem = allItems[0];
    const foundItem = dataService.findClass(firstItem.class_name);
    
    if (!foundItem) {
        throw new Error('Could not find item by class_name');
    }
    
    if (foundItem.class_name !== firstItem.class_name) {
        throw new Error('Found item has wrong class_name');
    }
});

// Test 4: Data has expected structure for frontend
runner.test('Data has expected structure for frontend', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();
    
    const items = dataService.getAllItems();
    const item = items[0];
    
    const requiredFields = ['class_name', 'displayName', 'category', 'mod', 'scope'];
    for (const field of requiredFields) {
        if (!(field in item)) {
            throw new Error(`Item missing required field: ${field}`);
        }
    }
    
    if (item.scope < 2) {
        throw new Error('Items with scope < 2 should be filtered out');
    }
});

// Test 5: Weapon categories exclude CfgVehicles weapon proxies
runner.test('Weapon categories exclude Weapon_Base_F proxies', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();

    const weaponCategories = ['rifles', 'pistols', 'launchers'];
    for (const cat of weaponCategories) {
        const items = dataService.getClassesByCategory(cat);
        if (items.length === 0) {
            throw new Error(`No items found for category ${cat}`);
        }
        for (const item of items) {
            const chain = dataService.getInheritanceChain(item.class_name);
            if (chain.includes('Weapon_Base_F')) {
                throw new Error(`Proxy class leaked into ${cat}: ${item.class_name}`);
            }
        }
    }
});

// Test 6: CUP pistol should include real CfgWeapons and exclude vehicle proxy
runner.test('CUP TT pistol includes real weapon, excludes proxy', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();

    const pistols = dataService.getClassesByCategory('pistols');
    const names = new Set(pistols.map(i => i.class_name));

    // Real weapon present
    if (!names.has('CUP_hgun_TT')) {
        throw new Error('CUP_hgun_TT not found in pistols');
    }
    // Proxy excluded
    if (names.has('CUP_Weapon_hgun_TT')) {
        throw new Error('CUP_Weapon_hgun_TT should not be in pistols');
    }

    // Sanity: ensure the included one inherits from Pistol_Base_F
    const chain = dataService.getInheritanceChain('CUP_hgun_TT');
    if (!chain.includes('Pistol_Base_F')) {
        throw new Error('CUP_hgun_TT does not inherit from Pistol_Base_F');
    }
});

// Test 7: Compatible magazines extraction for a known pistol
runner.test('DataService returns compatible magazines for Rook-40', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();

    const rook = dataService.findClass('hgun_Rook40_F');
    if (!rook) {
        throw new Error('hgun_Rook40_F not found');
    }

    const mags = dataService.getCompatibleMagazines(rook);
    if (!Array.isArray(mags) || mags.length === 0) {
        throw new Error('No compatible magazines returned for Rook-40');
    }

    const names = new Set(mags.map(m => m.class_name));
    if (!names.has('30Rnd_9x21_Mag')) {
        throw new Error('Expected 30Rnd_9x21_Mag among compatible magazines');
    }
});

// Test 8: Compatible optics extraction falls back to optics category
runner.test('DataService returns optics for rifles/pistols', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();

    const mx = dataService.findClass('arifle_MX_F');
    if (!mx) {
        throw new Error('arifle_MX_F not found');
    }

    const optics = dataService.getCompatibleAccessories(mx, 'optics');
    if (!Array.isArray(optics) || optics.length === 0) {
        throw new Error('Expected optics for rifle category');
    }
    if (!optics.every(o => o.category === 'optics')) {
        throw new Error('Non-optics item returned in optics compatibility list');
    }
});

// Test 9: Attachments/bipods also require explicit compatibility
runner.test('DataService returns no attachments/bipods without explicit slots', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();

    const mx = dataService.findClass('arifle_MX_F');
    if (!mx) {
        throw new Error('arifle_MX_F not found');
    }

    const attachments = dataService.getCompatibleAccessories(mx, 'attachments');
    const bipods = dataService.getCompatibleAccessories(mx, 'bipods');
    if (!Array.isArray(attachments) || !Array.isArray(bipods)) {
        throw new Error('Compatibility methods should return arrays');
    }
    if (attachments.length !== 0) {
        throw new Error('Expected no attachments without explicit compatibility');
    }
    if (bipods.length !== 0) {
        throw new Error('Expected no bipods without explicit compatibility');
    }
});

// Test 10: Right-panel pseudo-categories map from real data
runner.test('DataService maps bipods and attachments from iteminfo_base', async () => {
    const dataService = new TestDataService('database.ndjson');
    await dataService.initialize();

    const bipods = dataService.getClassesByCategory('bipods');
    if (!Array.isArray(bipods) || bipods.length === 0) {
        throw new Error('No bipods found via pseudo-category mapping');
    }
    const hasKnownBipod = bipods.some(i => i.class_name.startsWith('bipod_'));
    if (!hasKnownBipod) {
        throw new Error('Expected bipod_* class in bipods category');
    }

    const attachments = dataService.getClassesByCategory('attachments');
    if (!Array.isArray(attachments) || attachments.length === 0) {
        throw new Error('No attachments found via pseudo-category mapping');
    }
    const names = new Set(attachments.map(a => a.class_name));
    if (!names.has('muzzle_snds_H') || !names.has('acc_pointer_IR')) {
        throw new Error('Expected muzzle_snds_H and acc_pointer_IR in attachments category');
    }
});

// Run all tests
runner.run().then(success => {
    process.exit(success ? 0 : 1);
});
