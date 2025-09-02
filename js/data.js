// Data Management
// Handles data transformation and category switching

import { actions as StateActions, getState } from './StateManager.js';
import { dataService } from '../services/DataService.js';

export const DataManager = {
    async init() {
        // Initialize DataService asynchronously (idempotent)
        try {
            if (!dataService.isReady()) {
                await dataService.initialize();
            }
        } catch (err) {
            console.error('Failed to initialize DataService:', err);
        }
        // Category tab listeners
        document.querySelectorAll('.category-tab').forEach(tab => {
            tab.addEventListener('click', () => this.switchCategory(tab.dataset.category));
        });
    },

    // Transform gear_database.json items to UI-compatible format
    transformDataServiceItems(items) {
        return items.map(item => {
            return {
                class_name: item.class_name, // Keep original field name for hierarchy system
                displayName: item.displayName || item.class_name,
                category: item.category,
                mod: item.mod || 'Unknown',
                baseClass: item.base_class || '',
                range: item.range || 0,
                mass: item.mass || 0,
                damage: item.damage || 0,
                caliber: item.caliber || '',
                capacity: item.capacity || 0,
                armor: item.armor || 0,
                maximumLoad: item.maximumLoad || 0,
                rateOfFire: item.rateOfFire || 0,
                zoom: item.zoom || 0,
                recoilModifier: item.recoilModifier || 0,
                magazines: (Array.isArray(item.magazines) ? item.magazines : (Array.isArray(item.properties?.magazines) ? item.properties.magazines : [])),
                magazineWells: item.magwells || [],
                weaponSlots: item.weaponSlots || [],
                compatibleSlots: item.compatibleSlots || [],
                compatibleWells: item.compatibleWells || [],
                cursorAim: item.cursorAim || '',
                variant: item.variant || '',
                tracer: item.tracer || false,
                magnification: item.magnification || 0,
                // Additional fields from enhanced database
                picture: item.picture || '',
                model: item.model || '',
                descriptionShort: item.descriptionShort || '',
                author: item.author || '',
                scope: item.scope || 0,
                _originalData: item,
                properties: {
                    displayName: item.displayName || item.class_name,
                    range: item.range || 0,
                    mass: item.mass || 0,
                    damage: item.damage || 0,
                    caliber: item.caliber || '',
                    capacity: item.capacity || 0,
                    armor: item.armor || 0,
                    maximumLoad: item.maximumLoad || 0,
                    rateOfFire: item.rateOfFire || 0,
                    zoom: item.zoom || 0,
                    recoilModifier: item.recoilModifier || 0,
                    magazines: (Array.isArray(item.magazines) ? item.magazines : (Array.isArray(item.properties?.magazines) ? item.properties.magazines : [])),
                    cursorAim: item.cursorAim || '',
                    variant: item.variant || '',
                    tracer: item.tracer || false,
                    magnification: item.magnification || 0,
                    magazineWells: item.magwells || [],
                    weaponSlots: item.weaponSlots || [],
                    compatibleSlots: item.compatibleSlots || [],
                    compatibleWells: item.compatibleWells || [],
                    picture: item.picture || '',
                    model: item.model || '',
                    descriptionShort: item.descriptionShort || '',
                    author: item.author || '',
                    scope: item.scope || 0
                }
            };
        });
    },

    async switchCategory(category) {
        StateActions.setSelectedCategory(category);

        // Update tab appearance
        document.querySelectorAll('.category-tab').forEach(tab => tab.classList.remove('active'));
        const activeTab = document.querySelector(`[data-category="${category}"]`);
        if (activeTab) {
            activeTab.classList.add('active');
        }

        if (!dataService.isReady()) {
            console.warn('DataService not ready, cannot switch category');
            return;
        }

        const timingElement = document.getElementById('timing');
        timingElement.textContent = `Loading ${category}...`;
        timingElement.style.color = '';

        try {
            const dataServiceItems = await dataService.getClassesByCategory(category);
            console.log(`DataService returned ${dataServiceItems.length} items for category '${category}'`);

            if (dataServiceItems.length === 0) {
                console.warn(`No items found for category '${category}'`);
            }

            const transformedItems = this.transformDataServiceItems(dataServiceItems);

            console.log(`Transformed ${transformedItems.length} items for UI`);
            StateActions.setCurrentItems(transformedItems);

            timingElement.textContent = `${transformedItems.length} ${category} loaded`;
            timingElement.style.color = '';

            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.populateFilterOptions(category);
                const items = FilterManager.filterItemsByCategory(category);
                StateActions.setFilteredItems(items);
                import('./rendering.js').then(({ Renderer }) => {
                    // Prepend a global 'None' item at the top for every category
                    const noneItem = {
                        class_name: `__none_${category}__`,
                        displayName: 'None',
                        category,
                        mod: 'System',
                        scope: 2,
                        properties: {}
                    };
                    Renderer.renderTreeView([noneItem, ...items], 'leftTreeView');
                });
            });

            // Emit category changed event for hierarchy loader
            document.dispatchEvent(new CustomEvent('categoryChanged', { 
                detail: { category, itemCount: transformedItems.length } 
            }));

        } catch (error) {
            console.error(`Error switching to category ${category}:`, error);
            timingElement.textContent = `Error loading ${category}`;
            timingElement.style.color = '#ff4444';
            StateActions.setCurrentItems([]);
            StateActions.setFilteredItems([]);
        }
    },

    switchRightCategory(category) {
        StateActions.setSelectedRightCategory(category);
        
        import('./selection.js').then(({ SelectionManager }) => {
            SelectionManager.updateRightCategoryTabs();
            
            const { selectedItem } = getState();
            if (selectedItem) {
                SelectionManager.updateRightPanel(selectedItem);
            } else {
                SelectionManager.clearRightPanelWithMessage('Select an item to view compatible accessories');
            }
        });
    },

    regenerateData() {
        const { selectedCategory, selectedRightCategory } = getState();
        this.switchCategory(selectedCategory);
        this.switchRightCategory(selectedRightCategory);
        import('./selection.js').then(({ SelectionManager }) => {
            SelectionManager.clearSelection();
        });
    },

    getDataServiceStats() {
        if (!dataService.isReady()) {
            return null;
        }
        return dataService.getStats();
    },

    getAvailableCategories() {
        if (!dataService.isReady()) {
            return [];
        }
        return dataService.getAvailableCategories();
    },

    findItemByClassName(className) {
        if (!dataService.isReady()) {
            return null;
        }
        
        const enrichedClass = dataService.findClass(className);
        if (!enrichedClass) {
            return null;
        }
        
        return this.transformDataServiceItems([{
            class_name: className,
            ...enrichedClass
        }])[0];
    },

    getEnrichmentReport() {
        if (!dataService.isReady()) {
            return null;
        }
        return dataService.getEnrichmentReport();
    }
};
