// Enhanced sorting algorithms with direction support

export function sortByName(items, direction = 'asc') {
    const sorted = [...items].sort((a, b) => {
        const nameA = a.name || a.displayName || a.class_name || '';
        const nameB = b.name || b.displayName || b.class_name || '';
        return nameA.localeCompare(nameB);
    });
    return direction === 'desc' ? sorted.reverse() : sorted;
}


export function sortByMod(items, direction = 'asc') {
    const modPriority = { 'A3': 1, 'ACE3': 2, 'RHS': 3, 'CUP': 4 };
    
    const sorted = [...items].sort((a, b) => {
        const modA = (a.item && a.item.mod) || a.mod || '';
        const modB = (b.item && b.item.mod) || b.mod || '';
        
        const priorityA = modPriority[modA] || 999;
        const priorityB = modPriority[modB] || 999;
        
        if (priorityA !== priorityB) return priorityA - priorityB;
        
        const nameA = a.name || a.displayName || a.class_name || '';
        const nameB = b.name || b.displayName || b.class_name || '';
        return nameA.localeCompare(nameB);
    });
    
    return direction === 'desc' ? sorted.reverse() : sorted;
}


export function sortByRange(items, direction = 'desc') {
    const sorted = [...items].sort((a, b) => {
        const rangeA = (a.item && a.item.range) || a.range || 0;
        const rangeB = (b.item && b.item.range) || b.range || 0;
        
        if (rangeB !== rangeA) return rangeB - rangeA; // Default descending
        
        const nameA = a.name || a.displayName || a.class_name || '';
        const nameB = b.name || b.displayName || b.class_name || '';
        return nameA.localeCompare(nameB);
    });
    
    return direction === 'asc' ? sorted.reverse() : sorted;
}


export function sortByMass(items, direction = 'asc') {
    const sorted = [...items].sort((a, b) => {
        const massA = (a.item && a.item.mass) || a.mass || 0;
        const massB = (b.item && b.item.mass) || b.mass || 0;
        
        if (massA !== massB) return massA - massB; // Default ascending
        
        const nameA = a.name || a.displayName || a.class_name || '';
        const nameB = b.name || b.displayName || b.class_name || '';
        return nameA.localeCompare(nameB);
    });
    
    return direction === 'desc' ? sorted.reverse() : sorted;
}
