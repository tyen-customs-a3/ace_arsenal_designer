// Basic grouping algorithms

export function groupByMod(items, sortingFunction = null) {
    const groups = {};
    
    items.forEach(item => {
        const mod = item.mod || 'Unknown';
        if (!groups[mod]) groups[mod] = [];
        groups[mod].push(item);
    });
    
    // Sort items within each group using provided sorting function or default to name
    Object.keys(groups).forEach(key => {
        if (sortingFunction) {
            groups[key] = sortingFunction(groups[key]);
        } else {
            groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
        }
    });
    
    return groups;
}

export function groupByCaliber(items, sortingFunction = null) {
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
    
    // Sort items within each group using provided sorting function or default to name
    Object.keys(groups).forEach(key => {
        if (sortingFunction) {
            groups[key] = sortingFunction(groups[key]);
        } else {
            groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
        }
    });
    
    return groups;
}

export function groupByWeaponType(items, sortingFunction = null) {
    const groups = {};
    
    items.forEach(item => {
        let groupName = 'Other';
        
        if (item.category === 'weapons') {
            // Use cursorAim property to determine weapon type
            const weaponType = item.cursorAim || (item.properties && item.properties.cursorAim) || 'other';
            
            switch (weaponType) {
                case 'rifle':
                    groupName = 'Rifles';
                    break;
                case 'mg':
                    groupName = 'Machine Guns';
                    break;
                case 'sniper':
                    groupName = 'Sniper Rifles';
                    break;
                default:
                    groupName = 'Other Weapons';
                    break;
            }
        } else if (item.category === 'handguns') {
            groupName = 'Handguns';
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
    
    // Sort items within each group using provided sorting function or default to name
    Object.keys(groups).forEach(key => {
        if (sortingFunction) {
            groups[key] = sortingFunction(groups[key]);
        } else {
            groups[key].sort((a, b) => a.displayName.localeCompare(b.displayName));
        }
    });
    
    return groups;
}