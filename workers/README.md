# Parser Web Worker

This directory contains the Parser Web Worker implementation for the ACE3 Arsenal Testbed project.

## Files

- `parser.worker.js` - Main web worker implementation
- `test-parser-worker.html` - Test page for verifying worker functionality  
- `README.md` - This documentation file

## Parser Worker (`parser.worker.js`)

### Purpose
Handles parsing of Arma 3 config files in a separate thread to prevent blocking the main UI thread during intensive parsing operations.

### API

#### Input Message Format
```javascript
worker.postMessage({
    filePath: "path/to/config.cpp"  // Required: string path to config file
});
```

#### Output Message Format

**Success:**
```javascript
{
    success: true,
    ast: { /* Parsed AST object */ },
    filePath: "path/to/config.cpp",
    filename: "config.cpp"
}
```

**Error:**
```javascript
{
    success: false,
    error: "Error message description",
    filePath: "path/to/config.cpp"
}
```

### Features

- **Asynchronous File Fetching**: Uses Fetch API to retrieve config file content
- **Robust Error Handling**: Comprehensive error handling for network, parsing, and validation errors
- **Import Integration**: Properly imports and utilizes the ConfigParser class
- **Path Validation**: Validates input parameters and handles edge cases
- **Filename Extraction**: Automatically extracts filename from full path for parser context
- **Global Error Handling**: Catches uncaught errors and unhandled promise rejections

### Error Handling

The worker handles various error scenarios:

1. **Invalid Input**: Missing or invalid filePath parameter
2. **Network Errors**: File not found, network unavailable, or server errors
3. **Parsing Errors**: Malformed config files or parser failures
4. **Runtime Errors**: Uncaught exceptions and promise rejections

### Usage Example

```javascript
// Initialize worker
const worker = new Worker('./workers/parser.worker.js', { type: 'module' });

// Set up message handler
worker.onmessage = function(event) {
    const { success, ast, error, filePath } = event.data;
    
    if (success) {
        console.log('Parsed successfully:', filePath);
        console.log('AST:', ast);
    } else {
        console.error('Parse failed:', error);
    }
};

// Send parse request
worker.postMessage({
    filePath: 'data/addons/cupweapons/cup_weapons_ak/config.cpp'
});
```

### Testing

Use `test-parser-worker.html` to test the worker functionality:

1. Open the test file in a web browser
2. Click "Test Parser Worker" to test with a valid config file
3. Click "Test Invalid Path" to test error handling
4. Check the console and on-page logs for results

### Technical Implementation Details

- **ES6 Modules**: Uses ES6 import/export syntax with proper module loading
- **Async/Await**: Modern asynchronous programming patterns
- **Error Propagation**: Proper error handling and propagation throughout the call stack
- **Type Validation**: Input parameter validation and type checking
- **Resource Management**: Proper cleanup and error handling for network resources

### Performance Considerations  

- **Non-Blocking**: Runs in separate thread to avoid blocking main UI
- **Memory Efficient**: Processes files individually rather than batch loading
- **Error Recovery**: Fails gracefully without crashing the worker thread
- **Resource Cleanup**: Properly handles resource cleanup on errors