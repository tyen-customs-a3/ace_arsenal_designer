class CfgPatches
{
	class CUP_Weapons_X95
	{
		units[]={};
		weapons[]=
		{
			"CUP_arifle_X95",
			"CUP_arifle_X95_Grippod",
			"CUP_arifle_Fort224",
			"CUP_arifle_Fort224_Grippod",
			"CUP_arifle_Fort221",
			"CUP_arifle_Fort222",
			"CUP_arifle_X95_mars",
			"CUP_arifle_X95_Grippod_mars"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_East_Attachments",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds"
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
	class Rifle_Base_F;
	class Tavor_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_TRG20_F: Tavor_base_F
	{
	};
	class arifle_TRG21_F: Tavor_base_F
	{
	};
	class CUP_arifle_X95: Tavor_base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_X95\CUP_X95";
		displayname="$STR_CUP_dn_X95";
		picture="CUP\Weapons\CUP_Weapons_X95\Data\UI\gear_x95_X_CA.paa";
		baseWeapon="CUP_arifle_X95";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_X95\data\anim\x95.rtm"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_X95",
			"CUP_30Rnd_556x45_X95_Tracer_Red",
			"CUP_30Rnd_556x45_X95_Tracer_Green",
			"CUP_30Rnd_556x45_X95_Tracer_Yellow"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D"
		};
		class ItemInfo
		{
			priority=1;
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.4;
		dexterity=1.7;
		initSpeed=-0.961496;
		maxZeroing=600;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=330;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPinPoint="center";
				iconPosition[]={0.14300001,0.36300001};
				iconScale=0.16;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPinPoint="center";
				iconPosition[]={0.43599999,0.156};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPinPoint="center";
				iconPosition[]={0.30899999,0.27000001};
				iconScale=0.17;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPinPoint="center";
				iconPosition[]={0.33399999,0.59399998};
				iconScale=0.15000001;
				iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
			mass=69.599998;
		};
	};
	class CUP_arifle_X95_Grippod: CUP_arifle_X95
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_X95\CUP_X95_grip";
		displayname="$STR_CUP_dn_X95_grip";
		picture="CUP\Weapons\CUP_Weapons_X95\Data\UI\gear_x95_grip_X_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_X95\data\anim\x95_grip.rtm"
		};
		baseWeapon="CUP_arifle_X95_Grippod";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_X95",
			"CUP_30Rnd_556x45_X95_Tracer_Red",
			"CUP_30Rnd_556x45_X95_Tracer_Green",
			"CUP_30Rnd_556x45_X95_Tracer_Yellow"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=72.760002;
			class UnderBarrelSlot
			{
			};
		};
	};
	class CUP_arifle_Fort224: CUP_arifle_X95
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_X95\CUP_Fort224";
		displayname="$STR_CUP_dn_Fort224";
		picture="CUP\Weapons\CUP_Weapons_X95\Data\UI\gear_fort224_X_CA.paa";
		baseWeapon="CUP_arifle_Fort224";
		magazines[]=
		{
			"CUP_30Rnd_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_Subsonic_545x39_Fort224_M"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"CUP_muzzle_snds_KZRZP_AK545",
					"CUP_muzzle_mfsup_Flashhider_545x39_Black",
					"CUP_muzzle_mfsup_Flashhider_545x39_OD",
					"CUP_muzzle_mfsup_Flashhider_545x39_Tan"
				};
			};
		};
	};
	class CUP_arifle_Fort224_Grippod: CUP_arifle_X95_Grippod
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_X95\CUP_Fort224_grip";
		displayname="$STR_CUP_dn_Fort224_grip";
		picture="CUP\Weapons\CUP_Weapons_X95\Data\UI\gear_fort224_grip_X_CA.paa";
		baseWeapon="CUP_arifle_Fort224_Grippod";
		magazines[]=
		{
			"CUP_30Rnd_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_Subsonic_545x39_Fort224_M"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"CUP_muzzle_snds_KZRZP_AK545",
					"CUP_muzzle_mfsup_Flashhider_545x39_Black",
					"CUP_muzzle_mfsup_Flashhider_545x39_OD",
					"CUP_muzzle_mfsup_Flashhider_545x39_Tan"
				};
			};
		};
	};
	class CUP_arifle_Fort221: arifle_TRG20_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayname="$STR_CUP_dn_Fort221";
		baseWeapon="CUP_arifle_Fort221";
		initSpeed=-0.961496;
		picture="CUP\Weapons\CUP_Weapons_X95\Data\UI\gear_fort221_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_X95\data\fort22x_co.paa"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_Subsonic_545x39_Fort224_M"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"CUP_muzzle_snds_KZRZP_AK545",
					"CUP_muzzle_mfsup_Flashhider_545x39_Black",
					"CUP_muzzle_mfsup_Flashhider_545x39_OD",
					"CUP_muzzle_mfsup_Flashhider_545x39_Tan"
				};
			};
		};
	};
	class CUP_arifle_Fort222: arifle_TRG21_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayname="$STR_CUP_dn_Fort222";
		baseWeapon="CUP_arifle_Fort222";
		initSpeed=-1;
		picture="CUP\Weapons\CUP_Weapons_X95\Data\UI\gear_fort222_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_X95\data\fort22x_co.paa"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_Fort224_M",
			"CUP_30Rnd_Subsonic_545x39_Fort224_M"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"CUP_muzzle_snds_KZRZP_AK545",
					"CUP_muzzle_mfsup_Flashhider_545x39_Black",
					"CUP_muzzle_mfsup_Flashhider_545x39_OD",
					"CUP_muzzle_mfsup_Flashhider_545x39_Tan"
				};
			};
		};
	};
	class CUP_arifle_X95_mars: CUP_arifle_X95
	{
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_MARS";
			};
		};
	};
	class CUP_arifle_X95_Grippod_mars: CUP_arifle_X95_Grippod
	{
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_MARS";
			};
		};
	};
};
