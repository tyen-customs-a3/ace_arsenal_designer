class CfgPatches
{
	class CUP_Weapons_SVD
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_SVD",
			"CUP_srifle_SVD_des",
			"CUP_srifle_SVD_wdl",
			"CUP_srifle_SVD_top_rail",
			"CUP_srifle_SVD_des_top_rail",
			"CUP_srifle_SVD_wdl_top_rail",
			"CUP_SVD_camo_g",
			"CUP_SVD_camo_d",
			"CUP_SVD_camo_g_half",
			"CUP_SVD_camo_d_half",
			"CUP_srifle_SVD_pso",
			"CUP_srifle_SVD_Des_pso",
			"CUP_srifle_SVD_NSPU",
			"CUP_srifle_SVD_des_ghillie_pso",
			"CUP_srifle_SVD_wdl_ghillie"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_East_Attachments"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CUP_PicatinnyTopShortMount;
class ItemCore;
class InventoryFlashLightItem_Base_F;
class asdg_MuzzleSlot_762R_SVD;
class asdg_OpticSideRail_SVD;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_srifle_SVD: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_SVD\CUP_svd.p3d";
		dexterity=1.5700001;
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		initSpeed=-1;
		displayName="$STR_CUP_dn_svd";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_SVD\Data\anim\svd.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_X_ca.paa";
		cursor="srifle";
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_SVD";
		ACE_barrelTwist=238.75999;
		ACE_barrelLength=619.76001;
		reloadAction="GestureReloadDMR04";
		magazineReloadSwitchPhase=0.161616;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoMag"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\cup_weapons_svd\data\svd_body_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_grips_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_magazine_co.paa"
		};
		discreteDistance[]={440,100,200,300,400,500,600,700,800,900,1000,1100,1200};
		discreteDistanceInitIndex=3;
		maxZeroing=1200;
		cameraDir="eye_look";
		discreteDistanceCameraPoint[]=
		{
			"eye_440",
			"eye_100",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000",
			"eye_1100",
			"eye_1200"
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
					"CUP_svd_Closure_SoundSet",
					"CUP_akm_Shot_SoundSet",
					"CUP_mmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_svd_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.15000001;
			dispersion=0.00025000001;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
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
			mass=77.800003;
			class CUP_DovetailMount_SVD: asdg_OpticSideRail_SVD
			{
				iconPosition[]={0.55000001,0.47999999};
				iconScale=0.14;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"CUP_SVD_camo_g",
					"CUP_SVD_camo_d",
					"CUP_SVD_camo_g_half",
					"CUP_SVD_camo_d_half"
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762R_SVD
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0.16,0.49000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
		};
		autoFire=0;
		aiRateOfFire=9;
		aiRateOfFireDistance=1300;
		magazines[]=
		{
			"CUP_10Rnd_762x54_SVD_M"
		};
		magazineWell[]=
		{
			"CBA_762x54R_SVD"
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_SVD\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_SVD\data\sfx\Dry",
			1,
			1,
			35
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_svd";
		};
		descriptionShort="$STR_CUP_dss_svd";
		recoil="CUP_SVD_recoil";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class CUP_srifle_SVD_top_rail: CUP_srifle_SVD
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="CUP\Weapons\CUP_Weapons_SVD\CUP_svd_top_rail.p3d";
		displayName="$STR_CUP_dn_svd_top_rail";
		scope=2;
		class WeaponSlotsInfo
		{
			mass=77.800003;
			class CUP_PicatinnyTopMount_SVD: CUP_PicatinnyTopShortMount
			{
				iconPosition[]={0.55000001,0.47999999};
				iconScale=0.14;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"CUP_SVD_camo_g",
					"CUP_SVD_camo_d",
					"CUP_SVD_camo_g_half",
					"CUP_SVD_camo_d_half"
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_762R_SVD
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0.16,0.49000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			allowedSlots[]={901};
		};
	};
	class CUP_srifle_SVD_des: CUP_srifle_SVD
	{
		author="$STR_CUP_AUTHOR_STRING";
		dexterity=1.5700001;
		displayName="$STR_CUP_dn_svd_d";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_desert_X_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoMag"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\cup_weapons_svd\data\svd_body_d_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_grips_d_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_magazine_d_co.paa"
		};
	};
	class CUP_srifle_SVD_wdl: CUP_srifle_SVD
	{
		author="$STR_CUP_AUTHOR_STRING";
		dexterity=1.5700001;
		displayName="$STR_CUP_dn_svd_w";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_woodland_X_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoMag"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\cup_weapons_svd\data\svd_body_w_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_grips_w_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_magazine_w_co.paa"
		};
	};
	class CUP_srifle_SVD_des_top_rail: CUP_srifle_SVD_top_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		dexterity=1.5700001;
		displayName="$STR_CUP_dn_svd_d_top_rail";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_desert_X_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoMag"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\cup_weapons_svd\data\svd_body_d_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_grips_d_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_magazine_d_co.paa"
		};
	};
	class CUP_srifle_SVD_wdl_top_rail: CUP_srifle_SVD_top_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		dexterity=1.5700001;
		displayName="$STR_CUP_dn_svd_w_top_rail";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_woodland_X_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoMag"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\cup_weapons_svd\data\svd_body_w_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_grips_w_co.paa",
			"\CUP\Weapons\cup_weapons_svd\data\svd_magazine_w_co.paa"
		};
	};
	class CUP_srifle_SVD_des_ghillie_pso: CUP_srifle_SVD_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		inertia=0.80000001;
		dexterity=1.5700001;
		displayName="$STR_CUP_dn_svd_d";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_desert_X_ca.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMount_SVD";
				item="CUP_optic_PSO_1";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_SVD_camo_d";
			};
		};
	};
	class CUP_srifle_SVD_wdl_ghillie: CUP_srifle_SVD_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		dexterity=1.5700001;
		displayName="$STR_CUP_dn_svd";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_desert_X_ca.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMount_SVD";
				item="CUP_optic_PSO_1";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_SVD_camo_g";
			};
		};
	};
	class CUP_SVD_camo_g: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		inertia=0.1;
		displayName="$STR_CUP_dn_camo_svd_w";
		descriptionUse="Wrap";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_camo_g.paa";
		model="CUP\Weapons\CUP_Weapons_SVD\CUP_SVD_camo_g.p3d";
		descriptionShort="$STR_CUP_dss_camo_svd";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			RMBhint="Wrap";
			class FlashLight
			{
				color[]={0,0,0};
				ambient[]={0,0,0};
				position="";
				direction="";
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=0;
				intensity=0;
				useFlare=0;
				dayLight=0;
				FlareSize=0;
				onlyInNvg=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
				};
				scale[]={0};
			};
		};
	};
	class CUP_SVD_camo_g_half: CUP_SVD_camo_g
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_camo_svd_w_half";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_camo_g_half.paa";
		model="CUP\Weapons\CUP_Weapons_SVD\CUP_SVD_camo_g_half.p3d";
	};
	class CUP_SVD_camo_d: CUP_SVD_camo_g
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_camo_svd_d";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_camo_d.paa";
		model="CUP\Weapons\CUP_Weapons_SVD\CUP_SVD_camo_d.p3d";
	};
	class CUP_SVD_camo_d_half: CUP_SVD_camo_g
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_camo_svd_d_half";
		picture="\CUP\Weapons\CUP_Weapons_SVD\data\ui\gear_svd_camo_d_half.paa";
		model="CUP\Weapons\CUP_Weapons_SVD\CUP_SVD_camo_d_half.p3d";
	};
	class CUP_srifle_SVD_pso: CUP_srifle_SVD
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMount_SVD";
				item="CUP_optic_PSO_1";
			};
		};
	};
	class CUP_srifle_SVD_Des_pso: CUP_srifle_SVD_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMount_SVD";
				item="CUP_optic_PSO_1";
			};
		};
	};
	class CUP_srifle_SVD_NSPU: CUP_srifle_SVD
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMount_SVD";
				item="CUP_optic_NSPU";
			};
		};
	};
};
