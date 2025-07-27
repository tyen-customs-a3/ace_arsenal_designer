// Enhanced sorting algorithms with direction support

export function sortByName(items, direction = 'asc') {
    const sorted = [...items].sort((a, b) => 
        a.displayName.localeCompare(b.displayName)
    );
    return direction === 'desc' ? sorted.reverse() : sorted;
}

export function sortByNameAsc(items) {
    return sortByName(items, 'asc');
}

export function sortByNameDesc(items) {
    return sortByName(items, 'desc');
}

export function sortByMod(items, direction = 'asc') {
    const modPriority = { 'A3': 1, 'ACE3': 2, 'RHS': 3, 'CUP': 4 };
    
    const sorted = [...items].sort((a, b) => {
        const priorityA = modPriority[a.mod] || 999;
        const priorityB = modPriority[b.mod] || 999;
        
        if (priorityA !== priorityB) return priorityA - priorityB;
        return a.displayName.localeCompare(b.displayName);
    });
    
    return direction === 'desc' ? sorted.reverse() : sorted;
}

export function sortByModAsc(items) {
    return sortByMod(items, 'asc');
}

export function sortByModDesc(items) {
    return sortByMod(items, 'desc');
}

export function sortByRange(items, direction = 'desc') {
    const sorted = [...items].sort((a, b) => {
        const rangeA = a.range || 0;
        const rangeB = b.range || 0;
        
        if (rangeB !== rangeA) return rangeB - rangeA; // Default descending
        return a.displayName.localeCompare(b.displayName);
    });
    
    return direction === 'asc' ? sorted.reverse() : sorted;
}

export function sortByRangeAsc(items) {
    return sortByRange(items, 'asc');
}

export function sortByRangeDesc(items) {
    return sortByRange(items, 'desc');
}

export function sortByMass(items, direction = 'asc') {
    const sorted = [...items].sort((a, b) => {
        const massA = a.mass || 0;
        const massB = b.mass || 0;
        
        if (massA !== massB) return massA - massB; // Default ascending
        return a.displayName.localeCompare(b.displayName);
    });
    
    return direction === 'desc' ? sorted.reverse() : sorted;
}

export function sortByMassAsc(items) {
    return sortByMass(items, 'asc');
}

export function sortByMassDesc(items) {
    return sortByMass(items, 'desc');
}

export function sortByCategory(items, direction = 'asc') {
    const sorted = [...items].sort((a, b) => {
        // First by category
        const categoryComp = a.category.localeCompare(b.category);
        if (categoryComp !== 0) return categoryComp;
        
        // Then by name within category
        return a.displayName.localeCompare(b.displayName);
    });
    
    return direction === 'desc' ? sorted.reverse() : sorted;
}

export function sortByCategoryAsc(items) {
    return sortByCategory(items, 'asc');
}

export function sortByCategoryDesc(items) {
    return sortByCategory(items, 'desc');
}

// sortByEffectivenessScore removed - not realistic for Arma 3 configs