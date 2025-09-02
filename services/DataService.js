// DataService - NDJSON loader with inheritance tree support
// Handles class inheritance with property resolution and merging

export class DataService {
    constructor(ndjsonPath = '/database.ndjson') {
        this.ndjsonPath = ndjsonPath;
        this.isInitialized = false;
        
        // Raw data storage
        this.items = null; // all items loaded from NDJSON
        this.allClasses = {}; // class_name -> raw class data (all scope levels)
        this.itemsByClass = {}; // class_name -> item lookup (scope 2 only)
        
        // Inheritance tree structures
        this.classHierarchy = {}; // class_name -> base_class_name
        this.classChildren = {}; // class_name -> array of child class names
        this.resolvedClasses = {}; // class_name -> fully resolved class data
        
        this.loadError = null;
    }

    async initialize() {
        try {
            // Load main database
            const response = await fetch(this.ndjsonPath);
            if (!response.ok) throw new Error(`Failed to load ${this.ndjsonPath}: ${response.status} ${response.statusText}`);
            const text = await response.text();
            const lines = text.split('\n').filter(line => line.trim());
            this.items = lines.map(line => JSON.parse(line));
            
            // Build class maps and inheritance tree
            this._buildClassMaps();
            // Ensure all referenced base classes exist by injecting placeholders
            this._injectImplicitBaseClasses();
            this._buildInheritanceTree();
            this._resolveAllInheritance();
            this._annotateAccessorySlots();
            this._buildScopeFilteredLookup();
            
            this.isInitialized = true;
            this.loadError = null;
            return true;
        } catch (error) {
            this.isInitialized = false;
            this._resetState();
            this.loadError = error;
            throw new Error(`DataService loading failed: ${error.message}`);
        }
    }

    /**
     * Build maps of all classes by name
     */
    _buildClassMaps() {
        this.allClasses = {};
        for (const item of this.items) {
            if (!item || !item.class_name) continue;

            const name = item.class_name;
            const incoming = this._cloneDeep(item);

            if (!this.allClasses[name]) {
                // First definition wins as the base; keep as-is
                this.allClasses[name] = incoming;
                continue;
            }

            // Merge duplicate class definitions. Some datasets repeat the same
            // class name with base_class equal to itself (self-inheritance) to
            // layer overrides. Treat those as incremental overrides on the
            // existing definition instead of creating inheritance cycles.
            const existing = this.allClasses[name];

            // If the incoming declares base = itself, ignore that and preserve
            // the existing base (or empty) to avoid self-cycles.
            if (incoming.base_class === name) {
                incoming.base_class = existing.base_class && existing.base_class !== name
                    ? existing.base_class
                    : '';
            }

            // If existing mistakenly has base=self and the incoming provides a
            // real base, prefer the real base.
            if (existing.base_class === name && incoming.base_class && incoming.base_class !== name) {
                existing.base_class = incoming.base_class;
            }

            // Merge properties with child (incoming) overriding existing
            this.allClasses[name] = this._mergeClassProperties(existing, incoming);
        }
    }

    /**
     * Inject placeholder definitions for any referenced base classes
     * that are not present in the dataset. This prevents resolution
     * failures for roots like 'WeaponHolder'.
     */
    _injectImplicitBaseClasses() {
        // Collect all referenced base class names
        const referencedBases = new Set();
        for (const item of this.items) {
            const base = item && item.base_class;
            if (base && typeof base === 'string' && base.trim() !== '') {
                referencedBases.add(base);
            }
        }

        // Inject minimal placeholder entries for any missing base classes
        for (const baseName of referencedBases) {
            if (!this.allClasses[baseName]) {
                this.allClasses[baseName] = {
                    class_name: baseName,
                    base_class: '',
                    // Ensure these never surface as user items
                    scope: 0,
                    properties: {}
                };
            }
        }
    }

    /**
     * Build inheritance hierarchy and children maps
     */
    _buildInheritanceTree() {
        this.classHierarchy = {};
        this.classChildren = {};
        
        // Initialize children map
        for (const className of Object.keys(this.allClasses)) {
            this.classChildren[className] = [];
        }
        
        // Build hierarchy and children relationships
        for (const [className, classData] of Object.entries(this.allClasses)) {
            const baseClass = classData.base_class;
            
            if (baseClass && baseClass !== '') {
                this.classHierarchy[className] = baseClass;
                
                // Add to parent's children array
                if (this.classChildren[baseClass]) {
                    this.classChildren[baseClass].push(className);
                } else {
                    this.classChildren[baseClass] = [className];
                }
            }
        }
    }

    /**
     * Resolve inheritance for all classes
     */
    _resolveAllInheritance() {
        this.resolvedClasses = {};
        
        // Resolve each class
        for (const className of Object.keys(this.allClasses)) {
            this.resolvedClasses[className] = this._resolveClassInheritance(className);
        }
    }

    /**
     * Resolve inheritance for a specific class by traversing up the hierarchy
     */
    _resolveClassInheritance(className, visitedClasses = new Set()) {
        // Check for circular inheritance
        if (visitedClasses.has(className)) {
            throw new Error(`Circular inheritance detected: ${Array.from(visitedClasses).join(' -> ')} -> ${className}`);
        }
        
        const classData = this.allClasses[className];
        if (!classData) {
            throw new Error(`Class '${className}' not found`);
        }

        // If no base class, return the class as-is
        const baseClassName = classData.base_class;
        // Guard against self-inheritance: treat as no base to avoid cycles
        if (!baseClassName || baseClassName === '' || baseClassName === className) {
            return this._cloneDeep(classData);
        }

        // Mark as visiting to detect cycles
        visitedClasses.add(className);
        
        // Recursively resolve base class first
        const resolvedBase = this._resolveClassInheritance(baseClassName, visitedClasses);
        
        // Remove from visiting set
        visitedClasses.delete(className);
        
        // Merge base properties with current class properties
        return this._mergeClassProperties(resolvedBase, classData);
    }

    /**
     * Merge properties from base class with child class overrides
     */
    _mergeClassProperties(baseClass, childClass) {
        const result = this._cloneDeep(baseClass);
        
        // Merge top-level properties (child overrides base)
        for (const [key, value] of Object.entries(childClass)) {
            if (key === 'properties') {
                // Special handling for properties object - deep merge
                result.properties = this._mergeObjects(result.properties || {}, value || {});
            } else {
                // Direct override for all other properties
                result[key] = this._cloneDeep(value);
            }
        }
        
        return result;
    }

    /**
     * Deep merge two objects (child properties override parent)
     */
    _mergeObjects(base, override) {
        const result = this._cloneDeep(base);
        
        for (const [key, value] of Object.entries(override)) {
            if (value !== null && typeof value === 'object' && !Array.isArray(value) && 
                result[key] && typeof result[key] === 'object' && !Array.isArray(result[key])) {
                // Recursively merge nested objects
                result[key] = this._mergeObjects(result[key], value);
            } else {
                // Direct override for primitives, arrays, and null values
                result[key] = this._cloneDeep(value);
            }
        }
        
        return result;
    }

    /**
     * Build scope-filtered lookup for scope 2 items only
     */
    _buildScopeFilteredLookup() {
        this.itemsByClass = {};
        for (const [className, resolvedClass] of Object.entries(this.resolvedClasses)) {
            if (resolvedClass.hasOwnProperty('scope') && resolvedClass.scope === 2) {
                this.itemsByClass[className.toLowerCase()] = resolvedClass;
            }
        }
    }

    /**
     * Annotate accessory items with inferred weaponSlots based on iteminfo_base
     * This does not infer weapon slots for weapons themselves (no fallback assumptions).
     */
    _annotateAccessorySlots() {
        const slotMap = new Map([
            ['InventoryOpticsItem_Base_F', 'optic'],
            ['InventoryUnderItem_Base_F', 'underbarrel'],
            ['InventoryMuzzleItem_Base_F', 'muzzle'],
            ['InventoryFlashLightItem_Base_F', 'pointer']
        ]);

        for (const item of Object.values(this.resolvedClasses)) {
            if (!item || !item.hasOwnProperty('scope') || item.scope !== 2) continue;
            const base = item.iteminfo_base || (item.properties && item.properties.iteminfo_base);
            const slot = base && slotMap.get(base);
            if (slot) {
                // Normalize to array on the item for compatibility checks
                if (!Array.isArray(item.weaponSlots)) item.weaponSlots = [];
                if (!item.weaponSlots.includes(slot)) item.weaponSlots.push(slot);
            }
        }
    }

    /**
     * Deep clone utility
     */
    _cloneDeep(obj) {
        if (obj === null || typeof obj !== 'object') return obj;
        if (obj instanceof Date) return new Date(obj.getTime());
        if (Array.isArray(obj)) return obj.map(item => this._cloneDeep(item));
        
        const cloned = {};
        for (const [key, value] of Object.entries(obj)) {
            cloned[key] = this._cloneDeep(value);
        }
        return cloned;
    }

    /**
     * Reset all internal state
     */
    _resetState() {
        this.items = null;
        this.allClasses = {};
        this.itemsByClass = {};
        this.classHierarchy = {};
        this.classChildren = {};
        this.resolvedClasses = {};
    }

    // Public API methods

    isReady() {
        return this.isInitialized && this.items !== null;
    }

    /**
     * Find a class by name - returns resolved class with inheritance
     */
    findClass(className) {
        if (!this.isReady()) return null;
        const item = this.itemsByClass[className.toLowerCase()];
        return (item && item.hasOwnProperty('scope') && item.scope === 2) ? item : null;
    }

    /**
     * Get resolved class data for any class (including base classes)
     */
    getResolvedClass(className) {
        if (!this.isReady()) return null;
        return this.resolvedClasses[className] || null;
    }

    /**
     * Get raw (unresolved) class data
     */
    getRawClass(className) {
        if (!this.isReady()) return null;
        return this.allClasses[className] || null;
    }

    /**
     * Get inheritance chain for a class (from root to class)
     */
    getInheritanceChain(className) {
        if (!this.isReady()) return [];
        
        const chain = [];
        let currentClass = className;
        
        while (currentClass && this.allClasses[currentClass]) {
            chain.unshift(currentClass);
            currentClass = this.classHierarchy[currentClass];
        }
        
        return chain;
    }

    /**
     * Get all child classes of a given class
     */
    getChildClasses(className, recursive = false) {
        if (!this.isReady()) return [];
        
        const children = this.classChildren[className] || [];
        if (!recursive) return [...children];
        
        // Recursively collect all descendants
        const allDescendants = [];
        const collectDescendants = (parentClass) => {
            const directChildren = this.classChildren[parentClass] || [];
            for (const child of directChildren) {
                allDescendants.push(child);
                collectDescendants(child);
            }
        };
        
        collectDescendants(className);
        return allDescendants;
    }

    getClassesByCategory(category) {
        if (!this.isReady()) return [];
        // Special handling for right-panel pseudo-categories
        if (category === 'bipods') {
            return Object.values(this.resolvedClasses).filter(item =>
                item && item.scope === 2 && Array.isArray(item.weaponSlots) && item.weaponSlots.includes('underbarrel')
            );
        }
        if (category === 'attachments') {
            // Attachments here means muzzle and pointer devices (exclude bipods)
            return Object.values(this.resolvedClasses).filter(item => {
                if (!(item && item.scope === 2)) return false;
                const slots = item.weaponSlots;
                if (!Array.isArray(slots)) return false;
                const isAttachment = slots.includes('muzzle') || slots.includes('pointer');
                const isBipod = slots.includes('underbarrel');
                return isAttachment && !isBipod;
            });
        }

        // Exclude editor/vehicle weapon proxies (CfgVehicles Weapon_Base_F wrappers)
        // from weapon categories to avoid duplicates like Weapon_arifle_*.
        const weaponCategories = new Set(['rifles', 'pistols', 'launchers']);
        const requiredAncestors = {
            rifles: new Set(['Rifle_Base_F', 'Rifle_Long_Base_F', 'Rifle_Short_Base_F']),
            pistols: new Set(['Pistol_Base_F']),
            launchers: new Set(['Launcher_Base_F'])
        };

        return Object.entries(this.resolvedClasses)
            .filter(([className, item]) => {
                if (!(item.category === category && item.hasOwnProperty('scope') && item.scope === 2)) {
                    return false;
                }
                if (weaponCategories.has(category)) {
                    // Exclude CfgVehicles proxies and require CfgWeapons ancestry
                    if (this._isDescendantOf(className, 'Weapon_Base_F')) return false;
                    const allowed = requiredAncestors[category];
                    if (allowed && !this._inheritsFromAny(className, allowed)) return false;
                    // Heuristic: ensure class has weapon-defining traits
                    if (!this._hasWeaponTraits(item)) return false;
                }
                return true;
            })
            .map(([, item]) => item);
    }

    /**
     * Return compatible magazines for a given weapon.
     * Accepts a class name (string) or a resolved item object.
     * Compatibility strategy:
     * - Prefer explicit magazine class names from weapon (properties.magazines or magazines).
     * - Map to existing scope 2 classes and filter to category 'magazines'.
     * - If none are found, return an empty list (no heuristic guessing).
     */
    getCompatibleMagazines(weapon) {
        if (!this.isReady() || !weapon) return [];

        const weaponItem = typeof weapon === 'string'
            ? (this.getResolvedClass(weapon) || this.findClass(weapon))
            : weapon;
        if (!weaponItem) return [];

        const mags = [];
        const p = weaponItem.properties || {};
        // Collect potential magazine classnames from multiple sources
        if (Array.isArray(weaponItem.magazines)) mags.push(...weaponItem.magazines);
        if (Array.isArray(p.magazines)) mags.push(...p.magazines);
        const orig = weaponItem._originalData || {};
        if (Array.isArray(orig.magazines)) mags.push(...orig.magazines);
        if (orig.properties && Array.isArray(orig.properties.magazines)) mags.push(...orig.properties.magazines);
        if (weaponItem.class_name) {
            const resolved = this.getResolvedClass(weaponItem.class_name) || this.findClass(weaponItem.class_name);
            if (resolved) {
                if (Array.isArray(resolved.magazines)) mags.push(...resolved.magazines);
                const rp = resolved.properties || {};
                if (Array.isArray(rp.magazines)) mags.push(...rp.magazines);
            }
        }

        // De-duplicate and map to resolved magazine items that actually exist
        const unique = Array.from(new Set(mags.map(m => String(m).toLowerCase())));
        const results = [];
        for (const magClassLower of unique) {
            const mag = this.itemsByClass[magClassLower];
            if (mag && mag.category === 'magazines' && mag.hasOwnProperty('scope') && mag.scope === 2) {
                results.push(mag);
            }
        }
        return results;
    }

    /**
     * Return compatible accessories for a weapon for a given accessory category.
     * If slot information is not present, fall back to returning all items in the category.
     * Supported categories include: 'optics', 'attachments', 'bipods'.
     */
    getCompatibleAccessories(weapon, category = 'attachments') {
        if (!this.isReady()) return [];
        if (!weapon) return [];

        const weaponItem = typeof weapon === 'string'
            ? (this.getResolvedClass(weapon) || this.findClass(weapon))
            : weapon;
        if (!weaponItem) return [];

        // Optics: allow for small-arms categories (strict by weapon category)
        if (category === 'optics') {
            const allowsOptics = weaponItem.category === 'rifles' || weaponItem.category === 'pistols';
            return allowsOptics ? this.getClassesByCategory('optics') : [];
        }

        // Strict mode: require explicit slot declarations on weapon and items
        const wSlots = weaponItem.weaponSlots || (weaponItem.properties && weaponItem.properties.weaponSlots) || [];
        if (!Array.isArray(wSlots) || wSlots.length === 0) return [];

        const catItems = this.getClassesByCategory(category);
        return catItems.filter(acc => {
            const slots = acc.weaponSlots || (acc.properties && acc.properties.weaponSlots) || [];
            return Array.isArray(slots) && slots.some(s => wSlots.includes(s));
        });
    }

    /**
     * Check if class inherits from a specific ancestor (inclusive of ancestor match)
     */
    _isDescendantOf(className, ancestorName) {
        let current = className;
        const visited = new Set();
        while (current && this.allClasses[current] && !visited.has(current)) {
            if (current === ancestorName) return true;
            visited.add(current);
            current = this.classHierarchy[current];
        }
        return false;
    }

    _inheritsFromAny(className, ancestorSet) {
        let current = className;
        const visited = new Set();
        while (current && this.allClasses[current] && !visited.has(current)) {
            if (ancestorSet.has(current)) return true;
            visited.add(current);
            current = this.classHierarchy[current];
        }
        return false;
    }

    _hasWeaponTraits(item) {
        const p = item.properties || {};
        const arrays = [
            item.magazines, p.magazines,
            item.magwells, p.magwells,
            item.modes, p.modes
        ];
        return arrays.some(v => Array.isArray(v) && v.length > 0);
    }

    getStats() {
        const hierarchyStats = this.isReady() ? {
            totalClasses: Object.keys(this.allClasses).length,
            rootClasses: Object.keys(this.allClasses).filter(name => !this.classHierarchy[name]).length,
            leafClasses: Object.keys(this.allClasses).filter(name => !this.classChildren[name] || this.classChildren[name].length === 0).length,
            maxDepth: this._calculateMaxDepth()
        } : {};

        return {
            ndjsonPath: this.ndjsonPath,
            isInitialized: this.isInitialized,
            itemCount: this.items ? this.items.length : 0,
            hasError: this.loadError !== null,
            errorMessage: this.loadError ? this.loadError.message : null,
            categories: this.getAvailableCategories(),
            hierarchy: hierarchyStats
        };
    }

    /**
     * Calculate maximum inheritance depth
     */
    _calculateMaxDepth() {
        let maxDepth = 0;
        
        for (const className of Object.keys(this.allClasses)) {
            const chain = this.getInheritanceChain(className);
            maxDepth = Math.max(maxDepth, chain.length);
        }
        
        return maxDepth;
    }

    getAvailableCategories() {
        if (!this.isReady()) return [];
        const categories = new Set();
        for (const resolvedClass of Object.values(this.resolvedClasses)) {
            if (resolvedClass.category && resolvedClass.hasOwnProperty('scope') && resolvedClass.scope === 2) {
                categories.add(resolvedClass.category);
            }
        }
        return Array.from(categories).sort();
    }

    getCategoryStats() {
        if (!this.isReady()) return {};
        const stats = {};
        for (const resolvedClass of Object.values(this.resolvedClasses)) {
            if (resolvedClass.category && resolvedClass.hasOwnProperty('scope') && resolvedClass.scope === 2) {
                stats[resolvedClass.category] = (stats[resolvedClass.category] || 0) + 1;
            }
        }
        return stats;
    }

    reset() {
        this.isInitialized = false;
        this._resetState();
        this.loadError = null;
    }

    setNdjsonPath(newPath) {
        if (this.ndjsonPath !== newPath) {
            this.ndjsonPath = newPath;
            this.reset();
        }
    }

    getAllItems() {
        if (!this.isReady()) return [];
        return Object.values(this.resolvedClasses)
            .filter(item => item.hasOwnProperty('scope') && item.scope === 2);
    }

    /**
     * Validate inheritance tree for issues
     */
    validateInheritance() {
        if (!this.isReady()) return { valid: false, errors: ['DataService not initialized'] };
        
        const errors = [];
        const warnings = [];
        
        // Check for orphaned base_class references
        for (const [className, classData] of Object.entries(this.allClasses)) {
            const baseClass = classData.base_class;
            if (baseClass && baseClass !== '' && !this.allClasses[baseClass]) {
                errors.push(`Class '${className}' references non-existent base class '${baseClass}'`);
            }
        }
        
        // Check for circular inheritance (should have been caught during resolution)
        for (const className of Object.keys(this.allClasses)) {
            try {
                this.getInheritanceChain(className);
            } catch (error) {
                if (error.message.includes('Circular inheritance')) {
                    errors.push(error.message);
                }
            }
        }
        
        return {
            valid: errors.length === 0,
            errors,
            warnings
        };
    }

    /**
     * Debug helper - print inheritance tree
     */
    printInheritanceTree(rootClass = null, maxDepth = 10) {
        if (!this.isReady()) return '';
        
        const lines = [];
        const visited = new Set();
        
        const printNode = (className, depth = 0, prefix = '') => {
            if (depth > maxDepth || visited.has(className)) return;
            visited.add(className);
            
            const classData = this.allClasses[className];
            if (!classData) return;
            
            const indent = '  '.repeat(depth);
            const scope = classData.scope !== undefined ? ` (scope: ${classData.scope})` : '';
            const category = classData.category ? ` [${classData.category}]` : '';
            lines.push(`${indent}${prefix}${className}${scope}${category}`);
            
            const children = this.classChildren[className] || [];
            children.forEach((child, index) => {
                const isLast = index === children.length - 1;
                const childPrefix = isLast ? '└─ ' : '├─ ';
                printNode(child, depth + 1, childPrefix);
            });
        };
        
        if (rootClass) {
            printNode(rootClass);
        } else {
            // Print all root classes
            const rootClasses = Object.keys(this.allClasses)
                .filter(name => !this.classHierarchy[name])
                .sort();
            
            rootClasses.forEach(rootClass => {
                printNode(rootClass);
                lines.push(''); // Empty line between trees
            });
        }
        
        return lines.join('\n');
    }
}

export const dataService = new DataService();
