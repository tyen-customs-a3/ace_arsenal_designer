/**
 * Binoculars Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for binoculars and laser designators in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify binoculars, rangefinders, and laser designators
 * and extract queryable metadata like magnification, range finding, and designation capabilities.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Binoculars type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const binocularsDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'binoculars',

    /**
     * Determines if the given resolved class data represents binoculars or laser designator
     * 
     * Detection criteria for binoculars:
     * - Must have binocular-specific class name patterns (Binocular, Laserdesignator)
     * - Should inherit from binocular base classes
     * - Should have optics properties but not be weapon attachments
     * - EXCLUDES weapons, attachments, personnel classes
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @returns {boolean} True if this is binoculars/laser designator, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        const className = classData.className || '';
        const baseClass = classData.baseClass || '';
        const props = classData.properties || classData;

        // EXCLUSIONS FIRST - items that should NOT be classified as binoculars
        
        // Exclude personnel/unit classes (MAN classes)
        if (/^[BIOC]_.*_(base_)?FLV$|^[BIOC]_[A-Za-z_]*_FLV$/i.test(className) ||
            /soldier|diver|ghillie|sniper|spotter|support|crew|pilot|commander/i.test(className) ||
            /CAManBase|SoldierWB|SoldierEB|SoldierGB/i.test(baseClass)) {
            return false;
        }
        
        // Exclude weapons (they have magazines and firing modes)
        if (Array.isArray(props.magazines) && props.magazines.length > 0 &&
            Array.isArray(props.modes) && props.modes.length > 0) {
            return false;
        }
        
        // Exclude weapon attachments (they attach to weapons)
        if (/^(optic_|muzzle_|acc_)/i.test(className) ||
            /ItemCore|InventoryOpticsItem_Base_F/i.test(baseClass)) {
            return false;
        }
        
        // Exclude launchers
        if (/^launch_/i.test(className) && !/laserdesignator/i.test(className)) {
            return false;
        }
        
        // Exclude magazines, vests, backpacks
        if (/^\d+Rnd_|_magazine$|_mag$|vest|backpack|rucksack/i.test(className) ||
            /CA_Magazine|Vest_|Bag_Base/i.test(baseClass)) {
            return false;
        }

        // PRIMARY BINOCULARS INDICATORS
        
        // Class name patterns for binoculars and laser designators
        if (/binocular|rangefinder/i.test(className)) {
            return true;
        }
        
        // Laser designator patterns
        if (/laserdesignator/i.test(className)) {
            return true;
        }
        
        // Base class indicators for binoculars
        if (/Binocular|LaserDesignator|Rangefinder/i.test(baseClass)) {
            return true;
        }
        
        // Specific binocular models
        if (/^(Vector|Leupold|AN_PVS)/i.test(className)) {
            return true;
        }

        return false;
    },

    /**
     * Extracts binoculars-specific metadata from resolved class data
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing binoculars-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Type identifier
            type: this.type,
            
            // Core binoculars characteristics
            magnification: this._extractMagnification(classData),
            binocularsType: this._extractBinocularsType(classData),
            
            // Capabilities
            hasRangefinder: this._hasRangefinder(classData),
            hasLaserDesignator: this._hasLaserDesignator(classData),
            hasNightVision: this._hasNightVision(classData),
            hasThermalImaging: this._hasThermalImaging(classData),
            
            // Performance characteristics
            range: this._extractRange(classData),
            weight: this._extractWeight(classData),
            
            // Special features
            specialFeatures: this._extractSpecialFeatures(classData)
        };

        return meta;
    },

    /**
     * Extracts magnification information for binoculars
     * @private
     */
    _extractMagnification(classData) {
        if (!classData.OpticsModes) return null;

        const magnification = {};
        const modes = classData.OpticsModes;

        for (const [modeName, modeData] of Object.entries(modes)) {
            if (modeData && typeof modeData === 'object') {
                const mode = {
                    name: modeName
                };

                if (typeof modeData.opticsZoomMin === 'number') {
                    mode.minZoom = modeData.opticsZoomMin;
                }
                if (typeof modeData.opticsZoomMax === 'number') {
                    mode.maxZoom = modeData.opticsZoomMax;
                }
                if (typeof modeData.opticsZoomInit === 'number') {
                    mode.defaultZoom = modeData.opticsZoomInit;
                }

                // Calculate magnification (inverse of zoom factor)
                if (mode.minZoom && mode.maxZoom) {
                    mode.minMagnification = Math.round(1 / mode.maxZoom * 10) / 10;
                    mode.maxMagnification = Math.round(1 / mode.minZoom * 10) / 10;
                }

                magnification[modeName] = mode;
            }
        }

        return Object.keys(magnification).length > 0 ? magnification : null;
    },

    /**
     * Determines binoculars type/category
     * @private
     */
    _extractBinocularsType(classData) {
        const className = classData.className || '';
        
        // Type patterns
        if (/laserdesignator/i.test(className)) return 'laser_designator';
        if (/rangefinder/i.test(className)) return 'rangefinder';
        if (/vector/i.test(className)) return 'military_binoculars';
        if (/night.*vision|nvg/i.test(className)) return 'night_vision_binoculars';
        if (/thermal/i.test(className)) return 'thermal_binoculars';
        if (/binocular/i.test(className)) return 'binoculars';
        
        return 'binoculars'; // Default
    },

    /**
     * Checks if binoculars have rangefinder capability
     * @private
     */
    _hasRangefinder(classData) {
        const className = classData.className || '';
        return /rangefinder|vector|lrf/i.test(className);
    },

    /**
     * Checks if device has laser designator capability
     * @private
     */
    _hasLaserDesignator(classData) {
        const className = classData.className || '';
        return /laserdesignator|designator/i.test(className);
    },

    /**
     * Checks if binoculars have night vision capability
     * @private
     */
    _hasNightVision(classData) {
        const className = classData.className || '';
        return /night.*vision|nvg|an_pvs/i.test(className);
    },

    /**
     * Checks if binoculars have thermal imaging capability
     * @private
     */
    _hasThermalImaging(classData) {
        const className = classData.className || '';
        return /thermal|ti|flir/i.test(className);
    },

    /**
     * Extracts range information
     * @private
     */
    _extractRange(classData) {
        // Try to extract from class name patterns
        const className = classData.className || '';
        
        if (/vector/i.test(className)) return { max: 1600 }; // Vector 21 typical range
        if (/laserdesignator/i.test(className)) return { max: 5000 }; // Typical laser designator range
        if (/rangefinder/i.test(className)) return { max: 2000 }; // Typical rangefinder range
        
        return null;
    },

    /**
     * Extracts binoculars weight/mass
     * @private
     */
    _extractWeight(classData) {
        if (typeof classData.mass === 'number') {
            return classData.mass;
        }
        return null;
    },

    /**
     * Extracts special features
     * @private
     */
    _extractSpecialFeatures(classData) {
        const features = [];
        const className = classData.className || '';

        if (this._hasRangefinder(classData)) {
            features.push('rangefinder');
        }

        if (this._hasLaserDesignator(classData)) {
            features.push('laser_designation');
        }

        if (this._hasNightVision(classData)) {
            features.push('night_vision');
        }

        if (this._hasThermalImaging(classData)) {
            features.push('thermal_imaging');
        }

        // Variable magnification
        const magnification = this._extractMagnification(classData);
        if (magnification && Object.keys(magnification).length > 1) {
            features.push('variable_magnification');
        }

        // Stabilization
        if (/stabilized|gyro/i.test(className)) {
            features.push('image_stabilization');
        }

        return features.length > 0 ? features : null;
    }
};

// Export the definition
export default binocularsDefinition;