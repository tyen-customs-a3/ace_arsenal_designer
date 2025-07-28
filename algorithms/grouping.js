// Basic grouping algorithms


export function groupByMod(items) {
    const groups = {};
    
    items.forEach(item => {
        const mod = item.mod || 'Unknown';
        if (!groups[mod]) groups[mod] = [];
        groups[mod].push(item);
    });
    
    // Sort items within each group
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
    });
    
    return groups;
}

export function groupByCaliber(items) {
    const groups = {};
    
    items.forEach(item => {
        if (item.category === 'weapons' || item.category === 'magazines') {
            const caliber = item.caliber || 'Unknown Caliber';
            if (!groups[caliber]) groups[caliber] = [];
            groups[caliber].push(item);
        } else {
            // Non-caliber items go to "Other"
            if (!groups['Other']) groups['Other'] = [];
            groups['Other'].push(item);
        }
    });
    
    // Sort items within each group
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
    });
    
    return groups;
}

// groupByMassRange removed - not realistic for Arma 3 configs

export function groupByWeaponType(items) {
    const groups = {};
    
    items.forEach(item => {
        let groupName = 'Other';
        
        if (item.category === 'weapons') {
            if (item.subcategory === 'rifles') {
                if (item.caliber === '5.56x45mm') {
                    groupName = 'Assault Rifles (5.56mm)';
                } else if (item.caliber === '7.62x39mm') {
                    groupName = 'Battle Rifles (7.62x39mm)';
                } else if (item.caliber === '7.62x51mm') {
                    groupName = 'Battle Rifles (7.62x51mm)';
                }
            } else if (item.subcategory === 'machine_guns') {
                groupName = 'Machine Guns';
            }
        } else if (item.category === 'handguns') {
            groupName = 'Sidearms';
        } else if (item.category === 'backpacks') {
            if (item.maximumLoad > 250) {
                groupName = 'Large Backpacks';
            } else {
                groupName = 'Standard Backpacks';
            }
        } else if (item.category === 'vests') {
            if (item.armor > 100) {
                groupName = 'Heavy Armor';
            } else {
                groupName = 'Light Armor';
            }
        }
        
        if (!groups[groupName]) groups[groupName] = [];
        groups[groupName].push(item);
    });
    
    // Sort items within each group
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
    });
    
    return groups;
}

export function groupByModDetailed(items) {
    const groups = {};
    
    items.forEach(item => {
        const mod = item.mod || 'Unknown';
        const category = item.category || 'misc';
        const groupKey = `${mod} - ${category.charAt(0).toUpperCase() + category.slice(1)}`;
        
        if (!groups[groupKey]) groups[groupKey] = [];
        groups[groupKey].push(item);
    });
    
    // Sort items within each group by name
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
    });
    
    return groups;
}

export function groupByVariants(items) {
    // Group items by their baseClass to create proper inheritance-based variant groups
    const groups = new Map();
    
    // First pass: collect all base weapons (items without variants)
    items.forEach(item => {
        if (!item.variant) {
            // This is a base weapon
            if (!groups.has(item.className)) {
                groups.set(item.className, []);
            }
            groups.get(item.className).push(item);
        }
    });
    
    // Second pass: group variants with their base weapons using baseClass
    items.forEach(item => {
        if (item.variant && item.baseClass) {
            // This is a variant - group it with its base weapon
            if (!groups.has(item.baseClass)) {
                groups.set(item.baseClass, []);
            }
            groups.get(item.baseClass).push(item);
        }
    });
    
    // Build final result structure
    const result = {};
    
    for (const [baseClassName, groupItems] of groups) {
        if (groupItems.length === 0) continue;
        
        // Sort items within group - base weapon first, then variants by name
        groupItems.sort((a, b) => {
            // Base weapon (without variant) comes first
            if (!a.variant && b.variant) return -1;
            if (a.variant && !b.variant) return 1;
            
            // Both are variants or both are base, sort by display name
            return a.displayName.localeCompare(b.displayName);
        });
        
        if (groupItems.length === 1) {
            // Single item - use its display name as key
            const item = groupItems[0];
            result[item.displayName] = groupItems;
        } else {
            // Multiple items - use base weapon's display name as group key
            const baseWeapon = groupItems.find(item => !item.variant) || groupItems[0];
            result[baseWeapon.displayName] = groupItems;
        }
    }
    
    return result;
}

