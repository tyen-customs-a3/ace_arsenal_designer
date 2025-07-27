// Simple Tree View Implementation
// Replaces the overcomplicated TreeNode system

// Build inheritance hierarchy tree from class relationships
export function createTreeData(items, useGrouping, groupingFunction, sortingFunction) {
    // Apply sorting first if specified
    const sortedItems = sortingFunction ? sortingFunction(items) : items;
    
    if (!useGrouping) {
        // Flat list - no grouping or inheritance hierarchy
        return sortedItems.map(item => ({
            name: item.displayName,
            item: item,
            children: null
        }));
    }
    
    if (groupingFunction && groupingFunction !== 'none') {
        // Property-based grouping (Mod, Caliber, etc.)
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
                        children: []
                    };
                    treeData.push(primaryNode);
                }
                
                const secondaryNode = {
                    name: secondaryGroup,
                    item: null,
                    children: groupItems.map(item => ({
                        name: item.displayName,
                        item: item,
                        children: null
                    }))
                };
                
                primaryNode.children.push(secondaryNode);
            } else {
                const groupNode = {
                    name: groupName,
                    item: null,
                    children: groupItems.map(item => ({
                        name: item.displayName,
                        item: item,
                        children: null
                    }))
                };
                
                treeData.push(groupNode);
            }
        });
        
        return treeData;
    } else {
        // Build inheritance hierarchy from baseClass relationships
        return buildInheritanceHierarchy(sortedItems);
    }
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
        const clickHandler = node.item ? `onclick="selectTreeItem(this)" data-item='${JSON.stringify(node.item)}'` : '';
        const itemClass = node.item ? 'tree-item tree-parent' : 'tree-item tree-base-class';
        
        html += `<li style="margin-left: ${indent}px;">`;
        html += `<div class="tree-node-container">`;
        
        // Separate toggle button that doesn't interfere with item clicking
        html += `<span class="tree-toggle" onclick="event.stopPropagation(); toggleTreeGroup('${nodeId}');">▼</span>`;
        
        // The actual item (clickable if it has data) with count on the right
        html += `<div class="${itemClass}" ${clickHandler}>`;
        html += `${node.name} <span class="item-count-inline">(${countItems(node)})</span>`;
        html += `</div>`;
        
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
        const className = node.item ? 'tree-item' : 'tree-item tree-base-class';
        html += `<li style="margin-left: ${indent}px;" class="${className}" ${clickHandler}>`;
        html += `<span class="tree-bullet">•</span> ${node.name}`;
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