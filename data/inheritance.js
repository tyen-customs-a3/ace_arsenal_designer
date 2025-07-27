// Inheritance and variant creation utilities

// Simple item factory with inheritance support
export function createItem(className, displayName, category, overrides = {}) {
    return {
        className,
        displayName,
        category,
        mod: 'Vanilla',
        mass: Math.floor(Math.random() * 5000) + 1000,
        baseClass: null,
        inheritance: [],
        variant: null,
        textureVariant: null,
        ...overrides
    };
}

// Create item with inheritance chain
export function createInheritedItem(className, displayName, category, baseClass, inheritance = [], overrides = {}) {
    return createItem(className, displayName, category, {
        baseClass,
        inheritance: [baseClass, ...inheritance],
        ...overrides
    });
}

// Create variant of existing item
export function createVariant(baseItem, variantName, textureVariant = null, overrides = {}) {
    return {
        ...baseItem,
        className: `${baseItem.className}_${variantName.replace(/\s+/g, '_')}`,
        displayName: `${baseItem.displayName} (${variantName})`,
        baseClass: baseItem.className, // Variants inherit from their base item
        variant: variantName,
        textureVariant,
        inheritance: [baseItem.className, ...baseItem.inheritance],
        ...overrides,
        // Ensure baseClass is not overridden
        baseClass: overrides.baseClass || baseItem.className
    };
}