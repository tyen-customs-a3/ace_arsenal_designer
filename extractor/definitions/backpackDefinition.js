/**
 * Backpack Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for backpacks in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify backpacks and extract
 * queryable metadata like storage capacity, weight, and specialized features.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Backpack type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const backpackDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'backpack',

    /**
     * Determines if the given resolved class data represents a backpack
     * 
     * CRITICAL: Uses ONLY hierarchy-based detection to avoid misclassifying bullets (B_762x51_*) as backpacks.
     * 
     * Detection hierarchy analysis from real config files shows:
     * - Bullets: inherit from *_Ball classes (B_762x51_Ball, B_556x45_Ball) or BulletBase
     * - Backpacks: inherit from Bag_Base or other backpack-specific base classes
     * 
     * This method NEVER uses string parsing or naming conventions for type detection.
     * All detection is based on actual class inheritance hierarchy and intrinsic properties.
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {string} classData.className - The class name
     * @param {string} [classData.baseClass] - The parent class name  
     * @param {number} [classData.maximumLoad] - Maximum storage capacity
     * @param {number} [classData.transportMaxWeapons] - Maximum weapon storage
     * @param {number} [classData.transportMaxMagazines] - Maximum magazine storage
     * @param {boolean} [classData.isBackpack] - Explicit backpack flag
     * @returns {boolean} True if this is a backpack, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        // HIERARCHY-ONLY DETECTION: Check if this inherits from genuine backpack base classes
        return this._hasValidBackpackHierarchy(classData);
    },

    /**
     * Checks if the class has a valid backpack inheritance hierarchy
     * 
     * This method ONLY examines the baseClass property to determine if the item
     * inherits from known backpack base classes. It does NOT use string parsing
     * of class names, which can incorrectly classify bullets as backpacks.
     * 
     * Based on analysis of real config files:
     * - All genuine backpacks inherit from Bag_Base or specific backpack base classes
     * - Bullets inherit from ammunition base classes (*_Ball, BulletBase)
     * - No overlap between these hierarchies exists
     * 
     * @private
     * @param {Object} classData - The resolved class data
     * @returns {boolean} True if this has valid backpack hierarchy
     */
    _hasValidBackpackHierarchy(classData) {
        if (!classData || !classData.baseClass) {
            return false;
        }

        // Known genuine backpack base classes from real config analysis
        // These are the ONLY classes that should be considered backpack roots
        const validBackpackBaseClasses = [
            'Bag_Base',                    // Primary Arma 3 backpack base class
            'B_AssaultPack_Base',         // Specific assault pack base
            'B_Bergen_Base',              // Bergen pack base
            'B_Carryall_Base',           // Carryall base
            'B_Kitbag_Base',             // Kitbag base  
            'B_TacticalPack_Base',       // Tactical pack base
            'CUP_B_AssaultPack_Base',    // CUP assault pack base
            'CUP_B_Bergen_Base',         // CUP bergen base
            'Backpack_Base',             // Generic backpack base
            'CUP_B_RUS_Backpack',        // Specific CUP backpack base
            'CUP_B_IDF_Backpack'         // Specific CUP backpack base
        ];

        const baseClass = classData.baseClass;

        // Direct exact match with known backpack base classes
        if (validBackpackBaseClasses.includes(baseClass)) {
            return true;
        }

        return false;
    },

    /**
     * Extracts backpack-specific metadata from resolved class data
     * 
     * Extracted metadata includes:
     * - capacity: Storage capacity information
     * - weight: Backpack mass/weight
     * - dimensions: Physical size information
     * - backpackType: Sub-category (assault, tactical, etc.)
     * - transportCapacity: Detailed transport capabilities
     * - specialFeatures: Radio capability, medical supplies, etc.
     * - durability: Construction quality indicators
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing backpack-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Type identifier
            type: this.type,
            
            // Core capacity characteristics
            capacity: this._extractCapacity(classData),
            transportCapacity: this._extractTransportCapacity(classData),
            
            // Physical characteristics
            weight: this._extractWeight(classData),
            dimensions: this._extractDimensions(classData),
            
            // Classification
            backpackType: this._extractBackpackType(classData),
            
            // Special features
            specialFeatures: this._extractSpecialFeatures(classData),
            
            // Compatibility
            hasRadio: this._hasRadio(classData),
            hasMedicalSupplies: this._hasMedicalSupplies(classData),
            hasSpecializedStorage: this._hasSpecializedStorage(classData)
        };

        return meta;
    },

    /**
     * Extracts storage capacity information
     * @private
     */
    _extractCapacity(classData) {
        const capacity = {};

        // Maximum load capacity (primary measure)
        if (typeof classData.maximumLoad === 'number') {
            capacity.maximumLoad = classData.maximumLoad;
            capacity.category = this._categorizeCapacity(classData.maximumLoad);
        }

        // Mass capacity
        if (typeof classData.mass === 'number') {
            capacity.emptyWeight = classData.mass;
            
            // Calculate capacity-to-weight ratio
            if (capacity.maximumLoad) {
                capacity.efficiency = Math.round(capacity.maximumLoad / classData.mass * 10) / 10;
            }
        }

        return Object.keys(capacity).length > 0 ? capacity : null;
    },

    /**
     * Categorizes capacity by size
     * @private
     */
    _categorizeCapacity(maximumLoad) {
        if (maximumLoad >= 400) return 'extra_large';
        if (maximumLoad >= 300) return 'large';
        if (maximumLoad >= 200) return 'medium';
        if (maximumLoad >= 100) return 'small';
        return 'extra_small';
    },

    /**
     * Extracts detailed transport capacity
     * @private
     */
    _extractTransportCapacity(classData) {
        const transport = {};

        // Weapon transport capacity
        if (typeof classData.transportMaxWeapons === 'number') {
            transport.maxWeapons = classData.transportMaxWeapons;
        }

        // Magazine transport capacity
        if (typeof classData.transportMaxMagazines === 'number') {
            transport.maxMagazines = classData.transportMaxMagazines;
        }

        // Backpack transport capacity (for larger packs)
        if (typeof classData.transportMaxBackpacks === 'number') {
            transport.maxBackpacks = classData.transportMaxBackpacks;
        }

        return Object.keys(transport).length > 0 ? transport : null;
    },

    /**
     * Extracts backpack weight/mass
     * @private
     */
    _extractWeight(classData) {
        if (typeof classData.mass === 'number') {
            return {
                value: classData.mass,
                category: this._categorizeWeight(classData.mass)
            };
        }
        return null;
    },

    /**
     * Categorizes weight by class
     * @private
     */
    _categorizeWeight(mass) {
        if (mass >= 80) return 'very_heavy';
        if (mass >= 60) return 'heavy';
        if (mass >= 40) return 'medium';
        if (mass >= 20) return 'light';
        return 'very_light';
    },

    /**
     * Extracts physical dimensions (if available)
     * @private
     */
    _extractDimensions(classData) {
        // Most configs don't include explicit dimensions
        // This could be expanded if dimension data becomes available
        return null;
    },

    /**
     * Determines backpack type/category
     * @private
     */
    _extractBackpackType(classData) {
        const className = classData.className || '';
        
        // Type patterns based on common naming conventions
        if (/assault/i.test(className)) return 'assault_pack';
        if (/tactical/i.test(className)) return 'tactical_pack';
        if (/bergen/i.test(className)) return 'bergen';
        if (/carryall/i.test(className)) return 'carryall';
        if (/kitbag/i.test(className)) return 'kitbag';
        if (/radio/i.test(className)) return 'radio_pack';
        if (/medical|medic/i.test(className)) return 'medical_pack';
        if (/parachute/i.test(className)) return 'parachute';
        if (/viperlight/i.test(className)) return 'lightweight_pack';
        if (/field/i.test(className)) return 'field_pack';
        if (/combat/i.test(className)) return 'combat_pack';
        if (/patrol/i.test(className)) return 'patrol_pack';
        
        // Base class patterns
        const baseClass = classData.baseClass || '';
        if (/assault/i.test(baseClass)) return 'assault_pack';
        if (/bergen/i.test(baseClass)) return 'bergen';
        if (/carryall/i.test(baseClass)) return 'carryall';
        if (/tactical/i.test(baseClass)) return 'tactical_pack';
        
        // Capacity-based classification as fallback
        const maxLoad = classData.maximumLoad;
        if (typeof maxLoad === 'number') {
            if (maxLoad >= 400) return 'large_pack';
            if (maxLoad >= 300) return 'medium_pack';
            if (maxLoad >= 200) return 'standard_pack';
            return 'small_pack';
        }
        
        return 'backpack';
    },

    /**
     * Extracts special features from backpack
     * @private
     */
    _extractSpecialFeatures(classData) {
        const features = [];
        const className = classData.className || '';

        // Radio capability
        if (this._hasRadio(classData)) {
            features.push('radio');
        }

        // Medical supplies
        if (this._hasMedicalSupplies(classData)) {
            features.push('medical');
        }

        // Parachute capability
        if (/parachute/i.test(className)) {
            features.push('parachute');
        }

        // UAV/drone control
        if (/uav|drone|terminal/i.test(className)) {
            features.push('uav_terminal');
        }

        // Specialized storage
        if (this._hasSpecializedStorage(classData)) {
            features.push('specialized_storage');
        }

        // Modular/MOLLE system
        if (/molle|modular/i.test(className)) {
            features.push('molle_compatible');
        }

        // Camouflage patterns
        if (/camo|woodland|desert|urban|digital/i.test(className)) {
            features.push('camouflaged');
        }

        return features.length > 0 ? features : null;
    },

    /**
     * Checks if backpack has radio capability
     * @private
     */
    _hasRadio(classData) {
        const className = classData.className || '';
        const radioIndicators = [
            /radio/i,
            /rt1523g/i,
            /communication/i,
            /comms/i
        ];

        return radioIndicators.some(pattern => pattern.test(className));
    },

    /**
     * Checks if backpack is for medical supplies
     * @private
     */
    _hasMedicalSupplies(classData) {
        const className = classData.className || '';
        const medicalIndicators = [
            /medical/i,
            /medic/i,
            /first.*aid/i,
            /trauma/i,
            /corpsman/i
        ];

        return medicalIndicators.some(pattern => pattern.test(className));
    },

    /**
     * Checks if backpack has specialized storage features
     * @private
     */
    _hasSpecializedStorage(classData) {
        const transportCapacity = this._extractTransportCapacity(classData);
        
        // If it can carry weapons/magazines, it has specialized storage
        if (transportCapacity && (transportCapacity.maxWeapons > 0 || transportCapacity.maxMagazines > 0)) {
            return true;
        }

        const className = classData.className || '';
        const specialStorageIndicators = [
            /weapon/i,
            /rifle/i,
            /launcher/i,
            /explosive/i,
            /demo/i,
            /specialist/i
        ];

        return specialStorageIndicators.some(pattern => pattern.test(className));
    }
};

// Export the definition
export default backpackDefinition;