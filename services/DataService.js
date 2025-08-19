/**
 * DataService - Simplified data loader for pre-processed database.json
 * 
 * This service loads and provides access to pre-processed item data from database.json.
 * The complex parsing, inheritance resolution, and enrichment pipeline has been moved
 * to a build-time process (tools/ingest.py).
 * 
 * @author DataService Implementation for ACE3 Arsenal Testbed
 */

export class DataService {
    /**
     * Creates a new DataService instance
     */
    constructor() {
        this.isInitialized = false;
        this.data = null;
        this.loadError = null;
    }

    /**
     * Load the pre-processed database.json file
     * @returns {Promise<Array>} Promise that resolves with the item data array
     * @throws {Error} If loading fails
     */
    async initialize() {
        if (this.isInitialized && this.data) {
            return this.data;
        }
        
        try {
            console.log('DataService: Loading database.json...');
            const response = await fetch('/database.json');
            
            if (!response.ok) {
                throw new Error(`Failed to load database.json: ${response.status} ${response.statusText}`);
            }
            
            const data = await response.json();
            
            if (!Array.isArray(data)) {
                throw new Error('Invalid database format: expected array of items');
            }
            
            this.data = data;
            this.isInitialized = true;
            this.loadError = null;
            
            console.log(`DataService: Loaded ${data.length} items from database.json`);
            return this.data;
            
        } catch (error) {
            console.error('DataService: Loading failed:', error);
            this.isInitialized = false;
            this.data = null;
            this.loadError = error;
            throw new Error(`DataService loading failed: ${error.message}`);
        }
    }

    /**
     * Get the loaded data array
     * @returns {Array|null} The loaded item data array or null if not initialized
     */
    getData() {
        return this.data;
    }

    /**
     * Find a single item by className
     * @param {string} className - The class name to search for
     * @returns {Object|null} The item object or null if not found
     */
    findClass(className) {
        if (!this.data) {
            return null;
        }
        return this.data.find(item => item.className === className) || null;
    }

    /**
     * Get items filtered by type
     * @param {string} type - The type to filter by (e.g., 'weapon', 'attachment', 'magazine')
     * @returns {Array<Object>} Array of items matching the type
     */
    getClassesByType(type) {
        if (!this.data) {
            return [];
        }
        return this.data.filter(item => item.type === type);
    }

    /**
     * Get items filtered by category (alias for getClassesByType for compatibility)
     * @param {string} category - The category to filter by
     * @returns {Array<Object>} Array of items matching the category
     */
    getClassesByCategory(category) {
        return this.getClassesByType(category);
    }

    /**
     * Get all available types from the data
     * @returns {Array<string>} Array of unique type names
     */
    getAvailableTypes() {
        if (!this.data) {
            return [];
        }
        const types = new Set();
        for (const item of this.data) {
            if (item.type) {
                types.add(item.type);
            }
        }
        return Array.from(types).sort();
    }

    /**
     * Get all available categories (alias for getAvailableTypes for compatibility)
     * @returns {Array<string>} Array of unique category names
     */
    getAvailableCategories() {
        return this.getAvailableTypes();
    }

    /**
     * Get all items (for compatibility with old API)
     * @returns {Array<Object>} All items in the database
     */
    getAllClasses() {
        return this.data || [];
    }

    /**
     * Check if the service has been initialized
     * @returns {boolean} True if initialized, false otherwise
     */
    isReady() {
        return this.isInitialized && this.data !== null;
    }

    /**
     * Reset the service to uninitialized state
     */
    reset() {
        this.isInitialized = false;
        this.data = null;
        this.loadError = null;
    }

    /**
     * Get service statistics
     * @returns {Object} Object containing service statistics
     */
    getStats() {
        return {
            isInitialized: this.isInitialized,
            itemCount: this.data ? this.data.length : 0,
            hasError: this.loadError !== null,
            errorMessage: this.loadError ? this.loadError.message : null
        };
    }
}

// Export a default instance for convenience
export const dataService = new DataService();