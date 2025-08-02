// Data Management
// Handles data transformation and category switching

export const DataManager = {
    init() {
        // Category tab listeners
        document.querySelectorAll('.category-tab').forEach(tab => {
            tab.addEventListener('click', () => this.switchCategory(tab.dataset.category));
        });
    },

    // Transform DataService enriched classes to UI-compatible format
    transformDataServiceItems(enrichedClasses) {
        return enrichedClasses.map(classObj => {
            const meta = classObj._meta || {};
            
            // Helper function to get the best available display name
            const getDisplayName = () => {
                // With the new localization system, the DataService already resolved 
                // all $STR_ keys to their localized strings in the _meta.displayName field.
                // We now prefer the resolved display name from _meta first.
                
                // Try meta first (enriched data with resolved localization)
                if (meta.displayName && meta.displayName.trim()) {
                    return meta.displayName;
                }
                
                // Try classObj displayName (should also be resolved by DataService)
                if (classObj.displayName && classObj.displayName.trim()) {
                    return classObj.displayName;
                }
                
                // Try properties displayName (should also be resolved by DataService)
                if (classObj.properties?.displayName && classObj.properties.displayName.trim()) {
                    return classObj.properties.displayName.trim();
                }
                
                // Fallback to className if no display name is available
                return classObj.className;
            };
            
            // Create UI-compatible item object
            const item = {
                className: classObj.className,
                displayName: getDisplayName(),
                category: meta.category || 'unknown',
                mod: classObj._sourceMod || 'Unknown',
                baseClass: classObj.baseClass || '',
                
                // Extract common properties from meta or resolved properties
                range: meta.range || classObj.range || 0,
                mass: meta.mass || classObj.mass || 0,
                damage: meta.damage || classObj.damage || 0,
                caliber: meta.caliber || classObj.caliber || '',
                capacity: meta.capacity || classObj.capacity || 0,
                armor: meta.armor || classObj.armor || 0,
                maximumLoad: meta.maximumLoad || classObj.maximumLoad || 0,
                rateOfFire: meta.rateOfFire || classObj.rateOfFire || 0,
                zoom: meta.zoom || classObj.zoom || 0,
                recoilModifier: meta.recoilModifier || classObj.recoilModifier || 0,
                
                // Compatibility properties
                magazineWells: meta.magazineWells || classObj.magazineWells || [],
                weaponSlots: meta.weaponSlots || classObj.weaponSlots || [],
                compatibleSlots: meta.compatibleSlots || classObj.compatibleSlots || [],
                compatibleWells: meta.compatibleWells || classObj.compatibleWells || [],
                
                // Additional properties
                cursorAim: meta.cursorAim || classObj.cursorAim || '',
                variant: meta.variant || classObj.variant || '',
                tracer: meta.tracer || classObj.tracer || false,
                magnification: meta.magnification || classObj.magnification || 0,
                
                // Preserve original data for advanced features
                _originalData: classObj,
                _meta: meta,
                
                // Legacy properties object for backward compatibility
                properties: {
                    displayName: meta.displayName || classObj.displayName || classObj.className,
                    range: meta.range || classObj.range || 0,
                    mass: meta.mass || classObj.mass || 0,
                    damage: meta.damage || classObj.damage || 0,
                    caliber: meta.caliber || classObj.caliber || '',
                    capacity: meta.capacity || classObj.capacity || 0,
                    armor: meta.armor || classObj.armor || 0,
                    maximumLoad: meta.maximumLoad || classObj.maximumLoad || 0,
                    rateOfFire: meta.rateOfFire || classObj.rateOfFire || 0,
                    zoom: meta.zoom || classObj.zoom || 0,
                    recoilModifier: meta.recoilModifier || classObj.recoilModifier || 0,
                    cursorAim: meta.cursorAim || classObj.cursorAim || '',
                    variant: meta.variant || classObj.variant || '',
                    tracer: meta.tracer || classObj.tracer || false,
                    magnification: meta.magnification || classObj.magnification || 0,
                    magazineWells: meta.magazineWells || classObj.magazineWells || [],
                    weaponSlots: meta.weaponSlots || classObj.weaponSlots || [],
                    compatibleSlots: meta.compatibleSlots || classObj.compatibleSlots || [],
                    compatibleWells: meta.compatibleWells || classObj.compatibleWells || []
                }
            };
            
            return item;
        });
    },

    switchCategory(category) {
        Arsenal.selectedCategory = category;
        
        // Update tab appearance
        document.querySelectorAll('.category-tab').forEach(tab => tab.classList.remove('active'));
        document.querySelector(`[data-category="${category}"]`).classList.add('active');
        
        // Check if DataService is ready
        if (!Arsenal.dataService.isReady()) {
            console.warn('DataService not ready, cannot switch category');
            return;
        }
        
        // Map UI categories to DataService categories using a more maintainable approach
        const categoryMapping = {
            'weapons': 'weapon',
            'handguns': 'handgun', 
            'launchers': 'launcher',
            'binoculars': 'binoculars',
            'backpacks': 'backpack',
            'vests': 'vest',
            'attachments': 'attachment',
            'magazines': 'magazine'
        };
        
        const dataServiceCategory = categoryMapping[category] || category;
        
        try {
            // Get items from DataService and transform them
            const dataServiceItems = Arsenal.dataService.getClassesByCategory(dataServiceCategory);
            
            // Debug: Log what we got from DataService
            console.log(`DataService returned ${dataServiceItems.length} items for category '${dataServiceCategory}'`);
            
            // If no items found, let's see what's available
            if (dataServiceItems.length === 0) {
                console.warn(`No items found for category '${dataServiceCategory}'`);
                const availableCategories = Arsenal.dataService.getAvailableCategories();
                const allData = Arsenal.dataService.getAllClasses();
                console.log('Available categories:', availableCategories);
                console.log('Total classes in DataService:', allData.size);
                
                // Sample some classes to see their structure
                if (allData.size > 0) {
                    const samples = Array.from(allData.entries()).slice(0, 3);
                    console.log('Sample classes:', samples.map(([name, data]) => ({
                        name,
                        category: data._meta?.category,
                        type: data._meta?.type,
                        displayName: data._meta?.displayName || data.displayName
                    })));
                }
            }
            
            // Transform the items and override category to match UI expectations
            const transformedItems = this.transformDataServiceItems(dataServiceItems).map(item => ({
                ...item,
                category: category // Ensure UI category is used
            }));
            
            console.log(`Transformed ${transformedItems.length} items for UI`);
            
            // Update current items for this category
            Arsenal.currentItems = transformedItems;
            
            // Update timing display with category info
            const timingElement = document.getElementById('timing');
            timingElement.textContent = `${transformedItems.length} ${category} loaded`;
            timingElement.style.color = ''; // Reset to default color
            
            // Populate filter options and update display
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.populateFilterOptions(category);
                Arsenal.filteredItems = FilterManager.filterItemsByCategory(category);
                
                import('./rendering.js').then(({ Renderer }) => {
                    Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
                });
            });
            
        } catch (error) {
            console.error(`Error switching to category ${category}:`, error);
            
            // Show error in timing display
            document.getElementById('timing').textContent = `Error loading ${category}`;
            document.getElementById('timing').style.color = '#ff4444';
            
            // Clear items on error
            Arsenal.currentItems = [];
            Arsenal.filteredItems = [];
        }
    },

    switchRightCategory(category) {
        Arsenal.selectedRightCategory = category;
        
        // Import and delegate to selection manager for right panel updates
        import('./selection.js').then(({ SelectionManager }) => {
            SelectionManager.updateRightCategoryTabs();
            
            if (Arsenal.selectedItem) {
                SelectionManager.updateRightPanel(Arsenal.selectedItem);
            } else {
                SelectionManager.clearRightPanelWithMessage('Select an item to view compatible accessories');
            }
        });
    },

    // Data regeneration helper
    regenerateData() {
        this.switchCategory(Arsenal.selectedCategory);
        this.switchRightCategory(Arsenal.selectedRightCategory);
        import('./selection.js').then(({ SelectionManager }) => {
            SelectionManager.clearSelection();
        });
    },

    // Enhanced DataService utilities
    getDataServiceStats() {
        if (!Arsenal.dataService.isReady()) {
            return null;
        }
        return Arsenal.dataService.getStats();
    },

    getAvailableCategories() {
        if (!Arsenal.dataService.isReady()) {
            return [];
        }
        return Arsenal.dataService.getAvailableCategories();
    },

    // Find a specific item by className using DataService 
    findItemByClassName(className) {
        if (!Arsenal.dataService.isReady()) {
            return null;
        }
        
        const enrichedClass = Arsenal.dataService.findClass(className);
        if (!enrichedClass) {
            return null;
        }
        
        // Transform single item to UI format
        return this.transformDataServiceItems([{
            className: className,
            ...enrichedClass
        }])[0];
    },

    // Get enrichment report for debugging
    getEnrichmentReport() {
        if (!Arsenal.dataService.isReady()) {
            return null;
        }
        return Arsenal.dataService.getEnrichmentReport();
    }
};