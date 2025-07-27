// Multi-level grouping algorithms

export function groupByMultiple(items, primaryGrouper, secondaryGrouper = null) {
    if (!secondaryGrouper || secondaryGrouper === 'none') {
        // Single level grouping
        return primaryGrouper(items);
    }
    
    // Multi-level grouping
    const primaryGroups = primaryGrouper(items);
    const nestedGroups = {};
    
    Object.keys(primaryGroups).forEach(primaryKey => {
        const primaryItems = primaryGroups[primaryKey];
        const secondaryGroups = secondaryGrouper(primaryItems);
        
        Object.keys(secondaryGroups).forEach(secondaryKey => {
            const nestedKey = `${primaryKey} → ${secondaryKey}`;
            nestedGroups[nestedKey] = secondaryGroups[secondaryKey];
        });
    });
    
    return nestedGroups;
}


export function groupByModThenCaliber(items) {
    const groups = {};
    
    items.forEach(item => {
        const mod = item.mod || 'Unknown';
        const caliber = item.caliber || 'No Caliber';
        const groupKey = `${mod} → ${caliber}`;
        
        if (!groups[groupKey]) groups[groupKey] = [];
        groups[groupKey].push(item);
    });
    
    // Sort items within each group
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
    });
    
    return groups;
}



export function groupByCaliberThenMod(items) {
    const groups = {};
    
    items.forEach(item => {
        if (item.category === 'weapons' || item.category === 'magazines') {
            const caliber = item.caliber || 'Unknown Caliber';
            const mod = item.mod || 'Unknown';
            const groupKey = `${caliber} → ${mod}`;
            
            if (!groups[groupKey]) groups[groupKey] = [];
            groups[groupKey].push(item);
        } else {
            // Non-caliber items grouped by mod only
            const mod = item.mod || 'Unknown';
            const groupKey = `Equipment → ${mod}`;
            
            if (!groups[groupKey]) groups[groupKey] = [];
            groups[groupKey].push(item);
        }
    });
    
    // Sort items within each group
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
    });
    
    return groups;
}

// Helper function to get grouping function by name
export function getGroupingFunction(groupingName) {
    const groupingMap = {
        'groupByModThenCaliber': groupByModThenCaliber,
        'groupByCaliberThenMod': groupByCaliberThenMod
    };
    
    return groupingMap[groupingName] || null;
}