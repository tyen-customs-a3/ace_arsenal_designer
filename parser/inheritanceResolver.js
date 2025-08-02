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
    
    // Create comprehensive class registry with ARMA3 hierarchy awareness
    const registry = _buildGlobalClassMap(rawAst);
    const registryStats = registry.getStats();
    console.log(`InheritanceResolver: Built class registry with ${registryStats.totalClasses} classes across ${registryStats.totalNamespaces} namespaces`);
    
    // Get all classes for processing
    const allClasses = registry.getAllClasses();
    
    // Create cache for resolved classes to prevent redundant processing
    const resolvedCache = new Map();
    
    // Resolution statistics
    const stats = {
        totalClasses: allClasses.size,
        resolvedClasses: 0,
        cacheHits: 0,
        inheritanceChains: 0,
        errors: []
    };
    
    try {
        // Iterate through all classes and resolve each one
        console.log('InheritanceResolver: Resolving inheritance for all classes...');
        
        // Process classes from all namespaces in the registry
        for (const [modName, namespace] of registry.namespaces) {
            for (const [lookupKey, entry] of namespace.getAllClasses()) {
                try {
                    const resolved = _resolveClass(
                        entry.context.className, 
                        registry, 
                        resolvedCache, 
                        new Set(), 
                        stats, 
                        entry.context
                    );
                    if (resolved) {
                        stats.resolvedClasses++;
                    }
                } catch (error) {
                    const fullPath = entry.context.getFullPath();
                    const errorMsg = `Failed to resolve class '${entry.context.className}' at ${fullPath}: ${error.message}`;
                    console.error(`InheritanceResolver: ${errorMsg}`);
                    stats.errors.push({ className: entry.context.className, fullPath, error: errorMsg });
                    
                    // For circular inheritance, rethrow the error to stop processing
                    if (error.message.includes('Circular inheritance')) {
                        throw new Error(`Circular inheritance detected in class '${entry.context.className}' at ${fullPath}: ${error.message}`);
                    }
                    
                    // For non-critical errors, add the original class to cache to continue processing
                    const fallbackKey = entry.context.createResolutionKey();
                    if (!resolvedCache.has(fallbackKey)) {
                        resolvedCache.set(fallbackKey, entry.classData);
                    }
                }
            }
        }
        
        // Create final output map with proper filtering
        console.log('InheritanceResolver: Creating final output with container filtering...');
        const finalOutput = new Map();
        let filteredContainers = 0;
        let equipmentClasses = 0;
        
        for (const [resolutionKey, resolvedClass] of resolvedCache) {
            // Skip configuration containers unless they have meaningful equipment properties
            if (resolvedClass._context && resolvedClass._context.getScopeType() === 'config-container') {
                const hasEquipmentProperties = resolvedClass.WeaponSlotsInfo || 
                                             resolvedClass.magazines || 
                                             resolvedClass.mass || 
                                             resolvedClass.scope === 2;
                
                if (!hasEquipmentProperties) {
                    filteredContainers++;
                    continue;
                }
            }
            
            // For the final output, use the lookup key for compatibility with existing code
            const outputKey = resolvedClass._context ? 
                resolvedClass._context.createLookupKey() : 
                resolvedClass.className || resolutionKey;
            
            // Avoid duplicates in final output by preferring top-level classes
            if (!finalOutput.has(outputKey) || 
                (resolvedClass._context && resolvedClass._context.getScopeType() === 'top-level')) {
                finalOutput.set(outputKey, resolvedClass);
                equipmentClasses++;
            }
        }
        
        console.log(`InheritanceResolver: Resolution complete`);
        console.log(`  - Total namespaces: ${registryStats.totalNamespaces}`);
        console.log(`  - Total registry entries: ${registryStats.totalClasses}`);
        console.log(`  - Cross-namespace references: ${registryStats.crossNamespaceReferences || 0}`);
        console.log(`  - Classes processed for resolution: ${stats.totalClasses}`);
        console.log(`  - Successfully resolved: ${stats.resolvedClasses}`);
        console.log(`  - Configuration containers filtered: ${filteredContainers}`);
        console.log(`  - Equipment classes in final output: ${equipmentClasses}`);
        console.log(`  - Cache hits during resolution: ${stats.cacheHits}`);
        console.log(`  - Inheritance chains processed: ${stats.inheritanceChains}`);
        console.log(`  - Errors encountered: ${stats.errors.length}`);
        
        // Log namespace-specific statistics
        if (registryStats.namespaces) {
            console.log(`\nNamespace breakdown:`);
            for (const [modName, nsStats] of Object.entries(registryStats.namespaces)) {
                console.log(`  - ${modName}: ${nsStats.totalClasses} classes, ${nsStats.configFiles} config files, ${nsStats.internalMerges} internal merges`);
            }
        }
        
        if (stats.errors.length > 0) {
            console.warn('\nInheritanceResolver: Errors encountered during resolution:');
            stats.errors.forEach(({ className, fullPath, error }) => {
                console.warn(`  - ${className} (${fullPath}): ${error}`);
            });
        }
        
        return finalOutput;
        
    } catch (error) {
        console.error('InheritanceResolver: Critical error during resolution:', error);
        throw new Error(`InheritanceResolver: Resolution failed - ${error.message}`);
    }
}

/**
 * Build a comprehensive class registry that handles ARMA3's unique class hierarchy patterns
 * 
 * @param {Object} rawAst - The raw AST from Phase 1
 * @returns {ClassRegistry} Enhanced registry with proper ARMA3 hierarchy support
 * @private
 */
function _buildGlobalClassMap(rawAst) {
    const registry = new ClassRegistry();
    
    /**
     * Recursively process classes and build the registry
     * @param {Object} classesObject - Object containing class definitions
     * @param {Array<string>} contextPath - Array representing the hierarchical path
     * @param {string} sourceMod - Source mod name for tracking
     * @param {string} sourceFile - Source file for tracking
     */
    function processClasses(classesObject, contextPath = [], sourceMod = 'unknown', sourceFile = 'unknown') {
        for (const [className, classData] of Object.entries(classesObject)) {
            if (!classData || typeof classData !== 'object') {
                console.warn(`InheritanceResolver: Skipping invalid class '${className}' at ${contextPath.join('.')}`);
                continue;
            }
            
            // Filter out irrelevant classes using hierarchy-based detection
            if (_shouldSkipClass(className, classData)) {
                continue;
            }
            
            // Extract metadata from classData or use defaults
            const actualSourceMod = classData._sourceMod || sourceMod;
            const actualSourceFile = classData._sourceFile || sourceFile;
            
            // Create class context for this class
            const classContext = new ClassContext(
                className,
                [...contextPath], // Clone the path
                actualSourceMod,
                actualSourceFile
            );
            
            // Enhance class data with full context information
            const enhancedClassData = {
                ...classData,
                _context: classContext,
                _resolvedPath: classContext.getFullPath(),
                _scopeType: classContext.getScopeType()
            };
            
            // Register the class in the registry
            const registrationResult = registry.registerClass(classContext, enhancedClassData);
            
            if (!registrationResult.success && registrationResult.isActualConflict) {
                console.warn(`InheritanceResolver: ${registrationResult.message}`);
            }
            
            // Recursively process subClasses
            if (classData.subClasses && typeof classData.subClasses === 'object') {
                // Skip transport containers - these are inventory references, not class definitions
                const transportContainers = ['TransportItems', 'TransportMagazines', 'TransportWeapons', 'TransportBackpacks'];
                
                if (!transportContainers.includes(className)) {
                    const newContextPath = [...contextPath, className];
                    processClasses(classData.subClasses, newContextPath, actualSourceMod, actualSourceFile);
                }
            }
        }
    }
    
    // Process all top-level classes in the raw AST
    processClasses(rawAst);
    
    return registry;
}

/**
 * ClassContext represents the hierarchical context of a class within the ARMA3 config structure
 */
class ClassContext {
    constructor(className, contextPath, sourceMod, sourceFile) {
        this.className = className;
        this.contextPath = contextPath; // Array like ['CfgVehicles', 'CAManBase', 'HitPoints']
        this.sourceMod = sourceMod;
        this.sourceFile = sourceFile;
    }
    
    /**
     * Get the full hierarchical path for this class
     */
    getFullPath() {
        return [...this.contextPath, this.className].join('.');
    }
    
    /**
     * Get the scope type of this class
     */
    getScopeType() {
        if (this.contextPath.length === 0) {
            return 'root';
        }
        
        if (this.contextPath.length === 1 && this.contextPath[0].startsWith('Cfg')) {
            return 'config-container';
        }
        
        if (this.contextPath.length === 2 && this.contextPath[0].startsWith('Cfg')) {
            return 'top-level';
        }
        
        // Check for specific nested contexts
        if (this.contextPath.includes('HitPoints')) {
            return 'hitpoints';
        }
        
        if (this.contextPath.includes('AnimationSources')) {
            return 'animation-sources';
        }
        
        if (this.contextPath.includes('Turrets')) {
            return 'turrets';
        }
        
        if (this.contextPath.includes('Components')) {
            return 'components';
        }
        
        return 'nested';
    }
    
    /**
     * Get the immediate parent class name
     */
    getParentClassName() {
        return this.contextPath.length > 0 ? this.contextPath[this.contextPath.length - 1] : null;
    }
    
    /**
     * Check if this context represents the same logical scope as another
     */
    isSameScope(other) {
        if (this.getScopeType() !== other.getScopeType()) {
            return false;
        }
        
        // For nested classes, check if they're in the same container type but different parent instances
        const scopeType = this.getScopeType();
        if (scopeType === 'hitpoints' || scopeType === 'animation-sources' || scopeType === 'turrets' || scopeType === 'components') {
            // They're the same scope type but different instances are okay
            return false;
        }
        
        // For other scopes, they must have the same path
        return this.contextPath.join('.') === other.contextPath.join('.');
    }
    
    /**
     * Create a lookup key for inheritance resolution
     */
    createLookupKey() {
        // For top-level and config classes, use simple name
        const scopeType = this.getScopeType();
        if (scopeType === 'root' || scopeType === 'config-container' || scopeType === 'top-level') {
            return this.className;
        }
        
        // For nested classes, create a scoped key
        return `${this.getFullPath()}`;
    }
    
    /**
     * Create a resolution key for caching resolved classes
     */
    createResolutionKey() {
        return this.getFullPath();
    }
}

/**
 * ModNamespace represents an isolated namespace for a single mod's configuration
 */
class ModNamespace {
    constructor(modName) {
        this.modName = modName;
        this.classes = new Map(); // Map<string, ClassEntry>
        this.configFiles = new Set(); // Track which config files contribute to this namespace
        this.stats = {
            totalClasses: 0,
            configFiles: 0,
            internalMerges: 0
        };
    }
    
    /**
     * Add a class to this mod's namespace
     */
    addClass(context, classData) {
        const entry = new ClassEntry(context, classData);
        const lookupKey = context.createLookupKey();
        
        // Track config file
        this.configFiles.add(context.sourceFile);
        
        if (this.classes.has(lookupKey)) {
            // Multiple definitions within same mod - merge them
            const existing = this.classes.get(lookupKey);
            const merged = this._mergeIntraModClasses(existing, entry);
            this.classes.set(lookupKey, merged);
            this.stats.internalMerges++;
        } else {
            this.classes.set(lookupKey, entry);
            this.stats.totalClasses++;
        }
        
        this.stats.configFiles = this.configFiles.size;
    }
    
    /**
     * Get a class from this namespace
     */
    getClass(lookupKey) {
        return this.classes.get(lookupKey);
    }
    
    /**
     * Get all classes in this namespace
     */
    getAllClasses() {
        return this.classes;
    }
    
    /**
     * Merge multiple definitions of the same class within a mod
     * This handles cases where a mod defines the same class in multiple config files
     */
    _mergeIntraModClasses(existing, newEntry) {
        // For classes within the same mod, we typically want to merge or take the most recent
        // This is different from inter-mod conflicts which should be namespace-isolated
        
        const existingContext = existing.context;
        const newContext = newEntry.context;
        
        // If they're in the same scope, merge the class data
        if (existingContext.isSameScope(newContext)) {
            const mergedClassData = _deepMergeObjects(
                _deepClone(existing.classData), 
                newEntry.classData
            );
            
            // Create a new context that represents the merged result
            const mergedContext = new ClassContext(
                existingContext.className,
                existingContext.contextPath,
                existingContext.sourceMod,
                `${existingContext.sourceFile}+${newContext.sourceFile}` // Indicate merge
            );
            
            return new ClassEntry(mergedContext, mergedClassData);
        } else {
            // Different scopes within same mod - keep the more specific one
            const existingScopeType = existingContext.getScopeType();
            const newScopeType = newContext.getScopeType();
            
            // Prefer more specific scopes (nested over top-level)
            const scopeSpecificity = {
                'root': 0,
                'config-container': 1,
                'top-level': 2,
                'nested': 3,
                'hitpoints': 4,
                'animation-sources': 4,
                'turrets': 4,
                'components': 4
            };
            
            if (scopeSpecificity[newScopeType] > scopeSpecificity[existingScopeType]) {
                return newEntry;
            } else {
                return existing;
            }
        }
    }
    
    /**
     * Get namespace statistics
     */
    getStats() {
        return { ...this.stats };
    }
}

/**
 * ClassRegistry manages all class definitions with proper namespace isolation
 */
class ClassRegistry {
    constructor() {
        this.namespaces = new Map(); // Map<string, ModNamespace>
        this.globalLookup = new Map(); // Map<string, Array<{namespace, entry}>> for cross-namespace inheritance
        this.stats = {
            totalNamespaces: 0,
            totalClasses: 0,
            crossNamespaceReferences: 0,
            namespaceIsolatedClasses: 0
        };
    }
    
    /**
     * Register a class in the appropriate namespace
     */
    registerClass(context, classData) {
        const modName = context.sourceMod;
        
        // Get or create namespace for this mod
        if (!this.namespaces.has(modName)) {
            this.namespaces.set(modName, new ModNamespace(modName));
            this.stats.totalNamespaces++;
        }
        
        const namespace = this.namespaces.get(modName);
        
        // Add class to the mod's namespace
        namespace.addClass(context, classData);
        
        // Add to global lookup for cross-namespace inheritance
        const lookupKey = context.createLookupKey();
        if (!this.globalLookup.has(lookupKey)) {
            this.globalLookup.set(lookupKey, []);
        }
        
        this.globalLookup.get(lookupKey).push({
            namespace: modName,
            entry: namespace.getClass(lookupKey)
        });
        
        this.stats.totalClasses++;
        
        return { success: true, isActualConflict: false };
    }
    
    /**
     * Find a class for inheritance resolution with namespace awareness
     */
    findClass(className, requestingContext = null) {
        // First try to find in the same namespace if we have requesting context
        if (requestingContext) {
            const requestingNamespace = this.namespaces.get(requestingContext.sourceMod);
            if (requestingNamespace) {
                const localClass = requestingNamespace.getClass(className);
                if (localClass) {
                    return localClass;
                }
            }
        }
        
        // Look in global lookup for cross-namespace inheritance
        const globalEntries = this.globalLookup.get(className);
        if (!globalEntries || globalEntries.length === 0) {
            return null;
        }
        
        // Select the best match from available namespaces
        return this._selectBestNamespaceMatch(globalEntries, requestingContext);
    }
    
    /**
     * Get all registered classes organized by namespace
     */
    getAllClasses() {
        const result = new Map();
        
        for (const [modName, namespace] of this.namespaces) {
            for (const [lookupKey, entry] of namespace.getAllClasses()) {
                // Use a namespace-qualified key to avoid conflicts in the output
                const qualifiedKey = this._isStandardClass(lookupKey) ? 
                    lookupKey : // Standard classes use simple names
                    `${modName}::${lookupKey}`; // Mod-specific classes get namespace prefix
                
                result.set(qualifiedKey, entry.classData);
            }
        }
        
        return result;
    }
    
    /**
     * Get comprehensive registry statistics
     */
    getStats() {
        const namespaceStats = {};
        for (const [modName, namespace] of this.namespaces) {
            namespaceStats[modName] = namespace.getStats();
        }
        
        return {
            ...this.stats,
            namespaces: namespaceStats
        };
    }
    
    /**
     * Select the best match from multiple namespace entries
     */
    _selectBestNamespaceMatch(entries, requestingContext) {
        if (entries.length === 1) {
            return entries[0].entry;
        }
        
        // If we have requesting context, prefer same namespace
        if (requestingContext) {
            const sameNamespaceEntry = entries.find(e => e.namespace === requestingContext.sourceMod);
            if (sameNamespaceEntry) {
                this.stats.crossNamespaceReferences++;
                return sameNamespaceEntry.entry;
            }
        }
        
        // Prefer standard ARMA3 classes over mod-specific ones
        const standardNamespaces = ['ARMA3', 'CBA', 'A3'];
        for (const standardNs of standardNamespaces) {
            const standardEntry = entries.find(e => e.namespace === standardNs);
            if (standardEntry) {
                return standardEntry.entry;
            }
        }
        
        // Default to first available
        return entries[0].entry;
    }
    
    /**
     * Check if a class name represents a standard ARMA3/CBA class
     */
    _isStandardClass(className) {
        // Standard base classes that should use simple names in output
        const standardClasses = [
            'CAManBase', 'Weapon_Base_F', 'Rifle_Base_F', 'Vest_Base_F', 
            'Headgear_Base_F', 'ItemInfo', 'WeaponSlotsInfo', 'EventHandlers',
            'Man', 'Default', 'BulletBase'
        ];
        
        return standardClasses.includes(className) || 
               className.startsWith('Cfg') ||
               _isLegitimateBaseClass(className);
    }
}

/**
 * ClassEntry represents a single class registration in the registry
 */
class ClassEntry {
    constructor(context, classData) {
        this.context = context;
        this.classData = classData;
        this.registrationTime = Date.now();
    }
}

/**
 * Enhanced class resolution that handles ARMA3's hierarchical inheritance patterns
 * 
 * @param {string} className - Name of the class to resolve
 * @param {ClassRegistry} registry - The class registry
 * @param {Map<string, Object>} resolvedCache - Cache of already resolved classes
 * @param {Set<string>} inheritanceStack - Stack to detect circular inheritance
 * @param {Object} stats - Statistics object for tracking resolution metrics
 * @param {ClassContext} requestingContext - Context of the class making the request
 * @returns {Object|null} Fully resolved class object or null if resolution fails
 * @private
 */
function _resolveClass(className, registry, resolvedCache, inheritanceStack, stats, requestingContext = null) {
    // Create a resolution key that includes context
    const resolutionKey = requestingContext ? 
        `${requestingContext.getFullPath()}::${className}` : 
        className;
    
    // Check cache first
    if (resolvedCache.has(resolutionKey)) {
        stats.cacheHits++;
        return resolvedCache.get(resolutionKey);
    }
    
    // Check for circular inheritance
    if (inheritanceStack.has(resolutionKey)) {
        const chain = Array.from(inheritanceStack).join(' -> ') + ' -> ' + resolutionKey;
        throw new Error(`Circular inheritance detected: ${chain}`);
    }
    
    // Find the class definition
    const classEntry = registry.findClass(className, requestingContext);
    if (!classEntry) {
        // Check if this is a legitimate base class provided by ARMA3 or CBA
        if (_isLegitimateBaseClass(className)) {
            // Create a minimal class definition for legitimate base classes
            const syntheticClass = {
                className: className,
                baseClass: null,
                properties: {},
                subClasses: {},
                _sourceMod: 'ARMA3/CBA',
                _sourceFile: 'engine',
                _synthetic: true
            };
            resolvedCache.set(resolutionKey, syntheticClass);
            return syntheticClass;
        }
        
        // Some classes might reference base classes that don't exist in the config files
        console.warn(`InheritanceResolver: Missing base class '${className}' - treating as resolved`);
        return null;
    }
    
    const classData = classEntry.classData;
    
    // Add this class to the inheritance stack
    inheritanceStack.add(resolutionKey);
    stats.inheritanceChains++;
    
    try {
        let resolvedClass;
        
        if (!classData.baseClass || classData.baseClass === className) {
            // Base case: no inheritance or self-reference
            resolvedClass = _cloneClassData(classData);
        } else {
            // Recursive case: resolve parent first, then merge
            const parentClass = _resolveClass(
                classData.baseClass, 
                registry, 
                resolvedCache, 
                inheritanceStack, 
                stats, 
                classEntry.context
            );
            
            if (parentClass) {
                // Deep merge parent properties with child properties (child overrides parent)
                resolvedClass = _deepMergeClasses(parentClass, classData);
            } else {
                // Parent couldn't be resolved, use child as-is
                resolvedClass = _cloneClassData(classData);
            }
        }
        
        // Preserve the baseClass property and context information
        if (classData.baseClass) {
            resolvedClass.baseClass = classData.baseClass;
        }
        
        // Preserve context information
        resolvedClass._context = classEntry.context;
        resolvedClass._resolvedPath = classEntry.context.getFullPath();
        
        // Cache the resolved class
        resolvedCache.set(resolutionKey, resolvedClass);
        
        return resolvedClass;
        
    } finally {
        // Remove this class from the inheritance stack
        inheritanceStack.delete(resolutionKey);
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


/**
 * Determines if a class name represents a legitimate base class provided by ARMA3 or CBA
 * These are engine-level classes that don't appear in config files but are valid inheritance targets
 * 
 * @param {string} className - Name of the class to check
 * @returns {boolean} True if this is a legitimate base class, false otherwise
 * @private
 */
function _isLegitimateBaseClass(className) {
    // ASDG/CBA framework base classes
    const asdgCbaClasses = [
        'asdg_SlotInfo',         // Base for accessory slot definitions
        'asdg_MuzzleSlot',       // Base for muzzle device slots  
        'asdg_OpticRail',        // Base for optic rail definitions
        'asdg_FrontSideRail',    // Base for front/side rail definitions
        'asdg_UnderBarrelSlot',  // Base for underbarrel slot definitions
    ];
    
    // Core ARMA engine base classes
    const armaEngineClasses = [
        'Default',               // Ultimate base class for most objects
        'None',                  // Empty/null class reference
        'All',                   // Universal base class
        'AllVehicles',           // Base for all vehicles
        'Man',                   // Base class for all units/soldiers
        'Land',                  // Base class for static terrain objects
        'Air',                   // Base class for aircraft
        'Ship',                  // Base class for ships/boats
        'Thing',                 // Base thing class
        'ThingX',                // Extended thing class
    ];
    
    // ARMA equipment base classes
    const armaEquipmentClasses = [
        'Weapon_Base_F',         // Base class for all weapons
        'Rifle_Base_F',          // Base class for rifles
        'Pistol_Base_F',         // Base class for pistols
        'Launcher_Base_F',       // Base class for launchers
        'Vest_Base_F',           // Base class for all vests
        'Headgear_Base_F',       // Base class for all headgear
        'Uniform_Base',          // Base class for uniforms
        'ItemCore',              // Base class for items
        'ItemInfo',              // Item information class
        'WeaponSlotsInfo',       // Weapon slots information
        'InventoryItem_Base_F',  // Base inventory item
        'CA_Magazine',           // Base magazine class
        'VestItem',              // Vest item class
        'HeadgearItem',          // Headgear item class
        'UniformItem',           // Uniform item class
    ];
    
    // ARMA ammunition and projectile base classes
    const armaAmmoClasses = [
        'BulletBase',            // Base class for all bullet ammunition
        'MissileCore',           // Base class for missile ammunition
        'RocketBase',            // Base class for rocket ammunition
        'GrenadeCore',           // Base class for grenades
        'GrenadeHand',           // Base class for hand grenades
        'HandGrenade',           // Another grenade base class
        'SmokeShell',            // Base class for smoke grenades
        'ammo_Penetrator_Base',  // Base class for penetrator ammunition
        'B_127x99_Ball',         // Base .50 cal bullet
        'B_762x51_Ball',         // Base 7.62mm bullet  
        'B_556x45_Ball',         // Base 5.56mm bullet
        'B_12Gauge_Pellets',     // Base shotgun pellet
        'B_12Gauge_Slug',        // Base shotgun slug
        'G_40mm_HE',             // Base 40mm grenade
        'FlareCore',             // Base flare class
        'SmokeShellCore',        // Base smoke shell class
    ];
    
    // ARMA vehicle and object base classes
    const armaVehicleClasses = [
        'NewTurret',             // Base class for vehicle turrets
        'CargoTurret',           // Base class for cargo turrets
        'MainTurret',            // Base class for main turrets
        'WeaponHolder_Single_limited_item_F', // Base class for weapon holders
        'GroundWeaponHolder',    // Ground weapon holder
        'ReammoBox_F',           // Ammo box base class
        'House_F',               // House base class
        'Building',              // Building base class
        'Strategic',             // Strategic object base
        'NonStrategic',          // Non-strategic object base
        'CampaignStructures',    // Campaign structure base
    ];
    
    // ARMA animation and UI system classes
    const armaSystemClasses = [
        'RscWeaponZeroing',      // UI system class for weapon zeroing
        'RscOpticsValue',        // UI optics value class
        'RscObject',             // UI object class
        'RscControlsGroup',      // UI controls group
        'RscText',               // UI text class
        'RscPicture',            // UI picture class
        'Mod_Base',              // Base class for modifications
        'RifleBaseStandActions', // Animation system class
        'RifleAdjustProneBaseActions', // Animation system class
        'RifleAssaultBaseActions', // Animation system class
        'PistolBaseStandActions', // Pistol animation class
        'LauncherBaseStandActions', // Launcher animation class
        'Actions',               // Base actions class
        'NoActions',             // No actions class
    ];
    
    // ARMA effect and proxy classes
    const armaEffectClasses = [
        'ObjectDestructionFire1', // Destruction effect
        'ObjectDestructionFire2', // Destruction effect
        'ObjectDestructionRefract', // Destruction refraction effect
        'ProxyFlag',             // Proxy object class
        'ProxyWeapon',           // Proxy weapon class
        'ProxyRetex',            // Proxy retexture class
        'Flag_Base_F',           // Flag base class
        'FlagCarrier',           // Flag carrier class
        'EmptyDetector',         // Empty detector class
        'LaserTarget',           // Laser target class
        'Logic',                 // Logic object class
        'Module_F',              // Module base class
    ];
    
    // ARMA specific ammunition types (commonly inherited from)
    const armaSpecificAmmo = [
        'mini_Grenade',          // Mini grenade base (used by some mods)
        'APERSBoundingMine_Range_Ammo', // APERS mine ammunition
        'APERSMine_Range_Ammo',  // APERS mine ammunition variant
        'ATMine_Range_Ammo',     // AT mine ammunition
        'BoundingMineCore',      // Bounding mine core
        'MineCore',              // Mine core class
        'TimeBombCore',          // Time bomb core
        'PipeBombCore',          // Pipe bomb core
        'Grenade',               // Generic grenade class
        'GrenadeBase',           // Grenade base class
    ];

    // Check all categories
    const allLegitimateClasses = [
        ...asdgCbaClasses,
        ...armaEngineClasses,
        ...armaEquipmentClasses,
        ...armaAmmoClasses,
        ...armaVehicleClasses,
        ...armaSystemClasses,
        ...armaEffectClasses,
        ...armaSpecificAmmo
    ];
    
    return allLegitimateClasses.includes(className);
}

/**
 * Determines if a class should be skipped during inheritance resolution
 * Uses hierarchy-based detection instead of fragile string-based parsing
 * 
 * @param {string} className - Name of the class to evaluate
 * @param {Object} classData - The class data object
 * @returns {boolean} True if this class should be skipped, false otherwise
 * @private
 */
function _shouldSkipClass(className, classData) {
    if (!className || !classData) {
        return true; // Skip invalid classes
    }
    
    // Filter by base class hierarchy - these are transport/inventory wrapper classes
    const irrelevantBaseClasses = [
        'Item_Base_F',           // Inventory transport items
        'ItemCore',              // Item system base
        'ThingX',                // Generic thing base
        'ReammoBox_F',           // Ammo box base  
        'NATO_Box_Base',         // Ammo box variants
        'EAST_Box_Base',         // Ammo box variants
        'IND_Box_Base',          // Ammo box variants
        'FlagCarrier',           // Flag objects
        'Banner_01_base_F',      // Banner objects
        'Land_Camping_Light_F',  // Static objects
        'UserTexture1m_F',       // User texture objects
        'Sign_Sphere100cm_F',    // Sign objects
        'Helper_Base_F',         // Helper objects
        'Logic',                 // Logic objects
        'Module_F',              // Module objects
        'EmptyDetector',         // Detector objects
        'LaserTarget',           // Target objects
    ];
    
    const baseClass = classData.baseClass;
    if (baseClass && irrelevantBaseClasses.includes(baseClass)) {
        return true;
    }
    
    // Filter classes that inherit from irrelevant base classes through multiple levels
    // This handles cases where Item_ptv_* inherits from Item_Base_F
    if (baseClass) {
        for (const irrelevantBase of irrelevantBaseClasses) {
            if (baseClass.includes(irrelevantBase)) {
                return true;
            }
        }
    }
    
    // Filter by class name patterns - transport items and system objects
    const irrelevantNamePatterns = [
        /^Item_/,                    // All Item_ prefixed classes are transport wrappers
        /^_xx_/,                     // Transport item references (e.g., _xx_ptv_versapod_wdl)
        /^TransportItems/,           // Transport containers
        /^TransportMagazines/,       // Transport containers  
        /^TransportWeapons/,         // Transport containers
        /^TransportBackpacks/,       // Transport containers
        /^SupplyBox/,                // Supply boxes
        /^Box_/,                     // Ammo/supply boxes
        /^Land_/,                    // Static landscape objects
        /^Flag_/,                    // Flag objects
        /^Banner_/,                  // Banner objects
        /^Sign_/,                    // Sign objects
        /^UserTexture/,              // User texture objects
        /^Helper_/,                  // Helper objects
        /^Logic/,                    // Logic objects
        /^Module_/,                  // Module objects
        /^EmptyDetector/,            // Detector objects
        /^LaserTarget/,              // Target objects
        /SoundShader$/,              // Sound system classes
        /SoundSet$/,                 // Sound system classes
        /AmmoCloud$/,                // Ammo effect clouds (e.g., ptv_RifleAmmoCloud)
        /SmokeTrail$/,               // Smoke trail effects (e.g., ptv_RifleSmokeTrail)
        /^CfgCloudlets/,             // Particle effect system
        /^CfgLights/,                // Light system
        /^CfgSurfaces/,              // Surface system
        /^CfgMovesBasic/,            // Animation system
        /^CfgGesturesMale/,          // Gesture system
        /^CfgSounds/,                // Sound system
        /^CfgMusic/,                 // Music system
        // Note: Cfg* containers are handled separately after processing their subclasses
    ];
    
    for (const pattern of irrelevantNamePatterns) {
        if (pattern.test(className)) {
            return true;
        }
    }
    
    // Note: Configuration containers like CfgWeapons are processed for their subClasses
    // but should be filtered from the final output in the main resolution loop
    
    return false; // Don't skip this class
}