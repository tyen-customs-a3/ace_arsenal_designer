// Selection Management
// Handles item selection, stats display, and right panel management

import { getState, actions as StateActions } from './StateManager.js';
import { dataService } from '../services/DataService.js';

export const SelectionManager = {
    init() {
        // Right panel tab listeners
        this.initializeRightTabListeners();
        // Expose equip handler for tree view integration
        if (typeof window !== 'undefined') {
            window.equipRightPanelItem = (item) => this.equipFromRightPanel(item);
        }
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
            const item = JSON.parse(element.dataset.item);
            // Handle 'None' for left-panel categories: clear selection and right panel
            if (typeof item?.class_name === 'string' && item.class_name.startsWith('__none_')) {
                StateActions.setSelectedItem(null);
                this.clearRightPanelWithMessage('Select an item to view compatible accessories');
                return;
            }
            StateActions.setSelectedItem(item);
            // Map weapon category to active weapon type
            const cat = (item.category || '').toLowerCase();
            if (cat === 'rifles') {
                StateActions.setActiveWeaponType && StateActions.setActiveWeaponType('primary');
                StateActions.equipWeaponForActive && StateActions.equipWeaponForActive(item);
            } else if (cat === 'pistols') {
                StateActions.setActiveWeaponType && StateActions.setActiveWeaponType('sidearm');
                StateActions.equipWeaponForActive && StateActions.equipWeaponForActive(item);
            } else if (cat === 'launchers') {
                StateActions.setActiveWeaponType && StateActions.setActiveWeaponType('launcher');
                StateActions.equipWeaponForActive && StateActions.equipWeaponForActive(item);
            }
            this.updateStats(item);
            this.updateRightPanel(item);
        } catch (e) {
            console.warn('Could not parse item data:', e);
        }
    },

    // Handle equip/unequip from right panel without changing selection
    equipFromRightPanel(item) {
        const { selectedRightCategory } = getState();
        // Toggle equip if same item already equipped
        const toLower = s => (typeof s === 'string' ? s.toLowerCase() : s);
                // 'None' option clears the slot/category
        if (typeof item?.class_name === 'string' && item.class_name.startsWith('__none_')) {
            if (selectedRightCategory === 'magazines') {
                StateActions.unequipForActiveWeapon && StateActions.unequipForActiveWeapon('magazine');
            } else if (selectedRightCategory === 'optics') {
                StateActions.unequipForActiveWeapon && StateActions.unequipForActiveWeapon('optic');
            } else if (selectedRightCategory === 'bipods') {
                StateActions.unequipForActiveWeapon && StateActions.unequipForActiveWeapon('underbarrel');
            } else if (selectedRightCategory === 'attachments') {
                StateActions.unequipForActiveWeapon && StateActions.unequipForActiveWeapon('muzzle');
                StateActions.unequipForActiveWeapon && StateActions.unequipForActiveWeapon('pointer');
                StateActions.unequipForActiveWeapon && StateActions.unequipForActiveWeapon('underbarrel');
            } else {
                StateActions.unequipGear && StateActions.unequipGear(selectedRightCategory);
            }
            const selectedItem = getState().selectedItem;
            if (selectedItem) this.updateRightPanel(selectedItem);
            return;
        }const eq = (a,b) => a && b && toLower(a.class_name) === toLower(b.class_name);

        const equipSlot = (slot) => {
            const st = getState();
            const current = st.equipped?.weapons?.[st.activeWeaponType]?.[slot] || null;
            if (current && eq(current, item)) {
                StateActions.unequipForActiveWeapon && StateActions.unequipForActiveWeapon(slot);
            } else {
                StateActions.equipForActiveWeapon && StateActions.equipForActiveWeapon(slot, item);
            }
        };

        if (selectedRightCategory === 'magazines') {
            equipSlot('magazine');
        } else if (selectedRightCategory === 'optics') {
            equipSlot('optic');
        } else if (selectedRightCategory === 'bipods') {
            equipSlot('underbarrel');
        } else if (selectedRightCategory === 'attachments') {
            const slots = item.weaponSlots || item.properties?.weaponSlots || [];
            if (Array.isArray(slots)) {
                if (slots.includes('muzzle')) equipSlot('muzzle');
                else if (slots.includes('pointer')) equipSlot('pointer');
                else if (slots.includes('underbarrel')) equipSlot('underbarrel');
            }
        } else {
            // Storage categories equip into gear
            StateActions.equipGear && StateActions.equipGear(selectedRightCategory, item);
        }

        // Refresh right panel view to reflect equip state (simple re-render)
        const selectedItem = getState().selectedItem;
        if (selectedItem) {
            this.updateRightPanel(selectedItem);
        }
    },

    // New function to select item by data without DOM dependency
    selectItemByData(itemData) {
        StateActions.setSelectedItem(itemData);
        
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
                    if (data.class_name === itemData.class_name) {
                        el.classList.add('selected');
                        break;
                    }
                } catch (e) {
                    continue;
                }
            }
        }, 0);
        
        this.updateStats(itemData);
        this.updateRightPanel(itemData);
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
        
        document.getElementById('statClassName').textContent = item.class_name || '-';
        document.getElementById('statClassName').parentElement.style.display = 'block';
        
        document.getElementById('statMod').textContent = item.mod || '-';
        document.getElementById('statMod').parentElement.style.display = 'block';

        // Show category-specific stats
        const category = item.category || item.type;
        
        if (category === 'rifles' || category === 'pistols' || category === 'launchers') {
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
        StateActions.setSelectedItem(null);
        
        // Clear stats
        ['statName', 'statClassName', 'statMod', 'statDamage', 'statRange', 'statMass', 'statCapacity'].forEach(id => {
            document.getElementById(id).textContent = '-';
        });
    },

    // Right panel management
    updateRightPanel(selectedItem) {
        // Show/hide tabs based on selected item type
        const allTabs = document.querySelectorAll('.attachment-tab');
        
        if (selectedItem && (selectedItem.category === 'rifles' || selectedItem.category === 'pistols' || selectedItem.category === 'launchers')) {
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
            if (!['optics', 'attachments', 'bipods', 'magazines'].includes(getState().selectedRightCategory)) {
                StateActions.setSelectedRightCategory('optics');
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
            if (!['magazines', 'medical', 'food', 'tools', 'misc'].includes(getState().selectedRightCategory)) {
                StateActions.setSelectedRightCategory('magazines');
            }
            this.updateRightCategoryTabs();
            this.updateStorageItems();
            
        } else {
            // No item selected: hide all tabs and prompt selection
            allTabs.forEach(tab => { tab.style.display = 'none'; });
            this.clearRightPanelWithMessage('Select an item to view compatible accessories');
        }
    },

    updateCompatibleAccessories(weapon) {
        const { selectedRightCategory } = getState();

        // Strict compatibility using DataService
        let items = [];
        if (selectedRightCategory === 'magazines') {
            items = dataService.getCompatibleMagazines(weapon) || [];
        } else {
            items = dataService.getCompatibleAccessories(weapon, selectedRightCategory) || [];
        }

        // If nothing compatible, show an informative message and stop
        if (!items || items.length === 0) {
            const label = selectedRightCategory.charAt(0).toUpperCase() + selectedRightCategory.slice(1);
            this.clearRightPanelWithMessage(`No compatible ${label.toLowerCase()} found for this weapon`);
            return;
        }

        // Apply right panel filters and render
        import('./filters.js').then(({ FilterManager }) => {
            const filteredItems = FilterManager.applyRightPanelFilters(items);

            // Prepend a 'None' option to clear the equipped slot
            const noneItem = {
                class_name: `__none_${selectedRightCategory}__`,
                displayName: 'None',
                category: selectedRightCategory,
                mod: 'System',
                scope: 2,
                properties: {}
            };
            const itemsWithNone = [noneItem, ...filteredItems];

            // Populate right panel filter options
            FilterManager.populateRightPanelFilterOptions(filteredItems);

            import('./rendering.js').then(({ Renderer }) => {
                Renderer.renderTreeView(itemsWithNone, 'rightTreeView', false);
            });
        });
    },

    updateStorageItems() {
        import('./compatibility.js').then(({ CompatibilityEngine }) => {
            const items = CompatibilityEngine.getStorageItems(getState().selectedRightCategory);
            
            // Populate right panel filter options
            import('./filters.js').then(({ FilterManager }) => {
                FilterManager.populateRightPanelFilterOptions(items);
                
                import('./rendering.js').then(({ Renderer }) => {
                    const category = getState().selectedRightCategory;
                    const noneItem = {
                        class_name: `__none_${category}__`,
                        displayName: 'None',
                        category,
                        mod: 'System',
                        scope: 2,
                        properties: {}
                    };
                    Renderer.renderTreeView([noneItem, ...items], 'rightTreeView', false);
                });
            });
        });
    },

    updateRightCategoryTabs() {
        // Remove active from all tabs
        document.querySelectorAll('.attachment-tab').forEach(tab => tab.classList.remove('active'));
        
        // Set active on the selected tab
        const activeTab = document.querySelector(`[data-attachment="${getState().selectedRightCategory}"]`);
        if (activeTab && activeTab.style.display !== 'none') {
            activeTab.classList.add('active');
        }
    },

    clearRightPanelWithMessage(message) {
        const rightTreeView = document.getElementById('rightTreeView');
        if (rightTreeView) {
            // Apply consistent spacing via architecture
            const spacing = getState().displayOptions.spacing || 'general';
            rightTreeView.className = `tree-view spacing-${spacing}`;
            rightTreeView.innerHTML = `<div style="padding: 20px; text-align: center; color: #666;">${message}</div>`;
        }
    }
};
