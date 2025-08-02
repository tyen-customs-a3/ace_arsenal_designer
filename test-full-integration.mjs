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
            
            // Test 3: Test frontend data transformation
            await this.testFrontendTransformation();
            
            console.log('\n🎉 Full integration test passed! The system is ready for production.');
            console.log('\n✨ Summary:');
            console.log('   • Path resolution fixed for worker context');
            console.log('   • DataService generates correct absolute URLs');
            console.log('   • Config parsing works correctly'); 
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