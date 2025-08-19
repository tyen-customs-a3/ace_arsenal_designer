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
                if (meta.displayName && meta.displayName.trim()) {
                    return meta.displayName;
                }
                if (classObj.displayName && classObj.displayName.trim()) {
                    return classObj.displayName;
                }
                if (classObj.properties?.displayName && classObj.properties.displayName.trim()) {
                    return classObj.properties.displayName.trim();
                }
                return classObj.className;
            };
            
            // Create UI-compatible item object
            const item = {
                className: classObj.className,
                displayName: getDisplayName(),
                category: meta.category || 'unknown',
                mod: classObj._sourceMod || 'Unknown',
                baseClass: classObj.baseClass || '',
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
                magazineWells: meta.magazineWells || classObj.magazineWells || [],
                weaponSlots: meta.weaponSlots || classObj.weaponSlots || [],
                compatibleSlots: meta.compatibleSlots || classObj.compatibleSlots || [],
                compatibleWells: meta.compatibleWells || classObj.compatibleWells || [],
                cursorAim: meta.cursorAim || classObj.cursorAim || '',
                variant: meta.variant || classObj.variant || '',
                tracer: meta.tracer || classObj.tracer || false,
                magnification: meta.magnification || classObj.magnification || 0,
                _originalData: classObj,
                _meta: meta,
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
        const activeTab = document.querySelector(`[data-category="${category}"]`);
        if (activeTab) {
            activeTab.classList.add('active');
        }
        
        if (!Arsenal.dataService.isReady()) {
            console.warn('DataService not ready, cannot switch category');
            return;
        }
        
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
            const dataServiceItems = Arsenal.dataService.getClassesByCategory(dataServiceCategory);
            console.log(`DataService returned ${dataServiceItems.length} items for category '${dataServiceCategory}'`);
            
            if (dataServiceItems.length === 0) {
                console.warn(`No items found for category '${dataServiceCategory}'`);
                const availableCategories = Arsenal.dataService.getAvailableCategories();
                const allData = Arsenal.dataService.getAllClasses();
                console.log('Available categories:', availableCategories);
            }
            
            const transformedItems = this.transformDataServiceItems(dataServiceItems).map(item => ({
                ...item,
                category: category
            }));
            
            console.log(`Transformed ${transformedItems.length} items for UI`);
            Arsenal.currentItems = transformedItems;
            
            const timingElement = document.getElementById('timing');
            timingElement.textContent = `${transformedItems.length} ${category} loaded`;
            timingElement.style.color = '';
            
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.populateFilterOptions(category);
                Arsenal.filteredItems = FilterManager.filterItemsByCategory(category);
                
                import('./rendering.js').then(({ Renderer }) => {
                    Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
                });
            });
            
        } catch (error) {
            console.error(`Error switching to category ${category}:`, error);
            document.getElementById('timing').textContent = `Error loading ${category}`;
            document.getElementById('timing').style.color = '#ff4444';
            Arsenal.currentItems = [];
            Arsenal.filteredItems = [];
        }
    },

    switchRightCategory(category) {
        Arsenal.selectedRightCategory = category;
        
        import('./selection.js').then(({ SelectionManager }) => {
            SelectionManager.updateRightCategoryTabs();
            
            if (Arsenal.selectedItem) {
                SelectionManager.updateRightPanel(Arsenal.selectedItem);
            } else {
                SelectionManager.clearRightPanelWithMessage('Select an item to view compatible accessories');
            }
        });
    },

    regenerateData() {
        this.switchCategory(Arsenal.selectedCategory);
        this.switchRightCategory(Arsenal.selectedRightCategory);
        import('./selection.js').then(({ SelectionManager }) => {
            SelectionManager.clearSelection();
        });
    },

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

    findItemByClassName(className) {
        if (!Arsenal.dataService.isReady()) {
            return null;
        }
        
        const enrichedClass = Arsenal.dataService.findClass(className);
        if (!enrichedClass) {
            return null;
        }
        
        return this.transformDataServiceItems([{
            className: className,
            ...enrichedClass
        }])[0];
    },

    getEnrichmentReport() {
        if (!Arsenal.dataService.isReady()) {
            return null;
        }
        return Arsenal.dataService.getEnrichmentReport();
    }
};