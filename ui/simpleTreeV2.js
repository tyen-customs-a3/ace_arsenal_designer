// Enhanced Tree View Implementation V2
// Uses the new unified architecture for consistent navigation and construction

import { TreeNode, NodeType, TreeUtils } from './treeNode.js';
import { TreeNavigationState, NavigationHandlers, TreeVisualFeedback, TreeEvents } from './treeNavigation.js';
import { TOGGLE_ICONS } from './constants.js';

// Global navigation states for each panel
const navigationStates = new Map();
const visualFeedbackManagers = new Map();

// Tree rendering system with new architecture
export class TreeRenderer {
    constructor(panelId) {
        this.panelId = panelId;
        this.container = document.getElementById(panelId);
    }
    
    // Render tree nodes to HTML
    render(rootNodes, options = {}) {
        if (!rootNodes || rootNodes.length === 0) {
            return '<li class="tree-item">No items</li>';
        }
        
        const html = rootNodes.map(node => this.renderNode(node, options)).join('');
        return html;
    }
    
    // Render individual tree node
    renderNode(node, options = {}, level = 0) {
        const hasChildren = node.children && node.children.length > 0;
        const effectiveLevel = this.calculateEffectiveLevel(node, level);
        const indent = effectiveLevel * 20;
        
        let html = '';
        
        if (hasChildren) {
            // Parent node with children
            html += this.renderParentNode(node, indent, options);
        } else {
            // Leaf node
            html += this.renderLeafNode(node, indent, options);
        }
        
        return html;
    }
    
    // Calculate effective indentation level
    calculateEffectiveLevel(node, level) {
        // Primary groups are never indented
        if (node.type === NodeType.GROUP && node.level === 0) {
            return 0;
        }
        
        // Items under primary groups are not indented
        if (node.parent && node.parent.type === NodeType.GROUP && node.parent.level === 0) {
            return 0;
        }
        
        // Otherwise use hierarchical indentation
        return Math.max(0, level - 1);
    }
    
    // Render parent node (with children)
    renderParentNode(node, indent, options) {
        const nodeId = `tree_${node.id}`;
        const isPrimaryGroup = node.type === NodeType.GROUP && node.level === 0;
        const groupClass = isPrimaryGroup ? 'tree-group-header' : '';
        
        // Click handlers - all groups should toggle, selectable items should select
        let clickHandler = '';
        if (hasChildren && !node.isSelectable) {
            // This is a group node - make it toggle
            clickHandler = `onclick="window.toggleTreeGroup('${nodeId}')" style="cursor: pointer;"`;
        } else if (node.isSelectable) {
            // This is a selectable item - make it selectable
            clickHandler = `onclick="window.selectTreeItem(this)" data-item='${JSON.stringify(node.data)}' data-node-id="${node.id}"`;
        }
        
        const itemClass = node.isSelectable ? 
            `tree-item tree-parent ${groupClass}` : 
            `tree-item tree-base-class ${groupClass}`;
        
        let html = '<li>';
        
        // The item element
        html += `<div class="${itemClass}" ${clickHandler} onmouseenter="window.showItemPreview && window.showItemPreview(event, this)" onmouseleave="window.hideItemPreview && window.hideItemPreview()">`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        
        // Toggle button - clickable with stopPropagation to prevent row selection
        html += `<span class="tree-toggle" data-node-id="${nodeId}" onclick="event.stopPropagation(); window.toggleTreeGroup('${nodeId}');">${TOGGLE_ICONS.EXPANDED}</span>`;
        
        html += `<span class="group-name">${node.name}</span>`;
        
        // Icons
        html += this.renderIcons(node, isPrimaryGroup);
        html += '</div>';
        
        // Children container
        html += `<ul class="tree-children" id="${nodeId}">`;
        node.children.forEach(child => {
            html += this.renderNode(child, options, node.level + 1);
        });
        html += '</ul>';
        
        html += '</li>';
        return html;
    }
    
    // Render leaf node (no children)
    renderLeafNode(node, indent, options) {
        const clickHandler = node.isSelectable ? 
            `onclick="window.selectTreeItem(this)" data-item='${JSON.stringify(node.data)}' data-node-id="${node.id}"` : '';
        
        const className = node.isSelectable ? 'tree-item' : 'tree-item tree-base-class';
        
        let html = '<li>';
        html += `<div class="${className}" ${clickHandler} onmouseenter="window.showItemPreview && window.showItemPreview(event, this)" onmouseleave="window.hideItemPreview && window.hideItemPreview()">`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        
        // Bullet for hierarchy views
        if (options.viewMode !== 'list') {
            html += '<span class="tree-bullet">•</span>';
        }
        
        html += `<span class="group-name">${node.name}</span>`;
        
        // Icons
        html += this.renderIcons(node, false);
        html += '</div>';
        html += '</li>';
        
        return html;
    }
    
    // Render icon container
    renderIcons(node, isModGroup = false) {
        let html = '<span class="item-icons-container">';
        
        // Preview icon
        const previewText = node.data && node.data.category ? 
            node.data.category.charAt(0).toUpperCase() : '?';
        const previewHidden = !window.displayOptions?.showPreviewIcon || !node.data;
        const categoryClass = node.data && node.data.category ? ` category-${node.data.category}` : '';
        html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}${categoryClass}">${previewText}</span>`;
        
        // Mod icon
        let modText = 'M';
        if (node.data && node.data.mod) {
            modText = node.data.mod.charAt(0).toUpperCase();
        } else if (isModGroup) {
            modText = node.name.charAt(0).toUpperCase();
        }
        
        const shouldShowModIcon = window.displayOptions?.showModIcon || isModGroup;
        const modHidden = !shouldShowModIcon || (!node.data && !isModGroup) || 
            (node.data && !node.data.mod && !isModGroup);
        
        html += `<span class="item-mod-icon${modHidden ? ' hidden' : ''}">${modText}</span>`;
        html += '</span>';
        
        return html;
    }
}

// Main tree management system
export class TreeManager {
    constructor(panelId) {
        this.panelId = panelId;
        this.renderer = new TreeRenderer(panelId);
        this.navigationState = new TreeNavigationState(panelId);
        this.navigationHandlers = new NavigationHandlers(this.navigationState);
        this.visualFeedback = new TreeVisualFeedback(panelId);
        
        // Store in global maps for access
        navigationStates.set(panelId, this.navigationState);
        visualFeedbackManagers.set(panelId, this.visualFeedback);
        
        this.setupEventListeners();
        this.initializeKeyboardNavigation();
    }
    
    // Setup event listeners for navigation state changes
    setupEventListeners() {
        this.navigationState.addEventListener(TreeEvents.FOCUS_CHANGED, (event) => {
            const { node, previousNode } = event.detail;
            this.visualFeedback.updateFocusVisuals(node, previousNode);
        });
        
        this.navigationState.addEventListener(TreeEvents.SELECTION_CHANGED, (event) => {
            const { node, previousNode } = event.detail;
            this.visualFeedback.updateSelectionVisuals(node, previousNode);
            
            // Trigger global selection callbacks
            if (window.onTreeSelectionChanged) {
                window.onTreeSelectionChanged(node?.data, this.panelId);
            }
        });
        
        this.navigationState.addEventListener(TreeEvents.NAVIGATION_MODE_CHANGED, (event) => {
            const { isActive } = event.detail;
            this.visualFeedback.updatePanelActiveState(isActive);
        });
        
        this.navigationState.addEventListener(TreeEvents.NODE_EXPANDED, (event) => {
            const { node } = event.detail;
            this.visualFeedback.updateExpansionVisuals(node, true);
        });
        
        this.navigationState.addEventListener(TreeEvents.NODE_COLLAPSED, (event) => {
            const { node } = event.detail;
            this.visualFeedback.updateExpansionVisuals(node, false);
        });
    }
    
    // Initialize keyboard navigation
    initializeKeyboardNavigation() {
        const panel = document.getElementById(this.panelId);
        if (!panel) return;
        
        panel.setAttribute('tabindex', '0');
        panel.addEventListener('keydown', (event) => {
            this.navigationHandlers.handleKeyboardEvent(event);
        });
        
        panel.addEventListener('focus', () => {
            this.navigationState.setActive(true);
            if (!this.navigationState.focusedNode) {
                this.navigationState.focusFirst();
            }
        });
        
        panel.addEventListener('blur', () => {
            this.navigationState.setActive(false);
        });
        
        panel.addEventListener('click', () => {
            this.navigationState.setActive(true);
        });
    }
    
    // Render tree with items and options
    renderTree(items, options = {}) {
        const startTime = performance.now();
        
        // Build tree properly using the corrected logic
        const treeData = this.buildCorrectTreeData(items, options);
        
        // Convert to new node system for navigation
        const rootNodes = this.convertToNavigationNodes(treeData);
        
        // Set tree in navigation state
        this.navigationState.setTree(rootNodes);
        
        // Render using corrected renderer
        const html = `<ul class="tree-view">${this.renderTreeData(treeData, options.viewMode)}</ul>`;
        
        const endTime = performance.now();
        if (document.getElementById('timing')) {
            document.getElementById('timing').textContent = `${(endTime - startTime).toFixed(2)}ms`;
        }
        
        // Update DOM
        const container = document.getElementById(this.panelId);
        if (container) {
            container.innerHTML = html;
            
            // Restore focus if needed
            setTimeout(() => {
                if (this.navigationState.isActive && !this.navigationState.focusedNode) {
                    this.navigationState.focusFirst();
                }
            }, 0);
        }
    }
    
    // Build tree data correctly using existing algorithms
    buildCorrectTreeData(items, options) {
        // Apply sorting first if specified
        const sortedItems = options.sortBy && window.algorithms && window.algorithms[options.sortBy] ? 
            window.algorithms[options.sortBy](items, options.sortOrder) : items;
        
        const useGrouping = !!options.groupBy;
        const viewMode = options.viewMode || 'list';
        const hasPrimaryGrouping = !!options.groupBy;
        
        if (!useGrouping) {
            // No grouping - apply view mode directly
            return this.applyViewModeTransform(sortedItems, viewMode);
        }
        
        if (options.groupBy && typeof options.groupBy === 'function') {
            // Apply grouping function
            const groups = options.groupBy(sortedItems);
            const treeData = [];
            
            // Sort group names
            const sortedGroupNames = options.sortBy && window.algorithms && window.algorithms[options.sortBy] ? 
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
                    
                    // Apply view mode within secondary group
                    const childrenData = this.applyViewModeTransform(groupItems, viewMode);
                    const secondaryNode = {
                        name: secondaryGroup,
                        item: null,
                        children: childrenData,
                        isPrimaryGroup: hasPrimaryGrouping
                    };
                    
                    primaryNode.children.push(secondaryNode);
                } else {
                    // Single-level grouping
                    const childrenData = this.applyViewModeTransform(groupItems, viewMode);
                    
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
            // No grouping function - apply view mode directly
            return this.applyViewModeTransform(sortedItems, viewMode);
        }
    }
    
    // Apply view mode transformations
    applyViewModeTransform(items, viewMode) {
        switch(viewMode) {
            case 'list':
                return items.map(item => ({
                    name: item.displayName,
                    item: item,
                    children: null
                }));
            case 'hierarchy':
                return this.buildInheritanceHierarchy(items);
            case 'variants':
                return this.buildVariantHierarchy(items);
            default:
                return items.map(item => ({
                    name: item.displayName,
                    item: item,
                    children: null
                }));
        }
    }
    
    // Build inheritance hierarchy
    buildInheritanceHierarchy(items) {
        const nodeMap = new Map();
        const roots = [];
        
        // Create nodes for all items
        items.forEach(item => {
            const node = {
                name: item.displayName,
                className: item.className,
                item: item,
                children: []
            };
            nodeMap.set(item.className, node);
        });
        
        // Build parent-child relationships
        items.forEach(item => {
            const node = nodeMap.get(item.className);
            
            if (item.baseClass) {
                const parentNode = nodeMap.get(item.baseClass);
                if (parentNode && parentNode.item) {
                    parentNode.children.push(node);
                } else {
                    roots.push(node);
                }
            } else {
                roots.push(node);
            }
        });
        
        // Clean up empty children arrays
        const cleanupTree = (nodes) => {
            nodes.forEach(node => {
                if (node.children.length === 0) {
                    node.children = null;
                } else {
                    cleanupTree(node.children);
                }
            });
        };
        
        cleanupTree(roots);
        return roots;
    }
    
    // Build variant hierarchy
    buildVariantHierarchy(items) {
        const groups = new Map();
        
        // Group items by base class (variants share the same baseClass)
        items.forEach(item => {
            const groupKey = item.baseClass || item.className;
            if (!groups.has(groupKey)) {
                groups.set(groupKey, []);
            }
            groups.get(groupKey).push(item);
        });
        
        const treeData = [];
        
        for (const [baseClassName, groupItems] of groups) {
            if (groupItems.length === 0) continue;
            
            // Sort variants: base first, then by name
            groupItems.sort((a, b) => {
                if (!a.variant && b.variant) return -1;
                if (a.variant && !b.variant) return 1;
                return a.displayName.localeCompare(b.displayName);
            });
            
            if (groupItems.length === 1) {
                // Single item - no grouping needed
                const item = groupItems[0];
                treeData.push({
                    name: item.displayName,
                    item: item,
                    children: null
                });
            } else {
                // Multiple variants - create group
                const baseItem = groupItems.find(item => !item.variant) || groupItems[0];
                const groupNode = {
                    name: baseItem.displayName,
                    item: null,
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
    
    // Convert tree data to navigation nodes
    convertToNavigationNodes(treeData, level = 0) {
        if (!treeData) return [];
        
        return treeData.map(treeNode => {
            const nodeType = treeNode.item ? NodeType.ITEM : NodeType.GROUP;
            const node = new TreeNode(nodeType, treeNode.item || { name: treeNode.name }, treeNode.name);
            node.level = level;
            
            if (treeNode.children) {
                const childNodes = this.convertToNavigationNodes(treeNode.children, level + 1);
                childNodes.forEach(child => node.addChild(child));
            }
            
            return node;
        });
    }
    
    // Render tree data using simplified logic
    renderTreeData(treeData, viewMode = 'variants') {
        if (!treeData || treeData.length === 0) {
            return '<li>No items</li>';
        }
        
        return treeData.map(node => this.renderTreeNode(node, 0, viewMode, false)).join('');
    }
    
    // Tree node renderer (based on original simpleTree.js)
    renderTreeNode(node, level, viewMode = 'variants', parentIsGroup = false) {
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
            
            // All groups should toggle when clicked, items should select when clicked
            let clickHandler = '';
            if (hasChildren && !node.item) {
                // This is a group node (has children but no item data) - make it toggle
                clickHandler = `onclick="toggleTreeGroup('${nodeId}')" style="cursor: pointer;"`;
            } else if (node.item) {
                // This is an item node - make it selectable
                clickHandler = `onclick="selectTreeItem(this)" data-item='${JSON.stringify(node.item)}'`;
            }
            
            const itemClass = node.item ? `tree-item tree-parent ${groupClass}` : `tree-item tree-base-class ${groupClass}`;
            
            html += `<li>`;
            
            // The actual item (clickable if it has data) with count on the right
            html += `<div class="${itemClass}" ${clickHandler} onmouseenter="showItemPreview && showItemPreview(event, this)" onmouseleave="hideItemPreview && hideItemPreview()">`;
            html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
            
            // Toggle button - clickable with stopPropagation to prevent row selection
            html += `<span class="tree-toggle" data-node-id="${nodeId}" onclick="event.stopPropagation(); toggleTreeGroup('${nodeId}');">${TOGGLE_ICONS.EXPANDED}</span>`;
            
            html += `<span class="group-name">${node.name}</span>`;
            
            // Always add icon container to maintain consistent row layout
            html += `<span class="item-icons-container">`;
            const previewText = node.item && node.item.category ? node.item.category.charAt(0).toUpperCase() : '?';
            const previewHidden = !window.displayOptions?.showPreviewIcon || !node.item;
            const categoryClass = node.item && node.item.category ? ` category-${node.item.category}` : '';
            html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}${categoryClass}">${previewText}</span>`;
            
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
            const shouldShowModIcon = window.displayOptions?.showModIcon || isModGroup;
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
                html += this.renderTreeNode(child, level + 1, viewMode, currentNodeIsGroup);
            });
            
            html += '</ul>';
            html += '</li>';
        } else {
            // Leaf item - no toggle needed, no count needed, simple left-aligned text
            const clickHandler = node.item ? `onclick="selectTreeItem(this)" data-item='${JSON.stringify(node.item)}'` : '';
            
            const className = node.item ? `tree-item` : `tree-item tree-base-class`;
                
            html += `<li>`;
            html += `<div class="${className}" ${clickHandler} onmouseenter="showItemPreview && showItemPreview(event, this)" onmouseleave="hideItemPreview && hideItemPreview()">`;
            html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
            
            // Only show bullet if not in flat list view mode
            if (viewMode !== 'list') {
                html += `<span class="tree-bullet">•</span>`;
            }
            
            html += `<span class="group-name">${node.name}</span>`;
            
            // Always add icon container to maintain consistent row layout
            html += `<span class="item-icons-container">`;
            const previewText = node.item && node.item.category ? node.item.category.charAt(0).toUpperCase() : '?';
            const previewHidden = !window.displayOptions?.showPreviewIcon || !node.item;
            const categoryClass = node.item && node.item.category ? ` category-${node.item.category}` : '';
            html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}${categoryClass}">${previewText}</span>`;
            
            const modText = node.item && node.item.mod ? node.item.mod.charAt(0).toUpperCase() : 'M';
            const modHidden = !window.displayOptions?.showModIcon || !node.item || !node.item.mod;
            html += `<span class="item-mod-icon${modHidden ? ' hidden' : ''}">${modText}</span>`;
            html += `</span>`;
            html += `</div>`;
            html += '</li>';
        }
        
        return html;
    }
    
    // Get current navigation state
    getNavigationState() {
        return this.navigationState;
    }
}

// Global tree managers
const treeManagers = new Map();

// Initialize tree manager for a panel
export function initializeTreeManager(panelId) {
    if (!treeManagers.has(panelId)) {
        const manager = new TreeManager(panelId);
        treeManagers.set(panelId, manager);
    }
    return treeManagers.get(panelId);
}

// Get tree manager for a panel
export function getTreeManager(panelId) {
    return treeManagers.get(panelId);
}

// Legacy compatibility functions - removed as they're no longer needed

// Enhanced selection and toggle functions
export function selectTreeItem(element) {
    const nodeId = element.dataset.nodeId;
    const panelId = findPanelId(element);
    
    if (!panelId) {
        console.warn('selectTreeItem: Could not find panel for element');
        return;
    }
    
    const manager = getTreeManager(panelId);
    if (!manager) {
        console.warn('selectTreeItem: No tree manager found for panel:', panelId);
        return;
    }
    
    const navigationState = manager.getNavigationState();
    
    // Find the node
    let targetNode = null;
    if (nodeId) {
        targetNode = TreeUtils.findNodeById(navigationState.rootNodes, nodeId);
    }
    
    // Fallback: try to find by item data
    if (!targetNode && element.dataset.item) {
        try {
            const itemData = JSON.parse(element.dataset.item);
            const allNodes = TreeUtils.getAllNodes(navigationState.rootNodes);
            targetNode = allNodes.find(node => 
                node.data && node.data.className === itemData.className
            );
        } catch (e) {
            console.warn('selectTreeItem: Could not parse item data');
        }
    }
    
    if (targetNode) {
        navigationState.setFocus(targetNode);
        if (targetNode.isSelectable) {
            navigationState.setSelection(targetNode);
        }
    }
}

export function toggleTreeGroup(nodeId) {
    // Direct DOM-based toggle for renderTreeData generated elements
    const childrenContainer = document.getElementById(nodeId);
    if (!childrenContainer) {
        console.warn('toggleTreeGroup: Could not find children container with ID:', nodeId);
        return;
    }
    
    // Find the toggle button associated with this container
    const toggleButton = document.querySelector(`[data-node-id="${nodeId}"]`);
    if (!toggleButton) {
        console.warn('toggleTreeGroup: Could not find toggle button for nodeId:', nodeId);
        return;
    }
    
    // Toggle the display state - check both inline style and computed style
    const computedStyle = window.getComputedStyle(childrenContainer);
    const isCurrentlyExpanded = childrenContainer.style.display !== 'none' && computedStyle.display !== 'none';
    
    if (isCurrentlyExpanded) {
        // Collapse
        childrenContainer.style.display = 'none';
        toggleButton.textContent = TOGGLE_ICONS.COLLAPSED;
    } else {
        // Expand
        childrenContainer.style.display = 'block';
        toggleButton.textContent = TOGGLE_ICONS.EXPANDED;
    }
    
    // Also try the navigation system approach as fallback for newer elements
    for (const [panelId, manager] of treeManagers) {
        const navigationState = manager.getNavigationState();
        const node = TreeUtils.findNodeById(navigationState.rootNodes, nodeId);
        
        if (node) {
            navigationState.toggleNodeExpansion(node);
            return;
        }
    }
}

// Panel focus management
export function clearPanelFocus(panelId) {
    const manager = getTreeManager(panelId);
    if (manager) {
        const navigationState = manager.getNavigationState();
        navigationState.setActive(false);
    }
}

export function focusFirstItem(panelId) {
    const manager = getTreeManager(panelId);
    if (manager) {
        const navigationState = manager.getNavigationState();
        navigationState.focusFirst();
    }
}

export function restoreFocusAfterViewChange(panelId) {
    const manager = getTreeManager(panelId);
    if (manager) {
        const navigationState = manager.getNavigationState();
        // Try to restore focus to previously selected item
        setTimeout(() => {
            if (!navigationState.focusedNode) {
                navigationState.focusFirst();
            }
        }, 0);
    }
}

// Initialize keyboard navigation for backwards compatibility
export function initializeKeyboardNavigation(panelId) {
    initializeTreeManager(panelId);
}

// Utility function to find panel ID from element
function findPanelId(element) {
    const treeView = element.closest('.tree-view');
    if (treeView) {
        return treeView.id || treeView.parentElement?.id;
    }
    return null;
}

// Global selection callback system
window.onTreeSelectionChanged = function(itemData, panelId) {
    if (itemData && window.selectItem) {
        // Find the element to pass to legacy selectItem function
        const panel = document.getElementById(panelId);
        if (panel) {
            const element = panel.querySelector(`[data-item*='${itemData.className}']`);
            if (element) {
                window.selectItem(element);
                return;
            }
        }
    }
    
    // Fallback: call legacy selection clearing
    if (!itemData && window.clearSelection) {
        window.clearSelection();
    }
};

// Make functions globally available
window.selectTreeItem = selectTreeItem;
window.toggleTreeGroup = toggleTreeGroup;