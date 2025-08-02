// Compatibility Engine
// Handles weapon-accessory compatibility and storage item generation

export const CompatibilityEngine = {
    init() {
        // No specific initialization needed
    },

    // Filter compatible accessories for selected weapon using weaponSlots
    getCompatibleAccessories(weapon, category = 'attachments') {
        if (!weapon) return [];
        
        const attachments = Arsenal.currentItems.filter(item => item.category === 'attachments');
        
        // Filter attachments by weapon slot compatibility
        if (weapon.weaponSlots && weapon.weaponSlots.length > 0) {
            let compatible = attachments.filter(attachment => {
                if (!attachment.weaponSlots || attachment.weaponSlots.length === 0) {
                    return false; // Attachment has no slot info, assume incompatible
                }
                
                // Check if any weapon slot matches any attachment slot
                return weapon.weaponSlots.some(weaponSlot => 
                    attachment.weaponSlots.some(attachmentSlot => 
                        weaponSlot === attachmentSlot
                    )
                );
            });
            
            // Filter by specific attachment category if specified
            if (category === 'optics') {
                compatible = compatible.filter(attachment => 
                    attachment.weaponSlots && attachment.weaponSlots.some(slot => 
                        slot.includes('OpticRail') || slot.includes('Optic')
                    )
                );
            } else if (category === 'bipods') {
                compatible = compatible.filter(attachment => 
                    attachment.weaponSlots && attachment.weaponSlots.some(slot => 
                        slot.includes('UnderBarrel') || slot.includes('Bipod')
                    )
                );
            } else if (category === 'attachments') {
                compatible = compatible.filter(attachment => 
                    attachment.weaponSlots && attachment.weaponSlots.some(slot => 
                        slot.includes('MuzzleSlot') || slot.includes('Muzzle') || 
                        (!slot.includes('OpticRail') && !slot.includes('UnderBarrel'))
                    )
                );
            }
            
            // Apply right panel filters - we need to import FilterManager dynamically
            // For now, return compatible items - right panel filters will be applied elsewhere
            return compatible;
        }
        
        // If weapon has no slot info, show no attachments (strict compatibility)
        return [];
    },

    // Filter compatible magazines for selected weapon using magazineWells
    getCompatibleMagazines(weapon) {
        if (!weapon) return [];
        
        const magazines = Arsenal.currentItems.filter(item => item.category === 'magazines');
        
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
        // For now, we'll use magazines as a base and create mock categories
        // In a real implementation, these would be separate item categories
        const allItems = Arsenal.currentItems.filter(item => item.category === 'magazines');
        
        switch (category) {
            case 'magazines':
                return allItems;
            case 'medical':
                // Mock medical items - in reality these would be separate items
                return allItems.slice(0, Math.ceil(allItems.length * 0.2)).map(item => ({
                    ...item,
                    displayName: `Medical: ${item.displayName.replace(/Magazine|Mag/g, 'Med Kit')}`,
                    className: `medical_${item.className}`,
                    category: 'medical'
                }));
            case 'food':
                // Mock food items
                return allItems.slice(0, Math.ceil(allItems.length * 0.15)).map(item => ({
                    ...item,
                    displayName: `Food: ${item.displayName.replace(/Magazine|Mag/g, 'Ration')}`,
                    className: `food_${item.className}`,
                    category: 'food'
                }));
            case 'tools':
                // Mock tool items
                return allItems.slice(0, Math.ceil(allItems.length * 0.1)).map(item => ({
                    ...item,
                    displayName: `Tool: ${item.displayName.replace(/Magazine|Mag/g, 'Kit')}`,
                    className: `tool_${item.className}`,
                    category: 'tools'
                }));
            case 'misc':
                // Mock miscellaneous items
                return allItems.slice(0, Math.ceil(allItems.length * 0.1)).map(item => ({
                    ...item,
                    displayName: `Misc: ${item.displayName.replace(/Magazine|Mag/g, 'Item')}`,
                    className: `misc_${item.className}`,
                    category: 'misc'
                }));
            default:
                return [];
        }
    }
};