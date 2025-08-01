// Data loader that loads and parses real Arma 3 config files
import { ConfigParser } from './configParser.js';

class DataLoader {
    constructor() {
        this.data = null;
        this.loaded = false;
        this.parser = new ConfigParser();
    }

    async loadData() {
        if (this.loaded) return this.data;
        
        try {
            console.log('Loading Arma 3 config files...');
            const allItems = [];
            
            // Define config files to load
            const configFiles = [
                // SFP mod configs
                { path: './data/addons/sfp/ak5/config.cpp', mod: 'SFP' },
                { path: './data/addons/sfp/attachments/config.cpp', mod: 'SFP' },
                
                // PTV mod configs
                { path: './data/addons/ptv/weapons/config.cpp', mod: 'PTV' },
                { path: './data/addons/ptv/weapons_cfg/config.cpp', mod: 'PTV' },
                { path: './data/addons/ptv/amf/sig552/config.cpp', mod: 'PTV' },
                { path: './data/addons/ptv/throwables/config.cpp', mod: 'PTV' },
                
                // SNS mod configs
                { path: './data/addons/sns/sns_vehicles/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/sns_dutch/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/sns_dutch_cfg/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/sns_french/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/simc_uaf_67/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/simc_uaf_67_cfg/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/simc_nv_67_cfg/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/simc_uaf_68_cfg/config.cpp', mod: 'SNS' },
                { path: './data/addons/sns/simc_mc_67_cfg/config.cpp', mod: 'SNS' }
            ];
            
            // Load and parse each config file
            for (const configFile of configFiles) {
                try {
                    const response = await fetch(configFile.path);
                    if (!response.ok) {
                        console.warn(`Failed to load ${configFile.path}: ${response.statusText}`);
                        continue;
                    }
                    
                    const content = await response.text();
                    const parsed = this.parser.parse(content, configFile.path);
                    
                    // Extract items from parsed config using proper categorization
                    const weapons = this.parser.extractWeapons(parsed);
                    const accessories = this.parser.extractAccessories(parsed);
                    const magazines = this.parser.extractMagazines(parsed);
                    const gear = this.parser.extractGear(parsed);
                    
                    // Add mod info if not already set
                    weapons.forEach(w => { if (!w.mod) w.mod = configFile.mod; });
                    accessories.forEach(a => { if (!a.mod) a.mod = configFile.mod; });
                    magazines.forEach(m => { if (!m.mod) m.mod = configFile.mod; });
                    gear.forEach(g => { if (!g.mod) g.mod = configFile.mod; });
                    
                    allItems.push(...weapons, ...accessories, ...magazines, ...gear);
                    
                    const totalItems = weapons.length + accessories.length + magazines.length + gear.length;
                    if (totalItems > 0) {
                        console.log(`Loaded ${weapons.length} weapons, ${accessories.length} accessories, ${magazines.length} magazines, ${gear.length} gear from ${configFile.mod}`);
                    }
                } catch (error) {
                    console.error(`❌ Error parsing ${configFile.path}:`, error);
                }
            }
            
            // Transform items to match expected format
            this.data = {
                items: allItems.map(item => this.transformItem(item))
            };
            
            this.loaded = true;
            
            console.log(`Loaded ${this.data.items.length} total items from config files`);
            
            // If no items loaded, throw error
            if (this.data.items.length === 0) {
                throw new Error('No items could be loaded from config files. Please check that config files exist in data/addons/');
            }
            
            return this.data;
            
        } catch (error) {
            console.error('Data loading failed:', error.message);
            throw error;
        }
    }

    // Transform parsed config items to match the expected format
    transformItem(item) {
        // Map type to category
        const typeToCategory = {
            'weapon': 'weapons',
            'handgun': 'handguns',
            'launcher': 'launchers',
            'magazine': 'magazines',
            'attachment': 'attachments',
            'uniform': 'uniforms',
            'vest': 'vests',
            'backpack': 'backpacks'
        };
        
        // Use the category set by the parser, fallback to type mapping if needed
        const category = item.category || typeToCategory[item.type] || 'weapons';
        
        return {
            // Core properties
            className: item.className,
            baseClass: item.baseClass || '',
            displayName: item.displayName || item.className,
            category: category,
            type: item.type,
            mod: item.mod || 'Unknown',
            scope: item.scope || 2,
            
            // Visual properties
            picture: item.picture || '',
            model: item.model || '',
            descriptionShort: item.descriptionShort || '',
            
            // Physical properties
            mass: item.mass || 0,
            damage: item.damage || 0,
            
            // Weapon-specific properties
            caliber: item.caliber || '',
            magazines: item.magazines || [],
            magazineWell: item.magazineWell || [],
            compatibleSlots: item.compatibleSlots || [],
            compatibleWells: item.compatibleWells || [],
            modes: item.modes || [],
            recoil: item.recoil || '',
            
            // Magazine-specific properties
            count: item.count || 0,
            ammo: item.ammo || '',
            tracersEvery: item.tracersEvery || 0,
            lastRoundsTracer: item.lastRoundsTracer || 0,
            
            // Derived properties for sorting
            inheritance: this.buildInheritanceChain(item),
            variant: this.detectVariant(item),
            textureVariant: null
        };
    }

    buildInheritanceChain(item) {
        const chain = [item.className];
        if (item.baseClass && item.baseClass !== item.className) {
            chain.push(item.baseClass);
            // Add common base classes
            if (item.baseClass.includes('Rifle')) chain.push('Rifle_Base_F');
            if (item.baseClass.includes('Pistol')) chain.push('Pistol_Base_F');
            if (item.baseClass.includes('Launcher')) chain.push('Launcher_Base_F');
        }
        return chain;
    }

    detectVariant(item) {
        // Detect weapon variants based on className patterns
        const className = item.className.toLowerCase();
        
        // Common variant patterns
        if (className.includes('_camo')) return 'camo';
        if (className.includes('_black') || className.includes('_blk')) return 'black';
        if (className.includes('_tan') || className.includes('_sand')) return 'tan';
        if (className.includes('_green') || className.includes('_od')) return 'green';
        if (className.includes('_gl') || className.includes('_m203')) return 'grenade_launcher';
        if (className.includes('_c') && !className.includes('_camo')) return 'compact';
        if (className.includes('_f')) return 'folded';
        if (className.includes('_sd') || className.includes('_silenced')) return 'suppressed';
        
        return null;
    }

    async getItems() {
        const data = await this.loadData();
        return data.items;
    }

    async getItemsByCategory(category) {
        const items = await this.getItems();
        return items.filter(item => item.category === category);
    }

    async getAllItems() {
        return this.getItems();
    }
}

// Global instance
const dataLoader = new DataLoader();

// Export functions for compatibility
export async function generateAllItems() {
    return dataLoader.getAllItems();
}

// For direct access to the loader
export { dataLoader };