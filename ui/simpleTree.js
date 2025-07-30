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
        // Apply top-level grouping first, passing the sorting function for within-group sorting
        const groups = groupingFunction(sortedItems, sortingFunction);
        const treeData = [];
        
        // Sort group names themselves if we have sorting enabled
        const sortedGroupNames = sortingFunction ? 
            Object.keys(groups).sort((a, b) => a.localeCompare(b)) :
            Object.keys(groups);
        
        sortedGroupNames.forEach(groupName => {
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
export function renderSimpleTree(treeData, viewMode = 'variants') {
    if (!treeData || treeData.length === 0) {
        return '<li>No items</li>';
    }
    
    return treeData.map(node => renderTreeNode(node, 0, viewMode, false)).join('');
}

function renderTreeNode(node, level, viewMode = 'variants', parentIsGroup = false) {
    const hasChildren = node.children && node.children.length > 0;
    
    // Simplified indentation logic:
    // - Group headers (isPrimaryGroup) are never indented (level 0)
    // - First level children of groups are never indented (level 0) 
    // - All other items follow normal hierarchical indentation
    let effectiveLevel = level;
    
    // If this is a primary group header, don't indent it
    if (node.isPrimaryGroup && !node.item && hasChildren) {
        effectiveLevel = 0;
    }
    // If parent is a group and this is the first level of children, don't indent
    else if (parentIsGroup && level === 1) {
        effectiveLevel = 0;
    }
    // Otherwise use normal hierarchical indentation
    else if (level > 1) {
        effectiveLevel = level - 1; // Adjust to account for group level
    }
    
    const indent = effectiveLevel * 20; // 20px indent per level
    
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
        html += `<div class="${itemClass}" ${clickHandler} onmouseenter="showItemPreview(event, this)" onmouseleave="hideItemPreview()">`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        
        // For primary groups, the toggle is just visual since the whole row is clickable
        // For other groups, keep the separate toggle functionality
        const toggleHandler = isPrimaryGroupHeader ? '' : `onclick="event.stopPropagation(); toggleTreeGroup('${nodeId}');"`;
        html += `<span class="tree-toggle" data-node-id="${nodeId}" ${toggleHandler}>▼</span>`;
        
        html += `<span class="group-name">${node.name}</span>`;
        
        // Always add icon container to maintain consistent row layout
        html += `<span class="item-icons-container">`;
        const previewText = node.item && node.item.category ? node.item.category.charAt(0).toUpperCase() : '?';
        const previewHidden = !window.displayOptions.showPreviewIcon || !node.item;
        html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}">${previewText}</span>`;
        
        // For mod groups, extract mod initial from group name if no item data
        let modText = 'M';
        if (node.item && node.item.mod) {
            modText = node.item.mod.charAt(0).toUpperCase();
        } else if (!node.item && hasChildren) {
            // This is a group - check if it's a mod group and extract initial from group name
            const isModGroup = window.document && 
                window.document.querySelector('input[name="groupByOption"]:checked')?.value === 'groupByMod';
            if (isModGroup) {
                modText = node.name.charAt(0).toUpperCase();
            }
        }
        
        // Always show mod icon for mod group headers, regardless of user setting
        const isModGroup = !node.item && hasChildren && window.document && 
            window.document.querySelector('input[name="groupByOption"]:checked')?.value === 'groupByMod';
        const shouldShowModIcon = window.displayOptions.showModIcon || isModGroup;
        const modHidden = !shouldShowModIcon || (!node.item && !isModGroup) || 
            (node.item && !node.item.mod && !isModGroup);
        
        html += `<span class="item-mod-icon${modHidden ? ' hidden' : ''}">${modText}</span>`;
        html += `</span>`;
        html += `</div>`;
        html += `<ul class="tree-children" id="${nodeId}">`;
        
        // Render children
        node.children.forEach(child => {
            // Check if this node is a grouping node (has no item data)
            const currentNodeIsGroup = !node.item && hasChildren;
            html += renderTreeNode(child, level + 1, viewMode, currentNodeIsGroup);
        });
        
        html += '</ul>';
        html += '</li>';
    } else {
        // Leaf item - no toggle needed, no count needed, simple left-aligned text
        const clickHandler = node.item ? `onclick="selectTreeItem(this)" data-item='${JSON.stringify(node.item)}'` : '';
        
        const className = node.item ? `tree-item` : `tree-item tree-base-class`;
            
        html += `<li>`;
        html += `<div class="${className}" ${clickHandler} onmouseenter="showItemPreview(event, this)" onmouseleave="hideItemPreview()">`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        
        // Only show bullet if not in flat list view mode
        if (viewMode !== 'list') {
            html += `<span class="tree-bullet">•</span>`;
        }
        
        html += `<span class="group-name">${node.name}</span>`;
        
        // Always add icon container to maintain consistent row layout
        html += `<span class="item-icons-container">`;
        const previewText = node.item && node.item.category ? node.item.category.charAt(0).toUpperCase() : '?';
        const previewHidden = !window.displayOptions.showPreviewIcon || !node.item;
        html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}">${previewText}</span>`;
        
        const modText = node.item && node.item.mod ? node.item.mod.charAt(0).toUpperCase() : 'M';
        const modHidden = !window.displayOptions.showModIcon || !node.item || !node.item.mod;
        html += `<span class="item-mod-icon${modHidden ? ' hidden' : ''}">${modText}</span>`;
        html += `</span>`;
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
    const toggle = document.querySelector(`[data-node-id="${nodeId}"]`);
    
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

// Focus management for keyboard navigation
let currentFocusedElement = null;
let activePanelId = null;
let lastSelectedItemId = null; // Track selected item to preserve focus across view changes

// Initialize keyboard navigation for a panel
export function initializeKeyboardNavigation(panelId) {
    const panel = document.getElementById(panelId);
    if (!panel) return;
    
    // Make panel focusable and add keyboard listeners
    panel.setAttribute('tabindex', '0');
    panel.addEventListener('keydown', handleKeyboardNavigation);
    panel.addEventListener('focus', () => setActivePanel(panelId));
    panel.addEventListener('click', () => setActivePanel(panelId));
    
    // Focus first item when panel is clicked or focused
    panel.addEventListener('focus', () => {
        if (!currentFocusedElement || activePanelId !== panelId) {
            focusFirstItem(panelId);
        }
    });
}

// Set the active panel for navigation
function setActivePanel(panelId) {
    activePanelId = panelId;
    
    // Update visual indicators
    document.querySelectorAll('.tree-view').forEach(panel => {
        panel.classList.remove('panel-focused');
    });
    
    const activePanel = document.getElementById(panelId);
    if (activePanel) {
        activePanel.classList.add('panel-focused');
    }
}

// Get all navigable tree items in a panel
function getNavigableItems(panelId) {
    const panel = document.getElementById(panelId);
    if (!panel) return [];
    
    // Get all visible tree items (not hidden by collapse)
    const items = Array.from(panel.querySelectorAll('.tree-item')).filter(item => {
        // Check if item is visible (not in collapsed tree)
        let current = item;
        while (current) {
            const parentUl = current.closest('ul.tree-children');
            if (parentUl && parentUl.style.display === 'none') {
                return false;
            }
            current = parentUl ? parentUl.parentElement : null;
        }
        return true;
    });
    
    return items;
}

// Handle keyboard navigation
function handleKeyboardNavigation(event) {
    if (!activePanelId) return;
    
    const items = getNavigableItems(activePanelId);
    if (items.length === 0) return;
    
    let currentIndex = currentFocusedElement ? items.indexOf(currentFocusedElement) : -1;
    
    switch (event.key) {
        case 'ArrowUp':
            event.preventDefault();
            currentIndex = currentIndex <= 0 ? items.length - 1 : currentIndex - 1;
            setFocusedItem(items[currentIndex]);
            // Immediately select the focused item
            if (items[currentIndex] && items[currentIndex].dataset.item) {
                selectTreeItem(items[currentIndex]);
            }
            break;
            
        case 'ArrowDown':
            event.preventDefault();
            currentIndex = currentIndex >= items.length - 1 ? 0 : currentIndex + 1;
            setFocusedItem(items[currentIndex]);
            // Immediately select the focused item
            if (items[currentIndex] && items[currentIndex].dataset.item) {
                selectTreeItem(items[currentIndex]);
            }
            break;
            
        case 'ArrowLeft':
            event.preventDefault();
            handleExpandCollapse(false);
            break;
            
        case 'ArrowRight':
            event.preventDefault();
            handleExpandCollapse(true);
            break;
            
        case 'Enter':
        case ' ':
            event.preventDefault();
            if (currentFocusedElement) {
                selectTreeItem(currentFocusedElement);
            }
            break;
    }
}

// Set focused item with visual feedback
function setFocusedItem(item) {
    // Remove previous focus from all items
    document.querySelectorAll('.tree-item.keyboard-focused').forEach(el => {
        el.classList.remove('keyboard-focused');
    });
    
    // Set new focus
    currentFocusedElement = item;
    if (item) {
        item.classList.add('keyboard-focused');
        item.scrollIntoView({ behavior: 'smooth', block: 'nearest' });
        
        // Track the selected item ID for persistence across view changes
        if (item.dataset.item) {
            try {
                const itemData = JSON.parse(item.dataset.item);
                lastSelectedItemId = itemData.className || itemData.displayName;
            } catch (e) {
                // Fallback to element text content
                lastSelectedItemId = item.textContent.trim();
            }
        }
    }
}

// Handle expand/collapse based on current focused item
function handleExpandCollapse(expand) {
    if (!currentFocusedElement) return;
    
    if (expand) {
        // Right arrow - expand current group if it's a group header
        if (currentFocusedElement.classList.contains('tree-group-header')) {
            const nodeId = extractNodeIdFromElement(currentFocusedElement);
            if (nodeId) {
                toggleTreeGroup(nodeId);
            }
        } else {
            // If it's a regular item, try to expand its own group if it has one
            const parentLi = currentFocusedElement.closest('li');
            if (!parentLi) return;
            
            const childrenUl = parentLi.querySelector('ul.tree-children');
            const toggle = parentLi.querySelector('.tree-toggle');
            
            if (childrenUl && toggle && childrenUl.style.display === 'none') {
                childrenUl.style.display = 'block';
                toggle.textContent = '▼';
            }
        }
    } else {
        // Left arrow - collapse the group this item is in and move to parent group
        const parentGroup = findParentGroup(currentFocusedElement);
        
        if (parentGroup) {
            const { groupElement, toggleElement, groupHeader } = parentGroup;
            
            // Collapse the group
            if (groupElement.style.display !== 'none') {
                groupElement.style.display = 'none';
                if (toggleElement) {
                    toggleElement.textContent = '▶';
                }
            }
            
            // Move focus to the group header and clear item selection
            if (groupHeader) {
                setFocusedItem(groupHeader);
                clearItemSelection();
            }
        }
    }
}

// Find the parent group containing the current item
function findParentGroup(element) {
    if (!element) return null;
    
    // Find the closest parent ul.tree-children
    const parentUl = element.closest('ul.tree-children');
    if (!parentUl) return null;
    
    // Find the parent li that contains this ul
    const parentLi = parentUl.parentElement;
    if (!parentLi) return null;
    
    // Find the group header (div with tree-item class) and toggle
    const groupHeader = parentLi.querySelector('div.tree-item');
    const toggleElement = parentLi.querySelector('.tree-toggle');
    
    if (groupHeader && toggleElement) {
        return {
            groupElement: parentUl,
            toggleElement: toggleElement,
            groupHeader: groupHeader
        };
    }
    
    return null;
}

// Clear item selection (stats, right panel, etc.)
function clearItemSelection() {
    // Clear visual selection
    document.querySelectorAll('.tree-item').forEach(item => {
        item.classList.remove('selected');
    });
    document.querySelectorAll('.tree-parent').forEach(item => {
        item.classList.remove('selected');
    });
    
    // Clear stats display safely
    const statElements = ['statDamage', 'statRange', 'statMass', 'statCapacity', 'statMod'];
    statElements.forEach(id => {
        const element = document.getElementById(id);
        if (element) {
            element.textContent = '-';
        }
    });
    
    // Clear right panel to show all items of current category
    try {
        if (window.selectedRightCategory && window.filterItemsByCategory && window.renderTreeView) {
            const rightItems = window.filterItemsByCategory(window.selectedRightCategory);
            window.renderTreeView(rightItems, 'rightTreeView', false);
        }
    } catch (e) {
        // Silently fail if functions aren't available
        console.warn('Could not clear right panel:', e);
    }
}

// Extract node ID from element for toggle functionality
function extractNodeIdFromElement(element) {
    const parentLi = element.closest('li');
    if (!parentLi) return null;
    
    const childrenUl = parentLi.querySelector('ul.tree-children');
    return childrenUl ? childrenUl.id : null;
}

// Clear focus when panel content changes
export function clearPanelFocus(panelId) {
    if (activePanelId === panelId) {
        currentFocusedElement = null;
    }
}

// Restore focus to previously selected item after view changes
export function restoreFocusAfterViewChange(panelId) {
    if (activePanelId !== panelId || !lastSelectedItemId) return;
    
    const items = getNavigableItems(panelId);
    let targetItem = null;
    
    // Try to find the item by className or displayName
    for (const item of items) {
        if (item.dataset.item) {
            try {
                const itemData = JSON.parse(item.dataset.item);
                if (itemData.className === lastSelectedItemId || itemData.displayName === lastSelectedItemId) {
                    targetItem = item;
                    break;
                }
            } catch (e) {
                // Fallback: compare text content
                if (item.textContent.trim().includes(lastSelectedItemId)) {
                    targetItem = item;
                    break;
                }
            }
        }
    }
    
    // If found, set focus and select it
    if (targetItem) {
        setFocusedItem(targetItem);
        if (targetItem.dataset.item) {
            selectTreeItem(targetItem);
        }
    } else if (items.length > 0) {
        // Fallback to first item
        setFocusedItem(items[0]);
    }
}

// Set initial focus to first item in panel
export function focusFirstItem(panelId) {
    const items = getNavigableItems(panelId);
    if (items.length > 0) {
        setActivePanel(panelId);
        setFocusedItem(items[0]);
    }
}

