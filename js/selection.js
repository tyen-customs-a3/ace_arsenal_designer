// Selection Management
// Handles item selection, stats display, and right panel management

export const SelectionManager = {
    init() {
        // Right panel tab listeners
        this.initializeRightTabListeners();
    },

    initializeRightTabListeners() {
        document.querySelectorAll('.attachment-tab').forEach(tab => {
            tab.addEventListener('click', () => {
                import('./data.js').then(({ DataManager }) => {
                    DataManager.switchRightCategory(tab.dataset.attachment);
                });
            });
        });
    },

    // Item selection and stats display
    selectItem(element) {
        // Remove previous selection
        document.querySelectorAll('.tree-item').forEach(item => item.classList.remove('selected'));
        document.querySelectorAll('.tree-parent').forEach(item => item.classList.remove('selected'));
        element.classList.add('selected');

        try {
            Arsenal.selectedItem = JSON.parse(element.dataset.item);
            
            this.updateStats(Arsenal.selectedItem);
            this.updateRightPanel(Arsenal.selectedItem);
        } catch (e) {
            console.warn('Could not parse item data:', e);
        }
    },

    // New function to select item by data without DOM dependency
    selectItemByData(itemData) {
        Arsenal.selectedItem = itemData;
        
        // Update visual selection after a short delay to ensure DOM is ready
        setTimeout(() => {
            // Remove previous selection
            document.querySelectorAll('.tree-item').forEach(item => item.classList.remove('selected'));
            document.querySelectorAll('.tree-parent').forEach(item => item.classList.remove('selected'));
            
            // Find and select the correct element
            const elements = document.querySelectorAll('[data-item]');
            for (const el of elements) {
                try {
                    const data = JSON.parse(el.dataset.item);
                    if (data.className === itemData.className) {
                        el.classList.add('selected');
                        break;
                    }
                } catch (e) {
                    continue;
                }
            }
        }, 0);
        
        this.updateStats(Arsenal.selectedItem);
        this.updateRightPanel(Arsenal.selectedItem);
    },

    updateStats(item) {
        // Clear all stat fields first
        const allStatFields = ['statName', 'statClassName', 'statMod', 'statDamage', 'statRange', 'statMass', 'statCapacity', 'statCaliber', 'statArmor', 'statRateOfFire', 'statZoom', 'statRecoil'];
        allStatFields.forEach(fieldId => {
            const element = document.getElementById(fieldId);
            if (element) {
                element.parentElement.style.display = 'none';
            }
        });

        // Always show basic info
        document.getElementById('statName').textContent = item.displayName || item.name || '-';
        document.getElementById('statName').parentElement.style.display = 'block';
        
        document.getElementById('statClassName').textContent = item.className || '-';
        document.getElementById('statClassName').parentElement.style.display = 'block';
        
        document.getElementById('statMod').textContent = item.mod || '-';
        document.getElementById('statMod').parentElement.style.display = 'block';

        // Show category-specific stats
        const category = item.category || item.type;
        
        if (category === 'weapons' || category === 'weapon' || category === 'handguns' || category === 'handgun' || category === 'launchers' || category === 'launcher') {
            // Weapons: range, mass, caliber, rate of fire
            if (item.range || item.properties?.range) {
                document.getElementById('statRange').textContent = `${item.range || item.properties.range}m`;
                document.getElementById('statRange').parentElement.style.display = 'block';
            }
            
            if (item.mass || item.properties?.mass) {
                document.getElementById('statMass').textContent = `${((item.mass || item.properties.mass)/1000).toFixed(2)}kg`;
                document.getElementById('statMass').parentElement.style.display = 'block';
            }
            
            if (item.caliber || item.properties?.caliber) {
                // Create caliber field if it doesn't exist
                let caliberElement = document.getElementById('statCaliber');
                if (!caliberElement) {
                    const caliberDiv = document.createElement('div');
                    caliberDiv.className = 'stat-item';
                    caliberDiv.innerHTML = '<span class="stat-label">Caliber:</span><span class="stat-value" id="statCaliber">-</span>';
                    document.getElementById('statMod').parentElement.parentNode.appendChild(caliberDiv);
                    caliberElement = document.getElementById('statCaliber');
                }
                caliberElement.textContent = item.caliber || item.properties.caliber;
                caliberElement.parentElement.style.display = 'block';
            }
            
            if (item.rateOfFire || item.properties?.rateOfFire) {
                // Create rate of fire field if it doesn't exist
                let rofElement = document.getElementById('statRateOfFire');
                if (!rofElement) {
                    const rofDiv = document.createElement('div');
                    rofDiv.className = 'stat-item';
                    rofDiv.innerHTML = '<span class="stat-label">Rate of Fire:</span><span class="stat-value" id="statRateOfFire">-</span>';
                    document.getElementById('statMod').parentElement.parentNode.appendChild(rofDiv);
                    rofElement = document.getElementById('statRateOfFire');
                }
                rofElement.textContent = `${item.rateOfFire || item.properties.rateOfFire} rpm`;
                rofElement.parentElement.style.display = 'block';
            }
            
        } else if (category === 'vests' || category === 'vest') {
            // Vests: armor, maximumLoad, mass
            if (item.armor || item.properties?.armor) {
                // Create armor field if it doesn't exist
                let armorElement = document.getElementById('statArmor');
                if (!armorElement) {
                    const armorDiv = document.createElement('div');
                    armorDiv.className = 'stat-item';
                    armorDiv.innerHTML = '<span class="stat-label">Armor:</span><span class="stat-value" id="statArmor">-</span>';
                    document.getElementById('statMod').parentElement.parentNode.appendChild(armorDiv);
                    armorElement = document.getElementById('statArmor');
                }
                armorElement.textContent = item.armor || item.properties.armor;
                armorElement.parentElement.style.display = 'block';
            }
            
            if (item.maximumLoad || item.properties?.maximumLoad) {
                document.getElementById('statCapacity').parentElement.querySelector('.stat-label').textContent = 'Max Load:';
                document.getElementById('statCapacity').textContent = `${item.maximumLoad || item.properties.maximumLoad}kg`;
                document.getElementById('statCapacity').parentElement.style.display = 'block';
            }
            
            if (item.mass || item.properties?.mass) {
                document.getElementById('statMass').textContent = `${((item.mass || item.properties.mass)/1000).toFixed(2)}kg`;
                document.getElementById('statMass').parentElement.style.display = 'block';
            }
            
        } else if (category === 'backpacks' || category === 'backpack') {
            // Backpacks: maximumLoad, mass
            if (item.maximumLoad || item.properties?.maximumLoad) {
                document.getElementById('statCapacity').parentElement.querySelector('.stat-label').textContent = 'Max Load:';
                document.getElementById('statCapacity').textContent = `${item.maximumLoad || item.properties.maximumLoad}kg`;
                document.getElementById('statCapacity').parentElement.style.display = 'block';
            }
            
            if (item.mass || item.properties?.mass) {
                document.getElementById('statMass').textContent = `${((item.mass || item.properties.mass)/1000).toFixed(2)}kg`;
                document.getElementById('statMass').parentElement.style.display = 'block';
            }
            
        } else if (category === 'magazines' || category === 'magazine') {
            // Magazines: caliber, capacity, mass
            if (item.caliber || item.properties?.caliber) {
                // Create caliber field if it doesn't exist
                let caliberElement = document.getElementById('statCaliber');
                if (!caliberElement) {
                    const caliberDiv = document.createElement('div');
                    caliberDiv.className = 'stat-item';
                    caliberDiv.innerHTML = '<span class="stat-label">Caliber:</span><span class="stat-value" id="statCaliber">-</span>';
                    document.getElementById('statMod').parentElement.parentNode.appendChild(caliberDiv);
                    caliberElement = document.getElementById('statCaliber');
                }
                caliberElement.textContent = item.caliber || item.properties.caliber;
                caliberElement.parentElement.style.display = 'block';
            }
            
            if (item.capacity || item.properties?.capacity) {
                document.getElementById('statCapacity').parentElement.querySelector('.stat-label').textContent = 'Capacity:';
                document.getElementById('statCapacity').textContent = item.capacity || item.properties.capacity;
                document.getElementById('statCapacity').parentElement.style.display = 'block';
            }
            
            if (item.mass || item.properties?.mass) {
                document.getElementById('statMass').textContent = `${((item.mass || item.properties.mass)/1000).toFixed(2)}kg`;
                document.getElementById('statMass').parentElement.style.display = 'block';
            }
            
        } else if (category === 'attachments' || category === 'attachment') {
            // Attachments: mass, zoom, recoil modifier, sway modifier
            if (item.mass || item.properties?.mass) {
                document.getElementById('statMass').textContent = `${((item.mass || item.properties.mass)/1000).toFixed(2)}kg`;
                document.getElementById('statMass').parentElement.style.display = 'block';
            }
            
            if (item.zoom || item.properties?.zoom) {
                // Create zoom field if it doesn't exist
                let zoomElement = document.getElementById('statZoom');
                if (!zoomElement) {
                    const zoomDiv = document.createElement('div');
                    zoomDiv.className = 'stat-item';
                    zoomDiv.innerHTML = '<span class="stat-label">Zoom:</span><span class="stat-value" id="statZoom">-</span>';
                    document.getElementById('statMod').parentElement.parentNode.appendChild(zoomDiv);
                    zoomElement = document.getElementById('statZoom');
                }
                zoomElement.textContent = `${item.zoom || item.properties.zoom}x`;
                zoomElement.parentElement.style.display = 'block';
            }
            
            if (item.recoilModifier || item.properties?.recoilModifier) {
                // Create recoil field if it doesn't exist
                let recoilElement = document.getElementById('statRecoil');
                if (!recoilElement) {
                    const recoilDiv = document.createElement('div');
                    recoilDiv.className = 'stat-item';
                    recoilDiv.innerHTML = '<span class="stat-label">Recoil:</span><span class="stat-value" id="statRecoil">-</span>';
                    document.getElementById('statMod').parentElement.parentNode.appendChild(recoilDiv);
                    recoilElement = document.getElementById('statRecoil');
                }
                recoilElement.textContent = `${((item.recoilModifier || item.properties.recoilModifier) * 100).toFixed(0)}%`;
                recoilElement.parentElement.style.display = 'block';
            }
        }
    },

    clearSelection() {
        // Clear visual selection
        document.querySelectorAll('.tree-item').forEach(item => item.classList.remove('selected'));
        document.querySelectorAll('.tree-parent').forEach(item => item.classList.remove('selected'));
        
        // Clear selected item
        Arsenal.selectedItem = null;
        
        // Clear stats
        ['statName', 'statClassName', 'statMod', 'statDamage', 'statRange', 'statMass', 'statCapacity'].forEach(id => {
            document.getElementById(id).textContent = '-';
        });
    },

    // Right panel management
    updateRightPanel(selectedItem) {
        // Show/hide tabs based on selected item type
        const allTabs = document.querySelectorAll('.attachment-tab');
        
        if (selectedItem && (selectedItem.category === 'weapons' || selectedItem.category === 'handguns' || selectedItem.category === 'launchers')) {
            // Show weapon and shared tabs
            allTabs.forEach(tab => {
                const context = tab.dataset.context;
                if (context === 'weapon' || context === 'both') {
                    tab.style.display = 'flex';
                } else {
                    tab.style.display = 'none';
                }
            });
            
            // Set default to optics if current category doesn't make sense for weapons
            if (!['optics', 'attachments', 'bipods', 'magazines'].includes(Arsenal.selectedRightCategory)) {
                Arsenal.selectedRightCategory = 'optics';
            }
            this.updateRightCategoryTabs();
            this.updateCompatibleAccessories(selectedItem);
            
        } else if (selectedItem && (selectedItem.category === 'backpacks' || selectedItem.category === 'vests')) {
            // Show storage and shared tabs
            allTabs.forEach(tab => {
                const context = tab.dataset.context;
                if (context === 'storage' || context === 'both') {
                    tab.style.display = 'flex';
                } else {
                    tab.style.display = 'none';
                }
            });
            
            // Set default to magazines if current category doesn't make sense for storage
            if (!['magazines', 'medical', 'food', 'tools', 'misc'].includes(Arsenal.selectedRightCategory)) {
                Arsenal.selectedRightCategory = 'magazines';
            }
            this.updateRightCategoryTabs();
            this.updateStorageItems();
            
        } else {
            // No item selected, show weapon tabs by default
            allTabs.forEach(tab => {
                const context = tab.dataset.context;
                if (context === 'weapon' || context === 'both') {
                    tab.style.display = 'flex';
                } else {
                    tab.style.display = 'none';
                }
            });
            
            this.clearRightPanelWithMessage('Select an item to view compatible accessories');
        }
    },

    updateCompatibleAccessories(weapon) {
        import('./compatibility.js').then(({ CompatibilityEngine }) => {
            let items = [];
            
            if (Arsenal.selectedRightCategory === 'magazines') {
                items = CompatibilityEngine.getCompatibleMagazines(weapon);
            } else {
                // For optics, attachments, bipods
                items = CompatibilityEngine.getCompatibleAccessories(weapon, Arsenal.selectedRightCategory);
            }
            
            // Apply right panel filters
            import('./filters.js').then(({ FilterManager }) => {
                const filteredItems = FilterManager.applyRightPanelFilters(items);
                
                // Populate right panel filter options
                FilterManager.populateRightPanelFilterOptions(filteredItems);
                
                import('./rendering.js').then(({ Renderer }) => {
                    Renderer.renderTreeView(filteredItems, 'rightTreeView', false);
                });
            });
        });
    },

    updateStorageItems() {
        import('./compatibility.js').then(({ CompatibilityEngine }) => {
            const items = CompatibilityEngine.getStorageItems(Arsenal.selectedRightCategory);
            
            // Populate right panel filter options
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.populateRightPanelFilterOptions(items);
                
                import('./rendering.js').then(({ Renderer }) => {
                    Renderer.renderTreeView(items, 'rightTreeView', false);
                });
            });
        });
    },

    updateRightCategoryTabs() {
        // Remove active from all tabs
        document.querySelectorAll('.attachment-tab').forEach(tab => tab.classList.remove('active'));
        
        // Set active on the selected tab
        const activeTab = document.querySelector(`[data-attachment="${Arsenal.selectedRightCategory}"]`);
        if (activeTab && activeTab.style.display !== 'none') {
            activeTab.classList.add('active');
        }
    },

    clearRightPanelWithMessage(message) {
        const rightTreeView = document.getElementById('rightTreeView');
        if (rightTreeView) {
            // Apply consistent spacing via architecture
            const spacing = Arsenal.displayOptions.spacing || 'general';
            rightTreeView.className = `tree-view spacing-${spacing}`;
            rightTreeView.innerHTML = `<div style="padding: 20px; text-align: center; color: #666;">${message}</div>`;
        }
    }
};