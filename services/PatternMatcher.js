/**
 * PatternMatcher - Priority-based pattern classification system
 * 
 * Replaces hacky confidence scoring with declarative pattern priorities.
 * Patterns are ordered by specificity and importance, eliminating arbitrary
 * confidence thresholds and making the classification logic transparent.
 * 
 * @author ACE3 Arsenal Testbed - Expert Pattern Classification
 */

export class PatternMatcher {
    constructor() {
        // Pattern definitions with explicit priorities (higher number = higher priority)
        this.patterns = {
            framework: [
                { pattern: /^CfgPatches$/, priority: 100, description: 'Core patches definition' },
                { pattern: /^cfgMods$/, priority: 100, description: 'Core mods definition' },
                { pattern: /^Cfg[A-Z][a-zA-Z]*$/, priority: 90, description: 'Standard config containers' },
                { pattern: /^cfg[A-Z][a-zA-Z]*$/, priority: 85, description: 'Lowercase config containers' }
            ],
            
            interface: [
                { pattern: /^WeaponSlotsInfo$/, priority: 100, description: 'Weapon slots interface' },
                { pattern: /^ItemInfo$/, priority: 100, description: 'Item information interface' },
                { pattern: /^SlotInfo$/, priority: 100, description: 'Slot information interface' },
                { pattern: /^OpticsModes$/, priority: 95, description: 'Optics modes interface' },
                { pattern: /^asdg_.*$/, priority: 90, description: 'ASDG attachment system' },
                { pattern: /.*Slot$/, priority: 80, description: 'Generic slot interface' },
                { pattern: /.*SlotsInfo$/, priority: 75, description: 'Generic slots info interface' }
            ],
            
            inheritance: [
                { pattern: /^ItemCore$/, priority: 100, description: 'Core item base class' },
                { pattern: /^Item_Base_F$/, priority: 100, description: 'Item base class' },
                { pattern: /.*_Base_F$/, priority: 90, description: 'Standard base classes' },
                { pattern: /^Mode_.*$/, priority: 85, description: 'Fire mode base classes' },
                { pattern: /^Safety$/, priority: 80, description: 'Safety mode base' },
                { pattern: /^Single$/, priority: 80, description: 'Single shot mode base' },
                { pattern: /^FullAuto$/, priority: 80, description: 'Full auto mode base' },
                { pattern: /^Burst$/, priority: 80, description: 'Burst mode base' },
                { pattern: /^Default$/, priority: 75, description: 'Default configuration base' },
                { pattern: /.*Sound$/, priority: 70, description: 'Sound configuration base' },
                { pattern: /.*Particles$/, priority: 70, description: 'Particle effect base' },
                { pattern: /^HitPoints$/, priority: 70, description: 'Hit points base' },
                { pattern: /^HitBody$/, priority: 70, description: 'Hit body base' },
                { pattern: /^Wounds$/, priority: 70, description: 'Wounds base' },
                { pattern: /.*_Base$/, priority: 60, description: 'Generic base classes' }
            ],
            
            content: [
                { pattern: /^[a-z]{2,4}_/, priority: 80, description: 'Mod-prefixed content' }
            ]
        };
    }

    /**
     * Classify a class name using priority-based pattern matching
     * @param {string} className - The class name to classify
     * @returns {Object} Classification result with type, match details, and reasoning
     */
    classify(className) {
        const matches = [];
        
        // Find all matching patterns across all categories
        for (const [category, categoryPatterns] of Object.entries(this.patterns)) {
            for (const patternDef of categoryPatterns) {
                if (patternDef.pattern.test(className)) {
                    matches.push({
                        category,
                        priority: patternDef.priority,
                        description: patternDef.description,
                        pattern: patternDef.pattern.source
                    });
                }
            }
        }

        // If no patterns match, classify as content (unique implementations)
        if (matches.length === 0) {
            return {
                type: 'content',
                match: {
                    category: 'content',
                    priority: 0,
                    description: 'Unique content (no standard patterns)',
                    pattern: 'none'
                },
                reasoning: 'No standard patterns matched - likely unique game content'
            };
        }

        // Sort by priority (highest first) and take the best match
        matches.sort((a, b) => b.priority - a.priority);
        const bestMatch = matches[0];

        return {
            type: bestMatch.category,
            match: bestMatch,
            reasoning: `Matched ${bestMatch.description} (priority ${bestMatch.priority})`
        };
    }

    /**
     * Get all matches for a class name (useful for debugging/analysis)
     * @param {string} className - The class name to analyze
     * @returns {Array} All matching patterns with their details
     */
    getAllMatches(className) {
        const matches = [];
        
        for (const [category, categoryPatterns] of Object.entries(this.patterns)) {
            for (const patternDef of categoryPatterns) {
                if (patternDef.pattern.test(className)) {
                    matches.push({
                        category,
                        priority: patternDef.priority,
                        description: patternDef.description,
                        pattern: patternDef.pattern.source
                    });
                }
            }
        }

        return matches.sort((a, b) => b.priority - a.priority);
    }

    /**
     * Add a new pattern to a category
     * @param {string} category - The category to add to
     * @param {RegExp} pattern - The regex pattern
     * @param {number} priority - The priority level (higher = more important)
     * @param {string} description - Human-readable description
     */
    addPattern(category, pattern, priority, description) {
        if (!this.patterns[category]) {
            this.patterns[category] = [];
        }
        
        this.patterns[category].push({
            pattern,
            priority,
            description
        });
        
        // Keep patterns sorted by priority within each category
        this.patterns[category].sort((a, b) => b.priority - a.priority);
    }

    /**
     * Get human-readable description of classification types
     * @param {string} type - The classification type
     * @returns {string} Description
     */
    getTypeDescription(type) {
        const descriptions = {
            framework: 'Framework container class (expected duplicates across mods)',
            interface: 'Standard interface/slot class (merge compatible versions)',
            inheritance: 'Base class for inheritance hierarchy (resolve via inheritance)',
            content: 'Actual game content (true conflicts require resolution)'
        };
        
        return descriptions[type] || 'Unknown classification';
    }
}