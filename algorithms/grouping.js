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

