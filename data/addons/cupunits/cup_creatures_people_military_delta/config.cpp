class DefaultEventhandlers;
class CfgPatches
{
	class CUP_Creatures_Military_Delta
	{
		units[]={};
		weapons[]=
		{
			"CUP_V_B_Delta_1",
			"CUP_V_B_Delta_2"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Creatures_People_Military_DummyInfantrySet",
			"CUP_Creatures_People_Core"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class UniformSlotInfo;
class CfgVehicleClasses
{
	class CUP_B_Men_Delta
	{
		displayName="$STR_CUP_dn_Men";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		model="\A3\Characters_F\OPFOR\o_soldier_01.p3d";
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		threat[]={1,0.1,0.1};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class EventHandlers;
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class VestItem: InventoryItem_Base_F
	{
		type=701;
		hiddenSelections[]={};
		armor="5*0";
		passThrough=1;
		hitpointName="HitBody";
	};
	class CUP_Vest_Camo_Base: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=0;
		allowedSlots[]={901};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			armor=0;
			passThrough=1;
			mass=0;
			containerClass="Supply0";
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CUP_V_B_Delta_1: CUP_Vest_Camo_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="$STR_CUP_dn_V_B_Delta_1";
		descriptionShort="$STR_A3_SP_AL_I";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_v_RRV_tl_ca.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Delta\CUP_Delta_Vest1.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_1_co.paa",
			"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_equip_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Delta\CUP_Delta_Vest1.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_1_co.paa",
				"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_equip_co.paa"
			};
			armor=20;
			passThrough=0.5;
			mass=70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class CUP_V_B_Delta_2: CUP_Vest_Camo_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="$STR_CUP_dn_V_B_Delta_2";
		descriptionShort="$STR_A3_SP_AL_I";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_v_RRV_tl_ca.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Delta\CUP_Delta_Vest2.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_1_co.paa",
			"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_equip_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Delta\CUP_Delta_Vest2.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_1_co.paa",
				"cup\creatures\people\military\cup_creatures_people_military_delta\data\do_equip_co.paa"
			};
			armor=20;
			passThrough=0.5;
			mass=70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
};
class CfgGlasses
{
	class None;
};
class CfgGroups
{
	class WEST
	{
	};
};
