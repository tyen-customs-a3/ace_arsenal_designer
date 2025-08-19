// UI State Management
// Handles view modes, sorting, display options, and expand/collapse state

import { TOGGLE_ICONS, MASTER_TOGGLE } from '../ui/constants.js';

export const UIState = {
    init() {
        // Group by radio button listeners
        document.querySelectorAll('input[name="groupByOption"]').forEach(radio => {
            radio.addEventListener('change', (e) => {
                if (e.target.checked) {
                    this.updateGrouping(e.target.value);
                }
            });
        });
        
        // View mode radio button listeners
        document.querySelectorAll('input[name="viewMode"]').forEach(radio => {
            radio.addEventListener('change', (e) => {
                if (e.target.checked) {
                    this.setViewMode(e.target.value);
                }
            });
        });

        // Sort control listeners
        document.getElementById('sortingSelect').addEventListener('change', (e) => {
            import('./rendering.js').then(({ Renderer }) => {
                Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
            });
        });

        // Make display options globally available
        window.displayOptions = Arsenal.displayOptions;
    },

    setViewMode(mode) {
        // Update radio button selection
        document.querySelector(`input[name="viewMode"][value="${mode}"]`).checked = true;
        
        // Show/hide collapse toggle based on view mode
        const collapseToggleBtn = document.getElementById('treeToggleBtn');
        const collapseToggleText = document.getElementById('treeToggleText');
        
        if (mode === 'list') {
            // Hide collapse toggle for flat list view
            collapseToggleBtn.style.display = 'none';
            collapseToggleText.style.display = 'none';
        } else {
            // Show collapse toggle for hierarchy view
            collapseToggleBtn.style.display = 'flex';
            collapseToggleText.style.display = 'inline';
        }
        
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
        });
        
        // Update right panel based on current selection
        import('./selection.js').then(({ SelectionManager }) => {
            if (Arsenal.selectedItem) {
                SelectionManager.updateRightPanel(Arsenal.selectedItem);
            } else {
                // No item selected, refresh right panel with current category
                import('./filters.js').then(({ FilterManager }) => {
                    const rightItems = FilterManager.filterItemsByCategory(Arsenal.selectedRightCategory);
                    import('./rendering.js').then(({ Renderer }) => {
                        Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                    });
                });
            }
        });
    },

    updateGrouping(value) {
        // Update radio button selection
        document.querySelector(`input[name="groupByOption"][value="${value}"]`).checked = true;
        
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
        });
        
        // Update right panel based on current selection
        import('./selection.js').then(({ SelectionManager }) => {
            if (Arsenal.selectedItem) {
                SelectionManager.updateRightPanel(Arsenal.selectedItem);
            } else {
                // No item selected, refresh right panel with current category
                import('./filters.js').then(({ FilterManager }) => {
                    const rightItems = FilterManager.filterItemsByCategory(Arsenal.selectedRightCategory);
                    import('./rendering.js').then(({ Renderer }) => {
                        Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                    });
                });
            }
        });
    },

    toggleSortOrder() {
        Arsenal.currentSortOrder = Arsenal.currentSortOrder === 'asc' ? 'desc' : 'asc';
        const button = document.getElementById('sortOrderToggle');
        button.textContent = Arsenal.currentSortOrder === 'asc' ? '↑' : '↓';
        button.title = Arsenal.currentSortOrder === 'asc' ? 'Ascending order - click for descending' : 'Descending order - click for ascending';
        
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
        });
    },

    toggleExpandCollapse() {
        const button = document.getElementById('treeToggleBtn');
        const text = document.getElementById('treeToggleText');
        if (Arsenal.currentExpandState) {
            this.collapseAllGroups();
            button.textContent = MASTER_TOGGLE.EXPAND_ALL;
            text.textContent = 'Expand All';
            Arsenal.currentExpandState = false;
        } else {
            this.expandAllGroups();
            button.textContent = MASTER_TOGGLE.COLLAPSE_ALL;
            text.textContent = 'Collapse All';
            Arsenal.currentExpandState = true;
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
        Arsenal.displayOptions.showPreviewIcon = enabled;
        
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
            // Update right panel if it has items
            const rightTreeView = document.getElementById('rightTreeView');
            if (rightTreeView && rightTreeView.children.length > 0) {
                import('./selection.js').then(({ SelectionManager }) => {
                    if (Arsenal.selectedItem && Arsenal.selectedItem.category === 'weapons') {
                        SelectionManager.updateCompatibleAccessories(Arsenal.selectedItem);
                    } else {
                        import('./filters.js').then(({ FilterManager }) => {
                            const rightItems = FilterManager.filterItemsByCategory(Arsenal.selectedRightCategory);
                            Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                        });
                    }
                });
            }
        });
    },

    toggleModIcon(enabled) {
        Arsenal.displayOptions.showModIcon = enabled;
        
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
            // Update right panel if it has items
            const rightTreeView = document.getElementById('rightTreeView');
            if (rightTreeView && rightTreeView.children.length > 0) {
                import('./selection.js').then(({ SelectionManager }) => {
                    if (Arsenal.selectedItem && Arsenal.selectedItem.category === 'weapons') {
                        SelectionManager.updateCompatibleAccessories(Arsenal.selectedItem);
                    } else {
                        import('./filters.js').then(({ FilterManager }) => {
                            const rightItems = FilterManager.filterItemsByCategory(Arsenal.selectedRightCategory);
                            Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                        });
                    }
                });
            }
        });
    },

    changeSpacing(spacing) {
        Arsenal.displayOptions.spacing = spacing;
        
        // Update left panel
        const leftTreeView = document.getElementById('leftTreeView');
        leftTreeView.className = `tree-view spacing-${spacing}`;
        
        // Update right panel
        const rightTreeView = document.getElementById('rightTreeView');
        rightTreeView.className = `tree-view spacing-${spacing}`;
    }
};