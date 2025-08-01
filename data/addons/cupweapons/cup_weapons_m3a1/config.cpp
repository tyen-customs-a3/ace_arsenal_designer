class CfgPatches
{
	class CUP_Weapons_M3A1
	{
		units[]={};
		weapons[]=
		{
			"CUP_muzzle_snds_M3A1_blk",
			"CUP_muzzle_snds_M3A1",
			"CUP_muzzle_snds_M3A1_grn",
			"CUP_muzzle_snds_M3A1_snd",
			"CUP_smg_M3A1",
			"CUP_smg_M3A1_blk",
			"CUP_smg_M3A1_grn",
			"CUP_smg_M3A1_snd",
			"CUP_smg_M3A1_SD",
			"CUP_smg_M3A1_blk_SD",
			"CUP_smg_M3A1_grn_SD",
			"CUP_smg_M3A1_snd_SD"
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
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class muzzle_snds_H;
class CfgWeapons
{
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_muzzle_snds_M3A1_blk: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="$STR_CUP_dn_muzzle_snds_M3A1_blk";
		picture="\CUP\Weapons\CUP_Weapons_M3A1\data\ui\gear_acca_m3a1_silencer_black_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_M3A1\CUP_m3a1_suppressor_blk.p3d";
		inertia=0.1;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
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
	class CUP_muzzle_snds_M3A1: CUP_muzzle_snds_M3A1_blk
	{
		displayName="$STR_CUP_dn_muzzle_snds_M3A1";
		picture="\CUP\Weapons\CUP_Weapons_M3A1\data\ui\gear_acca_m3a1_silencer_black_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_M3A1\CUP_m3a1_suppressor.p3d";
	};
	class CUP_muzzle_snds_M3A1_grn: CUP_muzzle_snds_M3A1_blk
	{
		displayName="$STR_CUP_dn_muzzle_snds_M3A1_grn";
		picture="\CUP\Weapons\CUP_Weapons_M3A1\data\ui\gear_acca_m3a1_silencer_black_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_M3A1\CUP_m3a1_suppressor_grn.p3d";
	};
	class CUP_muzzle_snds_M3A1_snd: CUP_muzzle_snds_M3A1_blk
	{
		displayName="$STR_CUP_dn_muzzle_snds_M3A1_snd";
		picture="\CUP\Weapons\CUP_Weapons_M3A1\data\ui\gear_acca_m3a1_silencer_black_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_M3A1\CUP_m3a1_suppressor_snd.p3d";
	};
	class CUP_smg_M3A1: Rifle_Base_F
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_M3A1\CUP_m3a1";
		picture="\CUP\Weapons\CUP_Weapons_M3A1\data\ui\gear_m3a1_black_x_ca.paa";
		magazineWell[]=
		{
			"CBA_45acp_grease"
		};
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_M"
		};
		displayName="$STR_CUP_dn_smg_M3A1";
		descriptionShort="$STR_CUP_dss_smg_M3A1";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M3A1\data\Anim\m3a1_anim.rtm"
		};
		fireLightDuration=0;
		fireLightIntensity=0;
		dexterity=1.75;
		inertia=0.30000001;
		aimTransitionSpeed=1.3;
		selectionFireAnim="zasleh";
		reloadAction="CUP_GestureReloadM3A1";
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_M3A1\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M3A1\data\sfx\Dry",
			1,
			1,
			35
		};
		distanceZoomMin=50;
		distanceZoomMax=50;
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_m3a1\data\m3a1_co.paa"
		};
		modes[]=
		{
			"FullAuto",
			"FullAuto_medium"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_MP";
		initSpeed=-1;
		ACE_barrelTwist=240.03;
		ACE_barrelLength=231.14;
		recoil="recoil_smg_05";
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGVermin_Shot_SoundSet",
					"SMGVermin_Tail_SoundSet",
					"SMGVermin_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGVermin_silencerShot_SoundSet",
					"SMGVermin_silencerTail_SoundSet",
					"SMGVermin_silencerInteriorTail_SoundSet"
				};
			};
			soundContinuous=0;
			reloadTime=0.13;
			ffCount=1;
			dispersion=0.003;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab=0.050000001;
		};
		class FullAuto_medium: FullAuto
		{
			burst=2;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				iconPinPoint="center";
				iconPosition[]={0.021,0.36000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				class compatibleItems
				{
					CUP_muzzle_snds_M3A1_blk=1;
					CUP_muzzle_snds_M3A1=1;
					CUP_muzzle_snds_M3A1_grn=1;
					CUP_muzzle_snds_M3A1_snd=1;
				};
			};
			class UnderBarrelSlot
			{
			};
			mass=79.58606;
		};
	};
	class CUP_smg_M3A1_blk: CUP_smg_M3A1
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_BLK_M"
		};
		displayName="$STR_CUP_dn_smg_M3A1_blk";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_m3a1\data\m3a1_blk_co.paa"
		};
	};
	class CUP_smg_M3A1_grn: CUP_smg_M3A1
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_GRN_M"
		};
		displayName="$STR_CUP_dn_smg_M3A1_grn";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_m3a1\data\m3a1_grn_co.paa"
		};
	};
	class CUP_smg_M3A1_snd: CUP_smg_M3A1
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		magazines[]=
		{
			"CUP_30Rnd_45ACP_M3A1_SND_M"
		};
		displayName="$STR_CUP_dn_smg_M3A1_snd";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_m3a1\data\m3a1_snd_co.paa"
		};
	};
	class CUP_smg_M3A1_SD: CUP_smg_M3A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M3A1";
			};
		};
	};
	class CUP_smg_M3A1_blk_SD: CUP_smg_M3A1_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M3A1_blk";
			};
		};
	};
	class CUP_smg_M3A1_grn_SD: CUP_smg_M3A1_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M3A1_grn";
			};
		};
	};
	class CUP_smg_M3A1_snd_SD: CUP_smg_M3A1_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M3A1_snd";
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class CUP_GestureReloadM3A1: Default
		{
			file="\CUP\Weapons\CUP_Weapons_M3A1\data\anim\m3a1_reload.rtm";
			looped=0;
			speed=0.40000001;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadM3A1Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_M3A1\data\anim\m3a1_reload.rtm";
			looped=0;
			speed=0.34999999;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadM3A1_Context: CUP_GestureReloadM3A1
		{
			mask="handsWeapon_context";
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_GestureReloadM3A1="CUP_GestureReloadm3a1";
		CUP_GestureReloadM3A1Prone="CUP_GestureReloadm3a1Prone";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class NoActions: ManActions
		{
			CUP_GestureReloadM3A1[]=
			{
				"CUP_GestureReloadM3A1",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			CUP_GestureReloadM3A1[]=
			{
				"CUP_GestureReloadM3A1Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM3A1[]=
			{
				"CUP_GestureReloadM3A1_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM3A1[]=
			{
				"CUP_GestureReloadM3A1_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM3A1[]=
			{
				"CUP_GestureReloadM3A1",
				"Gesture"
			};
		};
	};
};
class CfgMagazineWells
{
	class CBA_45acp_grease
	{
		CUP_mags[]=
		{
			"CUP_30Rnd_45ACP_M3A1_M",
			"CUP_30Rnd_45ACP_Green_Tracer_M3A1_M",
			"CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_M",
			"CUP_30Rnd_45ACP_Red_Tracer_M3A1_M",
			"CUP_30Rnd_45ACP_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_Green_Tracer_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_Red_Tracer_M3A1_BLK_M",
			"CUP_30Rnd_45ACP_M3A1_GRN_M",
			"CUP_30Rnd_45ACP_Green_Tracer_M3A1_GRN_M",
			"CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_GRN_M",
			"CUP_30Rnd_45ACP_Red_Tracer_M3A1_GRN_M",
			"CUP_30Rnd_45ACP_M3A1_SND_M",
			"CUP_30Rnd_45ACP_Green_Tracer_M3A1_SND_M",
			"CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_SND_M",
			"CUP_30Rnd_45ACP_Red_Tracer_M3A1_SND_M"
		};
	};
};
