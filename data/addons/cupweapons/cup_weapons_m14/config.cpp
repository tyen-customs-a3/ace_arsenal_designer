class CfgPatches
{
	class CUP_Weapons_M14
	{
		units[]={};
		weapons[]=
		{
			"CUP_muzzle_snds_M14",
			"CUP_srifle_M14",
			"CUP_srifle_M21",
			"CUP_srifle_M21_ris",
			"CUP_srifle_M14_LeupoldMk4_snd",
			"CUP_srifle_M14_LeupoldMk4",
			"CUP_srifle_M21_artel",
			"CUP_srifle_M14_CCO"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_Ammunition"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_muzzle_snds_M14: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_m14";
		picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model="\A3\weapons_f\acc\acca_snds_h_F";
		inertia=0.2;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=12;
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
	};
	class CUP_srifle_M14: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_m14";
		selectionFireAnim="zasleh";
		model="\CUP\Weapons\CUP_Weapons_M14\CUP_M14.p3d";
		magazines[]=
		{
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
			"20Rnd_762x51_Mag",
			"10Rnd_Mk14_762x51_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x51_M14",
			"M14_762x51"
		};
		picture="\CUP\Weapons\CUP_Weapons_M14\data\ui\gear_M14_X_CA.paa";
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_reload",
			1,
			1,
			10
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M14\data\sfx\Dry",
			1,
			1,
			35
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		magazineReloadSwitchPhase=0.14;
		recoil="recoil_dmr_06";
		jsrs_soundeffect="JSRS2_Distance_Effects_M14";
		reloadAction="GestureReloadDMR06";
		reloadTime=0.079999998;
		dispersion=0.00093500002;
		initSpeed=-0.99939501;
		inertia=0.69999999;
		dexterity=1.3;
		aimTransitionSpeed=0.89999998;
		ACE_barrelTwist=305;
		ACE_barrelLength=559;
		ACE_overheating_mrbs=2000;
		ACE_overheating_dispersion=1;
		ACE_overheating_slowdownFactor=1;
		ACE_railHeightAboveBore=2.9000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80.300003;
			class CowsSlot: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.57999998,0.41};
				iconScale=0.12;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountM14: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.28,0.54000002};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.189,0.47299999};
				iconScale=0.19;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				class compatibleItems
				{
					CUP_muzzle_snds_M14=1;
					muzzle_snds_B=1;
					muzzle_snds_B_khk_F=1;
					muzzle_snds_B_snd_F=1;
				};
				iconPosition[]={0.14,0.44};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
		};
		class ItemInfo
		{
			priority=1;
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR06_Shot_SoundSet",
					"DMR06_tail_SoundSet",
					"DMR06_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR06_silencerShot_SoundSet",
					"DMR06_silencerTail_SoundSet",
					"DMR06_silencerInteriorTail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			dispersion=0.00093500002;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR06_Shot_SoundSet",
					"DMR06_tail_SoundSet",
					"DMR06_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR06_silencerShot_SoundSet",
					"DMR06_silencerTail_SoundSet",
					"DMR06_silencerInteriorTail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			dispersion=0.00093500002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
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
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		minRange=2;
		minRangeProbab=0.1;
		midRange=300;
		midRangeProbab=0.69999999;
		maxRange=600;
		maxRangeProbab=0.050000001;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\data\Anim\DMR_06.rtm"
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_m14";
		};
		descriptionShort="$STR_CUP_dss_m14";
	};
	class CUP_srifle_M21: CUP_srifle_M14
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_m21";
		model="\CUP\Weapons\CUP_Weapons_M14\CUP_M14_norail.p3d";
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		class Single: Single
		{
			dispersion=0.00043499999;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=133.86;
			class CowsSlot: CowsSlot
			{
				class compatibleItems
				{
					CUP_optic_artel_m14=1;
				};
			};
		};
	};
	class CUP_srifle_M21_ris: CUP_srifle_M21
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_m21_ris";
		model="\CUP\Weapons\CUP_Weapons_M14\CUP_M14.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CUP_PicatinnyTopMount
			{
			};
		};
	};
	class CUP_srifle_M14_CCO: CUP_srifle_M14
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_CompM2_Black";
			};
		};
	};
	class CUP_srifle_M14_LeupoldMk4_snd: CUP_srifle_M14
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M14";
			};
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="cup_optic_leupoldmk4";
			};
			class LinkedItemBipod
			{
				slot="CUP_PicatinnyUnderMountM14";
				item="bipod_01_F_blk";
			};
		};
	};
	class CUP_srifle_M14_LeupoldMk4: CUP_srifle_M14
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="cup_optic_leupoldmk4";
			};
			class LinkedItemBipod
			{
				slot="CUP_PicatinnyUnderMountM14";
				item="bipod_01_F_blk";
			};
		};
	};
	class CUP_srifle_M21_artel: CUP_srifle_M21
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_artel_m14";
			};
		};
	};
};
