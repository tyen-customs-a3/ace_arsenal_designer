class UniformItem;
class ItemCore;
class CfgPatches
{
	class sns_uniform
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F"
		};
	};
};
class cfgVehicles
{
	class Man;
	class SoldierWB;
	class B_Soldier_base_F;
	class B_AssaultPack_Base;
	class m58_base_uniform: SoldierWB
	{
		author="Simcardo & Justin N.";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="Base Uniform";
		cost=200000;
		camouflage=1.8;
		accuracy=2;
		sensitivity=2.2;
		threat[]={1,0.1,0.1};
		model="\sns_dutch\sns_m58.p3d";
		modelSides[]={6};
		canDeactivateMines="false";
		engineer="false";
		attendant=1;
		icon="iconMan";
		picture="\sns_dutch\ui\m58_uniform.paa";
		backpack="";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		Items[]={};
		RespawnItems[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class m58_visgraat_base_uniform: SoldierWB
	{
		author="Simcardo & Justin N.";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="Base Uniform";
		cost=200000;
		camouflage=1.8;
		accuracy=2;
		sensitivity=2.2;
		threat[]={1,0.1,0.1};
		model="\sns_dutch\sns_hbt.p3d";
		modelSides[]={6};
		canDeactivateMines="false";
		engineer="false";
		attendant=1;
		icon="iconMan";
		picture="\sns_dutch\ui\m58_uniform.paa";
		backpack="";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		Items[]={};
		RespawnItems[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class m78_base_uniform: SoldierWB
	{
		author="Simcardo & Justin N.";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="Base Uniform";
		cost=200000;
		camouflage=1.8;
		accuracy=2;
		sensitivity=2.2;
		threat[]={1,0.1,0.1};
		model="\sns_dutch\sns_m78.p3d";
		modelSides[]={6};
		canDeactivateMines="false";
		engineer="false";
		attendant=1;
		icon="iconMan";
		picture="\sns_dutch\ui\m58_uniform.paa";
		backpack="";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		Items[]={};
		RespawnItems[]={};
		magazines[]={};
		respawnMagazines[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
	};
	class sns_m58_uniform_u: m58_base_uniform
	{
		scope=1;
		displayName="M58";
		model="\sns_dutch\sns_m58.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m58_co.paa",
			"\sns_dutch\data\m78_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sns_dutch\data\m58.rvmat",
			"\sns_dutch\data\m78.rvmat"
		};
		uniformClass="sns_m58_uniform";
		icon="iconMan";
		picture="\sns_dutch\ui\m58_uniform.paa";
	};
	class sns_m58_vis_uniform_u: m58_base_uniform
	{
		scope=1;
		displayName="M58 Vis";
		model="\sns_dutch\sns_m58.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m58_co.paa",
			"\sns_dutch\data\m58_visgraat_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sns_dutch\data\m58.rvmat",
			"\sns_dutch\data\m58_visgraat.rvmat"
		};
		uniformClass="sns_m58_vis_uniform";
		icon="iconMan";
		picture="\sns_dutch\ui\m58_uniform.paa";
	};
	class sns_m58_hbt_uniform_u: m58_visgraat_base_uniform
	{
		scope=1;
		displayName="M58 Visgraat";
		model="\sns_dutch\sns_hbt.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m58_visgraat_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		uniformClass="sns_m58_hbt_uniform";
		icon="iconMan";
		picture="\sns_dutch\ui\m58_uniform.paa";
	};
	class sns_m78_uniform_u: m78_base_uniform
	{
		scope=1;
		displayName="M78";
		model="\sns_dutch\sns_m78.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m78_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		uniformClass="sns_m78_uniform";
		icon="iconMan";
		picture="\sns_dutch\ui\m58_uniform.paa";
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_HelmetB;
	class sns_m58_uniform: Uniform_Base
	{
		author="Simcardo & Justin N.";
		scope=2;
		displayName="[NL] M58 NAVO Jas (M78)";
		picture="\sns_dutch\ui\m58_uniform.paa";
		model="\sns_dutch\sns_m58.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m58_co.paa",
			"\sns_dutch\data\m78_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sns_dutch\data\m58.rvmat",
			"\sns_dutch\data\m78.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="sns_m58_uniform_u";
			modelSides[]={6};
			containerClass="Supply40";
			mass=60;
		};
	};
	class sns_m58_vis_uniform: Uniform_Base
	{
		author="Simcardo & Justin N.";
		scope=2;
		displayName="[NL] M58 NAVO Jas (Visgraat)";
		picture="\sns_dutch\ui\m58_uniform.paa";
		model="\sns_dutch\sns_m58.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m58_co.paa",
			"\sns_dutch\data\m58_visgraat_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\sns_dutch\data\m58.rvmat",
			"\sns_dutch\data\m58_visgraat.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="sns_m58_vis_uniform_u";
			modelSides[]={6};
			containerClass="Supply40";
			mass=60;
		};
	};
	class sns_m58_hbt_uniform: Uniform_Base
	{
		author="Simcardo & Justin N.";
		scope=2;
		displayName="[NL] M58 Veldtenue";
		picture="\sns_dutch\ui\m58_uniform.paa";
		model="\sns_dutch\sns_hbt.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m58_visgraat_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="sns_m58_hbt_uniform_u";
			modelSides[]={6};
			containerClass="Supply40";
			mass=60;
		};
	};
	class sns_m78_uniform: Uniform_Base
	{
		author="Simcardo & Justin N.";
		scope=2;
		displayName="[NL] M78 Veldtenue";
		picture="\sns_dutch\ui\m58_uniform.paa";
		model="\sns_dutch\sns_m78.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\m78_co.paa",
			"\sns_dutch\data\laars_co.paa"
		};
		class ItemInfo: UniformItem
		{
			modelSides[]={6};
			uniformClass="sns_m78_uniform_u";
			containerClass="Supply40";
			mass=60;
		};
	};
	class VestItem;
	class Vest_Camo_Base;
	class V_sns_m58_basic: Vest_Camo_Base
	{
		author="Justin ft. 089";
		scope=1;
		displayName="[NL] M58 LCE";
		model="\sns_dutch\sns_gear_m58_drop.p3d";
		picture="\sns_dutch\ui\gear_m58_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58_full.p3d";
			hiddenSelections[]=
			{
				""
			};
			modelSides[]={6};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58: V_sns_m58_basic
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952 Uitrusting";
		model="\sns_dutch\sns_gear_m58_drop.p3d";
		picture="\sns_dutch\ui\gear_m58_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_dutch\data\gear_m58_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_bare: V_sns_m58
	{
		author="Justin + 089";
		displayName="[NL] M1952 Uitrusting (empty)";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58_bare.p3d";
			containerClass="Supply30";
			mass=15;
		};
	};
	class V_sns_m58_m43: V_sns_m58
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952 Uitrusting (Schaufel M43)";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58_m43.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_laat: V_sns_m58
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952 Uitrusting (Schaufel ALICE)";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58_laat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_pistal: V_sns_m58
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952 Uitrusting (holster)";
		picture="\sns_dutch\ui\gear_m58_pistal_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58_pistal.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_pistal_m43: V_sns_m58_pistal
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952 Uitrusting (holster/schaufel)";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58_pistal_m43.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_pistal_laat: V_sns_m58_pistal
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952 Uitrusting (holster/schaufel ALICE)";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_m58_pistal_laat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_p37: V_sns_m58
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952/P37 Uitrusting";
		picture="\sns_dutch\ui\gear_p37_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_p37.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_p37_m43: V_sns_m58_p37
	{
		author="Justin + 089";
		scope=2;
		displayName="[NL] M1952/P37 Uitrusting (schaufel)";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_p37_m43.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_sns_m58_p37_bare: V_sns_m58_p37
	{
		author="Justin + 089";
		displayName="[NL] M1952/P37 Uitrusting (empty)";
		class ItemInfo: VestItem
		{
			uniformModel="\sns_dutch\sns_gear_p37_bare.p3d";
			containerClass="Supply30";
			mass=15;
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1666176806";
};
