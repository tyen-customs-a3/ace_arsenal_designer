/**
 * SemanticConflictResolver - Intelligent conflict resolution for ARMA3 config classes
 * 
 * This module provides context-aware conflict resolution strategies based on class semantics:
 * - Framework classes: Merge or prioritize based on mod loading order
 * - Interface classes: Ensure compatibility and merge compatible definitions
 * - Inheritance classes: Resolve via proper inheritance chain analysis
 * - Content classes: Handle true conflicts with appropriate warnings
 * 
 * Resolution Strategies:
 * - MERGE: Combine compatible class definitions
 * - PRIORITIZE: Keep higher priority version (mod loading order)
 * - REPLACE: Replace with newer/better version
 * - CONFLICT: Mark as unresolvable conflict requiring user attention
 * 
 * @author ACE3 Arsenal Testbed - Semantic Config Analysis
 */

export class SemanticConflictResolver {
    constructor(options = {}) {
        this.options = {
            // Mod priority order (higher index = higher priority)
            modPriority: options.modPriority || ['SFP', 'PTV', 'SNS'],
            // Whether to enable aggressive merging for interface classes
            enableAggressiveMerging: options.enableAggressiveMerging !== false,
            // Whether to preserve metadata in merged classes
            preserveMetadata: options.preserveMetadata !== false,
            ...options
        };
    }

    /**
     * Resolve a conflict between two class definitions
     * @param {string} className - The conflicting class name
     * @param {Object} existingClass - The existing class definition
     * @param {Object} newClass - The new conflicting class definition  
     * @param {string} classType - The semantic class type (framework/interface/inheritance/content)
     * @param {Object} context - Additional resolution context
     * @returns {Object} Resolution result with strategy, merged class, and metadata
     */
    resolveConflict(className, existingClass, newClass, classType, context = {}) {
        const resolutionContext = {
            className,
            classType,
            existingMod: existingClass._sourceMod,
            newMod: newClass._sourceMod,
            existingFile: existingClass._sourceFile,
            newFile: newClass._sourceFile,
            ...context
        };

        switch (classType) {
            case 'framework':
                return this._resolveFrameworkConflict(existingClass, newClass, resolutionContext);
                
            case 'interface':
                return this._resolveInterfaceConflict(existingClass, newClass, resolutionContext);
                
            case 'inheritance':
                return this._resolveInheritanceConflict(existingClass, newClass, resolutionContext);
                
            case 'content':
                return this._resolveContentConflict(existingClass, newClass, resolutionContext);
                
            default:
                // Fallback to content resolution for unknown types
                return this._resolveContentConflict(existingClass, newClass, resolutionContext);
        }
    }

    /**
     * Resolve framework class conflicts (CfgWeapons, CfgPatches, etc.)
     * Strategy: Merge compatible definitions, prioritize by mod order
     * @private
     */
    _resolveFrameworkConflict(existingClass, newClass, context) {
        // Framework classes should generally be merged to combine mod content
        const mergeResult = this._attemptMerge(existingClass, newClass, {
            deepMerge: true,
            preserveArrays: true,
            mergeSubClasses: true
        });

        if (mergeResult.success) {
            return {
                strategy: 'MERGE',
                mergedClass: mergeResult.merged,
                severity: 'debug',
                message: `Framework class '${context.className}' merged from ${context.existingMod} and ${context.newMod}`,
                details: {
                    mergedProperties: mergeResult.mergedProperties,
                    conflictingProperties: mergeResult.conflicts
                }
            };
        }

        // If merge fails, prioritize by mod loading order
        const priority = this._getModPriority(context.existingMod, context.newMod);
        
        return {
            strategy: 'PRIORITIZE',
            mergedClass: priority.winner === 'existing' ? existingClass : newClass,
            severity: 'info',
            message: `Framework class '${context.className}' prioritized from ${priority.winnerMod} over ${priority.loserMod}`,
            details: {
                reason: 'merge_failed',
                modPriority: priority
            }
        };
    }

    /**
     * Resolve interface/slot class conflicts (WeaponSlotsInfo, MuzzleSlot, etc.)
     * Strategy: Ensure compatibility and merge definitions
     * @private
     */
    _resolveInterfaceConflict(existingClass, newClass, context) {
        // Interface classes should be compatible - attempt merge
        const mergeResult = this._attemptMerge(existingClass, newClass, {
            deepMerge: true,
            preserveArrays: false, // Arrays in interfaces might be additive
            mergeSubClasses: true,
            checkCompatibility: true
        });

        if (mergeResult.success && mergeResult.compatible) {
            return {
                strategy: 'MERGE',
                mergedClass: mergeResult.merged,
                severity: 'debug', 
                message: `Interface class '${context.className}' merged compatible definitions from ${context.existingMod} and ${context.newMod}`,
                details: {
                    compatibilityCheck: 'passed',
                    mergedProperties: mergeResult.mergedProperties
                }
            };
        }

        if (!mergeResult.compatible) {
            // Incompatible interface definitions - this could be problematic
            return {
                strategy: 'CONFLICT',
                mergedClass: existingClass, // Keep existing to be safe
                severity: 'warn',
                message: `Interface class '${context.className}' has incompatible definitions - keeping ${context.existingMod}, ignoring ${context.newMod}`,
                details: {
                    reason: 'incompatible_interfaces',
                    incompatibilities: mergeResult.incompatibilities
                }
            };
        }

        // Compatible but couldn't merge - prioritize
        const priority = this._getModPriority(context.existingMod, context.newMod);
        
        return {
            strategy: 'PRIORITIZE',
            mergedClass: priority.winner === 'existing' ? existingClass : newClass,
            severity: 'info',
            message: `Interface class '${context.className}' prioritized from ${priority.winnerMod}`,
            details: {
                reason: 'merge_failed_but_compatible',
                modPriority: priority
            }
        };
    }

    /**
     * Resolve inheritance base class conflicts (Rifle_Base_F, Mode_SemiAuto, etc.)
     * Strategy: Maintain inheritance hierarchy integrity
     * @private
     */
    _resolveInheritanceConflict(existingClass, newClass, context) {
        // For inheritance classes, we need to be careful about maintaining hierarchy
        const hierarchyAnalysis = this._analyzeInheritanceHierarchy(existingClass, newClass);
        
        if (hierarchyAnalysis.canMerge) {
            const mergeResult = this._attemptMerge(existingClass, newClass, {
                deepMerge: true,
                preserveInheritance: true,
                mergeSubClasses: true
            });

            if (mergeResult.success) {
                return {
                    strategy: 'MERGE',
                    mergedClass: mergeResult.merged,
                    severity: 'debug',
                    message: `Inheritance class '${context.className}' merged maintaining hierarchy integrity`,
                    details: {
                        hierarchyIntact: true,
                        mergedProperties: mergeResult.mergedProperties
                    }
                };
            }
        }

        // If hierarchy would be broken, be conservative and prioritize
        const priority = this._getModPriority(context.existingMod, context.newMod);
        
        return {
            strategy: 'PRIORITIZE',
            mergedClass: priority.winner === 'existing' ? existingClass : newClass,
            severity: 'info',
            message: `Inheritance class '${context.className}' prioritized from ${priority.winnerMod} to preserve hierarchy`,
            details: {
                reason: 'preserve_inheritance_hierarchy',
                hierarchyAnalysis: hierarchyAnalysis,
                modPriority: priority
            }
        };
    }

    /**
     * Resolve content class conflicts (actual weapons, items, etc.)
     * Strategy: These are true conflicts that should be warned about
     * @private
     */
    _resolveContentConflict(existingClass, newClass, context) {
        // Content classes shouldn't have the same name across mods - this is a real conflict
        const priority = this._getModPriority(context.existingMod, context.newMod);
        
        return {
            strategy: 'CONFLICT',
            mergedClass: priority.winner === 'existing' ? existingClass : newClass,
            severity: 'warn',
            message: `Content class conflict: '${context.className}' defined in both ${context.existingMod} and ${context.newMod} - keeping ${priority.winnerMod}`,
            details: {
                reason: 'true_content_conflict',
                conflictType: 'duplicate_content_definition',
                modPriority: priority,
                recommendation: 'Review mod load order or class naming'
            }
        };
    }

    /**
     * Attempt to merge two class definitions
     * @private
     */
    _attemptMerge(existingClass, newClass, options = {}) {
        const merged = { ...existingClass };
        const mergedProperties = [];
        const conflicts = [];
        const incompatibilities = [];
        let compatible = true;

        try {
            for (const [key, newValue] of Object.entries(newClass)) {
                // Skip metadata properties
                if (key.startsWith('_source')) continue;

                if (!(key in existingClass)) {
                    // New property - add it
                    merged[key] = newValue;
                    mergedProperties.push(key);
                } else {
                    const existingValue = existingClass[key];
                    
                    // Handle different merge strategies based on value types
                    const mergeResult = this._mergeProperty(key, existingValue, newValue, options);
                    
                    if (mergeResult.success) {
                        merged[key] = mergeResult.merged;
                        if (mergeResult.wasModified) {
                            mergedProperties.push(key);
                        }
                    } else {
                        conflicts.push({ property: key, reason: mergeResult.reason });
                        if (mergeResult.incompatible) {
                            incompatibilities.push(mergeResult);
                            compatible = false;
                        }
                    }
                }
            }

            // Handle subClasses merging if requested
            if (options.mergeSubClasses && existingClass.subClasses && newClass.subClasses) {
                const subClassMerge = this._mergeSubClasses(existingClass.subClasses, newClass.subClasses);
                if (subClassMerge.success) {
                    merged.subClasses = subClassMerge.merged;
                    mergedProperties.push('subClasses');
                }
            }

            return {
                success: true,
                compatible,
                merged,
                mergedProperties,
                conflicts,
                incompatibilities
            };

        } catch (error) {
            return {
                success: false,
                compatible: false,
                error: error.message,
                conflicts,
                incompatibilities
            };
        }
    }

    /**
     * Merge individual property values
     * @private
     */
    _mergeProperty(propertyName, existingValue, newValue, options) {
        // If values are identical, no merge needed
        if (this._deepEqual(existingValue, newValue)) {
            return { success: true, merged: existingValue, wasModified: false };
        }

        // Handle arrays
        if (Array.isArray(existingValue) && Array.isArray(newValue)) {
            if (options.preserveArrays) {
                return { success: true, merged: existingValue, wasModified: false };
            } else {
                // Merge arrays (remove duplicates)
                const merged = [...new Set([...existingValue, ...newValue])];
                return { success: true, merged, wasModified: true };
            }
        }

        // Handle objects (deep merge)
        if (this._isPlainObject(existingValue) && this._isPlainObject(newValue)) {
            if (options.deepMerge) {
                const merged = { ...existingValue, ...newValue };
                return { success: true, merged, wasModified: true };
            }
        }

        // Handle primitive conflicts
        if (typeof existingValue === typeof newValue) {
            // Same type but different values - check compatibility
            if (options.checkCompatibility) {
                const isCompatible = this._checkValueCompatibility(propertyName, existingValue, newValue);
                if (!isCompatible) {
                    return { 
                        success: false, 
                        incompatible: true,
                        reason: `Incompatible values for ${propertyName}: ${existingValue} vs ${newValue}` 
                    };
                }
            }
            
            // Use new value by default
            return { success: true, merged: newValue, wasModified: true };
        }

        // Type mismatch - incompatible
        return { 
            success: false, 
            incompatible: true,
            reason: `Type mismatch for ${propertyName}: ${typeof existingValue} vs ${typeof newValue}` 
        };
    }

    /**
     * Merge subClasses objects
     * @private
     */
    _mergeSubClasses(existingSubClasses, newSubClasses) {
        const merged = { ...existingSubClasses };
        
        for (const [className, classData] of Object.entries(newSubClasses)) {
            if (!(className in merged)) {
                merged[className] = classData;
            } else {
                // Recursive merge for nested subclasses
                const subMerge = this._attemptMerge(merged[className], classData, { deepMerge: true });
                if (subMerge.success) {
                    merged[className] = subMerge.merged;
                }
            }
        }

        return { success: true, merged };
    }

    /**
     * Get mod priority for conflict resolution
     * @private
     */
    _getModPriority(existingMod, newMod) {
        const existingIndex = this.options.modPriority.indexOf(existingMod);
        const newIndex = this.options.modPriority.indexOf(newMod);
        
        // If both mods are in priority list, use index
        if (existingIndex !== -1 && newIndex !== -1) {
            return newIndex > existingIndex ? 
                { winner: 'new', winnerMod: newMod, loserMod: existingMod } :
                { winner: 'existing', winnerMod: existingMod, loserMod: newMod };
        }
        
        // If only one is in priority list, prefer that one
        if (existingIndex !== -1) {
            return { winner: 'existing', winnerMod: existingMod, loserMod: newMod };
        }
        if (newIndex !== -1) {
            return { winner: 'new', winnerMod: newMod, loserMod: existingMod };
        }
        
        // Neither in priority list - prefer existing (first-come-first-served)
        return { winner: 'existing', winnerMod: existingMod, loserMod: newMod };
    }

    /**
     * Analyze inheritance hierarchy compatibility
     * @private
     */
    _analyzeInheritanceHierarchy(existingClass, newClass) {
        // Simple heuristic for now - can be enhanced later
        const existingBase = existingClass.baseClass;
        const newBase = newClass.baseClass;
        
        return {
            canMerge: existingBase === newBase || !existingBase || !newBase,
            hierarchyIntact: true,
            baseClassConflict: existingBase !== newBase && existingBase && newBase
        };
    }

    /**
     * Check if two values are compatible for merging
     * @private
     */
    _checkValueCompatibility(propertyName, value1, value2) {
        // Implement specific compatibility rules based on property semantics
        // For now, simple heuristics
        
        if (typeof value1 === 'number' && typeof value2 === 'number') {
            // Numbers should be reasonably close for compatibility
            const ratio = Math.abs(value1 - value2) / Math.max(Math.abs(value1), Math.abs(value2), 1);
            return ratio < 2.0; // Allow up to 200% difference
        }
        
        if (typeof value1 === 'string' && typeof value2 === 'string') {
            // Strings should have some similarity
            return value1.length > 0 && value2.length > 0;
        }
        
        return true; // Default to compatible
    }

    /**
     * Deep equality check
     * @private
     */
    _deepEqual(obj1, obj2) {
        return JSON.stringify(obj1) === JSON.stringify(obj2);
    }

    /**
     * Check if object is a plain object (not array, null, etc.)
     * @private
     */
    _isPlainObject(obj) {
        return obj && typeof obj === 'object' && !Array.isArray(obj) && obj.constructor === Object;
    }

    /**
     * Get human-readable description of resolution strategy
     * @param {string} strategy - The resolution strategy
     * @returns {string} Human-readable description
     */
    getStrategyDescription(strategy) {
        const descriptions = {
            MERGE: 'Successfully merged compatible class definitions',
            PRIORITIZE: 'Selected higher priority version based on mod loading order',
            REPLACE: 'Replaced with newer or better version',
            CONFLICT: 'Unresolvable conflict requiring attention'
        };
        
        return descriptions[strategy] || 'Unknown resolution strategy';
    }
}