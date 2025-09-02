// State Coordinator: recompute filtered items reactively
import { subscribe, getState, actions as StateActions } from './StateManager.js';

async function recomputeFiltered() {
  const { selectedCategory } = getState();
  const { FilterManager } = await import('./filters.js');
  const items = FilterManager.filterItemsByCategory(selectedCategory);
  StateActions.setFilteredItems(items);
  const { Renderer } = await import('./rendering.js');
  Renderer.renderTreeView(items, 'leftTreeView');
}

// Recompute when filters, category, or currentItems change
subscribe('activeFilters', recomputeFiltered);
subscribe('selectedCategory', recomputeFiltered);
subscribe('currentItems', recomputeFiltered);

