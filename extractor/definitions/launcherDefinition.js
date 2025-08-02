/**
 * Launcher Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for launchers in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify launchers and extract
 * queryable metadata like ammunition type, damage, and guidance systems.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Launcher type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const launcherDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'launcher',

    /**
     * Determines if the given resolved class data represents a launcher
     * 
     * Detection criteria for launchers:
     * - Must have launcher-specific class name patterns (launch_, launcher)
     * - Should inherit from LauncherCore, Launcher_Base_F, or similar launcher base classes
     * - Should have magazines array with rocket/missile ammunition
     * - EXCLUDES rifles, handguns, and other small arms
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @returns {boolean} True if this is a launcher, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        const className = classData.className || '';
        const baseClass = classData.baseClass || '';
        const props = classData.properties || classData;

        // EXCLUSIONS FIRST - items that should NOT be classified as launchers
        
        // Exclude personnel/unit classes (MAN classes)
        if (/^[BIOC]_.*_(base_)?FLV$|^[BIOC]_[A-Za-z_]*_FLV$/i.test(className) ||
            /soldier|diver|ghillie|sniper|spotter|support|crew|pilot|commander/i.test(className) ||
            /CAManBase|SoldierWB|SoldierEB|SoldierGB/i.test(baseClass)) {
            return false;
        }
        
        // Exclude laser designators and binoculars (they have their own category)
        if (/laserdesignator|binocular|designator/i.test(className) ||
            /LaserDesignator|Binocular/i.test(baseClass)) {
            return false;
        }
        
        // Exclude weapons (they have magazines and firing modes)
        if (/^(arifle|srifle|hgun|lmg|smg)_/i.test(className) ||
            /Rifle_Base_F|Pistol_Base_F|SMG_.*_Base/i.test(baseClass)) {
            return false;
        }
        
        // Exclude attachments
        if (/^(optic_|muzzle_|acc_)/i.test(className) ||
            /ItemCore|InventoryOpticsItem_Base_F/i.test(baseClass)) {
            return false;
        }
        
        // Exclude magazines
        if (/^\d+Rnd_|_magazine$|_mag$/i.test(className) ||
            /CA_Magazine/i.test(baseClass)) {
            return false;
        }
        
        // Exclude vests and backpacks
        if (/vest|backpack|rucksack/i.test(className) ||
            /Vest_|Bag_Base/i.test(baseClass)) {
            return false;
        }

        // PRIMARY LAUNCHER INDICATORS (must be very specific)
        
        // Base class indicators for launchers (most reliable)
        if (/LauncherCore|Launcher_Base_F|RocketPods/i.test(baseClass)) {
            return true;
        }
        
        // Class name patterns for launchers (only specific patterns)
        if (/^launch_/i.test(className) && 
            !/laserdesignator/i.test(className)) { // Exclude laser designators with launch_ prefix
            return true;
        }
        
        // Specific launcher models
        if (/^(RPG|AT4|SMAW|NLAW|Javelin|Stinger|MAAWS)_/i.test(className) ||
            /^CUP_launch_/i.test(className)) {
            return true;
        }

        // Secondary indicators: launcher-specific magazines + no firing modes
        if (Array.isArray(props.magazines) && props.magazines.length > 0 &&
            !Array.isArray(props.modes)) { // Launchers typically don't have complex firing modes
            const magazines = props.magazines.join(' ').toLowerCase();
            if (/rocket|missile|rpg|heat|frag|he|at|aa/i.test(magazines)) {
                return true;
            }
        }

        return false;
    },

    /**
     * Extracts launcher-specific metadata from resolved class data
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing launcher-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Type identifier
            type: this.type,
            
            // Core launcher characteristics
            ammunitionType: this._extractAmmunitionType(classData, allResolvedData),
            damage: this._extractDamage(classData),
            range: this._extractRange(classData),
            weight: this._extractWeight(classData),
            
            // Launcher-specific characteristics
            guidanceSystem: this._extractGuidanceSystem(classData),
            targetType: this._extractTargetType(classData),
            launcherType: this._extractLauncherType(classData),
            
            // Compatibility
            compatibleMagazines: this._extractCompatibleMagazines(classData),
            
            // Operational characteristics
            firingModes: this._extractFiringModes(classData),
            
            // Additional metadata
            isReusable: this._isReusable(classData),
            hasOptics: this._hasOptics(classData)
        };

        return meta;
    },

    /**
     * Extracts ammunition type from launcher data
     * @private
     */
    _extractAmmunitionType(classData, allResolvedData) {
        // Try compatible magazines first
        if (Array.isArray(classData.magazines) && classData.magazines.length > 0) {
            const firstMag = classData.magazines[0];
            const ammoType = this._ammoTypeFromMagazineName(firstMag);
            if (ammoType) return ammoType;
            
            // Try to resolve magazine data
            const magData = allResolvedData[firstMag];
            if (magData && magData.ammo) {
                const ammoType = this._ammoTypeFromAmmoName(magData.ammo);
                if (ammoType) return ammoType;
            }
        }

        // Try class name patterns
        const ammoType = this._ammoTypeFromClassName(classData.className);
        if (ammoType) return ammoType;

        return 'unknown';
    },

    /**
     * Extracts ammunition type from magazine name
     * @private
     */
    _ammoTypeFromMagazineName(magazineName) {
        const magPatterns = {
            'HEAT': /HEAT|heat/i,
            'HE': /HE_|explosive|frag/i,
            'AT': /AT_|antitank|anti.*tank/i,
            'AA': /AA_|antiair|anti.*air|stinger/i,
            'Rocket': /rocket|unguided/i,
            'Missile': /missile|guided/i,
            'Smoke': /smoke|smokeShell/i,
            'Flare': /flare|illumination/i
        };

        for (const [ammoType, pattern] of Object.entries(magPatterns)) {
            if (pattern.test(magazineName)) return ammoType;
        }
        return null;
    },

    /**
     * Extracts ammunition type from ammo class name
     * @private
     */
    _ammoTypeFromAmmoName(ammoName) {
        const ammoPatterns = {
            'HEAT': /HEAT|heat/i,
            'HE': /HE_|explosive|frag/i,
            'AT': /AT_|antitank/i,
            'AA': /AA_|antiair/i,
            'Rocket': /rocket/i,
            'Missile': /missile/i,
            'Smoke': /smoke/i,
            'Flare': /flare/i
        };

        for (const [ammoType, pattern] of Object.entries(ammoPatterns)) {
            if (pattern.test(ammoName)) return ammoType;
        }
        return null;
    },

    /**
     * Extracts ammunition type from launcher class name
     * @private
     */
    _ammoTypeFromClassName(className) {
        if (!className) return null;
        
        const classPatterns = {
            'AT': /RPG|AT4|NLAW|Javelin|MAAWS|antitank/i,
            'AA': /Stinger|Igla|antiair/i,
            'HE': /SMAW|explosive/i,
            'Rocket': /rocket/i,
            'Missile': /missile/i
        };

        for (const [ammoType, pattern] of Object.entries(classPatterns)) {
            if (pattern.test(className)) return ammoType;
        }
        return null;
    },

    /**
     * Extracts damage rating from launcher data
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
     * Extracts range information from launcher data
     * @private
     */
    _extractRange(classData) {
        const ranges = {};

        if (classData.Single) {
            const modeData = classData.Single;
            if (typeof modeData.maxRange === 'number') {
                ranges.single = {
                    min: modeData.minRange || 0,
                    mid: modeData.midRange || 0,
                    max: modeData.maxRange
                };
            }
        }

        return Object.keys(ranges).length > 0 ? ranges : null;
    },

    /**
     * Extracts launcher weight/mass
     * @private
     */
    _extractWeight(classData) {
        if (typeof classData.mass === 'number') {
            return classData.mass;
        }
        return null;
    },

    /**
     * Extracts guidance system information
     * @private
     */
    _extractGuidanceSystem(classData) {
        const className = classData.className || '';
        
        if (/laser.*guid|beam.*rid/i.test(className)) return 'laser_guided';
        if (/wire.*guid|saclos/i.test(className)) return 'wire_guided';
        if (/fire.*forget|javelin/i.test(className)) return 'fire_and_forget';
        if (/heat.*seek|stinger|igla/i.test(className)) return 'heat_seeking';
        if (/tv.*guid|electro.*optical/i.test(className)) return 'tv_guided';
        if (/unguided|rocket|rpg|at4/i.test(className)) return 'unguided';
        
        return 'unguided'; // Default for launchers
    },

    /**
     * Extracts target type information
     * @private
     */
    _extractTargetType(classData) {
        const className = classData.className || '';
        const ammunitionType = this._extractAmmunitionType(classData);
        
        if (/AT_|antitank|anti.*tank/i.test(className) || ammunitionType === 'AT') return 'anti_tank';
        if (/AA_|antiair|anti.*air/i.test(className) || ammunitionType === 'AA') return 'anti_air';
        if (/bunker|fortification/i.test(className)) return 'anti_structure';
        if (/personnel|anti.*personnel/i.test(className)) return 'anti_personnel';
        
        return 'multi_purpose'; // Default
    },

    /**
     * Determines launcher type/category
     * @private
     */
    _extractLauncherType(classData) {
        const className = classData.className || '';
        
        // Launcher type patterns
        if (/RPG/i.test(className)) return 'rpg';
        if (/AT4|LAW/i.test(className)) return 'disposable_at';
        if (/Javelin|NLAW/i.test(className)) return 'guided_missile';
        if (/Stinger|Igla/i.test(className)) return 'manpad';
        if (/SMAW|MAAWS/i.test(className)) return 'rocket_launcher';
        if (/mortar/i.test(className)) return 'mortar';
        if (/grenade.*launcher|gl/i.test(className)) return 'grenade_launcher';
        
        return 'rocket_launcher'; // Default
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
     * Extracts firing modes from launcher data
     * @private
     */
    _extractFiringModes(classData) {
        if (Array.isArray(classData.modes)) {
            return [...classData.modes];
        }
        return null;
    },

    /**
     * Checks if launcher is reusable or disposable
     * @private
     */
    _isReusable(classData) {
        const className = classData.className || '';
        
        // Disposable systems
        if (/AT4|LAW|disposable/i.test(className)) return false;
        
        // Most launchers are reusable
        return true;
    },

    /**
     * Checks if launcher has integrated optics
     * @private
     */
    _hasOptics(classData) {
        return typeof classData.optics === 'number' && classData.optics > 1;
    }
};

// Export the definition
export default launcherDefinition;