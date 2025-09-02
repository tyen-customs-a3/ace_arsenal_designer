// UI State Management
// Handles sorting, display options, and expand/collapse state

import { TOGGLE_ICONS, MASTER_TOGGLE } from '../ui/constants.js';
import { getState, actions as StateActions } from './StateManager.js';

export const UIState = {
    init() {
        // Group by checkbox listeners
        document.getElementById('groupByMod').addEventListener('change', (e) => {
            this.updateGroupByMod(e.target.checked);
        });



        // Sort control listeners
        document.getElementById('sortingSelect').addEventListener('change', (e) => {
            import('./rendering.js').then(({ Renderer }) => {
                const { filteredItems } = getState();
                Renderer.renderTreeView(filteredItems, 'leftTreeView');
            });
        });

        // Views consume display options directly from StateManager
    },

    updateGroupByMod(enabled) {
        // Update checkbox state
        document.getElementById('groupByMod').checked = enabled;

        // Re-render with new grouping settings
        this.refreshView();
    },



    refreshView() {
        import('./rendering.js').then(({ Renderer }) => {
            const { filteredItems } = getState();
            Renderer.renderTreeView(filteredItems, 'leftTreeView');
        });

        // Update right panel based on current selection
        import('./selection.js').then(({ SelectionManager }) => {
            const { selectedItem, selectedRightCategory } = getState();
            if (selectedItem) {
                SelectionManager.updateRightPanel(selectedItem);
            } else {
                // No item selected, refresh right panel with current category
                import('./filters.js').then(({ FilterManager }) => {
                    const rightItems = FilterManager.filterItemsByCategory(selectedRightCategory);
                    import('./rendering.js').then(({ Renderer }) => {
                        Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                    });
                });
            }
        });
    },

    toggleSortOrder() {
        const { currentSortOrder } = getState();
        const next = currentSortOrder === 'asc' ? 'desc' : 'asc';
        StateActions.setSortOrder(next);
        const button = document.getElementById('sortOrderToggle');
        button.textContent = next === 'asc' ? '↑' : '↓';
        button.title = next === 'asc' ? 'Ascending order - click for descending' : 'Descending order - click for ascending';

        import('./rendering.js').then(({ Renderer }) => {
            const { filteredItems } = getState();
            Renderer.renderTreeView(filteredItems, 'leftTreeView');
        });
    },

    toggleExpandCollapse() {
        const button = document.getElementById('treeToggleBtn');
        const text = document.getElementById('treeToggleText');
        if (getState().currentExpandState) {
            this.collapseAllGroups();
            button.textContent = MASTER_TOGGLE.EXPAND_ALL;
            text.textContent = 'Expand All';
            StateActions.setExpandState(false);
        } else {
            this.expandAllGroups();
            button.textContent = MASTER_TOGGLE.COLLAPSE_ALL;
            text.textContent = 'Collapse All';
            StateActions.setExpandState(true);
        }
    },

    expandAllGroups() {
        document.querySelectorAll('.tree-children').forEach(el => {
            el.style.display = 'block';
        });
        document.querySelectorAll('.tree-toggle').forEach(el => {
            el.textContent = TOGGLE_ICONS.EXPANDED;
        });
    },

    collapseAllGroups() {
        document.querySelectorAll('.tree-children').forEach(el => {
            el.style.display = 'none';
        });
        document.querySelectorAll('.tree-toggle').forEach(el => {
            el.textContent = TOGGLE_ICONS.COLLAPSED;
        });
    },

    // Display option methods
    togglePreviewIcon(enabled) {
        StateActions.setDisplayOptions({ showPreviewIcon: enabled });

        import('./rendering.js').then(({ Renderer }) => {
            const { filteredItems } = getState();
            Renderer.renderTreeView(filteredItems, 'leftTreeView');
            // Update right panel if it has items
            const rightTreeView = document.getElementById('rightTreeView');
            if (rightTreeView && rightTreeView.children.length > 0) {
                import('./selection.js').then(({ SelectionManager }) => {
                    const { selectedItem, selectedRightCategory } = getState();
                    if (selectedItem && ['rifles', 'pistols', 'launchers'].includes(selectedItem.category)) {
                        SelectionManager.updateCompatibleAccessories(selectedItem);
                    } else {
                        import('./filters.js').then(({ FilterManager }) => {
                            const rightItems = FilterManager.filterItemsByCategory(selectedRightCategory);
                            Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                        });
                    }
                });
            }
        });
    },

    toggleModIcon(enabled) {
        StateActions.setDisplayOptions({ showModIcon: enabled });

        import('./rendering.js').then(({ Renderer }) => {
            const { filteredItems } = getState();
            Renderer.renderTreeView(filteredItems, 'leftTreeView');
            // Update right panel if it has items
            const rightTreeView = document.getElementById('rightTreeView');
            if (rightTreeView && rightTreeView.children.length > 0) {
                import('./selection.js').then(({ SelectionManager }) => {
                    const { selectedItem, selectedRightCategory } = getState();
                    if (selectedItem && ['rifles', 'pistols', 'launchers'].includes(selectedItem.category)) {
                        SelectionManager.updateCompatibleAccessories(selectedItem);
                    } else {
                        import('./filters.js').then(({ FilterManager }) => {
                            const rightItems = FilterManager.filterItemsByCategory(selectedRightCategory);
                            Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                        });
                    }
                });
            }
        });
    },

    changeSpacing(spacing) {
        StateActions.setDisplayOptions({ spacing });

        // Update left panel
        const leftTreeView = document.getElementById('leftTreeView');
        leftTreeView.className = `tree-view spacing-${spacing}`;

        // Update right panel
        const rightTreeView = document.getElementById('rightTreeView');
        rightTreeView.className = `tree-view spacing-${spacing}`;
    }
};
