/**
 * Arma 3 Config Parser - AST Parser
 * Handles text-to-AST parsing without semantic extraction
 */

class ConfigParser {
    constructor() {
        this.currentFile = '';
    }

    /**
     * Parse a config file content into an Abstract Syntax Tree (AST)
     * @param {string} content - The raw config file content
     * @param {string} filename - The filename for context
     * @returns {Object} Raw parsed class structure (AST)
     */
    parse(content, filename) {
        this.currentFile = filename;
        
        // Remove comments
        content = this.removeComments(content);
        
        // Parse classes into AST structure
        const classes = this.parseClasses(content);
        
        return classes;
    }

    /**
     * Remove single-line and multi-line comments
     */
    removeComments(content) {
        // Remove single-line comments
        content = content.replace(/\/\/.*$/gm, '');
        
        // Remove multi-line comments
        content = content.replace(/\/\*[\s\S]*?\*\//g, '');
        
        return content;
    }

    /**
     * Parse class definitions recursively with improved nested class handling
     */
    parseClasses(content, parentClass = null) {
        const classes = {};
        
        // First, extract all top-level class definitions with balanced braces
        const classMatches = this.extractClassDefinitions(content);
        
        for (const classMatch of classMatches) {
            const className = classMatch.name;
            const baseClass = classMatch.baseClass || parentClass;
            const classBody = classMatch.body;
            
            // Parse class properties
            const classData = {
                className: className,
                baseClass: baseClass,
                properties: this.parseProperties(classBody),
                subClasses: this.parseClasses(classBody, className)
            };
            
            classes[className] = classData;
        }
        
        return classes;
    }

    /**
     * Extract class definitions with proper brace matching
     */
    extractClassDefinitions(content) {
        const classes = [];
        const classRegex = /class\s+(\w+)(?:\s*:\s*(\w+))?\s*\{/g;
        
        let match;
        while ((match = classRegex.exec(content)) !== null) {
            const className = match[1];
            const baseClass = match[2];
            const startPos = match.index + match[0].length;
            
            // Find matching closing brace
            let braceCount = 1;
            let pos = startPos;
            let classBody = '';
            
            while (pos < content.length && braceCount > 0) {
                const char = content[pos];
                if (char === '{') {
                    braceCount++;
                } else if (char === '}') {
                    braceCount--;
                }
                
                if (braceCount > 0) {
                    classBody += char;
                }
                pos++;
            }
            
            classes.push({
                name: className,
                baseClass: baseClass,
                body: classBody
            });
        }
        
        return classes;
    }

    /**
     * Parse properties within a class
     */
    parseProperties(content) {
        const properties = {};
        
        // Parse simple properties (key = value)
        const propRegex = /(\w+)\s*=\s*([^;]+);/g;
        let match;
        while ((match = propRegex.exec(content)) !== null) {
            const key = match[1];
            const value = match[2].trim();
            properties[key] = this.parseValue(value);
        }
        
        // Parse array properties (key[] = {values})
        const arrayRegex = /(\w+)\[\]\s*=\s*\{([^}]+)\}/g;
        while ((match = arrayRegex.exec(content)) !== null) {
            const key = match[1];
            const values = match[2];
            properties[key] = this.parseArray(values);
        }
        
        return properties;
    }

    /**
     * Parse a value (string, number, or identifier)
     */
    parseValue(value) {
        // Remove quotes from strings
        if (value.startsWith('"') && value.endsWith('"')) {
            return value.slice(1, -1);
        }
        
        // Try to parse as number
        const num = parseFloat(value);
        if (!isNaN(num) && value.match(/^-?\d*\.?\d+$/)) {
            return num;
        }
        
        // Return as is (identifier or expression)
        return value;
    }

    /**
     * Parse array values
     */
    parseArray(values) {
        return values
            .split(',')
            .map(v => v.trim())
            .filter(v => v)
            .map(v => this.parseValue(v));
    }
}

export { ConfigParser };