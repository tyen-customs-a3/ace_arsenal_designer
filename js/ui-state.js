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

        // Icon toggle listeners (bind in JS rather than inline HTML)
        const previewToggle = document.getElementById('showPreviewIcon');
        if (previewToggle) {
            previewToggle.addEventListener('change', (e) => this.togglePreviewIcon(e.target.checked));
        }
        const modToggle = document.getElementById('showModIcon');
        if (modToggle) {
            modToggle.addEventListener('change', (e) => this.toggleModIcon(e.target.checked));
        }

        // Spacing radio listeners
        const spacingRadios = document.querySelectorAll('input[name="spacingOption"]');
        spacingRadios.forEach(radio => {
            radio.addEventListener('change', (e) => {
                if (e.target && e.target.checked) {
                    this.changeSpacing(e.target.value);
                }
            });
        });

        // Sort control listeners
        document.getElementById('sortingSelect').addEventListener('change', (e) => {
            import('./rendering.js').then(({ Renderer }) => {
                const { filteredItems } = getState();
                Renderer.renderTreeView(filteredItems, 'leftTreeView');
            });
        });

        // Apply initial display options (from localStorage if present)
        const savedSpacing = (typeof localStorage !== 'undefined') ? localStorage.getItem('arsenal.spacing') : null;
        const initialSpacing = savedSpacing || (getState().displayOptions?.spacing || 'general');
        this.changeSpacing(initialSpacing);

        // Reflect initial controls state
        const initialState = getState();
        if (previewToggle) previewToggle.checked = !!initialState.displayOptions?.showPreviewIcon;
        if (modToggle) modToggle.checked = !!initialState.displayOptions?.showModIcon;
        const initialRadio = document.querySelector(`input[name="spacingOption"][value="${initialSpacing}"]`);
        if (initialRadio) initialRadio.checked = true;
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
        // Persist and update state
        try { if (typeof localStorage !== 'undefined') localStorage.setItem('arsenal.spacing', spacing); } catch (_) {}
        StateActions.setDisplayOptions({ spacing });

        // Helper to safely update spacing class without clobbering other classes
        const applySpacing = (el) => {
            if (!el) return;
            const classes = Array.from(el.classList);
            classes.filter(c => c.startsWith('spacing-')).forEach(c => el.classList.remove(c));
            if (!el.classList.contains('tree-view')) el.classList.add('tree-view');
            el.classList.add(`spacing-${spacing}`);
        };

        applySpacing(document.getElementById('leftTreeView'));
        applySpacing(document.getElementById('rightTreeView'));

        // Re-render to ensure consistent layout after spacing change
        this.refreshView();
    }
};
