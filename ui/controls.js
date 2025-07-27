// UI control functions for search, tabs, and buttons

// Category filtering
export function filterItemsByCategory(items, category) {
    return items.filter(item => item.category === category);
}

// Item selection and stats display
export function selectItem(element, updateStats, updateLoadout) {
    // Remove previous selection
    document.querySelectorAll('.tree-item').forEach(item => item.classList.remove('selected'));
    element.classList.add('selected');

    try {
        const selectedItem = JSON.parse(element.dataset.item);
        updateStats(selectedItem);
        updateLoadout(selectedItem);
        return selectedItem;
    } catch (e) {
        console.warn('Could not parse item data:', e);
        return null;
    }
}

export function updateStats(item) {
    document.getElementById('statDamage').textContent = item.damage || '-';
    document.getElementById('statRange').textContent = item.range ? `${item.range}m` : '-';
    document.getElementById('statMass').textContent = item.mass ? `${(item.mass/1000).toFixed(2)}kg` : '-';
    document.getElementById('statCapacity').textContent = item.capacity || '-';
    
    // Enhanced mod display with inheritance info
    let modText = item.mod || '-';
    if (item.baseClass) {
        modText += ` (${item.baseClass})`;
    }
    if (item.variant) {
        modText += ` [${item.variant}]`;
    }
    document.getElementById('statMod').textContent = modText;
}

export function updateLoadout(item, currentLoadout) {
    // Update current loadout based on item type
    if (item.category === 'weapons') {
        currentLoadout.weapon = item;
        document.getElementById('previewWeapon').textContent = `Primary: ${item.displayName}`;
    } else if (item.category === 'handguns') {
        currentLoadout.handgun = item;
        document.getElementById('previewHandgun').textContent = `Handgun: ${item.displayName}`;
    } else if (item.category === 'backpacks') {
        currentLoadout.backpack = item;
        document.getElementById('previewBackpack').textContent = `Backpack: ${item.displayName}`;
    } else if (item.category === 'vests') {
        currentLoadout.vest = item;
        document.getElementById('previewVest').textContent = `Vest: ${item.displayName}`;
    } else if (item.category === 'attachments') {
        currentLoadout.attachments.push(item);
        document.getElementById('previewAttachments').textContent = `Attachments: ${currentLoadout.attachments.length} items`;
    }
}

export function clearSelection() {
    // Clear visual selection
    document.querySelectorAll('.tree-item').forEach(item => item.classList.remove('selected'));
    
    // Clear stats
    ['statDamage', 'statRange', 'statMass', 'statCapacity', 'statMod'].forEach(id => {
        document.getElementById(id).textContent = '-';
    });

    // Clear loadout preview
    document.getElementById('previewWeapon').textContent = 'Primary: None';
    document.getElementById('previewHandgun').textContent = 'Handgun: None';
    document.getElementById('previewBackpack').textContent = 'Backpack: None';
    document.getElementById('previewVest').textContent = 'Vest: None';
    document.getElementById('previewAttachments').textContent = 'Attachments: None';
    
    return { weapon: null, handgun: null, backpack: null, vest: null, attachments: [] };
}

// Category tab handling
export function switchCategory(category, items, renderFunction) {
    // Update tab appearance
    document.querySelectorAll('.category-tab').forEach(tab => tab.classList.remove('active'));
    document.querySelector(`[data-category="${category}"]`).classList.add('active');
    
    // Filter and display items
    const filteredItems = filterItemsByCategory(items, category);
    renderFunction(filteredItems, 'leftTreeView');
    return filteredItems;
}

export function switchRightCategory(category, items, renderFunction) {
    // Update tab appearance
    document.querySelectorAll('.attachment-tab').forEach(tab => tab.classList.remove('active'));
    document.querySelector(`[data-attachment="${category}"]`).classList.add('active');
    
    // Filter and display items
    const rightItems = filterItemsByCategory(items, category);
    renderFunction(rightItems, 'rightTreeView', false); // No grouping for right panel
    return rightItems;
}

export function updateItemCount(filteredItems, selectedRightCategory, items) {
    const leftCount = filteredItems.length;
    const rightCount = filterItemsByCategory(items, selectedRightCategory).length;
    document.getElementById('itemCount').textContent = leftCount + rightCount;
}

// Tree group toggle functionality
export function toggleGroup(groupId, treeExpandedState) {
    const group = document.getElementById(groupId);
    const header = document.querySelector(`[data-group="${groupId}"]`);
    const icon = header.querySelector('.tree-expand-icon');
    
    if (group && header && icon) {
        const isCollapsed = group.classList.contains('collapsed');
        
        if (isCollapsed) {
            // Expand
            group.classList.remove('collapsed');
            icon.classList.add('expanded');
            icon.textContent = '▼';
            treeExpandedState[groupId] = true;
        } else {
            // Collapse
            group.classList.add('collapsed');
            icon.classList.remove('expanded');
            icon.textContent = '▶';
            treeExpandedState[groupId] = false;
        }
    }
}

// Expand all groups
export function expandAllGroups(treeExpandedState, currentHierarchyTree, expandAllNodesRecursively, renderFunction, filteredItems) {
    // Handle simple grouped trees (fallback)
    document.querySelectorAll('.tree-group').forEach(group => {
        group.classList.remove('collapsed');
        const groupId = group.id;
        treeExpandedState[groupId] = true;
    });
    
    document.querySelectorAll('.tree-expand-icon').forEach(icon => {
        icon.classList.add('expanded');
        icon.textContent = '▼';
    });
    
    // Handle hierarchical trees
    if (currentHierarchyTree.length > 0) {
        expandAllNodesRecursively(currentHierarchyTree);
        renderFunction(filteredItems, 'leftTreeView');
    }
}

// Collapse all groups
export function collapseAllGroups(treeExpandedState, currentHierarchyTree, collapseAllNodesRecursively, renderFunction, filteredItems) {
    // Handle simple grouped trees (fallback)
    document.querySelectorAll('.tree-group').forEach(group => {
        group.classList.add('collapsed');
        const groupId = group.id;
        treeExpandedState[groupId] = false;
    });
    
    document.querySelectorAll('.tree-expand-icon').forEach(icon => {
        icon.classList.remove('expanded');
        icon.textContent = '▶';
    });
    
    // Handle hierarchical trees
    if (currentHierarchyTree.length > 0) {
        collapseAllNodesRecursively(currentHierarchyTree);
        renderFunction(filteredItems, 'leftTreeView');
    }
}

// Search functionality
export function setupSearchHandlers(filterItemsByCategory, renderFunction) {
    document.getElementById('leftSearch').addEventListener('input', (e) => {
        const searchTerm = e.target.value.toLowerCase();
        const selectedCategory = document.querySelector('.category-tab.active').dataset.category;
        const items = window.currentItems || [];
        const filteredItems = filterItemsByCategory(items, selectedCategory)
            .filter(item => item.displayName.toLowerCase().includes(searchTerm));
        renderFunction(filteredItems, 'leftTreeView');
    });

    document.getElementById('rightSearch').addEventListener('input', (e) => {
        const searchTerm = e.target.value.toLowerCase();
        const selectedRightCategory = document.querySelector('.attachment-tab.active').dataset.attachment;
        const items = window.currentItems || [];
        const filteredItems = filterItemsByCategory(items, selectedRightCategory)
            .filter(item => item.displayName.toLowerCase().includes(searchTerm));
        renderFunction(filteredItems, 'rightTreeView', false);
    });
}