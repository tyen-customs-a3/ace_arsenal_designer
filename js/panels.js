// Panel Management
// Handles panel visibility and toggle states

export const PanelManager = {
    init() {
        // Panel toggle event listeners
        this.initializePanelToggles();
    },

    initializePanelToggles() {
        // Options panel toggle
        const optionsHeader = document.getElementById('compactOptionsPanel').querySelector('.filter-toggle-header');
        if (optionsHeader) {
            optionsHeader.addEventListener('click', () => this.toggleOptionsPanel());
        }

        // Stats panel toggle
        const statsHeader = document.getElementById('compactStatsPanel').querySelector('.filter-toggle-header');
        if (statsHeader) {
            statsHeader.addEventListener('click', () => this.toggleStatsPanel());
        }

        // Filter panel toggle
        const filterHeader = document.getElementById('bottomRightFilterPanel').querySelector('.filter-toggle-header');
        if (filterHeader) {
            filterHeader.addEventListener('click', () => this.toggleFilterPanel());
        }

        // Right panel filter toggle
        const rightFilterHeader = document.getElementById('rightPanelFilter').querySelector('.filter-toggle-header');
        if (rightFilterHeader) {
            rightFilterHeader.addEventListener('click', () => this.toggleRightPanelFilter());
        }
    },

    toggleFilterPanel() {
        const panel = document.getElementById('bottomRightFilterPanel');
        const content = document.getElementById('filterContent');
        const arrow = document.getElementById('filterToggleArrow');
        
        panel.classList.toggle('expanded');
        
        if (panel.classList.contains('expanded')) {
            content.style.display = 'block';
            arrow.textContent = '▼';
        } else {
            content.style.display = 'none';
            arrow.textContent = '▶';
        }
    },

    toggleStatsPanel() {
        const panel = document.getElementById('compactStatsPanel');
        const content = document.getElementById('statsContent');
        const arrow = document.getElementById('statsToggleArrow');
        
        panel.classList.toggle('expanded');
        
        if (panel.classList.contains('expanded')) {
            content.style.display = 'block';
            arrow.textContent = '▼';
        } else {
            content.style.display = 'none';
            arrow.textContent = '▶';
        }
    },

    toggleOptionsPanel() {
        const panel = document.getElementById('compactOptionsPanel');
        const content = document.getElementById('optionsContent');
        const arrow = document.getElementById('optionsToggleArrow');
        
        panel.classList.toggle('expanded');
        
        if (panel.classList.contains('expanded')) {
            content.style.display = 'block';
            arrow.textContent = '▼';
        } else {
            content.style.display = 'none';
            arrow.textContent = '▶';
        }
    },

    toggleRightPanelFilter() {
        const panel = document.getElementById('rightPanelFilter');
        const content = document.getElementById('rightFilterContent');
        const arrow = document.getElementById('rightFilterToggleArrow');
        
        panel.classList.toggle('expanded');
        
        if (panel.classList.contains('expanded')) {
            content.style.display = 'block';
            arrow.textContent = '▼';
        } else {
            content.style.display = 'none';
            arrow.textContent = '▶';
        }
    }
};