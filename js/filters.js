// Filter Management
// Handles all filtering logic for both left and right panels

export const FilterManager = {
    init() {
        // No specific initialization needed - filters are populated dynamically
    },

    // Category filtering
    filterItemsByCategory(category) {
        const categoryItems = Arsenal.currentItems.filter(item => item.category === category);
        return this.applyActiveFilters(categoryItems);
    },

    // Apply all active filters to items
    applyActiveFilters(items) {
        return items.filter(item => {
            // Mod filter
            if (Arsenal.activeFilters.mods.size > 0 && !Arsenal.activeFilters.mods.has(item.mod || 'Unknown')) {
                return false;
            }

            // Caliber filter (only apply if item has caliber data)
            if (Arsenal.activeFilters.calibers.size > 0) {
                const itemCaliber = item.caliber || (item.properties && item.properties.caliber);
                if (itemCaliber && !Arsenal.activeFilters.calibers.has(itemCaliber)) {
                    return false;
                }
            }

            // Weapon type filter (only apply to weapons category)
            if (Arsenal.activeFilters.weaponTypes.size > 0 && item.category === 'weapons') {
                const weaponType = item.cursorAim || (item.properties && item.properties.cursorAim);
                if (weaponType && !Arsenal.activeFilters.weaponTypes.has(weaponType)) {
                    return false;
                }
                if (!weaponType && !Arsenal.activeFilters.weaponTypes.has('other')) {
                    return false;
                }
            }

            return true;
        });
    },

    // Generate filter options dynamically based on current category
    populateFilterOptions(category) {
        const categoryItems = Arsenal.currentItems.filter(item => item.category === category);
        
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
        
        const caliberRelevantCategories = ['weapons', 'handguns', 'launchers', 'magazines'];
        
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
            Arsenal.activeFilters.calibers.clear();
        }

        const weaponTypeContainer = document.getElementById('weaponTypeFilters');
        const weaponTypeGroup = weaponTypeContainer.parentElement;
        
        if (category === 'weapons') {
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
            Arsenal.activeFilters.weaponTypes.clear();
        }
    },

    toggleFilter(filterType, value, isChecked) {
        if (isChecked) {
            Arsenal.activeFilters[filterType].add(value);
        } else {
            Arsenal.activeFilters[filterType].delete(value);
        }
        this.updateFilteredItems();
    },

    clearAllFilters() {
        Arsenal.activeFilters.mods.clear();
        Arsenal.activeFilters.calibers.clear();
        Arsenal.activeFilters.weaponTypes.clear();

        document.querySelectorAll('#modFilters input[type="checkbox"], #caliberFilters input[type="checkbox"], #weaponTypeFilters input[type="checkbox"]').forEach(checkbox => {
            checkbox.checked = false;
        });
        
        this.updateFilteredItems();
    },

    updateFilteredItems() {
        Arsenal.filteredItems = this.filterItemsByCategory(Arsenal.selectedCategory);
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
        });
    },

    applyRightPanelFilters(items) {
        return items.filter(item => {
            if (Arsenal.rightPanelFilters.magnifications.size > 0 && item.category === 'attachments') {
                const magnification = item.magnification || (item.properties && item.properties.magnification);
                if (magnification && !Arsenal.rightPanelFilters.magnifications.has(magnification)) {
                    return false;
                }
                if (!magnification && Arsenal.rightPanelFilters.magnifications.size > 0) {
                    return false;
                }
            }

            if (Arsenal.rightPanelFilters.capacities.size > 0 && item.category === 'magazines') {
                const capacity = item.capacity || (item.properties && item.properties.capacity);
                if (capacity) {
                    const capacityRange = this.getCapacityRange(capacity);
                    if (!Arsenal.rightPanelFilters.capacities.has(capacityRange)) {
                        return false;
                    }
                }
            }

            if (Arsenal.rightPanelFilters.tracers.size > 0 && item.category === 'magazines') {
                const isTracer = item.tracer || (item.properties && item.properties.tracer);
                const tracerType = isTracer ? 'Tracer' : 'Standard';
                if (!Arsenal.rightPanelFilters.tracers.has(tracerType)) {
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
        if (isChecked) {
            Arsenal.rightPanelFilters[filterType].add(value);
        } else {
            Arsenal.rightPanelFilters[filterType].delete(value);
        }
        import('./selection.js').then(({ SelectionManager }) => {
            if (Arsenal.selectedItem && Arsenal.selectedItem.category === 'weapons') {
                SelectionManager.updateCompatibleAccessories(Arsenal.selectedItem);
            } else {
                const rightItems = this.filterItemsByCategory(Arsenal.selectedRightCategory);
                import('./rendering.js').then(({ Renderer }) => {
                    Renderer.renderTreeView(rightItems, 'rightTreeView', false);
                });
            }
        });
    },

    clearRightPanelFilters() {
        Arsenal.rightPanelFilters.magnifications.clear();
        Arsenal.rightPanelFilters.capacities.clear();
        Arsenal.rightPanelFilters.tracers.clear();
        Arsenal.rightPanelFilters.ballistics.clear();

        document.querySelectorAll('#magnificationFilters input[type="checkbox"], #capacityFilters input[type="checkbox"], #tracerFilters input[type="checkbox"], #ballisticsFilters input[type="checkbox"]').forEach(checkbox => {
            checkbox.checked = false;
        });

        import('./selection.js').then(({ SelectionManager }) => {
            if (Arsenal.selectedItem && Arsenal.selectedItem.category === 'weapons') {
                SelectionManager.updateCompatibleAccessories(Arsenal.selectedItem);
            } else {
                const rightItems = this.filterItemsByCategory(Arsenal.selectedRightCategory);
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

        if (Arsenal.selectedRightCategory === 'attachments') {
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
        } else if (Arsenal.selectedRightCategory === 'magazines') {
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