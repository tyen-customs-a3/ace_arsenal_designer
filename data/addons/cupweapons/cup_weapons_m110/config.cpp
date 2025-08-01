class CfgPatches
{
	class CUP_Weapons_M110
	{
		units[]={};
		weapons[]=
		{
			"CUP_muzzle_snds_M110",
			"CUP_muzzle_snds_M110_black",
			"CUP_muzzle_snds_M110_woodland",
			"CUP_srifle_M110",
			"CUP_srifle_M110_black",
			"CUP_srifle_M110_woodland",
			"CUP_srifle_m110_kac",
			"CUP_srifle_m110_kac_black",
			"CUP_srifle_m110_kac_woodland",
			"CUP_srifle_M110_ANPAS13c2",
			"CUP_srifle_M110_ANPVS10",
			"CUP_srifle_M110_Shortdot_bipod_snds"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_WeaponsData"
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
	class CUP_muzzle_snds_M110: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_m110";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_accm_m110_suppressor_tan_ca.paa";
		model="CUP\Weapons\CUP_Weapons_M110\CUP_M110_Silencer_tan";
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
		inertia=0.2;
	};
	class CUP_muzzle_snds_M110_black: CUP_muzzle_snds_M110
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_m110_black";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_accm_m110_suppressor_black_ca.paa";
		model="CUP\Weapons\CUP_Weapons_M110\CUP_M110_Silencer_black";
	};
	class CUP_muzzle_snds_M110_woodland: CUP_muzzle_snds_M110
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_m110_woodland";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_accm_m110_suppressor_woodland_ca.paa";
		model="CUP\Weapons\CUP_Weapons_M110\CUP_M110_Silencer_woodland";
	};
	class CUP_srifle_M110: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=420;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="$STR_CUP_dn_m110_prs";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_m110_prs_tan_x_ca.paa";
		cursor="srifle";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M110\data\m110_tan_co.paa",
			"CUP\Weapons\CUP_Weapons_M110\data\prs_tan_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_tan_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\magpul_afg_grip\magpul_afg_tan_co.paa"
		};
		selectionFireAnim="zasleh";
		model="CUP\Weapons\CUP_Weapons_M110\CUP_M110_PRS";
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
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_M110\data\anim\M110_AFG.rtm"
		};
		reloadTime=2;
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		class WeaponSlotsInfo
		{
			mass=140.8;
			class CowsSlot: CUP_PicatinnyTopMount
			{
				iconPinPoint="center";
				iconPosition[]={0.55699998,0.301};
				iconScale=0.17;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.301,0.43700001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"CUP_muzzle_snds_M110",
					"CUP_muzzle_snds_M110_black",
					"CUP_muzzle_snds_M110_woodland"
				};
				iconPinPoint="center";
				iconPosition[]={0.092,0.43000001};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class UnderBarrelSlot: CUP_PicatinnyUnderMount
			{
				iconPinPoint="center";
				iconPosition[]={0.32800001,0.69099998};
				iconScale=0.28;
				iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
			allowedSlots[]={};
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
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		class ItemInfo
		{
			priority=1;
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload",
			1,
			1,
			10
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M110\data\sfx\Dry",
			1,
			1,
			35
		};
		reloadAction="GestureReloadSPAR_01";
		recoil="CUP_M110_recoil";
		jsrs_soundeffect="JSRS2_Distance_Effects_BigSniper";
		ACE_barrelTwist=279.39999;
		ACE_barrelLength=508;
		ace_railHeightAboveBore=3;
		initSpeed=-0.98558003;
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		class Single: Mode_SemiAuto
		{
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
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.085000001;
			dispersion=0.00057999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69;
			maxRange=500;
			maxRangeProbab=0.045000002;
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
			maxRangeProbab=0.0089999996;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69;
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
		class Library
		{
			libTextDesc="$STR_CUP_lib_m110";
		};
		descriptionShort="$STR_CUP_dss_m110";
	};
	class CUP_srifle_M110_black: CUP_srifle_M110
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_m110_prs_black";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_m110_prs_black_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M110\data\m110_black_co.paa",
			"CUP\Weapons\CUP_Weapons_M110\data\prs_black_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\magpul_afg_grip\magpul_afg_co.paa"
		};
	};
	class CUP_srifle_M110_woodland: CUP_srifle_M110
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_m110_prs_woodland";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_m110_prs_woodland_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M110\data\m110_woodland_co.paa",
			"CUP\Weapons\CUP_Weapons_M110\data\prs_woodland_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_olive_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\magpul_afg_grip\magpul_afg_od_co.paa"
		};
	};
	class CUP_srifle_m110_kac: CUP_srifle_M110
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_m110";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_m110_tan_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_M110\data\anim\M110.rtm"
		};
		model="CUP\Weapons\CUP_Weapons_M110\CUP_M110";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M110\data\m110_tan_co.paa",
			"CUP\Weapons\CUP_Weapons_M110\data\m110_tan_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_tan_co.paa"
		};
	};
	class CUP_srifle_m110_kac_black: CUP_srifle_m110_kac
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_m110_black";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_m110_black_x_ca.paa";
		model="CUP\Weapons\CUP_Weapons_M110\CUP_M110";
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M110\data\m110_black_co.paa",
			"CUP\Weapons\CUP_Weapons_M110\data\m110_black_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_co.paa"
		};
	};
	class CUP_srifle_m110_kac_woodland: CUP_srifle_m110_kac
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_m110_woodland";
		picture="\CUP\Weapons\CUP_Weapons_M110\data\ui\gear_m110_woodland_x_ca.paa";
		model="CUP\Weapons\CUP_Weapons_M110\CUP_M110";
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M110\data\m110_woodland_co.paa",
			"CUP\Weapons\CUP_Weapons_M110\data\m110_woodland_co.paa",
			"cup\weapons\cup_weapons_weaponsdata\data\ris_cover\rail_cover_olive_co.paa"
		};
	};
	class CUP_srifle_M110_ANPAS13c2: CUP_srifle_M110
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AN_PAS_13c2";
			};
			class LinkedItemBipod
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_VLTOR_Modpod";
			};
		};
	};
	class CUP_srifle_M110_ANPVS10: CUP_srifle_M110
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AN_PVS_10";
			};
			class LinkedItemBipod
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_VLTOR_Modpod";
			};
		};
	};
	class CUP_srifle_M110_Shortdot_bipod_snds: CUP_srifle_M110_black
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_11_4x20_PM";
			};
			class LinkedItemBipod
			{
				slot="UnderBarrelSlot";
				item="CUP_bipod_VLTOR_Modpod_black";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_M110_black";
			};
		};
	};
};
