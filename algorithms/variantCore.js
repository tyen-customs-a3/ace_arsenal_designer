// Core Variant Management System - Data-Driven Approach
// Uses inheritance hierarchy and property analysis, no string parsing

/**
 * Core utility functions for variant detection and grouping
 * Based on actual data structure, not string parsing
 */

export class VariantManager {
    constructor() {
        this.baseWeaponMap = new Map();
        this.variantGroups = new Map();
    }

    /**
     * Determines if an item is a texture variant based on P3D model path
     * Two items are texture variants if they share the same P3D model file
     */
    static isTextureVariant(item, baseWeapon) {
        // Must have inheritance relationship
        if (!item.baseClass || !item.variant) {
            return false;
        }

        // If no base weapon provided, can't compare models
        if (!baseWeapon) {
            return false;
        }

        // Must have texture property (indicates visual change)
        if (!item.texture) {
            return false;
        }

        // Primary check: Do they share the same P3D model?
        if (item.model && baseWeapon.model) {
            return item.model === baseWeapon.model;
        }

        // Fallback to functional property check if no model data
        const functionalProperties = [
            'range', 'mass', 'rateOfFire', 'modes', 'magazines', 
            'magazineWells', 'weaponSlots', 'underbarrel', 'caliber',
            'subcategory', 'maximumLoad', 'armor'
        ];

        const hasFunctionalChanges = functionalProperties.some(prop => 
            item.hasOwnProperty(prop)
        );

        // If it only has cosmetic properties, it's a texture variant
        return !hasFunctionalChanges;
    }

    /**
     * Helper method to check if an item could be a texture variant
     * (without comparing to a specific base weapon)
     */
    static couldBeTextureVariant(item) {
        return !!(item.baseClass && item.variant && item.texture);
    }

    /**
     * Determines if an item is a base weapon (no variant or is root)
     */
    static isBaseWeapon(item) {
        return !item.variant;
    }

    /**
     * Gets the base weapon class name for a variant
     */
    static getBaseWeaponClass(item) {
        if (this.isBaseWeapon(item)) {
            return item.className;
        }
        return item.baseClass;
    }

    /**
     * Builds variant groups using P3D model-based approach
     */
    static buildVariantGroups(items) {
        const variantGroups = new Map();
        
        // First pass: identify all base weapons
        items.forEach(item => {
            if (this.isBaseWeapon(item)) {
                variantGroups.set(item.className, {
                    baseWeapon: item,
                    textureVariants: []
                });
            }
        });

        // Second pass: group texture variants with their base weapons using P3D model comparison
        items.forEach(item => {
            if (this.couldBeTextureVariant(item)) {
                const baseClassName = this.getBaseWeaponClass(item);
                
                if (variantGroups.has(baseClassName)) {
                    const baseWeapon = variantGroups.get(baseClassName).baseWeapon;
                    
                    // Check if this is actually a texture variant using P3D model comparison
                    if (this.isTextureVariant(item, baseWeapon)) {
                        variantGroups.get(baseClassName).textureVariants.push(item);
                    } else {
                        // Different P3D model = separate weapon, create its own group
                        variantGroups.set(item.className, {
                            baseWeapon: item,
                            textureVariants: []
                        });
                    }
                } else {
                    // Base weapon not found - create new group for this item
                    console.warn(`Potential variant ${item.className} has no base weapon ${baseClassName}`);
                    variantGroups.set(item.className, {
                        baseWeapon: item,
                        textureVariants: []
                    });
                }
            }
        });

        // Sort texture variants within each group by display name
        for (const group of variantGroups.values()) {
            group.textureVariants.sort((a, b) => 
                a.displayName.localeCompare(b.displayName)
            );
        }

        return variantGroups;
    }

    /**
     * Creates Arsenal-style mixed flat/hierarchical structure
     * - Single weapons (no texture variants) → Top level items
     * - Base weapons with texture variants → Collapsible groups with count
     */
    static createArsenalHierarchy(items) {
        const variantGroups = this.buildVariantGroups(items);
        const result = {};

        for (const [baseClassName, group] of variantGroups) {
            const baseWeapon = group.baseWeapon;
            const hasTextureVariants = group.textureVariants.length > 0;
            
            if (!baseWeapon && group.textureVariants.length === 0) continue;

            if (!hasTextureVariants && baseWeapon) {
                // Single weapon - add directly to top level
                const itemKey = `single_${baseWeapon.className}`;
                result[itemKey] = {
                    _isSingleItem: true,
                    _item: baseWeapon,
                    _displayName: baseWeapon.displayName,
                    _id: `single_${baseWeapon.className}`,
                    // For compatibility with existing display code
                    0: baseWeapon
                };
            } else {
                // Base weapon with texture variants - create collapsible group
                const totalCount = (baseWeapon ? 1 : 0) + group.textureVariants.length;
                const groupName = baseWeapon ? 
                    `${baseWeapon.displayName} (${totalCount})` : 
                    `${baseClassName} (${totalCount})`;
                
                const allItems = [baseWeapon, ...group.textureVariants].filter(Boolean);
                
                result[groupName] = {
                    _isGroup: true,
                    _baseWeapon: baseWeapon,
                    _textureVariants: group.textureVariants,
                    _totalCount: totalCount,
                    _isExpanded: false,
                    _id: `group_${baseClassName}`,
                    _allItems: allItems,
                    // Add items as indexed properties for compatibility
                    ...allItems.reduce((acc, item, index) => {
                        acc[index] = item;
                        return acc;
                    }, {})
                };
            }
        }

        return result;
    }

    /**
     * Creates a flat list with proper ordering: base weapon first, then texture variants
     */
    static createVariantOrderedList(items) {
        const variantGroups = this.buildVariantGroups(items);
        const result = [];

        // Convert groups back to flat list with proper ordering
        for (const group of variantGroups.values()) {
            if (group.baseWeapon) {
                result.push(group.baseWeapon);
            }
            result.push(...group.textureVariants);
        }

        return result;
    }

    /**
     * Enhanced sorting that respects variant hierarchy
     */
    static sortWithVariantAwareness(items, sortFn) {
        const variantGroups = this.buildVariantGroups(items);
        const result = [];

        // Convert to array of groups for sorting
        const groupArray = Array.from(variantGroups.values())
            .filter(group => group.baseWeapon || group.textureVariants.length > 0);

        // Sort groups by their base weapon (or first variant if no base)
        groupArray.sort((groupA, groupB) => {
            const itemA = groupA.baseWeapon || groupA.textureVariants[0];
            const itemB = groupB.baseWeapon || groupB.textureVariants[0];
            return sortFn(itemA, itemB);
        });

        // Flatten back to items list
        for (const group of groupArray) {
            if (group.baseWeapon) {
                result.push(group.baseWeapon);
            }
            result.push(...group.textureVariants);
        }

        return result;
    }

    /**
     * Groups items while maintaining variant relationships
     */
    static groupWithVariantAwareness(items, groupFn) {
        const result = {};
        const variantGroups = this.buildVariantGroups(items);

        for (const group of variantGroups.values()) {
            const allGroupItems = [group.baseWeapon, ...group.textureVariants].filter(Boolean);
            
            // Group based on the base weapon (or first variant)
            const representativeItem = group.baseWeapon || group.textureVariants[0];
            const groupKey = groupFn(representativeItem);

            if (!result[groupKey]) {
                result[groupKey] = [];
            }

            // Add items in proper order (base first, then variants)
            result[groupKey].push(...allGroupItems);
        }

        return result;
    }
}

/**
 * Convenience functions for common operations
 */

export function isTextureVariant(item) {
    return VariantManager.isTextureVariant(item);
}

export function isBaseWeapon(item) {
    return VariantManager.isBaseWeapon(item);
}

export function buildVariantGroups(items) {
    return VariantManager.buildVariantGroups(items);
}

export function createVariantOrderedList(items) {
    return VariantManager.createVariantOrderedList(items);
}

export function createArsenalHierarchy(items) {
    return VariantManager.createArsenalHierarchy(items);
}

export function sortWithVariantAwareness(items, sortFn) {
    return VariantManager.sortWithVariantAwareness(items, sortFn);
}

export function groupWithVariantAwareness(items, groupFn) {
    return VariantManager.groupWithVariantAwareness(items, groupFn);
}

// Legacy compatibility
export function isVariant(item) {
    return VariantManager.isTextureVariant(item);
}

export function createVariantHierarchy(items) {
    return VariantManager.createArsenalHierarchy(items);
}