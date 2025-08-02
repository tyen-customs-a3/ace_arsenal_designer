// Event Management
// Handles DOM events and hover functionality

import { 
    toggleTreeGroup,
    selectTreeItem
} from '../ui/simpleTreeV2.js';

export const EventManager = {
    // Hover preview state
    hoverPreviewElement: null,
    hoverPreviewTimeout: null,
    
    init() {
        // Expose all functions to global scope for HTML onclick handlers
        this.exposeGlobalFunctions();
    },

    // Hover preview functionality
    showItemPreview(event, element) {
        // Only show preview for items with data
        if (!element.dataset.item) return;
        
        // Clear any existing timeout
        clearTimeout(this.hoverPreviewTimeout);
        
        // Add small delay to prevent flickering
        this.hoverPreviewTimeout = setTimeout(() => {
            try {
                const itemData = JSON.parse(element.dataset.item);
                
                // Create preview element if it doesn't exist
                if (!this.hoverPreviewElement) {
                    this.hoverPreviewElement = document.createElement('div');
                    this.hoverPreviewElement.className = 'item-hover-preview';
                    document.body.appendChild(this.hoverPreviewElement);
                }
                
                // Get category for icon styling and dimensions
                const category = itemData.category || 'unknown';
                const categoryIcon = this.getCategoryIcon(category);
                
                // Set popup class with category for aspect ratio styling
                this.hoverPreviewElement.className = `item-hover-preview ${category}`;
                
                // Build preview content
                this.hoverPreviewElement.innerHTML = `
                    <div class="item-hover-preview-icon ${category}">
                        ${categoryIcon}
                    </div>
                    <div class="item-hover-preview-text">
                        <div class="item-hover-name">${itemData.displayName}</div>
                        <div class="item-hover-classname">${itemData.className}</div>
                    </div>
                `;
                
                // Position preview near cursor with category-specific dimensions
                const rect = element.getBoundingClientRect();
                const previewDimensions = this.getPreviewDimensions(category);
                const previewWidth = previewDimensions.width;
                const previewHeight = previewDimensions.height;
                
                let left = rect.right + 10; // 10px offset from element
                let top = rect.top;
                
                // Adjust if preview would go off screen
                if (left + previewWidth > window.innerWidth) {
                    left = rect.left - previewWidth - 10; // Show on left side
                }
                
                if (top + previewHeight > window.innerHeight) {
                    top = window.innerHeight - previewHeight - 10;
                }
                
                this.hoverPreviewElement.style.left = `${left}px`;
                this.hoverPreviewElement.style.top = `${top}px`;
                this.hoverPreviewElement.classList.add('visible');
                
            } catch (e) {
                // Silently handle preview errors
            }
        }, 100); // 100ms delay - much faster
    },

    hideItemPreview() {
        clearTimeout(this.hoverPreviewTimeout);
        
        if (this.hoverPreviewElement) {
            this.hoverPreviewElement.classList.remove('visible');
        }
    },

    getCategoryIcon(category) {
        const icons = {
            'weapons': '⚔',
            'handguns': '🔫',
            'launchers': '🚀',
            'backpacks': '🎒',
            'vests': '🛡',
            'attachments': '🔧',
            'magazines': '📦',
            'unknown': '❓'
        };
        return icons[category] || icons['unknown'];
    },

    getPreviewDimensions(category) {
        // Return width and height based on category aspect ratio
        const dimensions = {
            'weapons': { width: 180, height: 96 },      // 3x1 aspect ratio
            'handguns': { width: 120, height: 132 },    // 1x1 aspect ratio
            'launchers': { width: 120, height: 132 },   // 1x1 aspect ratio
            'backpacks': { width: 120, height: 132 },   // 1x1 aspect ratio
            'vests': { width: 120, height: 132 },       // 1x1 aspect ratio
            'attachments': { width: 120, height: 132 }, // 1x1 aspect ratio
            'magazines': { width: 120, height: 132 },   // 1x1 aspect ratio
            'unknown': { width: 120, height: 132 }      // 1x1 aspect ratio (fallback)
        };
        return dimensions[category] || dimensions['unknown'];
    },

    exposeGlobalFunctions() {
        // Global functions for buttons and tree interaction
        window.regenerateData = () => {
            import('./data.js').then(({ DataManager }) => {
                DataManager.regenerateData();
            });
        };
        
        window.clearSelection = () => {
            import('./selection.js').then(({ SelectionManager }) => {
                SelectionManager.clearSelection();
            });
        };
        
        window.selectItem = (element) => {
            import('./selection.js').then(({ SelectionManager }) => {
                SelectionManager.selectItem(element);
            });
        };
        
        window.selectItemByData = (itemData) => {
            import('./selection.js').then(({ SelectionManager }) => {
                SelectionManager.selectItemByData(itemData);
            });
        };
        
        window.toggleTreeGroup = toggleTreeGroup;
        window.selectTreeItem = selectTreeItem;
        
        window.setViewMode = (mode) => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.setViewMode(mode);
            });
        };
        
        window.expandAllGroups = () => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.expandAllGroups();
            });
        };
        
        window.collapseAllGroups = () => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.collapseAllGroups();
            });
        };
        
        window.toggleFilter = (filterType, value, isChecked) => {
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.toggleFilter(filterType, value, isChecked);
            });
        };
        
        window.toggleVariantFilter = (type, isChecked) => {
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.toggleVariantFilter(type, isChecked);
            });
        };
        
        window.clearAllFilters = () => {
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.clearAllFilters();
            });
        };
        
        window.toggleSortOrder = () => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.toggleSortOrder();
            });
        };
        
        window.toggleExpandCollapse = () => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.toggleExpandCollapse();
            });
        };
        
        window.toggleFilterPanel = () => {
            import('./panels.js').then(({ PanelManager }) => {
                PanelManager.toggleFilterPanel();
            });
        };
        
        window.toggleStatsPanel = () => {
            import('./panels.js').then(({ PanelManager }) => {
                PanelManager.toggleStatsPanel();
            });
        };
        
        window.toggleOptionsPanel = () => {
            import('./panels.js').then(({ PanelManager }) => {
                PanelManager.toggleOptionsPanel();
            });
        };
        
        window.togglePreviewIcon = (enabled) => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.togglePreviewIcon(enabled);
            });
        };
        
        window.toggleModIcon = (enabled) => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.toggleModIcon(enabled);
            });
        };
        
        window.changeSpacing = (spacing) => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.changeSpacing(spacing);
            });
        };
        
        window.showItemPreview = (event, element) => this.showItemPreview(event, element);
        window.hideItemPreview = () => this.hideItemPreview();
        
        window.updateGrouping = (value) => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.updateGrouping(value);
            });
        };
        
        window.toggleRightPanelFilter = () => {
            import('./panels.js').then(({ PanelManager }) => {
                PanelManager.toggleRightPanelFilter();
            });
        };
        
        window.toggleRightPanelFilterType = (filterType, value, isChecked) => {
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.toggleRightPanelFilterType(filterType, value, isChecked);
            });
        };
        
        window.clearRightPanelFilters = () => {
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.clearRightPanelFilters();
            });
        };
        
        window.populateRightPanelFilterOptions = (items) => {
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.populateRightPanelFilterOptions(items);
            });
        };
    }
};