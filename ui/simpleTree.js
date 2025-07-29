// Simple Tree View Implementation
// Replaces the overcomplicated TreeNode system

// Build tree with proper separation of grouping and view mode concerns
export function createTreeData(items, useGrouping, groupingFunction, sortingFunction, viewMode = 'list', hasPrimaryGrouping = false) {
    // Apply sorting first if specified
    const sortedItems = sortingFunction ? sortingFunction(items) : items;
    
    if (!useGrouping) {
        // No top-level grouping, apply view mode directly to all items
        return applyViewMode(sortedItems, viewMode);
    }
    
    if (groupingFunction && groupingFunction !== 'none') {
        // Apply top-level grouping first
        const groups = groupingFunction(sortedItems);
        const treeData = [];
        
        Object.keys(groups).forEach(groupName => {
            const groupItems = groups[groupName];
            
            // Handle multi-level grouping (e.g., "RHS → 5.56x45mm")
            if (groupName.includes(' → ')) {
                const parts = groupName.split(' → ');
                const primaryGroup = parts[0];
                const secondaryGroup = parts[1];
                
                let primaryNode = treeData.find(node => node.name === primaryGroup);
                if (!primaryNode) {
                    primaryNode = {
                        name: primaryGroup,
                        item: null,
                        children: [],
                        isPrimaryGroup: hasPrimaryGrouping
                    };
                    treeData.push(primaryNode);
                }
                
                // Apply view mode within this secondary group
                const childrenData = applyViewMode(groupItems, viewMode);
                
                const secondaryNode = {
                    name: secondaryGroup,
                    item: null,
                    children: childrenData,
                    isPrimaryGroup: hasPrimaryGrouping
                };
                
                primaryNode.children.push(secondaryNode);
            } else {
                // Single-level grouping
                
                // Apply view mode within this group
                const childrenData = applyViewMode(groupItems, viewMode);
                
                // Check if we should flatten single-item groups (only for flat list view)
                if (groupItems.length === 1 && viewMode === 'list') {
                    // Single item in flat view - render as flat item, not as expandable group
                    const item = groupItems[0];
                    treeData.push({
                        name: item.displayName,
                        item: item,
                        children: null
                    });
                } else {
                    // Multiple items or non-flat view - render as expandable group
                    const groupNode = {
                        name: groupName,
                        item: null,
                        children: childrenData,
                        isPrimaryGroup: hasPrimaryGrouping
                    };
                    
                    treeData.push(groupNode);
                }
            }
        });
        
        return treeData;
    } else {
        // No grouping function provided, apply view mode directly
        return applyViewMode(sortedItems, viewMode);
    }
}

// Apply view mode logic to a set of items
function applyViewMode(items, viewMode) {
    switch(viewMode) {
        case 'list':
            return items.map(item => ({
                name: item.displayName,
                item: item,
                children: null
            }));
        case 'hierarchy':
            return buildInheritanceHierarchy(items);
        case 'variants':
            return buildVariantHierarchy(items);
        default:
            return items.map(item => ({
                name: item.displayName,
                item: item,
                children: null
            }));
    }
}

// Build variant hierarchy tree from variant relationships
function buildVariantHierarchy(items) {
    const groups = new Map();
    
    // First pass: collect all base items (items without variants)
    items.forEach(item => {
        if (!item.variant) {
            if (!groups.has(item.className)) {
                groups.set(item.className, []);
            }
            groups.get(item.className).push(item);
        }
    });
    
    // Second pass: group variants with their base items using baseClass
    items.forEach(item => {
        if (item.variant && item.baseClass) {
            if (!groups.has(item.baseClass)) {
                groups.set(item.baseClass, []);
            }
            groups.get(item.baseClass).push(item);
        }
    });
    
    // Build tree structure
    const treeData = [];
    
    for (const [baseClassName, groupItems] of groups) {
        if (groupItems.length === 0) continue;
        
        // Sort items within group - base item first, then variants by name
        groupItems.sort((a, b) => {
            if (!a.variant && b.variant) return -1;
            if (a.variant && !b.variant) return 1;
            return a.displayName.localeCompare(b.displayName);
        });
        
        if (groupItems.length === 1) {
            // Single item - no variant grouping needed
            const item = groupItems[0];
            treeData.push({
                name: item.displayName,
                item: item,
                children: null
            });
        } else {
            // Multiple items - create variant group
            const baseItem = groupItems.find(item => !item.variant) || groupItems[0];
            const groupNode = {
                name: baseItem.displayName, // Group name is base item's name
                item: null, // Group is not selectable - it's just a container
                children: groupItems.map(item => ({
                    name: item.displayName,
                    item: item,
                    children: null
                }))
            };
            
            treeData.push(groupNode);
        }
    }
    
    return treeData;
}

// Build class inheritance hierarchy tree
function buildInheritanceHierarchy(items) {
    const nodeMap = new Map();
    const roots = [];
    const parentClasses = new Set();
    
    // Debug: log inheritance relationships
    console.log('Building inheritance hierarchy for items:', items.map(item => ({
        className: item.className,
        baseClass: item.baseClass,
        displayName: item.displayName,
        variant: item.variant
    })));
    
    // First pass: identify all parent classes mentioned in baseClass
    items.forEach(item => {
        if (item.baseClass) {
            parentClasses.add(item.baseClass);
        }
    });
    
    // Create nodes for all items AND missing parent classes
    items.forEach(item => {
        const node = {
            name: item.displayName,
            className: item.className,
            item: item,
            children: []
        };
        nodeMap.set(item.className, node);
    });
    
    // Don't create placeholder nodes for base classes - we want actual items at top level
    
    // Build parent-child relationships only between actual items
    items.forEach(item => {
        const node = nodeMap.get(item.className);
        
        if (item.baseClass) {
            // Find parent node - only if it exists as an actual item
            const parentNode = nodeMap.get(item.baseClass);
            if (parentNode && parentNode.item) {
                // Add this node as child of parent only if parent has an actual item
                parentNode.children.push(node);
            } else {
                // Parent is a base class without actual item, treat as root
                roots.push(node);
            }
        } else {
            // No base class, this is a root
            roots.push(node);
        }
    });
    
    // No need to add base class nodes to roots since we're not creating them
    
    // Convert children arrays to null if empty (for leaf nodes)
    function cleanupTree(nodes) {
        nodes.forEach(node => {
            if (node.children.length === 0) {
                node.children = null;
            } else {
                cleanupTree(node.children);
            }
        });
    }
    
    cleanupTree(roots);
    return roots;
}

// Simple tree renderer - creates proper vertical HTML structure
export function renderSimpleTree(treeData) {
    if (!treeData || treeData.length === 0) {
        return '<li>No items</li>';
    }
    
    return treeData.map(node => renderTreeNode(node, 0)).join('');
}

function renderTreeNode(node, level) {
    const hasChildren = node.children && node.children.length > 0;
    const indent = level * 20; // 20px indent per level
    
    let html = '';
    
    if (hasChildren) {
        // Parent node - clickable if it has an item, with separate toggle
        const nodeId = `tree_${node.name.replace(/\s+/g, '_').replace(/[^\w]/g, '')}`;
        // Only primary groups (from Group by dropdown) should be highlighted
        const isPrimaryGroupHeader = node.isPrimaryGroup && !node.item && hasChildren;
        const groupClass = isPrimaryGroupHeader ? 'tree-group-header' : '';
        
        // Primary groups should toggle when clicked, items should select when clicked
        let clickHandler = '';
        if (isPrimaryGroupHeader) {
            clickHandler = `onclick="toggleTreeGroup('${nodeId}')" style="cursor: pointer;"`;
        } else if (node.item) {
            clickHandler = `onclick="selectTreeItem(this)" data-item='${JSON.stringify(node.item)}'`;
        }
        
        const itemClass = node.item ? `tree-item tree-parent ${groupClass}` : `tree-item tree-base-class ${groupClass}`;
        
        html += `<li>`;
        
        // The actual item (clickable if it has data) with count on the right
        html += `<div class="${itemClass}" ${clickHandler}>`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        // For primary groups, the toggle is just visual since the whole row is clickable
        // For other groups, keep the separate toggle functionality
        const toggleHandler = isPrimaryGroupHeader ? '' : `onclick="event.stopPropagation(); toggleTreeGroup('${nodeId}');"`;
        html += `<span class="tree-toggle" ${toggleHandler}>▼</span>`;
        html += `<span class="group-name">${node.name}</span>`;
        html += `<span class="item-count-inline">(${countItems(node)})</span>`;
        html += `</div>`;
        html += `<ul class="tree-children" id="${nodeId}">`;
        
        // Render children
        node.children.forEach(child => {
            html += renderTreeNode(child, level + 1);
        });
        
        html += '</ul>';
        html += '</li>';
    } else {
        // Leaf item - no toggle needed, no count needed, simple left-aligned text
        const clickHandler = node.item ? `onclick="selectTreeItem(this)" data-item='${JSON.stringify(node.item)}'` : '';
        const className = node.item ? `tree-item` : `tree-item tree-base-class`;
        html += `<li>`;
        html += `<div class="${className}" ${clickHandler}>`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        html += `<span class="tree-bullet">•</span>`;
        html += `<span class="group-name">${node.name}</span>`;
        html += `<span class="item-count-inline"></span>`; // Empty span for layout consistency
        html += `</div>`;
        html += '</li>';
    }
    
    return html;
}

function countItems(node) {
    if (!node.children) return node.item ? 1 : 0;
    
    let count = 0;
    node.children.forEach(child => {
        count += countItems(child);
    });
    return count;
}

// Simple toggle functionality
export function toggleTreeGroup(nodeId) {
    const element = document.getElementById(nodeId);
    const toggle = document.querySelector(`[onclick*="toggleTreeGroup('${nodeId}')"]`);
    
    if (element && toggle) {
        const isExpanded = element.style.display !== 'none';
        
        if (isExpanded) {
            // Collapse
            element.style.display = 'none';
            toggle.textContent = '▶';
        } else {
            // Expand  
            element.style.display = 'block';
            toggle.textContent = '▼';
        }
    }
}

// Make toggle function globally available
window.toggleTreeGroup = toggleTreeGroup;

// Simple item selection
export function selectTreeItem(element) {
    // Remove previous selection
    document.querySelectorAll('.tree-item').forEach(item => {
        item.classList.remove('selected');
    });
    document.querySelectorAll('.tree-parent').forEach(item => {
        item.classList.remove('selected');
    });
    
    // Add selection to clicked item
    element.classList.add('selected');
    
    // Parse and handle item data
    try {
        const itemData = JSON.parse(element.dataset.item);
        if (window.selectItem) {
            // Call the existing selectItem function
            window.selectItem(element);
        }
    } catch (e) {
        console.warn('Could not parse item data:', e);
    }
}

// Make selection function globally available
window.selectTreeItem = selectTreeItem;