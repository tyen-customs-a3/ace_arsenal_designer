class CfgPatches
{
	class CUP_Weapons_RSASS
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_RSASS_BASE",
			"CUP_srifle_RSASS_Black",
			"CUP_srifle_RSASS_WDL",
			"CUP_srifle_RSASS_WDLNet",
			"CUP_srifle_RSASS_Sand",
			"CUP_srifle_RSASS_Dazzle",
			"CUP_srifle_RSASS_Winter",
			"CUP_srifle_RSASS_Jungle",
			"CUP_srifle_RSASS_Black_LRPS_Flashlight"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
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
class SlotInfo;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class asdg_MuzzleSlot_762;
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_srifle_RSASS_BASE: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		magazines[]=
		{
			"CUP_20Rnd_762x51_B_M110",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
			"CUP_20Rnd_TE1_White_Tracer_762x51_M110"
		};
		magazineWell[]=
		{
			"CBA_762x51_AR10",
			"CBA_762x51_AR10_L",
			"CBA_762x51_AR10_XL"
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_RSASS";
		};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		maxZeroing=1000;
		ACE_barrelTwist=254;
		ACE_barrelLength=264.16;
		ace_railHeightAboveBore=3.0999999;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=119.07;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0.1,0.5};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Center";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.40000001,0.5};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.60000002,0.30000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Center";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.5,0.30000001};
			};
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_CUP_dss_RSASS";
		discreteDistance[]={50,100,200,300,400};
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_M14_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_M14_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00092999998;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.0099999998,
			1
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\reloads\new_MX",
			0.39810717,
			1,
			30
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		inertia=0.5;
		dexterity=1.5;
		cursor="srifle";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\anim\RSASS_anim.rtm"
		};
		model="\CUP\Weapons\CUP_Weapons_RSASS\CUP_RSASS.p3d";
	};
	class CUP_srifle_RSASS_Black: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_RSASS_Black";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_black_upper_co.paa",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_black_lower_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_rsass\data\ui\gear_rsass_black_X_ca.paa";
	};
	class CUP_srifle_RSASS_WDL: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_RSASS_WDL";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_wdl_upper_co.paa",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_wdl_lower_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_rsass\data\ui\gear_rsass_wdl_X_ca.paa";
	};
	class CUP_srifle_RSASS_WDLNet: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_RSASS_WDLNet";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_wdlnet_upper_co.paa",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_wdlnet_lower_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_rsass\data\ui\gear_rsass_wdlnet_X_ca.paa";
	};
	class CUP_srifle_RSASS_Sand: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_RSASS_Sand";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_tan_upper_co.paa",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_tan_lower_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_rsass\data\ui\gear_rsass_tan_X_ca.paa";
	};
	class CUP_srifle_RSASS_Dazzle: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_RSASS_Dazzle";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_dazzle_upper_co.paa",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_dazzle_lower_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_rsass\data\ui\gear_rsass_dzzl_X_ca.paa";
	};
	class CUP_srifle_RSASS_Winter: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_RSASS_Winter";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_winter_upper_co.paa",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_winter_lower_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_rsass\data\ui\gear_rsass_winter_X_ca.paa";
	};
	class CUP_srifle_RSASS_Jungle: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_RSASS_Jungle";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_jungle_upper_co.paa",
			"\CUP\Weapons\CUP_Weapons_RSASS\data\rsass_jungle_lower_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_rsass\data\ui\gear_rsass_jungle_X_ca.paa";
	};
	class CUP_srifle_RSASS_Black_LRPS_Flashlight: CUP_srifle_RSASS_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_LRPS";
			};
			class LinkedItemAcc
			{
				slot="PointerSlot";
				item="acc_Flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
};
