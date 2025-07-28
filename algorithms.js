// Arsenal Sorting & Grouping Algorithms
// Main export file - imports from modular algorithm files

// Import all sorting algorithms
export * from './algorithms/sorting.js';

// Import all grouping algorithms  
export * from './algorithms/grouping.js';

// Import all hierarchy-based algorithms
export * from './algorithms/hierarchy.js';

// Import variant-aware core functionality
export * from './algorithms/variantCore.js';

// TODO: Add your experimental algorithms in the appropriate files:
// - algorithms/sorting.js - for new sorting functions
// - algorithms/grouping.js - for new grouping functions  
// - algorithms/hierarchy.js - for inheritance-based algorithms

/*
Variant-Aware Algorithm Ideas:

Arsenal-Style Display Functions:
- groupByVariants() - Arsenal-style mixed hierarchy (singles + collapsible groups)
- groupByArsenalStyle() - Same as above, clearer naming
- sortVariantsFlat() - Flat list with base weapons first, then variants

Structure Created (corrected for texture variants only):
• G36A (base weapon, no texture variants)
• G36C (separate weapon model)
• G36K (separate weapon model)  
AK-74M (4)                      <- Collapsible group with count
  • AK-74M                      <- Base weapon first
  • AK-74M (Desert)             <- Texture variants only
  • AK-74M (Plum)
  • AK-74M (Zenitco)

Variant Detection Logic:
- TEXTURE VARIANTS: Black, Khaki, Desert, Woodland, Camo, Tan, Olive, etc.
- SEPARATE WEAPONS: C, K, SW, GL, CQC, STD (functional differences)

Enhanced Variant Functions:
- sortByNameVariantAware() - sort while keeping variants with their base weapons
- sortByModVariantAware() - mod-based sorting with variant awareness
- groupByWeaponFamilyVariants() - group by weapon platform families (MX, AK, etc.)
- groupByVariantsWithMod() - variant-aware grouping by mod
- groupByVariantsWithCaliber() - variant-aware grouping by caliber
- groupByVariantsWithRole() - group by tactical role (CQB, DMR, LMG, etc.)

Additional Ideas to try:
- groupByCompatibility() - group weapons with their compatible attachments (variant-aware)
- sortByRarity() - sort by how uncommon items are (keeping variants together)
- groupBySource() - group by which mission/location items come from
- sortByEfficiency() - damage per weight ratio (variant-aware)
- groupByLoadout() - group items that work well together
*/