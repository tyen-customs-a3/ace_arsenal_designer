// Reactive State Manager
// Centralized application state with subscriptions

import { DEFAULT_DISPLAY_OPTIONS } from '../ui/constants.js';

const state = {
  // Data state
  currentItems: [],
  filteredItems: [],

  // Selection & UI State
  selectedCategory: 'rifles',
  selectedRightCategory: 'attachments',
  selectedItem: null,
  activeWeaponType: 'primary', // primary | sidearm | launcher

  // Equipped state
  equipped: {
    weapons: {
      primary: { weapon: null, optic: null, muzzle: null, pointer: null, underbarrel: null, magazine: null },
      sidearm: { weapon: null, optic: null, muzzle: null, pointer: null, underbarrel: null, magazine: null },
      launcher: { weapon: null, optic: null, muzzle: null, pointer: null, underbarrel: null, magazine: null },
    },
    gear: {
      uniform: null,
      vest: null,
      backpack: null,
      headgear: null,
      goggles: null,
    }
  },

  // Filter state
  activeFilters: {
    mods: new Set(),
    calibers: new Set(),
    weaponTypes: new Set(),
  },
  rightPanelFilters: {
    magnifications: new Set(),
    capacities: new Set(),
    tracers: new Set(),
    ballistics: new Set(),
  },

  // App display state
  displayOptions: { ...DEFAULT_DISPLAY_OPTIONS },
  currentSortOrder: 'asc',
  currentExpandState: false,
  // Panel-specific UI preferences
  uiPanels: {
    leftTreeView: { sortBy: null, sortOrder: 'asc', /* groupByMod follows DOM by default */ },
    rightTreeView: { sortBy: null, sortOrder: 'asc', /* groupByMod opt-in per panel */ },
  },
};

const subscribers = new Map();

function notify(key, value) {
  const subs = subscribers.get(key);
  if (!subs) return;
  for (const cb of subs) {
    try { cb(value, getState()); } catch (e) { console.warn('Subscriber error for', key, e); }
  }
}

export function getState() {
  // Shallow clone for plain values; keep Sets as Sets
  return {
    ...state,
    activeFilters: {
      mods: new Set(state.activeFilters.mods),
      calibers: new Set(state.activeFilters.calibers),
      weaponTypes: new Set(state.activeFilters.weaponTypes),
    },
    rightPanelFilters: {
      magnifications: new Set(state.rightPanelFilters.magnifications),
      capacities: new Set(state.rightPanelFilters.capacities),
      tracers: new Set(state.rightPanelFilters.tracers),
      ballistics: new Set(state.rightPanelFilters.ballistics),
    },
    displayOptions: { ...state.displayOptions },
    uiPanels: {
      leftTreeView: { ...state.uiPanels.leftTreeView },
      rightTreeView: { ...state.uiPanels.rightTreeView },
    },
    equipped: {
      weapons: {
        primary: { ...state.equipped.weapons.primary },
        sidearm: { ...state.equipped.weapons.sidearm },
        launcher: { ...state.equipped.weapons.launcher },
      },
      gear: { ...state.equipped.gear }
    }
  };
}

export function subscribe(key, callback) {
  if (!subscribers.has(key)) subscribers.set(key, new Set());
  subscribers.get(key).add(callback);
  return () => {
    const set = subscribers.get(key);
    if (!set) return;
    set.delete(callback);
  };
}

export const actions = {
  setSelectedItem(item) {
    state.selectedItem = item || null;
    notify('selectedItem', state.selectedItem);
  },
  setSelectedCategory(category) {
    if (!category || category === state.selectedCategory) return;
    state.selectedCategory = category;
    notify('selectedCategory', state.selectedCategory);
  },
  setSelectedRightCategory(category) {
    if (!category || category === state.selectedRightCategory) return;
    state.selectedRightCategory = category;
    notify('selectedRightCategory', state.selectedRightCategory);
  },
  setDisplayOptions(options) {
    state.displayOptions = { ...state.displayOptions, ...(options || {}) };
    notify('displayOptions', state.displayOptions);
  },
  setFilteredItems(items) {
    state.filteredItems = Array.isArray(items) ? items : [];
    notify('filteredItems', state.filteredItems);
  },
  setCurrentItems(items) {
    state.currentItems = Array.isArray(items) ? items : [];
    notify('currentItems', state.currentItems);
  },
  setSortOrder(order) {
    state.currentSortOrder = order === 'desc' ? 'desc' : 'asc';
    notify('currentSortOrder', state.currentSortOrder);
  },
  setExpandState(expanded) {
    state.currentExpandState = !!expanded;
    notify('currentExpandState', state.currentExpandState);
  },

  // Equip state actions
  setActiveWeaponType(type) {
    const allowed = new Set(['primary','sidearm','launcher']);
    if (!allowed.has(type)) return;
    if (state.activeWeaponType === type) return;
    state.activeWeaponType = type;
    notify('activeWeaponType', state.activeWeaponType);
  },
  equipWeaponForActive(item) {
    const t = state.activeWeaponType;
    state.equipped.weapons[t].weapon = item || null;
    notify('equipped', getState().equipped);
  },
  equipForActiveWeapon(slot, item) {
    const valid = new Set(['optic','muzzle','pointer','underbarrel','magazine']);
    if (!valid.has(slot)) return;
    const t = state.activeWeaponType;
    state.equipped.weapons[t][slot] = item || null;
    notify('equipped', getState().equipped);
  },
  unequipForActiveWeapon(slot) {
    const valid = new Set(['weapon','optic','muzzle','pointer','underbarrel','magazine']);
    if (!valid.has(slot)) return;
    const t = state.activeWeaponType;
    state.equipped.weapons[t][slot] = null;
    notify('equipped', getState().equipped);
  },
  equipGear(category, item) {
    if (!(category in state.equipped.gear)) return;
    state.equipped.gear[category] = item || null;
    notify('equipped', getState().equipped);
  },
  unequipGear(category) {
    if (!(category in state.equipped.gear)) return;
    state.equipped.gear[category] = null;
    notify('equipped', getState().equipped);
  },

  // Left panel filters
  toggleFilter(filterType, value, isChecked) {
    const set = state.activeFilters[filterType];
    if (!(set instanceof Set)) return;
    if (isChecked) set.add(value); else set.delete(value);
    notify('activeFilters', getState().activeFilters);
  },
  clearAllFilters() {
    state.activeFilters.mods.clear();
    state.activeFilters.calibers.clear();
    state.activeFilters.weaponTypes.clear();
    notify('activeFilters', getState().activeFilters);
  },

  // Right panel filters
  toggleRightPanelFilterType(filterType, value, isChecked) {
    const set = state.rightPanelFilters[filterType];
    if (!(set instanceof Set)) return;
    if (isChecked) set.add(value); else set.delete(value);
    notify('rightPanelFilters', getState().rightPanelFilters);
  },
  clearRightPanelFilters() {
    state.rightPanelFilters.magnifications.clear();
    state.rightPanelFilters.capacities.clear();
    state.rightPanelFilters.tracers.clear();
    state.rightPanelFilters.ballistics.clear();
    notify('rightPanelFilters', getState().rightPanelFilters);
  },
  // Panel preference updates
  setPanelPrefs(panelId, prefs) {
    if (!panelId) return;
    const current = state.uiPanels[panelId] || {};
    state.uiPanels[panelId] = { ...current, ...(prefs || {}) };
    notify('uiPanels', getState().uiPanels);
  },
};

// Optional: expose on window for transitional compatibility without leaking internals
if (typeof window !== 'undefined') {
  window.State = { getState, subscribe, actions };
}
