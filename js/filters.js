// Filter Management
// Handles all filtering logic for both left and right panels

import { getState, actions as StateActions } from './StateManager.js';

export const FilterManager = {
    init() {
        // No specific initialization needed - filters are populated dynamically
    },

    // Category filtering
    filterItemsByCategory(category) {
        const { currentItems } = getState();
        const categoryItems = currentItems.filter(item => item.category === category);
        return this.applyActiveFilters(categoryItems);
    },

    // Apply all active filters to items
    applyActiveFilters(items) {
        const { activeFilters } = getState();
        return items.filter(item => {
            // Mod filter
            if (activeFilters.mods.size > 0 && !activeFilters.mods.has(item.mod || 'Unknown')) {
                return false;
            }

            // Caliber filter (only apply if item has caliber data)
            if (activeFilters.calibers.size > 0) {
                const itemCaliber = item.caliber || (item.properties && item.properties.caliber);
                if (itemCaliber && !activeFilters.calibers.has(itemCaliber)) {
                    return false;
                }
            }

            // Weapon type filter (apply to rifles, pistols, and launchers)
            if (activeFilters.weaponTypes.size > 0 && ['rifles', 'pistols', 'launchers'].includes(item.category)) {
                const weaponType = item.cursorAim || (item.properties && item.properties.cursorAim);
                if (weaponType && !activeFilters.weaponTypes.has(weaponType)) {
                    return false;
                }
                if (!weaponType && !activeFilters.weaponTypes.has('other')) {
                    return false;
                }
            }

            return true;
        });
    },

    // Generate filter options dynamically based on current category
    populateFilterOptions(category) {
        const { currentItems } = getState();
        const categoryItems = currentItems.filter(item => item.category === category);
        
        const mods = [...new Set(categoryItems.map(item => item.mod || 'Unknown'))].sort();

        const modContainer = document.getElementById('modFilters');
        modContainer.innerHTML = mods.map(mod => `
            <label class="filter-checkbox">
                <input type="checkbox" value="${mod}" onchange="FilterManager.toggleFilter('mods', '${mod}', this.checked)">
                <span>${mod}</span>
            </label>
        `).join('');

        const caliberContainer = document.getElementById('caliberFilters');
        const caliberGroup = caliberContainer.parentElement;
        
        const caliberRelevantCategories = ['rifles', 'pistols', 'launchers', 'magazines'];
        
        if (caliberRelevantCategories.includes(category)) {
            caliberGroup.style.display = 'block';
            const calibers = [...new Set(categoryItems.map(item => item.caliber || (item.properties && item.properties.caliber)).filter(c => c))].sort();
            
            caliberContainer.innerHTML = calibers.map(caliber => `
                <label class="filter-checkbox">
                    <input type="checkbox" value="${caliber}" onchange="FilterManager.toggleFilter('calibers', '${caliber}', this.checked)">
                    <span>${caliber}</span>
                </label>
            `).join('');
        } else {
            caliberGroup.style.display = 'none';
            StateActions.clearAllFilters();
        }

        const weaponTypeContainer = document.getElementById('weaponTypeFilters');
        const weaponTypeGroup = weaponTypeContainer.parentElement;
        
        if (['rifles', 'pistols', 'launchers'].includes(category)) {
            weaponTypeGroup.style.display = 'block';
            const weaponTypes = [...new Set(categoryItems.map(item => {
                return item.cursorAim || (item.properties && item.properties.cursorAim) || 'other';
            }))].sort();
            
            weaponTypeContainer.innerHTML = weaponTypes.map(weaponType => `
                <label class="filter-checkbox">
                    <input type="checkbox" value="${weaponType}" onchange="FilterManager.toggleFilter('weaponTypes', '${weaponType}', this.checked)">
                    <span>${weaponType.toUpperCase()}</span>
                </label>
            `).join('');
        } else {
            weaponTypeGroup.style.display = 'none';
            StateActions.clearAllFilters();
        }
    },

    toggleFilter(filterType, value, isChecked) {
        StateActions.toggleFilter(filterType, value, isChecked);
        this.updateFilteredItems();
    },

    clearAllFilters() {
        StateActions.clearAllFilters();

        document.querySelectorAll('#modFilters input[type="checkbox"], #caliberFilters input[type="checkbox"], #weaponTypeFilters input[type="checkbox"]').forEach(checkbox => {
            checkbox.checked = false;
        });
        
        this.updateFilteredItems();
    },

    updateFilteredItems() {
        const { selectedCategory } = getState();
        const items = this.filterItemsByCategory(selectedCategory);
        StateActions.setFilteredItems(items);
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(items, 'leftTreeView');
        });
    },

    applyRightPanelFilters(items) {
        return items.filter(item => {
        const { rightPanelFilters } = getState();
        if (rightPanelFilters.magnifications.size > 0 && item.category === 'attachments') {
            const magnification = item.magnification || (item.properties && item.properties.magnification);
            if (magnification && !rightPanelFilters.magnifications.has(magnification)) {
                return false;
            }
            if (!magnification && rightPanelFilters.magnifications.size > 0) {
                return false;
            }
        }

        if (rightPanelFilters.capacities.size > 0 && item.category === 'magazines') {
            const capacity = item.capacity || (item.properties && item.properties.capacity);
            if (capacity) {
                const capacityRange = this.getCapacityRange(capacity);
                if (!rightPanelFilters.capacities.has(capacityRange)) {
                    return false;
                }
            }
        }

        if (rightPanelFilters.tracers.size > 0 && item.category === 'magazines') {
            const isTracer = item.tracer || (item.properties && item.properties.tracer);
            const tracerType = isTracer ? 'Tracer' : 'Standard';
            if (!rightPanelFilters.tracers.has(tracerType)) {
                return false;
            }
        }

            return true;
        });
    },

    getCapacityRange(capacity) {
        if (capacity <= 10) return '1-10';
        if (capacity <= 30) return '11-30';
        if (capacity <= 50) return '31-50';
        if (capacity <= 100) return '51-100';
        return '100+';
    },

    toggleRightPanelFilterType(filterType, value, isChecked) {
        StateActions.toggleRightPanelFilterType(filterType, value, isChecked);
        import('./selection.js').then(({ SelectionManager }) => {
            const { selectedItem, selectedRightCategory } = getState();
            if (selectedItem && ['rifles', 'pistols', 'launchers'].includes(selectedItem.category)) {
                SelectionManager.updateCompatibleAccessories(selectedItem);
            } else {
                const rightItems = this.filterItemsByCategory(selectedRightCategory);
                import('./rendering.js').then(({ Renderer }) => {
                    Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                });
            }
        });
    },

    clearRightPanelFilters() {
        StateActions.clearRightPanelFilters();

        document.querySelectorAll('#magnificationFilters input[type="checkbox"], #capacityFilters input[type="checkbox"], #tracerFilters input[type="checkbox"], #ballisticsFilters input[type="checkbox"]').forEach(checkbox => {
            checkbox.checked = false;
        });

        import('./selection.js').then(({ SelectionManager }) => {
            const { selectedItem, selectedRightCategory } = getState();
            if (selectedItem && ['rifles', 'pistols', 'launchers'].includes(selectedItem.category)) {
                SelectionManager.updateCompatibleAccessories(selectedItem);
            } else {
                const rightItems = this.filterItemsByCategory(selectedRightCategory);
                import('./rendering.js').then(({ Renderer }) => {
                    Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                });
            }
        });
    },

    populateRightPanelFilterOptions(items) {
        const magnificationContainer = document.getElementById('magnificationFilters');
        const capacityContainer = document.getElementById('capacityFilters');
        const tracerContainer = document.getElementById('tracerFilters');
        const ballisticsContainer = document.getElementById('ballisticsFilters');

        magnificationContainer.innerHTML = '';
        capacityContainer.innerHTML = '';
        tracerContainer.innerHTML = '';
        ballisticsContainer.innerHTML = '';

        magnificationContainer.parentElement.style.display = 'none';
        capacityContainer.parentElement.style.display = 'none';
        tracerContainer.parentElement.style.display = 'none';
        ballisticsContainer.parentElement.style.display = 'none';

        const { selectedRightCategory } = getState();
        if (selectedRightCategory === 'attachments') {
            const magnifications = [...new Set(items.map(item => {
                return item.magnification || (item.properties && item.properties.magnification);
            }).filter(m => m))].sort();

            if (magnifications.length > 0) {
                magnificationContainer.parentElement.style.display = 'block';
                magnificationContainer.innerHTML = magnifications.map(mag => `
                    <label class="filter-checkbox">
                        <input type="checkbox" value="${mag}" onchange="FilterManager.toggleRightPanelFilterType('magnifications', '${mag}', this.checked)">
                        <span>${mag}</span>
                    </label>
                `).join('');
            }
        } else if (selectedRightCategory === 'magazines') {
            const capacities = [...new Set(items.map(item => {
                const capacity = item.capacity || (item.properties && item.properties.capacity);
                return capacity ? this.getCapacityRange(capacity) : null;
            }).filter(c => c))].sort();

            if (capacities.length > 0) {
                capacityContainer.parentElement.style.display = 'block';
                capacityContainer.innerHTML = capacities.map(cap => `
                    <label class="filter-checkbox">
                        <input type="checkbox" value="${cap}" onchange="FilterManager.toggleRightPanelFilterType('capacities', '${cap}', this.checked)">
                        <span>${cap} rounds</span>
                    </label>
                `).join('');
            }

            tracerContainer.parentElement.style.display = 'block';
            tracerContainer.innerHTML = `
                <label class="filter-checkbox">
                    <input type="checkbox" value="Standard" onchange="FilterManager.toggleRightPanelFilterType('tracers', 'Standard', this.checked)">
                    <span>Standard</span>
                </label>
                <label class="filter-checkbox">
                    <input type="checkbox" value="Tracer" onchange="FilterManager.toggleRightPanelFilterType('tracers', 'Tracer', this.checked)">
                    <span>Tracer</span>
                </label>
            `;
        }
    }
};

window.FilterManager = FilterManager;
