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
            console.log('📦 Loading items.json...');
            const response = await fetch('./data/items.json');
            
            if (!response.ok) {
                throw new Error(`HTTP ${response.status}: Failed to load items.json - ${response.statusText}`);
            }
            
            const text = await response.text();
            
            // Validate JSON syntax before parsing
            try {
                this.data = JSON.parse(text);
                console.log('✅ JSON parsed successfully');
            } catch (parseError) {
                console.error('❌ JSON Parse Error:', parseError.message);
                console.error('🔍 JSON content preview:', text.substring(0, 200) + '...');
                throw new Error(`Invalid JSON syntax: ${parseError.message}`);
            }
            
            // Validate data structure and content
            this.validateSchema();
            this.loaded = true;
            
            console.log(`🎯 Loaded ${this.data.items.length} items successfully`);
            return this.data;
            
        } catch (error) {
            console.error('🚨 Data Loading Error:', error.message);
            console.error('📍 Full error:', error);
            
            // Provide fallback or rethrow with context
            if (error.name === 'TypeError' && error.message.includes('fetch')) {
                throw new Error('Network error: Could not fetch items.json. Please check if the file exists and the server is running.');
            }
            
            throw error;
        }
    }

    validateSchema() {
        console.log('🔍 Validating data schema...');
        
        // Check top-level structure
        if (!this.data || typeof this.data !== 'object') {
            throw new Error('Invalid data format: root must be an object');
        }
        
        if (!this.data.schema || typeof this.data.schema !== 'object') {
            throw new Error('Invalid data format: missing or invalid schema object');
        }
        
        if (!this.data.items || !Array.isArray(this.data.items)) {
            throw new Error('Invalid data format: missing or invalid items array');
        }
        
        if (this.data.items.length === 0) {
            console.warn('⚠️ Warning: No items found in data');
            return;
        }
        
        console.log(`📋 Validating ${this.data.items.length} items...`);
        
        // Validate each item against its type schema
        let validItems = 0;
        let errors = [];
        
        for (let i = 0; i < this.data.items.length; i++) {
            try {
                this.validateItem(this.data.items[i], i);
                validItems++;
            } catch (error) {
                errors.push(`Item ${i}: ${error.message}`);
                if (errors.length > 10) {
                    errors.push('... (truncated, too many errors)');
                    break;
                }
            }
        }
        
        if (errors.length > 0) {
            console.error('❌ Validation errors found:');
            errors.forEach(error => console.error('  -', error));
            throw new Error(`Schema validation failed: ${errors.length} items have errors`);
        }
        
        console.log(`✅ Schema validation passed: ${validItems} valid items`);
    }

    validateItem(item, index) {
        const itemId = item.className || `item[${index}]`;
        
        // Check if item is an object
        if (!item || typeof item !== 'object') {
            throw new Error(`${itemId}: Item must be an object`);
        }
        
        const required = ['className', 'parentClass', 'name', 'type', 'mod', 'scope', 'properties'];
        
        // Check required fields
        for (const field of required) {
            if (!(field in item)) {
                throw new Error(`${itemId}: Missing required field '${field}'`);
            }
            
            // Check field types
            if (field === 'properties' && typeof item[field] !== 'object') {
                throw new Error(`${itemId}: '${field}' must be an object`);
            } else if (field === 'scope' && typeof item[field] !== 'number') {
                throw new Error(`${itemId}: '${field}' must be a number`);
            } else if (field !== 'properties' && field !== 'scope' && typeof item[field] !== 'string') {
                throw new Error(`${itemId}: '${field}' must be a string`);
            }
        }
        
        // Validate className is unique (basic check)
        if (!item.className.trim()) {
            throw new Error(`${itemId}: className cannot be empty`);
        }

        // Validate type exists in schema
        if (!this.data.schema[item.type]) {
            throw new Error(`${itemId}: Unknown item type '${item.type}'. Valid types: ${Object.keys(this.data.schema).join(', ')}`);
        }

        // Validate properties against schema
        const validProperties = this.data.schema[item.type];
        const itemProperties = Object.keys(item.properties);
        
        for (const prop of itemProperties) {
            if (!validProperties.includes(prop)) {
                console.warn(`⚠️ ${itemId}: Unknown property '${prop}' for type '${item.type}'. Valid properties: ${validProperties.join(', ')}`);
            }
        }
        
        // Check for completely empty properties
        if (itemProperties.length === 0) {
            console.warn(`⚠️ ${itemId}: No properties defined`);
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