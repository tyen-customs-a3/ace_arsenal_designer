# DataExtractor Module

The DataExtractor module orchestrates Phase 3 of the data processing pipeline by dynamically importing all definition modules and applying them to the resolved database from Phase 2. It serves as the central coordinator for enriching Arma 3 configuration classes with specialized metadata.

## Overview

The DataExtractor takes a Map of resolved classes (output from Phase 2) and enriches each class with `_meta` properties containing queryable metadata extracted by specialized definition modules. This enables efficient searching, filtering, and categorization of game items.

## Architecture

```
DataExtractor
├── Dynamic Import System
│   ├── Module Discovery
│   ├── Validation & Loading
│   └── Error Handling with Retries
├── Enrichment Engine
│   ├── Type Detection (isType)
│   ├── Metadata Extraction (extract)
│   └── Priority-based Matching
├── Statistics & Performance Tracking
│   ├── Processing Metrics
│   ├── Per-Definition Statistics
│   └── Error/Warning Collection
└── Configuration & Logging
    ├── Configurable Behavior
    ├── Detailed Logging
    └── Progress Reporting
```

## API Reference

### Primary Function

```javascript
import { enrich } from './extractor/dataExtractor.js';

const result = await enrich(resolvedDatabase, config);
```

**Parameters:**
- `resolvedDatabase` (Map|Object): Resolved classes from Phase 2
- `config` (Object, optional): Configuration options

**Returns:**
- `enrichedDb` (Map): Database with _meta properties added
- `report` (Object): Detailed processing report

### DataExtractor Class

```javascript
import { DataExtractor } from './extractor/dataExtractor.js';

const extractor = new DataExtractor(config);
const result = await extractor.enrich(resolvedDatabase);
```

### Configuration Options

```javascript
const config = {
    enableLogging: true,        // Enable detailed console logging
    continueOnError: true,      // Continue processing after errors
    maxRetries: 3,              // Maximum retries for failed imports
    trackPerformance: true      // Collect detailed performance metrics
};
```

## Usage Examples

### Basic Usage

```javascript
import { enrich } from './extractor/dataExtractor.js';

// Assume resolvedDb is from Phase 2
const { enrichedDb, report } = await enrich(resolvedDb);

console.log(`Enriched ${report.summary.enrichedClasses} classes`);
console.log(`Enrichment rate: ${report.summary.enrichmentRate}`);

// Access enriched data
for (const [className, classData] of enrichedDb) {
    if (classData._meta && classData._meta.type === 'weapon') {
        console.log(`${className}: ${classData._meta.caliber} caliber weapon`);
    }
}
```

### Advanced Usage with Custom Configuration

```javascript
import { DataExtractor } from './extractor/dataExtractor.js';

const extractor = new DataExtractor({
    enableLogging: true,
    continueOnError: false,  // Stop on first error
    maxRetries: 5,
    trackPerformance: true
});

const result = await extractor.enrich(resolvedDb);

// Get current statistics
const stats = extractor.getStats();
console.log('Processing stats:', stats);

// Get loaded definitions
const definitions = extractor.getDefinitions();
console.log('Loaded definitions:', [...definitions.keys()]);
```

### Error Handling

```javascript
try {
    const result = await enrich(resolvedDb);
    
    if (result.report.errors.length > 0) {
        console.warn('Enrichment completed with errors:', result.report.errors);
    }
    
    // Process enriched data
    processEnrichedData(result.enrichedDb);
    
} catch (error) {
    console.error('Enrichment failed:', error.message);
    // Handle failure appropriately
}
```

## Definition Module Integration

The DataExtractor automatically discovers and loads definition modules from the `definitions/` directory. Each definition module must export:

```javascript
export default {
    type: 'weapon',  // Type identifier
    
    isType(classData) {
        // Return true if classData matches this definition
        return classData.WeaponSlotsInfo !== undefined;
    },
    
    extract(classData, allResolvedData) {
        // Extract and return metadata object
        return {
            caliber: extractCaliber(classData),
            damage: classData.damage,
            // ... other metadata
        };
    }
};
```

### Supported Definition Modules

- **weaponDefinition.js**: Weapons (rifles, pistols, launchers)
- **attachmentDefinition.js**: Weapon attachments (optics, muzzle devices)
- **magazineDefinition.js**: Ammunition magazines
- **vestDefinition.js**: Body armor and vests
- **backpackDefinition.js**: Backpacks and storage containers
- **nvgDefinition.js**: Night vision goggles

## Enriched Data Structure

Each enriched class gets a `_meta` property with the following structure:

```javascript
{
    className: "arifle_MX_F",
    // ... original class properties ...
    _meta: {
        type: "weapon",           // Detected type
        extractedBy: "weaponDefinition",  // Definition that matched
        extractedAt: "2024-01-15T10:30:00.000Z",  // Timestamp
        
        // Type-specific metadata (varies by definition)
        caliber: "6.5x39",
        damage: 11,
        weaponType: "rifle",
        attachmentSlots: {
            optic: { type: "CowsSlot", available: true },
            muzzle: { type: "MuzzleSlot", available: true }
        },
        // ... more metadata fields
    }
}
```

## Performance Characteristics

### Processing Speed
- **Small datasets** (< 100 classes): ~1-5ms
- **Medium datasets** (100-1000 classes): ~10-50ms  
- **Large datasets** (1000+ classes): ~50-200ms

### Memory Usage
- Minimal overhead: ~1-2MB for definition modules
- Scales linearly with database size
- Efficient Map-based storage

### Batch Processing
- Processes classes in batches of 50 for optimal performance
- Prevents memory pressure on large datasets
- Progress reporting during processing

## Statistics and Reporting

The enrichment process generates comprehensive statistics:

```javascript
{
    summary: {
        totalClasses: 1250,
        enrichedClasses: 1180,
        unenrichedClasses: 70,
        enrichmentRate: "94.40%",
        processingTimeMs: 45.32,
        definitionsLoaded: 6
    },
    definitionStats: {
        weaponDefinition: {
            matchCount: 450,
            extractionCount: 450,
            errors: 0,
            averageExtractionTimeMs: 0.12
        },
        // ... stats for other definitions
    },
    errors: [],
    warnings: ["No definition matched class: Land_InfoStand_V1_F"],
    loadedModules: ["weaponDefinition", "vestDefinition", "attachmentDefinition"]
}
```

## Error Handling Strategy

### Import Failures
- **Retry Logic**: Up to 3 retries with exponential backoff
- **Graceful Degradation**: Continue with successfully loaded definitions
- **Detailed Logging**: Report which modules failed and why

### Processing Errors
- **Per-Class Isolation**: Errors in one class don't affect others
- **Continue-on-Error**: Configurable behavior for error handling
- **Error Metadata**: Failed classes get error information in _meta

### Validation
- **Input Validation**: Checks database format and contents
- **Module Validation**: Ensures definitions export required functions
- **Type Safety**: Validates function signatures and return types

## Development Guidelines

### Adding New Definition Modules

1. Create module in `definitions/` directory
2. Export object with `type`, `isType()`, and `extract()` functions
3. Add filename to the `definitionFiles` array in DataExtractor
4. Test with various class types

### Testing

Use the provided test file:
```bash
# Open in browser
open test-dataextractor.html
```

### Debugging

Enable detailed logging:
```javascript
const config = { enableLogging: true };
const result = await enrich(resolvedDb, config);
```

## Future Enhancements

### Planned Features
- **Plugin System**: Dynamic definition loading from external sources
- **Caching**: Cache processed metadata for faster subsequent runs
- **Parallel Processing**: Web Workers for large dataset processing
- **Schema Validation**: JSON Schema validation for extracted metadata

### Performance Optimizations
- **Streaming Processing**: Process classes as they arrive
- **Incremental Updates**: Only re-process changed classes
- **Memory Pooling**: Reduce garbage collection overhead

## Dependencies

- **ES6 Modules**: Dynamic import() support required
- **Modern JavaScript**: Map, Set, async/await, destructuring
- **No External Libraries**: Pure JavaScript implementation

## Browser Compatibility

- **Chrome/Edge**: 80+
- **Firefox**: 78+  
- **Safari**: 14+
- **Node.js**: 14+ (for testing)

## Integration Notes

### Phase 2 Integration
```javascript
import { resolve } from './parser/inheritanceResolver.js';
import { enrich } from './extractor/dataExtractor.js';

const resolvedDb = await resolve(parsedClasses);
const { enrichedDb, report } = await enrich(resolvedDb);
```

### Phase 4 Integration
```javascript
// Enriched data ready for UI/search systems
const searchableItems = Array.from(enrichedDb.values())
    .filter(item => item._meta && item._meta.type === 'weapon')
    .map(weapon => ({
        name: weapon.displayName,
        caliber: weapon._meta.caliber,
        damage: weapon._meta.damage
    }));
```

## License

Part of the Arsenal Testbed project. See main project license.