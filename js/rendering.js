// Rendering Management
// Handles tree view rendering and search functionality

import { 
    initializeTreeManager,
    getTreeManager
} from '../ui/simpleTreeV2.js';

export const Renderer = {
    init() {
        // Search functionality
        document.getElementById('leftSearch').addEventListener('input', (e) => {
            const searchTerm = e.target.value.toLowerCase();
            import('./filters.js').then(({ FilterManager }) => {
                const baseItems = FilterManager.filterItemsByCategory(Arsenal.selectedCategory);
                const items = baseItems.filter(item => item.displayName.toLowerCase().includes(searchTerm));
                this.renderTreeView(items, 'leftTreeView');
            });
        });

        document.getElementById('rightSearch').addEventListener('input', (e) => {
            const searchTerm = e.target.value.toLowerCase();
            import('./filters.js').then(({ FilterManager }) => {
                const items = FilterManager.filterItemsByCategory(Arsenal.selectedRightCategory)
                    .filter(item => item.displayName.toLowerCase().includes(searchTerm));
                this.renderTreeView(items, 'rightTreeView', false);
            });
        });
    },

    // Enhanced tree view rendering with new architecture
    renderTreeView(items, containerId, useGrouping = true) {
        const container = document.getElementById(containerId);
        if (!container) return;

        // Get or create tree manager
        let treeManager = getTreeManager(containerId);
        if (!treeManager) {
            treeManager = initializeTreeManager(containerId);
        }

        // Get current UI state
        const viewMode = document.querySelector('input[name="viewMode"]:checked')?.value || 'hierarchy';
        const sortMethod = document.getElementById('sortingSelect').value;
        const sortOrder = Arsenal.currentSortOrder;
        const primaryGrouping = document.querySelector('input[name="groupByOption"]:checked')?.value || 'none';

        // Determine grouping function
        let groupingFunction = null;
        if (primaryGrouping !== 'none' && algorithms[primaryGrouping]) {
            groupingFunction = algorithms[primaryGrouping];
        }

        // Determine if we should use grouping
        if (primaryGrouping !== 'none') {
            useGrouping = true;
        } else if (viewMode === 'variants' || viewMode === 'hierarchy') {
            useGrouping = true;
            groupingFunction = null; // Let view mode handle organization
        } else {
            useGrouping = false;
        }

        // Render tree using new system
        treeManager.renderTree(items, {
            groupBy: useGrouping ? groupingFunction : null,
            viewMode: viewMode,
            sortBy: sortMethod,
            sortOrder: sortOrder
        });
    }
};