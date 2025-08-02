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
     * Detection criteria for weapons (refined to avoid false positives):
     * - Must have WeaponSlotsInfo AND magazines/modes (not just WeaponSlotsInfo alone)
     * - Should have magazines array with ammunition types
     * - Should have modes array with firing modes
     * - May have initSpeed property for muzzle velocity
     * - Should inherit from weapon base classes like Rifle_Base_F, Pistol_Base_F, etc.
     * - EXCLUDES launchers (they have their own category)
     * - EXCLUDES pure accessories (no magazines/modes)
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

        const className = classData.className || '';
        const baseClass = classData.baseClass || '';
        
        // Get properties object (may be nested)
        const props = classData.properties || classData;

        // EXCLUSIONS FIRST - items that should NOT be classified as weapons
        
        // Exclude personnel/unit classes (MAN classes)
        if (/^[BIOC]_.*_(base_)?FLV$|^[BIOC]_[A-Za-z_]*_FLV$/i.test(className) ||
            /soldier|diver|ghillie|sniper|spotter|support|crew|pilot|commander/i.test(className) ||
            /CAManBase|SoldierWB|SoldierEB|SoldierGB/i.test(baseClass)) {
            return false;
        }
        
        // Exclude launchers - they should be classified separately
        if (/^launch_|launcher/i.test(className) || 
            /LauncherCore|Launcher_Base_F/i.test(baseClass)) {
            return false;
        }
        
        // Exclude binoculars and laser designators
        if (/laserdesignator|binocular|designator/i.test(className) ||
            /LaserDesignator|Binocular/i.test(baseClass)) {
            return false;
        }
        
        // Exclude pure accessories (optics, muzzle devices, etc.)
        if (/^(optic_|muzzle_|acc_|bipod_)/i.test(className) ||
            /ItemCore/i.test(baseClass)) {
            return false;
        }
        
        // Exclude magazines
        if (/^(30Rnd_|20Rnd_|10Rnd_|mag_|magazine)/i.test(className) ||
            /CA_Magazine/i.test(baseClass)) {
            return false;
        }

        // PRIMARY WEAPON INDICATORS (must have multiple criteria)
        
        // Strong indicator: WeaponSlotsInfo + magazines + modes
        if (props.WeaponSlotsInfo && 
            Array.isArray(props.magazines) && props.magazines.length > 0 &&
            Array.isArray(props.modes) && props.modes.length > 0) {
            return true;
        }

        // Secondary: magazines + modes (even without WeaponSlotsInfo)
        if (Array.isArray(props.magazines) && props.magazines.length > 0 &&
            Array.isArray(props.modes) && props.modes.length > 0) {
            return true;
        }

        // Base class indicators - check for specific weapon base classes (excluding launchers)
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
            'arifle_MX_Base_F',
            'CUP_arifle_AK_Base',
            'CUP_arifle_AKS_Base'
        ];

        if (baseClass && weaponBaseClasses.some(baseClassName => 
            baseClass.includes(baseClassName))) {
            return true;
        }

        // Class name patterns that indicate weapons (excluding launchers)
        const weaponClassPatterns = [
            /^(arifle|srifle|hgun|lmg|smg|mmg)_/i,  // Removed launch_ from here
            /^CUP_(arifle|srifle|hgun|lmg|smg|mmg)_/i,  // Removed launch_ from here
            /rifle$/i,
            /pistol$/i,
            /carbine$/i
        ];

        if (className && weaponClassPatterns.some(pattern => 
            pattern.test(className))) {
            // Additional verification: make sure it's not just an accessory with a weapon-like name
            if (Array.isArray(props.magazines) || Array.isArray(props.modes) || props.WeaponSlotsInfo) {
                return true;
            }
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
            // Type identifier
            type: this.type,
            
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
     * Determines weapon type/category - primary weapons only (no launchers/handguns)
     * @private
     */
    _extractWeaponType(classData) {
        const className = classData.className || '';
        const baseClass = classData.baseClass || '';
        
        // Type patterns for PRIMARY WEAPONS only
        if (/^arifle_|assault.*rifle/i.test(className)) return 'assault_rifle';
        if (/^srifle_|sniper.*rifle|marksman/i.test(className)) return 'sniper_rifle';
        if (/^lmg_|light.*machine|machine.*gun/i.test(className)) return 'machine_gun';
        if (/^smg_|submachine/i.test(className)) return 'submachine_gun';
        if (/shotgun|combat.*shotgun/i.test(className)) return 'shotgun';
        if (/carbine|short.*rifle/i.test(className)) return 'carbine';
        if (/battle.*rifle|dmr/i.test(className)) return 'battle_rifle';
        
        // Generic rifle patterns
        if (/rifle$/i.test(className)) return 'rifle';
        
        // Base class patterns for PRIMARY WEAPONS
        if (/Rifle_Base_F|Rifle_Long_Base_F/i.test(baseClass)) return 'rifle';
        if (/Rifle_Short_Base_F/i.test(baseClass)) return 'carbine';
        if (/SMG_.*_Base/i.test(baseClass)) return 'submachine_gun';
        if (/MGun|MachineGun/i.test(baseClass)) return 'machine_gun';
        
        return 'rifle'; // Default for primary weapons
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