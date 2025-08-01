/**
 * NVG Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for Night Vision Goggles (NVG) in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify NVGs and extract
 * queryable metadata like generation, field of view, battery life, and special features.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * NVG type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const nvgDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'nvg',

    /**
     * Determines if the given resolved class data represents Night Vision Goggles
     * 
     * Detection criteria for NVGs:
     * - Must have ItemInfo with type=616 (NVG type identifier)
     * - Should inherit from NVGoggles base class
     * - Should have uniformModel and modelOff properties for on/off states
     * - Class name patterns for night vision devices
     * - May have thermalMode or other vision enhancement properties
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {string} classData.className - The class name
     * @param {string} [classData.baseClass] - The parent class name
     * @param {Object} [classData.ItemInfo] - NVG item information
     * @param {string} [classData.uniformModel] - 3D model when worn
     * @param {string} [classData.modelOff] - 3D model when not active
     * @returns {boolean} True if this is an NVG, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        // Primary indicator: ItemInfo with type=616 (NVG type)
        if (classData.ItemInfo && classData.ItemInfo.type === 616) {
            return true;
        }

        // Secondary indicator: NVGoggles base class
        if (classData.baseClass && /NVGoggles/i.test(classData.baseClass)) {
            return true;
        }

        // Tertiary indicators: NVG-specific properties
        if (classData.uniformModel && classData.modelOff) {
            // These properties together indicate head-mounted device with on/off states
            return true;
        }

        // Base class indicators - check for common NVG base classes
        const nvgBaseClasses = [
            'NVGoggles',
            'Binocular',  // NVGs inherit from Binocular in Arma 3
            'ItemCore'
        ];

        if (classData.baseClass && nvgBaseClasses.some(baseClass => 
            classData.baseClass.includes(baseClass))) {
            
            // Additional validation: must also have NVG-like name
            const className = classData.className || '';
            if (this._hasNVGNamePattern(className)) {
                return true;
            }
        }

        // Class name patterns that indicate NVGs
        if (classData.className && this._hasNVGNamePattern(classData.className)) {
            return true;
        }

        return false;
    },

    /**
     * Checks if class name matches NVG patterns
     * @private
     */
    _hasNVGNamePattern(className) {
        const nvgNamePatterns = [
            /^NVGoggles/i,            // Standard Arma 3 NVG prefix
            /^CUP_NVG_/i,             // CUP NVG prefix
            /nvg|night.*vision/i,     // Contains NVG or night vision
            /pvs\d+/i,                // PVS series (PVS-7, PVS-14, etc.)
            /hmnvs/i,                 // HMNVS system
            /gpnvg/i,                 // GPNVG-18 quad tubes
            /anpvs/i,                 // AN/PVS designation
            /1pn\d+/i,                // Soviet/Russian night vision (1PN138, etc.)
            /thermal/i,               // Thermal imaging devices
            /flir/i                   // Forward Looking Infrared
        ];

        return nvgNamePatterns.some(pattern => pattern.test(className));
    },

    /**
     * Extracts NVG-specific metadata from resolved class data
     * 
     * Extracted metadata includes:
     * - nvgType: Sub-category (monocular, binocular, quad-tube, etc.)
     * - generation: Night vision generation (Gen 1, 2, 3, etc.)
     * - fieldOfView: Viewing angle characteristics
     * - weight: Device mass/weight
     * - features: Special capabilities (thermal, digital, etc.)
     * - powerSource: Battery or power requirements
     * - mountingSystem: How device attaches to helmet/head
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing NVG-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Core NVG characteristics
            nvgType: this._extractNVGType(classData),
            generation: this._extractGeneration(classData),
            
            // Visual characteristics
            fieldOfView: this._extractFieldOfView(classData),
            magnification: this._extractMagnification(classData),
            
            // Physical characteristics
            weight: this._extractWeight(classData),
            mountingSystem: this._extractMountingSystem(classData),
            
            // Capabilities
            features: this._extractFeatures(classData),
            visionModes: this._extractVisionModes(classData),
            
            // Operational characteristics
            powerSource: this._extractPowerSource(classData),
            operatingRange: this._extractOperatingRange(classData)
        };

        return meta;
    },

    /**
     * Determines NVG type/category
     * @private
     */
    _extractNVGType(classData) {
        const className = classData.className || '';
        
        // Type patterns based on common NVG designations
        if (/pvs7|hmnvs/i.test(className)) return 'binocular';
        if (/pvs14/i.test(className)) return 'monocular';
        if (/gpnvg|pvs15/i.test(className)) return 'quad_tube';
        if (/1pn138/i.test(className)) return 'binocular';
        if (/thermal|flir/i.test(className)) return 'thermal';
        if (/digital/i.test(className)) return 'digital';
        
        // Determine by naming patterns
        if (/mono/i.test(className)) return 'monocular';
        if (/bi|dual/i.test(className)) return 'binocular';
        if (/quad|4/i.test(className)) return 'quad_tube';
        
        return 'night_vision';
    },

    /**
     * Determines NVG generation
     * @private
     */
    _extractGeneration(classData) {
        const className = classData.className || '';
        
        // Generation indicators in name
        if (/gen\s*3|generation\s*3|pvs14|pvs15|gpnvg/i.test(className)) return 'gen3';
        if (/gen\s*2|generation\s*2/i.test(className)) return 'gen2';
        if (/gen\s*1|generation\s*1/i.test(className)) return 'gen1';
        if (/gen\s*4|generation\s*4|digital/i.test(className)) return 'gen4';
        
        // Estimate based on device type
        if (/pvs7/i.test(className)) return 'gen2';
        if (/pvs14|hmnvs/i.test(className)) return 'gen3';
        if (/gpnvg|pvs15/i.test(className)) return 'gen3+';
        if (/1pn138/i.test(className)) return 'gen2+';
        if (/thermal/i.test(className)) return 'thermal';
        
        return null;
    },

    /**
     * Extracts field of view information
     * @private
     */
    _extractFieldOfView(classData) {
        // Most configs don't specify FOV directly
        // Estimate based on known device characteristics
        const nvgType = this._extractNVGType(classData);
        
        switch (nvgType) {
            case 'monocular':
                return { horizontal: 40, unit: 'degrees', type: 'monocular' };
            case 'binocular':
                return { horizontal: 40, unit: 'degrees', type: 'binocular' };
            case 'quad_tube':
                return { horizontal: 97, unit: 'degrees', type: 'panoramic' };
            case 'thermal':
                return { horizontal: 30, unit: 'degrees', type: 'thermal' };
            default:
                return null;
        }
    },

    /**
     * Extracts magnification information
     * @private
     */
    _extractMagnification(classData) {
        // Most night vision devices are 1x magnification
        // Some thermal devices or specialized optics may vary
        const features = this._extractFeatures(classData);
        
        if (features && features.includes('thermal')) {
            return { min: 1.0, max: 4.0, default: 1.0 };
        }
        
        return { min: 1.0, max: 1.0, default: 1.0 };
    },

    /**
     * Extracts device weight/mass
     * @private
     */
    _extractWeight(classData) {
        // Check ItemInfo for mass
        if (classData.ItemInfo && typeof classData.ItemInfo.mass === 'number') {
            return {
                value: classData.ItemInfo.mass,
                category: this._categorizeWeight(classData.ItemInfo.mass)
            };
        }

        // Direct mass property
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
        if (mass >= 20) return 'heavy';
        if (mass >= 15) return 'medium_heavy';
        if (mass >= 10) return 'medium';
        if (mass >= 5) return 'light';
        return 'very_light';
    },

    /**
     * Extracts mounting system information
     * @private
     */
    _extractMountingSystem(classData) {
        const className = classData.className || '';
        
        // Mounting system indicators
        if (/helmet|mount/i.test(className)) return 'helmet_mount';
        if (/head.*strap|strap/i.test(className)) return 'head_strap';
        if (/goggle/i.test(className)) return 'goggle_mount';
        if (/clip.*on/i.test(className)) return 'clip_on';
        
        // Default based on NVG type
        const nvgType = this._extractNVGType(classData);
        switch (nvgType) {
            case 'monocular':
            case 'binocular':
                return 'helmet_mount';
            case 'quad_tube':
                return 'advanced_mount';
            default:
                return 'standard_mount';
        }
    },

    /**
     * Extracts special features
     * @private
     */
    _extractFeatures(classData) {
        const features = [];
        const className = classData.className || '';

        // Thermal imaging
        if (/thermal|flir/i.test(className)) {
            features.push('thermal_imaging');
        }

        // Digital enhancement
        if (/digital/i.test(className)) {
            features.push('digital_enhancement');
        }

        // Auto-gating (bright light protection)
        if (/auto.*gate|bright.*protect/i.test(className)) {
            features.push('auto_gating');
        }

        // Image recording
        if (/record|video/i.test(className)) {
            features.push('recording');
        }

        // Wireless capability
        if (/wireless|wifi|bluetooth/i.test(className)) {
            features.push('wireless');
        }

        // Flip-up/flip-down
        if (/flip|articulating/i.test(className)) {
            features.push('flip_mount');
        }

        // Hide feature (cosmetic option)
        if (/hide|hidden/i.test(className)) {
            features.push('cosmetic_hide');
        }

        // Determine features by generation/type
        const generation = this._extractGeneration(classData);
        if (generation === 'gen3' || generation === 'gen3+') {
            features.push('high_sensitivity');
        }
        if (generation === 'gen4') {
            features.push('digital_enhancement', 'high_resolution');
        }

        return features.length > 0 ? features : null;
    },

    /**
     * Extracts vision modes
     * @private
     */
    _extractVisionModes(classData) {
        const modes = ['night_vision']; // All NVGs have basic night vision
        const features = this._extractFeatures(classData);
        
        if (features) {
            if (features.includes('thermal_imaging')) {
                modes.push('thermal');
            }
            if (features.includes('digital_enhancement')) {
                modes.push('digital_zoom');
            }
        }

        // Check for thermal-specific devices
        const className = classData.className || '';
        if (/thermal/i.test(className)) {
            modes.push('thermal');
            modes.push('white_hot');
            modes.push('black_hot');
        }

        return modes;
    },

    /**
     * Extracts power source information
     * @private
     */
    _extractPowerSource(classData) {
        const className = classData.className || '';
        
        // Most modern NVGs use AA or CR123 batteries
        const nvgType = this._extractNVGType(classData);
        const generation = this._extractGeneration(classData);
        
        switch (nvgType) {
            case 'monocular':
                return { type: 'CR123A', count: 1, life: '20_hours' };
            case 'binocular':
                return { type: 'AA', count: 2, life: '15_hours' };
            case 'quad_tube':
                return { type: 'CR123A', count: 2, life: '12_hours' };
            case 'thermal':
                return { type: 'rechargeable', count: 1, life: '4_hours' };
            default:
                return { type: 'battery', life: 'limited' };
        }
    },

    /**
     * Extracts operating range information
     * @private
     */
    _extractOperatingRange(classData) {
        const generation = this._extractGeneration(classData);
        
        // Estimate detection range based on generation
        switch (generation) {
            case 'gen1':
                return { detection: 75, recognition: 38, identification: 19, unit: 'meters' };
            case 'gen2':
                return { detection: 150, recognition: 75, identification: 38, unit: 'meters' };
            case 'gen2+':
                return { detection: 200, recognition: 100, identification: 50, unit: 'meters' };
            case 'gen3':
                return { detection: 300, recognition: 150, identification: 75, unit: 'meters' };
            case 'gen3+':
                return { detection: 350, recognition: 175, identification: 88, unit: 'meters' };
            case 'gen4':
                return { detection: 400, recognition: 200, identification: 100, unit: 'meters' };
            case 'thermal':
                return { detection: 500, recognition: 250, identification: 125, unit: 'meters' };
            default:
                return null;
        }
    }
};

// Export the definition
export default nvgDefinition;