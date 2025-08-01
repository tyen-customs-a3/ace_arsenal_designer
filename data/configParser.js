/**
 * Enhanced Arma 3 Config Parser
 * Properly categorizes weapons, accessories, magazines, and gear
 */

class ConfigParser {
    constructor() {
        this.items = [];
        this.currentFile = '';
    }

    /**
     * Parse a config file content
     * @param {string} content - The raw config file content
     * @param {string} filename - The filename for context
     * @returns {Object} Parsed data structure
     */
    parse(content, filename) {
        this.currentFile = filename;
        
        // Remove comments
        content = this.removeComments(content);
        
        // Parse classes
        const classes = this.parseClasses(content);
        
        return classes;
    }

    /**
     * Remove single-line and multi-line comments
     */
    removeComments(content) {
        // Remove single-line comments
        content = content.replace(/\/\/.*$/gm, '');
        
        // Remove multi-line comments
        content = content.replace(/\/\*[\s\S]*?\*\//g, '');
        
        return content;
    }

    /**
     * Parse class definitions recursively with improved nested class handling
     */
    parseClasses(content, parentClass = null) {
        const classes = {};
        
        // First, extract all top-level class definitions with balanced braces
        const classMatches = this.extractClassDefinitions(content);
        
        for (const classMatch of classMatches) {
            const className = classMatch.name;
            const baseClass = classMatch.baseClass || parentClass;
            const classBody = classMatch.body;
            
            // Parse class properties
            const classData = {
                className: className,
                baseClass: baseClass,
                properties: this.parseProperties(classBody),
                subClasses: this.parseClasses(classBody, className)
            };
            
            classes[className] = classData;
        }
        
        return classes;
    }

    /**
     * Extract class definitions with proper brace matching
     */
    extractClassDefinitions(content) {
        const classes = [];
        const classRegex = /class\s+(\w+)(?:\s*:\s*(\w+))?\s*\{/g;
        
        let match;
        while ((match = classRegex.exec(content)) !== null) {
            const className = match[1];
            const baseClass = match[2];
            const startPos = match.index + match[0].length;
            
            // Find matching closing brace
            let braceCount = 1;
            let pos = startPos;
            let classBody = '';
            
            while (pos < content.length && braceCount > 0) {
                const char = content[pos];
                if (char === '{') {
                    braceCount++;
                } else if (char === '}') {
                    braceCount--;
                }
                
                if (braceCount > 0) {
                    classBody += char;
                }
                pos++;
            }
            
            classes.push({
                name: className,
                baseClass: baseClass,
                body: classBody
            });
        }
        
        return classes;
    }

    /**
     * Parse properties within a class
     */
    parseProperties(content) {
        const properties = {};
        
        // Parse simple properties (key = value)
        const propRegex = /(\w+)\s*=\s*([^;]+);/g;
        let match;
        while ((match = propRegex.exec(content)) !== null) {
            const key = match[1];
            const value = match[2].trim();
            properties[key] = this.parseValue(value);
        }
        
        // Parse array properties (key[] = {values})
        const arrayRegex = /(\w+)\[\]\s*=\s*\{([^}]+)\}/g;
        while ((match = arrayRegex.exec(content)) !== null) {
            const key = match[1];
            const values = match[2];
            properties[key] = this.parseArray(values);
        }
        
        return properties;
    }

    /**
     * Parse a value (string, number, or identifier)
     */
    parseValue(value) {
        // Remove quotes from strings
        if (value.startsWith('"') && value.endsWith('"')) {
            return value.slice(1, -1);
        }
        
        // Try to parse as number
        const num = parseFloat(value);
        if (!isNaN(num) && value.match(/^-?\d*\.?\d+$/)) {
            return num;
        }
        
        // Return as is (identifier or expression)
        return value;
    }

    /**
     * Parse array values
     */
    parseArray(values) {
        return values
            .split(',')
            .map(v => v.trim())
            .filter(v => v)
            .map(v => this.parseValue(v));
    }

    /**
     * Extract actual weapons from parsed config (not accessories)
     */
    extractWeapons(classes) {
        const weapons = [];
        
        if (classes.CfgWeapons && classes.CfgWeapons.subClasses) {
            const cfgWeapons = classes.CfgWeapons.subClasses;
            
            for (const [className, weaponData] of Object.entries(cfgWeapons)) {
                // Only include items with scope 2 (public/visible items)
                if (weaponData.properties.scope !== 2) {
                    continue;
                }
                
                // Check if this is actually a weapon (not an accessory)
                if (this.isActualWeapon(className, weaponData)) {
                    const weapon = this.createWeaponItem(className, weaponData);
                    if (weapon) {
                        weapons.push(weapon);
                    }
                }
            }
        }
        
        return weapons;
    }

    /**
     * Extract accessories (optics, suppressors, grips) from parsed config
     */
    extractAccessories(classes) {
        const accessories = [];
        
        if (classes.CfgWeapons && classes.CfgWeapons.subClasses) {
            const cfgWeapons = classes.CfgWeapons.subClasses;
            
            for (const [className, weaponData] of Object.entries(cfgWeapons)) {
                // Only include items with scope 2 (public/visible items)
                if (weaponData.properties.scope !== 2) {
                    continue;
                }
                
                // Check if this is an accessory (not a weapon)
                if (this.isAccessory(className, weaponData)) {
                    const accessory = this.createAccessoryItem(className, weaponData);
                    if (accessory) {
                        accessories.push(accessory);
                    }
                }
            }
        }
        
        return accessories;
    }

    /**
     * Extract magazines from parsed config
     */
    extractMagazines(classes) {
        const magazines = [];
        
        if (classes.CfgMagazines && classes.CfgMagazines.subClasses) {
            const cfgMagazines = classes.CfgMagazines.subClasses;
            
            for (const [className, magData] of Object.entries(cfgMagazines)) {
                // Only include items with scope 2 or undefined scope (magazines often don't have explicit scope)
                if (magData.properties.scope !== undefined && magData.properties.scope !== 2) {
                    continue;
                }
                
                const magazine = this.createMagazineItem(className, magData);
                if (magazine) {
                    magazines.push(magazine);
                }
            }
        }
        
        return magazines;
    }

    /**
     * Extract gear (uniforms, vests, backpacks) from parsed config
     */
    extractGear(classes) {
        const gear = [];
        
        if (classes.CfgVehicles && classes.CfgVehicles.subClasses) {
            const cfgVehicles = classes.CfgVehicles.subClasses;
            
            for (const [className, vehicleData] of Object.entries(cfgVehicles)) {
                // Only include items with scope 2 (public/visible items)
                if (vehicleData.properties.scope !== 2) {
                    continue;
                }
                
                const gearItem = this.createGearItem(className, vehicleData);
                if (gearItem) {
                    gear.push(gearItem);
                }
            }
        }
        
        return gear;
    }

    /**
     * Determine if a CfgWeapons item is an actual weapon
     */
    isActualWeapon(className, data) {
        // Check inheritance chain for weapon base classes
        const baseClass = data.baseClass?.toLowerCase() || '';
        
        // Known weapon base classes
        const weaponBaseClasses = [
            'rifle_base_f', 'rifle_long_base_f', 'rifle_short_base_f',
            'pistol_base_f', 'launcher_base_f', 'machinegun_base_f',
            'submachinegun_base_f', 'sniperrifle_base_f'
        ];
        
        // Check if inherits from weapon base classes
        for (const weaponBase of weaponBaseClasses) {
            if (baseClass.includes(weaponBase)) {
                return true;
            }
        }
        
        // Check for weapon-specific properties
        const hasWeaponSlots = data.subClasses && data.subClasses.WeaponSlotsInfo;
        const hasMagazines = data.properties.magazines && data.properties.magazines.length > 0;
        const hasModes = data.properties.modes && data.properties.modes.length > 0;
        
        return hasWeaponSlots || hasMagazines || hasModes;
    }

    /**
     * Determine if a CfgWeapons item is an accessory
     */
    isAccessory(className, data) {
        // Check inheritance from ItemCore
        const baseClass = data.baseClass?.toLowerCase() || '';
        if (baseClass === 'itemcore') {
            return true;
        }
        
        // Check for accessory-specific ItemInfo types
        if (data.subClasses && data.subClasses.ItemInfo) {
            const itemInfo = data.subClasses.ItemInfo;
            const itemInfoBase = itemInfo.baseClass?.toLowerCase() || '';
            
            const accessoryItemTypes = [
                'inventoryopticsitem_base_f',
                'inventorymuzzleitem_base_f',
                'inventoryflashlightitem_base_f',
                'inventorypointersitem_base_f'
            ];
            
            for (const accessoryType of accessoryItemTypes) {
                if (itemInfoBase.includes(accessoryType)) {
                    return true;
                }
            }
            
            // Check for optics property
            if (itemInfo.properties && itemInfo.properties.optics === 1) {
                return true;
            }
        }
        
        return false;
    }

    /**
     * Create a weapon item from parsed data
     */
    createWeaponItem(className, data) {
        const props = data.properties;
        
        // Determine weapon type
        let type = 'weapon';
        if (data.baseClass) {
            const baseClass = data.baseClass.toLowerCase();
            if (baseClass.includes('pistol')) type = 'handgun';
            if (baseClass.includes('launcher')) type = 'launcher';
        }
        
        // Extract weapon slots if available
        let compatibleSlots = [];
        if (data.subClasses.WeaponSlotsInfo && data.subClasses.WeaponSlotsInfo.subClasses) {
            const slots = data.subClasses.WeaponSlotsInfo.subClasses;
            if (slots.MuzzleSlot) compatibleSlots.push('MuzzleSlot');
            if (slots.CowsSlot) compatibleSlots.push('CowsSlot');
            if (slots.PointerSlot) compatibleSlots.push('PointerSlot');
            if (slots.UnderBarrelSlot) compatibleSlots.push('UnderBarrelSlot');
        }
        
        // Get mass from WeaponSlotsInfo if available
        let mass = 0;
        if (data.subClasses.WeaponSlotsInfo && data.subClasses.WeaponSlotsInfo.properties.mass) {
            mass = data.subClasses.WeaponSlotsInfo.properties.mass;
        }
        
        return {
            className: className,
            displayName: props.displayName || className,
            baseClass: data.baseClass || '',
            type: type,
            category: this.mapTypeToCategory(type),
            mod: props.dlc || this.extractModFromPath(),
            picture: props.picture || '',
            model: props.model || '',
            descriptionShort: props.descriptionShort || '',
            mass: mass,
            magazines: props.magazines || [],
            magazineWell: props.magazineWell || [],
            compatibleSlots: compatibleSlots,
            compatibleWells: [],
            modes: props.modes || [],
            recoil: props.recoil || '',
            scope: props.scope || 2,
            damage: 0, // Would need ammo configs for actual damage
            caliber: this.extractCaliberFromMagazines(props.magazines || []),
            count: 0,
            ammo: '',
            tracersEvery: 0,
            lastRoundsTracer: 0
        };
    }

    /**
     * Create an accessory item from parsed data
     */
    createAccessoryItem(className, data) {
        const props = data.properties;
        
        // Determine accessory type
        let type = 'attachment';
        let subType = 'unknown';
        
        if (data.subClasses && data.subClasses.ItemInfo) {
            const itemInfo = data.subClasses.ItemInfo;
            const itemInfoBase = itemInfo.baseClass?.toLowerCase() || '';
            
            if (itemInfoBase.includes('optics') || itemInfo.properties?.optics === 1) {
                subType = 'optic';
            } else if (itemInfoBase.includes('muzzle')) {
                subType = 'muzzle';
            } else if (itemInfoBase.includes('flashlight') || itemInfoBase.includes('pointer')) {
                subType = 'pointer';
            }
        }
        
        // Get mass from ItemInfo if available
        let mass = 0;
        if (data.subClasses.ItemInfo && data.subClasses.ItemInfo.properties.mass) {
            mass = data.subClasses.ItemInfo.properties.mass;
        }
        
        return {
            className: className,
            displayName: props.displayName || className,
            baseClass: data.baseClass || '',
            type: type,
            subType: subType,
            category: 'attachments',
            mod: props.dlc || this.extractModFromPath(),
            picture: props.picture || '',
            model: props.model || '',
            descriptionShort: props.descriptionShort || '',
            mass: mass,
            magazines: [],
            magazineWell: [],
            compatibleSlots: [],
            compatibleWells: [], // Would need to analyze slot compatibility
            modes: [],
            recoil: '',
            scope: props.scope || 2,
            damage: 0,
            caliber: '',
            count: 0,
            ammo: '',
            tracersEvery: 0,
            lastRoundsTracer: 0
        };
    }

    /**
     * Create a magazine item from parsed data
     */
    createMagazineItem(className, data) {
        const props = data.properties;
        
        return {
            className: className,
            displayName: props.displayName || className,
            baseClass: data.baseClass || '',
            type: 'magazine',
            category: 'magazines',
            mod: props.dlc || this.extractModFromPath(),
            picture: props.picture || '',
            model: props.model || '',
            descriptionShort: props.descriptionShort || '',
            mass: props.mass || 0,
            magazines: [],
            magazineWell: [],
            compatibleSlots: [],
            compatibleWells: [], // Would need magazine well analysis
            modes: [],
            recoil: '',
            scope: props.scope || 2,
            damage: 0,
            caliber: this.extractCaliberFromClassName(className),
            count: props.count || 30,
            ammo: props.ammo || '',
            tracersEvery: props.tracersEvery || 0,
            lastRoundsTracer: props.lastRoundsTracer || 0
        };
    }

    /**
     * Create a gear item (uniform, vest, backpack) from parsed data
     */
    createGearItem(className, data) {
        const props = data.properties;
        
        // Determine gear type based on class name and base class
        let type = 'unknown';
        let category = 'unknown';
        
        const classNameLower = className.toLowerCase();
        
        // Check class name patterns first
        if (classNameLower.startsWith('u_') || classNameLower.includes('uniform')) {
            type = 'uniform';
            category = 'uniforms';
        } else if (classNameLower.startsWith('v_') || classNameLower.includes('vest')) {
            type = 'vest';
            category = 'vests';
        } else if (classNameLower.startsWith('b_') || classNameLower.includes('backpack') || classNameLower.includes('bag')) {
            type = 'backpack';
            category = 'backpacks';
        }
        
        // Fallback to base class if class name didn't match
        if (type === 'unknown' && data.baseClass) {
            const baseClass = data.baseClass.toLowerCase();
            if (baseClass.includes('uniform') || baseClass.includes('soldier')) {
                type = 'uniform';
                category = 'uniforms';
            } else if (baseClass.includes('vest') || baseClass.includes('armor')) {
                type = 'vest';
                category = 'vests';
            } else if (baseClass.includes('bag') || baseClass.includes('backpack')) {
                type = 'backpack';
                category = 'backpacks';
            }
        }
        
        // Skip if we can't determine the type
        if (type === 'unknown') {
            return null;
        }
        
        return {
            className: className,
            displayName: props.displayName || className,
            baseClass: data.baseClass || '',
            type: type,
            category: category,
            mod: props.dlc || this.extractModFromPath(),
            picture: props.picture || '',
            model: props.model || '',
            descriptionShort: props.descriptionShort || '',
            mass: props.mass || 0,
            magazines: [],
            magazineWell: [],
            compatibleSlots: [],
            compatibleWells: [],
            modes: [],
            recoil: '',
            scope: props.scope || 2,
            damage: 0,
            caliber: '',
            count: 0,
            ammo: '',
            tracersEvery: 0,
            lastRoundsTracer: 0,
            
            // Gear-specific properties
            armor: props.armor || 0,
            maximumLoad: props.maximumLoad || 0,
            hiddenSelections: props.hiddenSelections || [],
            hiddenSelectionsTextures: props.hiddenSelectionsTextures || []
        };
    }

    /**
     * Map item type to category
     */
    mapTypeToCategory(type) {
        const mapping = {
            'weapon': 'weapons',
            'handgun': 'handguns',
            'launcher': 'launchers',
            'magazine': 'magazines',
            'attachment': 'attachments',
            'uniform': 'uniforms',
            'vest': 'vests',
            'backpack': 'backpacks'
        };
        return mapping[type] || type;
    }

    /**
     * Extract mod name from file path
     */
    extractModFromPath() {
        if (!this.currentFile) return 'Unknown';
        
        const match = this.currentFile.match(/addons[\/\\](\w+)[\/\\]/);
        return match ? match[1].toUpperCase() : 'Unknown';
    }

    /**
     * Extract caliber from magazine classnames
     */
    extractCaliberFromMagazines(magazines) {
        if (!magazines.length) return '';
        
        const firstMag = magazines[0];
        return this.extractCaliberFromClassName(firstMag);
    }

    /**
     * Extract caliber from class name
     */
    extractCaliberFromClassName(className) {
        // Common caliber patterns
        if (className.includes('556x45')) return '5.56x45mm';
        if (className.includes('762x51')) return '7.62x51mm';
        if (className.includes('762x39')) return '7.62x39mm';
        if (className.includes('9x19')) return '9x19mm';
        if (className.includes('45ACP')) return '.45 ACP';
        if (className.includes('127x99')) return '12.7x99mm';
        
        return '';
    }
}

export { ConfigParser };