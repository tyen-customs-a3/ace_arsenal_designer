// Basic grouping algorithms
import { VariantManager, groupWithVariantAwareness, createArsenalHierarchy } from './variantCore.js';

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

// groupByMassRange removed - not realistic for Arma 3 configs

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
    return createArsenalHierarchy(items);
}

// Arsenal-style mixed flat/hierarchical display
export function groupByArsenalStyle(items) {
    return createArsenalHierarchy(items);
}

// Enhanced variant grouping with mod awareness
export function groupByVariantsWithMod(items) {
    return groupWithVariantAwareness(items, (item) => {
        const mod = item.mod || 'Unknown';
        return `${mod} Weapons`;
    });
}

// Variant-aware caliber grouping
export function groupByVariantsWithCaliber(items) {
    return groupWithVariantAwareness(items, (item) => {
        if (item.category === 'weapons' || item.category === 'magazines') {
            const caliber = item.caliber || 'Unknown Caliber';
            return caliber;
        } else {
            return 'Other';
        }
    });
}

// Variant-aware role-based grouping
export function groupByVariantsWithRole(items) {
    return groupWithVariantAwareness(items, (item) => {
        if (item.category !== 'weapons') return 'Non-Weapons';
        
        const name = item.displayName.toLowerCase();
        const subcategory = item.subcategory || '';
        
        // Determine tactical role
        if (subcategory === 'machine_guns') return 'Machine Guns';
        if (subcategory === 'sniper_rifles') return 'Designated Marksman / Sniper';
        if (name.includes('sw') || name.includes('lmg')) return 'Support Weapons';
        if (name.includes('c') || name.includes('cqc') || name.includes('compact')) return 'Close Quarters Combat';
        if (name.includes('gl') || item.underbarrel) return 'Grenadier';
        if (subcategory === 'rifles') return 'Assault Rifles';
        
        return 'Other Weapons';
    });
}

// Simple flat list with variant ordering (for testing)
export function sortVariantsFlat(items) {
    return VariantManager.createVariantOrderedList(items);
}

// Demonstration of the exact structure shown in user example
export function groupByArsenalDemo(items) {
    // This creates the exact structure:
    // • AK-105 (single weapon)
    // AK-74M (4) <- collapsible group
    //   • AK-74M
    //   • AK-74M (Desert) 
    //   • AK-74M (Plum)
    //   • AK-74M (Zenitco)
    return createArsenalHierarchy(items);
}

