/**
 * Magazine Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for magazines in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify magazines and extract
 * queryable metadata like capacity, caliber, ammunition type, and compatibility.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Magazine type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const magazineDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'magazine',

    /**
     * Determines if the given resolved class data represents a magazine
     * 
     * Detection criteria for magazines:
     * - Must have count property (ammunition count)
     * - Should have ammo property (ammunition type)
     * - Should inherit from magazine base classes (CA_Magazine, etc.)
     * - Should have initSpeed property (muzzle velocity)
     * - Class name patterns for magazines
     * - Should be in CfgMagazines config section
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {string} classData.className - The class name
     * @param {string} [classData.baseClass] - The parent class name
     * @param {number} [classData.count] - Ammunition count in magazine
     * @param {string} [classData.ammo] - Ammunition type class name
     * @param {number} [classData.initSpeed] - Initial muzzle velocity
     * @param {number} [classData.tracersEvery] - Tracer frequency
     * @returns {boolean} True if this is a magazine, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        // Primary indicator: count property (ammunition capacity)
        if (typeof classData.count === 'number') {
            return true;
        }

        // Secondary indicator: ammo property with ammunition type
        if (classData.ammo && typeof classData.ammo === 'string') {
            return true;
        }

        // Base class indicators - check for common magazine base classes
        const magazineBaseClasses = [
            'CA_Magazine',
            'VehicleMagazine',
            'CA_LauncherMagazine',
            'HandGrenade',
            'Default'
        ];

        if (classData.baseClass && magazineBaseClasses.some(baseClass => 
            classData.baseClass.includes(baseClass))) {
            return true;
        }

        // Class name patterns that indicate magazines
        const magazineClassPatterns = [
            /^\d+Rnd_/i,              // Round count prefix (30Rnd_, 100Rnd_)
            /_magazine$/i,            // Ends with "magazine"
            /_mag$/i,                 // Ends with "mag"
            /_M$/i,                   // CUP magazine suffix
            /magazine/i,              // Contains "magazine"
            /cartridge/i,             // Cartridge
            /rounds/i,                // Contains "rounds"
            /^CUP_\d+Rnd/i,          // CUP magazine pattern
            /belt$/i,                 // Ammunition belt
            /drum$/i,                 // Drum magazine
            /clip$/i                  // Clip/stripper clip
        ];

        if (classData.className && magazineClassPatterns.some(pattern => 
            pattern.test(classData.className))) {
            return true;
        }

        // Special launcher magazine patterns
        if (/rocket|missile|grenade|rpg|javelin|at4|law/i.test(classData.className || '')) {
            return true;
        }

        return false;
    },

    /**
     * Extracts magazine-specific metadata from resolved class data
     * 
     * Extracted metadata includes:
     * - capacity: Magazine capacity/round count
     * - caliber: Ammunition caliber
     * - ammoType: Specific ammunition type
     * - muzzleVelocity: Initial bullet speed
     * - tracers: Tracer configuration
     * - weight: Magazine mass
     * - magazineType: Sub-category (standard, extended, drum, etc.)
     * - compatibility: Weapon compatibility
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing magazine-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Core ammunition characteristics
            capacity: this._extractCapacity(classData),
            caliber: this._extractCaliber(classData, allResolvedData),
            ammoType: this._extractAmmoType(classData),
            
            // Ballistic characteristics
            muzzleVelocity: this._extractMuzzleVelocity(classData),
            tracers: this._extractTracers(classData),
            
            // Physical characteristics
            weight: this._extractWeight(classData),
            magazineType: this._extractMagazineType(classData),
            
            // Compatibility
            compatibility: this._extractCompatibility(classData),
            
            // Special properties
            isTracer: this._isTracer(classData),
            isSubsonic: this._isSubsonic(classData),
            isArmorPiercing: this._isArmorPiercing(classData)
        };

        return meta;
    },

    /**
     * Extracts magazine capacity/round count
     * @private
     */
    _extractCapacity(classData) {
        if (typeof classData.count === 'number') {
            return {
                rounds: classData.count,
                category: this._categorizeCapacity(classData.count)
            };
        }
        return null;
    },

    /**
     * Categorizes capacity by size
     * @private
     */
    _categorizeCapacity(count) {
        if (count >= 200) return 'belt_fed';
        if (count >= 100) return 'high_capacity';
        if (count >= 50) return 'extended';
        if (count >= 30) return 'standard';
        if (count >= 20) return 'reduced';
        if (count >= 10) return 'compact';
        return 'minimal';
    },

    /**
     * Extracts caliber information from magazine data
     * @private
     */
    _extractCaliber(classData, allResolvedData) {
        const className = classData.className || '';
        
        // Try class name patterns first
        const caliber = this._caliberFromClassName(className);
        if (caliber) return caliber;

        // Try ammunition type
        if (classData.ammo) {
            const ammoCaliber = this._caliberFromAmmoName(classData.ammo);
            if (ammoCaliber) return ammoCaliber;
            
            // Try to resolve ammunition data
            const ammoData = allResolvedData[classData.ammo];
            if (ammoData) {
                const resolvedCaliber = this._caliberFromAmmoData(ammoData);
                if (resolvedCaliber) return resolvedCaliber;
            }
        }

        return 'unknown';
    },

    /**
     * Extracts caliber from magazine class name
     * @private
     */
    _caliberFromClassName(className) {
        const caliberPatterns = {
            '545x39': /545x39/i,
            '762x39': /762x39/i,
            '762x51': /762x51/i,
            '556x45': /556x45/i,
            '9x19': /9x19|9mm/i,
            '45ACP': /45ACP/i,
            '338': /338/i,
            '127x99': /127x99|50cal/i,
            '408': /408/i,
            '50BMG': /50BMG/i,
            '40mm': /40mm/i,
            '25mm': /25mm/i,
            '30mm': /30mm/i,
            '12gauge': /12gauge|12ga/i,
            '20gauge': /20gauge|20ga/i
        };

        for (const [caliber, pattern] of Object.entries(caliberPatterns)) {
            if (pattern.test(className)) return caliber;
        }
        return null;
    },

    /**
     * Extracts caliber from ammunition class name
     * @private
     */
    _caliberFromAmmoName(ammoName) {
        return this._caliberFromClassName(ammoName);
    },

    /**
     * Extracts caliber from ammunition data
     * @private
     */
    _caliberFromAmmoData(ammoData) {
        // Could analyze ammunition properties like hit, typicalSpeed, etc.
        // For now, use class name approach
        return this._caliberFromClassName(ammoData.className || '');
    },

    /**
     * Extracts ammunition type information
     * @private
     */
    _extractAmmoType(classData) {
        if (!classData.ammo) return null;

        const ammoType = {
            className: classData.ammo,
            type: this._categorizeAmmoType(classData.ammo)
        };

        return ammoType;
    },

    /**
     * Categorizes ammunition type
     * @private
     */
    _categorizeAmmoType(ammoName) {
        if (/ball|fmj/i.test(ammoName)) return 'ball';
        if (/tracer/i.test(ammoName)) return 'tracer';
        if (/ap|armor.*piercing/i.test(ammoName)) return 'armor_piercing';
        if (/subsonic/i.test(ammoName)) return 'subsonic';
        if (/hollow.*point|hp/i.test(ammoName)) return 'hollow_point';
        if (/incendiary/i.test(ammoName)) return 'incendiary';
        if (/he|high.*explosive/i.test(ammoName)) return 'high_explosive';
        if (/heat/i.test(ammoName)) return 'heat';
        if (/smoke/i.test(ammoName)) return 'smoke';
        if (/flare/i.test(ammoName)) return 'flare';
        if (/slug/i.test(ammoName)) return 'slug';
        if (/buckshot/i.test(ammoName)) return 'buckshot';

        return 'standard';
    },

    /**
     * Extracts muzzle velocity
     * @private
     */
    _extractMuzzleVelocity(classData) {
        if (typeof classData.initSpeed === 'number') {
            return classData.initSpeed;
        }
        return null;
    },

    /**
     * Extracts tracer information
     * @private
     */
    _extractTracers(classData) {
        const tracers = {};

        if (typeof classData.tracersEvery === 'number') {
            tracers.frequency = classData.tracersEvery;
            tracers.hasTracers = classData.tracersEvery > 0;
        }

        // Try to determine tracer color from class name
        const className = classData.className || '';
        if (/green/i.test(className)) tracers.color = 'green';
        else if (/red/i.test(className)) tracers.color = 'red';
        else if (/yellow/i.test(className)) tracers.color = 'yellow';
        else if (/white/i.test(className)) tracers.color = 'white';
        else if (/blue/i.test(className)) tracers.color = 'blue';

        return Object.keys(tracers).length > 0 ? tracers : null;
    },

    /**
     * Extracts magazine weight/mass
     * @private
     */
    _extractWeight(classData) {
        if (typeof classData.mass === 'number') {
            return classData.mass;
        }
        return null;
    },

    /**
     * Determines magazine type/category
     * @private
     */
    _extractMagazineType(classData) {
        const className = classData.className || '';
        
        // Type patterns based on common naming conventions
        if (/belt/i.test(className)) return 'belt';
        if (/drum/i.test(className)) return 'drum';
        if (/box/i.test(className)) return 'box';
        if (/clip/i.test(className)) return 'clip';
        if (/extended/i.test(className)) return 'extended';
        if (/compact/i.test(className)) return 'compact';
        if (/pmag/i.test(className)) return 'polymer';
        if (/steel|metal/i.test(className)) return 'steel';
        if (/stanag/i.test(className)) return 'stanag';
        if (/ak/i.test(className)) return 'ak_style';
        if (/ar15|m4/i.test(className)) return 'ar_style';
        
        // Capacity-based classification
        const capacity = this._extractCapacity(classData);
        if (capacity) {
            return capacity.category;
        }
        
        return 'standard';
    },

    /**
     * Extracts compatibility information
     * @private
     */
    _extractCompatibility(classData) {
        const className = classData.className || '';
        const compatibility = {};

        // Weapon system compatibility based on naming
        if (/ak74/i.test(className)) compatibility.weaponSystems = ['ak74'];
        else if (/ak47|akm/i.test(className)) compatibility.weaponSystems = ['ak47'];
        else if (/ak/i.test(className)) compatibility.weaponSystems = ['ak_series'];
        
        if (/m16|m4/i.test(className)) compatibility.weaponSystems = ['m16_series'];
        if (/stanag/i.test(className)) compatibility.standard = 'stanag';
        if (/hk416|hk417/i.test(className)) compatibility.weaponSystems = ['hk_series'];
        if (/scar/i.test(className)) compatibility.weaponSystems = ['scar_series'];
        if (/g36/i.test(className)) compatibility.weaponSystems = ['g36_series'];

        // Magazine well compatibility
        const caliber = this._extractCaliber(classData);
        if (caliber && caliber !== 'unknown') {
            compatibility.caliber = caliber;
        }

        return Object.keys(compatibility).length > 0 ? compatibility : null;
    },

    /**
     * Checks if magazine contains tracer rounds
     * @private
     */
    _isTracer(classData) {
        const className = classData.className || '';
        const hasTracerInName = /tracer|te1|te4/i.test(className);
        
        const tracers = this._extractTracers(classData);
        const hasTracerFreq = tracers && tracers.hasTracers;
        
        return hasTracerInName || hasTracerFreq || false;
    },

    /**
     * Checks if magazine contains subsonic ammunition
     * @private
     */
    _isSubsonic(classData) {
        const className = classData.className || '';
        const ammoName = classData.ammo || '';
        
        return /subsonic/i.test(className) || /subsonic/i.test(ammoName);
    },

    /**
     * Checks if magazine contains armor-piercing ammunition
     * @private
     */
    _isArmorPiercing(classData) {
        const className = classData.className || '';
        const ammoName = classData.ammo || '';
        
        return /ap|armor.*piercing/i.test(className) || /ap|armor.*piercing/i.test(ammoName);
    }
};

// Export the definition
export default magazineDefinition;