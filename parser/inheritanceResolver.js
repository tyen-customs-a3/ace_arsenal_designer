/**
 * Arma 3 Config Inheritance Resolver - Phase 2
 * 
 * This module processes the raw AST from Phase 1 and produces a fully resolved class database
 * where all inheritance has been "flattened." Each class in the output contains all properties
 * from its inheritance chain, with child properties overriding parent properties.
 * 
 * The resolver handles complex inheritance patterns found in Arma 3 configs where classes
 * can inherit multiple levels deep with nested configuration objects like WeaponSlotsInfo,
 * ItemInfo, OpticsModes, etc.
 * 
 * Key Features:
 * - Recursive inheritance resolution with proper deep merging
 * - Circular inheritance detection and prevention
 * - Missing base class error handling
 * - Caching mechanism to prevent redundant processing
 * - Preservation of metadata from Phase 1 (_sourceMod, _sourceFile)
 * - Deep merge support for complex nested Arma 3 config structures
 * 
 * @author Inheritance Resolver Implementation for ACE3 Arsenal Testbed
 */

/**
 * Resolves inheritance in the raw AST from Phase 1, producing a fully flattened class database
 * 
 * @param {Object} rawAst - The raw, aggregated AST from Phase 1 with top-level classes like CfgWeapons, CfgMagazines, etc.
 * @returns {Map<string, Object>} Map where each key is className and value is fully resolved class object
 * @throws {Error} If circular inheritance is detected or missing base classes are found
 * 
 * @example
 * // Input format (Phase 1 AST):
 * {
 *   "CfgWeapons": {
 *     className: "CfgWeapons",
 *     baseClass: null,
 *     properties: {},
 *     subClasses: {
 *       "Rifle_Base_F": { className: "Rifle_Base_F", baseClass: "Rifle", properties: {...} },
 *       "arifle_MX_F": { className: "arifle_MX_F", baseClass: "Rifle_Base_F", properties: {...} }
 *     },
 *     _sourceMod: "Arma3",
 *     _sourceFile: "./data/addons/arma3/config.cpp"
 *   }
 * }
 * 
 * // Output format (Resolved classes):
 * Map {
 *   "CfgWeapons" => { ...fully resolved CfgWeapons class... },
 *   "Rifle_Base_F" => { ...fully resolved with all inherited properties... },
 *   "arifle_MX_F" => { ...fully resolved with all properties from inheritance chain... }
 * }
 */
export function resolve(rawAst) {
    console.log('InheritanceResolver: Starting inheritance resolution...');
    
    // Validate input
    if (!rawAst || typeof rawAst !== 'object') {
        throw new Error('InheritanceResolver: Invalid input - rawAst must be a non-null object');
    }
    
    // Create global map of all class definitions for efficient lookups
    const globalClassMap = _buildGlobalClassMap(rawAst);
    console.log(`InheritanceResolver: Built global class map with ${globalClassMap.size} classes`);
    
    // Create cache for resolved classes to prevent redundant processing
    const resolvedCache = new Map();
    
    // Resolution statistics
    const stats = {
        totalClasses: globalClassMap.size,
        resolvedClasses: 0,
        cacheHits: 0,
        inheritanceChains: 0,
        errors: []
    };
    
    try {
        // Iterate through all classes and resolve each one
        console.log('InheritanceResolver: Resolving inheritance for all classes...');
        
        for (const [className, classData] of globalClassMap) {
            try {
                const resolved = _resolveClass(className, globalClassMap, resolvedCache, new Set(), stats);
                if (resolved) {
                    stats.resolvedClasses++;
                }
            } catch (error) {
                const errorMsg = `Failed to resolve class '${className}': ${error.message}`;
                console.error(`InheritanceResolver: ${errorMsg}`);
                stats.errors.push({ className, error: errorMsg });
                
                // For circular inheritance, rethrow the error to stop processing
                if (error.message.includes('Circular inheritance')) {
                    throw new Error(`Circular inheritance detected in class '${className}': ${error.message}`);
                }
                
                // For non-critical errors, add the original class to cache to continue processing
                if (!resolvedCache.has(className)) {
                    resolvedCache.set(className, classData);
                }
            }
        }
        
        // Log resolution statistics
        console.log(`InheritanceResolver: Resolution complete`);
        console.log(`  - Total classes processed: ${stats.totalClasses}`);
        console.log(`  - Successfully resolved: ${stats.resolvedClasses}`);
        console.log(`  - Cache hits: ${stats.cacheHits}`);
        console.log(`  - Inheritance chains processed: ${stats.inheritanceChains}`);
        console.log(`  - Errors encountered: ${stats.errors.length}`);
        
        if (stats.errors.length > 0) {
            console.warn('InheritanceResolver: Errors encountered during resolution:');
            stats.errors.forEach(({ className, error }) => {
                console.warn(`  - ${className}: ${error}`);
            });
        }
        
        return resolvedCache;
        
    } catch (error) {
        console.error('InheritanceResolver: Critical error during resolution:', error);
        throw new Error(`InheritanceResolver: Resolution failed - ${error.message}`);
    }
}

/**
 * Build a global map of all class definitions from the raw AST for efficient lookups
 * 
 * @param {Object} rawAst - The raw AST from Phase 1
 * @returns {Map<string, Object>} Map of className -> classData for all classes (including nested)
 * @private
 */
function _buildGlobalClassMap(rawAst) {
    const globalMap = new Map();
    
    /**
     * Recursively add classes from a class hierarchy to the global map
     * @param {Object} classesObject - Object containing class definitions
     * @param {string} parentPath - Path context for debugging (e.g., "CfgWeapons.subClasses")
     */
    function addClassesToMap(classesObject, parentPath = 'root') {
        for (const [className, classData] of Object.entries(classesObject)) {
            if (!classData || typeof classData !== 'object') {
                console.warn(`InheritanceResolver: Skipping invalid class '${className}' at ${parentPath}`);
                continue;
            }
            
            // Add this class to the global map
            if (globalMap.has(className)) {
                // Handle class name conflicts - preserve first occurrence, log the conflict
                const existing = globalMap.get(className);
                const existingSource = existing._sourceMod || 'unknown';
                const newSource = classData._sourceMod || 'unknown';
                
                console.warn(`InheritanceResolver: Class name conflict for '${className}' - keeping from ${existingSource}, ignoring from ${newSource}`);
            } else {
                globalMap.set(className, classData);
            }
            
            // Recursively process subClasses if they exist
            if (classData.subClasses && typeof classData.subClasses === 'object') {
                addClassesToMap(classData.subClasses, `${parentPath}.${className}.subClasses`);
            }
        }
    }
    
    // Process all top-level classes in the raw AST
    addClassesToMap(rawAst);
    
    return globalMap;
}

/**
 * Recursively resolve a single class, handling inheritance chain resolution
 * 
 * @param {string} className - Name of the class to resolve
 * @param {Map<string, Object>} globalClassMap - Global map of all class definitions
 * @param {Map<string, Object>} resolvedCache - Cache of already resolved classes
 * @param {Set<string>} inheritanceStack - Stack to detect circular inheritance
 * @param {Object} stats - Statistics object for tracking resolution metrics
 * @returns {Object|null} Fully resolved class object or null if resolution fails
 * @private
 */
function _resolveClass(className, globalClassMap, resolvedCache, inheritanceStack, stats) {
    // Check cache first
    if (resolvedCache.has(className)) {
        stats.cacheHits++;
        return resolvedCache.get(className);
    }
    
    // Check for circular inheritance
    if (inheritanceStack.has(className)) {
        const chain = Array.from(inheritanceStack).join(' -> ') + ' -> ' + className;
        throw new Error(`Circular inheritance detected: ${chain}`);
    }
    
    // Get the class definition
    const classData = globalClassMap.get(className);
    if (!classData) {
        // Some classes might reference base classes that don't exist in the config files
        // This is normal in Arma configs (e.g., referencing engine base classes)
        console.warn(`InheritanceResolver: Missing base class '${className}' - treating as resolved`);
        return null;
    }
    
    // Add this class to the inheritance stack
    inheritanceStack.add(className);
    stats.inheritanceChains++;
    
    try {
        let resolvedClass;
        
        if (!classData.baseClass || classData.baseClass === className) {
            // Base case: no inheritance or self-reference
            resolvedClass = _cloneClassData(classData);
        } else {
            // Recursive case: resolve parent first, then merge
            const parentClass = _resolveClass(classData.baseClass, globalClassMap, resolvedCache, inheritanceStack, stats);
            
            if (parentClass) {
                // Deep merge parent properties with child properties (child overrides parent)
                resolvedClass = _deepMergeClasses(parentClass, classData);
            } else {
                // Parent couldn't be resolved, use child as-is
                resolvedClass = _cloneClassData(classData);
            }
        }
        
        // Preserve the baseClass property at this level for debugging/traceability
        if (classData.baseClass) {
            resolvedClass.baseClass = classData.baseClass;
        }
        
        // Cache the resolved class
        resolvedCache.set(className, resolvedClass);
        
        return resolvedClass;
        
    } finally {
        // Remove this class from the inheritance stack
        inheritanceStack.delete(className);
    }
}

/**
 * Deep merge two class objects, with child properties overriding parent properties
 * Handles complex nested structures common in Arma 3 configs
 * 
 * @param {Object} parentClass - The resolved parent class
 * @param {Object} childClass - The child class data
 * @returns {Object} New object with merged properties
 * @private
 */
function _deepMergeClasses(parentClass, childClass) {
    // Start with a deep clone of the parent
    const merged = _deepClone(parentClass);
    
    // Merge child properties, overriding parent properties
    return _deepMergeObjects(merged, childClass);
}

/**
 * Deep merge two objects recursively, with second object overriding first
 * 
 * @param {Object} target - Target object to merge into (will be modified)
 * @param {Object} source - Source object to merge from
 * @returns {Object} The modified target object
 * @private
 */
function _deepMergeObjects(target, source) {
    for (const [key, value] of Object.entries(source)) {
        if (key === 'subClasses') {
            // Special handling for subClasses - merge recursively
            if (target.subClasses && typeof target.subClasses === 'object') {
                target.subClasses = _deepMergeObjects(target.subClasses, value);
            } else {
                target.subClasses = _deepClone(value);
            }
        } else if (value && typeof value === 'object' && !Array.isArray(value)) {
            // Deep merge nested objects (like WeaponSlotsInfo, ItemInfo, etc.)
            if (target[key] && typeof target[key] === 'object' && !Array.isArray(target[key])) {
                target[key] = _deepMergeObjects(target[key], value);
            } else {
                target[key] = _deepClone(value);
            }
        } else {
            // Direct assignment for primitives, arrays, and null values
            target[key] = _deepClone(value);
        }
    }
    
    return target;
}

/**
 * Create a deep clone of class data, preserving all properties and metadata
 * 
 * @param {Object} classData - The class data to clone
 * @returns {Object} Deep cloned class data
 * @private
 */
function _cloneClassData(classData) {
    return _deepClone(classData);
}

/**
 * Deep clone an object or value recursively
 * 
 * @param {*} obj - The object or value to clone
 * @returns {*} Deep cloned object or value
 * @private
 */
function _deepClone(obj) {
    if (obj === null || typeof obj !== 'object') {
        return obj;
    }
    
    if (Array.isArray(obj)) {
        return obj.map(item => _deepClone(item));
    }
    
    const cloned = {};
    for (const [key, value] of Object.entries(obj)) {
        cloned[key] = _deepClone(value);
    }
    
    return cloned;
}

/**
 * Utility function to get inheritance chain for a class (for debugging)
 * 
 * @param {string} className - Name of the class to trace
 * @param {Map<string, Object>} globalClassMap - Global map of all class definitions
 * @param {number} maxDepth - Maximum depth to prevent infinite loops (default: 50)
 * @returns {Array<string>} Array of class names in inheritance order (child to parent)
 * 
 * @example
 * getInheritanceChain('arifle_MX_F', globalClassMap)
 * // Returns: ['arifle_MX_F', 'Rifle_Base_F', 'Rifle', 'Default']
 */
export function getInheritanceChain(className, globalClassMap, maxDepth = 50) {
    const chain = [];
    let currentClass = className;
    let depth = 0;
    
    while (currentClass && depth < maxDepth) {
        const classData = globalClassMap.get(currentClass);
        if (!classData) {
            break;
        }
        
        chain.push(currentClass);
        
        if (!classData.baseClass || classData.baseClass === currentClass) {
            break;
        }
        
        currentClass = classData.baseClass;
        depth++;
    }
    
    if (depth >= maxDepth) {
        console.warn(`InheritanceResolver: Maximum inheritance depth (${maxDepth}) reached for class '${className}'`);
    }
    
    return chain;
}

/**
 * Utility function to validate the resolved class database
 * 
 * @param {Map<string, Object>} resolvedClasses - The resolved class database
 * @returns {Object} Validation report with statistics and any issues found
 * 
 * @example
 * const report = validateResolvedDatabase(resolvedClasses);
 * console.log(`Validated ${report.totalClasses} classes with ${report.issues.length} issues`);
 */
export function validateResolvedDatabase(resolvedClasses) {
    const report = {
        totalClasses: resolvedClasses.size,
        classesWithMetadata: 0,
        classesWithProperties: 0,
        classesWithSubClasses: 0,
        issues: []
    };
    
    for (const [className, classData] of resolvedClasses) {
        // Check for metadata
        if (classData._sourceMod) {
            report.classesWithMetadata++;
        }
        
        // Check for properties
        if (classData.properties && Object.keys(classData.properties).length > 0) {
            report.classesWithProperties++;
        }
        
        // Check for subClasses
        if (classData.subClasses && Object.keys(classData.subClasses).length > 0) {
            report.classesWithSubClasses++;
        }
        
        // Validate class data structure
        if (!classData.className) {
            report.issues.push(`Class '${className}' missing className property`);
        }
        
        if (classData.className !== className) {
            report.issues.push(`Class '${className}' has mismatched className property: '${classData.className}'`);
        }
    }
    
    return report;
}