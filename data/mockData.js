// Main mock data service

import { generateWeapons, generateHandguns } from './weapons.js';
import { generateBackpacks, generateVests, generateAttachments, generateMagazines } from './equipment.js';

// Generate variety of items for testing
export function generateMockItems(count = 400) {
    const items = [];
    
    // Generate different categories - magazines first to ensure they're included
    items.push(...generateMagazines());
    items.push(...generateAttachments());
    items.push(...generateWeapons());
    items.push(...generateHandguns());
    items.push(...generateBackpacks());
    items.push(...generateVests());
    
    return items.slice(0, count);
}

// Default dataset for immediate use
export const MOCK_ITEMS = generateMockItems(400);