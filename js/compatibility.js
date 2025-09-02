// Compatibility Engine
// Handles weapon-accessory compatibility and storage item generation

import { getState } from './StateManager.js';

export const CompatibilityEngine = {
    init() {
        // No specific initialization needed
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
