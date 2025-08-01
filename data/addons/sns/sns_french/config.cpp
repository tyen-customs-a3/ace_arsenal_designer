class UniformItem;
class ItemCore;
class CfgPatches
{
	class sns_french_uniform
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
	class F1_Base_Uniform: SoldierWB
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
		model="\sns_french\sns_f1.p3d";
		canDeactivateMines="false";
		engineer="false";
		attendant=1;
		icon="iconMan";
		picture="\sns_french\ui\f1_uniform_ca.paa";
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
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"sns_french\data\frank_f1.rvmat",
				"sns_french\data\frank_f1_verwundet.rvmat",
				"sns_french\data\frank_f1_verwundet.rvmat",
				"sns_french\data\frank_f1.rvmat",
				"sns_french\data\frank_f1_verwundet.rvmat",
				"sns_french\data\frank_f1_verwundet.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class sns_f1_uniform_u: F1_Base_Uniform
	{
		scope=1;
		displayName="F1";
		model="\sns_french\sns_f1.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_french\data\frank_f1_co.paa",
			"\sns_french\data\frank_f1_co.paa",
			"sns_french\data\frank_bot_co.paa"
		};
		uniformClass="sns_f1_uniform";
		icon="iconMan";
		picture="\sns_french\ui\f1_uniform_ca.paa";
	};
	class sns_f1_uniform_roll_u: sns_f1_uniform_u
	{
		model="\sns_french\sns_f1_roll.p3d";
	};
	class sns_f1_uniform_trop_u: sns_f1_uniform_u
	{
		model="\sns_french\sns_f1_trop.p3d";
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_HelmetB;
	class U_BasicBody: Uniform_Base
	{
		class ItemInfo;
	};
	class sns_frank_basicbody: U_BasicBody
	{
		author="Simcardigs";
		scope=0;
		model="\simc_uaf_81\sns_suitpack_f1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_81_preview\icons\sns_wip_ca.paa";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply30";
			mass=20;
		};
	};
	class sns_f1_uniform: sns_frank_basicbody
	{
		author="Justin N.";
		scope=2;
		displayName="[FR] Treillis F1";
		picture="\sns_french\ui\f1_uniform_ca.paa";
		model="\sns_french\sns_suitpack_f1.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_french\data\frank_f1_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="sns_f1_uniform_u";
			containerClass="Supply40";
			mass=60;
		};
	};
	class sns_f1_uniform_roll: sns_f1_uniform
	{
		author="Justin N.";
		class ItemInfo: ItemInfo
		{
			uniformClass="sns_f1_uniform_roll_u";
			containerClass="Supply40";
			mass=60;
		};
	};
	class sns_f1_uniform_trop: sns_f1_uniform
	{
		author="Justin N.";
		class ItemInfo: ItemInfo
		{
			uniformClass="sns_f1_uniform_trop_u";
			containerClass="Supply40";
			mass=60;
		};
	};
	class Vest_Camo_Base;
	class SNS_Vest_Camo_Base: Vest_Camo_Base
	{
	};
	class VestItem: InventoryItem_Base_F
	{
	};
	class sns_mas49_erla: SNS_Vest_Camo_Base
	{
		author="Rikugun, Justin N., Frenchy56";
		scope=2;
		displayName="[FR] Mas49 Webbing (Early)";
		picture="\sns_french\ui\fr_webbing_ca.paa";
		model="\sns_french\sns_mas49_drop.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"sns_french\data\sns_frenchpouch_co.paa",
			"sns_french\data\sekop_43_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\sns_french\sns_mas49_erla.p3d";
			containerClass="Supply70";
			mass=7;
			hiddenSelections[]=
			{
				"Camo",
				"Camo2"
			};
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1638391657";
};
