# DataExtractor Test Suite

A comprehensive test suite for validating the DataExtractor functionality, logging system, and production readiness.

## Overview

This test suite addresses the key issues identified in the original DataExtractor:
- **High logging verbosity** in production environments
- **Low enrichment rates** requiring validation and optimization
- **Lack of comprehensive testing** for various scenarios
- **Production readiness** validation

## Features

### 🧪 Comprehensive Testing
- **Basic Enrichment**: Validates core functionality
- **Mixed Item Types**: Tests detection of weapons, vests, magazines, etc.
- **Logging Levels**: Validates production vs development logging
- **Performance Testing**: Benchmarks with large datasets
- **Error Handling**: Tests resilience and recovery
- **Enrichment Rate**: Validates extraction effectiveness

### 📊 Production Monitoring
- **Categorized Logging**: Errors, warnings, info, debug levels
- **Performance Metrics**: Processing time, classes/second, memory usage
- **Quality Metrics**: Enrichment rates, error rates, warning rates
- **Recommendations**: Automated suggestions for optimization

### 🚀 Production Optimization
- **Reduced Verbosity**: Configurable logging levels
- **Batch Processing**: Optimized for large datasets
- **Memory Efficiency**: Garbage collection hints and optimization
- **Error Isolation**: Prevents single failures from stopping processing

## Quick Start

### Running All Tests
```bash
# Navigate to the extractor directory
cd extractor/test

# Run all tests with production configuration
node runTests.js

# Run with development configuration (more verbose)
node runTests.js --development

# Run with debug configuration (maximum verbosity)
node runTests.js --debug
```

### Running Individual Tests
```bash
# Test basic functionality
node runTests.js basic

# Test performance
node runTests.js performance

# Test logging levels
node runTests.js logging

# Test error handling
node runTests.js errors

# Test enrichment rate
node runTests.js enrichment

# Test mixed item types
node runTests.js mixed
```

### Verbose Output
```bash
# Get detailed logging demonstration
node runTests.js --verbose

# Run specific test with verbose output
node runTests.js performance --verbose
```

## Test Results Interpretation

### ✅ Success Indicators
- **High Enrichment Rate** (>50%): Good definition coverage
- **Low Error Rate** (<5%): Stable processing
- **Good Performance** (<5ms per class): Efficient processing
- **Appropriate Logging**: Errors and warnings captured without spam

### ⚠️ Warning Signs
- **Low Enrichment Rate**: May need more definition modules
- **High Error Rate**: Review error logs and improve error handling
- **Slow Processing**: Consider optimizing definition modules
- **Excessive Logging**: May impact production performance

### 📈 Performance Benchmarks
- **Target Processing Speed**: >200 classes/second
- **Memory Usage**: Should remain stable during processing
- **Error Rate**: <2% for production environments
- **Enrichment Rate**: >60% for comprehensive coverage

## Configuration Options

### Environment Configurations
```javascript
// Production (minimal logging, maximum performance)
PRODUCTION: {
    logLevel: LogLevel.WARN,           // Only warnings and errors
    batchSize: 100,                    // Large batches
    logBatchProgress: false,           // No progress spam
    logIndividualMatches: false,       // No per-class logging
    suppressWarningTypes: ['no_definition_matched']
}

// Development (balanced logging for debugging)
DEVELOPMENT: {
    logLevel: LogLevel.INFO,           // Info, warnings, errors
    batchSize: 25,                     // Smaller batches
    logBatchProgress: true,            // Show progress
    logIndividualMatches: false,       // No per-class spam
    suppressWarningTypes: []           // Show all warnings
}

// Debug (maximum logging for troubleshooting)
DEBUG: {
    logLevel: LogLevel.VERBOSE,        // All logging
    batchSize: 10,                     // Small batches
    logBatchProgress: true,            // Show progress
    logIndividualMatches: true,        // Show every match
    suppressWarningTypes: [],          // Show all warnings
    continueOnError: false             // Stop on first error
}
```

### Custom Configuration
```javascript
// Create custom configuration
const customConfig = {
    logLevel: LogLevel.INFO,
    batchSize: 50,
    maxRetries: 5,
    trackPerformance: true,
    memoryOptimization: true
};

node runTests.js --custom
```

## Logging Categories

### 🚨 ERROR Level
- Definition loading failures
- Class enrichment failures
- Critical system errors
- Unrecoverable issues

### ⚠️ WARN Level
- Classes with no matching definitions
- Recoverable processing issues
- Performance warnings
- Configuration issues

### ℹ️ INFO Level
- Process start/completion
- Summary statistics
- Major milestone achievements
- Important state changes

### 🔍 DEBUG Level
- Individual class processing
- Definition matching details
- Performance timings
- Internal state information

### 📝 VERBOSE Level
- Batch processing progress
- Detailed performance metrics
- Memory usage information
- Comprehensive debugging info

## Production Deployment

### Pre-Deployment Validation
```bash
# Quick production validation
node runTests.js --production

# Full test suite with production config
node runTests.js --production --verbose

# Performance benchmark
node runTests.js performance --production
```

### Monitoring in Production
```javascript
import { ProductionDataExtractor, analyzeEnrichmentResults } from '../productionDataExtractor.js';

const extractor = new ProductionDataExtractor({
    logLevel: LogLevel.WARN,
    trackPerformance: true,
    memoryOptimization: true
});

const result = await extractor.enrich(resolvedDb);
const analysis = analyzeEnrichmentResults(result.enrichedDb, result.report);

// Monitor key metrics
console.log(`Enrichment Rate: ${analysis.qualityMetrics.enrichmentRate}%`);
console.log(`Processing Speed: ${analysis.performanceMetrics.classesPerSecond} classes/sec`);
console.log(`Recommendations: ${analysis.recommendations.length}`);
```

## Troubleshooting

### Low Enrichment Rate
1. Check if definition modules are loading correctly
2. Verify class data structure matches definition expectations
3. Add more definition modules for unrecognized item types
4. Review definition `isType` logic for accuracy

### Performance Issues
1. Increase batch size for better throughput
2. Enable memory optimization
3. Reduce logging verbosity
4. Profile definition module performance

### High Error Rate
1. Review error logs for common patterns
2. Improve error handling in definition modules
3. Validate input data quality
4. Consider enabling `continueOnError` mode

### Excessive Logging
1. Reduce log level to WARN or ERROR
2. Enable warning suppression for common issues
3. Disable batch progress logging
4. Turn off individual match logging

## File Structure
```
extractor/test/
├── README.md                 # This documentation
├── runTests.js              # Main test runner
├── testSuite.js             # Comprehensive test suite
└── transportItemTest.js     # Legacy transport item test

extractor/
├── productionConfig.js      # Production configurations
├── productionDataExtractor.js # Production-optimized extractor
└── dataExtractor.js         # Original extractor
```

## Contributing

When adding new tests:
1. Follow the existing test structure in `testSuite.js`
2. Use the `TestReporter` class for consistent reporting
3. Include both positive and negative test cases
4. Add performance benchmarks for new features
5. Update this README with new test descriptions

## Support

For issues or questions:
1. Check the troubleshooting section above
2. Review the test output for specific error details
3. Run tests with `--verbose` for detailed debugging
4. Examine the `logSummary` in test results for categorized issues