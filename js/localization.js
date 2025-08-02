/**
 * Localization Manager - Frontend interface for language selection and localization controls
 * 
 * This module provides UI components and logic for managing localization in the frontend,
 * including language selection dropdowns and real-time language switching.
 * 
 * @author Arsenal Testbed Localization System
 * @version 1.0.0
 */

export const LocalizationManager = {
    /**
     * Initialize the localization manager
     */
    init() {
        console.log('LocalizationManager: Initializing...');
        this.createLanguageSelector();
        this.bindEvents();
    },

    /**
     * Creates the language selection dropdown in the UI
     */
    createLanguageSelector() {
        // Find a suitable location for the language selector
        const headerElement = document.querySelector('.controls') || document.querySelector('header') || document.body;
        
        // Create language selector container
        const languageContainer = document.createElement('div');
        languageContainer.className = 'language-selector-container';
        languageContainer.style.cssText = `
            display: inline-block;
            margin-left: 10px;
            vertical-align: middle;
        `;
        
        // Create label
        const label = document.createElement('label');
        label.textContent = 'Language: ';
        label.style.cssText = `
            font-size: 12px;
            margin-right: 5px;
            color: #ccc;
        `;
        
        // Create select dropdown
        const select = document.createElement('select');
        select.id = 'language-selector';
        select.className = 'language-selector';
        select.style.cssText = `
            background: #2a2a2a;
            color: #fff;
            border: 1px solid #555;
            border-radius: 3px;
            padding: 2px 5px;
            font-size: 12px;
            min-width: 80px;
        `;
        
        // Add loading option initially
        const loadingOption = document.createElement('option');
        loadingOption.value = '';
        loadingOption.textContent = 'Loading...';
        loadingOption.disabled = true;
        loadingOption.selected = true;
        select.appendChild(loadingOption);
        
        // Assemble the selector
        languageContainer.appendChild(label);
        languageContainer.appendChild(select);
        
        // Insert into the header
        headerElement.appendChild(languageContainer);
        
        console.log('LocalizationManager: Language selector created');
    },

    /**
     * Populates the language selector with available languages
     * @param {string[]} languages - Array of available language codes
     * @param {string} currentLanguage - Currently selected language
     */
    populateLanguageSelector(languages, currentLanguage) {
        const select = document.getElementById('language-selector');
        if (!select) {
            console.warn('LocalizationManager: Language selector not found');
            return;
        }
        
        // Clear existing options
        select.innerHTML = '';
        
        // Add language options
        languages.forEach(language => {
            const option = document.createElement('option');
            option.value = language;
            option.textContent = this.getLanguageDisplayName(language);
            option.selected = language === currentLanguage;
            select.appendChild(option);
        });
        
        select.disabled = false;
        console.log(`LocalizationManager: Populated selector with ${languages.length} languages`);
    },

    /**
     * Gets a user-friendly display name for a language code
     * @param {string} languageCode - Language code
     * @returns {string} Display name
     */
    getLanguageDisplayName(languageCode) {
        const languageNames = {
            'Original': 'Original',
            'English': 'English',
            'Chinese': '中文',
            'French': 'Français',
            'Spanish': 'Español',
            'Italian': 'Italiano',
            'Polish': 'Polski',
            'Russian': 'Русский',
            'German': 'Deutsch',
            'Czech': 'Čeština',
            'Portuguese': 'Português',
            'Korean': '한국어',
            'Chinesesimp': '简体中文',
            'Japanese': '日本語',
            'Turkish': 'Türkçe'
        };
        
        return languageNames[languageCode] || languageCode;
    },

    /**
     * Binds event listeners for language selection
     */
    bindEvents() {
        // Handle language selection changes
        document.addEventListener('change', (event) => {
            if (event.target.id === 'language-selector') {
                this.handleLanguageChange(event.target.value);
            }
        });
    },

    /**
     * Handles language change events
     * @param {string} newLanguage - Selected language code
     */
    async handleLanguageChange(newLanguage) {
        console.log(`LocalizationManager: Changing language to: ${newLanguage}`);
        
        try {
            // Get the localization service from the Arsenal's DataService
            if (!Arsenal.dataService?.isReady()) {
                console.warn('LocalizationManager: DataService not ready');
                return;
            }
            
            const localizationService = Arsenal.dataService.getLocalizationService();
            if (!localizationService) {
                console.warn('LocalizationManager: LocalizationService not available');
                return;
            }
            
            // Change the language in the localization service
            const success = localizationService.setLanguage(newLanguage);
            if (!success) {
                console.error(`LocalizationManager: Failed to set language to ${newLanguage}`);
                return;
            }
            
            // Show loading indicator
            this.showLoadingIndicator();
            
            // Refresh the current data to apply new language
            await this.refreshDataWithNewLanguage();
            
            // Hide loading indicator
            this.hideLoadingIndicator();
            
            console.log(`LocalizationManager: Successfully changed language to ${newLanguage}`);
            
        } catch (error) {
            console.error('LocalizationManager: Error changing language:', error);
            this.hideLoadingIndicator();
        }
    },

    /**
     * Refreshes the current data with the new language
     */
    async refreshDataWithNewLanguage() {
        try {
            // Force DataService to re-run the localization stage
            // Since we changed the language, we need to re-process the data
            await Arsenal.dataService.initialize();
            
            // Refresh the current category view
            if (Arsenal.selectedCategory) {
                // Import DataManager and regenerate data
                const { DataManager } = await import('./data.js');
                DataManager.regenerateData();
            }
            
        } catch (error) {
            console.error('LocalizationManager: Error refreshing data:', error);
            throw error;
        }
    },

    /**
     * Shows a loading indicator during language changes
     */
    showLoadingIndicator() {
        const timingElement = document.getElementById('timing');
        if (timingElement) {
            timingElement.textContent = 'Changing language...';
            timingElement.style.color = '#ffa500'; // Orange color
        }
    },

    /**
     * Hides the loading indicator
     */
    hideLoadingIndicator() {
        const timingElement = document.getElementById('timing');
        if (timingElement && timingElement.textContent === 'Changing language...') {
            timingElement.textContent = 'Ready';
            timingElement.style.color = ''; // Reset color
        }
    },

    /**
     * Updates the language selector after DataService initialization
     */
    async updateLanguageSelector() {
        try {
            if (!Arsenal.dataService?.isReady()) {
                console.log('LocalizationManager: DataService not ready, skipping language selector update');
                return;
            }
            
            const localizationService = Arsenal.dataService.getLocalizationService();
            if (!localizationService) {
                console.log('LocalizationManager: LocalizationService not available');
                return;
            }
            
            const availableLanguages = localizationService.getAvailableLanguages();
            const currentLanguage = localizationService.getCurrentLanguage();
            
            if (availableLanguages.length > 0) {
                this.populateLanguageSelector(availableLanguages, currentLanguage);
            } else {
                console.log('LocalizationManager: No languages available');
            }
            
        } catch (error) {
            console.error('LocalizationManager: Error updating language selector:', error);
        }
    }
};