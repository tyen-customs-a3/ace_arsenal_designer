/**
 * Weapon Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for weapons in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify weapons and extract
 * queryable metadata like caliber, damage, fire modes, and compatibility information.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Weapon type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const weaponDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'weapon',

    /**
     * Determines if the given resolved class data represents a weapon
     * 
     * Detection criteria for weapons:
     * - Must have WeaponSlotsInfo property (primary indicator)
     * - Should have magazines array with ammunition types
     * - Should have modes array with firing modes
     * - May have initSpeed property for muzzle velocity
     * - Should inherit from weapon base classes like Rifle_Base_F, Pistol_Base_F, etc.
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {string} classData.className - The class name
     * @param {string} [classData.baseClass] - The parent class name
     * @param {Object} [classData.WeaponSlotsInfo] - Weapon attachment slot configuration
     * @param {Array<string>} [classData.magazines] - Compatible magazine class names
     * @param {Array<string>} [classData.modes] - Available firing modes
     * @param {number} [classData.initSpeed] - Initial muzzle velocity
     * @param {Array<string>} [classData.magazineWell] - Magazine well compatibility
     * @returns {boolean} True if this is a weapon, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        // Primary indicator: weapons must have WeaponSlotsInfo
        if (classData.WeaponSlotsInfo) {
            return true;
        }

        // Secondary indicators: magazines array indicates weapon
        if (Array.isArray(classData.magazines) && classData.magazines.length > 0) {
            return true;
        }

        // Tertiary indicator: modes array with firing modes
        if (Array.isArray(classData.modes) && classData.modes.length > 0) {
            return true;
        }

        // Base class indicators - check for common weapon base classes
        const weaponBaseClasses = [
            'Rifle_Base_F',
            'Rifle_Long_Base_F', 
            'Rifle_Short_Base_F',
            'Pistol_Base_F',
            'SMG_01_Base',
            'SMG_02_Base',
            'SMG_03_Base',
            'MGun',
            'MGunCore',
            'LauncherCore',
            'Launcher_Base_F',
            'arifle_MX_Base_F',
            'CUP_arifle_AK_Base',
            'CUP_arifle_AKS_Base'
        ];

        if (classData.baseClass && weaponBaseClasses.some(baseClass => 
            classData.baseClass.includes(baseClass))) {
            return true;
        }

        // Class name patterns that indicate weapons
        const weaponClassPatterns = [
            /^(arifle|srifle|hgun|lmg|smg|mmg|launch)_/i,
            /^CUP_(arifle|srifle|hgun|lmg|smg|mmg|launch)_/i,
            /rifle$/i,
            /pistol$/i,
            /carbine$/i
        ];

        if (classData.className && weaponClassPatterns.some(pattern => 
            pattern.test(classData.className))) {
            return true;
        }

        return false;
    },

    /**
     * Extracts weapon-specific metadata from resolved class data
     * 
     * Extracted metadata includes:
     * - caliber: Determined from magazine compatibility and ammunition
     * - damage: Weapon damage rating
     * - range: Effective range categories
     * - rateOfFire: Rate of fire in rounds per minute
     * - muzzleVelocity: Initial bullet speed
     * - weight: Weapon mass
     * - length: Weapon length (barrel length)
     * - attachmentSlots: Available attachment mounting points
     * - compatibleMagazines: List of compatible magazine types
     * - firingModes: Available firing modes (single, auto, burst)
     * - weaponType: Sub-category (rifle, pistol, launcher, etc.)
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing weapon-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Core weapon characteristics
            caliber: this._extractCaliber(classData, allResolvedData),
            damage: this._extractDamage(classData),
            range: this._extractRange(classData),
            rateOfFire: this._extractRateOfFire(classData),
            muzzleVelocity: this._extractMuzzleVelocity(classData),
            weight: this._extractWeight(classData),
            length: this._extractLength(classData),
            
            // Compatibility and attachments
            attachmentSlots: this._extractAttachmentSlots(classData),
            compatibleMagazines: this._extractCompatibleMagazines(classData),
            magazineWells: this._extractMagazineWells(classData),
            
            // Operational characteristics
            firingModes: this._extractFiringModes(classData),
            weaponType: this._extractWeaponType(classData),
            
            // Additional metadata
            hasGrenadeLauncher: this._hasGrenadeLauncher(classData),
            hasOptics: this._hasOptics(classData),
            isSuppressed: this._isSuppressed(classData)
        };

        return meta;
    },

    /**
     * Extracts caliber information from weapon data
     * @private
     */
    _extractCaliber(classData, allResolvedData) {
        // Try magazine wells first - most reliable method
        if (Array.isArray(classData.magazineWell)) {
            for (const well of classData.magazineWell) {
                const caliber = this._caliberFromMagazineWell(well);
                if (caliber) return caliber;
            }
        }

        // Try compatible magazines
        if (Array.isArray(classData.magazines) && classData.magazines.length > 0) {
            const firstMag = classData.magazines[0];
            const caliber = this._caliberFromMagazineName(firstMag);
            if (caliber) return caliber;
            
            // Try to resolve magazine data
            const magData = allResolvedData[firstMag];
            if (magData && magData.ammo) {
                const caliber = this._caliberFromAmmoName(magData.ammo);
                if (caliber) return caliber;
            }
        }

        // Try class name patterns
        const caliber = this._caliberFromClassName(classData.className);
        if (caliber) return caliber;

        return 'unknown';
    },

    /**
     * Extracts caliber from magazine well identifier
     * @private
     */
    _caliberFromMagazineWell(well) {
        const wellPatterns = {
            '545x39': /545x39/i,
            '762x39': /762x39/i,
            '762x51': /762x51/i,
            '556x45': /556x45/i,
            '9x19': /9x19|9mm/i,
            '45ACP': /45ACP|45_ACP/i,
            '338': /338/i,
            '127x99': /127x99|50cal|12.7/i
        };

        for (const [caliber, pattern] of Object.entries(wellPatterns)) {
            if (pattern.test(well)) return caliber;
        }
        return null;
    },

    /**
     * Extracts caliber from magazine class name
     * @private
     */
    _caliberFromMagazineName(magazineName) {
        const magPatterns = {
            '545x39': /545x39/i,
            '762x39': /762x39/i,
            '762x51': /762x51/i,
            '556x45': /556x45/i,
            '9x19': /9x19|9mm/i,
            '45ACP': /45ACP/i,
            '338': /338/i,
            '127x99': /127x99/i
        };

        for (const [caliber, pattern] of Object.entries(magPatterns)) {
            if (pattern.test(magazineName)) return caliber;
        }
        return null;
    },

    /**
     * Extracts caliber from ammunition class name
     * @private
     */
    _caliberFromAmmoName(ammoName) {
        const ammoPatterns = {
            '545x39': /545x39/i,
            '762x39': /762x39/i,
            '762x51': /762x51/i,
            '556x45': /556x45/i,
            '9x19': /9x19|9mm/i,
            '45ACP': /45ACP/i,
            '338': /338/i,
            '127x99': /127x99/i
        };

        for (const [caliber, pattern] of Object.entries(ammoPatterns)) {
            if (pattern.test(ammoName)) return caliber;
        }
        return null;
    },

    /**
     * Extracts caliber from weapon class name
     * @private
     */
    _caliberFromClassName(className) {
        if (!className) return null;
        
        const classPatterns = {
            '545x39': /AK74|AKS74|AK105|RPK74/i,
            '762x39': /AK47|AKM|AK103|RPK/i,
            '556x45': /M16|M4|HK416|SCAR_L/i,
            '762x51': /M14|HK417|SCAR_H|SR25/i,
            '9x19': /MP5|P99|Glock/i,
            '45ACP': /M1911|UMP45/i
        };

        for (const [caliber, pattern] of Object.entries(classPatterns)) {
            if (pattern.test(className)) return caliber;
        }
        return null;
    },

    /**
     * Extracts damage rating from weapon data
     * @private
     */
    _extractDamage(classData) {
        // Direct damage property
        if (typeof classData.damage === 'number') {
            return classData.damage;
        }

        // Try to extract from Single mode
        if (classData.Single && typeof classData.Single.damage === 'number') {
            return classData.Single.damage;
        }

        // Try FullAuto mode
        if (classData.FullAuto && typeof classData.FullAuto.damage === 'number') {
            return classData.FullAuto.damage;
        }

        return null;
    },

    /**
     * Extracts range information from weapon data
     * @private
     */
    _extractRange(classData) {
        const ranges = {};

        // Extract from firing modes
        const modes = ['Single', 'FullAuto', 'Burst'];
        for (const mode of modes) {
            if (classData[mode]) {
                const modeData = classData[mode];
                if (typeof modeData.maxRange === 'number') {
                    ranges[mode.toLowerCase()] = {
                        min: modeData.minRange || 0,
                        mid: modeData.midRange || 0,
                        max: modeData.maxRange
                    };
                }
            }
        }

        return Object.keys(ranges).length > 0 ? ranges : null;
    },

    /**
     * Extracts rate of fire from weapon data
     * @private
     */
    _extractRateOfFire(classData) {
        // Try FullAuto mode first
        if (classData.FullAuto && typeof classData.FullAuto.reloadTime === 'number') {
            // Convert reload time to RPM: 60 / reloadTime
            return Math.round(60 / classData.FullAuto.reloadTime);
        }

        // Try Single mode
        if (classData.Single && typeof classData.Single.reloadTime === 'number') {
            return Math.round(60 / classData.Single.reloadTime);
        }

        return null;
    },

    /**
     * Extracts muzzle velocity from weapon data
     * @private
     */
    _extractMuzzleVelocity(classData) {
        if (typeof classData.initSpeed === 'number') {
            return classData.initSpeed;
        }
        return null;
    },

    /**
     * Extracts weapon weight/mass
     * @private
     */
    _extractWeight(classData) {
        if (typeof classData.mass === 'number') {
            return classData.mass;
        }
        return null;
    },

    /**
     * Extracts weapon length information
     * @private
     */
    _extractLength(classData) {
        const length = {};
        
        if (typeof classData.ACE_barrelLength === 'number') {
            length.barrel = classData.ACE_barrelLength;
        }
        
        if (typeof classData.ACE_overallLength === 'number') {
            length.overall = classData.ACE_overallLength;
        }

        return Object.keys(length).length > 0 ? length : null;
    },

    /**
     * Extracts attachment slot information
     * @private
     */
    _extractAttachmentSlots(classData) {
        if (!classData.WeaponSlotsInfo) return null;

        const slots = {};
        const slotsInfo = classData.WeaponSlotsInfo;

        // Common slot types to look for
        const slotTypes = [
            'CowsSlot', 'PointerSlot', 'MuzzleSlot', 'UnderBarrelSlot',
            'asdg_OpticRail', 'asdg_MuzzleSlot', 'asdg_FrontSideRail',
            'CUP_DovetailMount_AK', 'CUP_EastMuzzleSlotAK'
        ];

        for (const slotType of slotTypes) {
            if (slotsInfo[slotType]) {
                const slotName = this._normalizeSlotName(slotType);
                slots[slotName] = {
                    type: slotType,
                    available: true
                };
            }
        }

        return Object.keys(slots).length > 0 ? slots : null;
    },

    /**
     * Normalizes slot names for consistent querying
     * @private
     */
    _normalizeSlotName(slotType) {
        const mappings = {
            'CowsSlot': 'optic',
            'PointerSlot': 'laser',
            'MuzzleSlot': 'muzzle',
            'UnderBarrelSlot': 'underbarrel',
            'asdg_OpticRail': 'optic',
            'asdg_MuzzleSlot': 'muzzle',
            'asdg_FrontSideRail': 'side',
            'CUP_DovetailMount_AK': 'optic',
            'CUP_EastMuzzleSlotAK': 'muzzle'
        };
        
        return mappings[slotType] || slotType.toLowerCase();
    },

    /**
     * Extracts compatible magazine list
     * @private
     */
    _extractCompatibleMagazines(classData) {
        if (Array.isArray(classData.magazines)) {
            return [...classData.magazines];
        }
        return null;
    },

    /**
     * Extracts magazine well compatibility
     * @private
     */
    _extractMagazineWells(classData) {
        if (Array.isArray(classData.magazineWell)) {
            return [...classData.magazineWell];
        }
        return null;
    },

    /**
     * Extracts firing modes from weapon data
     * @private
     */
    _extractFiringModes(classData) {
        if (Array.isArray(classData.modes)) {
            return [...classData.modes];
        }
        return null;
    },

    /**
     * Determines weapon type/category
     * @private
     */
    _extractWeaponType(classData) {
        const className = classData.className || '';
        
        // Type patterns
        if (/^arifle_|rifle/i.test(className)) return 'rifle';
        if (/^srifle_|sniper/i.test(className)) return 'sniper_rifle';
        if (/^hgun_|pistol/i.test(className)) return 'pistol';
        if (/^lmg_|machinegun/i.test(className)) return 'machine_gun';
        if (/^smg_|submachine/i.test(className)) return 'submachine_gun';
        if (/^launch_|launcher/i.test(className)) return 'launcher';
        if (/shotgun/i.test(className)) return 'shotgun';
        
        // Base class patterns
        const baseClass = classData.baseClass || '';
        if (/rifle/i.test(baseClass)) return 'rifle';
        if (/pistol/i.test(baseClass)) return 'pistol';
        if (/launch/i.test(baseClass)) return 'launcher';
        
        return 'unknown';
    },

    /**
     * Checks if weapon has integrated grenade launcher
     * @private
     */
    _hasGrenadeLauncher(classData) {
        const className = classData.className || '';
        const hasGL = /_GL|_UGL|grenade/i.test(className);
        
        // Check for underbarrel slot
        const hasUnderbarrelSlot = classData.WeaponSlotsInfo && 
            classData.WeaponSlotsInfo.UnderBarrelSlot;
            
        return hasGL || hasUnderbarrelSlot || false;
    },

    /**
     * Checks if weapon has integrated optics
     * @private
     */
    _hasOptics(classData) {
        return typeof classData.optics === 'number' && classData.optics > 1;
    },

    /**
     * Checks if weapon is integrally suppressed
     * @private
     */
    _isSuppressed(classData) {
        const className = classData.className || '';
        return /silenc|suppress|quiet|stealth/i.test(className);
    }
};

// Export the definition
export default weaponDefinition;