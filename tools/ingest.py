#!/usr/bin/env python3
"""
Arma 3 Config Data Ingestion Script

This script processes Arma 3 config.cpp files and generates a single database.json
file containing arsenal items with enriched metadata. It replaces the JavaScript-based
data processing pipeline with a standalone Python implementation.

Usage:
    python tools/ingest.py --input data/addons --output database.json

Author: Arsenal Testbed Python Ingestion Script
"""

import argparse
import json
import os
import re
import sys
import time
import xml.etree.ElementTree as ET
from pathlib import Path
from typing import Dict, List, Any, Optional, Set, Union


class ConfigParser:
    """
    Parser for Arma 3 config.cpp files.
    Converts raw config text into structured Python dictionaries (AST).
    """
    
    def __init__(self):
        self.current_file = ''
    
    def parse(self, content: str, filename: str = '') -> Dict[str, Any]:
        """
        Parse config file content into Abstract Syntax Tree.
        
        Args:
            content: Raw config file content
            filename: Filename for context
            
        Returns:
            Dictionary representing the parsed class structure
        """
        self.current_file = filename
        
        # Remove comments
        content = self._remove_comments(content)
        
        # Parse classes into AST structure
        classes = self._parse_classes(content)
        
        return classes
    
    def _remove_comments(self, content: str) -> str:
        """Remove single-line and multi-line comments."""
        # Remove single-line comments
        content = re.sub(r'//.*$', '', content, flags=re.MULTILINE)
        
        # Remove multi-line comments
        content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
        
        return content
    
    def _parse_classes(self, content: str, parent_class: Optional[str] = None) -> Dict[str, Any]:
        """Parse class definitions recursively."""
        classes = {}
        
        # Extract all class definitions with balanced braces
        class_matches = self._extract_class_definitions(content)
        
        for class_match in class_matches:
            class_name = class_match['name']
            base_class = class_match['base_class'] or parent_class
            class_body = class_match['body']
            
            # Parse class properties
            class_data = {
                'className': class_name,
                'baseClass': base_class,
                'properties': self._parse_properties(class_body),
                'subClasses': self._parse_classes(class_body, class_name)
            }
            
            classes[class_name] = class_data
        
        return classes
    
    def _extract_class_definitions(self, content: str) -> List[Dict[str, Any]]:
        """Extract class definitions with proper brace matching."""
        classes = []
        class_regex = re.compile(r'class\s+(\w+)(?:\s*:\s*(\w+))?\s*\{', re.IGNORECASE)
        
        for match in class_regex.finditer(content):
            class_name = match.group(1)
            base_class = match.group(2)
            start_pos = match.end()
            
            # Find matching closing brace
            brace_count = 1
            pos = start_pos
            class_body = ''
            
            while pos < len(content) and brace_count > 0:
                char = content[pos]
                if char == '{':
                    brace_count += 1
                elif char == '}':
                    brace_count -= 1
                
                if brace_count > 0:
                    class_body += char
                pos += 1
            
            classes.append({
                'name': class_name,
                'base_class': base_class,
                'body': class_body
            })
        
        return classes
    
    def _parse_properties(self, content: str) -> Dict[str, Any]:
        """Parse properties within a class."""
        properties = {}
        
        # Parse simple properties (key = value)
        prop_regex = re.compile(r'(\w+)\s*=\s*([^;]+);', re.MULTILINE)
        for match in prop_regex.finditer(content):
            key = match.group(1)
            value = match.group(2).strip()
            properties[key] = self._parse_value(value)
        
        # Parse array properties (key[] = {values})
        array_regex = re.compile(r'(\w+)\[\]\s*=\s*\{([^}]+)\}', re.MULTILINE)
        for match in array_regex.finditer(content):
            key = match.group(1)
            values = match.group(2)
            properties[key] = self._parse_array(values)
        
        return properties
    
    def _parse_value(self, value: str) -> Union[str, int, float]:
        """Parse a value (string, number, or identifier)."""
        value = value.strip()
        
        # Remove quotes from strings
        if value.startswith('"') and value.endswith('"'):
            return value[1:-1]
        
        # Try to parse as number
        try:
            if '.' in value:
                return float(value)
            else:
                return int(value)
        except ValueError:
            pass
        
        # Return as is (identifier or expression)
        return value
    
    def _parse_array(self, values: str) -> List[Any]:
        """Parse array values."""
        return [
            self._parse_value(v.strip())
            for v in values.split(',')
            if v.strip()
        ]


class StringTableParser:
    """
    Parser for Arma 3 stringtable.xml files.
    Extracts localized strings and builds a comprehensive localization dictionary.
    """
    
    def __init__(self):
        self.stats = {
            'files_processed': 0,
            'total_keys': 0,
            'english_keys': 0,
            'fallback_keys': 0,
            'errors': []
        }
    
    def parse(self, xml_content: str, filename: str = '') -> Dict[str, str]:
        """
        Parse a single stringtable.xml file content.
        
        Args:
            xml_content: Raw XML content of stringtable file
            filename: Filename for context
            
        Returns:
            Dictionary mapping string IDs to English text
        """
        strings = {}
        
        try:
            # Parse XML content
            root = ET.fromstring(xml_content)
            
            # Find all Key elements
            for key_element in root.findall('.//Key'):
                key_id = key_element.get('ID')
                if not key_id:
                    continue
                
                # Look for English text first
                english_element = key_element.find('English')
                if english_element is not None and english_element.text:
                    strings[key_id] = english_element.text.strip()
                    self.stats['english_keys'] += 1
                else:
                    # Fallback to Original if no English
                    original_element = key_element.find('Original')
                    if original_element is not None and original_element.text:
                        strings[key_id] = original_element.text.strip()
                        self.stats['fallback_keys'] += 1
                
                self.stats['total_keys'] += 1
            
            self.stats['files_processed'] += 1
            print(f"  Parsed stringtable: {filename} ({len(strings)} strings)")
            
        except ET.ParseError as e:
            error_msg = f"XML parse error in {filename}: {str(e)}"
            print(f"  Error: {error_msg}")
            self.stats['errors'].append(error_msg)
        except Exception as e:
            error_msg = f"Unexpected error parsing {filename}: {str(e)}"
            print(f"  Error: {error_msg}")
            self.stats['errors'].append(error_msg)
        
        return strings
    
    def parse_all(self, stringtable_files: List[str]) -> Dict[str, str]:
        """
        Parse all stringtable.xml files and merge into master dictionary.
        
        Args:
            stringtable_files: List of paths to stringtable.xml files
            
        Returns:
            Master dictionary mapping all string IDs to English text
        """
        print(f"StringTableParser: Processing {len(stringtable_files)} stringtable files...")
        
        master_strings = {}
        
        for stringtable_file in stringtable_files:
            try:
                with open(stringtable_file, 'r', encoding='utf-8', errors='ignore') as f:
                    xml_content = f.read()
                
                file_strings = self.parse(xml_content, stringtable_file)
                
                # Merge into master dictionary, warning on conflicts
                for key_id, text in file_strings.items():
                    if key_id in master_strings and master_strings[key_id] != text:
                        print(f"  Warning: Duplicate string ID '{key_id}' with different values")
                    master_strings[key_id] = text
                    
            except Exception as e:
                error_msg = f"Failed to read stringtable file {stringtable_file}: {str(e)}"
                print(f"  Error: {error_msg}")
                self.stats['errors'].append(error_msg)
        
        print(f"StringTableParser: Processed {self.stats['files_processed']} files")
        print(f"  Total unique string IDs: {len(master_strings)}")
        print(f"  English translations: {self.stats['english_keys']}")
        print(f"  Fallback translations: {self.stats['fallback_keys']}")
        if self.stats['errors']:
            print(f"  Errors: {len(self.stats['errors'])}")
        
        return master_strings


class LocalizationResolver:
    """
    Resolves string table placeholders in extracted item data.
    Performs deep recursive replacement of $STR_... placeholders with localized text.
    """
    
    def __init__(self, localization_dict: Dict[str, str]):
        self.localization_dict = localization_dict
        self.stats = {
            'items_processed': 0,
            'replacements_made': 0,
            'unresolved_keys': set(),
            'errors': []
        }
    
    def resolve_items(self, items: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
        """
        Resolve all string table references in a list of items.
        
        Args:
            items: List of extracted item dictionaries
            
        Returns:
            List of items with all $STR_... placeholders resolved
        """
        print(f"LocalizationResolver: Processing {len(items)} items...")
        
        resolved_items = []
        
        for item in items:
            try:
                resolved_item = self._resolve_recursive(item)
                resolved_items.append(resolved_item)
                self.stats['items_processed'] += 1
            except Exception as e:
                error_msg = f"Error resolving item {item.get('className', 'unknown')}: {str(e)}"
                print(f"  Error: {error_msg}")
                self.stats['errors'].append(error_msg)
                # Add unresolved item to maintain completeness
                resolved_items.append(item)
        
        print(f"LocalizationResolver: Completed processing")
        print(f"  Items processed: {self.stats['items_processed']}")
        print(f"  String replacements made: {self.stats['replacements_made']}")
        print(f"  Unresolved string keys: {len(self.stats['unresolved_keys'])}")
        
        if self.stats['unresolved_keys']:
            print("  Sample unresolved keys:")
            for key in list(self.stats['unresolved_keys'])[:5]:
                print(f"    {key}")
        
        if self.stats['errors']:
            print(f"  Errors: {len(self.stats['errors'])}")
        
        return resolved_items
    
    def _resolve_recursive(self, obj: Any) -> Any:
        """
        Recursively resolve string table references in any object.
        
        Args:
            obj: Object to process (can be dict, list, string, or primitive)
            
        Returns:
            Object with all string table references resolved
        """
        if isinstance(obj, str):
            return self._resolve_string(obj)
        elif isinstance(obj, dict):
            return {key: self._resolve_recursive(value) for key, value in obj.items()}
        elif isinstance(obj, list):
            return [self._resolve_recursive(item) for item in obj]
        else:
            # Primitive values (int, float, bool, None) pass through unchanged
            return obj
    
    def _resolve_string(self, text: str) -> str:
        """
        Resolve string table references in a single string.
        
        Args:
            text: String that may contain $STR_... references
            
        Returns:
            String with all references resolved to localized text
        """
        if not isinstance(text, str) or not text.startswith('$STR_'):
            return text
        
        # Extract the string key (remove $STR_ prefix)
        string_key = text[5:]  # Remove '$STR_' prefix
        
        if string_key in self.localization_dict:
            resolved_text = self.localization_dict[string_key]
            self.stats['replacements_made'] += 1
            return resolved_text
        else:
            # String key not found in localization dictionary
            self.stats['unresolved_keys'].add(text)
            # Return original placeholder
            return text


class InheritanceResolver:
    """
    Resolves inheritance in parsed class hierarchies.
    Flattens inheritance chains so each class contains all inherited properties.
    """
    
    def __init__(self):
        self.resolved_cache = {}
        self.stats = {
            'total_classes': 0,
            'resolved_classes': 0,
            'cache_hits': 0,
            'inheritance_chains': 0,
            'errors': []
        }
    
    def resolve(self, all_classes: Dict[str, Any]) -> Dict[str, Any]:
        """
        Resolve inheritance for all classes.
        
        Args:
            all_classes: Dictionary of all parsed classes
            
        Returns:
            Dictionary of resolved classes with flattened inheritance
        """
        print('InheritanceResolver: Starting inheritance resolution...')
        
        # Create a flat registry of all classes
        class_registry = self._build_class_registry(all_classes)
        self.stats['total_classes'] = len(class_registry)
        
        resolved_classes = {}
        
        for class_name, class_data in class_registry.items():
            try:
                resolved = self._resolve_class(
                    class_name, 
                    class_registry, 
                    self.resolved_cache, 
                    set()
                )
                if resolved:
                    resolved_classes[class_name] = resolved
                    self.stats['resolved_classes'] += 1
            except Exception as e:
                error_msg = f"Failed to resolve class '{class_name}': {str(e)}"
                print(f"InheritanceResolver: {error_msg}")
                self.stats['errors'].append(error_msg)
                
                # Add unresolved class to maintain completeness
                resolved_classes[class_name] = class_data
        
        print(f'InheritanceResolver: Resolved {self.stats["resolved_classes"]}/{self.stats["total_classes"]} classes')
        print(f'InheritanceResolver: Cache hits: {self.stats["cache_hits"]}')
        print(f'InheritanceResolver: Inheritance chains: {self.stats["inheritance_chains"]}')
        if self.stats['errors']:
            print(f'InheritanceResolver: Errors: {len(self.stats["errors"])}')
        
        return resolved_classes
    
    def _build_class_registry(self, all_classes: Dict[str, Any]) -> Dict[str, Any]:
        """Build a flat registry from nested class hierarchy."""
        registry = {}
        
        def process_classes(classes_dict: Dict[str, Any], source_mod: str = 'unknown'):
            for class_name, class_data in classes_dict.items():
                if isinstance(class_data, dict):
                    # Add source metadata
                    enhanced_class_data = {
                        **class_data,
                        '_sourceMod': source_mod,
                        '_sourceFile': self.current_file if hasattr(self, 'current_file') else 'unknown'
                    }
                    registry[class_name] = enhanced_class_data
                    
                    # Process subclasses
                    if 'subClasses' in class_data and class_data['subClasses']:
                        process_classes(class_data['subClasses'], source_mod)
        
        process_classes(all_classes)
        return registry
    
    def _resolve_class(
        self, 
        class_name: str, 
        class_registry: Dict[str, Any], 
        resolved_cache: Dict[str, Any], 
        inheritance_stack: Set[str]
    ) -> Optional[Dict[str, Any]]:
        """Recursively resolve a single class."""
        # Check cache first
        if class_name in resolved_cache:
            self.stats['cache_hits'] += 1
            return resolved_cache[class_name]
        
        # Check for circular inheritance
        if class_name in inheritance_stack:
            chain = ' -> '.join(inheritance_stack) + f' -> {class_name}'
            raise Exception(f"Circular inheritance detected: {chain}")
        
        # Find class definition
        if class_name not in class_registry:
            # Check if this is a legitimate base class
            if self._is_legitimate_base_class(class_name):
                # Create synthetic class for legitimate base classes
                synthetic_class = {
                    'className': class_name,
                    'baseClass': None,
                    'properties': {},
                    'subClasses': {},
                    '_sourceMod': 'ARMA3/CBA',
                    '_sourceFile': 'engine',
                    '_synthetic': True
                }
                resolved_cache[class_name] = synthetic_class
                return synthetic_class
            
            print(f"InheritanceResolver: Missing base class '{class_name}' - treating as resolved")
            return None
        
        class_data = class_registry[class_name]
        
        # Add to inheritance stack
        inheritance_stack.add(class_name)
        self.stats['inheritance_chains'] += 1
        
        try:
            if not class_data.get('baseClass') or class_data['baseClass'] == class_name:
                # Base case: no inheritance or self-reference
                resolved_class = self._deep_clone(class_data)
            else:
                # Recursive case: resolve parent first, then merge
                parent_class = self._resolve_class(
                    class_data['baseClass'],
                    class_registry,
                    resolved_cache,
                    inheritance_stack
                )
                
                if parent_class:
                    # Deep merge parent properties with child properties
                    resolved_class = self._deep_merge_classes(parent_class, class_data)
                else:
                    # Parent couldn't be resolved, use child as-is
                    resolved_class = self._deep_clone(class_data)
            
            # Cache the resolved class
            resolved_cache[class_name] = resolved_class
            return resolved_class
            
        finally:
            # Remove from inheritance stack
            inheritance_stack.discard(class_name)
    
    def _deep_merge_classes(self, parent_class: Dict[str, Any], child_class: Dict[str, Any]) -> Dict[str, Any]:
        """Deep merge parent and child classes."""
        # Start with deep clone of parent
        merged = self._deep_clone(parent_class)
        
        # Merge child properties, overriding parent
        return self._deep_merge_dicts(merged, child_class)
    
    def _deep_merge_dicts(self, target: Dict[str, Any], source: Dict[str, Any]) -> Dict[str, Any]:
        """Deep merge two dictionaries."""
        for key, value in source.items():
            if key == 'subClasses':
                # Special handling for subClasses
                if 'subClasses' in target and isinstance(target['subClasses'], dict):
                    target['subClasses'] = self._deep_merge_dicts(target['subClasses'], value)
                else:
                    target['subClasses'] = self._deep_clone(value)
            elif isinstance(value, dict) and not isinstance(value, list):
                # Deep merge nested objects
                if key in target and isinstance(target[key], dict) and not isinstance(target[key], list):
                    target[key] = self._deep_merge_dicts(target[key], value)
                else:
                    target[key] = self._deep_clone(value)
            else:
                # Direct assignment for primitives, arrays, and None values
                target[key] = self._deep_clone(value)
        
        return target
    
    def _deep_clone(self, obj: Any) -> Any:
        """Deep clone an object."""
        if obj is None or isinstance(obj, (str, int, float, bool)):
            return obj
        
        if isinstance(obj, list):
            return [self._deep_clone(item) for item in obj]
        
        if isinstance(obj, dict):
            return {key: self._deep_clone(value) for key, value in obj.items()}
        
        return obj
    
    def _is_legitimate_base_class(self, class_name: str) -> bool:
        """Check if a class name represents a legitimate base class."""
        legitimate_classes = [
            # ASDG/CBA framework classes
            'asdg_SlotInfo', 'asdg_MuzzleSlot', 'asdg_OpticRail', 'asdg_FrontSideRail', 'asdg_UnderBarrelSlot',
            
            # Core ARMA engine classes
            'Default', 'None', 'All', 'AllVehicles', 'Man', 'Land', 'Air', 'Ship', 'Thing', 'ThingX',
            
            # ARMA equipment base classes
            'Weapon_Base_F', 'Rifle_Base_F', 'Pistol_Base_F', 'Launcher_Base_F', 'Vest_Base_F',
            'Headgear_Base_F', 'Uniform_Base', 'ItemCore', 'ItemInfo', 'WeaponSlotsInfo',
            'InventoryItem_Base_F', 'CA_Magazine', 'VestItem', 'HeadgearItem', 'UniformItem',
            
            # ARMA ammunition classes
            'BulletBase', 'MissileCore', 'RocketBase', 'GrenadeCore', 'GrenadeHand', 'HandGrenade',
            'SmokeShell', 'ammo_Penetrator_Base', 'FlareCore', 'SmokeShellCore',
            
            # ARMA vehicle classes
            'NewTurret', 'CargoTurret', 'MainTurret', 'WeaponHolder_Single_limited_item_F',
            'GroundWeaponHolder', 'ReammoBox_F', 'House_F', 'Building', 'Strategic', 'NonStrategic',
            
            # System classes
            'RscWeaponZeroing', 'RscOpticsValue', 'RscObject', 'RscControlsGroup', 'RscText', 'RscPicture',
            'Mod_Base', 'Actions', 'NoActions', 'Logic', 'Module_F'
        ]
        
        return class_name in legitimate_classes


class ItemExtractor:
    """
    Extracts arsenal items from resolved class data.
    Identifies weapons, vests, attachments, etc. and creates clean item entries.
    """
    
    def __init__(self):
        self.stats = {
            'total_classes': 0,
            'extracted_items': 0,
            'item_types': {}
        }
    
    def extract_items(self, resolved_classes: Dict[str, Any]) -> List[Dict[str, Any]]:
        """
        Extract arsenal items from resolved class data.
        
        Args:
            resolved_classes: Dictionary of resolved classes
            
        Returns:
            List of clean item dictionaries for arsenal UI
        """
        print('ItemExtractor: Starting item extraction...')
        
        self.stats['total_classes'] = len(resolved_classes)
        items = []
        
        for class_name, class_data in resolved_classes.items():
            try:
                item_type = self._identify_item_type(class_data)
                
                if item_type:
                    item = self._extract_item_data(class_name, class_data, item_type)
                    if item:
                        items.append(item)
                        self.stats['extracted_items'] += 1
                        
                        # Track item type statistics
                        if item_type not in self.stats['item_types']:
                            self.stats['item_types'][item_type] = 0
                        self.stats['item_types'][item_type] += 1
                        
            except Exception as e:
                print(f"ItemExtractor: Error processing '{class_name}': {str(e)}")
        
        print(f'ItemExtractor: Extracted {self.stats["extracted_items"]} items from {self.stats["total_classes"]} classes')
        for item_type, count in self.stats['item_types'].items():
            print(f'  - {item_type}: {count}')
        
        return items
    
    def _identify_item_type(self, class_data: Dict[str, Any]) -> Optional[str]:
        """Identify the type of item based on class data."""
        if not isinstance(class_data, dict):
            return None
        
        # Ensure we have valid strings (handle None values)
        class_name = class_data.get('className') or ''
        base_class = class_data.get('baseClass') or ''
        properties = class_data.get('properties', {})
        
        # Merge properties with top-level class data for compatibility
        merged_data = {**properties, **class_data}
        
        # Check for weapons
        if self._is_weapon(merged_data, class_name, base_class):
            return 'weapon'
        
        # Check for vests
        if self._is_vest(merged_data, class_name, base_class):
            return 'vest'
        
        # Check for attachments
        if self._is_attachment(merged_data, class_name, base_class):
            return 'attachment'
        
        # Check for magazines
        if self._is_magazine(merged_data, class_name, base_class):
            return 'magazine'
        
        # Check for launchers
        if self._is_launcher(merged_data, class_name, base_class):
            return 'launcher'
        
        # Check for handguns
        if self._is_handgun(merged_data, class_name, base_class):
            return 'handgun'
        
        # Check for backpacks
        if self._is_backpack(merged_data, class_name, base_class):
            return 'backpack'
        
        # Check for NVGs
        if self._is_nvg(merged_data, class_name, base_class):
            return 'nvg'
        
        # Check for binoculars
        if self._is_binoculars(merged_data, class_name, base_class):
            return 'binoculars'
        
        return None
    
    def _is_weapon(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is a weapon."""
        # Exclusions first
        if (re.search(r'^(launch_|launcher)', class_name, re.I) or
            re.search(r'LauncherCore|Launcher_Base_F', base_class, re.I)):
            return False
        
        if (re.search(r'laserdesignator|binocular|designator', class_name, re.I) or
            re.search(r'LaserDesignator|Binocular', base_class, re.I)):
            return False
        
        if (re.search(r'^(optic_|muzzle_|acc_|bipod_)', class_name, re.I) or
            re.search(r'ItemCore', base_class, re.I)):
            return False
        
        if (re.search(r'^(hgun_)', class_name, re.I) or
            re.search(r'Pistol_Base_F', base_class, re.I)):
            return False
        
        # Primary indicators (magazineWell-based system)
        # Strongest indicator: magazineWell + modes (modern compatibility system)
        if (isinstance(data.get('magazineWell'), list) and len(data.get('magazineWell', [])) > 0 and
            isinstance(data.get('modes'), list) and len(data.get('modes', [])) > 0):
            return True
        
        # Strong indicator: WeaponSlotsInfo + magazineWell + modes
        if ('WeaponSlotsInfo' in data and 
            isinstance(data.get('magazineWell'), list) and len(data.get('magazineWell', [])) > 0 and
            isinstance(data.get('modes'), list) and len(data.get('modes', [])) > 0):
            return True
        
        # Base class indicators
        weapon_base_classes = [
            'Rifle_Base_F', 'Rifle_Long_Base_F', 'Rifle_Short_Base_F', 'SMG_01_Base', 
            'SMG_02_Base', 'SMG_03_Base', 'MGun', 'MGunCore'
        ]
        
        if base_class and any(base_class_name in base_class for base_class_name in weapon_base_classes):
            return True
        
        # Class name patterns
        weapon_patterns = [
            r'^(arifle|srifle|lmg|smg|mmg)_',
            r'rifle$',
            r'carbine$'
        ]
        
        if class_name and any(re.search(pattern, class_name, re.I) for pattern in weapon_patterns):
            if (isinstance(data.get('magazineWell'), list) or 
                isinstance(data.get('modes'), list) or 
                'WeaponSlotsInfo' in data):
                return True
        
        return False
    
    def _is_vest(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is a vest."""
        # Primary indicator: ItemInfo with VestItem characteristics
        if 'ItemInfo' in data:
            item_info = data['ItemInfo']
            if (isinstance(item_info, dict) and 
                ('containerClass' in item_info or 
                 isinstance(item_info.get('armor'), (int, float)) or
                 'passThrough' in item_info or
                 'uniformModel' in item_info)):
                return True
        
        # Secondary indicator: direct armor property
        if isinstance(data.get('armor'), (int, float)):
            return True
        
        # Base class indicators
        vest_base_classes = ['Vest_Base_F', 'Vest_Camo_Base', 'VestItem', 'Vest_NoCamo_Base']
        if base_class and any(base_class_name in base_class for base_class_name in vest_base_classes):
            return True
        
        # Class name patterns
        vest_patterns = [r'^V_', r'vest', r'armor', r'carrier', r'harness', r'rig']
        if class_name and any(re.search(pattern, class_name, re.I) for pattern in vest_patterns):
            return True
        
        # Container class indicates storage capability
        if 'containerClass' in data:
            return True
        
        return False
    
    def _is_attachment(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is an attachment."""
        # Base class indicators
        if re.search(r'ItemCore', base_class, re.I):
            return True
        
        # Class name patterns
        attachment_patterns = [
            r'^(optic_|muzzle_|acc_|bipod_)', r'scope', r'sight', r'suppressor', 
            r'silencer', r'compensator', r'flashhider', r'laser', r'flashlight'
        ]
        
        if class_name and any(re.search(pattern, class_name, re.I) for pattern in attachment_patterns):
            return True
        
        return False
    
    def _is_magazine(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is a magazine."""
        # Base class indicators
        if re.search(r'CA_Magazine', base_class, re.I):
            return True
        
        # Class name patterns
        magazine_patterns = [r'^(30Rnd_|20Rnd_|10Rnd_|mag_|magazine)', r'magazine', r'clip']
        if class_name and any(re.search(pattern, class_name, re.I) for pattern in magazine_patterns):
            return True
        
        # Property indicators
        if 'ammo' in data and isinstance(data.get('count'), (int, float)):
            return True
        
        return False
    
    def _is_launcher(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is a launcher."""
        # Class name patterns
        if re.search(r'^(launch_|launcher)', class_name, re.I):
            return True
        
        # Base class indicators
        if re.search(r'LauncherCore|Launcher_Base_F', base_class, re.I):
            return True
        
        return False
    
    def _is_handgun(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is a handgun."""
        # Class name patterns
        if re.search(r'^(hgun_)', class_name, re.I):
            return True
        
        # Base class indicators
        if re.search(r'Pistol_Base_F', base_class, re.I):
            return True
        
        return False
    
    def _is_backpack(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is a backpack."""
        # Class name patterns
        if re.search(r'^(B_|bag_)', class_name, re.I):
            return True
        
        # Base class indicators
        if re.search(r'Bag_Base', base_class, re.I):
            return True
        
        return False
    
    def _is_nvg(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is night vision goggles."""
        # Class name patterns
        if re.search(r'nvg|nightvision|night_vision', class_name, re.I):
            return True
        
        return False
    
    def _is_binoculars(self, data: Dict[str, Any], class_name: str, base_class: str) -> bool:
        """Check if this is binoculars."""
        # Class name patterns
        if re.search(r'binocular|rangefinder', class_name, re.I):
            return True
        
        # Base class indicators
        if re.search(r'Binocular', base_class, re.I):
            return True
        
        return False
    
    def _extract_item_data(self, class_name: str, class_data: Dict[str, Any], item_type: str) -> Optional[Dict[str, Any]]:
        """Extract clean item data for arsenal UI."""
        if not isinstance(class_data, dict):
            return None
        
        properties = class_data.get('properties', {})
        merged_data = {**properties, **class_data}
        
        # Base item structure
        item = {
            'className': class_name,
            'type': item_type,
            'displayName': self._get_display_name(merged_data, class_name),
            'scope': merged_data.get('scope', 0),
            'mass': merged_data.get('mass'),
            'picture': merged_data.get('picture'),
            'descriptionShort': merged_data.get('descriptionShort'),
            '_sourceMod': class_data.get('_sourceMod', 'unknown'),
            '_sourceFile': class_data.get('_sourceFile', 'unknown')
        }
        
        # Add type-specific metadata
        if item_type == 'weapon':
            self._add_weapon_metadata(item, merged_data)
        elif item_type == 'vest':
            self._add_vest_metadata(item, merged_data)
        elif item_type == 'magazine':
            self._add_magazine_metadata(item, merged_data)
        elif item_type == 'attachment':
            self._add_attachment_metadata(item, merged_data)
        
        # Filter out items with scope 0 (hidden) unless explicitly needed
        if item.get('scope', 0) == 0:
            return None
        
        return item
    
    def _get_display_name(self, data: Dict[str, Any], class_name: str) -> str:
        """Get display name for item."""
        display_name = data.get('displayName', '')
        if not display_name:
            # Check in properties if top-level doesn't have it
            properties = data.get('properties', {})
            display_name = properties.get('displayName', '')
        
        # Fallback to class name
        if not display_name:
            display_name = class_name
        
        return str(display_name)
    
    def _add_weapon_metadata(self, item: Dict[str, Any], data: Dict[str, Any]) -> None:
        """Add weapon-specific metadata."""
        item.update({
            'modes': data.get('modes', []),
            'initSpeed': data.get('initSpeed'),
            'WeaponSlotsInfo': data.get('WeaponSlotsInfo'),
            'magazineWell': data.get('magazineWell', [])
        })
    
    def _add_vest_metadata(self, item: Dict[str, Any], data: Dict[str, Any]) -> None:
        """Add vest-specific metadata."""
        item_info = data.get('ItemInfo', {})
        
        item.update({
            'armor': data.get('armor') or (item_info.get('armor') if isinstance(item_info, dict) else None),
            'containerClass': data.get('containerClass') or (item_info.get('containerClass') if isinstance(item_info, dict) else None),
            'passThrough': data.get('passThrough') or (item_info.get('passThrough') if isinstance(item_info, dict) else None),
            'ItemInfo': item_info
        })
    
    def _add_magazine_metadata(self, item: Dict[str, Any], data: Dict[str, Any]) -> None:
        """Add magazine-specific metadata."""
        item.update({
            'ammo': data.get('ammo'),
            'count': data.get('count'),
            'initSpeed': data.get('initSpeed'),
            'tracersEvery': data.get('tracersEvery'),
            'magazineWell': data.get('magazineWell', [])
        })
    
    def _add_attachment_metadata(self, item: Dict[str, Any], data: Dict[str, Any]) -> None:
        """Add attachment-specific metadata."""
        item_info = data.get('ItemInfo', {})
        
        item.update({
            'ItemInfo': item_info,
            'MRT': data.get('MRT'),
            'recoil': data.get('recoil')
        })


def discover_config_files(input_path: str) -> List[str]:
    """
    Recursively discover all config.cpp files in the input directory.
    
    Args:
        input_path: Root directory to search
        
    Returns:
        List of absolute paths to config.cpp files
    """
    config_files = []
    
    if not os.path.exists(input_path):
        print(f"Error: Input path '{input_path}' does not exist")
        return config_files
    
    for root, dirs, files in os.walk(input_path):
        for file in files:
            if file.lower() == 'config.cpp':
                config_files.append(os.path.join(root, file))
    
    print(f"Discovered {len(config_files)} config.cpp files")
    return config_files


def discover_stringtable_files(input_path: str) -> List[str]:
    """
    Recursively discover all stringtable.xml files in the input directory.
    
    Args:
        input_path: Root directory to search
        
    Returns:
        List of absolute paths to stringtable.xml files
    """
    stringtable_files = []
    
    if not os.path.exists(input_path):
        print(f"Error: Input path '{input_path}' does not exist")
        return stringtable_files
    
    for root, dirs, files in os.walk(input_path):
        for file in files:
            if file.lower() == 'stringtable.xml':
                stringtable_files.append(os.path.join(root, file))
    
    print(f"Discovered {len(stringtable_files)} stringtable.xml files")
    return stringtable_files


def main():
    """Main entry point for the ingestion script."""
    parser = argparse.ArgumentParser(
        description='Arma 3 Config Data Ingestion Script',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  python tools/ingest.py --input data/addons --output database.json
  python tools/ingest.py --input data/addons/sfp --output sfp_items.json
        """
    )
    
    parser.add_argument(
        '--input',
        required=True,
        help='Root directory to search for config.cpp files'
    )
    
    parser.add_argument(
        '--output',
        default='database.json',
        help='Output file path for the generated JSON database (default: database.json)'
    )
    
    args = parser.parse_args()
    
    print("=" * 60)
    print("Arma 3 Config Data Ingestion Script")
    print("=" * 60)
    print(f"Input directory: {args.input}")
    print(f"Output file: {args.output}")
    print()
    
    start_time = time.time()
    
    try:
        # Step 1: File Discovery
        print("Step 1: Discovering config.cpp and stringtable.xml files...")
        config_files = discover_config_files(args.input)
        stringtable_files = discover_stringtable_files(args.input)
        
        if not config_files:
            print("No config.cpp files found. Exiting.")
            sys.exit(1)
        
        # Step 2: String Table Processing
        print("\nStep 2: Processing stringtable.xml files...")
        if stringtable_files:
            stringtable_parser = StringTableParser()
            localization_dict = stringtable_parser.parse_all(stringtable_files)
        else:
            print("No stringtable.xml files found - localization will be skipped")
            localization_dict = {}
        
        # Step 3: Parsing
        print("\nStep 3: Parsing config files...")
        parser_instance = ConfigParser()
        all_classes = {}
        
        for i, config_file in enumerate(config_files, 1):
            try:
                print(f"  Parsing ({i}/{len(config_files)}): {config_file}")
                
                with open(config_file, 'r', encoding='utf-8', errors='ignore') as f:
                    content = f.read()
                
                parsed_classes = parser_instance.parse(content, config_file)
                
                # Merge into all_classes
                for class_name, class_data in parsed_classes.items():
                    if class_name in all_classes:
                        print(f"    Warning: Duplicate class '{class_name}' found, merging")
                        # Simple merge - child overrides parent
                        all_classes[class_name] = {**all_classes[class_name], **class_data}
                    else:
                        all_classes[class_name] = class_data
                        
            except Exception as e:
                print(f"    Error parsing {config_file}: {str(e)}")
                continue
        
        print(f"  Parsed {len(all_classes)} total classes")
        
        # Step 4: Inheritance Resolution
        print("\nStep 4: Resolving inheritance...")
        resolver = InheritanceResolver()
        resolved_classes = resolver.resolve(all_classes)
        
        # Step 5: Item Extraction
        print("\nStep 5: Extracting arsenal items...")
        extractor = ItemExtractor()
        items = extractor.extract_items(resolved_classes)
        
        # Step 6: Localization Resolution
        print("\nStep 6: Resolving string table references...")
        if localization_dict:
            resolver = LocalizationResolver(localization_dict)
            items = resolver.resolve_items(items)
        else:
            print("Skipping localization resolution - no string tables found")
        
        # Step 7: JSON Generation
        print("\nStep 7: Generating JSON database...")
        
        # Ensure output directory exists
        output_path = Path(args.output)
        output_path.parent.mkdir(parents=True, exist_ok=True)
        
        with open(args.output, 'w', encoding='utf-8') as f:
            json.dump(items, f, indent=4, ensure_ascii=False)
        
        # Final statistics
        end_time = time.time()
        duration = end_time - start_time
        
        print("\n" + "=" * 60)
        print("INGESTION COMPLETE")
        print("=" * 60)
        print(f"Config files processed: {len(config_files)}")
        print(f"Stringtable files processed: {len(stringtable_files)}")
        print(f"Localization keys loaded: {len(localization_dict)}")
        print(f"Total classes parsed: {len(all_classes)}")
        print(f"Classes after resolution: {len(resolved_classes)}")
        print(f"Arsenal items extracted: {len(items)}")
        print(f"Processing time: {duration:.2f} seconds")
        print(f"Output file: {args.output}")
        print(f"Output file size: {os.path.getsize(args.output) / 1024 / 1024:.2f} MB")
        
        # Item type breakdown
        if extractor.stats['item_types']:
            print("\nItem type breakdown:")
            for item_type, count in extractor.stats['item_types'].items():
                print(f"  {item_type}: {count}")
        
        # Localization statistics
        if localization_dict and 'resolver' in locals():
            print("\nLocalization statistics:")
            print(f"  String replacements made: {resolver.stats['replacements_made']}")
            print(f"  Unresolved string keys: {len(resolver.stats['unresolved_keys'])}")
            if resolver.stats['unresolved_keys']:
                print("  Sample unresolved keys:")
                for key in list(resolver.stats['unresolved_keys'])[:3]:
                    print(f"    {key}")
        
        print("\nIngestion completed successfully!")
        
    except KeyboardInterrupt:
        print("\nIngestion interrupted by user")
        sys.exit(1)
    except Exception as e:
        print(f"\nError: {str(e)}")
        sys.exit(1)


if __name__ == '__main__':
    main()