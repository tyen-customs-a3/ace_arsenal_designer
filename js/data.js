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
            
            // Create UI-compatible item object
            const item = {
                className: classObj.className,
                displayName: meta.displayName || classObj.displayName || classObj.className,
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
        
        // Map UI categories to DataService categories if needed
        let dataServiceCategory = category;
        if (category === 'weapons') dataServiceCategory = 'weapon';
        else if (category === 'handguns') dataServiceCategory = 'handgun';
        else if (category === 'launchers') dataServiceCategory = 'launcher';
        else if (category === 'backpacks') dataServiceCategory = 'backpack';
        else if (category === 'vests') dataServiceCategory = 'vest';
        else if (category === 'attachments') dataServiceCategory = 'attachment';
        else if (category === 'magazines') dataServiceCategory = 'magazine';
        
        // Get items from DataService and transform them
        const dataServiceItems = Arsenal.dataService.getClassesByCategory(dataServiceCategory);
        
        // Transform the items and override category to match UI expectations
        const transformedItems = this.transformDataServiceItems(dataServiceItems).map(item => ({
            ...item,
            category: category // Ensure UI category is used
        }));
        
        // Update current items for this category
        Arsenal.currentItems = transformedItems;
        
        // Populate filter options and update display
        import('./filters.js').then(({ FilterManager }) => {
            FilterManager.populateFilterOptions(category);
            Arsenal.filteredItems = FilterManager.filterItemsByCategory(category);
            
            import('./rendering.js').then(({ Renderer }) => {
                Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
            });
        });
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
    }
};