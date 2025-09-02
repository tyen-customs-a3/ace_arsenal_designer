// Basic grouping algorithms

export function groupByMod(items, sortingFunction = null) {
    const groups = {};
    
    items.forEach(item => {
        const mod = (item.item && item.item.mod) || item.mod || 'Unknown';
        if (!groups[mod]) groups[mod] = [];
        groups[mod].push(item);
    });
    
    // Preserve incoming order by default. If a sortingFunction is provided,
    // apply it to each group's items; otherwise keep the insertion order which
    // matches the pre-sorted list order passed into this function.
    if (typeof sortingFunction === 'function') {
        Object.keys(groups).forEach(key => {
            groups[key] = sortingFunction(groups[key]);
        });
    }
    
    return groups;
}
