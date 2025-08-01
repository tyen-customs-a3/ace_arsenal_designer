class CfgPatches
{
	class CUP_Weapons_G3
	{
		units[]={};
		weapons[]=
		{
			"CUP_bipod_G3",
			"CUP_bipod_G3SG1",
			"CUP_arifle_G3_Base",
			"CUP_arifle_G3A3_ris",
			"CUP_arifle_G3A3_ris_vfg",
			"CUP_arifle_G3A3_modern_ris",
			"CUP_arifle_G3A3_ris_black",
			"CUP_arifle_G3A3_ris_vfg_black",
			"CUP_arifle_G3A3_modern_ris_black"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_WeaponsData"
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
class UnderBarrelSlot;
class asdg_SlotInfo;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_762;
class asdg_FrontSideRail;
class asdg_UnderSlot: asdg_SlotInfo
{
	class compatibleItems;
};
class CfgWeapons
{
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_bipod_G3: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_bipod_g3";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_accu_bipod_g3_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_G3\CUP_bipod_g3.p3d";
		inertia=0.2;
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="bipod";
			hasBipod=1;
			mass=10;
			soundBipodDeploy[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
				0.70794576,
				1,
				20
			};
			soundBipodFold[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
				0.70794576,
				1,
				20
			};
			soundBipodDown[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
				0.70794576,
				1,
				20
			};
			soundBipodUp[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
				0.70794576,
				1,
				20
			};
		};
	};
	class CUP_bipod_G3SG1: CUP_bipod_G3
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_bipod_g3sg1";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_accu_bipod_g3sg1_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_G3\CUP_bipod_g3sg1.p3d";
	};
	class CUP_arifle_G3_Base: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		displayName="$STR_CUP_dn_g3a3_ris";
		model="CUP\Weapons\CUP_Weapons_G3\CUP_g3a3_ris.p3d";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_g3a3_x_ca.paa";
		descriptionShort="$STR_CUP_dss_g3a3";
		class Library
		{
			libTextDesc="H&K G3 7.62mm Battle Rifle";
		};
		selectionFireAnim="zasleh";
		htMin=1;
		htMax=420;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		dexterity=1.55;
		inertia=0.40000001;
		aimTransitionSpeed=0.89999998;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_G3\data\anim\G3A3_magwell.rtm"
		};
		recoil="CUP_G3_recoil";
		magazines[]=
		{
			"CUP_20Rnd_762x51_G3",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_G3",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_G3",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_G3"
		};
		magazineWell[]=
		{
			"CBA_762x51_G3"
		};
		magazineReloadSwitchPhase=0.5;
		reloadmagazinesound[]=
		{
			"CUP\Weapons\CUP_Weapons_G3\data\sound\reload_g3",
			1,
			1,
			25
		};
		reloadAction="CUP_GestureReloadG3";
		discretedistance[]={100,200,300,400};
		discretedistanceinitindex=2;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4"
		};
		cameradir="eye_look";
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Dry",
			0.25118899,
			1,
			20
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\g3_handguard_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\rail_co.paa"
		};
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
			mass=96.900002;
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_Fal";
		initSpeed=-0.98795998;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=449.57999;
		modes[]=
		{
			"Single",
			"Fullauto",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1",
			"fullauto_medium"
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
					"DMR03_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR03_silencerShot_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.097000003;
			dispersion=0.00043633199;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFireDistance=600;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR03_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR03_silencerShot_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			reloadTime=0.097000003;
			dispersion=0.00043633199;
			minRange=0;
			minRangeProbab=0.1;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
		};
		class single_close_optics1: Single
		{
			showToPlayer=0;
			requiredoptictype=1;
			dispersion="((0.81) * 0.000436332)";
			aiDispersionCoefX=1.4;
			aiDispersionCoefY=1.7;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class single_medium_optics1: Single
		{
			showToPlayer=0;
			requiredoptictype=1;
			aiDispersionCoefX=1.4;
			aiDispersionCoefY=1.7;
			aiRateOfFire=2;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
		};
		class single_far_optics1: Single
		{
			showToPlayer=0;
			requiredoptictype=1;
			dispersion="((0.81) * 0.000436332)";
			aiDispersionCoefX=1.4;
			aiDispersionCoefY=1.7;
			aiRateOfFire=4;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=600;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			requiredoptictype=0;
			aiBurstTerminable=1;
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=500;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
	};
	class CUP_arifle_G3A3_ris: CUP_arifle_G3_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_g3a3_ris";
		model="CUP\Weapons\CUP_Weapons_G3\CUP_g3a3_ris.p3d";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_g3a3_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=96.900002;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPinPoint="center";
				iconPosition[]={0.57800001,0.289};
				iconScale=0.17;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPinPoint="center";
				iconPosition[]={0.133,0.48800001};
				iconScale=0.20999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPinPoint="center";
				iconPosition[]={-0.0099999998,0.426};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"CUP_bipod_G3"
				};
				iconPinPoint="center";
				iconPosition[]={0.46700001,0.676};
				iconScale=0.31999999;
				iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
		};
	};
	class CUP_arifle_G3A3_ris_vfg: CUP_arifle_G3_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_g3a3_vfg_ris";
		model="CUP\Weapons\CUP_Weapons_G3\CUP_g3a3_ris_vfg.p3d";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_g3a3_vfg_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\g3_handguard_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\rail_co.paa",
			"CUP\weapons\CUP_Weapons_WeaponsData\data\tacticool_assets\tacticool_black_co.paa"
		};
		dexterity=1.8;
		inertia=0.30000001;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_G3\data\anim\G3A3_vfg.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=98;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPinPoint="center";
				iconPosition[]={0.57800001,0.289};
				iconScale=0.17;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPinPoint="center";
				iconPosition[]={0.25400001,0.54699999};
				iconScale=0.20999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPinPoint="center";
				iconPosition[]={-0.0099999998,0.426};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				class compatibleItems: compatibleItems
				{
					CUP_bipod_G3=1;
				};
				iconPinPoint="center";
				iconPosition[]={0.338,0.69099998};
				iconScale=0.31999999;
				iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
		};
	};
	class CUP_arifle_G3A3_modern_ris: CUP_arifle_G3A3_ris
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_g3a3_widegrip_ris";
		model="CUP\Weapons\CUP_Weapons_G3\CUP_g3a3_widegrip_ris.p3d";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_g3a3_modern_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_G3\data\anim\G3A3_modern_hg.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\rail_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=96.900002;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"CUP_bipod_G3SG1"
				};
				iconPinPoint="center";
				iconPosition[]={0.189,0.648};
				iconScale=0.31999999;
				iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
		};
	};
	class CUP_arifle_G3A3_ris_black: CUP_arifle_G3A3_ris
	{
		displayName="$STR_CUP_dn_g3a3_ris_black";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_g3a3_black_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_black_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\g3_handguard_black_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\rail_co.paa"
		};
	};
	class CUP_arifle_G3A3_ris_vfg_black: CUP_arifle_G3A3_ris_vfg
	{
		displayName="$STR_CUP_dn_g3a3_vfg_ris_black";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_g3a3_vfg_black_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_black_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\g3_handguard_black_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\rail_co.paa",
			"CUP\weapons\CUP_Weapons_WeaponsData\data\tacticool_assets\tacticool_black_co.paa"
		};
	};
	class CUP_arifle_G3A3_modern_ris_black: CUP_arifle_G3A3_modern_ris
	{
		displayName="$STR_CUP_dn_g3a3_widegrip_ris_black";
		picture="\CUP\Weapons\CUP_Weapons_G3\data\ui\gear_g3a3_modern_black_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_black_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\g3_body_black_co.paa",
			"CUP\Weapons\CUP_Weapons_G3\data\rail_co.paa"
		};
	};
};
