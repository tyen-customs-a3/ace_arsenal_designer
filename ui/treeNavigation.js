// Tree Navigation State Management
// Provides separated focus and selection state for consistent navigation behavior

import { TreeNode, NodeType, TreeUtils } from './treeNode.js';

// Tree events for clean component communication
export const TreeEvents = {
    FOCUS_CHANGED: 'tree:focus:changed',
    SELECTION_CHANGED: 'tree:selection:changed',
    NODE_EXPANDED: 'tree:node:expanded',
    NODE_COLLAPSED: 'tree:node:collapsed',
    NAVIGATION_MODE_CHANGED: 'tree:navigation:mode:changed'
};

// Navigation state manager with separated focus and selection
export class TreeNavigationState extends EventTarget {
    constructor(panelId) {
        super();
        this.panelId = panelId;
        this.rootNodes = [];
        this.focusedNode = null;        // Current keyboard focus (any navigable node)
        this.selectedNode = null;       // Currently selected item (items only)
        this.expandedNodes = new Set(); // Track expanded state
        this.isActive = false;          // Whether this panel has focus
    }
    
    // Set the tree data
    setTree(rootNodes) {
        this.rootNodes = rootNodes || [];
        
        // Initialize expanded state tracking
        this.expandedNodes.clear();
        TreeUtils.getAllNodes(this.rootNodes).forEach(node => {
            if (node.expanded) {
                this.expandedNodes.add(node.id);
            }
        });
        
        // Clear focus if current focused node no longer exists
        if (this.focusedNode && !TreeUtils.findNodeById(this.rootNodes, this.focusedNode.id)) {
            this.focusedNode = null;
        }
        
        // Clear selection if current selected node no longer exists
        if (this.selectedNode && !TreeUtils.findNodeById(this.rootNodes, this.selectedNode.id)) {
            this.clearSelection();
        }
    }
    
    // Get all currently navigable nodes (respects expansion state)
    getNavigableNodes() {
        return TreeUtils.getNavigableNodes(this.rootNodes);
    }
    
    // Set keyboard focus (separate from selection)
    setFocus(node) {
        const previousNode = this.focusedNode;
        this.focusedNode = node;
        
        this.dispatchEvent(new CustomEvent(TreeEvents.FOCUS_CHANGED, {
            detail: { node, previousNode, panelId: this.panelId }
        }));
    }
    
    // Set item selection (only for selectable items)
    setSelection(node) {
        if (node && !node.isSelectable) {
            console.warn('Attempted to select non-selectable node:', node);
            return false;
        }
        
        const previousNode = this.selectedNode;
        this.selectedNode = node;
        
        this.dispatchEvent(new CustomEvent(TreeEvents.SELECTION_CHANGED, {
            detail: { node, previousNode, panelId: this.panelId }
        }));
        
        return true;
    }
    
    // Clear selection (but keep focus)
    clearSelection() {
        if (this.selectedNode) {
            const previousNode = this.selectedNode;
            this.selectedNode = null;
            
            this.dispatchEvent(new CustomEvent(TreeEvents.SELECTION_CHANGED, {
                detail: { node: null, previousNode, panelId: this.panelId }
            }));
        }
    }
    
    // Set panel active state
    setActive(isActive) {
        this.isActive = isActive;
        
        this.dispatchEvent(new CustomEvent(TreeEvents.NAVIGATION_MODE_CHANGED, {
            detail: { isActive, panelId: this.panelId }
        }));
    }
    
    // Expand a node
    expandNode(node) {
        if (node && node.expand()) {
            this.expandedNodes.add(node.id);
            
            this.dispatchEvent(new CustomEvent(TreeEvents.NODE_EXPANDED, {
                detail: { node, panelId: this.panelId }
            }));
            
            return true;
        }
        return false;
    }
    
    // Collapse a node
    collapseNode(node) {
        if (node && node.collapse()) {
            this.expandedNodes.delete(node.id);
            
            this.dispatchEvent(new CustomEvent(TreeEvents.NODE_COLLAPSED, {
                detail: { node, panelId: this.panelId }
            }));
            
            return true;
        }
        return false;
    }
    
    // Toggle node expansion
    toggleNodeExpansion(node) {
        if (node && node.isExpandable) {
            if (node.expanded) {
                return this.collapseNode(node);
            } else {
                return this.expandNode(node);
            }
        }
        return false;
    }
    
    // Focus first navigable item
    focusFirst() {
        const navigableNodes = this.getNavigableNodes();
        if (navigableNodes.length > 0) {
            const firstNode = navigableNodes[0];
            this.setFocus(firstNode);
            
            // Immediately select the item if it's selectable, or clear selection if it's a group
            if (firstNode.isSelectable) {
                this.setSelection(firstNode);
            } else {
                this.clearSelection();
            }
            
            return true;
        }
        return false;
    }
    
    // Focus last navigable item
    focusLast() {
        const navigableNodes = this.getNavigableNodes();
        if (navigableNodes.length > 0) {
            const lastNode = navigableNodes[navigableNodes.length - 1];
            this.setFocus(lastNode);
            
            // Immediately select the item if it's selectable, or clear selection if it's a group
            if (lastNode.isSelectable) {
                this.setSelection(lastNode);
            } else {
                this.clearSelection();
            }
            
            return true;
        }
        return false;
    }
    
    // Try to restore focus to a specific item (by ID or data matching)
    restoreFocus(itemId) {
        if (!itemId) return false;
        
        const targetNode = TreeUtils.findNodeById(this.rootNodes, itemId);
        if (targetNode && targetNode.isNavigable) {
            this.setFocus(targetNode);
            
            // Immediately select the item if it's selectable, or clear selection if it's a group
            if (targetNode.isSelectable) {
                this.setSelection(targetNode);
            } else {
                this.clearSelection();
            }
            
            return true;
        }
        
        return false;
    }
    
    // Get debug info
    getDebugInfo() {
        return {
            panelId: this.panelId,
            isActive: this.isActive,
            rootNodeCount: this.rootNodes.length,
            navigableNodeCount: this.getNavigableNodes().length,
            focusedNode: this.focusedNode ? {
                id: this.focusedNode.id,
                name: this.focusedNode.name,
                type: this.focusedNode.type
            } : null,
            selectedNode: this.selectedNode ? {
                id: this.selectedNode.id,
                name: this.selectedNode.name,
                type: this.selectedNode.type
            } : null,
            expandedNodeCount: this.expandedNodes.size
        };
    }
}

// Enhanced arrow key navigation handlers
export class NavigationHandlers {
    constructor(navigationState) {
        this.state = navigationState;
    }
    
    // Handle up arrow: move focus to previous navigable node
    handleArrowUp() {
        const navigableNodes = this.state.getNavigableNodes();
        if (navigableNodes.length === 0) return false;
        
        let currentIndex = this.state.focusedNode ? 
            navigableNodes.indexOf(this.state.focusedNode) : -1;
        
        // Move to previous node (wrap to end if at beginning)
        const newIndex = currentIndex <= 0 ? navigableNodes.length - 1 : currentIndex - 1;
        const newNode = navigableNodes[newIndex];
        
        this.state.setFocus(newNode);
        
        // Immediately select the item if it's selectable, or clear selection if it's a group
        if (newNode.isSelectable) {
            this.state.setSelection(newNode);
        } else {
            this.state.clearSelection();
        }
        
        return true;
    }
    
    // Handle down arrow: move focus to next navigable node
    handleArrowDown() {
        const navigableNodes = this.state.getNavigableNodes();
        if (navigableNodes.length === 0) return false;
        
        let currentIndex = this.state.focusedNode ? 
            navigableNodes.indexOf(this.state.focusedNode) : -1;
        
        // Move to next node (wrap to beginning if at end)
        const newIndex = currentIndex >= navigableNodes.length - 1 ? 0 : currentIndex + 1;
        const newNode = navigableNodes[newIndex];
        
        this.state.setFocus(newNode);
        
        // Immediately select the item if it's selectable, or clear selection if it's a group
        if (newNode.isSelectable) {
            this.state.setSelection(newNode);
        } else {
            this.state.clearSelection();
        }
        
        return true;
    }
    
    // Handle left arrow: collapse node or move to parent
    handleArrowLeft() {
        const focused = this.state.focusedNode;
        if (!focused) return false;
        
        // If focused node is expandable and expanded, collapse it
        if (focused.isExpandable && focused.expanded) {
            this.state.collapseNode(focused);
            return true;
        }
        
        // If focused node has a parent, find the expandable parent and collapse it
        if (focused.parent) {
            let parentToCollapse = focused.parent;
            
            // Find the first expandable ancestor
            while (parentToCollapse && !parentToCollapse.isExpandable) {
                parentToCollapse = parentToCollapse.parent;
            }
            
            // If we found an expandable parent, collapse it and move focus to it
            if (parentToCollapse && parentToCollapse.isExpandable && parentToCollapse.expanded) {
                this.state.collapseNode(parentToCollapse);
                this.state.setFocus(parentToCollapse);
                this.state.clearSelection(); // Clear selection when moving to group
                return true;
            }
            
            // Fallback: just move to immediate parent and clear selection
            if (focused.parent.type === NodeType.GROUP) {
                this.state.setFocus(focused.parent);
                this.state.clearSelection();
                return true;
            }
        }
        
        return false;
    }
    
    // Handle right arrow: expand node or move to first child
    handleArrowRight() {
        const focused = this.state.focusedNode;
        if (!focused) return false;
        
        // If focused node is expandable and collapsed, expand it
        if (focused.isExpandable && !focused.expanded) {
            this.state.expandNode(focused);
            return true;
        }
        
        // If focused node is expanded and has navigable children, move to first child
        if (focused.expanded && focused.hasVisibleChildren) {
            const firstChild = focused.children.find(child => child.isNavigable);
            if (firstChild) {
                this.state.setFocus(firstChild);
                
                // Immediately select the item if it's selectable, or clear selection if it's a group
                if (firstChild.isSelectable) {
                    this.state.setSelection(firstChild);
                } else {
                    this.state.clearSelection();
                }
                
                return true;
            }
        }
        
        return false;
    }
    
    // Handle Enter: select item or toggle expansion
    handleEnter() {
        const focused = this.state.focusedNode;
        if (!focused) return false;
        
        // If focused node is selectable, select it
        if (focused.isSelectable) {
            this.state.setSelection(focused);
            return true;
        }
        
        // If focused node is expandable, toggle expansion
        if (focused.isExpandable) {
            this.state.toggleNodeExpansion(focused);
            return true;
        }
        
        return false;
    }
    
    // Handle Space: same as Enter for consistency
    handleSpace() {
        return this.handleEnter();
    }
    
    // Main keyboard event handler
    handleKeyboardEvent(event) {
        if (!this.state.isActive) return false;
        
        let handled = false;
        
        switch (event.key) {
            case 'ArrowUp':
                handled = this.handleArrowUp();
                break;
            case 'ArrowDown':
                handled = this.handleArrowDown();
                break;
            case 'ArrowLeft':
                handled = this.handleArrowLeft();
                break;
            case 'ArrowRight':
                handled = this.handleArrowRight();
                break;
            case 'Enter':
                handled = this.handleEnter();
                break;
            case ' ':
                handled = this.handleSpace();
                break;
        }
        
        if (handled) {
            event.preventDefault();
            event.stopPropagation();
        }
        
        return handled;
    }
}

// Visual feedback manager for navigation states
export class TreeVisualFeedback {
    constructor(panelId) {
        this.panelId = panelId;
        this.panel = document.getElementById(panelId);
    }
    
    // Update keyboard focus visual feedback
    updateFocusVisuals(focusedNode, previousNode) {
        // Remove previous focus styling
        if (previousNode) {
            const previousElement = this.findElementForNode(previousNode);
            if (previousElement) {
                previousElement.classList.remove('keyboard-focused');
            }
        }
        
        // Add focus styling to new node
        if (focusedNode) {
            const element = this.findElementForNode(focusedNode);
            if (element) {
                element.classList.add('keyboard-focused');
                element.scrollIntoView({ behavior: 'smooth', block: 'nearest' });
            }
        }
    }
    
    // Update selection visual feedback
    updateSelectionVisuals(selectedNode, previousNode) {
        // Remove previous selection styling
        this.panel.querySelectorAll('.tree-item.selected').forEach(el => {
            el.classList.remove('selected');
        });
        
        // Add selection styling to new node
        if (selectedNode) {
            const element = this.findElementForNode(selectedNode);
            if (element) {
                element.classList.add('selected');
            }
        }
    }
    
    // Update panel active state visual feedback
    updatePanelActiveState(isActive) {
        if (isActive) {
            this.panel.classList.add('panel-focused');
        } else {
            this.panel.classList.remove('panel-focused');
        }
    }
    
    // Update expansion visual feedback
    updateExpansionVisuals(node, expanded) {
        const element = this.findElementForNode(node);
        if (!element) return;
        
        const parentLi = element.closest('li');
        if (!parentLi) return;
        
        const childrenUl = parentLi.querySelector('ul.tree-children');
        const toggle = parentLi.querySelector('.tree-toggle');
        
        if (childrenUl && toggle) {
            if (expanded) {
                childrenUl.style.display = 'block';
                toggle.textContent = '▼';
            } else {
                childrenUl.style.display = 'none';
                toggle.textContent = '▶';
            }
        }
    }
    
    // Find DOM element for a tree node
    findElementForNode(node) {
        if (!node || !this.panel) return null;
        
        // Look for element with matching node ID
        let element = this.panel.querySelector(`[data-node-id="${node.id}"]`);
        
        if (!element && node.type === NodeType.ITEM && node.data) {
            // Fallback: look for element with matching item data
            const itemElements = this.panel.querySelectorAll('[data-item]');
            for (const el of itemElements) {
                try {
                    const itemData = JSON.parse(el.dataset.item);
                    if (itemData.className === node.data.className) {
                        element = el;
                        break;
                    }
                } catch (e) {
                    // Ignore parsing errors
                }
            }
        }
        
        // Final fallback: look for elements containing the node name
        if (!element) {
            const allItems = this.panel.querySelectorAll('.tree-item');
            for (const el of allItems) {
                const nameSpan = el.querySelector('.group-name');
                if (nameSpan && nameSpan.textContent.trim() === node.name) {
                    element = el;
                    break;
                }
            }
        }
        
        return element;
    }
}