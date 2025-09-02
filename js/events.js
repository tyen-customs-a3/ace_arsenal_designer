// Event Management
// Handles DOM events and hover functionality

import { 
    toggleTreeGroup,
    selectTreeItem
} from '../ui/treeView.js';

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
                        <div class="item-hover-classname">${itemData.class_name}</div>
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
            'rifles': 'RF',
            'pistols': 'PS',
            'launchers': 'LC',
            'backpacks': 'BP',
            'vests': 'VS',
            'attachments': 'AT',
            'magazines': 'MG',
            'optics': 'OP',
            'tools': 'TL',
            'medical': 'MD',
            'uniforms': 'UN',
            'bipods': 'BP',
            'unknown': '??'
        };
        return icons[category] || icons['unknown'];
    },

    getPreviewDimensions(category) {
        // Return width and height based on category aspect ratio
        const dimensions = {
            'rifles': { width: 180, height: 96 },       // 3x1 aspect ratio
            'pistols': { width: 120, height: 132 },     // 1x1 aspect ratio
            'launchers': { width: 120, height: 132 },   // 1x1 aspect ratio
            'backpacks': { width: 120, height: 132 },   // 1x1 aspect ratio
            'vests': { width: 120, height: 132 },       // 1x1 aspect ratio
            'attachments': { width: 120, height: 132 }, // 1x1 aspect ratio
            'magazines': { width: 120, height: 132 },   // 1x1 aspect ratio
            'optics': { width: 120, height: 132 },      // 1x1 aspect ratio
            'tools': { width: 120, height: 132 },       // 1x1 aspect ratio
            'medical': { width: 120, height: 132 },     // 1x1 aspect ratio
            'uniforms': { width: 120, height: 132 },   // 1x1 aspect ratio
            'bipods': { width: 120, height: 132 },      // 1x1 aspect ratio
            'unknown': { width: 120, height: 132 }      // 1x1 aspect ratio
        };
        return dimensions[category] || dimensions['unknown'];
    },

    exposeGlobalFunctions() {
        // Global functions for buttons and tree interaction (pruned to only required handlers)
        
        window.toggleTreeGroup = toggleTreeGroup;
        window.selectTreeItem = selectTreeItem;
                       
        // Note: expand/collapse and filter controls are handled via UI listeners
        
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
        
        // Display option toggles are wired via UI controls
        
        window.showItemPreview = (event, element) => this.showItemPreview(event, element);
        window.hideItemPreview = () => this.hideItemPreview();
        
        window.updateGroupByMod = (enabled) => {
            import('./ui-state.js').then(({ UIState }) => {
                UIState.updateGroupByMod(enabled);
            });
        };
       
        
        // Right-panel filter toggles are handled by panels.js and filters.js UI
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
