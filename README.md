# ACE3 Arsenal Testbed

A sorting algorithm testbed that simulates the ACE3 Arsenal interface for rapid development without launching Arma 3.

## Quick Start

1. Open `index.html` in a browser
2. Edit `algorithms.js` to add new sorting/grouping functions
3. Select your algorithm from the dropdown to see results instantly

## Features

### Equipment Categories
- **Weapons** - Rifles, machine guns, sniper rifles
- **Handguns** - Pistols and sidearms  
- **Backpacks** - Storage containers
- **Vests** - Body armor and tactical vests
- **Attachments** - Optics, suppressors, grips

### Tree View Modes
- **Flat List** - Simple sorted list
- **Grouped** - Items organized by mod, caliber, weapon family, etc.
- **Inheritance Tree** - Class hierarchy with expand/collapse

### Live Testing
- Real-time algorithm execution with performance timing
- Visual validation of sorting correctness
- Search filtering
- Item selection and stats display

### Algorithm Types

**Sorting Functions** - Return sorted array:
```javascript
export function sortByDamage(items) {
    return [...items].sort((a, b) => (b.damage || 0) - (a.damage || 0));
}
```

**Grouping Functions** - Return object with group names as keys:
```javascript
export function groupByMod(items) {
    // Returns { "RHS": [...], "Vanilla": [...] }
}
```

## Core Files

- **`index.html`** - Arsenal interface simulation
- **`algorithms.js`** - Add your sorting/grouping functions here
- **`data.js`** - Mock ACE3 data generator
- **`styles.css`** - Interface styling

## Converting to ACE3

Copy your algorithm logic and convert JavaScript syntax to SQF:

```javascript
// JavaScript (testbed)
items.sort((a, b) => a.displayName.localeCompare(b.displayName))

// SQF (ACE3)
_items sort {[_x, "displayName"] call FUNC(getItemProperty)}
```