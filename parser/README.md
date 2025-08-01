# Arma 3 Config Parser - Phase 2: Inheritance Resolver

This directory contains the inheritance resolver module that processes the raw AST from Phase 1 and produces a fully resolved class database where all inheritance has been "flattened."

## Overview

The inheritance resolver is the second phase of the ACE3 Arsenal Testbed config parsing pipeline:

1. **Phase 1** (`configParser.js`): Raw config file parsing to AST
2. **Phase 2** (`inheritanceResolver.js`): Inheritance resolution and flattening ← *You are here*
3. **Phase 3** (Future): Semantic extraction and weapon compatibility analysis

## Architecture

### Input Format (Phase 1 AST)
The resolver expects aggregated AST data from Phase 1 with this structure:
```javascript
{
  "CfgWeapons": {
    className: "CfgWeapons",
    baseClass: null,
    properties: {...},
    subClasses: {
      "Rifle_Base_F": { className: "Rifle_Base_F", baseClass: "Rifle", ... },
      "arifle_MX_F": { className: "arifle_MX_F", baseClass: "Rifle_Base_F", ... }
    },
    _sourceMod: "Arma3",
    _sourceFile: "./data/addons/arma3/config.cpp"
  },
  "CfgMagazines": { ... }
}
```

### Output Format (Resolved Classes)
The resolver produces a Map where each class contains all inherited properties:
```javascript
Map {
  "arifle_MX_F" => {
    className: "arifle_MX_F",
    baseClass: "Rifle_Base_F",        // Preserved for traceability
    properties: {
      // All properties from inheritance chain merged
      scope: 2,                       // From child (overrides parent)
      displayName: "MX Rifle",        // From child
      type: 1,                        // Inherited from "Rifle"
      mass: 90,                       // From child (overrides parent)
      weaponSlotsInfo: {              // Deep merged nested object
        mass: 90,
        slots: ["PointerSlot", "MuzzleSlot", "OpticSlot"]
      }
    },
    subClasses: {},
    _sourceMod: "CUP",               // Metadata preserved
    _sourceFile: "./data/addons/cupweapons/cup_weapons_m16/config.cpp"
  }
}
```

## Core Features

### 1. Recursive Inheritance Resolution
- Resolves inheritance chains of arbitrary depth
- Child properties override parent properties
- Deep merging for complex nested objects (WeaponSlotsInfo, ItemInfo, etc.)

### 2. Caching Mechanism
- Uses Map-based caching to prevent redundant processing
- Significantly improves performance for large class hierarchies
- Cache statistics tracking for performance analysis

### 3. Error Handling
- **Circular Inheritance Detection**: Prevents infinite loops with proper error reporting
- **Missing Base Class Handling**: Graceful handling of references to non-existent classes
- **Data Validation**: Input validation with descriptive error messages

### 4. Metadata Preservation
- Preserves `_sourceMod` and `_sourceFile` metadata from Phase 1
- Maintains `baseClass` properties for debugging and traceability
- Adds inheritance chain analysis utilities

### 5. Deep Merge Support
- Handles complex Arma 3 config structures like:
  - `WeaponSlotsInfo` - Weapon attachment slot definitions
  - `ItemInfo` - Item-specific configuration
  - `OpticsModes` - Optics configuration arrays
  - Nested class hierarchies

## API Reference

### Main Function

#### `resolve(rawAst)`
Resolves inheritance in the raw AST from Phase 1.

**Parameters:**
- `rawAst` (Object): The raw, aggregated AST from Phase 1

**Returns:**
- `Map<string, Object>`: Map where each key is className and value is fully resolved class object

**Throws:**
- `Error`: If circular inheritance is detected or critical parsing errors occur

**Example:**
```javascript
import { resolve } from './parser/inheritanceResolver.js';

const rawAst = await dataService.initialize(); // Phase 1 data
const resolvedClasses = resolve(rawAst);       // Phase 2 processing

console.log(`Resolved ${resolvedClasses.size} classes`);
```

### Utility Functions

#### `getInheritanceChain(className, globalClassMap, maxDepth = 50)`
Returns the inheritance chain for a specific class.

**Parameters:**
- `className` (string): Name of the class to trace
- `globalClassMap` (Map): Global map of all class definitions
- `maxDepth` (number, optional): Maximum depth to prevent infinite loops

**Returns:**
- `Array<string>`: Array of class names in inheritance order (child to parent)

**Example:**
```javascript
const chain = getInheritanceChain('arifle_MX_F', globalClassMap);
// Returns: ['arifle_MX_F', 'Rifle_Base_F', 'Rifle', 'Default']
```

#### `validateResolvedDatabase(resolvedClasses)`
Validates the resolved class database and returns a comprehensive report.

**Parameters:**
- `resolvedClasses` (Map): The resolved class database

**Returns:**
- `Object`: Validation report with statistics and any issues found

**Example:**
```javascript
const report = validateResolvedDatabase(resolvedClasses);
console.log(`Validated ${report.totalClasses} classes with ${report.issues.length} issues`);
```

## Performance Characteristics

### Time Complexity
- **Best Case**: O(n) - All classes are root classes with no inheritance
- **Average Case**: O(n + h) - Where n is number of classes, h is total inheritance chain depth
- **Worst Case**: O(n²) - Deep inheritance chains with complex nested structures

### Space Complexity
- **Memory Usage**: O(n) - Each class stored once in resolved cache
- **Cache Efficiency**: High hit rate for classes referenced multiple times in inheritance chains

### Performance Metrics (Typical)
- **Small datasets** (< 100 classes): < 5ms resolution time
- **Medium datasets** (100-1000 classes): 10-50ms resolution time  
- **Large datasets** (1000+ classes): 50-200ms resolution time

## Testing

### Test Files
- `test-inheritance-resolver.html` - Browser-based integration test with Phase 1 data
- `test-inheritance-resolver-node.js` - Node.js unit test with mock data

### Running Tests

#### Browser Test (Integration with Phase 1)
1. Open `test-inheritance-resolver.html` in a browser
2. Click "Load Phase 1 Data" to load real config data
3. Click "Test Inheritance Resolver" to run Phase 2 processing
4. Analyze results and validate database

#### Node.js Test (Unit Testing)
```bash
cd /path/to/arsenal-testbed
node test-inheritance-resolver-node.js
```

### Test Coverage
- ✅ Basic inheritance resolution with multiple levels
- ✅ Deep merging of nested objects (WeaponSlotsInfo, etc.)
- ✅ Property override behavior (child overrides parent)
- ✅ Metadata preservation (_sourceMod, _sourceFile)
- ✅ Circular inheritance detection and error handling
- ✅ Missing base class graceful handling
- ✅ Cache efficiency and performance metrics
- ✅ Database validation and integrity checks

## Error Handling

### Common Error Types

#### 1. Circular Inheritance
```javascript
// Error: Circular inheritance detected: ClassA -> ClassB -> ClassA
```
**Cause**: Class A inherits from Class B, which inherits from Class A
**Resolution**: Fix the inheritance chain in config files

#### 2. Missing Base Class
```javascript
// Warning: Missing base class 'SomeEngineClass' - treating as resolved
```
**Cause**: Class references a base class not present in the parsed configs
**Resolution**: Normal behavior - engine classes are not included in mod configs

#### 3. Invalid Input Data
```javascript
// Error: Invalid input - rawAst must be a non-null object
```
**Cause**: Phase 1 data is null, undefined, or not an object
**Resolution**: Ensure Phase 1 data service initialization completed successfully

## Debugging and Troubleshooting

### Enable Debug Logging
The resolver provides detailed console logging for troubleshooting:
- Class resolution progress
- Cache hit statistics
- Inheritance chain processing
- Error details with context

### Common Issues

#### 1. Performance Issues
**Symptoms**: Slow resolution times, high memory usage
**Solutions**:
- Check for very deep inheritance chains (>20 levels)
- Verify no accidental circular references
- Monitor cache hit rates

#### 2. Missing Properties
**Symptoms**: Expected inherited properties not present in resolved classes
**Solutions**:
- Verify inheritance chain with `getInheritanceChain()`
- Check Phase 1 data contains expected base classes
- Validate property names match exactly (case-sensitive)

#### 3. Incorrect Property Values
**Symptoms**: Properties have wrong values after resolution
**Solutions**:
- Remember child properties override parent properties
- Check for nested object merging issues
- Validate Phase 1 property parsing is correct

## Integration with Phase 3

The resolved class database from Phase 2 will serve as input for Phase 3 (Semantic Extraction), which will:
- Extract weapon-specific properties (damage, caliber, etc.)
- Build compatibility matrices for weapons and accessories
- Generate optimized data structures for the Arsenal UI
- Implement advanced sorting and grouping algorithms

The flattened inheritance structure from Phase 2 makes Phase 3 processing much simpler and more efficient, as all properties are readily available without runtime inheritance resolution.