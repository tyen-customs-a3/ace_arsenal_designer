# ACE3 Arsenal Testbed

A powerful web-based development environment for creating, testing, and optimizing sorting and grouping algorithms for the ACE3 Arsenal interface. Features a complete data processing pipeline with real Arma 3 configuration data.

## Quick Start

1. Open `index.html` in a modern web browser
2. Wait for the DataService to initialize (loads real Arma 3 config data)
3. Edit algorithms in `algorithms/` directory to add new sorting/grouping functions
4. Select your algorithm from the dropdown to see results instantly

## Features

### Complete Arsenal Simulation
- **Real Data Pipeline**: Processes actual Arma 3 mod configuration files
- **Weapon-Attachment Compatibility**: Realistic weapon slot and magazine well matching
- **Multi-Category Support**: Weapons, handguns, launchers, backpacks, vests, attachments, magazines
- **Arsenal-Style UI**: Faithful recreation of the ACE3 Arsenal interface

### Advanced Tree Views
- **Flat List**: Simple sorted display
- **Grouped**: Items organized by mod, caliber, weapon type, etc.
- **Hierarchy Tree**: Class inheritance visualization with expand/collapse
- **Variant-Aware**: Intelligent grouping of weapon variants

### Development Tools
- **Live Algorithm Testing**: Real-time execution with performance metrics
- **Keyboard Navigation**: Arrow keys, Enter, Escape for efficient testing
- **Search Filtering**: Test algorithms with filtered datasets
- **Compatibility Testing**: Verify weapon-attachment and weapon-magazine matching
- **Statistics Panel**: Detailed item properties and metadata

## Architecture

### Data Processing Pipeline

The testbed uses a sophisticated 4-phase data processing pipeline:

1. **Phase 1 - Parsing** ([parser/](parser/)): Raw Arma 3 config files → Abstract Syntax Tree
2. **Phase 2 - Resolution** ([parser/](parser/)): AST → Fully resolved class hierarchy with inheritance
3. **Phase 3 - Enrichment** ([extractor/](extractor/)): Resolved classes → Enriched database with metadata
4. **Phase 4 - UI Integration** ([services/](services/)): Enriched data → Arsenal interface

### Key Components

- **DataService** ([services/](services/)): Orchestrates the complete data pipeline using Web Workers
- **ConfigParser** ([parser/](parser/)): Parses Arma 3 config files with inheritance resolution
- **DataExtractor** ([extractor/](extractor/)): Enriches classes with queryable metadata using specialized definitions
- **Web Workers** ([workers/](workers/)): Parallel processing for config file parsing
- **Tree Manager** ([ui/](ui/)): Advanced tree rendering with keyboard navigation

## Algorithm Development

### Sorting Functions

Create functions that return sorted arrays:

```javascript
export function sortByDamage(items, direction = 'desc') {
    const sorted = [...items].sort((a, b) => {
        const damageA = a.damage || 0;
        const damageB = b.damage || 0;
        return damageB - damageA; // Default descending
    });
    return direction === 'asc' ? sorted.reverse() : sorted;
}
```

### Grouping Functions

Create functions that return objects with group names as keys:

```javascript
export function groupByMod(items) {
    const groups = {};
    items.forEach(item => {
        const mod = item.mod || 'Unknown';
        if (!groups[mod]) groups[mod] = [];
        groups[mod].push(item);
    });
    return groups;
}
```

### Variant-Aware Algorithms

Use the variant core system for advanced weapon family grouping:

```javascript
import { sortWithVariantAwareness } from './variantCore.js';

export function sortByNameVariantAware(items, direction = 'asc') {
    const sortFn = (a, b) => a.displayName.localeCompare(b.displayName);
    return sortWithVariantAwareness(items, sortFn);
}
```

## Project Structure

```
arsenal-testbed/
├── index.html              # Main Arsenal interface
├── algorithms/             # Sorting and grouping algorithms
│   ├── sorting.js         # Basic and variant-aware sorting
│   ├── grouping.js        # Grouping and categorization
│   ├── hierarchy.js       # Tree-based organization
│   └── variantCore.js     # Weapon variant detection system
├── services/              # Data orchestration services
│   └── DataService.js     # Main data pipeline coordinator
├── parser/                # Config file parsing (Phase 1-2)
│   ├── configParser.js    # Arma 3 config file parser
│   └── inheritanceResolver.js # Class inheritance resolution
├── extractor/             # Metadata enrichment (Phase 3)
│   ├── dataExtractor.js   # Enrichment orchestrator
│   └── definitions/       # Type-specific metadata extractors
├── workers/               # Web Workers for parallel processing
│   └── parser.worker.js   # Parsing worker
├── ui/                    # User interface components
│   ├── treeView.js    # Tree rendering with keyboard navigation
│   ├── treeNavigation.js  # Navigation handlers
│   └── constants.js       # UI configuration
├── data/addons/           # Real Arma 3 mod configuration files
├── styles/                # Interface styling
├── tests/                 # Test files and verification scripts
└── examples/              # Integration examples and documentation
```

## Testing

### Browser Tests
- Open files in `tests/` directory in your browser
- `tests/aggregation-verification.html` - Verify data pipeline
- `tests/test-dataservice.html` - Test DataService functionality
- `tests/test-inheritance-resolver.html` - Test inheritance resolution

### Node.js Tests
```bash
node tests/dataextractor-node.js
```

## Documentation

Each module has detailed README documentation:

- **[Services README](services/README.md)** - DataService and orchestration
- **[Parser README](parser/README.md)** - Config parsing and inheritance resolution  
- **[Extractor README](extractor/README.md)** - Metadata enrichment system
- **[Workers README](workers/README.md)** - Web Worker implementation

## Integration Examples

See the `examples/` directory for:
- **dataservice-integration.js** - Complete DataService usage patterns
- **dataextractor-pipeline.js** - Full pipeline integration examples

## Converting to ACE3

Test your algorithms in the testbed, then convert JavaScript syntax to SQF:

```javascript
// JavaScript (testbed)
items.sort((a, b) => a.displayName.localeCompare(b.displayName))

// SQF (ACE3)
_items sort {[_x, "displayName"] call FUNC(getItemProperty)}
```

## Performance

The testbed is optimized for:
- **Parallel Processing**: Web Workers handle config parsing simultaneously
- **Real-time Updates**: Algorithms execute in milliseconds with performance metrics
- **Large Datasets**: Handles 1000+ items with advanced caching and optimization
- **Memory Efficiency**: Single aggregated database reduces memory overhead

## Browser Compatibility

- **Chrome/Edge**: 80+
- **Firefox**: 78+  
- **Safari**: 14+

Requires modern JavaScript features: ES6 modules, Web Workers, async/await.

## License

Part of the ACE3 mod development ecosystem. See individual mod licenses for usage terms.