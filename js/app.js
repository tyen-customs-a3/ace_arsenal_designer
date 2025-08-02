// Arsenal Application Entry Point
// Main initialization and coordination

// Import data and algorithms
import { DataService } from '../services/DataService.js';
import * as algorithms from '../algorithms.js';
import { TOGGLE_ICONS, MASTER_TOGGLE, DEFAULT_DISPLAY_OPTIONS } from '../ui/constants.js';

// Import enhanced tree components  
import { 
    initializeTreeManager,
    getTreeManager,
    TreeManager,
    toggleTreeGroup,
    selectTreeItem,
    clearPanelFocus,
    focusFirstItem,
    restoreFocusAfterViewChange
} from '../ui/simpleTreeV2.js';

// Import focused modules
import { DataManager } from './data.js';
import { FilterManager } from './filters.js';
import { UIState } from './ui-state.js';
import { Renderer } from './rendering.js';
import { SelectionManager } from './selection.js';
import { CompatibilityEngine } from './compatibility.js';
import { EventManager } from './events.js';
import { PanelManager } from './panels.js';

// Global Arsenal state - simple object for rapid iteration
window.Arsenal = {
    // Data
    dataService: new DataService({ maxWorkers: 2, workerTimeout: 30000 }),
    currentItems: [],
    filteredItems: [],
    
    // UI State
    selectedCategory: 'weapons',
    selectedRightCategory: 'optics',
    selectedItem: null,
    currentSortOrder: 'asc',
    currentExpandState: false,
    
    // Filter state
    activeFilters: {
        mods: new Set(),
        calibers: new Set(),
        weaponTypes: new Set(),
        variants: {
            base: true,
            variants: true
        },
    },
    
    // Right panel filter state
    rightPanelFilters: {
        magnifications: new Set(),
        capacities: new Set(),
        tracers: new Set(),
        ballistics: new Set(),
    },
    
    // Options state - initialized from constants
    displayOptions: {
        showPreviewIcon: DEFAULT_DISPLAY_OPTIONS.showPreviewIcon,
        showModIcon: DEFAULT_DISPLAY_OPTIONS.showModIcon,
        spacing: DEFAULT_DISPLAY_OPTIONS.spacing
    }
};

// Make algorithms available globally
window.algorithms = algorithms;

// Initialize the application
async function initializeArsenal() {
    // Show loading message
    document.getElementById('timing').textContent = 'Initializing DataService...';
    
    try {
        // Initialize DataService
        const enrichedData = await Arsenal.dataService.initialize();
        
        // Initialize all managers
        DataManager.init();
        FilterManager.init();
        UIState.init();
        Renderer.init();
        SelectionManager.init();
        CompatibilityEngine.init();
        EventManager.init();
        PanelManager.init();
        
        // Initialize UI state
        DataManager.switchCategory('weapons');
        DataManager.switchRightCategory('optics');
        
        // Set initial expand state based on variant view default
        Arsenal.currentExpandState = true;
        const button = document.getElementById('treeToggleBtn');
        const text = document.getElementById('treeToggleText');
        if (button && text) {
            button.textContent = MASTER_TOGGLE.COLLAPSE_ALL;
            text.textContent = 'Collapse All';
        }
        
        // Initialize toggle visibility for default hierarchy view
        UIState.setViewMode('hierarchy');
        
        // Initialize tree managers for both panels with keyboard navigation
        initializeTreeManager('leftTreeView');
        initializeTreeManager('rightTreeView');
        
        // Initialize spacing classes on tree views
        UIState.changeSpacing('general'); // Set initial spacing
        
        // Sync initial checkbox states with displayOptions
        document.getElementById('showPreviewIcon').checked = Arsenal.displayOptions.showPreviewIcon;
        document.getElementById('showModIcon').checked = Arsenal.displayOptions.showModIcon;
        document.querySelector(`input[name="spacingOption"][value="${Arsenal.displayOptions.spacing}"]`).checked = true;

        // Application ready
        document.getElementById('timing').textContent = 'Ready';
        
    } catch (error) {
        console.error('🚨 Failed to load arsenal data:', error);
        
        // Show user-friendly error message
        const timing = document.getElementById('timing');
        timing.textContent = 'Error loading data';
        timing.style.color = '#ff4444';
        timing.style.cursor = 'pointer';
        timing.title = `Click for details: ${error.message}`;
        
        // Show error in left panel
        const leftTreeView = document.getElementById('leftTreeView');
        if (leftTreeView) {
            leftTreeView.innerHTML = `
                <div style="padding: 20px; color: #ff4444; text-align: center;">
                    <h3>⚠️ Data Loading Error</h3>
                    <p style="margin: 10px 0; font-size: 12px;">${error.message}</p>
                    <p style="font-size: 10px; color: #999;">Check browser console for details</p>
                    <button onclick="location.reload()" style="margin-top: 10px; padding: 5px 10px; background: #333; color: #fff; border: 1px solid #666; border-radius: 3px; cursor: pointer;">
                        Reload Page
                    </button>
                </div>
            `;
        }
        
        // Optional: Show error details on click
        timing.onclick = () => {
            alert(`Arsenal Loading Error:\n\n${error.message}\n\nCheck the browser console (F12) for more details.`);
        };
    }
}

// Start the application
initializeArsenal();