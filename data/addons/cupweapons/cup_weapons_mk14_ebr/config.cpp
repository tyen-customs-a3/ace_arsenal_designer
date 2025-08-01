class CfgPatches
{
	class CUP_Weapons_MK14_EBR
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_Mk18_wdl",
			"CUP_srifle_Mk18_des",
			"CUP_srifle_Mk18_blk",
			"CUP_srifle_Mk18_blk_LP4"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_West_Attachments",
			"CUP_Weapons_Ammunition"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913_short;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class CfgWeapons
{
	class srifle_EBR_F;
	class CUP_srifle_Mk18_wdl: srifle_EBR_F
	{
		author="Community Upgrade Project";
		baseWeapon="CUP_srifle_Mk18_sage";
		displayName="Mk14 MOD 0 7.62 mm (Woodland)";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_MK14_EBR\data\m14_wdl_1_co.paa",
			"\CUP\Weapons\CUP_Weapons_MK14_EBR\data\m14_wdl_2_co.paa"
		};
	};
	class CUP_srifle_Mk18_des: srifle_EBR_F
	{
		author="Community Upgrade Project";
		baseWeapon="CUP_srifle_Mk18_des";
		displayName="Mk14 MOD 0 7.62 mm (Desert)";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_MK14_EBR\data\m14_des2_1_co.paa",
			"\CUP\Weapons\CUP_Weapons_MK14_EBR\data\m14_des2_2_co.paa"
		};
	};
	class CUP_srifle_Mk18_blk: srifle_EBR_F
	{
		author="Community Upgrade Project";
		baseWeapon="CUP_srifle_Mk18_blk";
		displayName="Mk14 MOD 0 7.62 mm (Black)";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_MK14_EBR\data\m14_blk_1_co.paa",
			"\CUP\Weapons\CUP_Weapons_MK14_EBR\data\m14_blk_2_co.paa"
		};
	};
	class CUP_srifle_Mk18_blk_LP4: CUP_srifle_Mk18_blk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_LeupoldMk4";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_2_grey";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
};
