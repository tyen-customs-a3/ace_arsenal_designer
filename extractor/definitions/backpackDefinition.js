/**
 * Backpack Definition Module
 * Provides type detection and metadata extraction for backpacks.
 */

const backpackDefinition = {
    type: 'backpack',

    /**
     * Determines if the given class data represents a backpack
     * Uses hierarchy-based detection only
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        return this._hasValidBackpackHierarchy(classData);
    },

    /**
     * @private
     */
    _hasValidBackpackHierarchy(classData) {
        if (!classData || !classData.baseClass) {
            return false;
        }

        const validBackpackBaseClasses = [
            'Bag_Base',
            'B_AssaultPack_Base',
            'B_Bergen_Base',
            'B_Carryall_Base',
            'B_Kitbag_Base',
            'B_TacticalPack_Base',
            'Backpack_Base'
        ];

        const baseClass = classData.baseClass;

        if (validBackpackBaseClasses.includes(baseClass)) {
            return true;
        }

        return false;
    },

    /**
     * Extracts backpack-specific metadata
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            type: this.type,
            
            capacity: this._extractCapacity(classData),
            transportCapacity: this._extractTransportCapacity(classData),
            
            weight: this._extractWeight(classData),
            dimensions: this._extractDimensions(classData),
            
            backpackType: this._extractBackpackType(classData),
            
            
        };

        return meta;
    },

    /** @private */
    _extractCapacity(classData) {
        const capacity = {};

        if (typeof classData.maximumLoad === 'number') {
            capacity.maximumLoad = classData.maximumLoad;
            capacity.category = this._categorizeCapacity(classData.maximumLoad);
        }

        if (typeof classData.mass === 'number') {
            capacity.emptyWeight = classData.mass;
            
            if (capacity.maximumLoad) {
                capacity.efficiency = Math.round(capacity.maximumLoad / classData.mass * 10) / 10;
            }
        }

        return Object.keys(capacity).length > 0 ? capacity : null;
    },

    /** @private */
    _categorizeCapacity(maximumLoad) {
        if (maximumLoad >= 400) return 'extra_large';
        if (maximumLoad >= 300) return 'large';
        if (maximumLoad >= 200) return 'medium';
        if (maximumLoad >= 100) return 'small';
        return 'extra_small';
    },

    /** @private */
    _extractTransportCapacity(classData) {
        const transport = {};

        if (typeof classData.transportMaxWeapons === 'number') {
            transport.maxWeapons = classData.transportMaxWeapons;
        }

        if (typeof classData.transportMaxMagazines === 'number') {
            transport.maxMagazines = classData.transportMaxMagazines;
        }

        if (typeof classData.transportMaxBackpacks === 'number') {
            transport.maxBackpacks = classData.transportMaxBackpacks;
        }

        return Object.keys(transport).length > 0 ? transport : null;
    },

    /** @private */
    _extractWeight(classData) {
        if (typeof classData.mass === 'number') {
            return {
                value: classData.mass,
                category: this._categorizeWeight(classData.mass)
            };
        }
        return null;
    },

    /** @private */
    _categorizeWeight(mass) {
        if (mass >= 80) return 'very_heavy';
        if (mass >= 60) return 'heavy';
        if (mass >= 40) return 'medium';
        if (mass >= 20) return 'light';
        return 'very_light';
    },

    /** @private */
    _extractDimensions(classData) {
        return null;
    },

    /** @private */
    _extractBackpackType(classData) {
        const baseClass = classData.baseClass || '';
        
        if (baseClass === 'B_AssaultPack_Base') {
            return 'assault_pack';
        }
        if (baseClass === 'B_Bergen_Base') {
            return 'bergen';
        }
        if (baseClass === 'B_Carryall_Base') {
            return 'carryall';
        }
        if (baseClass === 'B_Kitbag_Base') {
            return 'kitbag';
        }
        if (baseClass === 'B_TacticalPack_Base') {
            return 'tactical_pack';
        }
        
        const maxLoad = classData.maximumLoad;
        if (typeof maxLoad === 'number') {
            if (maxLoad >= 400) return 'large_pack';
            if (maxLoad >= 300) return 'medium_pack';
            if (maxLoad >= 200) return 'standard_pack';
            return 'small_pack';
        }
        
        return 'backpack';
    },



};

export default backpackDefinition;