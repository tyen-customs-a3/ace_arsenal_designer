// Unified Tree Node System
// Provides consistent node types and behaviors for tree construction and navigation

// Node types with clear responsibilities
export const NodeType = {
    ITEM: 'item',           // Selectable leaf items (weapons, attachments, etc.)
    GROUP: 'group',         // Expandable containers (mod groups, caliber groups, etc.)
    CATEGORY: 'category'    // Top-level categories (weapons, handguns, etc.)
};

// Generate unique node ID for consistent identification
function generateNodeId(data, type) {
    if (type === NodeType.ITEM && data.className) {
        return `item_${data.className}`;
    } else if (type === NodeType.GROUP && data.name) {
        return `group_${data.name.replace(/\s+/g, '_').replace(/[^\w]/g, '')}`;
    } else if (type === NodeType.CATEGORY && data.name) {
        return `category_${data.name}`;
    }
    // Fallback for complex data
    return `node_${Math.random().toString(36).substr(2, 9)}`;
}

// Unified tree node class
export class TreeNode {
    constructor(type, data, name = null) {
        this.type = type;
        this.data = data;
        this.name = name || this.extractName(data, type);
        this.id = generateNodeId(data, type);
        this.children = [];
        this.parent = null;
        this.expanded = true;
        this.level = 0;
        this.visible = true;
    }
    
    // Extract display name from data based on node type
    extractName(data, type) {
        if (type === NodeType.ITEM) {
            return data.displayName || data.name || data.className || 'Unknown Item';
        } else if (type === NodeType.GROUP) {
            return data.name || 'Unknown Group';
        } else if (type === NodeType.CATEGORY) {
            return data.name || 'Unknown Category';
        }
        return 'Unknown Node';
    }
    
    // Navigation properties
    get isNavigable() { 
        return this.visible; 
    }
    
    get isSelectable() { 
        return this.type === NodeType.ITEM && this.visible; 
    }
    
    get isExpandable() { 
        return this.children.length > 0 && this.visible; 
    }
    
    get hasVisibleChildren() {
        return this.children.some(child => child.visible);
    }
    
    // Tree manipulation methods
    addChild(childNode) {
        childNode.parent = this;
        childNode.level = this.level + 1;
        this.children.push(childNode);
        return childNode;
    }
    
    removeChild(childNode) {
        const index = this.children.indexOf(childNode);
        if (index !== -1) {
            childNode.parent = null;
            this.children.splice(index, 1);
        }
    }
    
    // Find node by ID in this subtree
    findById(id) {
        if (this.id === id) return this;
        
        for (const child of this.children) {
            const found = child.findById(id);
            if (found) return found;
        }
        
        return null;
    }
    
    // Get all navigable descendants (visible nodes in tree order)
    getNavigableDescendants() {
        const result = [];
        
        if (this.isNavigable) {
            result.push(this);
        }
        
        // Only traverse children if this node is expanded
        if (this.expanded) {
            for (const child of this.children) {
                result.push(...child.getNavigableDescendants());
            }
        }
        
        return result;
    }
    
    // Check if this node should be navigable based on ancestor expansion state
    isNavigableInContext() {
        // Check if any ancestor is collapsed
        let currentParent = this.parent;
        while (currentParent) {
            if (currentParent.isExpandable && !currentParent.expanded) {
                return false; // An ancestor is collapsed, so this node is not navigable
            }
            currentParent = currentParent.parent;
        }
        return this.isNavigable;
    }
    
    // Get next navigable sibling
    getNextSibling() {
        if (!this.parent) return null;
        
        const siblings = this.parent.children;
        const currentIndex = siblings.indexOf(this);
        
        for (let i = currentIndex + 1; i < siblings.length; i++) {
            if (siblings[i].isNavigable) {
                return siblings[i];
            }
        }
        
        return null;
    }
    
    // Get previous navigable sibling
    getPreviousSibling() {
        if (!this.parent) return null;
        
        const siblings = this.parent.children;
        const currentIndex = siblings.indexOf(this);
        
        for (let i = currentIndex - 1; i >= 0; i--) {
            if (siblings[i].isNavigable) {
                return siblings[i];
            }
        }
        
        return null;
    }
    
    // Update level for this node and all descendants
    updateLevels(newLevel = 0) {
        this.level = newLevel;
        this.children.forEach(child => child.updateLevels(newLevel + 1));
    }
    
    // Toggle expansion state
    toggleExpansion() {
        if (this.isExpandable) {
            this.expanded = !this.expanded;
            return true;
        }
        return false;
    }
    
    // Expand this node
    expand() {
        if (this.isExpandable) {
            this.expanded = true;
            return true;
        }
        return false;
    }
    
    // Collapse this node
    collapse() {
        if (this.isExpandable) {
            this.expanded = false;
            return true;
        }
        return false;
    }
    
    // Get item count for this subtree (for group headers)
    getItemCount() {
        let count = 0;
        
        if (this.type === NodeType.ITEM) {
            count = 1;
        }
        
        for (const child of this.children) {
            count += child.getItemCount();
        }
        
        return count;
    }
    
    // Create a JSON representation for debugging
    toJSON() {
        return {
            id: this.id,
            type: this.type,
            name: this.name,
            level: this.level,
            expanded: this.expanded,
            visible: this.visible,
            isNavigable: this.isNavigable,
            isSelectable: this.isSelectable,
            isExpandable: this.isExpandable,
            childCount: this.children.length,
            children: this.children.map(child => child.toJSON())
        };
    }
    
    // Debug string representation
    toString() {
        const indent = '  '.repeat(this.level);
        const toggle = this.isExpandable ? (this.expanded ? '▼' : '▶') : '•';
        const type = this.type.toUpperCase().charAt(0);
        return `${indent}${toggle} [${type}] ${this.name} (${this.children.length})`;
    }
}

// Tree utility functions
export class TreeUtils {
    // Get all nodes in tree order (depth-first traversal)
    static getAllNodes(rootNodes) {
        const result = [];
        
        for (const root of rootNodes) {
            result.push(...root.getNavigableDescendants());
        }
        
        return result;
    }
    
    // Get all navigable nodes (respecting expansion state)
    static getNavigableNodes(rootNodes) {
        return this.getAllNodes(rootNodes).filter(node => node.isNavigableInContext());
    }
    
    // Get all selectable nodes
    static getSelectableNodes(rootNodes) {
        return this.getAllNodes(rootNodes).filter(node => node.isSelectable);
    }
    
    // Find node by ID across multiple root nodes
    static findNodeById(rootNodes, id) {
        for (const root of rootNodes) {
            const found = root.findById(id);
            if (found) return found;
        }
        return null;
    }
    
    // Print tree structure for debugging
    static printTree(rootNodes, title = 'Tree Structure') {
        console.group(title);
        for (const root of rootNodes) {
            console.log(root.toString());
            this.printSubtree(root, 1);
        }
        console.groupEnd();
    }
    
    static printSubtree(node, maxDepth = 3) {
        if (node.level >= maxDepth) return;
        
        for (const child of node.children) {
            console.log(child.toString());
            this.printSubtree(child, maxDepth);
        }
    }
}