// Inheritance and hierarchy-based algorithms

export function groupByInheritance(items) {
    const groups = {};
    
    items.forEach(item => {
        if (item.baseClass) {
            // Use the immediate base class as the group
            const groupName = `${item.baseClass} Family`;
            if (!groups[groupName]) groups[groupName] = [];
            groups[groupName].push(item);
        } else {
            // Items without inheritance go to their own group
            const groupName = 'Base Classes';
            if (!groups[groupName]) groups[groupName] = [];
            groups[groupName].push(item);
        }
    });
    
    // Sort items within each group by inheritance depth, then by name
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => {
            const depthA = a.inheritance ? a.inheritance.length : 0;
            const depthB = b.inheritance ? b.inheritance.length : 0;
            
            if (depthA !== depthB) return depthA - depthB;
            return a.displayName.localeCompare(b.displayName);
        });
    });
    
    return groups;
}


export function groupByClassHierarchy(items) {
    const groups = {};
    
    items.forEach(item => {
        let groupName;
        
        if (item.baseClass) {
            // Group by the immediate parent class
            groupName = item.baseClass;
        } else {
            // Root level items
            groupName = item.className || 'Unknown';
        }
        
        if (!groups[groupName]) groups[groupName] = [];
        groups[groupName].push(item);
    });
    
    // Create nested structure for variants
    const nestedGroups = {};
    
    Object.keys(groups).forEach(groupName => {
        const groupItems = groups[groupName];
        const baseItems = groupItems.filter(item => !item.variant);
        const variantItems = groupItems.filter(item => item.variant);
        
        if (baseItems.length > 0) {
            nestedGroups[groupName] = baseItems;
            
            // Add variants as subgroups
            baseItems.forEach(baseItem => {
                const itemVariants = variantItems.filter(variant => 
                    variant.baseClass === baseItem.className || 
                    variant.inheritance.includes(baseItem.className)
                );
                
                if (itemVariants.length > 0) {
                    const variantGroupName = `${groupName} → ${baseItem.displayName} Variants`;
                    nestedGroups[variantGroupName] = itemVariants.sort((a, b) => 
                        a.displayName.localeCompare(b.displayName)
                    );
                }
            });
        } else {
            // All items are variants, group them normally
            nestedGroups[groupName] = variantItems.sort((a, b) => 
                a.displayName.localeCompare(b.displayName)
            );
        }
    });
    
    return nestedGroups;
}

export function groupByVariants(items) {
    const groups = {};
    
    items.forEach(item => {
        if (item.variant) {
            // Group variants together
            const baseName = item.displayName.split(' (')[0]; // Remove variant part
            const groupName = `${baseName} Variants`;
            
            if (!groups[groupName]) groups[groupName] = [];
            groups[groupName].push(item);
        } else {
            // Base items get their own groups
            const groupName = 'Base Items';
            if (!groups[groupName]) groups[groupName] = [];
            groups[groupName].push(item);
        }
    });
    
    // Sort variants by name within each group
    Object.keys(groups).forEach(key => {
        groups[key].sort((a, b) => {
            if (a.variant && b.variant) {
                return a.variant.localeCompare(b.variant);
            }
            return a.displayName.localeCompare(b.displayName);
        });
    });
    
    return groups;
}

export function groupByInheritanceTree(items) {
    // Build a true tree structure for inheritance
    const treeStructure = buildInheritanceTreeStructure(items);
    return treeStructure;
}

export function buildInheritanceTreeStructure(items) {
    const tree = {};
    const nodeMap = new Map();
    
    // First pass: create all nodes
    items.forEach(item => {
        const path = item.inheritance || [];
        let currentLevel = tree;
        let fullPath = '';
        
        // Build the path through the inheritance chain
        path.forEach((className, index) => {
            fullPath += (fullPath ? ' → ' : '') + className;
            
            if (!currentLevel[className]) {
                currentLevel[className] = {
                    _items: [],
                    _children: {},
                    _isExpanded: false,
                    _depth: index,
                    _fullPath: fullPath,
                    _id: `inherit_${className}_${index}`
                };
            }
            
            currentLevel = currentLevel[className]._children;
        });
        
        // Add the item to its final inheritance level
        const finalLevel = path.length > 0 ? 
            getNestedObject(tree, path) : 
            (tree['_root'] = tree['_root'] || { _items: [], _children: {}, _isExpanded: true, _depth: 0, _fullPath: 'Root Classes', _id: 'root' });
        
        if (finalLevel && finalLevel._items) {
            finalLevel._items.push(item);
        }
    });
    
    // Sort items within each level
    sortTreeItems(tree);
    
    return tree;
}

function getNestedObject(obj, path) {
    let current = obj;
    for (const key of path) {
        if (current[key] && current[key]._children) {
            current = current[key];
        } else {
            return null;
        }
    }
    return current;
}

function sortTreeItems(treeNode) {
    if (typeof treeNode !== 'object') return;
    
    Object.keys(treeNode).forEach(key => {
        const node = treeNode[key];
        if (node._items) {
            node._items.sort((a, b) => {
                // Base classes first, then variants, then by name
                const aIsBase = !a.variant;
                const bIsBase = !b.variant;
                
                if (aIsBase && !bIsBase) return -1;
                if (!aIsBase && bIsBase) return 1;
                
                return a.displayName.localeCompare(b.displayName);
            });
        }
        
        if (node._children) {
            sortTreeItems(node._children);
        }
    });
}

export function toggleTreeNode(nodeId) {
    // This will be implemented in the UI to handle expand/collapse
    const treeData = window.currentInheritanceTree;
    if (treeData) {
        const node = findNodeById(treeData, nodeId);
        if (node) {
            node._isExpanded = !node._isExpanded;
            return true;
        }
    }
    return false;
}

function findNodeById(treeNode, targetId) {
    if (typeof treeNode !== 'object') return null;
    
    for (const key of Object.keys(treeNode)) {
        const node = treeNode[key];
        if (node._id === targetId) {
            return node;
        }
        
        if (node._children) {
            const found = findNodeById(node._children, targetId);
            if (found) return found;
        }
    }
    
    return null;
}

export function expandAllTreeNodes(treeNode) {
    if (typeof treeNode !== 'object') return;
    
    Object.keys(treeNode).forEach(key => {
        const node = treeNode[key];
        if (node._isExpanded !== undefined) {
            node._isExpanded = true;
        }
        
        if (node._children) {
            expandAllTreeNodes(node._children);
        }
    });
}

export function collapseAllTreeNodes(treeNode) {
    if (typeof treeNode !== 'object') return;
    
    Object.keys(treeNode).forEach(key => {
        const node = treeNode[key];
        if (node._isExpanded !== undefined) {
            node._isExpanded = false;
        }
        
        if (node._children) {
            collapseAllTreeNodes(node._children);
        }
    });
}