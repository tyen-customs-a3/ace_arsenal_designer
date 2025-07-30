// UI Constants for consistent styling across the application

// Toggle button icons - using simple, clear symbols
export const TOGGLE_ICONS = {
    EXPANDED: '−',    // Minus - indicates can collapse
    COLLAPSED: '+'    // Plus - indicates can expand
};

// Alternative icons (can switch by changing the values above):
// Option 1: Simple but bigger: '−' (minus) and '＋' (fullwidth plus)
// Option 2: Boxed symbols: '⊟' (squared minus) and '⊞' (squared plus) 
// Option 3: Mathematical: '⊖' (circled minus) and '⊕' (circled plus)
// Option 4: Geometric: '▬' (horizontal bar) and '┼' (cross)

// Panel toggle arrows (for filter panels)
export const PANEL_ARROWS = {
    EXPANDED: '▼',    // Down arrow - panel is open
    COLLAPSED: '▶'    // Right arrow - panel is closed
};

// Master expand/collapse button symbols
export const MASTER_TOGGLE = {
    EXPAND_ALL: '+',   // Plus symbol for expand all
    COLLAPSE_ALL: '−'  // Minus symbol for collapse all
};

// Default display options - controls initial visibility of UI elements
export const DEFAULT_DISPLAY_OPTIONS = {
    showPreviewIcon: true,   // Show category preview icons by default
    showModIcon: true,       // Show mod icons by default
    spacing: 'general'       // Default spacing mode
};