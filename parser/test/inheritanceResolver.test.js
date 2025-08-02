/**
 * Test suite for ARMA3 config inheritance resolver
 * Tests nested class definitions and class name conflict resolution
 */

import { resolve, getInheritanceChain, validateResolvedDatabase } from '../inheritanceResolver.js';

/**
 * Test helper to create a mock AST structure
 */
function createMockAST(structure) {
    return structure;
}

/**
 * Test helper to verify resolved class structure
 */
function assertClassResolved(resolvedMap, className, expectedProperties) {
    const resolvedClass = resolvedMap.get(className);
    if (!resolvedClass) {
        throw new Error(`Class '${className}' not found in resolved map`);
    }
    
    for (const [key, value] of Object.entries(expectedProperties)) {
        if (JSON.stringify(resolvedClass[key]) !== JSON.stringify(value)) {
            throw new Error(`Property mismatch for ${className}.${key}: expected ${JSON.stringify(value)}, got ${JSON.stringify(resolvedClass[key])}`);
        }
    }
}

/**
 * Test 1: Basic inheritance resolution
 */
function testBasicInheritance() {
    console.log('\n=== Test 1: Basic Inheritance ===');
    
    const ast = createMockAST({
        "Rifle": {
            className: "Rifle",
            baseClass: null,
            properties: { damage: 10, accuracy: 0.5 },
            subClasses: {},
            _sourceMod: "BaseGame",
            _sourceFile: "base.cpp"
        },
        "Rifle_Base_F": {
            className: "Rifle_Base_F",
            baseClass: "Rifle",
            properties: { damage: 15, range: 500 },
            subClasses: {},
            _sourceMod: "BaseGame",
            _sourceFile: "base.cpp"
        },
        "arifle_MX_F": {
            className: "arifle_MX_F",
            baseClass: "Rifle_Base_F",
            properties: { damage: 20 },
            subClasses: {},
            _sourceMod: "Arma3",
            _sourceFile: "weapons.cpp"
        }
    });
    
    const resolved = resolve(ast);
    
    // Verify inheritance chain
    assertClassResolved(resolved, "arifle_MX_F", {
        properties: { damage: 20, accuracy: 0.5, range: 500 }
    });
    
    console.log('✓ Basic inheritance test passed');
}

/**
 * Test 2: Nested class definitions (ARMA3 pattern)
 */
function testNestedClasses() {
    console.log('\n=== Test 2: Nested Classes ===');
    
    const ast = createMockAST({
        "CfgWeapons": {
            className: "CfgWeapons",
            baseClass: null,
            properties: {},
            subClasses: {
                "Rifle_Base_F": {
                    className: "Rifle_Base_F",
                    baseClass: null,
                    properties: { type: "rifle" },
                    subClasses: {
                        "Single": {
                            className: "Single",
                            baseClass: "Mode_SemiAuto",
                            properties: { reloadTime: 0.1 },
                            subClasses: {
                                "BaseSoundModeType": {
                                    className: "BaseSoundModeType",
                                    baseClass: null,
                                    properties: { volume: 1.0 },
                                    subClasses: {}
                                },
                                "StandardSound": {
                                    className: "StandardSound",
                                    baseClass: "BaseSoundModeType",
                                    properties: { soundSetShot: ["shot1", "shot2"] },
                                    subClasses: {}
                                }
                            }
                        }
                    }
                }
            },
            _sourceMod: "BaseGame",
            _sourceFile: "base.cpp"
        }
    });
    
    const resolved = resolve(ast);
    
    // Verify nested classes are resolved correctly
    assertClassResolved(resolved, "StandardSound", {
        properties: { volume: 1.0, soundSetShot: ["shot1", "shot2"] }
    });
    
    console.log('✓ Nested classes test passed');
}

/**
 * Test 3: Class name conflicts across mods
 */
function testClassNameConflicts() {
    console.log('\n=== Test 3: Class Name Conflicts ===');
    
    const ast = createMockAST({
        // First mod defines StandardSound - since _buildGlobalClassMap uses key as class name,
        // we need to use the actual class name as the key
        "StandardSound": {
            className: "StandardSound",
            baseClass: null,
            properties: { volume: 1.0, range: 100 },
            subClasses: {},
            _sourceMod: "SFP",
            _sourceFile: "sfp_sounds.cpp"
        },
        // Weapon from second mod that also defines StandardSound as nested class
        "PTV_Weapon": {
            className: "PTV_Weapon",
            baseClass: null,
            properties: {},
            subClasses: {
                "Single": {
                    className: "Single",
                    baseClass: null,
                    properties: {},
                    subClasses: {
                        "StandardSound": {
                            className: "StandardSound",
                            baseClass: null,
                            properties: { volume: 0.8, pitch: 1.2 },
                            subClasses: {},
                            _sourceMod: "PTV",
                            _sourceFile: "ptv_sounds.cpp"
                        }
                    }
                }
            },
            _sourceMod: "PTV",
            _sourceFile: "ptv_weapons.cpp"
        }
    });
    
    // Should see warning about conflict
    const resolved = resolve(ast);
    
    // First definition should win (SFP)
    const globalStandardSound = resolved.get("StandardSound");
    if (!globalStandardSound || globalStandardSound.properties.range !== 100) {
        throw new Error('Class name conflict resolution failed - wrong class kept');
    }
    
    // Verify the nested StandardSound is still resolved
    const nestedPath = resolved.get("Single");
    if (!nestedPath) {
        // StandardSound inside Single should also be in the global map
        const nestedStandard = Array.from(resolved.values()).find(
            cls => cls._sourceMod === "PTV" && cls.className === "StandardSound"
        );
        if (nestedStandard) {
            console.log('✓ Nested StandardSound preserved despite conflict');
        }
    }
    
    console.log('✓ Class name conflict test passed');
}

/**
 * Test 4: LinkedItems pattern (common ARMA3 config pattern)
 */
function testLinkedItemsPattern() {
    console.log('\n=== Test 4: LinkedItems Pattern ===');
    
    const ast = createMockAST({
        "Weapon_Base": {
            className: "Weapon_Base",
            baseClass: null,
            properties: {},
            subClasses: {
                "LinkedItems": {
                    className: "LinkedItems",
                    baseClass: null,
                    properties: {},
                    subClasses: {
                        "LinkedItemsUnder": {
                            className: "LinkedItemsUnder",
                            baseClass: null,
                            properties: { item: "none", slot: "none" },
                            subClasses: {}
                        }
                    }
                }
            },
            _sourceMod: "BaseGame",
            _sourceFile: "base.cpp"
        },
        "ptv_weapon": {
            className: "ptv_weapon",
            baseClass: "Weapon_Base",
            properties: { displayName: "PTV Weapon" },
            subClasses: {
                "LinkedItems": {
                    className: "LinkedItems",
                    baseClass: null,
                    properties: {},
                    subClasses: {
                        "LinkedItemsUnder": {
                            className: "LinkedItemsUnder",
                            baseClass: null,
                            properties: { item: "ptv_grip", slot: "GripodSlot" },
                            subClasses: {}
                        }
                    }
                }
            },
            _sourceMod: "PTV",
            _sourceFile: "ptv_weapons.cpp"
        },
        "ptv_weapon_variant": {
            className: "ptv_weapon_variant",
            baseClass: "ptv_weapon",
            properties: { displayName: "PTV Weapon Variant" },
            subClasses: {
                "LinkedItems": {
                    className: "LinkedItems",
                    baseClass: null,
                    properties: {},
                    subClasses: {
                        "LinkedItemsUnder": {
                            className: "LinkedItemsUnder",
                            baseClass: null,
                            properties: { item: "ptv_afg", slot: "GripodSlot" },
                            subClasses: {}
                        }
                    }
                }
            },
            _sourceMod: "PTV",
            _sourceFile: "ptv_weapons.cpp"
        }
    });
    
    const resolved = resolve(ast);
    
    // Verify nested LinkedItems are properly overridden
    const weaponVariant = resolved.get("ptv_weapon_variant");
    const linkedItemsUnder = weaponVariant.subClasses?.LinkedItems?.subClasses?.LinkedItemsUnder;
    
    if (!linkedItemsUnder || linkedItemsUnder.properties.item !== "ptv_afg") {
        throw new Error('LinkedItems override failed');
    }
    
    console.log('✓ LinkedItems pattern test passed');
}

/**
 * Test 5: Circular inheritance detection
 */
function testCircularInheritance() {
    console.log('\n=== Test 5: Circular Inheritance ===');
    
    const ast = createMockAST({
        "ClassA": {
            className: "ClassA",
            baseClass: "ClassC",
            properties: { value: 1 },
            subClasses: {}
        },
        "ClassB": {
            className: "ClassB",
            baseClass: "ClassA",
            properties: { value: 2 },
            subClasses: {}
        },
        "ClassC": {
            className: "ClassC",
            baseClass: "ClassB",
            properties: { value: 3 },
            subClasses: {}
        }
    });
    
    try {
        resolve(ast);
        throw new Error('Circular inheritance not detected');
    } catch (error) {
        if (error.message.includes('Circular inheritance')) {
            console.log('✓ Circular inheritance detection test passed');
        } else {
            throw error;
        }
    }
}

/**
 * Test 6: Missing base class handling
 */
function testMissingBaseClass() {
    console.log('\n=== Test 6: Missing Base Class ===');
    
    const ast = createMockAST({
        "MyWeapon": {
            className: "MyWeapon",
            baseClass: "NonExistentClass",
            properties: { damage: 50 },
            subClasses: {}
        }
    });
    
    const resolved = resolve(ast);
    
    // Should still resolve the class despite missing base
    assertClassResolved(resolved, "MyWeapon", {
        properties: { damage: 50 }
    });
    
    console.log('✓ Missing base class test passed');
}

/**
 * Test 7: Deep property merging
 */
function testDeepPropertyMerging() {
    console.log('\n=== Test 7: Deep Property Merging ===');
    
    const ast = createMockAST({
        "BaseWeapon": {
            className: "BaseWeapon",
            baseClass: null,
            properties: {
                WeaponSlotsInfo: {
                    mass: 100,
                    MuzzleSlot: { linkProxy: "\\muzzle", compatibleItems: ["suppressor1"] },
                    CowsSlot: { linkProxy: "\\optic", compatibleItems: ["optic1"] }
                }
            },
            subClasses: {}
        },
        "DerivedWeapon": {
            className: "DerivedWeapon",
            baseClass: "BaseWeapon",
            properties: {
                WeaponSlotsInfo: {
                    mass: 80,
                    MuzzleSlot: { compatibleItems: ["suppressor2", "suppressor3"] },
                    PointerSlot: { linkProxy: "\\pointer", compatibleItems: ["laser1"] }
                }
            },
            subClasses: {}
        }
    });
    
    const resolved = resolve(ast);
    const weapon = resolved.get("DerivedWeapon");
    
    // Check deep merge results
    const slots = weapon.properties.WeaponSlotsInfo;
    if (slots.mass !== 80) throw new Error('Mass not overridden');
    if (slots.MuzzleSlot.linkProxy !== "\\muzzle") throw new Error('MuzzleSlot linkProxy not inherited');
    if (JSON.stringify(slots.MuzzleSlot.compatibleItems) !== JSON.stringify(["suppressor2", "suppressor3"])) {
        throw new Error('MuzzleSlot compatibleItems not overridden');
    }
    if (!slots.CowsSlot) throw new Error('CowsSlot not inherited');
    if (!slots.PointerSlot) throw new Error('PointerSlot not added');
    
    console.log('✓ Deep property merging test passed');
}

/**
 * Test 8: Inheritance chain validation
 */
function testInheritanceChain() {
    console.log('\n=== Test 8: Inheritance Chain ===');
    
    const ast = createMockAST({
        "Default": {
            className: "Default",
            baseClass: null,
            properties: {},
            subClasses: {}
        },
        "Rifle": {
            className: "Rifle", 
            baseClass: "Default",
            properties: {},
            subClasses: {}
        },
        "Rifle_Base_F": {
            className: "Rifle_Base_F",
            baseClass: "Rifle",
            properties: {},
            subClasses: {}
        },
        "arifle_MX_F": {
            className: "arifle_MX_F",
            baseClass: "Rifle_Base_F",
            properties: {},
            subClasses: {}
        }
    });
    
    const resolved = resolve(ast);
    const globalMap = new Map();
    for (const [className, classData] of resolved) {
        globalMap.set(className, classData);
    }
    
    const chain = getInheritanceChain('arifle_MX_F', globalMap);
    const expected = ['arifle_MX_F', 'Rifle_Base_F', 'Rifle', 'Default'];
    
    if (JSON.stringify(chain) !== JSON.stringify(expected)) {
        throw new Error(`Inheritance chain mismatch: got ${JSON.stringify(chain)}`);
    }
    
    console.log('✓ Inheritance chain test passed');
}

/**
 * Test 9: Database validation
 */
function testDatabaseValidation() {
    console.log('\n=== Test 9: Database Validation ===');
    
    const ast = createMockAST({
        "ValidClass": {
            className: "ValidClass",
            baseClass: null,
            properties: { value: 1 },
            subClasses: {},
            _sourceMod: "TestMod"
        },
        "InvalidClass": {
            className: "WrongName", // Mismatch
            baseClass: null,
            properties: {},
            subClasses: {}
        }
    });
    
    const resolved = resolve(ast);
    const report = validateResolvedDatabase(resolved);
    
    if (report.issues.length === 0) {
        throw new Error('Validation should have found issues');
    }
    
    console.log('✓ Database validation test passed');
}

/**
 * Run all tests
 */
function runAllTests() {
    console.log('Starting Inheritance Resolver Tests...\n');
    
    const tests = [
        testBasicInheritance,
        testNestedClasses,
        testClassNameConflicts,
        testLinkedItemsPattern,
        testCircularInheritance,
        testMissingBaseClass,
        testDeepPropertyMerging,
        testInheritanceChain,
        testDatabaseValidation
    ];
    
    let passed = 0;
    let failed = 0;
    
    for (const test of tests) {
        try {
            test();
            passed++;
        } catch (error) {
            console.error(`✗ Test failed: ${test.name}`);
            console.error(`  Error: ${error.message}`);
            failed++;
        }
    }
    
    console.log('\n' + '='.repeat(50));
    console.log(`Test Results: ${passed} passed, ${failed} failed`);
    console.log('='.repeat(50));
    
    return failed === 0;
}

// Export for module usage
export { runAllTests };

// Run tests if executed directly
if (typeof process !== 'undefined' && process.argv && import.meta.url === `file://${process.argv[1]?.replace(/\\/g, '/')}`) {
    const success = runAllTests();
    process.exit(success ? 0 : 1);
}