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
    // For variants view, return items directly without grouping
    // The tree renderer will handle the flat display
    const sortedItems = [...items].sort((a, b) => a.displayName.localeCompare(b.displayName));
    
    // Group items by base weapon name for processing
    const groups = {};
    
    sortedItems.forEach(item => {
        // Extract base weapon name by removing variant suffixes
        let baseWeaponName = item.displayName;
        
        // Remove common variant indicators from display names
        baseWeaponName = baseWeaponName
            .replace(/\s*\(([^)]+)\)$/, '') // Remove anything in parentheses at end
            .replace(/\s*(Black|Khaki|Desert|Woodland|Camo|Tan|Sand|Olive|Hex|MTP|Multicam|Plum|Zenitco|Block\s*II?|Carry\s*Handle|M-Stock|LMT|D\d+RS?|GL|UGL|RIS|DMR|OSW|ANPVS4|Railed|Compact|CQC|STD|SV|FG)$/i, '') // Remove texture/variant suffixes
            .replace(/\s+\+\s+\w+$/, '') // Remove "+ attachment" suffixes like "+ M203"
            .trim();
        
        // If no base name found, use the full display name
        if (!baseWeaponName) {
            baseWeaponName = item.displayName;
        }
        
        // Create group if it doesn't exist
        if (!groups[baseWeaponName]) {
            groups[baseWeaponName] = [];
        }
        
        groups[baseWeaponName].push(item);
    });
    
    // Build result: single items as flat, multiple items as expandable groups
    const result = {};
    
    Object.keys(groups).sort().forEach(key => {
        const groupItems = groups[key];
        
        // Sort items within group - base variant first, then by variant name
        groupItems.sort((a, b) => {
            // Items without variants (base weapons) come first
            const aHasVariant = a.variant || a.displayName.includes('(') || a.displayName.includes('+');
            const bHasVariant = b.variant || b.displayName.includes('(') || b.displayName.includes('+');
            
            if (!aHasVariant && bHasVariant) return -1;
            if (aHasVariant && !bHasVariant) return 1;
            
            // Both have variants or both don't, sort by display name
            return a.displayName.localeCompare(b.displayName);
        });
        
        if (groupItems.length === 1) {
            // Single item - keep as array but use item's display name as key
            const item = groupItems[0];
            result[item.displayName] = groupItems;
        } else {
            // Multiple items - add as expandable group using base name as key
            result[key] = groupItems;
        }
    });
    
    return result;
}

