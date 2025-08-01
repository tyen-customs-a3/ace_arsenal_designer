/**
 * Attachment Definition Module for Phase 3 Data Enrichment
 * 
 * This module provides type detection and metadata extraction for weapon attachments in Arma 3 configs.
 * It analyzes resolved, flattened class data from Phase 2 to identify attachments and extract
 * queryable metadata like attachment type, compatibility, and performance characteristics.
 * 
 * @author Arsenal Testbed
 * @version 1.0.0
 */

/**
 * Attachment type definition with consistent interface for Phase 3 processing
 * @type {Object}
 */
const attachmentDefinition = {
    /**
     * The type identifier for this definition
     * @type {string}
     */
    type: 'attachment',

    /**
     * Determines if the given resolved class data represents a weapon attachment
     * 
     * Detection criteria for attachments:
     * - Must have ItemInfo with attachment-specific inheritance (InventoryOpticsItem_Base_F, etc.)
     * - Should have optics=1 for optical attachments
     * - Should have attachment-specific base classes (ItemCore, muzzle_snds_*, etc.)
     * - Class name patterns for optics, muzzle devices, lasers, etc.
     * - May have OpticsModes, MuzzleCoef, or other attachment-specific properties
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {string} classData.className - The class name
     * @param {string} [classData.baseClass] - The parent class name
     * @param {Object} [classData.ItemInfo] - Attachment item information
     * @param {number} [classData.optics] - Optics flag (1+ for optical devices)
     * @param {Object} [classData.OpticsModes] - Optical sight modes
     * @returns {boolean} True if this is an attachment, false otherwise
     */
    isType(classData) {
        if (!classData || typeof classData !== 'object') {
            return false;
        }

        // Primary indicator: ItemInfo with attachment-specific inheritance
        if (classData.ItemInfo) {
            const itemInfo = classData.ItemInfo;
            
            // Look for attachment-specific ItemInfo inheritance patterns
            const attachmentItemTypes = [
                'InventoryOpticsItem_Base_F',
                'InventoryMuzzleItem_Base_F', 
                'InventoryFlashLightItem_Base_F',
                'InventoryUnderItem_Base_F'
            ];

            // Check for attachment properties in ItemInfo
            if (itemInfo.optics === 1 || 
                itemInfo.OpticsModes ||
                itemInfo.MuzzleCoef ||
                itemInfo.AmmoCoef ||
                attachmentItemTypes.some(type => itemInfo.type === type)) {
                return true;
            }
        }

        // Secondary indicator: optics flag
        if (classData.optics === 1) {
            return true;
        }

        // OpticsModes indicates optical attachment
        if (classData.OpticsModes) {
            return true;
        }

        // MuzzleCoef indicates muzzle attachment
        if (classData.MuzzleCoef || classData.AmmoCoef) {
            return true;
        }

        // Base class indicators - check for common attachment base classes
        const attachmentBaseClasses = [
            'ItemCore',
            'muzzle_snds_',
            'optic_',
            'acc_flashlight',
            'acc_pointer_IR',
            'InventoryOpticsItem_Base_F',
            'InventoryMuzzleItem_Base_F',
            'InventoryFlashLightItem_Base_F'
        ];

        if (classData.baseClass && attachmentBaseClasses.some(baseClass => 
            classData.baseClass.includes(baseClass))) {
            return true;
        }

        // Class name patterns that indicate attachments
        const attachmentClassPatterns = [
            /^optic_/i,               // Optical attachments
            /^muzzle_/i,              // Muzzle attachments
            /^acc_/i,                 // Accessories
            /^CUP_optic_/i,           // CUP optics
            /^CUP_muzzle_/i,          // CUP muzzle devices
            /^CUP_acc_/i,             // CUP accessories
            /scope$/i,                // Scopes
            /sight$/i,                // Sights
            /suppressor$/i,           // Suppressors
            /silencer$/i,             // Silencers
            /flashlight$/i,           // Flashlights
            /laser$/i,                // Laser designators
            /bipod$/i,                // Bipods
            /_snds_/i                 // Sound suppressors
        ];

        if (classData.className && attachmentClassPatterns.some(pattern => 
            pattern.test(classData.className))) {
            return true;
        }

        return false;
    },

    /**
     * Extracts attachment-specific metadata from resolved class data
     * 
     * Extracted metadata includes:
     * - attachmentType: Sub-category (optic, muzzle, laser, etc.)
     * - compatibility: Mounting system compatibility
     * - performance: Performance characteristics
     * - magnification: Zoom levels for optics
     * - weight: Attachment mass
     * - effects: Gameplay effects (recoil reduction, etc.)
     * 
     * @param {Object} classData - The resolved, flattened class data from Phase 2
     * @param {Object} allResolvedData - All resolved class data for cross-referencing
     * @returns {Object} The _meta object containing attachment-specific queryable data
     */
    extract(classData, allResolvedData = {}) {
        const meta = {
            // Core attachment characteristics
            attachmentType: this._extractAttachmentType(classData),
            subType: this._extractSubType(classData),
            
            // Compatibility
            mountingSystem: this._extractMountingSystem(classData),
            compatibility: this._extractCompatibility(classData),
            
            // Performance characteristics
            performance: this._extractPerformance(classData),
            magnification: this._extractMagnification(classData),
            
            // Physical characteristics
            weight: this._extractWeight(classData),
            
            // Special features
            specialFeatures: this._extractSpecialFeatures(classData),
            
            // Gameplay effects
            effects: this._extractEffects(classData)
        };

        return meta;
    },

    /**
     * Determines primary attachment type
     * @private
     */
    _extractAttachmentType(classData) {
        const className = classData.className || '';
        
        // Optic attachments
        if (/optic|scope|sight|ccco|rco|aco|dms|hamr|arco|mrco/i.test(className) ||
            classData.optics === 1 || classData.OpticsModes) {
            return 'optic';
        }

        // Muzzle attachments
        if (/muzzle|suppressor|silencer|snds|flashhider|compensator|brake/i.test(className) ||
            classData.MuzzleCoef || classData.AmmoCoef) {
            return 'muzzle';
        }

        // Laser/light attachments
        if (/laser|pointer|flashlight|light|ir|peq/i.test(className)) {
            return 'tactical';
        }

        // Underbarrel attachments
        if (/bipod|grip|foregrip|underbarrel/i.test(className)) {
            return 'underbarrel';
        }

        // Rail attachments
        if (/rail|mount|riser/i.test(className)) {
            return 'rail';
        }

        return 'unknown';
    },

    /**
     * Determines attachment sub-type
     * @private
     */
    _extractSubType(classData) {
        const className = classData.className || '';
        const attachmentType = this._extractAttachmentType(classData);

        switch (attachmentType) {
            case 'optic':
                if (/scope|sniper/i.test(className)) return 'scope';
                if (/red.*dot|rds|aco|t1|ccco/i.test(className)) return 'red_dot';
                if (/holo|eotech/i.test(className)) return 'holographic';
                if (/magnifier/i.test(className)) return 'magnifier';
                if (/thermal|ti/i.test(className)) return 'thermal';
                if (/night.*vision|nvs/i.test(className)) return 'night_vision';
                return 'sight';

            case 'muzzle':
                if (/suppressor|silencer|snds/i.test(className)) return 'suppressor';
                if (/flashhider|flash.*hider/i.test(className)) return 'flash_hider';
                if (/compensator|comp/i.test(className)) return 'compensator';
                if (/brake|muzzle.*brake/i.test(className)) return 'muzzle_brake';
                return 'muzzle_device';

            case 'tactical':
                if (/laser/i.test(className)) return 'laser';
                if (/flashlight|light/i.test(className)) return 'flashlight';
                if (/combo|dual/i.test(className)) return 'combo';
                return 'tactical_device';

            case 'underbarrel':
                if (/bipod/i.test(className)) return 'bipod';
                if (/grip|foregrip/i.test(className)) return 'grip';
                if (/launcher|gl/i.test(className)) return 'grenade_launcher';
                return 'underbarrel_device';

            default:
                return null;
        }
    },

    /**
     * Extracts mounting system information
     * @private
     */
    _extractMountingSystem(classData) {
        const className = classData.className || '';
        
        // Common mounting systems
        if (/picatinny|1913|rail/i.test(className)) return 'picatinny';
        if (/weaver/i.test(className)) return 'weaver';
        if (/dovetail/i.test(className)) return 'dovetail';
        if (/ris/i.test(className)) return 'ris';
        if (/mlok/i.test(className)) return 'mlok';
        if /_keymod/i.test(className)) return 'keymod';
        
        // Weapon-specific mounts
        if (/ak.*mount|ak.*rail/i.test(className)) return 'ak_mount';
        if (/ar.*mount|ar.*rail/i.test(className)) return 'ar_mount';
        
        return null;
    },

    /**
     * Extracts compatibility information
     * @private
     */
    _extractCompatibility(classData) {
        const compatibility = {};
        const className = classData.className || '';

        // Weapon system compatibility
        if (/ak/i.test(className)) compatibility.weaponSystems = ['ak'];
        if (/ar15|m4|m16/i.test(className)) compatibility.weaponSystems = ['ar15'];
        if (/hk416|hk417/i.test(className)) compatibility.weaponSystems = ['hk'];
        if (/scar/i.test(className)) compatibility.weaponSystems = ['scar'];

        // Caliber compatibility (for muzzle devices)
        const attachmentType = this._extractAttachmentType(classData);
        if (attachmentType === 'muzzle') {
            if (/545x39|545/i.test(className)) compatibility.calibers = ['545x39'];
            if (/762x39|762/i.test(className)) compatibility.calibers = ['762x39'];
            if (/556x45|556/i.test(className)) compatibility.calibers = ['556x45'];
            if (/762x51|308/i.test(className)) compatibility.calibers = ['762x51'];
            if (/9mm|9x19/i.test(className)) compatibility.calibers = ['9x19'];
        }

        return Object.keys(compatibility).length > 0 ? compatibility : null;
    },

    /**
     * Extracts performance characteristics
     * @private
     */
    _extractPerformance(classData) {
        const performance = {};

        // Muzzle device performance
        if (classData.MuzzleCoef) {
            const coef = classData.MuzzleCoef;
            if (coef.dispersionCoef) performance.dispersionReduction = 1 - parseFloat(coef.dispersionCoef);
            if (coef.recoilCoef) performance.recoilReduction = 1 - parseFloat(coef.recoilCoef);
            if (coef.fireLightCoef) performance.muzzleFlashReduction = 1 - parseFloat(coef.fireLightCoef);
        }

        // Ammunition effects
        if (classData.AmmoCoef) {
            const coef = classData.AmmoCoef;
            if (coef.visibleFire) performance.muzzleFlashSuppression = 1 - coef.visibleFire;
            if (coef.audibleFire) performance.soundSuppression = 1 - coef.audibleFire;
        }

        return Object.keys(performance).length > 0 ? performance : null;
    },

    /**
     * Extracts magnification information for optics
     * @private
     */
    _extractMagnification(classData) {
        if (!classData.OpticsModes) return null;

        const magnification = {};
        const modes = classData.OpticsModes;

        // Extract zoom levels from optics modes
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
     * Extracts attachment weight/mass
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
     * Extracts special features
     * @private
     */
    _extractSpecialFeatures(classData) {
        const features = [];
        const className = classData.className || '';

        // Night vision capability
        if (/night.*vision|nvs|thermal/i.test(className)) {
            features.push('night_vision');
        }

        // Thermal imaging
        if (/thermal|ti|flir/i.test(className)) {
            features.push('thermal_imaging');
        }

        // Range finding
        if (/range.*finder|rf|lrf/i.test(className)) {
            features.push('range_finder');
        }

        // Illumination
        if (/illuminated|lit/i.test(className)) {
            features.push('illuminated_reticle');
        }

        // Adjustable magnification
        const magnification = this._extractMagnification(classData);
        if (magnification && Object.keys(magnification).length > 1) {
            features.push('variable_magnification');
        }

        // Quick detach
        if (/qd|quick.*detach/i.test(className)) {
            features.push('quick_detach');
        }

        return features.length > 0 ? features : null;
    },

    /**
     * Extracts gameplay effects
     * @private
     */
    _extractEffects(classData) {
        const effects = {};

        // Performance effects from muzzle devices
        const performance = this._extractPerformance(classData);
        if (performance) {
            if (performance.recoilReduction) effects.recoilReduction = performance.recoilReduction;
            if (performance.dispersionReduction) effects.accuracyImprovement = performance.dispersionReduction;
            if (performance.soundSuppression) effects.soundSuppression = performance.soundSuppression;
            if (performance.muzzleFlashReduction) effects.concealmentImprovement = performance.muzzleFlashReduction;
        }

        // Inertia/handling effects
        const weight = this._extractWeight(classData);
        if (weight) {
            // Heavier attachments reduce handling
            effects.handlingPenalty = Math.round(weight / 10 * 100) / 100;
        }

        // Optic advantages
        const attachmentType = this._extractAttachmentType(classData);
        if (attachmentType === 'optic') {
            effects.targetAcquisition = 'improved';
            
            const magnification = this._extractMagnification(classData);
            if (magnification) {
                effects.longRangeCapability = 'enhanced';
            }
        }

        return Object.keys(effects).length > 0 ? effects : null;
    }
};

// Export the definition
export default attachmentDefinition;