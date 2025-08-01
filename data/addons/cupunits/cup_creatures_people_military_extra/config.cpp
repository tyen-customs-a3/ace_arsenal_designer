class DefaultEventhandlers;
class CfgPatches
{
	class CUP_Creatures_Extra
	{
		units[]={};
		weapons[]=
		{
			"CUP_H_WZ67",
			"CUP_H_WZ67_EAGLE"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Creatures_People_Core"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
	class CUP_H_WZ67: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="Wz.67";
		descriptionShort="";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\data\ui\icon_h_wz67_ca.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\CUP_wz67.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\data\wz67_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\CUP_wz67.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\data\wz67_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	class CUP_H_WZ67_EAGLE: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Units";
		scope=2;
		displayName="Wz.67 (Eagle)";
		descriptionShort="";
		picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\data\ui\icon_h_wz67_ca.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\CUP_wz67.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\data\wz67_eagle_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\CUP_wz67.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={};
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\data\wz67_eagle_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
};
