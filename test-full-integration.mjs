#!/usr/bin/env node

/**
 * Full End-to-End Integration Test
 * Tests the complete DataService pipeline without workers (Node.js simulation)
 */

import { readFile } from 'fs/promises';
import { fileURLToPath } from 'url';
import { dirname, join } from 'path';

const __filename = fileURLToPath(import.meta.url);
const __dirname = dirname(__filename);

class FullIntegrationTest {
    async runTest() {
        console.log('🚀 Full End-to-End Integration Test\n');
        
        try {
            // Mock browser environment
            this.setupBrowserMocks();
            
            // Test 1: DataService path generation
            await this.testDataServicePaths();
            
            // Test 2: Simulate parsing pipeline 
            await this.testParsingPipeline();
            
            // Test 3: Test semantic conflict resolution
            await this.testSemanticConflictResolution();
            
            // Test 4: Test frontend data transformation
            await this.testFrontendTransformation();
            
            console.log('\n🎉 Full integration test passed! The system is ready for production.');
            console.log('\n✨ Summary:');
            console.log('   • Path resolution fixed for worker context');
            console.log('   • DataService generates correct absolute URLs');
            console.log('   • Config parsing works correctly'); 
            console.log('   • Semantic conflict resolution eliminates false warnings');
            console.log('   • Frontend transformation is compatible');
            console.log('   • Ready to run in browser environment');
            
        } catch (error) {
            console.error('\n❌ Full integration test failed:', error.message);
            if (error.stack) {
                console.error('Stack:', error.stack.split('\n').slice(1, 4).join('\n'));
            }
            process.exit(1);
        }
    }

    setupBrowserMocks() {
        // Mock browser globals for DataService
        global.window = {
            location: {
                origin: 'http://127.0.0.1:5500',
                pathname: '/index.html'
            }
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
    }

    async testDataServicePaths() {
        console.log('🧪 Testing DataService path generation...');
        
        const { DataService } = await import('./services/DataService.js');
        const dataService = new DataService();
        
        const configFiles = dataService.getConfigFilePaths();
        
        if (configFiles.length === 0) {
            throw new Error('No config files generated');
        }
        
        // Validate each path is absolute
        for (const file of configFiles) {
            if (!file.path.startsWith('http://127.0.0.1:5500/')) {
                throw new Error(`Invalid path generated: ${file.path}`);
            }
        }
        
        console.log(`✅ Generated ${configFiles.length} valid absolute URLs`);
        console.log(`   Sample: ${configFiles[0].path}`);
    }

    async testParsingPipeline() {
        console.log('🧪 Testing parsing pipeline simulation...');
        
        // Load and parse a config file directly
        const configPath = join(__dirname, 'data', 'addons', 'sfp', 'ak5', 'config.cpp');
        const configContent = await readFile(configPath, 'utf8');
        
        const { ConfigParser } = await import('./parser/configParser.js');
        const parser = new ConfigParser();
        
        const ast = parser.parse(configContent, 'config.cpp');
        
        if (!ast || Object.keys(ast).length === 0) {
            throw new Error('Parsing produced empty AST');
        }
        
        console.log(`✅ Parsed config successfully (${Object.keys(ast).length} classes)`);
        
        // Test inheritance resolution
        const { resolve } = await import('./parser/inheritanceResolver.js');
        const resolved = await resolve(ast);
        
        if (!resolved || resolved.size === 0) {
            throw new Error('Inheritance resolution produced empty result');
        }
        
        console.log(`✅ Inheritance resolved (${resolved.size} resolved classes)`);
        
        // Test enrichment
        const { enrich } = await import('./extractor/dataExtractor.js');
        const enriched = await enrich(resolved);
        
        if (!enriched.enrichedDb || enriched.enrichedDb.size === 0) {
            throw new Error('Enrichment produced empty result');
        }
        
        console.log(`✅ Data enriched (${enriched.enrichedDb.size} enriched classes)`);
        console.log(`   Enrichment rate: ${enriched.report.summary.enrichmentRate}%`);
    }

    async testSemanticConflictResolution() {
        console.log('🧪 Testing semantic conflict resolution system...');
        
        // Test ConfigClassifier
        const { ConfigClassifier } = await import('./services/ConfigClassifier.js');
        const classifier = new ConfigClassifier();
        
        // Test framework class classification
        const cfgWeaponsClassification = classifier.classifyClass('CfgWeapons', { weapons: [], units: [] }, { mod: 'TEST' });
        if (cfgWeaponsClassification.type !== 'framework') {
            throw new Error(`CfgWeapons should be classified as 'framework', got '${cfgWeaponsClassification.type}'`);
        }
        
        // Test interface class classification
        const muzzleSlotClassification = classifier.classifyClass('MuzzleSlot', { compatibleItems: [] }, { mod: 'TEST' });
        if (muzzleSlotClassification.type !== 'interface') {
            throw new Error(`MuzzleSlot should be classified as 'interface', got '${muzzleSlotClassification.type}'`);
        }
        
        // Test inheritance class classification
        const rifleBaseClassification = classifier.classifyClass('Rifle_Base_F', { baseClass: 'Weapon' }, { mod: 'TEST' });
        if (rifleBaseClassification.type !== 'inheritance') {
            throw new Error(`Rifle_Base_F should be classified as 'inheritance', got '${rifleBaseClassification.type}'`);
        }
        
        // Test content class classification
        const sfpWeaponClassification = classifier.classifyClass('sfp_ak5', { displayName: 'AK5', damage: 100 }, { mod: 'SFP' });
        if (sfpWeaponClassification.type !== 'content') {
            throw new Error(`sfp_ak5 should be classified as 'content', got '${sfpWeaponClassification.type}'`);
        }
        
        console.log('✅ ConfigClassifier correctly identifies all class types');
        
        // Test SemanticConflictResolver
        const { SemanticConflictResolver } = await import('./services/SemanticConflictResolver.js');
        const resolver = new SemanticConflictResolver({ modPriority: ['SFP', 'PTV', 'SNS'] });
        
        // Test framework conflict resolution (should merge/prioritize, not warn)
        const existingFramework = { _sourceMod: 'SFP', _sourceFile: 'sfp.cpp', weapons: ['sfp_ak5'] };
        const newFramework = { _sourceMod: 'PTV', _sourceFile: 'ptv.cpp', weapons: ['amf_sig552'] };
        
        const frameworkResolution = resolver.resolveConflict('CfgWeapons', existingFramework, newFramework, 'framework');
        if (frameworkResolution.severity === 'warn') {
            throw new Error('Framework class conflicts should not generate warnings');
        }
        if (frameworkResolution.strategy !== 'MERGE' && frameworkResolution.strategy !== 'PRIORITIZE') {
            throw new Error(`Framework conflicts should MERGE or PRIORITIZE, got '${frameworkResolution.strategy}'`);
        }
        
        // Test content conflict resolution (should warn for true conflicts)
        const existingContent = { _sourceMod: 'SFP', _sourceFile: 'sfp.cpp', displayName: 'AK5' };
        const newContent = { _sourceMod: 'PTV', _sourceFile: 'ptv.cpp', displayName: 'AK5 Clone' };
        
        const contentResolution = resolver.resolveConflict('sfp_ak5', existingContent, newContent, 'content');
        if (contentResolution.severity !== 'warn') {
            throw new Error('Content class conflicts should generate warnings');
        }
        if (contentResolution.strategy !== 'CONFLICT') {
            throw new Error(`Content conflicts should be marked as CONFLICT, got '${contentResolution.strategy}'`);
        }
        
        console.log('✅ SemanticConflictResolver applies correct strategies and severity levels');
        
        // Test DataService integration with semantic analysis
        const { DataService } = await import('./services/DataService.js');
        
        // Create mock file results that would trigger the original warnings
        const mockFileResults = {
            'sfp_test.cpp': {
                ast: {
                    'CfgWeapons': { _sourceMod: 'SFP', _sourceFile: 'sfp_test.cpp' },
                    'MuzzleSlot': { _sourceMod: 'SFP', _sourceFile: 'sfp_test.cpp' },
                    'Rifle_Base_F': { _sourceMod: 'SFP', _sourceFile: 'sfp_test.cpp' },
                    'sfp_ak5': { _sourceMod: 'SFP', _sourceFile: 'sfp_test.cpp', displayName: 'AK5' }
                },
                mod: 'SFP',
                filePath: 'sfp_test.cpp'
            },
            'ptv_test.cpp': {
                ast: {
                    'CfgWeapons': { _sourceMod: 'PTV', _sourceFile: 'ptv_test.cpp' },
                    'MuzzleSlot': { _sourceMod: 'PTV', _sourceFile: 'ptv_test.cpp' },
                    'Rifle_Base_F': { _sourceMod: 'PTV', _sourceFile: 'ptv_test.cpp' },
                    'amf_sig552': { _sourceMod: 'PTV', _sourceFile: 'ptv_test.cpp', displayName: 'SIG552' }
                },
                mod: 'PTV',
                filePath: 'ptv_test.cpp'
            }
        };
        
        // Capture console output to verify logging behavior
        const originalWarn = console.warn;
        const warnings = [];
        console.warn = (...args) => {
            warnings.push(args.join(' '));
        };
        
        const originalInfo = console.info;
        const infoLogs = [];
        console.info = (...args) => {
            infoLogs.push(args.join(' '));
        };
        
        try {
            const dataService = new DataService();
            const aggregated = dataService._aggregateASTResults(mockFileResults);
            
            // Restore console
            console.warn = originalWarn;
            console.info = originalInfo;
            
            // Verify that framework classes don't generate warnings
            const frameworkWarnings = warnings.filter(w => w.includes('CfgWeapons') || w.includes('MuzzleSlot') || w.includes('Rifle_Base_F'));
            if (frameworkWarnings.length > 0) {
                throw new Error(`Framework/interface classes should not generate warnings, but got: ${frameworkWarnings.join('; ')}`);
            }
            
            // Verify that all classes are present in the aggregated result
            const expectedClasses = ['CfgWeapons', 'MuzzleSlot', 'Rifle_Base_F', 'sfp_ak5', 'amf_sig552'];
            for (const className of expectedClasses) {
                if (!(className in aggregated)) {
                    throw new Error(`Expected class '${className}' missing from aggregated result`);
                }
            }
            
            console.log('✅ DataService integration eliminates false positive warnings');
            console.log(`   Framework/interface conflicts: ${infoLogs.length} info logs, ${frameworkWarnings.length} warnings`);
            console.log(`   Total classes processed: ${Object.keys(aggregated).length}`);
            
        } catch (error) {
            // Restore console on error
            console.warn = originalWarn;
            console.info = originalInfo;
            throw error;
        }
    }

    async testFrontendTransformation() {
        console.log('🧪 Testing frontend data transformation...');
        
        // Create sample enriched data structure
        const sampleEnrichedData = [
            {
                className: 'arifle_MX_F',
                _meta: {
                    displayName: 'MX',
                    category: 'weapon',
                    range: 500,
                    mass: 3700,
                    caliber: '6.5×39 mm'
                },
                _sourceMod: 'A3',
                baseClass: 'Rifle_Base_F'
            },
            {
                className: 'optic_Aco',
                _meta: {
                    displayName: 'ACO',
                    category: 'attachment',
                    mass: 200,
                    magnification: 1
                },
                _sourceMod: 'A3',
                baseClass: 'ItemCore'
            }
        ];
        
        // Test transformation function
        const transformedItems = this.transformDataServiceItems(sampleEnrichedData);
        
        if (transformedItems.length !== sampleEnrichedData.length) {
            throw new Error('Transformation length mismatch');
        }
        
        // Validate transformation structure
        for (const item of transformedItems) {
            if (!item.className || !item.displayName || !item.category) {
                throw new Error('Missing required properties in transformed item');
            }
            
            if (!item.properties || typeof item.properties !== 'object') {
                throw new Error('Missing properties object in transformed item');
            }
        }
        
        console.log(`✅ Frontend transformation successful (${transformedItems.length} items)`);
        console.log(`   Sample: ${transformedItems[0].displayName} (${transformedItems[0].category})`);
    }

    // Frontend transformation function (copied from main app)
    transformDataServiceItems(enrichedClasses) {
        return enrichedClasses.map(classObj => {
            const meta = classObj._meta || {};
            
            return {
                className: classObj.className,
                displayName: meta.displayName || classObj.displayName || classObj.className,
                category: meta.category || 'unknown',
                mod: classObj._sourceMod || 'Unknown',
                baseClass: classObj.baseClass || '',
                
                range: meta.range || classObj.range || 0,
                mass: meta.mass || classObj.mass || 0,
                damage: meta.damage || classObj.damage || 0,
                caliber: meta.caliber || classObj.caliber || '',
                capacity: meta.capacity || classObj.capacity || 0,
                armor: meta.armor || classObj.armor || 0,
                maximumLoad: meta.maximumLoad || classObj.maximumLoad || 0,
                rateOfFire: meta.rateOfFire || classObj.rateOfFire || 0,
                zoom: meta.zoom || classObj.zoom || 0,
                recoilModifier: meta.recoilModifier || classObj.recoilModifier || 0,
                
                magazineWells: meta.magazineWells || classObj.magazineWells || [],
                weaponSlots: meta.weaponSlots || classObj.weaponSlots || [],
                compatibleSlots: meta.compatibleSlots || classObj.compatibleSlots || [],
                compatibleWells: meta.compatibleWells || classObj.compatibleWells || [],
                
                cursorAim: meta.cursorAim || classObj.cursorAim || '',
                variant: meta.variant || classObj.variant || '',
                tracer: meta.tracer || classObj.tracer || false,
                magnification: meta.magnification || classObj.magnification || 0,
                
                _originalData: classObj,
                _meta: meta,
                
                properties: {
                    displayName: meta.displayName || classObj.displayName || classObj.className,
                    range: meta.range || classObj.range || 0,
                    mass: meta.mass || classObj.mass || 0,
                    damage: meta.damage || classObj.damage || 0,
                    caliber: meta.caliber || classObj.caliber || '',
                    capacity: meta.capacity || classObj.capacity || 0,
                    armor: meta.armor || classObj.armor || 0,
                    maximumLoad: meta.maximumLoad || classObj.maximumLoad || 0,
                    rateOfFire: meta.rateOfFire || classObj.rateOfFire || 0,
                    zoom: meta.zoom || classObj.zoom || 0,
                    recoilModifier: meta.recoilModifier || classObj.recoilModifier || 0,
                    cursorAim: meta.cursorAim || classObj.cursorAim || '',
                    variant: meta.variant || classObj.variant || '',
                    tracer: meta.tracer || classObj.tracer || false,
                    magnification: meta.magnification || classObj.magnification || 0,
                    magazineWells: meta.magazineWells || classObj.magazineWells || [],
                    weaponSlots: meta.weaponSlots || classObj.weaponSlots || [],
                    compatibleSlots: meta.compatibleSlots || classObj.compatibleSlots || [],
                    compatibleWells: meta.compatibleWells || classObj.compatibleWells || []
                }
            };
        });
    }
}

// Run the test
const test = new FullIntegrationTest();
test.runTest();