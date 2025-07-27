// Realistic Arma 3 equipment data based on actual config structures

import { createItem, createInheritedItem, createVariant } from './inheritance.js';

export function generateBackpacks() {
    const items = [];
    
    // ===== BASE BACKPACK CLASSES (Real Arma 3 structure) =====
    
    // Bag_Base - Core base class for all backpacks
    const bagBase = createItem('Bag_Base', 'Backpack Base', 'backpacks', {
        subcategory: 'backpacks',
        maximumLoad: 160,
        mass: 40,
        inheritance: ['CfgVehicles', 'All', 'Bag_Base'],
        mod: 'A3',
        scope: 0,
        vehicleClass: 'Backpacks'
    });
    
    // ===== ASSAULT PACKS =====
    
    // B_AssaultPack_Base - Standard assault pack base
    const assaultPackBase = createInheritedItem('B_AssaultPack_Base', 'Assault Pack Base', 'backpacks', 'Bag_Base', ['Bag_Base'], {
        subcategory: 'backpacks',
        maximumLoad: 160,
        mass: 40,
        mod: 'A3',
        scope: 0
    });
    
    // Assault Pack variants with real class names and textures
    const assaultPackVariants = [
        { className: 'B_AssaultPack_khk', name: 'Assault Pack (Khaki)', texture: 'khaki', hiddenSelectionsTextures: ['\\a3\\weapons_f\\ammoboxes\\bags\\data\\backpack_compact_khk_co.paa'] },
        { className: 'B_AssaultPack_dgtl', name: 'Assault Pack (Digi)', texture: 'digital', hiddenSelectionsTextures: ['\\a3\\weapons_f\\ammoboxes\\bags\\data\\backpack_compact_digi_co.paa'] },
        { className: 'B_AssaultPack_rgr', name: 'Assault Pack (Green)', texture: 'green', hiddenSelectionsTextures: ['\\a3\\weapons_f\\ammoboxes\\bags\\data\\backpack_compact_rgr_co.paa'] },
        { className: 'B_AssaultPack_sgg', name: 'Assault Pack (Sage)', texture: 'sage', hiddenSelectionsTextures: ['\\a3\\weapons_f\\ammoboxes\\bags\\data\\backpack_compact_sgg_co.paa'] },
        { className: 'B_AssaultPack_blk', name: 'Assault Pack (Black)', texture: 'black', hiddenSelectionsTextures: ['\\a3\\weapons_f\\ammoboxes\\bags\\data\\backpack_compact_blk_co.paa'] },
        { className: 'B_AssaultPack_cbr', name: 'Assault Pack (Coyote)', texture: 'coyote', hiddenSelectionsTextures: ['\\a3\\weapons_f\\ammoboxes\\bags\\data\\backpack_compact_cbr_co.paa'] }
    ];
    
    assaultPackVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'backpacks', 'B_AssaultPack_Base', ['Bag_Base'], {
            subcategory: 'backpacks',
            maximumLoad: 160,
            mass: 40,
            mod: 'A3',
            scope: 2,
            hiddenSelections: ['camo'],
            hiddenSelectionsTextures: variant.hiddenSelectionsTextures,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // ===== FIELD PACKS =====
    
    const fieldPackVariants = [
        { className: 'B_FieldPack_khk', name: 'Field Pack (Khaki)', texture: 'khaki', maximumLoad: 240, mass: 60 },
        { className: 'B_FieldPack_oli', name: 'Field Pack (Olive)', texture: 'olive', maximumLoad: 240, mass: 60 },
        { className: 'B_FieldPack_cbr', name: 'Field Pack (Coyote)', texture: 'coyote', maximumLoad: 240, mass: 60 },
        { className: 'B_FieldPack_blk', name: 'Field Pack (Black)', texture: 'black', maximumLoad: 240, mass: 60 }
    ];
    
    fieldPackVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'backpacks', 'Bag_Base', ['Bag_Base'], {
            subcategory: 'backpacks',
            maximumLoad: variant.maximumLoad,
            mass: variant.mass,
            mod: 'A3',
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // ===== TACTICAL BACKPACKS =====
    
    const tacticalBackpackVariants = [
        { className: 'B_TacticalPack_oli', name: 'Tactical Backpack (Olive)', texture: 'olive', maximumLoad: 280, mass: 50 },
        { className: 'B_TacticalPack_rgr', name: 'Tactical Backpack (Green)', texture: 'green', maximumLoad: 280, mass: 50 },
        { className: 'B_TacticalPack_blk', name: 'Tactical Backpack (Black)', texture: 'black', maximumLoad: 280, mass: 50 },
        { className: 'B_TacticalPack_mcamo', name: 'Tactical Backpack (MTP)', texture: 'mtp', maximumLoad: 280, mass: 50 }
    ];
    
    tacticalBackpackVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'backpacks', 'Bag_Base', ['Bag_Base'], {
            subcategory: 'backpacks',
            maximumLoad: variant.maximumLoad,
            mass: variant.mass,
            mod: 'A3',
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // ===== KITBAGS =====
    
    const kitbagVariants = [
        { className: 'B_Kitbag_rgr', name: 'Kitbag (Green)', texture: 'green', maximumLoad: 280, mass: 50 },
        { className: 'B_Kitbag_mcamo', name: 'Kitbag (MTP)', texture: 'mtp', maximumLoad: 280, mass: 50 },
        { className: 'B_Kitbag_sgg', name: 'Kitbag (Sage)', texture: 'sage', maximumLoad: 280, mass: 50 },
        { className: 'B_Kitbag_cbr', name: 'Kitbag (Coyote)', texture: 'coyote', maximumLoad: 280, mass: 50 }
    ];
    
    kitbagVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'backpacks', 'Bag_Base', ['Bag_Base'], {
            subcategory: 'backpacks',
            maximumLoad: variant.maximumLoad,
            mass: variant.mass,
            mod: 'A3',
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // ===== CARRYALL BACKPACKS =====
    
    const carryallVariants = [
        { className: 'B_Carryall_oli', name: 'Carryall Backpack (Olive)', texture: 'olive', maximumLoad: 320, mass: 60 },
        { className: 'B_Carryall_khk', name: 'Carryall Backpack (Khaki)', texture: 'khaki', maximumLoad: 320, mass: 60 },
        { className: 'B_Carryall_cbr', name: 'Carryall Backpack (Coyote)', texture: 'coyote', maximumLoad: 320, mass: 60 },
        { className: 'B_Carryall_mcamo', name: 'Carryall Backpack (MTP)', texture: 'mtp', maximumLoad: 320, mass: 60 }
    ];
    
    carryallVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'backpacks', 'Bag_Base', ['Bag_Base'], {
            subcategory: 'backpacks',
            maximumLoad: variant.maximumLoad,
            mass: variant.mass,
            mod: 'A3',
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // ===== RHS MOD BACKPACKS =====
    
    const rhsBackpackVariants = [
        { className: 'rhs_assault_umbts', name: 'UMBTS Assault Pack', texture: 'umbts', maximumLoad: 180, mass: 45, mod: 'RHS_USAF' },
        { className: 'rhs_assault_umbts_engineer', name: 'UMBTS Assault Pack (Engineer)', texture: 'umbts_eng', maximumLoad: 200, mass: 50, mod: 'RHS_USAF' },
        { className: 'rhsusf_assault_eagleaiii_coy', name: 'Eagle A-III (Coyote)', texture: 'eagle_coy', maximumLoad: 160, mass: 40, mod: 'RHS_USAF' },
        { className: 'rhsusf_assault_eagleaiii_ocp', name: 'Eagle A-III (OCP)', texture: 'eagle_ocp', maximumLoad: 160, mass: 40, mod: 'RHS_USAF' },
        { className: 'rhsusf_assault_eagleaiii_ucp', name: 'Eagle A-III (UCP)', texture: 'eagle_ucp', maximumLoad: 160, mass: 40, mod: 'RHS_USAF' },
        { className: 'rhs_rd54', name: 'RD-54 (Flora)', texture: 'rd54_flora', maximumLoad: 280, mass: 60, mod: 'RHS_AFRF' },
        { className: 'rhs_rd54_emr1', name: 'RD-54 (EMR Summer)', texture: 'rd54_emr1', maximumLoad: 280, mass: 60, mod: 'RHS_AFRF' },
        { className: 'rhs_rd54_emr2', name: 'RD-54 (EMR Desert)', texture: 'rd54_emr2', maximumLoad: 280, mass: 60, mod: 'RHS_AFRF' },
        { className: 'rhs_sidor', name: 'Sidor', texture: 'sidor', maximumLoad: 240, mass: 55, mod: 'RHS_AFRF' }
    ];
    
    rhsBackpackVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'backpacks', 'Bag_Base', ['Bag_Base'], {
            subcategory: 'backpacks',
            maximumLoad: variant.maximumLoad,
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // ===== CUP MOD BACKPACKS =====
    
    const cupBackpackVariants = [
        { className: 'CUP_B_Alice_Pack_Khaki', name: 'ALICE Pack (Khaki)', texture: 'alice_khaki', maximumLoad: 320, mass: 65, mod: 'CUP_Creatures' },
        { className: 'CUP_B_Alice_Pack_OD', name: 'ALICE Pack (OD)', texture: 'alice_od', maximumLoad: 320, mass: 65, mod: 'CUP_Creatures' },
        { className: 'CUP_B_USMC_MOLLE', name: 'MOLLE Pack (USMC)', texture: 'molle_usmc', maximumLoad: 360, mass: 70, mod: 'CUP_Creatures' },
        { className: 'CUP_B_USMC_MOLLE_WDL', name: 'MOLLE Pack (Woodland)', texture: 'molle_wdl', maximumLoad: 360, mass: 70, mod: 'CUP_Creatures' },
        { className: 'CUP_B_GER_Pack_Flecktarn', name: 'German Pack (Flecktarn)', texture: 'ger_fleck', maximumLoad: 300, mass: 58, mod: 'CUP_Creatures' },
        { className: 'CUP_B_GER_Pack_Tropentarn', name: 'German Pack (Tropentarn)', texture: 'ger_trop', maximumLoad: 300, mass: 58, mod: 'CUP_Creatures' },
        { className: 'CUP_B_CivPack_WDL', name: 'Civilian Pack (Woodland)', texture: 'civ_wdl', maximumLoad: 220, mass: 48, mod: 'CUP_Creatures' },
        { className: 'CUP_B_Bergen_BAF', name: 'Bergen (BAF DPM)', texture: 'bergen_baf', maximumLoad: 340, mass: 68, mod: 'CUP_Creatures' },
        { className: 'CUP_B_Bergen_Hex', name: 'Bergen (Hex)', texture: 'bergen_hex', maximumLoad: 340, mass: 68, mod: 'CUP_Creatures' }
    ];
    
    cupBackpackVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'backpacks', 'Bag_Base', ['Bag_Base'], {
            subcategory: 'backpacks',
            maximumLoad: variant.maximumLoad,
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    return items;
}

export function generateVests() {
    const items = [];
    
    // ===== BASE VEST CLASSES =====
    
    // Vest_Camo_Base - Core base class for all vests
    const vestCamoBase = createItem('Vest_Camo_Base', 'Vest Base', 'vests', {
        subcategory: 'vests',
        maximumLoad: 80,
        mass: 40,
        inheritance: ['CfgWeapons', 'ItemCore', 'Vest_Camo_Base'],
        mod: 'A3',
        scope: 0,
        allowedSlots: [901]
    });
    
    // ===== PLATE CARRIERS =====
    
    const plateCarrierVariants = [
        { className: 'V_PlateCarrier1_rgr', name: 'Carrier Lite (Green)', texture: 'green', armor: 80, maximumLoad: 80, passThrough: 0.3 },
        { className: 'V_PlateCarrier1_blk', name: 'Carrier Lite (Black)', texture: 'black', armor: 80, maximumLoad: 80, passThrough: 0.3 },
        { className: 'V_PlateCarrier1_tna_F', name: 'Carrier Lite (Tropic)', texture: 'tropic', armor: 80, maximumLoad: 80, passThrough: 0.3 },
        { className: 'V_PlateCarrier2_rgr', name: 'Carrier Rig (Green)', texture: 'green', armor: 120, maximumLoad: 120, passThrough: 0.2 },
        { className: 'V_PlateCarrier2_blk', name: 'Carrier Rig (Black)', texture: 'black', armor: 120, maximumLoad: 120, passThrough: 0.2 },
        { className: 'V_PlateCarrierGL_rgr', name: 'Carrier GL Rig (Green)', texture: 'green', armor: 100, maximumLoad: 140, passThrough: 0.25 },
        { className: 'V_PlateCarrierGL_blk', name: 'Carrier GL Rig (Black)', texture: 'black', armor: 100, maximumLoad: 140, passThrough: 0.25 },
        { className: 'V_PlateCarrierGL_mtp', name: 'Carrier GL Rig (MTP)', texture: 'mtp', armor: 100, maximumLoad: 140, passThrough: 0.25 },
        { className: 'V_PlateCarrierSpec_rgr', name: 'Carrier Special Rig (Green)', texture: 'green', armor: 160, maximumLoad: 160, passThrough: 0.1 },
        { className: 'V_PlateCarrierSpec_blk', name: 'Carrier Special Rig (Black)', texture: 'black', armor: 160, maximumLoad: 160, passThrough: 0.1 },
        { className: 'V_PlateCarrierSpec_mtp', name: 'Carrier Special Rig (MTP)', texture: 'mtp', armor: 160, maximumLoad: 160, passThrough: 0.1 }
    ];
    
    plateCarrierVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'vests', 'Vest_Camo_Base', ['Vest_Camo_Base'], {
            subcategory: 'vests',
            maximumLoad: variant.maximumLoad,
            mass: 40,
            mod: 'A3',
            scope: 2,
            texture: variant.texture,
            armor: variant.armor,
            passThrough: variant.passThrough,
            hiddenSelections: ['camo']
        });
        items.push(item);
    });
    
    // ===== TACTICAL VESTS =====
    
    const tacticalVestVariants = [
        { className: 'V_TacVest_oli', name: 'Tactical Vest (Olive)', texture: 'olive', armor: 40, maximumLoad: 100, passThrough: 0.5 },
        { className: 'V_TacVest_khk', name: 'Tactical Vest (Khaki)', texture: 'khaki', armor: 40, maximumLoad: 100, passThrough: 0.5 },
        { className: 'V_TacVest_brn', name: 'Tactical Vest (Brown)', texture: 'brown', armor: 40, maximumLoad: 100, passThrough: 0.5 },
        { className: 'V_TacVest_camo', name: 'Tactical Vest (Camo)', texture: 'camo', armor: 40, maximumLoad: 100, passThrough: 0.5 },
        { className: 'V_TacVest_blk', name: 'Tactical Vest (Black)', texture: 'black', armor: 40, maximumLoad: 100, passThrough: 0.5 }
    ];
    
    tacticalVestVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'vests', 'Vest_Camo_Base', ['Vest_Camo_Base'], {
            subcategory: 'vests',
            maximumLoad: variant.maximumLoad,
            mass: 30,
            mod: 'A3',
            scope: 2,
            texture: variant.texture,
            armor: variant.armor,
            passThrough: variant.passThrough
        });
        items.push(item);
    });
    
    // ===== HARNESSES =====
    
    const harnessVariants = [
        { className: 'V_HarnessO_brn', name: 'LBV Harness (Brown)', texture: 'brown', armor: 20, maximumLoad: 160, passThrough: 0.7 },
        { className: 'V_HarnessO_gry', name: 'LBV Harness (Gray)', texture: 'gray', armor: 20, maximumLoad: 160, passThrough: 0.7 },
        { className: 'V_HarnessOGL_brn', name: 'LBV Grenadier Harness (Brown)', texture: 'brown', armor: 20, maximumLoad: 180, passThrough: 0.7 },
        { className: 'V_HarnessOGL_gry', name: 'LBV Grenadier Harness (Gray)', texture: 'gray', armor: 20, maximumLoad: 180, passThrough: 0.7 },
        { className: 'V_HarnessOSpec_brn', name: 'LBV Special Harness (Brown)', texture: 'brown', armor: 20, maximumLoad: 200, passThrough: 0.7 },
        { className: 'V_HarnessOSpec_gry', name: 'LBV Special Harness (Gray)', texture: 'gray', armor: 20, maximumLoad: 200, passThrough: 0.7 }
    ];
    
    harnessVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'vests', 'Vest_Camo_Base', ['Vest_Camo_Base'], {
            subcategory: 'vests',
            maximumLoad: variant.maximumLoad,
            mass: 25,
            mod: 'A3',
            scope: 2,
            texture: variant.texture,
            armor: variant.armor,
            passThrough: variant.passThrough
        });
        items.push(item);
    });
    
    // ===== CHEST RIGS =====
    
    const chestRigVariants = [
        { className: 'V_Chestrig_oli', name: 'Chest Rig (Olive)', texture: 'olive', armor: 10, maximumLoad: 140, passThrough: 0.8 },
        { className: 'V_Chestrig_rgr', name: 'Chest Rig (Green)', texture: 'green', armor: 10, maximumLoad: 140, passThrough: 0.8 },
        { className: 'V_Chestrig_khk', name: 'Chest Rig (Khaki)', texture: 'khaki', armor: 10, maximumLoad: 140, passThrough: 0.8 },
        { className: 'V_Chestrig_blk', name: 'Chest Rig (Black)', texture: 'black', armor: 10, maximumLoad: 140, passThrough: 0.8 }
    ];
    
    chestRigVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'vests', 'Vest_Camo_Base', ['Vest_Camo_Base'], {
            subcategory: 'vests',
            maximumLoad: variant.maximumLoad,
            mass: 20,
            mod: 'A3',
            scope: 2,
            texture: variant.texture,
            armor: variant.armor,
            passThrough: variant.passThrough
        });
        items.push(item);
    });
    
    // ===== RHS MOD VESTS =====
    
    const rhsVestVariants = [
        { className: 'rhsusf_iotv_ocp', name: 'IOTV (OCP)', texture: 'iotv_ocp', armor: 140, maximumLoad: 140, passThrough: 0.2, mod: 'RHS_USAF' },
        { className: 'rhsusf_iotv_ocp_Grenadier', name: 'IOTV Grenadier (OCP)', texture: 'iotv_ocp_gren', armor: 140, maximumLoad: 160, passThrough: 0.2, mod: 'RHS_USAF' },
        { className: 'rhsusf_iotv_ocp_Medic', name: 'IOTV Medic (OCP)', texture: 'iotv_ocp_med', armor: 140, maximumLoad: 150, passThrough: 0.2, mod: 'RHS_USAF' },
        { className: 'rhsusf_iotv_ucp', name: 'IOTV (UCP)', texture: 'iotv_ucp', armor: 140, maximumLoad: 140, passThrough: 0.2, mod: 'RHS_USAF' },
        { className: 'rhsusf_spcs_ocp', name: 'SPCS (OCP)', texture: 'spcs_ocp', armor: 120, maximumLoad: 120, passThrough: 0.25, mod: 'RHS_USAF' },
        { className: 'rhsusf_spcs_ocp_grenadier', name: 'SPCS Grenadier (OCP)', texture: 'spcs_ocp_gren', armor: 120, maximumLoad: 140, passThrough: 0.25, mod: 'RHS_USAF' },
        { className: 'rhs_6b23', name: '6B23 (Flora)', texture: '6b23_flora', armor: 100, maximumLoad: 100, passThrough: 0.3, mod: 'RHS_AFRF' },
        { className: 'rhs_6b23_digi', name: '6B23 (EMR Summer)', texture: '6b23_emr', armor: 100, maximumLoad: 100, passThrough: 0.3, mod: 'RHS_AFRF' },
        { className: 'rhs_6b23_engineer', name: '6B23 Engineer (Flora)', texture: '6b23_eng', armor: 100, maximumLoad: 120, passThrough: 0.3, mod: 'RHS_AFRF' },
        { className: 'rhs_6b13', name: '6B13 (Flora)', texture: '6b13_flora', armor: 80, maximumLoad: 80, passThrough: 0.35, mod: 'RHS_AFRF' },
        { className: 'rhs_6b13_emr', name: '6B13 (EMR Summer)', texture: '6b13_emr', armor: 80, maximumLoad: 80, passThrough: 0.35, mod: 'RHS_AFRF' }
    ];
    
    rhsVestVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'vests', 'Vest_Camo_Base', ['Vest_Camo_Base'], {
            subcategory: 'vests',
            maximumLoad: variant.maximumLoad,
            mass: 40,
            mod: variant.mod,
            scope: 2,
            texture: variant.texture,
            armor: variant.armor,
            passThrough: variant.passThrough,
            hiddenSelections: ['camo']
        });
        items.push(item);
    });
    
    // ===== CUP MOD VESTS =====
    
    const cupVestVariants = [
        { className: 'CUP_V_BAF_Osprey_Mk4_MTP', name: 'Osprey Mk4 (MTP)', texture: 'osprey_mtp', armor: 130, maximumLoad: 130, passThrough: 0.22, mod: 'CUP_Creatures' },
        { className: 'CUP_V_BAF_Osprey_Mk4_DPM', name: 'Osprey Mk4 (DPM)', texture: 'osprey_dpm', armor: 130, maximumLoad: 130, passThrough: 0.22, mod: 'CUP_Creatures' },
        { className: 'CUP_V_BAF_Osprey_Mk4_MTP_Medic', name: 'Osprey Mk4 Medic (MTP)', texture: 'osprey_mtp_med', armor: 130, maximumLoad: 150, passThrough: 0.22, mod: 'CUP_Creatures' },
        { className: 'CUP_V_MBSS_PACA', name: 'MBSS PACA', texture: 'mbss_paca', armor: 90, maximumLoad: 90, passThrough: 0.3, mod: 'CUP_Creatures' },
        { className: 'CUP_V_MBSS_PACA_RGR', name: 'MBSS PACA (RGR)', texture: 'mbss_paca_rgr', armor: 90, maximumLoad: 90, passThrough: 0.3, mod: 'CUP_Creatures' },
        { className: 'CUP_V_CPC_light', name: 'CPC Light', texture: 'cpc_light', armor: 110, maximumLoad: 110, passThrough: 0.25, mod: 'CUP_Creatures' },
        { className: 'CUP_V_CPC_communicationspacket', name: 'CPC Communications', texture: 'cpc_comms', armor: 110, maximumLoad: 130, passThrough: 0.25, mod: 'CUP_Creatures' },
        { className: 'CUP_V_JPC_lightbelt', name: 'JPC Light Belt', texture: 'jpc_light', armor: 105, maximumLoad: 105, passThrough: 0.28, mod: 'CUP_Creatures' },
        { className: 'CUP_V_JPC_communicationsbelt', name: 'JPC Communications Belt', texture: 'jpc_comms', armor: 105, maximumLoad: 125, passThrough: 0.28, mod: 'CUP_Creatures' },
        { className: 'CUP_V_B_PASGT', name: 'PASGT Vest', texture: 'pasgt', armor: 70, maximumLoad: 70, passThrough: 0.4, mod: 'CUP_Creatures' },
        { className: 'CUP_V_B_PASGT_desert', name: 'PASGT Vest (Desert)', texture: 'pasgt_des', armor: 70, maximumLoad: 70, passThrough: 0.4, mod: 'CUP_Creatures' },
        { className: 'CUP_V_RUS_6B45_Sh117', name: 'Ratnik 6B45 Sh117', texture: 'ratnik_sh117', armor: 150, maximumLoad: 150, passThrough: 0.18, mod: 'CUP_Creatures' },
        { className: 'CUP_V_RUS_6B45_Sh117_Desert', name: 'Ratnik 6B45 Sh117 (Desert)', texture: 'ratnik_sh117_des', armor: 150, maximumLoad: 150, passThrough: 0.18, mod: 'CUP_Creatures' }
    ];
    
    cupVestVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'vests', 'Vest_Camo_Base', ['Vest_Camo_Base'], {
            subcategory: 'vests',
            maximumLoad: variant.maximumLoad,
            mass: 40,
            mod: variant.mod,
            scope: 2,
            texture: variant.texture,
            armor: variant.armor,
            passThrough: variant.passThrough,
            hiddenSelections: ['camo']
        });
        items.push(item);
    });
    
    return items;
}

export function generateMagazines() {
    const items = [];
    
    // ===== NATO MAGAZINES =====
    
    const natoMagazines = [
        { className: '30Rnd_65x39_caseless_mag', name: '6.5 mm 30Rnd Mag', caliber: '6.5x39mm', count: 30, mass: 170, mod: 'A3', tracers: 'None', magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'] },
        { className: '30Rnd_65x39_caseless_mag_Tracer', name: '6.5 mm 30Rnd Tracer (Red) Mag', caliber: '6.5x39mm', count: 30, mass: 170, mod: 'A3', tracers: 'Red', magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'] },
        { className: '100Rnd_65x39_caseless_mag', name: '6.5 mm 100Rnd Mag', caliber: '6.5x39mm', count: 100, mass: 430, mod: 'A3', tracers: 'None', magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'] },
        { className: '100Rnd_65x39_caseless_mag_Tracer', name: '6.5 mm 100Rnd Tracer (Red) Mag', caliber: '6.5x39mm', count: 100, mass: 430, mod: 'A3', tracers: 'Red', magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'] },
        { className: '200Rnd_65x39_cased_Box', name: '6.5 mm 200Rnd Belt Box', caliber: '6.5x39mm', count: 200, mass: 710, mod: 'A3', tracers: 'None', magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'] },
        { className: '200Rnd_65x39_cased_Box_Tracer', name: '6.5 mm 200Rnd Tracer (Red) Belt Box', caliber: '6.5x39mm', count: 200, mass: 710, mod: 'A3', tracers: 'Red', magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'] },
        { className: '30Rnd_556x45_Stanag', name: '5.56 mm 30Rnd Mag', caliber: '5.56x45mm', count: 30, mass: 130, mod: 'A3', tracers: 'None', magazineWells: ['CBA_556x45_STANAG', 'STANAG_556x45'] },
        { className: '30Rnd_556x45_Stanag_Tracer_Red', name: '5.56 mm 30Rnd Tracer (Red) Mag', caliber: '5.56x45mm', count: 30, mass: 130, mod: 'A3', tracers: 'Red', magazineWells: ['CBA_556x45_STANAG', 'STANAG_556x45'] },
        { className: '30Rnd_556x45_Stanag_Tracer_Green', name: '5.56 mm 30Rnd Tracer (Green) Mag', caliber: '5.56x45mm', count: 30, mass: 130, mod: 'A3', tracers: 'Green', magazineWells: ['CBA_556x45_STANAG', 'STANAG_556x45'] },
        { className: '30Rnd_556x45_Stanag_Tracer_Yellow', name: '5.56 mm 30Rnd Tracer (Yellow) Mag', caliber: '5.56x45mm', count: 30, mass: 130, mod: 'A3', tracers: 'Yellow', magazineWells: ['CBA_556x45_STANAG', 'STANAG_556x45'] }
    ];
    
    natoMagazines.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'magazines', 'CA_Magazine', ['CA_Magazine'], {
            subcategory: 'magazines',
            caliber: variant.caliber,
            count: variant.count,
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            tracers: variant.tracers,
            magazineWells: variant.magazineWells,
            inheritance: ['CfgMagazines', 'CA_Magazine', variant.className]
        });
        items.push(item);
    });
    
    // ===== CSAT MAGAZINES =====
    
    const csatMagazines = [
        { className: '30Rnd_65x39_caseless_green_mag', name: '6.5 mm 30Rnd Mag (Green)', caliber: '6.5x39mm', count: 30, mass: 170, mod: 'A3', tracers: 'None', magazineWells: ['CBA_65x39_KATIBA', 'STANAG_65x39'] },
        { className: '30Rnd_65x39_caseless_green_mag_Tracer', name: '6.5 mm 30Rnd Tracer (Green) Mag', caliber: '6.5x39mm', count: 30, mass: 170, mod: 'A3', tracers: 'Green', magazineWells: ['CBA_65x39_KATIBA', 'STANAG_65x39'] },
        { className: '150Rnd_762x54_Box', name: '7.62 mm 150Rnd Box', caliber: '7.62x54mm', count: 150, mass: 530, mod: 'A3', tracers: 'None', magazineWells: ['CBA_762x54_LINKS'] },
        { className: '150Rnd_762x54_Box_Tracer', name: '7.62 mm 150Rnd Tracer (Green) Box', caliber: '7.62x54mm', count: 150, mass: 530, mod: 'A3', tracers: 'Green', magazineWells: ['CBA_762x54_LINKS'] }
    ];
    
    csatMagazines.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'magazines', 'CA_Magazine', ['CA_Magazine'], {
            subcategory: 'magazines',
            caliber: variant.caliber,
            count: variant.count,
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            tracers: variant.tracers,
            magazineWells: variant.magazineWells,
            inheritance: ['CfgMagazines', 'CA_Magazine', variant.className]
        });
        items.push(item);
    });
    
    // ===== HANDGUN MAGAZINES =====
    
    const handgunMagazines = [
        { className: '16Rnd_9x21_Mag', name: '9 mm 16Rnd Mag', caliber: '9x21mm', count: 16, mass: 56, mod: 'A3', tracers: 'None', magazineWells: ['CBA_9x21_P07'] },
        { className: '11Rnd_45ACP_Mag', name: '.45 ACP 11Rnd Mag', caliber: '.45ACP', count: 11, mass: 78, mod: 'A3', tracers: 'None', magazineWells: ['CBA_45ACP_1911'] },
        { className: '9Rnd_45ACP_Mag', name: '.45 ACP 9Rnd Mag', caliber: '.45ACP', count: 9, mass: 68, mod: 'A3', tracers: 'None', magazineWells: ['CBA_45ACP_1911'] },
        { className: '6Rnd_45ACP_Cylinder', name: '.45 ACP 6Rnd Cylinder', caliber: '.45ACP', count: 6, mass: 52, mod: 'A3', tracers: 'None', magazineWells: ['CBA_45ACP_CYLINDER'] },
        { className: 'rhs_30Rnd_545x39_7N10_AK', name: '5.45x39mm 30Rnd (7N10)', caliber: '5.45x39mm', count: 30, mass: 140, mod: 'RHS_AFRF', tracers: 'None', magazineWells: ['CBA_545x39_AK', 'AK_545x39'] },
        { className: 'rhs_30Rnd_762x39mm', name: '7.62x39mm 30Rnd', caliber: '7.62x39mm', count: 30, mass: 180, mod: 'RHS_AFRF', tracers: 'None', magazineWells: ['CBA_762x39_AK', 'AK_762x39'] },
        { className: 'rhs_mag_30Rnd_556x45_M855A1_Stanag', name: '5.56x45mm 30Rnd STANAG (M855A1)', caliber: '5.56x45mm', count: 30, mass: 140, mod: 'RHS_USAF', tracers: 'None', magazineWells: ['CBA_556x45_STANAG', 'STANAG_556x45'] }
    ];
    
    handgunMagazines.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'magazines', 'CA_Magazine', ['CA_Magazine'], {
            subcategory: 'magazines',
            caliber: variant.caliber,
            count: variant.count,
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            tracers: variant.tracers,
            magazineWells: variant.magazineWells,
            inheritance: ['CfgMagazines', 'CA_Magazine', variant.className]
        });
        items.push(item);
    });
    
    // ===== SNIPER MAGAZINES =====
    
    const sniperMagazines = [
        { className: '5Rnd_127x108_Mag', name: '12.7 mm 5Rnd Mag', caliber: '12.7x108mm', count: 5, mass: 230, mod: 'A3', tracers: 'None' },
        { className: '5Rnd_127x108_APDS_Mag', name: '12.7 mm 5Rnd APDS Mag', caliber: '12.7x108mm', count: 5, mass: 240, mod: 'A3', tracers: 'None' },
        { className: '7Rnd_408_Mag', name: '.408 7Rnd Mag', caliber: '.408CheyTac', count: 7, mass: 190, mod: 'A3', tracers: 'None' },
        { className: '10Rnd_762x54_Mag', name: '7.62 mm 10Rnd Mag', caliber: '7.62x54mm', count: 10, mass: 120, mod: 'A3', tracers: 'None' }
    ];
    
    sniperMagazines.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'magazines', 'CA_Magazine', ['CA_Magazine'], {
            subcategory: 'magazines',
            caliber: variant.caliber,
            count: variant.count,
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            tracers: variant.tracers,
            magazineWells: variant.magazineWells || ['CBA_SNIPER_MAGS'],
            inheritance: ['CfgMagazines', 'CA_Magazine', variant.className]
        });
        items.push(item);
    });
    
    return items;
}

export function generateAttachments() {
    const items = [];
    
    // ===== OPTICS =====
    
    const opticsVariants = [
        { className: 'optic_Aco', name: 'ACO (Red)', magnification: 1, mass: 300, mod: 'A3', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_ACO_grn', name: 'ACO (Green)', magnification: 1, mass: 300, mod: 'A3', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_Aco_smg', name: 'ACO SMG (Red)', magnification: 1, mass: 250, mod: 'A3', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_ACO_grn_smg', name: 'ACO SMG (Green)', magnification: 1, mass: 250, mod: 'A3', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_Holosight', name: 'Mk17 Holosight', magnification: 1, mass: 350, mod: 'A3', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_Holosight_smg', name: 'Mk17 Holosight SMG', magnification: 1, mass: 300, mod: 'A3', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_MRCO', name: 'MRCO', magnification: 4, mass: 500, mod: 'A3', zoomMin: 0.0625, zoomMax: 0.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_Arco', name: 'ARCO', magnification: 4, mass: 450, mod: 'A3', zoomMin: 0.0625, zoomMax: 0.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_Hamr', name: 'RCO', magnification: 4, mass: 480, mod: 'A3', zoomMin: 0.0625, zoomMax: 0.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_SOS', name: 'SOS', magnification: 5, mass: 700, mod: 'A3', zoomMin: 0.05, zoomMax: 0.2, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_LRPS', name: 'LRPS', magnification: 10, mass: 900, mod: 'A3', zoomMin: 0.025, zoomMax: 0.1, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_DMS', name: 'DMS', magnification: 6, mass: 600, mod: 'A3', zoomMin: 0.04166, zoomMax: 0.16666, weaponSlots: ['asdg_OpticRail'] },
        { className: 'optic_Yorris', name: 'Yorris J2', magnification: 1, mass: 320, mod: 'A3', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'rhsusf_acc_EOTECH', name: 'EOTech 552', magnification: 1, mass: 350, mod: 'RHS_USAF', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'rhsusf_acc_ACOG', name: 'ACOG TA31RCO', magnification: 4, mass: 480, mod: 'RHS_USAF', zoomMin: 0.0625, zoomMax: 0.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'rhs_acc_1p87', name: '1P87 (RIS)', magnification: 1, mass: 320, mod: 'RHS_AFRF', zoomMin: 0.25, zoomMax: 1.25, weaponSlots: ['asdg_OpticRail'] },
        { className: 'rhs_acc_pso1m2', name: 'PSO-1M2', magnification: 4, mass: 580, mod: 'RHS_AFRF', zoomMin: 0.0625, zoomMax: 0.25, weaponSlots: ['asdg_OpticRail_AK'] }
    ];
    
    opticsVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'attachments', 'ItemCore', ['ItemCore'], {
            subcategory: 'optics',
            magnification: variant.magnification,
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            zoomMin: variant.zoomMin,
            zoomMax: variant.zoomMax,
            weaponSlots: variant.weaponSlots,
            inheritance: ['CfgWeapons', 'ItemCore', variant.className]
        });
        items.push(item);
    });
    
    // ===== MUZZLE ATTACHMENTS =====
    
    const muzzleVariants = [
        { className: 'muzzle_snds_H', name: 'Sound Suppressor (6.5 mm)', mass: 200, mod: 'A3', caliber: '6.5x39mm', weaponSlots: ['asdg_MuzzleSlot'] },
        { className: 'muzzle_snds_L', name: 'Sound Suppressor (9 mm)', mass: 150, mod: 'A3', caliber: '9x19mm', weaponSlots: ['asdg_MuzzleSlot'] },
        { className: 'muzzle_snds_M', name: 'Sound Suppressor (5.56 mm)', mass: 180, mod: 'A3', caliber: '5.56x45mm', weaponSlots: ['asdg_MuzzleSlot_556'] },
        { className: 'muzzle_snds_B', name: 'Sound Suppressor (7.62 mm)', mass: 250, mod: 'A3', caliber: '7.62x51mm', weaponSlots: ['asdg_MuzzleSlot_762'] },
        { className: 'muzzle_snds_H_MG', name: 'Sound Suppressor (6.5 mm, MG)', mass: 300, mod: 'A3', caliber: '6.5x39mm', weaponSlots: ['asdg_MuzzleSlot'] },
        { className: 'muzzle_snds_acp', name: 'Sound Suppressor (.45 ACP)', mass: 160, mod: 'A3', caliber: '.45ACP', weaponSlots: ['asdg_MuzzleSlot'] }
    ];
    
    muzzleVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'attachments', 'ItemCore', ['ItemCore'], {
            subcategory: 'muzzle',
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            caliber: variant.caliber,
            weaponSlots: variant.weaponSlots,
            inheritance: ['CfgWeapons', 'ItemCore', variant.className]
        });
        items.push(item);
    });
    
    // ===== SIDE ATTACHMENTS =====
    
    const sideVariants = [
        { className: 'acc_flashlight', name: 'Flashlight', mass: 100, mod: 'A3' },
        { className: 'acc_pointer_IR', name: 'IR Laser Pointer', mass: 120, mod: 'A3' }
    ];
    
    sideVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'attachments', 'ItemCore', ['ItemCore'], {
            subcategory: 'side',
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            inheritance: ['CfgWeapons', 'ItemCore', variant.className]
        });
        items.push(item);
    });
    
    // ===== BIPODS =====
    
    const bipodVariants = [
        { className: 'bipod_01_F_snd', name: 'Bipod (Sand)', mass: 200, mod: 'A3', texture: 'sand' },
        { className: 'bipod_01_F_blk', name: 'Bipod (Black)', mass: 200, mod: 'A3', texture: 'black' },
        { className: 'bipod_01_F_mtp', name: 'Bipod (MTP)', mass: 200, mod: 'A3', texture: 'mtp' },
        { className: 'bipod_02_F_blk', name: 'Bipod (Black) [NATO]', mass: 220, mod: 'A3', texture: 'black' },
        { className: 'bipod_02_F_tan', name: 'Bipod (Tan) [NATO]', mass: 220, mod: 'A3', texture: 'tan' },
        { className: 'bipod_02_F_hex', name: 'Bipod (Hex) [CSAT]', mass: 210, mod: 'A3', texture: 'hex' },
        { className: 'bipod_03_F_oli', name: 'Bipod (Olive) [AAF]', mass: 200, mod: 'A3', texture: 'olive' },
        { className: 'bipod_03_F_blk', name: 'Bipod (Black) [AAF]', mass: 200, mod: 'A3', texture: 'black' }
    ];
    
    bipodVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'attachments', 'ItemCore', ['ItemCore'], {
            subcategory: 'bipod',
            mass: variant.mass,
            mod: variant.mod,
            scope: 2,
            texture: variant.texture,
            inheritance: ['CfgWeapons', 'ItemCore', variant.className]
        });
        items.push(item);
    });
    
    return items;
}