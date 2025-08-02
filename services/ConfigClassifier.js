/**
 * ConfigClassifier - Semantic classification system for ARMA3 config classes
 * 
 * This module provides intelligent classification of config classes based on:
 * - Name patterns and conventions
 * - Structural analysis of class properties
 * - Contextual placement within the config hierarchy
 * 
 * Classification Types:
 * - FRAMEWORK: Core config containers (CfgWeapons, CfgPatches, etc.)
 * - INTERFACE: Standard slot and attachment interfaces (MuzzleSlot, CowsSlot, etc.)
 * - INHERITANCE: Base classes for inheritance hierarchy (Rifle_Base_F, Mode_SemiAuto, etc.)
 * - CONTENT: Actual game items and unique implementations (weapon instances, etc.)
 * 
 * @author ACE3 Arsenal Testbed - Semantic Config Analysis
 */

export class ConfigClassifier {
    constructor() {
        // Framework class patterns - core config containers that every mod redefines
        this.frameworkPatterns = [
            /^Cfg[A-Z][a-zA-Z]*$/,          // CfgWeapons, CfgPatches, CfgMagazines, etc.
            /^cfg[A-Z][a-zA-Z]*$/,          // cfgWeapons, cfgMods, cfgVehicles, etc.
            /^CfgPatches$/,
            /^cfgMods$/
        ];

        // Interface class patterns - standard slot and attachment system classes
        this.interfacePatterns = [
            /.*Slot$/,                      // MuzzleSlot, CowsSlot, UnderBarrelSlot, PointerSlot
            /^WeaponSlotsInfo$/,
            /^ItemInfo$/,
            /^SlotInfo$/,
            /^asdg_.*$/,                    // ASDG attachment system classes
            /^OpticsModes$/,
            /.*SlotsInfo$/
        ];

        // Inheritance base class patterns - classes designed for inheritance
        this.inheritancePatterns = [
            /.*_Base_F$/,                   // Rifle_Base_F, Pistol_Base_F, etc.
            /^Mode_.*$/,                   // Mode_SemiAuto, Mode_FullAuto, Mode_Burst
            /.*Sound$/,                    // StandardSound, SilencedSound
            /^Safety$/,
            /^Single$/,
            /^FullAuto$/,
            /^Burst$/,
            /.*Particles$/,                // GunParticles
            /^HitPoints$/,
            /^HitBody$/,
            /^Wounds$/,
            /^Default$/,
            /^ItemCore$/,
            /^Item_Base_F$/,
            /.*_Base$/
        ];

        // Framework property signatures - properties that indicate framework classes
        this.frameworkProperties = [
            'units', 'weapons', 'requiredVersion', 'requiredAddons', 'magazines', // CfgPatches
            'author', 'name', 'overview', 'picture', 'dir', 'hideName', 'hidePicture' // cfgMods
        ];

        // Interface property signatures - properties that indicate interface/slot classes
        this.interfaceProperties = [
            'compatibleItems', 'linkProxy', 'scope', 'iconPosition', 'iconScale',
            'access', 'displayName', 'selection', 'begin', 'end'
        ];

        // Content property signatures - properties that indicate actual game content
        this.contentProperties = [
            'displayName', 'picture', 'model', 'damage', 'magazines', 'modes',
            'mass', 'weaponSlotsInfo', 'discreteDistance', 'sounds', 'recoil'
        ];
    }

    /**
     * Classify a config class based on semantic analysis
     * @param {string} className - The name of the class
     * @param {Object} classData - The class definition data
     * @param {Object} context - Additional context (mod, file path, etc.)
     * @returns {Object} Classification result with type, confidence, and reasoning
     */
    classifyClass(className, classData, context = {}) {
        const analysis = {
            namePatterns: this._analyzeNamePatterns(className),
            properties: this._analyzeProperties(classData),
            structure: this._analyzeStructure(classData),
            context: this._analyzeContext(className, context)
        };

        const classification = this._determineClassification(className, analysis);
        
        return {
            type: classification.type,
            confidence: classification.confidence,
            reasoning: classification.reasoning,
            analysis: analysis
        };
    }

    /**
     * Analyze class name against known patterns
     * @private
     */
    _analyzeNamePatterns(className) {
        const results = {
            framework: this._matchPatterns(className, this.frameworkPatterns),
            interface: this._matchPatterns(className, this.interfacePatterns), 
            inheritance: this._matchPatterns(className, this.inheritancePatterns),
            content: { matches: [], confidence: 0 }
        };

        // Content classes typically don't match standard patterns (they're unique)
        const hasStandardPattern = results.framework.matches.length > 0 || 
                                 results.interface.matches.length > 0 || 
                                 results.inheritance.matches.length > 0;
        
        if (!hasStandardPattern) {
            // Check for mod-specific prefixes (likely content)
            const modPrefixPattern = /^[a-z]{2,4}_/; // sfp_, amf_, ptv_, etc.
            if (modPrefixPattern.test(className)) {
                results.content = { 
                    matches: ['mod_prefix'], 
                    confidence: 0.8 
                };
            }
        }

        return results;
    }

    /**
     * Analyze class properties for semantic indicators
     * @private
     */
    _analyzeProperties(classData) {
        if (!classData || typeof classData !== 'object') {
            return { framework: 0, interface: 0, inheritance: 0, content: 0 };
        }

        const properties = Object.keys(classData);
        
        return {
            framework: this._calculatePropertyScore(properties, this.frameworkProperties),
            interface: this._calculatePropertyScore(properties, this.interfaceProperties),
            inheritance: this._calculatePropertyScore(properties, []), // Inheritance classes often have few direct properties
            content: this._calculatePropertyScore(properties, this.contentProperties)
        };
    }

    /**
     * Analyze structural characteristics of the class
     * @private
     */
    _analyzeStructure(classData) {
        if (!classData || typeof classData !== 'object') {
            return { complexity: 0, hasSubClasses: false, propertyCount: 0 };
        }

        const properties = Object.keys(classData);
        const hasSubClasses = classData.subClasses && Object.keys(classData.subClasses).length > 0;
        
        return {
            complexity: this._calculateComplexity(classData),
            hasSubClasses: hasSubClasses,
            propertyCount: properties.length,
            hasInheritance: !!classData.baseClass
        };
    }

    /**
     * Analyze contextual information
     * @private
     */
    _analyzeContext(className, context) {
        return {
            mod: context.mod || 'unknown',
            filePath: context.filePath || '',
            isTopLevel: !className.includes('.'), // Simple heuristic for nested classes
            modSpecific: this._isModSpecific(className, context.mod)
        };
    }

    /**
     * Determine final classification based on all analysis
     * @private
     */
    _determineClassification(className, analysis) {
        const scores = {
            framework: 0,
            interface: 0, 
            inheritance: 0,
            content: 0
        };

        const reasoning = [];

        // Name pattern analysis (high weight) - framework and interface patterns are definitive
        if (analysis.namePatterns.framework.confidence > 0.0) {
            scores.framework += 1.0; // Very high weight for framework patterns
            reasoning.push(`Framework name pattern: ${analysis.namePatterns.framework.matches.join(', ')}`);
        }
        
        if (analysis.namePatterns.interface.confidence > 0.0) {
            scores.interface += 1.0; // Very high weight for interface patterns
            reasoning.push(`Interface name pattern: ${analysis.namePatterns.interface.matches.join(', ')}`);
        }
        
        if (analysis.namePatterns.inheritance.confidence > 0.5) {
            scores.inheritance += 0.6;
            reasoning.push(`Inheritance name pattern: ${analysis.namePatterns.inheritance.matches.join(', ')}`);
        }

        if (analysis.namePatterns.content.confidence > 0.5) {
            scores.content += 0.5;
            reasoning.push(`Content name pattern: ${analysis.namePatterns.content.matches.join(', ')}`);
        }

        // Property analysis (medium weight)
        scores.framework += analysis.properties.framework * 0.3;
        scores.interface += analysis.properties.interface * 0.3;
        scores.content += analysis.properties.content * 0.3;

        // Structure analysis (low weight)
        if (analysis.structure.hasSubClasses) {
            scores.framework += 0.1;
            reasoning.push('Has subclasses (framework indicator)');
        }

        if (analysis.structure.propertyCount < 3) {
            scores.inheritance += 0.2;
            reasoning.push('Few properties (inheritance base indicator)');
        }

        if (analysis.structure.complexity > 0.7) {
            scores.content += 0.2;
            reasoning.push('High complexity (content indicator)');
        }

        // Context analysis
        if (analysis.context.modSpecific) {
            scores.content += 0.2;
            reasoning.push('Mod-specific naming (content indicator)');
        }

        // Determine winner
        const maxScore = Math.max(...Object.values(scores));
        const winner = Object.keys(scores).find(key => scores[key] === maxScore);
        
        return {
            type: winner,
            confidence: Math.min(maxScore, 1.0),
            reasoning: reasoning.slice(0, 3) // Keep top 3 reasons
        };
    }

    /**
     * Match class name against pattern arrays
     * @private
     */
    _matchPatterns(className, patterns) {
        const matches = [];
        
        for (const pattern of patterns) {
            if (pattern.test(className)) {
                matches.push(pattern.source);
            }
        }

        return {
            matches: matches,
            confidence: matches.length > 0 ? Math.min(matches.length * 0.3, 1.0) : 0
        };
    }

    /**
     * Calculate property matching score
     * @private
     */
    _calculatePropertyScore(classProperties, referenceProperties) {
        if (referenceProperties.length === 0) return 0;
        
        const matches = classProperties.filter(prop => 
            referenceProperties.some(ref => 
                prop.toLowerCase().includes(ref.toLowerCase()) || 
                ref.toLowerCase().includes(prop.toLowerCase())
            )
        );
        
        return Math.min(matches.length / referenceProperties.length, 1.0);
    }

    /**
     * Calculate structural complexity score
     * @private
     */
    _calculateComplexity(classData) {
        let complexity = 0;
        const properties = Object.keys(classData);
        
        // More properties = higher complexity
        complexity += Math.min(properties.length / 20, 0.5);
        
        // Nested objects increase complexity
        for (const value of Object.values(classData)) {
            if (value && typeof value === 'object' && !Array.isArray(value)) {
                complexity += 0.1;
            }
        }
        
        return Math.min(complexity, 1.0);
    }

    /**
     * Check if class name appears mod-specific
     * @private
     */
    _isModSpecific(className, mod) {
        if (!mod) return false;
        
        const modLower = mod.toLowerCase();
        const classLower = className.toLowerCase();
        
        return classLower.startsWith(modLower) || classLower.includes(modLower);
    }

    /**
     * Get human-readable description of class type
     * @param {string} type - The classification type
     * @returns {string} Human-readable description
     */
    getTypeDescription(type) {
        const descriptions = {
            framework: 'Framework container class (expected duplicates across mods)',
            interface: 'Standard interface/slot class (merge compatible versions)',
            inheritance: 'Base class for inheritance hierarchy (resolve via inheritance)',  
            content: 'Actual game content (true conflicts require resolution)'
        };
        
        return descriptions[type] || 'Unknown classification';
    }
}