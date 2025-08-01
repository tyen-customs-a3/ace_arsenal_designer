class CfgPatches
{
	class CUP_Weapons_AWM
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_AWM_Base",
			"CUP_muzzle_snds_AWM",
			"CUP_srifle_AWM_Base",
			"CUP_srifle_AWM_des",
			"CUP_srifle_AWM_wdl",
			"CUP_srifle_AWM_blk",
			"CUP_srifle_G22_des",
			"CUP_srifle_G22_wdl",
			"CUP_srifle_G22_blk",
			"CUP_srifle_AWM_des_SBPMII",
			"CUP_srifle_G22_des_SBPMII",
			"CUP_srifle_G22_wdl_SBPMII",
			"CUP_srifle_AWM_wdl_SBPMII"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_West_Attachments",
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
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class CfgSounds
{
	class CUP_bolt_AWM
	{
		name="CUP_bolt_AWM";
		Sound[]=
		{
			"CUP\Weapons\CUP_Weapons_AWM\data\sfx\Rechamber",
			1,
			1,
			15
		};
		titles[]={};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_muzzle_snds_AWM: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_awm";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="\A3\weapons_f\acc\acca_snds_h_F";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=12.4;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
	};
	class CUP_srifle_AWM_Base: Rifle_Long_Base_F
	{
		class EventHandlers
		{
			fired="_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction="CUP_GestureRechamberAWM";
			sound="CUP_bolt_AWM";
			soundLocation="RightHandMiddle1";
			delay=0.02;
			onEmpty=0;
			hasOptic=1;
			cartridgeType="FxCartridge_338_Ball";
			cartridgeEjectPosition[]={-0.0099999998,0.0099999998,0.1};
			cartridgeEjectVelocity[]={0,1.2,0.5};
			cartridgeEjectDelay=0.54000002;
		};
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=0;
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_AWM\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_AWM\data\sfx\Dry",
			1,
			1,
			35
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_1",
			0.25118864,
			1,
			10
		};
		dexterity=1.7;
		inertia=0.69999999;
		aimTransitionSpeed=0.69999999;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_AWM\data\anim\AWM.rtm"
		};
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=2;
		selectionFireAnim="zasleh";
		magazines[]=
		{
			"CUP_5Rnd_86x70_L115A1"
		};
		magazineWell[]=
		{
			"CBA_338LM_AI"
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		reloadAction="CUP_GestureReloadAWM";
		maxZeroing=2000;
		cursor="srifle";
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.89125103,
			1,
			25
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.89125103,
			1,
			25
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.89125103,
			1,
			25
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.89125103,
			1,
			25
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.79432797,
			1,
			25
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.79432797,
			1,
			25
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.79432797,
			1,
			25
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.79432797,
			1,
			25
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.707946,
			1,
			25
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.707946,
			1,
			25
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.707946,
			1,
			25
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.707946,
			1,
			25
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		initSpeed=-1.00547;
		jsrs_soundeffect="JSRS2_Distance_Effects_M24";
		ACE_barrelTwist=279.39999;
		ACE_barrelLength=685.79999;
		ace_railHeightAboveBore=1.7;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_BoltActions_Closure_SoundSet",
					"CUP_BoltActions_Shot_SoundSet",
					"CUP_BoltActions_Louder_Tail_SoundSet",
					"CUP_SNIPER2_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_BoltActions_Closure_SoundSet",
					"CUP_M2010_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			dispersion=0.00047999999;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
			reloadTime=1.666;
			backgroundReload=1;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=152.10001;
			class CUP_PicatinnyTopMountAWM: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.62,0.46000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"CUP_muzzle_snds_AWM"
				};
				iconPosition[]={0.14,0.49000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class CUP_PicatinnyUnderMountAWM: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.47999999,0.55000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			class CowsSLot
			{
			};
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_awm";
		};
		descriptionShort="$STR_CUP_dss_awm";
		recoil="CUP_AWM_recoil";
	};
	class CUP_srifle_AWM_des: CUP_srifle_AWM_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_AWM\CUP_awm.p3d";
		picture="\CUP\Weapons\CUP_Weapons_AWM\data\UI\gear_awm_d_x_ca.paa";
		displayName="$STR_CUP_dn_awm_d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_awm\data\awcstock_FDE_co.paa",
			"\cup\weapons\cup_weapons_awm\data\AWC_Scope_co.paa",
			"\cup\weapons\cup_weapons_awm\data\magnumbits_co.paa"
		};
	};
	class CUP_srifle_AWM_wdl: CUP_srifle_AWM_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_AWM\data\UI\gear_awm_w_x_ca.paa";
		displayName="$STR_CUP_dn_awm_w";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_awm\data\awcstock_OD_co.paa",
			"\cup\weapons\cup_weapons_awm\data\AWC_Scope_co.paa",
			"\cup\weapons\cup_weapons_awm\data\magnumbits_co.paa"
		};
	};
	class CUP_srifle_AWM_blk: CUP_srifle_AWM_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_AWM\data\UI\gear_awm_b_x_ca.paa";
		displayName="$STR_CUP_dn_awm_b";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_awm\data\awcstock_blk_co.paa",
			"\cup\weapons\cup_weapons_awm\data\AWC_Scope_co.paa",
			"\cup\weapons\cup_weapons_awm\data\magnumbits_co.paa"
		};
	};
	class CUP_srifle_G22_des: CUP_srifle_AWM_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		descriptionShort="$STR_CUP_dss_g22";
		displayName="$STR_CUP_dn_g22_d";
		magazines[]=
		{
			"CUP_5Rnd_762x67_G22"
		};
		magazineWell[]=
		{
			"CBA_300WM_AICS"
		};
	};
	class CUP_srifle_G22_wdl: CUP_srifle_AWM_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		descriptionShort="$STR_CUP_dss_g22";
		displayName="$STR_CUP_dn_g22_w";
		magazines[]=
		{
			"CUP_5Rnd_762x67_G22"
		};
		magazineWell[]=
		{
			"CBA_300WM_AICS"
		};
	};
	class CUP_srifle_G22_blk: CUP_srifle_AWM_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		descriptionShort="$STR_CUP_dss_g22";
		displayName="$STR_CUP_dn_g22_b";
		magazines[]=
		{
			"CUP_5Rnd_762x67_G22"
		};
		magazineWell[]=
		{
			"CBA_300WM_AICS"
		};
	};
	class CUP_srifle_AWM_des_SBPMII: CUP_srifle_AWM_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAWM";
				item="CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountAWM";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_G22_des_SBPMII: CUP_srifle_G22_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAWM";
				item="CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountAWM";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_G22_wdl_SBPMII: CUP_srifle_G22_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAWM";
				item="CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountAWM";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_AWM_wdl_SBPMII: CUP_srifle_AWM_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAWM";
				item="CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountAWM";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
};
