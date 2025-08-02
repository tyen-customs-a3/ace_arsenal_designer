/**
 * Vest Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for vests/armor in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify vests and extract
 * queryable metadata like armor values, storage capacity, and protection levels.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Vest type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const vestDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'vest',

    /**
     * Determines if the given resolved class data represents a vest/armor
     * 
     * Detection criteria for vests:
     * - Must have ItemInfo property with VestItem inheritance
     * - Should have armor property or ItemInfo.armor
     * - Should have containerClass for storage capacity
     * - May have passThrough values for ballistic protection
     * - Should inherit from vest base classes like Vest_Camo_Base, Vest_Base_F
     * - Class name typically starts with V_ prefix
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {string} classData.className - The class name
     * @param {string} [classData.baseClass] - The parent class name
     * @param {Object} [classData.ItemInfo] - Vest item information
     * @param {number} [classData.armor] - Armor protection value
     * @param {string} [classData.containerClass] - Storage container class
     * @returns {boolean} True if this is a vest, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        // Primary indicator: ItemInfo with VestItem characteristics
        if (classData.ItemInfo) {
            const itemInfo = classData.ItemInfo;
            
            // Look for vest-specific properties in ItemInfo
            if (itemInfo.containerClass || 
                typeof itemInfo.armor === 'number' ||
                itemInfo.passThrough !== undefined ||
                itemInfo.uniformModel) {
                return true;
            }
        }

        // Secondary indicator: direct armor property
        if (typeof classData.armor === 'number') {
            return true;
        }

        // Base class indicators - check for common vest base classes
        const vestBaseClasses = [
            'Vest_Base_F',
            'Vest_Camo_Base',
            'VestItem',
            'Vest_NoCamo_Base',
            'ItemCore'
        ];

        if (classData.baseClass && vestBaseClasses.some(baseClass => 
            classData.baseClass.includes(baseClass))) {
            return true;
        }

        // Class name patterns that indicate vests
        const vestClassPatterns = [
            /^V_/i,           // Standard Arma 3 vest prefix
            /vest/i,          // Contains "vest"
            /armor/i,         // Contains "armor"
            /carrier/i,       // Plate carrier
            /harness/i,       // Combat harness
            /rig/i            // Tactical rig
        ];

        if (classData.className && vestClassPatterns.some(pattern => 
            pattern.test(classData.className))) {
            return true;
        }

        // Container class indicates storage capability (vest-like)
        if (classData.containerClass) {
            return true;
        }

        return false;
    },

    /**
     * Extracts vest-specific metadata from resolved class data
     * 
     * Extracted metadata includes:
     * - armor: Ballistic protection value
     * - capacity: Storage capacity details
     * - weight: Vest mass/weight
     * - protection: Protection coverage areas
     * - passThrough: Ballistic pass-through values
     * - vestType: Sub-category (carrier, harness, etc.)
     * - storageClass: Container class for inventory
     * - coverage: Body coverage areas
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing vest-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Type identifier
            type: this.type,
            
            // Core protection characteristics
            armor: this._extractArmor(classData),
            protection: this._extractProtection(classData),
            passThrough: this._extractPassThrough(classData),
            coverage: this._extractCoverage(classData),
            
            // Storage and capacity
            capacity: this._extractCapacity(classData),
            storageClass: this._extractStorageClass(classData),
            
            // Physical characteristics
            weight: this._extractWeight(classData),
            vestType: this._extractVestType(classData),
            
            // Additional properties
            hasIntegratedPouches: this._hasIntegratedPouches(classData),
            isModular: this._isModular(classData)
        };

        return meta;
    },

    /**
     * Extracts armor protection value
     * @private
     */
    _extractArmor(classData) {
        // Direct armor property
        if (typeof classData.armor === 'number') {
            return classData.armor;
        }

        // Check ItemInfo for armor
        if (classData.ItemInfo && typeof classData.ItemInfo.armor === 'number') {
            return classData.ItemInfo.armor;
        }

        return null;
    },

    /**
     * Extracts protection information
     * @private
     */
    _extractProtection(classData) {
        const protection = {};

        // Primary armor value
        const armorValue = this._extractArmor(classData);
        if (armorValue !== null) {
            protection.ballistic = armorValue;
        }

        // Pass-through values indicate protection quality
        const passThrough = this._extractPassThrough(classData);
        if (passThrough !== null) {
            protection.effectiveness = 1 - passThrough; // Lower passThrough = better protection
        }

        // Protection level estimation based on armor value
        if (armorValue !== null) {
            protection.level = this._determineProtectionLevel(armorValue);
        }

        return Object.keys(protection).length > 0 ? protection : null;
    },

    /**
     * Extracts pass-through ballistic values
     * @private
     */
    _extractPassThrough(classData) {
        // Check ItemInfo for passThrough
        if (classData.ItemInfo && typeof classData.ItemInfo.passThrough === 'number') {
            return classData.ItemInfo.passThrough;
        }

        // Direct passThrough property
        if (typeof classData.passThrough === 'number') {
            return classData.passThrough;
        }

        return null;
    },

    /**
     * Determines protection level based on armor value
     * @private
     */
    _determineProtectionLevel(armorValue) {
        if (armorValue >= 20) return 'heavy';
        if (armorValue >= 10) return 'medium';
        if (armorValue >= 5) return 'light';
        return 'minimal';
    },

    /**
     * Extracts body coverage information
     * @private
     */
    _extractCoverage(classData) {
        // This would typically come from hitpoint definitions
        // For now, estimate based on vest type and name
        const className = classData.className || '';
        const coverage = [];

        if (/carrier|heavy/i.test(className)) {
            coverage.push('chest', 'back', 'shoulders');
        } else if (/harness|light/i.test(className)) {
            coverage.push('chest', 'back');
        } else if (/vest/i.test(className)) {
            coverage.push('chest');
        }

        return coverage.length > 0 ? coverage : null;
    },

    /**
     * Extracts storage capacity information
     * @private
     */
    _extractCapacity(classData) {
        const containerClass = this._extractStorageClass(classData);
        if (!containerClass) return null;

        // Map container classes to capacity values
        const capacityMappings = {
            'Supply0': 0,
            'Supply10': 10,
            'Supply20': 20,
            'Supply30': 30,
            'Supply40': 40,
            'Supply50': 50,
            'Supply60': 60,
            'Supply70': 70,
            'Supply80': 80,
            'Supply90': 90,
            'Supply100': 100,
            'Supply120': 120,
            'Supply140': 140,
            'Supply160': 160,
            'Supply180': 180,
            'Supply200': 200
        };

        const capacity = capacityMappings[containerClass];
        if (capacity !== undefined) {
            return {
                value: capacity,
                unit: 'mass_units',
                containerClass: containerClass
            };
        }

        return { containerClass: containerClass };
    },

    /**
     * Extracts storage container class
     * @private
     */
    _extractStorageClass(classData) {
        // Check ItemInfo first
        if (classData.ItemInfo && classData.ItemInfo.containerClass) {
            return classData.ItemInfo.containerClass;
        }

        // Direct containerClass property
        if (classData.containerClass) {
            return classData.containerClass;
        }

        return null;
    },

    /**
     * Extracts vest weight/mass
     * @private
     */
    _extractWeight(classData) {
        // Check ItemInfo for mass
        if (classData.ItemInfo && typeof classData.ItemInfo.mass === 'number') {
            return classData.ItemInfo.mass;
        }

        // Direct mass property
        if (typeof classData.mass === 'number') {
            return classData.mass;
        }

        return null;
    },

    /**
     * Determines vest type/category
     * @private
     */
    _extractVestType(classData) {
        const className = classData.className || '';
        
        // Type patterns based on common naming conventions
        if (/carrier|plate/i.test(className)) return 'plate_carrier';
        if (/harness/i.test(className)) return 'combat_harness';
        if (/tactical|rig/i.test(className)) return 'tactical_vest';
        if (/heavy|armor/i.test(className)) return 'heavy_armor';
        if (/light/i.test(className)) return 'light_vest';
        if (/police|cop/i.test(className)) return 'police_vest';
        if (/press|media/i.test(className)) return 'press_vest';
        if (/medic|medical/i.test(className)) return 'medical_vest';
        
        // Base class patterns
        const baseClass = classData.baseClass || '';
        if (/carrier/i.test(baseClass)) return 'plate_carrier';
        if (/vest/i.test(baseClass)) return 'vest';
        
        return 'vest';
    },

    /**
     * Checks if vest has integrated pouches/accessories
     * @private
     */
    _hasIntegratedPouches(classData) {
        const className = classData.className || '';
        
        // Look for pouch indicators in name
        const pouchIndicators = [
            /pouch/i,
            /pocket/i,
            /mag/i,
            /ammo/i,
            /utility/i
        ];

        return pouchIndicators.some(pattern => pattern.test(className));
    },

    /**
     * Checks if vest is modular (can attach/detach components)
     * @private
     */
    _isModular(classData) {
        const className = classData.className || '';
        
        // Look for modular indicators
        const modularIndicators = [
            /modular/i,
            /system/i,
            /molle/i,
            /pals/i,
            /attachable/i
        ];

        return modularIndicators.some(pattern => pattern.test(className));
    }
};

// Export the definition
export default vestDefinition;