// Rendering Management
// Handles tree view rendering and search functionality

import {
    initializeTreeManager,
    getTreeManager
} from '../ui/treeView.js';
import { getState } from './StateManager.js';
import * as algorithms from '../algorithms.js';

export const Renderer = {
    init() {
        // Search functionality
        document.getElementById('leftSearch').addEventListener('input', (e) => {
            const searchTerm = e.target.value.toLowerCase();
            import('./filters.js').then(({ FilterManager }) => {
                const { selectedCategory } = getState();
                const baseItems = FilterManager.filterItemsByCategory(selectedCategory);
                const items = baseItems.filter(item => item.displayName.toLowerCase().includes(searchTerm));
                this.renderTreeView(items, 'leftTreeView');
            });
        });

        document.getElementById('rightSearch').addEventListener('input', (e) => {
            const searchTerm = e.target.value.toLowerCase();
            import('./filters.js').then(({ FilterManager }) => {
                const { selectedRightCategory } = getState();
                const items = FilterManager.filterItemsByCategory(selectedRightCategory)
                    .filter(item => item.displayName.toLowerCase().includes(searchTerm));
                this.renderTreeView(items, 'rightTreeView', false);
            });
        });
    },

    // Enhanced tree view rendering with new architecture
    renderTreeView(items, containerId, useGrouping = true) {
        const container = document.getElementById(containerId);
        if (!container) {
            console.error(`Container ${containerId} not found!`);
            return;
        }

        // Get or create tree manager
        let treeManager = getTreeManager(containerId);
        if (!treeManager) {
            treeManager = initializeTreeManager(containerId);
        }

        // Get current UI state (panel-specific prefs with DOM fallback)
        const state = getState();
        const panelPrefs = (state.uiPanels && state.uiPanels[containerId]) || {};
        const sortMethod = panelPrefs.sortBy || (document.getElementById('sortingSelect')?.value || null);
        const sortOrder = panelPrefs.sortOrder || state.currentSortOrder;
        // Global checkbox applies to both panels
        const groupByMod = document.getElementById('groupByMod')?.checked || false;

        console.log(`Rendering ${items.length} items to ${containerId}`);
        console.log(`Options - Group By Mod: ${groupByMod}`);

        // Determine grouping function based on checkbox states
        let groupingFunction = null;
        if (groupByMod) {
            // Mod grouping enabled
            console.log('Using Mod grouping');
            groupingFunction = algorithms.groupByMod;
            useGrouping = true;
        } else {
            // No mod grouping - use list view
            console.log('No mod grouping, using list view');
            useGrouping = false;
        }

        // Render tree using new system
        treeManager.renderTree(items, {
            groupBy: useGrouping ? groupingFunction : null,
            sortBy: sortMethod,
            sortOrder: sortOrder
        });
    }
};
