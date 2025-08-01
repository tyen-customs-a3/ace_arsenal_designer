/**
 * Parser Web Worker
 * 
 * Handles parsing of Arma 3 config files in a separate thread to avoid blocking
 * the main UI thread. This worker imports the ConfigParser and processes individual
 * config files, returning the resulting Abstract Syntax Tree (AST).
 * 
 * Message Format:
 * - Input: { filePath: string } - Path to the config file to parse
 * - Output: { success: true, ast: Object, filePath: string } on success
 * - Output: { success: false, error: string, filePath: string } on error
 * 
 * @author Web Worker Implementation for ACE3 Arsenal Testbed
 */

// Import the ConfigParser class
import { ConfigParser } from '../parser/configParser.js';

/**
 * Initialize the parser instance
 * @type {ConfigParser}
 */
const parser = new ConfigParser();

/**
 * Handle incoming messages from the main thread
 * @param {MessageEvent} event - The message event containing the parsing request
 */
self.addEventListener('message', async (event) => {
    const { filePath } = event.data;
    
    // Validate input
    if (!filePath || typeof filePath !== 'string') {
        postError('Invalid filePath provided. Expected a string.', filePath);
        return;
    }
    
    try {
        // Fetch the file content
        const content = await fetchFileContent(filePath);
        
        // Extract filename from path for parser context
        const filename = extractFilename(filePath);
        
        // Parse the content using ConfigParser
        const ast = parser.parse(content, filename);
        
        // Send successful result back to main thread
        self.postMessage({
            success: true,
            ast: ast,
            filePath: filePath,
            filename: filename
        });
        
    } catch (error) {
        // Handle any errors that occurred during fetching or parsing
        postError(error.message || 'Unknown error occurred', filePath);
    }
});

/**
 * Fetch the content of a file using the Fetch API
 * @param {string} filePath - The path to the file to fetch
 * @returns {Promise<string>} The file content as a string
 * @throws {Error} If the file cannot be fetched or read
 */
async function fetchFileContent(filePath) {
    try {
        const response = await fetch(filePath);
        
        if (!response.ok) {
            throw new Error(`HTTP ${response.status}: ${response.statusText}`);
        }
        
        const content = await response.text();
        
        if (content === null || content === undefined) {
            throw new Error('File content is null or undefined');
        }
        
        return content;
        
    } catch (error) {
        if (error instanceof TypeError && error.message.includes('Failed to fetch')) {
            throw new Error(`Network error: Unable to fetch file at ${filePath}. Check if the file exists and is accessible.`);
        } else if (error.name === 'TypeError') {
            throw new Error(`Invalid URL or network error: ${error.message}`);
        } else {
            throw new Error(`Failed to fetch file content: ${error.message}`);
        }
    }
}

/**
 * Extract filename from a file path
 * @param {string} filePath - The full file path
 * @returns {string} The filename portion of the path
 */
function extractFilename(filePath) {
    if (!filePath) return 'unknown';
    
    // Handle both forward and backward slashes
    const parts = filePath.split(/[/\\]/);
    return parts[parts.length - 1] || 'unknown';
}

/**
 * Post an error message back to the main thread with consistent format
 * @param {string} errorMessage - The error message to send
 * @param {string} filePath - The file path that caused the error
 */
function postError(errorMessage, filePath) {
    self.postMessage({
        success: false,
        error: errorMessage,
        filePath: filePath || 'unknown'
    });
}

/**
 * Handle uncaught errors in the worker to prevent silent failures
 */
self.addEventListener('error', (event) => {
    postError(`Worker error: ${event.message} at ${event.filename}:${event.lineno}`, 'unknown');
});

/**
 * Handle unhandled promise rejections
 */
self.addEventListener('unhandledrejection', (event) => {
    postError(`Unhandled promise rejection: ${event.reason}`, 'unknown');
    event.preventDefault(); // Prevent the default handling
});