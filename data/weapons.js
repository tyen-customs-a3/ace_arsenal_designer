// Realistic Arma 3 weapon data based on actual config structures

import { createItem, createInheritedItem, createVariant } from './inheritance.js';

export function generateWeapons() {
    const items = [];
    
    // ===== BASE WEAPON CLASSES (following real Arma 3 structure) =====
    
    // Rifle_Base_F - Core base class for all rifles
    const rifleBase = createItem('Rifle_Base_F', 'Rifle Base', 'weapons', {
        subcategory: 'rifles',
        range: 500,
        mass: 3500,
        inheritance: ['CfgWeapons', 'ItemCore', 'WeaponMuzzleBase', 'Rifle_Base_F'],
        mod: 'A3',
        scope: 0
    });
    
    // Rifle_Long_Base_F - Base for full-length rifles
    const rifleLongBase = createInheritedItem('Rifle_Long_Base_F', 'Long Rifle Base', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        range: 600,
        mass: 4000,
        mod: 'A3',
        scope: 0
    });
    
    // Rifle_Short_Base_F - Base for carbines
    const rifleShortBase = createInheritedItem('Rifle_Short_Base_F', 'Short Rifle Base', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        range: 400,
        mass: 3000,
        mod: 'A3',
        scope: 0
    });
    
    // ===== MX FAMILY (Real Arma 3 inheritance chain) =====
    
    // Base MX rifle - actual Arma 3 class
    const mxBase = createInheritedItem('arifle_MX_F', 'MX 6.5 mm', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '6.5×39 mm',
        range: 500,
        rateOfFire: 625,
        mass: 3700,
        modes: ['Single', 'FullAuto'],
        magazines: ['30Rnd_65x39_caseless_mag'],
        magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'],
        weaponSlots: ['asdg_OpticRail', 'asdg_MuzzleSlot', 'asdg_UnderBarrelSlot'],
        mod: 'A3',
        scope: 2,
        dlc: 'A3'
    });
    items.push(mxBase);
    
    // MX texture variants (real Arma 3 variants)
    const mxVariants = [
        { className: 'arifle_MX_Black_F', name: 'Black', texture: 'black', hiddenSelections: ['camo'], hiddenSelectionsTextures: ['\\a3\\weapons_f\\rifles\\mx\\data\\mx_black_co.paa'] },
        { className: 'arifle_MX_khk_F', name: 'Khaki', texture: 'khaki', hiddenSelections: ['camo'], hiddenSelectionsTextures: ['\\a3\\weapons_f\\rifles\\mx\\data\\mx_khaki_co.paa'] },
        { className: 'arifle_MX_SW_F', name: 'SW', texture: 'sand', mass: 4200, range: 600, rateOfFire: 550 }
    ];
    
    mxVariants.forEach(variant => {
        const item = createVariant(mxBase, variant.name, variant.texture, {
            className: variant.className,
            mass: variant.mass || mxBase.mass,
            range: variant.range || mxBase.range,
            rateOfFire: variant.rateOfFire || mxBase.rateOfFire,
            hiddenSelections: variant.hiddenSelections,
            hiddenSelectionsTextures: variant.hiddenSelectionsTextures
        });
        items.push(item);
    });
    
    // MXC Carbine family
    const mxc = createInheritedItem('arifle_MXC_F', 'MXC 6.5 mm', 'weapons', 'arifle_MX_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '6.5×39 mm',
        range: 400,
        rateOfFire: 650,
        mass: 3200,
        modes: ['Single', 'FullAuto'],
        magazines: ['30Rnd_65x39_caseless_mag'],
        magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'],
        weaponSlots: ['asdg_OpticRail', 'asdg_MuzzleSlot', 'asdg_UnderBarrelSlot'],
        mod: 'A3',
        scope: 2
    });
    items.push(mxc);
    
    // MXC variants
    ['arifle_MXC_Black_F', 'arifle_MXC_khk_F'].forEach((className, i) => {
        const textures = ['black', 'khaki'];
        const item = createVariant(mxc, textures[i] === 'black' ? 'Black' : 'Khaki', textures[i], {
            className: className
        });
        items.push(item);
    });
    
    // MXM Marksman rifle
    const mxm = createInheritedItem('arifle_MXM_F', 'MXM 6.5 mm', 'weapons', 'arifle_MX_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '6.5×39 mm',
        range: 700,
        rateOfFire: 500,
        mass: 4100,
        modes: ['Single'],
        magazines: ['30Rnd_65x39_caseless_mag'],
        magazineWells: ['CBA_65x39_MX', 'STANAG_65x39'],
        weaponSlots: ['asdg_OpticRail', 'asdg_MuzzleSlot', 'asdg_UnderBarrelSlot'],
        mod: 'A3',
        scope: 2
    });
    items.push(mxm);
    
    // ===== KATIBA FAMILY (CSAT weapons) =====
    
    const katiba = createInheritedItem('arifle_Katiba_F', 'Katiba 6.5 mm', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '6.5×39 mm',
        range: 550,
        rateOfFire: 650,
        mass: 3800,
        modes: ['Single', 'FullAuto'],
        magazines: ['30Rnd_65x39_caseless_green_mag'],
        magazineWells: ['CBA_65x39_KATIBA', 'STANAG_65x39'],
        weaponSlots: ['asdg_OpticRail', 'asdg_MuzzleSlot', 'asdg_UnderBarrelSlot'],
        mod: 'A3',
        scope: 2,
        faction: 'CSAT'
    });
    items.push(katiba);
    
    // Katiba GL variant
    const katibaGL = createInheritedItem('arifle_Katiba_GL_F', 'Katiba GL 6.5 mm', 'weapons', 'arifle_Katiba_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '6.5×39 mm',
        range: 550,
        rateOfFire: 650,
        mass: 4500,
        modes: ['Single', 'FullAuto'],
        magazines: ['30Rnd_65x39_caseless_green_mag'],
        underbarrel: 'UGL_F',
        mod: 'A3',
        scope: 2
    });
    items.push(katibaGL);
    
    // Katiba C (Carbine)
    const katibaC = createInheritedItem('arifle_Katiba_C_F', 'Katiba C 6.5 mm', 'weapons', 'arifle_Katiba_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '6.5×39 mm',
        range: 450,
        rateOfFire: 700,
        mass: 3300,
        modes: ['Single', 'FullAuto'],
        magazines: ['30Rnd_65x39_caseless_green_mag'],
        mod: 'A3',
        scope: 2
    });
    items.push(katibaC);
    
    // ===== TRG FAMILY (AAF weapons) =====
    
    const trg20 = createInheritedItem('arifle_TRG20_F', 'TRG-20 5.56 mm', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 500,
        rateOfFire: 750,
        mass: 3400,
        modes: ['Single', 'FullAuto'],
        magazines: ['30Rnd_556x45_Stanag'],
        magazineWells: ['CBA_556x45_STANAG', 'STANAG_556x45'],
        weaponSlots: ['asdg_OpticRail', 'asdg_MuzzleSlot', 'asdg_UnderBarrelSlot'],
        mod: 'A3',
        scope: 2,
        faction: 'AAF'
    });
    items.push(trg20);
    
    const trg21 = createInheritedItem('arifle_TRG21_F', 'TRG-21 5.56 mm', 'weapons', 'arifle_TRG20_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 500,
        rateOfFire: 750,
        mass: 3600,
        modes: ['Single', 'FullAuto'],
        magazines: ['30Rnd_556x45_Stanag'],
        mod: 'A3',
        scope: 2
    });
    items.push(trg21);
    
    // ===== MACHINE GUNS =====
    
    // Base Machine Gun class
    const mgunBase = createItem('MGun_base_F', 'Machine Gun Base', 'weapons', {
        subcategory: 'machine_guns',
        range: 800,
        mass: 8000,
        inheritance: ['CfgWeapons', 'Rifle_Base_F', 'MGun_base_F'],
        mod: 'A3',
        scope: 0
    });
    
    // Zafir 7.62 mm
    const zafir = createInheritedItem('LMG_Zafir_F', 'Zafir 7.62 mm', 'weapons', 'MGun_base_F', ['MGun_base_F'], {
        subcategory: 'machine_guns',
        caliber: '7.62×51 mm',
        range: 1000,
        rateOfFire: 750,
        mass: 8500,
        modes: ['FullAuto'],
        magazines: ['150Rnd_762x51_Box'],
        mod: 'A3',
        scope: 2
    });
    items.push(zafir);
    
    // Mk200 6.5 mm
    const mk200 = createInheritedItem('LMG_Mk200_F', 'Mk200 6.5 mm', 'weapons', 'MGun_base_F', ['MGun_base_F'], {
        subcategory: 'machine_guns',
        caliber: '6.5×39 mm',
        range: 800,
        rateOfFire: 800,
        mass: 7800,
        modes: ['FullAuto'],
        magazines: ['200Rnd_65x39_cased_Box'],
        mod: 'A3',
        scope: 2
    });
    items.push(mk200);
    
    // ===== SNIPER RIFLES =====
    
    // Base Sniper class
    const sniperBase = createItem('Rifle_Long_Base_F', 'Long Range Rifle Base', 'weapons', {
        subcategory: 'sniper_rifles',
        range: 1200,
        mass: 6000,
        inheritance: ['CfgWeapons', 'Rifle_Base_F', 'Rifle_Long_Base_F'],
        mod: 'A3',
        scope: 0
    });
    
    // GM6 Lynx 12.7 mm
    const gm6 = createInheritedItem('srifle_GM6_F', 'GM6 Lynx 12.7 mm', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '12.7×108 mm',
        range: 1500,
        rateOfFire: 60,
        mass: 11800,
        modes: ['Single'],
        magazines: ['5Rnd_127x108_Mag'],
        mod: 'A3',
        scope: 2
    });
    items.push(gm6);
    
    // LRR .408
    const lrr = createInheritedItem('srifle_LRR_F', 'LRR .408', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '.408 CheyTac',
        range: 1800,
        rateOfFire: 80,
        mass: 9500,
        modes: ['Single'],
        magazines: ['7Rnd_408_Mag'],
        mod: 'A3',
        scope: 2
    });
    items.push(lrr);
    
    // ===== RHS MOD WEAPONS =====
    
    // ===== AK FAMILY (RHS) =====
    
    // AK-74M Base
    const ak74m = createInheritedItem('rhs_weap_ak74m', 'AK-74M', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.45×39 mm',
        range: 500,
        rateOfFire: 650,
        mass: 3400,
        modes: ['Single', 'FullAuto'],
        magazines: ['rhs_30Rnd_545x39_7N10_AK'],
        magazineWells: ['CBA_545x39_AK', 'AK_545x39'],
        weaponSlots: ['asdg_OpticRail_AK', 'asdg_MuzzleSlot_762', 'asdg_UnderBarrelSlot'],
        mod: 'RHS_AFRF',
        scope: 2,
        faction: 'RUS'
    });
    items.push(ak74m);
    
    // AK-74M variants
    const ak74mVariants = [
        { className: 'rhs_weap_ak74m_desert', name: 'Desert', texture: 'desert' },
        { className: 'rhs_weap_ak74m_fullplum', name: 'Plum', texture: 'plum' },
        { className: 'rhs_weap_ak74m_zenitco01', name: 'Zenitco', texture: 'zenitco' },
        { className: 'rhs_weap_ak74m_zenitco01_b33', name: 'Zenitco B33', texture: 'zenitco_b33' }
    ];
    
    ak74mVariants.forEach(variant => {
        const item = createVariant(ak74m, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // AK-105 Carbine
    const ak105 = createInheritedItem('rhs_weap_ak105', 'AK-105', 'weapons', 'rhs_weap_ak74m', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.45×39 mm',
        range: 400,
        rateOfFire: 700,
        mass: 3100,
        modes: ['Single', 'FullAuto'],
        magazines: ['rhs_30Rnd_545x39_7N10_AK'],
        mod: 'RHS_AFRF',
        scope: 2
    });
    items.push(ak105);
    
    // AKM 7.62x39
    const akm = createInheritedItem('rhs_weap_akm', 'AKM', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '7.62×39 mm',
        range: 450,
        rateOfFire: 600,
        mass: 3800,
        modes: ['Single', 'FullAuto'],
        magazines: ['rhs_30Rnd_762x39mm'],
        magazineWells: ['CBA_762x39_AK', 'AK_762x39'],
        weaponSlots: ['asdg_OpticRail_AK', 'asdg_MuzzleSlot_762', 'asdg_UnderBarrelSlot'],
        mod: 'RHS_AFRF',
        scope: 2
    });
    items.push(akm);
    
    // AKMN (Night variant)
    const akmn = createInheritedItem('rhs_weap_akmn', 'AKMN', 'weapons', 'rhs_weap_akm', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '7.62×39 mm',
        range: 450,
        rateOfFire: 600,
        mass: 3900,
        modes: ['Single', 'FullAuto'],
        magazines: ['rhs_30Rnd_762x39mm'],
        mod: 'RHS_AFRF',
        scope: 2,
        features: ['Night scope mount']
    });
    items.push(akmn);
    
    // ===== M4 FAMILY (RHS) =====
    
    // M4A1 Base
    const m4a1 = createInheritedItem('rhs_weap_m4a1', 'M4A1', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 500,
        rateOfFire: 700,
        mass: 3200,
        modes: ['Single', 'FullAuto'],
        magazines: ['rhs_mag_30Rnd_556x45_M855A1_Stanag'],
        magazineWells: ['CBA_556x45_STANAG', 'STANAG_556x45'],
        weaponSlots: ['asdg_OpticRail', 'asdg_MuzzleSlot_556', 'asdg_UnderBarrelSlot'],
        mod: 'RHS_USAF',
        scope: 2,
        faction: 'USA'
    });
    items.push(m4a1);
    
    // M4A1 variants
    const m4a1Variants = [
        { className: 'rhs_weap_m4a1_blockII', name: 'Block II', texture: 'block2', features: ['SOPMOD Block II'] },
        { className: 'rhs_weap_m4a1_carryhandle', name: 'Carry Handle', texture: 'carryhandle', features: ['Carry handle'] },
        { className: 'rhs_weap_m4a1_carryhandle_mstock', name: 'M-Stock', texture: 'm_stock', features: ['M-Stock'] },
        { className: 'rhs_weap_m4a1_d', name: 'Desert', texture: 'desert' },
        { className: 'rhs_weap_m4a1_wd', name: 'Woodland', texture: 'woodland' }
    ];
    
    m4a1Variants.forEach(variant => {
        const item = createVariant(m4a1, variant.name, variant.texture, {
            className: variant.className,
            features: variant.features
        });
        items.push(item);
    });
    
    // M16A4
    const m16a4 = createInheritedItem('rhs_weap_m16a4', 'M16A4', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 550,
        rateOfFire: 700,
        mass: 3600,
        modes: ['Single', 'Burst'],
        magazines: ['rhs_mag_30Rnd_556x45_M855A1_Stanag'],
        mod: 'RHS_USAF',
        scope: 2
    });
    items.push(m16a4);
    
    // M16A4 variants
    const m16a4Variants = [
        { className: 'rhs_weap_m16a4_carryhandle', name: 'M16A4 (Carry Handle)', texture: 'carryhandle' },
        { className: 'rhs_weap_m16a4_carryhandle_M203', name: 'M16A4 + M203', texture: 'carryhandle_m203', underbarrel: 'M203' }
    ];
    
    m16a4Variants.forEach(variant => {
        const item = createVariant(m16a4, variant.name, variant.texture, {
            className: variant.className,
            underbarrel: variant.underbarrel
        });
        items.push(item);
    });
    
    // ===== HK416 FAMILY (RHS) =====
    
    const hk416 = createInheritedItem('rhs_weap_hk416d10', 'HK416 D10RS', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 500,
        rateOfFire: 750,
        mass: 3300,
        modes: ['Single', 'FullAuto'],
        magazines: ['rhs_mag_30Rnd_556x45_M855A1_Stanag'],
        mod: 'RHS_USAF',
        scope: 2
    });
    items.push(hk416);
    
    // HK416 variants
    const hk416Variants = [
        { className: 'rhs_weap_hk416d10_LMT', name: 'HK416 D10RS (LMT)', texture: 'lmt' },
        { className: 'rhs_weap_hk416d10_m320', name: 'HK416 D10RS + M320', texture: 'm320', underbarrel: 'M320' },
        { className: 'rhs_weap_hk416d145', name: 'HK416 D14.5RS', texture: 'd145', range: 520 }
    ];
    
    hk416Variants.forEach(variant => {
        const item = createVariant(hk416, variant.name, variant.texture, {
            className: variant.className,
            underbarrel: variant.underbarrel,
            range: variant.range || hk416.range
        });
        items.push(item);
    });
    
    // ===== SVD FAMILY (RHS) =====
    
    const svd = createInheritedItem('rhs_weap_svd', 'SVD', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '7.62×54R mm',
        range: 800,
        rateOfFire: 300,
        mass: 4300,
        modes: ['Single'],
        magazines: ['rhs_10Rnd_762x54mmR_7N1'],
        mod: 'RHS_AFRF',
        scope: 2
    });
    items.push(svd);
    
    const svds = createInheritedItem('rhs_weap_svds', 'SVDS', 'weapons', 'rhs_weap_svd', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '7.62×54R mm',
        range: 750,
        rateOfFire: 300,
        mass: 4100,
        modes: ['Single'],
        magazines: ['rhs_10Rnd_762x54mmR_7N1'],
        mod: 'RHS_AFRF',
        scope: 2,
        features: ['Folding stock']
    });
    items.push(svds);
    
    // ===== MACHINE GUNS (RHS) =====
    
    // PKM
    const pkm = createInheritedItem('rhs_weap_pkm', 'PKM', 'weapons', 'MGun_base_F', ['MGun_base_F'], {
        subcategory: 'machine_guns',
        caliber: '7.62×54R mm',
        range: 1000,
        rateOfFire: 700,
        mass: 7500,
        modes: ['FullAuto'],
        magazines: ['rhs_100Rnd_762x54mmR'],
        mod: 'RHS_AFRF',
        scope: 2
    });
    items.push(pkm);
    
    const pkmVariants = [
        { className: 'rhs_weap_pkp', name: 'PKP Pecheneg', texture: 'pkp', mass: 8200 },
        { className: 'rhs_weap_pkt', name: 'PKT', texture: 'pkt', mass: 10500, features: ['Coaxial mount'] }
    ];
    
    pkmVariants.forEach(variant => {
        const item = createVariant(pkm, variant.name, variant.texture, {
            className: variant.className,
            mass: variant.mass,
            features: variant.features
        });
        items.push(item);
    });
    
    // M240B
    const m240b = createInheritedItem('rhs_weap_m240B', 'M240B', 'weapons', 'MGun_base_F', ['MGun_base_F'], {
        subcategory: 'machine_guns',
        caliber: '7.62×51 mm',
        range: 1100,
        rateOfFire: 650,
        mass: 12100,
        modes: ['FullAuto'],
        magazines: ['rhsusf_100Rnd_762x51'],
        mod: 'RHS_USAF',
        scope: 2
    });
    items.push(m240b);
    
    const m240bVariants = [
        { className: 'rhs_weap_m240G', name: 'M240G', texture: 'm240g' },
        { className: 'rhs_weap_m249', name: 'M249 SAW', texture: 'm249', caliber: '5.56×45 mm', magazines: ['rhsusf_200Rnd_556x45_box'], mass: 7500 }
    ];
    
    m240bVariants.forEach(variant => {
        const item = createVariant(m240b, variant.name, variant.texture, {
            className: variant.className,
            caliber: variant.caliber || m240b.caliber,
            magazines: variant.magazines || m240b.magazines,
            mass: variant.mass || m240b.mass
        });
        items.push(item);
    });
    
    // ===== CUP MOD WEAPONS =====
    
    // ===== G36 FAMILY (CUP) =====
    
    // G36A Base
    const g36a = createInheritedItem('CUP_arifle_G36A', 'G36A', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 500,
        rateOfFire: 750,
        mass: 3600,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_30Rnd_556x45_G36'],
        mod: 'CUP_Weapons',
        scope: 2,
        faction: 'GER'
    });
    items.push(g36a);
    
    // G36 variants
    const g36Variants = [
        { className: 'CUP_arifle_G36C', name: 'G36C', texture: 'g36c', range: 400, mass: 2800 },
        { className: 'CUP_arifle_G36K', name: 'G36K', texture: 'g36k', range: 450, mass: 3200 },
        { className: 'CUP_arifle_G36A_camo', name: 'G36A (Camo)', texture: 'camo' },
        { className: 'CUP_arifle_G36C_camo', name: 'G36C (Camo)', texture: 'camo_c', range: 400, mass: 2800 },
        { className: 'CUP_arifle_G36K_camo', name: 'G36K (Camo)', texture: 'camo_k', range: 450, mass: 3200 }
    ];
    
    g36Variants.forEach(variant => {
        const item = createVariant(g36a, variant.name, variant.texture, {
            className: variant.className,
            range: variant.range || g36a.range,
            mass: variant.mass || g36a.mass
        });
        items.push(item);
    });
    
    // ===== SCAR FAMILY (CUP) =====
    
    // SCAR-L
    const scarL = createInheritedItem('CUP_arifle_Mk16_CQC', 'Mk 16 Mod 0 CQC', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 450,
        rateOfFire: 700,
        mass: 3500,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_30Rnd_556x45_Stanag'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(scarL);
    
    const scarLVariants = [
        { className: 'CUP_arifle_Mk16_STD', name: 'Mk 16 Mod 0 STD', texture: 'std', range: 500, mass: 3700 },
        { className: 'CUP_arifle_Mk16_SV', name: 'Mk 16 Mod 0 SV', texture: 'sv', range: 600, mass: 4000 },
        { className: 'CUP_arifle_Mk16_CQC_FG', name: 'Mk 16 Mod 0 CQC (FG)', texture: 'cqc_fg' },
        { className: 'CUP_arifle_Mk16_STD_FG', name: 'Mk 16 Mod 0 STD (FG)', texture: 'std_fg', range: 500, mass: 3700 }
    ];
    
    scarLVariants.forEach(variant => {
        const item = createVariant(scarL, variant.name, variant.texture, {
            className: variant.className,
            range: variant.range || scarL.range,
            mass: variant.mass || scarL.mass
        });
        items.push(item);
    });
    
    // SCAR-H
    const scarH = createInheritedItem('CUP_arifle_Mk17_CQC', 'Mk 17 Mod 0 CQC', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '7.62×51 mm',
        range: 500,
        rateOfFire: 600,
        mass: 3800,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_20Rnd_762x51_B_SCAR'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(scarH);
    
    // Create proper base STD variant first
    const scarHSTD = createInheritedItem('CUP_arifle_Mk17_STD', 'Mk 17 Mod 0 STD', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '7.62×51 mm',
        range: 600,
        rateOfFire: 600,
        mass: 4000,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_20Rnd_762x51_B_SCAR'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(scarHSTD);
    
    // Create variants with proper short names
    const scarHVariants = [
        { className: 'CUP_arifle_Mk17_CQC_FG', name: 'FG', texture: 'cqc_fg', baseItem: scarH },
        { className: 'CUP_arifle_Mk17_STD_FG', name: 'FG', texture: 'std_fg', baseItem: scarHSTD, range: 600, mass: 4000 }
    ];
    
    scarHVariants.forEach(variant => {
        const item = createVariant(variant.baseItem, variant.name, variant.texture, {
            className: variant.className,
            range: variant.range || variant.baseItem.range,
            mass: variant.mass || variant.baseItem.mass
        });
        items.push(item);
    });
    
    // ===== FN FAL FAMILY (CUP) =====
    
    const fnFAL = createInheritedItem('CUP_arifle_FNFAL', 'FN FAL', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '7.62×51 mm',
        range: 600,
        rateOfFire: 650,
        mass: 4300,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_20Rnd_762x51_FNFAL_M'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(fnFAL);
    
    const fnFALVariants = [
        { className: 'CUP_arifle_FNFAL_railed', name: 'FN FAL (Railed)', texture: 'railed' },
        { className: 'CUP_arifle_FNFAL_OSW', name: 'FN FAL OSW', texture: 'osw', range: 450, mass: 3800 },
        { className: 'CUP_arifle_FNFAL_ANPVS4', name: 'FN FAL (AN/PVS-4)', texture: 'anpvs4', features: ['Night scope'] }
    ];
    
    fnFALVariants.forEach(variant => {
        const item = createVariant(fnFAL, variant.name, variant.texture, {
            className: variant.className,
            range: variant.range || fnFAL.range,
            mass: variant.mass || fnFAL.mass,
            features: variant.features
        });
        items.push(item);
    });
    
    // ===== L85 FAMILY (CUP) =====
    
    const l85a2 = createInheritedItem('CUP_arifle_L85A2', 'L85A2', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 500,
        rateOfFire: 650,
        mass: 3800,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_30Rnd_556x45_Stanag'],
        mod: 'CUP_Weapons',
        scope: 2,
        faction: 'GBR'
    });
    items.push(l85a2);
    
    const l85Variants = [
        { className: 'CUP_arifle_L85A2_G', name: 'L85A2 UGL', texture: 'ugl', underbarrel: 'UGL' },
        { className: 'CUP_arifle_L85A2_GL', name: 'L85A2 GL', texture: 'gl', underbarrel: 'GL' },
        { className: 'CUP_arifle_L85A2_ris', name: 'L85A2 RIS', texture: 'ris' },
        { className: 'CUP_arifle_L85A2_ris_G', name: 'L85A2 RIS UGL', texture: 'ris_ugl', underbarrel: 'UGL' }
    ];
    
    l85Variants.forEach(variant => {
        const item = createVariant(l85a2, variant.name, variant.texture, {
            className: variant.className,
            underbarrel: variant.underbarrel
        });
        items.push(item);
    });
    
    // ===== M14 FAMILY (CUP) =====
    
    const m14 = createInheritedItem('CUP_srifle_M14', 'M14', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '7.62×51 mm',
        range: 700,
        rateOfFire: 400,
        mass: 5100,
        modes: ['Single'],
        magazines: ['CUP_20Rnd_762x51_DMR'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(m14);
    
    const m14Variants = [
        { className: 'CUP_srifle_M14_DMR', name: 'M14 DMR', texture: 'dmr' },
        { className: 'CUP_srifle_Mk18', name: 'Mk 18 Mod 0', texture: 'mk18', range: 750, mass: 5300 },
        { className: 'CUP_srifle_M21', name: 'M21', texture: 'm21', features: ['Sniper scope'] }
    ];
    
    m14Variants.forEach(variant => {
        const item = createVariant(m14, variant.name, variant.texture, {
            className: variant.className,
            range: variant.range || m14.range,
            mass: variant.mass || m14.mass,
            features: variant.features
        });
        items.push(item);
    });
    
    // ===== AUG FAMILY (CUP) =====
    
    const aug = createInheritedItem('CUP_arifle_AUG_A1', 'AUG A1', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 500,
        rateOfFire: 680,
        mass: 3600,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_30Rnd_556x45_AUG'],
        mod: 'CUP_Weapons',
        scope: 2,
        faction: 'AUT'
    });
    items.push(aug);
    
    const augVariants = [
        { className: 'CUP_arifle_AUG_A3', name: 'AUG A3', texture: 'a3' },
        { className: 'CUP_arifle_AUG_A1_GL', name: 'AUG A1 GL', texture: 'a1_gl', underbarrel: 'GL' },
        { className: 'CUP_arifle_AUG_A3_GL', name: 'AUG A3 GL', texture: 'a3_gl', underbarrel: 'GL' }
    ];
    
    augVariants.forEach(variant => {
        const item = createVariant(aug, variant.name, variant.texture, {
            className: variant.className,
            underbarrel: variant.underbarrel
        });
        items.push(item);
    });
    
    // ===== XM8 FAMILY (CUP) =====
    
    const xm8 = createInheritedItem('CUP_arifle_XM8_Carbine', 'XM8 Carbine', 'weapons', 'Rifle_Base_F', ['Rifle_Base_F'], {
        subcategory: 'rifles',
        caliber: '5.56×45 mm',
        range: 450,
        rateOfFire: 750,
        mass: 3100,
        modes: ['Single', 'FullAuto'],
        magazines: ['CUP_30Rnd_556x45_XM8'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(xm8);
    
    const xm8Variants = [
        { className: 'CUP_arifle_XM8_Rifle', name: 'XM8 Rifle', texture: 'rifle', range: 500, mass: 3400 },
        { className: 'CUP_arifle_XM8_Compact', name: 'XM8 Compact', texture: 'compact', range: 350, mass: 2800 },
        { className: 'CUP_arifle_XM8_SAW', name: 'XM8 SAW', texture: 'saw', range: 600, mass: 4200, subcategory: 'machine_guns' },
        { className: 'CUP_arifle_XM8_Sharpshooter', name: 'XM8 Sharpshooter', texture: 'sharpshooter', range: 700, mass: 3800, subcategory: 'sniper_rifles' }
    ];
    
    xm8Variants.forEach(variant => {
        const item = createVariant(xm8, variant.name, variant.texture, {
            className: variant.className,
            range: variant.range || xm8.range,
            mass: variant.mass || xm8.mass,
            subcategory: variant.subcategory || xm8.subcategory
        });
        items.push(item);
    });
    
    return items;
}

export function generateHandguns() {
    const items = [];
    
    // ===== BASE HANDGUN CLASSES =====
    
    // Pistol_Base_F - Core base class for all handguns
    const pistolBase = createItem('Pistol_Base_F', 'Pistol Base', 'handguns', {
        subcategory: 'handguns',
        range: 150,
        mass: 1200,
        inheritance: ['CfgWeapons', 'ItemCore', 'WeaponMuzzleBase', 'Pistol_Base_F'],
        mod: 'A3',
        scope: 0
    });
    
    // ===== NATO HANDGUNS =====
    
    // P07 9 mm - Standard NATO sidearm
    const p07 = createInheritedItem('hgun_P07_F', 'P07 9 mm', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '9×19 mm',
        range: 180,
        rateOfFire: 450,
        mass: 900,
        modes: ['Single'],
        magazines: ['16Rnd_9x21_Mag'],
        mod: 'A3',
        scope: 2,
        faction: 'NATO'
    });
    items.push(p07);
    
    // P07 texture variants
    const p07Variants = [
        { className: 'hgun_P07_blk_F', name: 'P07 9 mm (Black)', texture: 'black' },
        { className: 'hgun_P07_khk_F', name: 'P07 9 mm (Khaki)', texture: 'khaki' }
    ];
    
    p07Variants.forEach(variant => {
        const item = createVariant(p07, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // Pistol .45 ACP
    const pistol45 = createInheritedItem('hgun_Pistol_heavy_01_F', 'Pistol .45 ACP', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '.45 ACP',
        range: 200,
        rateOfFire: 350,
        mass: 1200,
        modes: ['Single'],
        magazines: ['11Rnd_45ACP_Mag'],
        mod: 'A3',
        scope: 2
    });
    items.push(pistol45);
    
    // ===== CSAT HANDGUNS =====
    
    // Rook-40 9 mm
    const rook40 = createInheritedItem('hgun_Rook40_F', 'Rook-40 9 mm', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '9×19 mm',
        range: 160,
        rateOfFire: 400,
        mass: 850,
        modes: ['Single'],
        magazines: ['16Rnd_9x21_Mag'],
        mod: 'A3',
        scope: 2,
        faction: 'CSAT'
    });
    items.push(rook40);
    
    // ===== AAF HANDGUNS =====
    
    // ACPC2 .45 ACP
    const acpc2 = createInheritedItem('hgun_ACPC2_F', 'ACPC2 .45 ACP', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '.45 ACP',
        range: 190,
        rateOfFire: 380,
        mass: 1100,
        modes: ['Single'],
        magazines: ['9Rnd_45ACP_Mag'],
        mod: 'A3',
        scope: 2,
        faction: 'AAF'
    });
    items.push(acpc2);
    
    // ===== CIVILIAN/SPECIAL HANDGUNS =====
    
    // 4-five .45 ACP
    const fourFive = createInheritedItem('hgun_Pistol_heavy_02_F', '4-five .45 ACP', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '.45 ACP',
        range: 220,
        rateOfFire: 320,
        mass: 1300,
        modes: ['Single'],
        magazines: ['11Rnd_45ACP_Mag'],
        mod: 'A3',
        scope: 2
    });
    items.push(fourFive);
    
    // 4-five variants
    const fourFiveVariants = [
        { className: 'hgun_Pistol_heavy_02_Yorris_F', name: '4-five .45 ACP (Yorris)', texture: 'yorris' }
    ];
    
    fourFiveVariants.forEach(variant => {
        const item = createVariant(fourFive, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // Zubr .45 ACP
    const zubr = createInheritedItem('hgun_Pistol_Signal_F', 'Zubr .45 ACP', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '.45 ACP',
        range: 170,
        rateOfFire: 360,
        mass: 1050,
        modes: ['Single'],
        magazines: ['6Rnd_45ACP_Cylinder'],
        mod: 'A3',
        scope: 2
    });
    items.push(zubr);
    
    // ===== RHS HANDGUNS =====
    
    // Makarov PM
    const makarov = createInheritedItem('rhs_weap_makarov_pm', 'Makarov PM', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '9×18 mm',
        range: 150,
        rateOfFire: 300,
        mass: 730,
        modes: ['Single'],
        magazines: ['rhs_mag_9x18_8_57N181S'],
        mod: 'RHS_AFRF',
        scope: 2,
        faction: 'RUS'
    });
    items.push(makarov);
    
    // M9 Beretta
    const m9 = createInheritedItem('rhsusf_weap_m9', 'M9', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '9×19 mm',
        range: 180,
        rateOfFire: 400,
        mass: 950,
        modes: ['Single'],
        magazines: ['rhsusf_mag_15Rnd_9x19_JHP'],
        mod: 'RHS_USAF',
        scope: 2,
        faction: 'USA'
    });
    items.push(m9);
    
    // M1911A1
    const m1911 = createInheritedItem('rhsusf_weap_m1911a1', 'M1911A1', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '.45 ACP',
        range: 170,
        rateOfFire: 350,
        mass: 1100,
        modes: ['Single'],
        magazines: ['rhsusf_mag_7Rnd_45ACP_MHP'],
        mod: 'RHS_USAF',
        scope: 2
    });
    items.push(m1911);
    
    // ===== CUP HANDGUNS =====
    
    // Glock 17
    const glock17 = createInheritedItem('CUP_hgun_Glock17', 'Glock 17', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '9×19 mm',
        range: 180,
        rateOfFire: 450,
        mass: 625,
        modes: ['Single'],
        magazines: ['CUP_17Rnd_9x19_glock17'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(glock17);
    
    // Glock 17 variants
    const glock17Variants = [
        { className: 'CUP_hgun_Glock17_blk', name: 'Glock 17 (Black)', texture: 'black' },
        { className: 'CUP_hgun_Glock17_tan', name: 'Glock 17 (Tan)', texture: 'tan' }
    ];
    
    glock17Variants.forEach(variant => {
        const item = createVariant(glock17, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // M1911 variants
    const cup1911Variants = [
        { className: 'CUP_hgun_Colt1911', name: 'Colt M1911', texture: 'colt', caliber: '.45 ACP', magazines: ['CUP_7Rnd_45ACP_1911'] },
        { className: 'CUP_hgun_M9', name: 'M9A1', texture: 'm9a1', caliber: '9×19 mm', magazines: ['CUP_15Rnd_9x19_M9'] },
        { className: 'CUP_hgun_Phantom', name: 'Phantom', texture: 'phantom', caliber: '.45 ACP', magazines: ['CUP_10Rnd_45ACP_1911'] }
    ];
    
    cup1911Variants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
            subcategory: 'handguns',
            caliber: variant.caliber,
            range: 170,
            rateOfFire: 350,
            mass: 1100,
            modes: ['Single'],
            magazines: variant.magazines,
            mod: 'CUP_Weapons',
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // CZ-75
    const cz75 = createInheritedItem('CUP_hgun_CZ75', 'CZ-75', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '9×19 mm',
        range: 180,
        rateOfFire: 400,
        mass: 1000,
        modes: ['Single'],
        magazines: ['CUP_16Rnd_9x19_cz75'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(cz75);
    
    // Desert Eagle
    const deagle = createInheritedItem('CUP_hgun_DesertEagle', 'Desert Eagle', 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
        subcategory: 'handguns',
        caliber: '.50 AE',
        range: 200,
        rateOfFire: 280,
        mass: 1900,
        modes: ['Single'],
        magazines: ['CUP_7Rnd_50AE_Deagle'],
        mod: 'CUP_Weapons',
        scope: 2
    });
    items.push(deagle);
    
    // Duty & Honor variants
    const dhVariants = [
        { className: 'CUP_hgun_Duty', name: 'Duty', texture: 'duty', caliber: '.40 S&W', magazines: ['CUP_15Rnd_40SW_Duty'] },
        { className: 'CUP_hgun_Compact', name: 'Compact', texture: 'compact', caliber: '.40 S&W', magazines: ['CUP_10Rnd_40SW_Compact'], mass: 750 },
        { className: 'CUP_hgun_MicroUzi', name: 'Micro Uzi', texture: 'microuzi', caliber: '9×19 mm', magazines: ['CUP_20Rnd_9x19_Micro'], mass: 1950, rateOfFire: 950, modes: ['Single', 'FullAuto'] }
    ];
    
    dhVariants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
            subcategory: 'handguns',
            caliber: variant.caliber,
            range: 160,
            rateOfFire: variant.rateOfFire || 380,
            mass: variant.mass || 900,
            modes: variant.modes || ['Single'],
            magazines: variant.magazines,
            mod: 'CUP_Weapons',
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // ===== ADDITIONAL CALIBER VARIANTS =====
    
    // .357 Magnum variants
    const magnum357Variants = [
        { className: 'CUP_hgun_Python', name: 'Colt Python', texture: 'python', caliber: '.357 Magnum', magazines: ['CUP_6Rnd_357_Python'], mass: 1200 },
        { className: 'CUP_hgun_TaurusTracker455', name: 'Taurus Tracker 455', texture: 'taurus455', caliber: '.45 Colt', magazines: ['CUP_5Rnd_45Colt_Tracker'], mass: 1300 }
    ];
    
    magnum357Variants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
            subcategory: 'handguns',
            caliber: variant.caliber,
            range: 190,
            rateOfFire: 200,
            mass: variant.mass,
            modes: ['Single'],
            magazines: variant.magazines,
            mod: 'CUP_Weapons',
            scope: 2,
            texture: variant.texture
        });
        items.push(item);
    });
    
    // .22 LR variants
    const lr22Variants = [
        { className: 'CUP_hgun_MK22', name: 'Mk 22 Mod 0', texture: 'mk22', caliber: '.22 LR', magazines: ['CUP_10Rnd_22LR_MK22'], mass: 950, features: ['Suppressed'] },
        { className: 'CUP_hgun_Walther', name: 'Walther P22', texture: 'walther', caliber: '.22 LR', magazines: ['CUP_10Rnd_22LR_Walther'], mass: 420 }
    ];
    
    lr22Variants.forEach(variant => {
        const item = createInheritedItem(variant.className, variant.name, 'handguns', 'Pistol_Base_F', ['Pistol_Base_F'], {
            subcategory: 'handguns',
            caliber: variant.caliber,
            range: 120,
            rateOfFire: 300,
            mass: variant.mass,
            modes: ['Single'],
            magazines: variant.magazines,
            mod: 'CUP_Weapons',
            scope: 2,
            texture: variant.texture,
            features: variant.features
        });
        items.push(item);
    });
    
    // ===== DESIGNATED MARKSMAN RIFLES (DMRs) =====
    
    // Mk-I EMR (NATO)
    const mkiEMR = createInheritedItem('srifle_DMR_03_F', 'Mk-I EMR', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '.338 Lapua Magnum',
        range: 900,
        rateOfFire: 450,
        mass: 6800,
        modes: ['Single'],
        magazines: ['20Rnd_338_Mag'],
        mod: 'A3',
        scope: 2,
        dlc: 'Marksmen'
    });
    items.push(mkiEMR);
    
    // EMR variants
    const emrVariants = [
        { className: 'srifle_DMR_03_khaki_F', name: 'Khaki', texture: 'khaki' },
        { className: 'srifle_DMR_03_multicam_F', name: 'Multicam', texture: 'multicam' },
        { className: 'srifle_DMR_03_woodland_F', name: 'Woodland', texture: 'woodland' }
    ];
    
    emrVariants.forEach(variant => {
        const item = createVariant(mkiEMR, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // MAR-10 .338
    const mar10 = createInheritedItem('srifle_DMR_02_F', 'MAR-10 .338', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '.338 Lapua Magnum',
        range: 1000,
        rateOfFire: 400,
        mass: 7200,
        modes: ['Single'],
        magazines: ['10Rnd_338_Mag'],
        mod: 'A3',
        scope: 2,
        dlc: 'Marksmen'
    });
    items.push(mar10);
    
    // MAR-10 variants
    const mar10Variants = [
        { className: 'srifle_DMR_02_camo_F', name: 'MAR-10 .338 (Camo)', texture: 'camo' },
        { className: 'srifle_DMR_02_sniper_F', name: 'MAR-10 .338 (Sniper)', texture: 'sniper' }
    ];
    
    mar10Variants.forEach(variant => {
        const item = createVariant(mar10, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // Mk14 7.62 mm (Base weapon)
    const mk14 = createInheritedItem('srifle_DMR_06_camo_F', 'Mk14 7.62 mm (Camo)', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '7.62×51 mm',
        range: 750,
        rateOfFire: 500,
        mass: 5400,
        modes: ['Single'],
        magazines: ['20Rnd_762x51_Mag'],
        mod: 'A3',
        scope: 2,
        dlc: 'Marksmen'
    });
    items.push(mk14);
    
    // Mk14 variants (only texture variants of the same weapon)
    const mk14Variants = [
        { className: 'srifle_DMR_06_olive_F', name: 'Olive', texture: 'olive' }
    ];
    
    mk14Variants.forEach(variant => {
        const item = createVariant(mk14, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // ASP-1 Kir 12.7 mm (Separate weapon family)
    const asp1Kir = createInheritedItem('srifle_DMR_04_F', 'ASP-1 Kir 12.7 mm', 'weapons', 'Rifle_Long_Base_F', ['Rifle_Long_Base_F'], {
        subcategory: 'sniper_rifles',
        caliber: '12.7×54 mm',
        range: 1200,
        rateOfFire: 400,
        mass: 8500,
        modes: ['Single'],
        magazines: ['10Rnd_127x54_Mag'],
        mod: 'A3',
        scope: 2,
        dlc: 'Marksmen'
    });
    items.push(asp1Kir);
    
    // ASP-1 Kir variants
    const asp1KirVariants = [
        { className: 'srifle_DMR_04_Tan_F', name: 'Tan', texture: 'tan' }
    ];
    
    asp1KirVariants.forEach(variant => {
        const item = createVariant(asp1Kir, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // ===== LIGHT MACHINE GUNS =====
    
    // SPMG .338
    const spmg338 = createInheritedItem('MMG_02_camo_F', 'SPMG .338 (MTP)', 'weapons', 'MGun_base_F', ['MGun_base_F'], {
        subcategory: 'machine_guns',
        caliber: '.338 Lapua Magnum',
        range: 1200,
        rateOfFire: 550,
        mass: 11300,
        modes: ['FullAuto'],
        magazines: ['130Rnd_338_Mag'],
        mod: 'A3',
        scope: 2,
        dlc: 'Marksmen'
    });
    items.push(spmg338);
    
    // SPMG variants
    const spmgVariants = [
        { className: 'MMG_02_black_F', name: 'SPMG .338 (Black)', texture: 'black' },
        { className: 'MMG_02_sand_F', name: 'SPMG .338 (Sand)', texture: 'sand' }
    ];
    
    spmgVariants.forEach(variant => {
        const item = createVariant(spmg338, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // Navid 9.3 mm (Base weapon)
    const navid = createInheritedItem('MMG_01_hex_F', 'Navid 9.3 mm (Hex)', 'weapons', 'MGun_base_F', ['MGun_base_F'], {
        subcategory: 'machine_guns',
        caliber: '9.3×64 mm',
        range: 1100,
        rateOfFire: 600,
        mass: 10200,
        modes: ['FullAuto'],
        magazines: ['150Rnd_93x64_Mag'],
        mod: 'A3',
        scope: 2,
        dlc: 'Marksmen'
    });
    items.push(navid);
    
    // Navid variants
    const navidVariants = [
        { className: 'MMG_01_tan_F', name: 'Tan', texture: 'tan' }
    ];
    
    navidVariants.forEach(variant => {
        const item = createVariant(navid, variant.name, variant.texture, {
            className: variant.className
        });
        items.push(item);
    });
    
    // ===== ROCKET LAUNCHERS =====
    
    // PCML (Titan MPRL Compact)
    const pcml = createInheritedItem('launch_NLAW_F', 'PCML', 'launchers', 'Launcher_Base_F', ['Launcher_Base_F'], {
        subcategory: 'launchers',
        caliber: 'NLAW Missile',
        range: 600,
        rateOfFire: 1,
        mass: 12500,
        modes: ['Single'],
        magazines: ['NLAW_F'],
        mod: 'A3',
        scope: 2,
        type: 'Anti-Tank'
    });
    items.push(pcml);
    
    // Titan MPRL (AA)
    const titanAA = createInheritedItem('launch_B_Titan_F', 'Titan MPRL (Sand)', 'launchers', 'Launcher_Base_F', ['Launcher_Base_F'], {
        subcategory: 'launchers',
        caliber: 'Titan Missile',
        range: 4000,
        rateOfFire: 1,
        mass: 22000,
        modes: ['Single'],
        magazines: ['Titan_AA'],
        mod: 'A3',
        scope: 2,
        type: 'Anti-Aircraft'
    });
    items.push(titanAA);
    
    // Titan MPRL (AT)
    const titanAT = createInheritedItem('launch_B_Titan_short_F', 'Titan MPRL Compact', 'launchers', 'Launcher_Base_F', ['Launcher_Base_F'], {
        subcategory: 'launchers',
        caliber: 'Titan Missile',
        range: 2000,
        rateOfFire: 1,
        mass: 18000,
        modes: ['Single'],
        magazines: ['Titan_AT'],
        mod: 'A3',
        scope: 2,
        type: 'Anti-Tank'
    });
    items.push(titanAT);
    
    // Titan variants
    const titanVariants = [
        { className: 'launch_O_Titan_F', name: 'Titan MPRL (Hex)', texture: 'hex', type: 'Anti-Aircraft', magazines: ['Titan_AA'] },
        { className: 'launch_O_Titan_short_F', name: 'Titan MPRL Compact (Hex)', texture: 'hex', type: 'Anti-Tank', magazines: ['Titan_AT'] },
        { className: 'launch_I_Titan_F', name: 'Titan MPRL (Olive)', texture: 'olive', type: 'Anti-Aircraft', magazines: ['Titan_AA'] },
        { className: 'launch_I_Titan_short_F', name: 'Titan MPRL Compact (Olive)', texture: 'olive', type: 'Anti-Tank', magazines: ['Titan_AT'] }
    ];
    
    titanVariants.forEach(variant => {
        const item = createVariant(titanAA, variant.name, variant.texture, {
            className: variant.className,
            type: variant.type,
            magazines: variant.magazines
        });
        items.push(item);
    });
    
    // RPG-42 Alamut
    const rpg42 = createInheritedItem('launch_RPG32_F', 'RPG-42 Alamut', 'launchers', 'Launcher_Base_F', ['Launcher_Base_F'], {
        subcategory: 'launchers',
        caliber: 'RPG-42 Rocket',
        range: 700,
        rateOfFire: 1,
        mass: 8200,
        modes: ['Single'],
        magazines: ['RPG32_F', 'RPG32_HE_F'],
        mod: 'A3',
        scope: 2,
        type: 'Multi-Purpose'
    });
    items.push(rpg42);
    
    // ===== RHS LAUNCHERS =====
    
    // RPG-7V2
    const rpg7 = createInheritedItem('rhs_weap_rpg7', 'RPG-7V2', 'launchers', 'Launcher_Base_F', ['Launcher_Base_F'], {
        subcategory: 'launchers',
        caliber: 'RPG-7 Rocket',
        range: 500,
        rateOfFire: 1,
        mass: 6300,
        modes: ['Single'],
        magazines: ['rhs_rpg7_PG7VL_mag'],
        mod: 'RHS_AFRF',
        scope: 2,
        type: 'Anti-Tank'
    });
    items.push(rpg7);
    
    // AT4
    const at4 = createInheritedItem('rhs_weap_M136', 'M136 (AT4)', 'launchers', 'Launcher_Base_F', ['Launcher_Base_F'], {
        subcategory: 'launchers',
        caliber: '84mm HEAT',
        range: 300,
        rateOfFire: 1,
        mass: 6700,
        modes: ['Single'],
        magazines: ['rhs_m136_mag'],
        mod: 'RHS_USAF',
        scope: 2,
        type: 'Anti-Tank'
    });
    items.push(at4);
    
    // FGM-148 Javelin
    const javelin = createInheritedItem('rhs_weap_fgm148', 'FGM-148 Javelin', 'launchers', 'Launcher_Base_F', ['Launcher_Base_F'], {
        subcategory: 'launchers',
        caliber: 'Javelin Missile',
        range: 4750,
        rateOfFire: 1,
        mass: 22300,
        modes: ['Single'],
        magazines: ['rhs_fgm148_magazine_AT'],
        mod: 'RHS_USAF',
        scope: 2,
        type: 'Fire-and-Forget AT'
    });
    items.push(javelin);
    
    return items;
}