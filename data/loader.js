// JSON Data Loader with Schema Validation
// Replaces the old JavaScript-based data generation

class DataLoader {
    constructor() {
        this.data = null;
        this.loaded = false;
    }

    async loadData() {
        if (this.loaded) return this.data;
        
        try {
            const response = await fetch('./data/items.json');
            if (!response.ok) {
                throw new Error(`Failed to load items.json: ${response.status}`);
            }
            
            this.data = await response.json();
            this.validateSchema();
            this.loaded = true;
            
            return this.data;
        } catch (error) {
            console.error('Error loading data:', error);
            throw error;
        }
    }

    validateSchema() {
        if (!this.data.schema || !this.data.items) {
            throw new Error('Invalid data format: missing schema or items');
        }

        // Validate each item against its type schema
        for (const item of this.data.items) {
            this.validateItem(item);
        }
    }

    validateItem(item) {
        const required = ['className', 'parentClass', 'name', 'type', 'mod', 'scope', 'properties'];
        
        // Check required fields
        for (const field of required) {
            if (!(field in item)) {
                throw new Error(`Item ${item.className || 'unknown'} missing required field: ${field}`);
            }
        }

        // Validate type exists in schema
        if (!this.data.schema[item.type]) {
            throw new Error(`Unknown item type: ${item.type} for item ${item.className}`);
        }

        // Validate properties against schema (optional - for development)
        // Skip property validation in browser for now
        const isDevelopment = typeof window === 'undefined'; // Only validate in Node.js
        if (isDevelopment) {
            const validProperties = this.data.schema[item.type];
            for (const prop in item.properties) {
                if (!validProperties.includes(prop)) {
                    console.warn(`Item ${item.className}: unknown property "${prop}" for type "${item.type}"`);
                }
            }
        }
    }

    // Transform JSON items to match the expected format for existing algorithms
    transformItem(jsonItem) {
        return {
            className: jsonItem.className,
            baseClass: jsonItem.parentClass,
            displayName: jsonItem.name,
            category: this.mapTypeToCategory(jsonItem.type),
            mod: jsonItem.mod,
            scope: jsonItem.scope,
            inheritance: this.buildInheritanceChain(jsonItem.className),
            variant: jsonItem.properties.variant || null,
            textureVariant: jsonItem.properties.texture || null,
            ...jsonItem.properties
        };
    }

    mapTypeToCategory(type) {
        const mapping = {
            'weapon': 'weapons',
            'handgun': 'handguns', 
            'launcher': 'launchers',
            'vest': 'vests',
            'backpack': 'backpacks',
            'magazine': 'magazines',
            'attachment': 'attachments'
        };
        return mapping[type] || type;
    }

    buildInheritanceChain(className) {
        const item = this.data.items.find(i => i.className === className);
        if (!item || !item.parentClass) return [className];
        
        const chain = [className];
        let current = item.parentClass;
        
        // Build chain up to root classes
        while (current && current !== 'CfgWeapons') {
            chain.push(current);
            const parent = this.data.items.find(i => i.className === current);
            current = parent ? parent.parentClass : null;
            
            // Prevent infinite loops
            if (chain.length > 10) break;
        }
        
        return chain;
    }

    async getItems() {
        const data = await this.loadData();
        return data.items.map(item => this.transformItem(item));
    }

    async getItemsByCategory(category) {
        const items = await this.getItems();
        return items.filter(item => item.category === category);
    }

    async getWeapons() {
        return this.getItemsByCategory('weapons');
    }

    async getHandguns() {
        return this.getItemsByCategory('handguns');
    }

    async getLaunchers() {
        return this.getItemsByCategory('launchers');
    }

    async getVests() {
        return this.getItemsByCategory('vests');
    }

    async getBackpacks() {
        return this.getItemsByCategory('backpacks');
    }

    // Get all items for testing
    async getAllItems() {
        return this.getItems();
    }
}

// Global instance
const dataLoader = new DataLoader();

// Export functions that match the old API
export async function generateWeapons() {
    return dataLoader.getWeapons();
}

export async function generateHandguns() {
    return dataLoader.getHandguns();
}

export async function generateLaunchers() {
    return dataLoader.getLaunchers();
}

export async function generateVests() {
    return dataLoader.getVests();
}

export async function generateBackpacks() {
    return dataLoader.getBackpacks();
}

// New unified function
export async function generateAllItems() {
    return dataLoader.getAllItems();
}

// For direct access to the loader
export { dataLoader };