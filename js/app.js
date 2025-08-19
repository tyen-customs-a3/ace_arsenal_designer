// Arsenal Application Entry Point
// Main initialization and coordination

import { DataService } from '../services/DataService.js';
import * as algorithms from '../algorithms.js';
import { MASTER_TOGGLE, DEFAULT_DISPLAY_OPTIONS } from '../ui/constants.js';

import { 
    initializeTreeManager,
    toggleTreeGroup,
} from '../ui/treeView.js';

import { DataManager } from './data.js';
import { FilterManager } from './filters.js';
import { UIState } from './ui-state.js';
import { Renderer } from './rendering.js';
import { SelectionManager } from './selection.js';
import { CompatibilityEngine } from './compatibility.js';
import { EventManager } from './events.js';
import { PanelManager } from './panels.js';

// Global Arsenal state
window.Arsenal = {
    dataService: new DataService(),
    currentItems: [],
    filteredItems: [],
    selectedCategory: 'weapons',
    selectedRightCategory: 'attachments',
    selectedItem: null,
    currentSortOrder: 'asc',
    currentExpandState: false,
    activeFilters: {
        mods: new Set(),
        calibers: new Set(),
        weaponTypes: new Set(),
    },
    rightPanelFilters: {
        magnifications: new Set(),
        capacities: new Set(),
        tracers: new Set(),
        ballistics: new Set(),
    },
    displayOptions: { ...DEFAULT_DISPLAY_OPTIONS }
};

window.algorithms = algorithms;

async function initializeArsenal() {
    const timingElement = document.getElementById('timing');
    timingElement.textContent = 'Loading Arsenal database...';
    timingElement.style.color = '#ffa500'; // Orange for loading

    try {
        // Initialize DataService by loading the database
        const data = await Arsenal.dataService.initialize();
        console.log(`DataService initialized with ${data.length} items.`);

        timingElement.textContent = 'Initializing managers...';

        // Initialize all managers
        DataManager.init();
        FilterManager.init();
        UIState.init();
        Renderer.init();
        SelectionManager.init();
        CompatibilityEngine.init();
        EventManager.init();
        PanelManager.init();

        timingElement.textContent = 'Loading initial data...';

        // Set initial categories and view mode
        DataManager.switchCategory('weapons');
        DataManager.switchRightCategory('attachments');
        UIState.setViewMode('hierarchy');

        // Set initial expand state
        Arsenal.currentExpandState = true;
        const button = document.getElementById('treeToggleBtn');
        const text = document.getElementById('treeToggleText');
        if (button && text) {
            button.textContent = MASTER_TOGGLE.COLLAPSE_ALL;
            text.textContent = 'Collapse All';
        }

        // Initialize tree managers for both panels
        initializeTreeManager('leftTreeView');
        initializeTreeManager('rightTreeView');

        // Initialize UI controls
        UIState.changeSpacing('general');
        document.getElementById('showPreviewIcon').checked = Arsenal.displayOptions.showPreviewIcon;
        document.getElementById('showModIcon').checked = Arsenal.displayOptions.showModIcon;
        document.querySelector(`input[name="spacingOption"][value="${Arsenal.displayOptions.spacing}"]`).checked = true;

        timingElement.textContent = 'Arsenal is ready.';
        timingElement.style.color = '#00ff00'; // Green for success

    } catch (error) {
        console.error('🚨 Failed to initialize Arsenal:', error);
        timingElement.textContent = 'Error loading data. Check console.';
        timingElement.style.color = '#ff4444'; // Red for error

        const leftTreeView = document.getElementById('leftTreeView');
        if (leftTreeView) {
            leftTreeView.innerHTML = `
                <div style="padding: 20px; color: #ff4444; text-align: center;">
                    <h3>⚠️ Data Loading Error</h3>
                    <p style="margin: 10px 0;">Could not load <code>database.json</code>.</p>
                    <p style="font-size: 12px; color: #999;">${error.message}</p>
                    <button onclick="location.reload()" style="margin-top: 10px; padding: 8px 15px; background: #333; color: #fff; border: 1px solid #666; border-radius: 3px; cursor: pointer;">
                        Reload Page
                    </button>
                </div>
            `;
        }
    }
}

// Start the application
initializeArsenal();