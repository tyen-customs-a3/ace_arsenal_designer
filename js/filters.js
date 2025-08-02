// Filter Management
// Handles all filtering logic for both left and right panels

export const FilterManager = {
    init() {
        // No specific initialization needed - filters are populated dynamically
    },

    // Category filtering
    filterItemsByCategory(category) {
        const categoryItems = Arsenal.currentItems.filter(item => item.category === category);
        const filtered = this.applyActiveFilters(categoryItems);
        return filtered;
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
                // If item has no caliber data, it passes caliber filter (relevant for vests/backpacks)
            }

            // Weapon type filter (only apply to weapons category)
            if (Arsenal.activeFilters.weaponTypes.size > 0 && item.category === 'weapons') {
                const weaponType = item.cursorAim || (item.properties && item.properties.cursorAim);
                if (weaponType && !Arsenal.activeFilters.weaponTypes.has(weaponType)) {
                    return false;
                }
                // If weapon has no cursorAim data, classify as "other"
                if (!weaponType && !Arsenal.activeFilters.weaponTypes.has('other')) {
                    return false;
                }
            }

            // Variant filter
            const hasVariant = item.variant || (item.properties && item.properties.variant);
            if (!hasVariant && !Arsenal.activeFilters.variants.base) {
                return false; // Base item but base items are not selected
            }
            if (hasVariant && !Arsenal.activeFilters.variants.variants) {
                return false; // Variant item but variants are not selected
            }

            return true;
        });
    },

    // Generate filter options dynamically based on current category
    populateFilterOptions(category) {
        const categoryItems = Arsenal.currentItems.filter(item => item.category === category);
        
        // Get unique values for mod filter (always relevant)
        const mods = [...new Set(categoryItems.map(item => item.mod || 'Unknown'))].sort();

        // Populate mod filters
        const modContainer = document.getElementById('modFilters');
        modContainer.innerHTML = mods.map(mod => `
            <label class="filter-checkbox">
                <input type="checkbox" value="${mod}" onchange="FilterManager.toggleFilter('mods', '${mod}', this.checked)">
                <span>${mod}</span>
            </label>
        `).join('');

        // Category-specific filter rules
        const caliberContainer = document.getElementById('caliberFilters');
        const caliberGroup = caliberContainer.parentElement;
        
        // Categories that should have caliber filter
        const caliberRelevantCategories = ['weapons', 'handguns', 'launchers', 'magazines'];
        
        if (caliberRelevantCategories.includes(category)) {
            // Show caliber filter and populate it
            caliberGroup.style.display = 'block';
            const calibers = [...new Set(categoryItems.map(item => item.caliber || (item.properties && item.properties.caliber)).filter(c => c))].sort();
            
            caliberContainer.innerHTML = calibers.map(caliber => `
                <label class="filter-checkbox">
                    <input type="checkbox" value="${caliber}" onchange="FilterManager.toggleFilter('calibers', '${caliber}', this.checked)">
                    <span>${caliber}</span>
                </label>
            `).join('');
        } else {
            // Hide caliber filter for categories that don't need it
            caliberGroup.style.display = 'none';
            // Clear any active caliber filters
            Arsenal.activeFilters.calibers.clear();
        }

        // Weapon type filter (only for weapons category)
        const weaponTypeContainer = document.getElementById('weaponTypeFilters');
        const weaponTypeGroup = weaponTypeContainer.parentElement;
        
        if (category === 'weapons') {
            // Show weapon type filter and populate it
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
            // Hide weapon type filter for non-weapon categories
            weaponTypeGroup.style.display = 'none';
            // Clear any active weapon type filters
            Arsenal.activeFilters.weaponTypes.clear();
        }
    },

    // Toggle individual filter
    toggleFilter(filterType, value, isChecked) {
        if (isChecked) {
            Arsenal.activeFilters[filterType].add(value);
        } else {
            Arsenal.activeFilters[filterType].delete(value);
        }
        this.updateFilteredItems();
    },

    // Toggle variant filter
    toggleVariantFilter(type, isChecked) {
        Arsenal.activeFilters.variants[type] = isChecked;
        this.updateFilteredItems();
    },

    // Clear all filters
    clearAllFilters() {
        Arsenal.activeFilters.mods.clear();
        Arsenal.activeFilters.calibers.clear();
        Arsenal.activeFilters.weaponTypes.clear();
        Arsenal.activeFilters.variants = {
            base: true,
            variants: true
        };

        // Reset UI - uncheck mod, caliber, and weapon type filters, check variant filters
        document.querySelectorAll('#modFilters input[type="checkbox"], #caliberFilters input[type="checkbox"], #weaponTypeFilters input[type="checkbox"]').forEach(checkbox => {
            checkbox.checked = false;
        });
        
        // Reset variant checkboxes to checked (show all)
        document.getElementById('showBaseItems').checked = true;
        document.getElementById('showVariants').checked = true;

        this.updateFilteredItems();
    },

    // Update filtered items and refresh display
    updateFilteredItems() {
        Arsenal.filteredItems = this.filterItemsByCategory(Arsenal.selectedCategory);
        import('./rendering.js').then(({ Renderer }) => {
            Renderer.renderTreeView(Arsenal.filteredItems, 'leftTreeView');
        });
    },

    // Apply right panel filters to items
    applyRightPanelFilters(items) {
        return items.filter(item => {
            // Magnification filter (for attachments/optics)
            if (Arsenal.rightPanelFilters.magnifications.size > 0 && item.category === 'attachments') {
                const magnification = item.magnification || (item.properties && item.properties.magnification);
                if (magnification && !Arsenal.rightPanelFilters.magnifications.has(magnification)) {
                    return false;
                }
                // If attachment has no magnification data and filter is active, exclude it
                if (!magnification && Arsenal.rightPanelFilters.magnifications.size > 0) {
                    return false;
                }
            }

            // Capacity filter (for magazines)
            if (Arsenal.rightPanelFilters.capacities.size > 0 && item.category === 'magazines') {
                const capacity = item.capacity || (item.properties && item.properties.capacity);
                if (capacity) {
                    const capacityRange = this.getCapacityRange(capacity);
                    if (!Arsenal.rightPanelFilters.capacities.has(capacityRange)) {
                        return false;
                    }
                }
            }

            // Tracer filter (for magazines)
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

    // Helper function to categorize magazine capacity
    getCapacityRange(capacity) {
        if (capacity <= 10) return '1-10';
        if (capacity <= 30) return '11-30';
        if (capacity <= 50) return '31-50';
        if (capacity <= 100) return '51-100';
        return '100+';
    },

    // Right panel filter functions
    toggleRightPanelFilterType(filterType, value, isChecked) {
        if (isChecked) {
            Arsenal.rightPanelFilters[filterType].add(value);
        } else {
            Arsenal.rightPanelFilters[filterType].delete(value);
        }
        // Refresh right panel with filtered items
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

        // Reset UI - uncheck all right panel filters
        document.querySelectorAll('#magnificationFilters input[type="checkbox"], #capacityFilters input[type="checkbox"], #tracerFilters input[type="checkbox"], #ballisticsFilters input[type="checkbox"]').forEach(checkbox => {
            checkbox.checked = false;
        });

        // Refresh right panel
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

    // Populate right panel filter options based on current right category
    populateRightPanelFilterOptions(items) {
        const magnificationContainer = document.getElementById('magnificationFilters');
        const capacityContainer = document.getElementById('capacityFilters');
        const tracerContainer = document.getElementById('tracerFilters');
        const ballisticsContainer = document.getElementById('ballisticsFilters');

        // Clear all containers
        magnificationContainer.innerHTML = '';
        capacityContainer.innerHTML = '';
        tracerContainer.innerHTML = '';
        ballisticsContainer.innerHTML = '';

        // Hide all filter groups initially
        magnificationContainer.parentElement.style.display = 'none';
        capacityContainer.parentElement.style.display = 'none';
        tracerContainer.parentElement.style.display = 'none';
        ballisticsContainer.parentElement.style.display = 'none';

        if (Arsenal.selectedRightCategory === 'attachments') {
            // Show magnification filter for attachments
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
            // Show capacity and tracer filters for magazines
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

            // Tracer filter
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

// Make FilterManager globally available for HTML onclick handlers
window.FilterManager = FilterManager;