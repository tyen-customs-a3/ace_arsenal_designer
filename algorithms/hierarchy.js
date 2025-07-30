// Inheritance and hierarchy-based algorithms
// This file is kept for potential future hierarchy features
// Most functions have been consolidated into other modules

import { createArsenalHierarchy } from './variantCore.js';

export function groupByVariants(items) {
    return createArsenalHierarchy(items);
}