// Main mock data service - JSON-based loading

import { generateAllItems } from './loader.js';

// Generate variety of items for testing - now async
export async function generateMockItems(count = 400) {
    // Load all items from JSON
    const items = await generateAllItems();
    
    // TODO: Add equipment items (attachments, magazines, etc.) back from equipment.js
    // For now, just return the JSON items
    
    return items.slice(0, count);
}

// Async function to get items - replaces MOCK_ITEMS constant
export async function getMockItems() {
    return generateMockItems(400);
}