// Compatibility Engine
// Handles weapon-accessory compatibility and storage item generation

import { getState } from './StateManager.js';

export const CompatibilityEngine = {
    init() {
        // No specific initialization needed
    },

    // Filter compatible accessories for selected weapon using weaponSlots
    getCompatibleAccessories(weapon, category = 'attachments') {
        if (!weapon) return [];
        
        // Get items from the specific category being requested
        let items;
        const { currentItems } = getState();
        if (category === 'optics') {
            items = currentItems.filter(item => item.category === 'optics');
        } else if (category === 'bipods') {
            items = currentItems.filter(item => item.category === 'bipods');
        } else {
            items = currentItems.filter(item => item.category === 'attachments');
        }
        
        // Filter items by weapon slot compatibility
        if (weapon.weaponSlots && weapon.weaponSlots.length > 0) {
            const compatible = items.filter(item => {
                if (!item.weaponSlots || item.weaponSlots.length === 0) {
                    return false; // Item has no slot info, assume incompatible
                }
                
                // Check if any weapon slot matches any item slot
                return weapon.weaponSlots.some(weaponSlot => 
                    item.weaponSlots.some(itemSlot => 
                        weaponSlot === itemSlot
                    )
                );
            });
            
            return compatible;
        }
        
        // If weapon has no slot info, show no accessories (strict compatibility)
        return [];
    },

    // Filter compatible magazines for selected weapon using magazineWells
    getCompatibleMagazines(weapon) {
        if (!weapon) return [];
        
        const { currentItems } = getState();
        const magazines = currentItems.filter(item => item.category === 'magazines');
        
        // Filter magazines by magazineWells compatibility
        if (weapon.magazineWells && weapon.magazineWells.length > 0) {
            const compatible = magazines.filter(magazine => {
                if (!magazine.magazineWells || magazine.magazineWells.length === 0) {
                    return false; // Magazine has no well info, assume incompatible
                }
                
                // Check if any weapon magazine well matches any magazine well
                return weapon.magazineWells.some(weaponWell => 
                    magazine.magazineWells.some(magWell => 
                        weaponWell === magWell
                    )
                );
            });
            
            // Apply right panel filters - we need to import FilterManager dynamically
            // For now, return compatible items - right panel filters will be applied elsewhere
            return compatible;
        }
        
        // If weapon has no magazine well info, show no magazines (strict compatibility)
        return [];
    },

    // Get storage items for backpacks/vests by category
    getStorageItems(category) {
        // Return items from the actual category if available
        const { currentItems } = getState();
        const categoryItems = currentItems.filter(item => item.category === category);
        
        if (categoryItems.length > 0) {
            return categoryItems;
        }
        
        // If no items exist for the category, return empty array
        return [];
    }
};
