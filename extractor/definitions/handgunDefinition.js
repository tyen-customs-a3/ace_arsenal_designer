/**
 * Handgun Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for handguns/pistols in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify handguns and extract
 * queryable metadata like caliber, damage, and compatibility information.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Handgun type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const handgunDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'handgun',

    /**
     * Determines if the given resolved class data represents a handgun/pistol
     * 
     * Detection criteria for handguns:
     * - Must have handgun-specific class name patterns (hgun_, pistol)
     * - Should inherit from Pistol_Base_F or similar handgun base classes
     * - Should have magazines array with pistol ammunition
     * - Should have modes array with firing modes
     * - EXCLUDES rifles, SMGs, and other long guns
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @returns {boolean} True if this is a handgun, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        const className = classData.className || '';
        const baseClass = classData.baseClass || '';
        const props = classData.properties || classData;

        // EXCLUSIONS FIRST - items that should NOT be classified as handguns
        
        // Exclude personnel/unit classes (MAN classes)
        if (/^[BIOC]_.*_(base_)?FLV$|^[BIOC]_[A-Za-z_]*_FLV$/i.test(className) ||
            /soldier|diver|ghillie|sniper|spotter|support|crew|pilot|commander/i.test(className) ||
            /CAManBase|SoldierWB|SoldierEB|SoldierGB/i.test(baseClass)) {
            return false;
        }
        
        // Exclude binoculars and laser designators
        if (/laserdesignator|binocular|designator/i.test(className) ||
            /LaserDesignator|Binocular/i.test(baseClass)) {
            return false;
        }

        // PRIMARY INDICATORS - handgun-specific patterns
        
        // Class name patterns for handguns
        if (/^hgun_/i.test(className) || 
            /pistol$/i.test(className) ||
            /^CUP_hgun_/i.test(className)) {
            return true;
        }

        // Base class indicators for handguns
        if (/Pistol_Base_F|hgun_|HandGun/i.test(baseClass)) {
            return true;
        }

        // Secondary indicators: check for handgun characteristics
        // Handguns typically have magazines but are shorter range than rifles
        if (Array.isArray(props.magazines) && props.magazines.length > 0) {
            // Check if magazines suggest handgun calibers
            const magazines = props.magazines.join(' ').toLowerCase();
            if (/9mm|45acp|357|40sw|380|22lr|50ae/i.test(magazines)) {
                return true;
            }
        }

        // Exclusions - make sure we don't catch rifles/SMGs
        if (/^(arifle|srifle|lmg|smg|launch)_/i.test(className) ||
            /Rifle_Base_F|SMG_.*_Base|LauncherCore/i.test(baseClass)) {
            return false;
        }

        return false;
    },

    /**
     * Extracts handgun-specific metadata from resolved class data
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing handgun-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Type identifier
            type: this.type,
            
            // Core handgun characteristics
            caliber: this._extractCaliber(classData, allResolvedData),
            damage: this._extractDamage(classData),
            range: this._extractRange(classData),
            rateOfFire: this._extractRateOfFire(classData),
            muzzleVelocity: this._extractMuzzleVelocity(classData),
            weight: this._extractWeight(classData),
            
            // Compatibility and attachments
            attachmentSlots: this._extractAttachmentSlots(classData),
            compatibleMagazines: this._extractCompatibleMagazines(classData),
            magazineWells: this._extractMagazineWells(classData),
            
            // Operational characteristics
            firingModes: this._extractFiringModes(classData),
            handgunType: this._extractHandgunType(classData),
            
            // Additional metadata
            hasOptics: this._hasOptics(classData),
            isSuppressed: this._isSuppressed(classData)
        };

        return meta;
    },

    /**
     * Extracts caliber information from handgun data
     * @private
     */
    _extractCaliber(classData, allResolvedData) {
        // Try magazine wells first
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
        }

        // Try class name patterns
        const caliber = this._caliberFromClassName(classData.className);
        if (caliber) return caliber;

        return 'unknown';
    },

    /**
     * Extracts caliber from magazine well identifier for handguns
     * @private
     */
    _caliberFromMagazineWell(well) {
        const wellPatterns = {
            '9x19': /9x19|9mm/i,
            '45ACP': /45ACP|45_ACP/i,
            '357': /357|357mag/i,
            '40SW': /40SW|40S&W/i,
            '380': /380|380ACP/i,
            '22LR': /22LR|22/i,
            '50AE': /50AE|50.*eagle/i
        };

        for (const [caliber, pattern] of Object.entries(wellPatterns)) {
            if (pattern.test(well)) return caliber;
        }
        return null;
    },

    /**
     * Extracts caliber from magazine class name for handguns
     * @private
     */
    _caliberFromMagazineName(magazineName) {
        const magPatterns = {
            '9x19': /9x19|9mm/i,
            '45ACP': /45ACP|45_ACP/i,
            '357': /357|357mag/i,
            '40SW': /40SW|40S&W/i,
            '380': /380|380ACP/i,
            '22LR': /22LR|22/i,
            '50AE': /50AE|50.*eagle/i
        };

        for (const [caliber, pattern] of Object.entries(magPatterns)) {
            if (pattern.test(magazineName)) return caliber;
        }
        return null;
    },

    /**
     * Extracts caliber from handgun class name
     * @private
     */
    _caliberFromClassName(className) {
        if (!className) return null;
        
        const classPatterns = {
            '9x19': /P99|Glock|Beretta|9mm/i,
            '45ACP': /M1911|1911|45/i,
            '357': /357|Magnum/i,
            '22LR': /22|MK22/i,
            '50AE': /Deagle|Eagle|50/i
        };

        for (const [caliber, pattern] of Object.entries(classPatterns)) {
            if (pattern.test(className)) return caliber;
        }
        return null;
    },

    /**
     * Extracts damage rating from handgun data
     * @private
     */
    _extractDamage(classData) {
        if (typeof classData.damage === 'number') {
            return classData.damage;
        }

        if (classData.Single && typeof classData.Single.damage === 'number') {
            return classData.Single.damage;
        }

        return null;
    },

    /**
     * Extracts range information from handgun data
     * @private
     */
    _extractRange(classData) {
        const ranges = {};

        const modes = ['Single', 'FullAuto'];
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
     * Extracts rate of fire from handgun data
     * @private
     */
    _extractRateOfFire(classData) {
        if (classData.FullAuto && typeof classData.FullAuto.reloadTime === 'number') {
            return Math.round(60 / classData.FullAuto.reloadTime);
        }

        if (classData.Single && typeof classData.Single.reloadTime === 'number') {
            return Math.round(60 / classData.Single.reloadTime);
        }

        return null;
    },

    /**
     * Extracts muzzle velocity from handgun data
     * @private
     */
    _extractMuzzleVelocity(classData) {
        if (typeof classData.initSpeed === 'number') {
            return classData.initSpeed;
        }
        return null;
    },

    /**
     * Extracts handgun weight/mass
     * @private
     */
    _extractWeight(classData) {
        if (typeof classData.mass === 'number') {
            return classData.mass;
        }
        return null;
    },

    /**
     * Extracts attachment slot information for handguns
     * @private
     */
    _extractAttachmentSlots(classData) {
        if (!classData.WeaponSlotsInfo) return null;

        const slots = {};
        const slotsInfo = classData.WeaponSlotsInfo;

        // Common handgun slot types
        const slotTypes = [
            'MuzzleSlot', 'PointerSlot', 'CowsSlot',
            'asdg_MuzzleSlot', 'asdg_OpticRail'
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
            'MuzzleSlot': 'muzzle',
            'PointerSlot': 'laser',
            'CowsSlot': 'optic',
            'asdg_MuzzleSlot': 'muzzle',
            'asdg_OpticRail': 'optic'
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
     * Extracts firing modes from handgun data
     * @private
     */
    _extractFiringModes(classData) {
        if (Array.isArray(classData.modes)) {
            return [...classData.modes];
        }
        return null;
    },

    /**
     * Determines handgun type/category
     * @private
     */
    _extractHandgunType(classData) {
        const className = classData.className || '';
        
        // Handgun type patterns
        if (/pistol|sidearm/i.test(className)) return 'pistol';
        if (/revolver/i.test(className)) return 'revolver';
        if (/machine.*pistol|auto.*pistol/i.test(className)) return 'machine_pistol';
        if (/deagle|eagle|magnum/i.test(className)) return 'heavy_pistol';
        
        return 'pistol'; // Default
    },

    /**
     * Checks if handgun has integrated optics
     * @private
     */
    _hasOptics(classData) {
        return typeof classData.optics === 'number' && classData.optics > 1;
    },

    /**
     * Checks if handgun is integrally suppressed
     * @private
     */
    _isSuppressed(classData) {
        const className = classData.className || '';
        return /silenc|suppress|quiet|stealth/i.test(className);
    }
};

// Export the definition
export default handgunDefinition;