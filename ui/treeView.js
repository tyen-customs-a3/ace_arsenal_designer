// Enhanced Tree View Implementation
// Uses the new unified architecture for consistent navigation and construction

import { TreeNode, NodeType, TreeUtils } from './treeNode.js';
import { TreeNavigationState, NavigationHandlers, TreeVisualFeedback, TreeEvents } from './treeNavigation.js';
import { TOGGLE_ICONS } from './constants.js';
import { actions as StateActions, subscribe as StateSubscribe, getState } from '../js/StateManager.js';
import * as algorithms from '../algorithms.js';

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
        const domNodeId = `${this.panelId}__${nodeId}`;
        const isPrimaryGroup = node.type === NodeType.GROUP && node.level === 0;
        const groupClass = isPrimaryGroup ? 'tree-group-header' : '';
        
        // Click handlers - all groups should toggle, selectable items should select
        let clickHandler = '';
        if (hasChildren && !node.isSelectable) {
            // This is a group node - make it toggle
            clickHandler = `onclick="window.toggleTreeGroup('${domNodeId}')" style="cursor: pointer;"`;
        } else if (node.isSelectable) {
            // This is a selectable item - make it selectable
            clickHandler = `onclick="window.selectTreeItem(this)" data-item='${JSON.stringify(node.data)}' data-node-id="${this.panelId}__${node.id}"`;
        }
        
        const itemClass = node.isSelectable ? 
            `tree-item tree-parent ${groupClass}` : 
            `tree-item tree-base-class ${groupClass}`;
        
        let html = '<li>';
        
        // The item element
        html += `<div class="${itemClass}" ${clickHandler} onmouseenter="window.showItemPreview && window.showItemPreview(event, this)" onmouseleave="window.hideItemPreview && window.hideItemPreview()">`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        
        // Toggle button - clickable with stopPropagation to prevent row selection
        html += `<span class="tree-toggle" data-node-id="${domNodeId}" onclick="event.stopPropagation(); window.toggleTreeGroup('${domNodeId}');">${TOGGLE_ICONS.EXPANDED}</span>`;
        
        html += `<span class="group-name">${node.name}</span>`;
        
        // Icons
        html += this.renderIcons(node, isPrimaryGroup);
        html += '</div>';
        
        // Children container
        html += `<ul class="tree-children" id="${domNodeId}">`;
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
            `onclick="window.selectTreeItem(this)" data-item='${JSON.stringify(node.data)}' data-node-id="${this.panelId}__item_${(node.data && node.data.class_name) || ''}"` : '';
        
        const className = node.isSelectable ? 'tree-item' : 'tree-item tree-base-class';
        
        let html = '<li>';
        html += `<div class="${className}" ${clickHandler} onmouseenter="window.showItemPreview && window.showItemPreview(event, this)" onmouseleave="window.hideItemPreview && window.hideItemPreview()">`;
        html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
        
        // Bullet points removed - always list view
        
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
        const previewHidden = !getState().displayOptions?.showPreviewIcon || !node.data;
        const categoryClass = node.data && node.data.category ? ` category-${node.data.category}` : '';
        html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}${categoryClass}">${previewText}</span>`;
        
        // Mod icon
        let modText = 'M';
        if (node.data && node.data.mod) {
            modText = node.data.mod.charAt(0).toUpperCase();
        } else if (isModGroup) {
            modText = node.name.charAt(0).toUpperCase();
        }
        
        const shouldShowModIcon = getState().displayOptions?.showModIcon || isModGroup;
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
        
        // Inject a persistent 'None' element at the top for every category
        const stateSnapshot = getState();
        const category = (this.panelId === 'rightTreeView') ? stateSnapshot.selectedRightCategory : stateSnapshot.selectedCategory;
        const noneItem = {
            class_name: `__none_${category}__`,
            displayName: 'None',
            category,
            mod: 'System',
            scope: 2,
            properties: {}
        };

        const baseItems = Array.isArray(items) ? items.filter(it => !(typeof it?.class_name === 'string' && it.class_name.startsWith('__none_'))) : [];

        // Build tree properly using the corrected logic
        const treeData = this.buildCorrectTreeData(baseItems, options);
        // Prepend None as a standalone leaf at top level
        treeData.unshift({ name: noneItem.displayName, item: noneItem, children: [], level: 0 });
        
        // Convert to new node system for navigation
        const rootNodes = this.convertToNavigationNodes(treeData);
        
        // Set tree in navigation state
        this.navigationState.setTree(rootNodes);
        
        // Render using corrected renderer - always apply correct spacing
        const spacing = getState().displayOptions?.spacing || 'general';
        const className = `tree-view spacing-${spacing}`;
        const html = `<ul class="${className}">${this.renderTreeData(treeData)}</ul>`;
        
        const endTime = performance.now();
        if (document.getElementById('timing')) {
            document.getElementById('timing').textContent = `${(endTime - startTime).toFixed(2)}ms`;
        }
        
        // Update DOM
        const container = document.getElementById(this.panelId);
        if (container) {
            // Store scroll position before updating
            const scrollContainer = container.closest('.left-content') || container.parentElement;
            const scrollPosition = scrollContainer ? scrollContainer.scrollTop : 0;
            
            container.innerHTML = html;
            
            // Restore scroll position after DOM update
            if (scrollContainer && scrollPosition > 0) {
                setTimeout(() => {
                    scrollContainer.scrollTop = scrollPosition;
                }, 0);
            }
            
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
        console.log('🌳 TreeView buildCorrectTreeData called with options:', options);
        
        // Apply sorting first if specified
        const sortedItems = options.sortBy && algorithms && algorithms[options.sortBy] ?
            algorithms[options.sortBy](items, options.sortOrder) : items;
        
        // Check if items are already hierarchically structured (from rendering.js)
        const isAlreadyHierarchical = sortedItems.length > 0 && sortedItems.some(item =>
            item.hasOwnProperty('children') && Array.isArray(item.children)
        );
        
        // If items are already hierarchical, return them directly (no further transformation needed)
        if (isAlreadyHierarchical) {
            console.log('🌲 Items already hierarchical, returning as-is');
            // Ensure level property is propagated
            function propagateLevels(nodes, parentLevel = 0) {
                if (!Array.isArray(nodes)) return;
                nodes.forEach(node => {
                    node.level = typeof node.level === 'number' ? node.level : parentLevel;
                    if (node.children && node.children.length > 0) {
                        propagateLevels(node.children, node.level + 1);
                    }
                });
            }
            propagateLevels(sortedItems, 0);
            return sortedItems;
        }
        
        const useGrouping = !!options.groupBy;
        const hasPrimaryGrouping = !!options.groupBy;

        if (!useGrouping) {
            // No grouping - return flat list
            return sortedItems.map(item => ({
                name: item.displayName,
                item: item,
                children: [],
                level: 0
            }));
        }

        if (options.groupBy && typeof options.groupBy === 'function') {
            // Apply grouping function
            const groups = options.groupBy(sortedItems);
            const treeData = [];

            // Sort group names
            const sortedGroupNames = options.sortBy && algorithms && algorithms[options.sortBy] ?
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
                            isPrimaryGroup: hasPrimaryGrouping,
                            level: 0
                        };
                        treeData.push(primaryNode);
                    }

                    // Apply list view within secondary group
                    const childrenData = groupItems.map(item => ({
                        name: item.displayName,
                        item: item,
                        children: [],
                        level: 1
                    }));
                    const secondaryNode = {
                        name: secondaryGroup,
                        item: null,
                        children: childrenData,
                        isPrimaryGroup: hasPrimaryGrouping,
                        level: 1
                    };

                    primaryNode.children.push(secondaryNode);
                } else {
                    // Single-level grouping
                    const childrenData = groupItems.map(item => ({
                        name: item.displayName,
                        item: item,
                        children: [],
                        level: 1
                    }));

                    // Always render as expandable group since we always use list view
                    const groupNode = {
                        name: groupName,
                        item: null,
                        children: childrenData,
                        isPrimaryGroup: hasPrimaryGrouping,
                        level: 0
                    };
                    treeData.push(groupNode);
                }
            });

            return treeData;
        } else {
            // No grouping function - return flat list
            return sortedItems.map(item => ({
                name: item.displayName,
                item: item,
                children: [],
                level: 0
            }));
        }
    }
    

    
    // Advanced functionality removed
    
    // Convert tree data to navigation nodes
    convertToNavigationNodes(treeData, level = 0) {
        if (!treeData) return [];
        
        return treeData.map(treeNode => {
            const nodeType = treeNode.item ? NodeType.ITEM : NodeType.GROUP;
            const node = new TreeNode(nodeType, treeNode.item || { name: treeNode.name });
            node.level = treeNode.level;
            
            if (treeNode.children) {
                const childNodes = this.convertToNavigationNodes(treeNode.children, node.level + 1);
                childNodes.forEach(child => node.addChild(child));
            }
            
            return node;
        });
    }
    
    // Render tree data using simplified logic
    renderTreeData(treeData) {
        if (!treeData || treeData.length === 0) {
            return '<li>No items</li>';
        }

        return treeData.map(node => this.renderTreeNode(node, 0, false)).join('');
    }

    renderTreeNode(node, _level, parentIsGroup = false) {
        const hasChildren = node.children && node.children.length > 0;
        // Use node.level directly for indentation
        const indent = (node.level || 0) * 20; // 20px indent per level

        let html = '';

        if (hasChildren) {
            const nodeId = `tree_${node.name.replace(/\s+/g, '_').replace(/[^\w]/g, '')}`;
            const domNodeId = `${this.panelId}__${nodeId}`;
            const isPrimaryGroupHeader = node.isPrimaryGroup && !node.item && hasChildren;
            const groupClass = isPrimaryGroupHeader ? 'tree-group-header' : '';

            let clickHandler = '';
            if (hasChildren && !node.item) {
                clickHandler = `onclick=\"window.toggleTreeGroup('${domNodeId}')\" style=\"cursor: pointer;\"`;
            } else if (node.item) {
                clickHandler = `onclick="window.selectTreeItem(this)" data-item='${JSON.stringify(node.item)}'`;
            }

            const itemClass = node.item ? `tree-item tree-parent ${groupClass}` : `tree-item tree-base-class ${groupClass}`;

            html += `<li>`;
            html += `<div class="${itemClass}" ${clickHandler} onmouseenter="showItemPreview && showItemPreview(event, this)" onmouseleave="hideItemPreview && hideItemPreview()">`;
            html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
            html += `<span class=\"tree-toggle\" data-node-id=\"${domNodeId}\" onclick=\"event.stopPropagation(); window.toggleTreeGroup('${domNodeId}');\">${TOGGLE_ICONS.EXPANDED}</span>`;
            html += `<span class="group-name">${node.name}</span>`;
            html += `<span class="item-icons-container">`;
            const previewText = node.item && node.item.category ? node.item.category.charAt(0).toUpperCase() : '?';
            const previewHidden = !getState().displayOptions?.showPreviewIcon || !node.item;
            const categoryClass = node.item && node.item.category ? ` category-${node.item.category}` : '';
            html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}${categoryClass}">${previewText}</span>`;
            let modText = 'M';
            if (node.item && node.item.mod) {
                modText = node.item.mod.charAt(0).toUpperCase();
            } else if (!node.item && hasChildren) {
                const isModGroup = window.document && window.document.getElementById('groupByMod')?.checked;
                if (isModGroup) {
                    modText = node.name.charAt(0).toUpperCase();
                }
            }
            const isModGroup = !node.item && hasChildren && window.document && window.document.getElementById('groupByMod')?.checked;
            const shouldShowModIcon = getState().displayOptions?.showModIcon || isModGroup;
            const modHidden = !shouldShowModIcon || (!node.item && !isModGroup) || (node.item && !node.item.mod && !isModGroup);
            html += `<span class="item-mod-icon${modHidden ? ' hidden' : ''}">${modText}</span>`;
            html += `</span>`;
            html += `</div>`;
            html += `<ul class=\"tree-children\" id=\"${domNodeId}\">`;
            node.children.forEach(child => {
                html += this.renderTreeNode(child, child.level, !node.item && hasChildren);
            });
            html += '</ul>';
            html += '</li>';
        } else {
            const clickHandler = node.item ? `onclick=\"window.selectTreeItem(this)\" data-item='${JSON.stringify(node.item)}' data-node-id=\"${this.panelId}__item_${node.item.class_name || ''}\"` : '';
            const className = node.item ? `tree-item` : `tree-item tree-base-class`;
            html += `<li>`;
            html += `<div class="${className}" ${clickHandler} onmouseenter="showItemPreview && showItemPreview(event, this)" onmouseleave="hideItemPreview && hideItemPreview()">`;
            html += `<span class="tree-indent" style="width: ${indent}px;"></span>`;
            // Bullet points removed - always list view
            html += `<span class="group-name">${node.name}</span>`;
            html += `<span class="item-icons-container">`;
            const previewText = node.item && node.item.category ? node.item.category.charAt(0).toUpperCase() : '?';
            const previewHidden = !getState().displayOptions?.showPreviewIcon || !node.item;
            const categoryClass = node.item && node.item.category ? ` category-${node.item.category}` : '';
            html += `<span class="item-preview-icon${previewHidden ? ' hidden' : ''}${categoryClass}">${previewText}</span>`;
            const modText = node.item && node.item.mod ? node.item.mod.charAt(0).toUpperCase() : 'M';
            const modHidden = !getState().displayOptions?.showModIcon || !node.item || !node.item.mod;
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

// Enhanced selection and toggle functions
export function selectTreeItem(element) {
    // Extract item data directly from the clicked element
    if (!element.dataset.item) {
        console.warn('selectTreeItem: Element has no item data');
        return;
    }
    
    let itemData;
    try {
        itemData = JSON.parse(element.dataset.item);
    } catch (e) {
        console.warn('selectTreeItem: Could not parse item data', e);
        return;
    }
    
    // Determine panel and route action accordingly
    const panelId = findPanelId(element);
    if (panelId === 'rightTreeView' && typeof window.equipRightPanelItem === 'function') {
        // Equip/unequip flow for right panel; do not change main selection
        window.equipRightPanelItem(itemData);
        return;
    }
    // Left panel (or unknown) selects the item
    StateActions.setSelectedItem(itemData);
    
    // Also update the navigation system to sync focus/selection
    const panelId2 = findPanelId(element);
    if (panelId2) {
        const manager = getTreeManager(panelId);
        if (manager) {
            const navigationState = manager.getNavigationState();
            navigationState.setActive(true);
            
            // Find the corresponding navigation node by matching the clicked element
            const allNodes = navigationState.getNavigableNodes();
            
            const matchingNode = allNodes.find(node => {
                // Try to match by item data
                if (node.data && node.data.class_name === itemData.class_name) {
                    return true;
                }
                return false;
            });
            
            if (matchingNode) {
                navigationState.setFocus(matchingNode);
                navigationState.setSelection(matchingNode);
            }
        }
    }
}

export function toggleTreeGroup(nodeId) {
    // Toggle tree group expansion/collapse
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
    
    // Find the corresponding TreeNode and update its expanded state
    const panelId = findPanelIdFromContainer(childrenContainer);
    if (panelId) {
        const manager = getTreeManager(panelId);
        if (manager) {
            const navigationState = manager.getNavigationState();
            const allNodes = TreeUtils.getAllNodes(navigationState.rootNodes);
            
            // Find the node that corresponds to this nodeId
            // NodeId format is "tree_" + sanitized name, so we need to match it
            const correspondingNode = allNodes.find(node => {
                const expectedNodeId = `tree_${node.name.replace(/\s+/g, '_').replace(/[^\w]/g, '')}`;
                return nodeId.endsWith(expectedNodeId);
            });
            
            if (correspondingNode) {
                // Update the TreeNode's expanded state to match the UI
                correspondingNode.expanded = !isCurrentlyExpanded;
                console.log(`Updated TreeNode ${correspondingNode.name} expanded state to:`, correspondingNode.expanded);
            }
        }
    }
    
    if (isCurrentlyExpanded) {
        // Collapse
        childrenContainer.style.display = 'none';
        toggleButton.textContent = TOGGLE_ICONS.COLLAPSED;
    } else {
        // Expand
        childrenContainer.style.display = 'block';
        toggleButton.textContent = TOGGLE_ICONS.EXPANDED;
    }
}

// Removed legacy panel focus helpers (managed internally by navigation state)


// Utility function to find panel ID from element
function findPanelId(element) {
    const treeView = element.closest('.tree-view');
    if (treeView) {
        return treeView.id || treeView.parentElement?.id;
    }
    return null;
}

// Utility function to find panel ID from container
function findPanelIdFromContainer(container) {
    const treeView = container.closest('.tree-view');
    if (treeView) {
        return treeView.id || treeView.parentElement?.id;
    }
    return null;
}

// Simplified selection callback system
window.onTreeSelectionChanged = function(itemData, panelId) {
    // Left panel drives main selection; right panel equips
    if (panelId === 'rightTreeView') {
        if (itemData && typeof window.equipRightPanelItem === 'function') {
            window.equipRightPanelItem(itemData);
        }
        return;
    }
    // Default: update main selection
    StateActions.setSelectedItem(itemData || null);
};

// Reactively update visual selection when selectedItem changes
StateSubscribe('selectedItem', (item) => {
    // Only update selection styling in the left panel
    const left = document.getElementById('leftTreeView');
    if (!left) return;
    left.querySelectorAll('.tree-item').forEach(el => el.classList.remove('selected'));
    left.querySelectorAll('.tree-parent').forEach(el => el.classList.remove('selected'));
    if (!item) return;
    const el = left.querySelector(`[data-node-id="leftTreeView__item_${item.class_name}"]`);
    if (el) {
        el.classList.add('selected');
        // Scroll selected item into view within the list container
        try {
            el.scrollIntoView({ behavior: 'smooth', block: 'nearest', inline: 'nearest' });
        } catch (_) {
            el.scrollIntoView(true);
        }
    }
});


// Make functions globally available
window.selectTreeItem = selectTreeItem;
window.toggleTreeGroup = toggleTreeGroup;
