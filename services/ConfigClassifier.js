/**
 * ConfigClassifier - Semantic classification system for ARMA3 config classes
 * 
 * This module provides intelligent classification of config classes based on:
 * - Priority-based pattern matching (replacing hacky confidence scoring)
 * - Structural analysis of class properties
 * - Contextual placement within the config hierarchy
 * 
 * Classification Types:
 * - FRAMEWORK: Core config containers (CfgWeapons, CfgPatches, etc.)
 * - INTERFACE: Standard slot and attachment interfaces (MuzzleSlot, CowsSlot, etc.)
 * - INHERITANCE: Base classes for inheritance hierarchy (Rifle_Base_F, Mode_SemiAuto, etc.)
 * - CONTENT: Actual game items and unique implementations (weapon instances, etc.)
 * 
 * @author ACE3 Arsenal Testbed - Expert Pattern Classification
 */

import { PatternMatcher } from './PatternMatcher.js';

export class ConfigClassifier {
    constructor() {
        // Use the new priority-based pattern matcher
        this.patternMatcher = new PatternMatcher();

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
     * @returns {Object} Classification result with type, reasoning, and analysis
     */
    classifyClass(className, classData, context = {}) {
        // Use priority-based pattern matching instead of confidence scoring
        const patternResult = this.patternMatcher.classify(className);
        
        const analysis = {
            patternMatch: patternResult,
            properties: this._analyzeProperties(classData),
            structure: this._analyzeStructure(classData),
            context: this._analyzeContext(className, context)
        };

        const classification = this._determineClassification(className, analysis);
        
        return {
            type: classification.type,
            reasoning: classification.reasoning,
            analysis: analysis
        };
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
     * Determine final classification based on priority-based pattern matching and supporting analysis
     * @private
     */
    _determineClassification(className, analysis) {
        const reasoning = [];
        
        // Start with the pattern-based classification (authoritative)
        let primaryType = analysis.patternMatch.type;
        reasoning.push(analysis.patternMatch.reasoning);

        // Use supporting analysis to refine or validate the pattern-based classification
        const supportingFactors = this._analyzeSupportingFactors(analysis);
        
        // If pattern match suggests content but we have strong structural indicators for other types, consider override
        if (primaryType === 'content' && analysis.patternMatch.match.priority === 0) {
            const structuralType = this._getStructuralTypeIndicator(analysis, supportingFactors);
            if (structuralType) {
                primaryType = structuralType.type;
                reasoning.unshift(structuralType.reason);
            }
        }

        // Add the most significant supporting factors to reasoning
        reasoning.push(...supportingFactors.slice(0, 2));
        
        return {
            type: primaryType,
            reasoning: reasoning.slice(0, 3) // Keep top 3 reasons for clarity
        };
    }

    /**
     * Analyze supporting factors that complement pattern matching
     * @private
     */
    _analyzeSupportingFactors(analysis) {
        const factors = [];

        // Property analysis provides supporting evidence
        if (analysis.properties.framework > 0.6) {
            factors.push(`High framework property match (${(analysis.properties.framework * 100).toFixed(0)}%)`);
        }
        if (analysis.properties.interface > 0.6) {
            factors.push(`High interface property match (${(analysis.properties.interface * 100).toFixed(0)}%)`);
        }
        if (analysis.properties.content > 0.6) {
            factors.push(`High content property match (${(analysis.properties.content * 100).toFixed(0)}%)`);
        }

        // Structural analysis provides context
        if (analysis.structure.hasSubClasses) {
            factors.push('Contains subclasses (framework/container indicator)');
        }
        if (analysis.structure.propertyCount < 3) {
            factors.push('Few properties (inheritance base indicator)');
        }
        if (analysis.structure.complexity > 0.7) {
            factors.push('High complexity (detailed content indicator)');
        }

        // Context analysis
        if (analysis.context.modSpecific) {
            factors.push('Mod-specific naming (content indicator)');
        }

        return factors;
    }

    /**
     * Get structural type indicator when pattern matching is inconclusive
     * @private
     */
    _getStructuralTypeIndicator(analysis, supportingFactors) {
        // Framework indicators: high framework properties + subclasses
        if (analysis.properties.framework > 0.8 && analysis.structure.hasSubClasses) {
            return { type: 'framework', reason: 'Strong structural framework indicators override pattern' };
        }

        // Interface indicators: high interface properties + simple structure
        if (analysis.properties.interface > 0.8 && analysis.structure.propertyCount < 10) {
            return { type: 'interface', reason: 'Strong structural interface indicators override pattern' };
        }

        // Inheritance indicators: few properties + base naming context
        if (analysis.structure.propertyCount < 3 && analysis.structure.hasInheritance) {
            return { type: 'inheritance', reason: 'Minimal properties with inheritance suggest base class' };
        }

        return null;
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
        return this.patternMatcher.getTypeDescription(type);
    }
}