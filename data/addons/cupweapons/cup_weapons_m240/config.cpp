class CfgPatches
{
	class CUP_Weapons_M240
	{
		units[]={};
		weapons[]=
		{
			"CUP_lmg_M240",
			"CUP_lmg_M240_norail",
			"CUP_lmg_M240_B",
			"CUP_lmg_L7A2",
			"CUP_lmg_L7A2_Flat",
			"CUP_lmg_FNMAG",
			"CUP_lmg_FNMAG_RIS",
			"CUP_lmg_FNMAG_RIS_modern",
			"CUP_lmg_M240_ElcanM143",
			"CUP_lmg_M240_B_ElcanM143_ANPEQ15"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_West_Attachments",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_Ammunition"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
	class CUP_Weapons_L7A2
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]={};
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
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_lmg_M240: Rifle_Long_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
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
		scope=2;
		selectionFireAnim="zasleh";
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_M240G.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_M240_X_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName="$STR_CUP_dn_m240g";
		class Library
		{
			libTextDesc="$STR_CUP_lib_m240";
		};
		descriptionShort="$STR_CUP_dss_m240";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceInitIndex=2;
		maxZeroing=1500;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M240\data\anim\m240.rtm"
		};
		cursor="mg";
		cursorAim="EmptyCursor";
		inertia=0.89999998;
		dexterity=1.8;
		aimTransitionSpeed=0.60000002;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=276;
			class CUP_PicatinnyTopMountM240: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.60588235,0.3764706};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_M240";
		initSpeed=-1;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=630;
		ACE_overheating_mrbs=1750;
		ACE_overheating_dispersion=1;
		ACE_overheating_slowdownFactor=1;
		ACE_overheating_allowSwapBarrel=1;
		deployedPivot="bipod";
		hasBipod=1;
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
		dispersion=9.9999997e-006;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class Manual: Mode_FullAuto
		{
			dispersion=0.00079999998;
			maxRecoilSway=3;
			swayDecaySpeed=3;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M240_Closure_SoundSet",
					"CUP_M240_Shot_SoundSet",
					"CUP_mmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m240_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_Rifle1_SD_Tail_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.57999998;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			reloadTime=0.075000003;
			ffCount=3;
		};
		class Close: Manual
		{
			burst=13;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.57999998;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: Close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.57999998;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: Close
		{
			burst=12;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.57999998;
			maxRange=600;
			maxRangeProbab=0.039999999;
		};
		class Far: Close
		{
			burst=16;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefY=21;
		aiDispersionCoefX=21;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_reload",
			1,
			1,
			10
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M240\data\sfx\Dry",
			1,
			1,
			35
		};
		magazines[]=
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M"
		};
		magazineWell[]=
		{
			"CBA_762x51_LINKS",
			"M240_762x51"
		};
		magazineReloadSwitchPhase=0.5;
		reloadAction="GestureReloadMMG01";
		magazineReloadTime=1;
		recoil="CUP_M240_recoil";
		recoilProne="CUP_M240_recoil_prone";
		class GunParticles
		{
			class FirstEffect
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="RifleAssaultCloud";
			};
			class SecondEffect
			{
				effectName="MachineGunEject";
				positionName="linkstart";
				directionName="linkend";
			};
		};
	};
	class CUP_lmg_M240_norail: CUP_lmg_M240
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_m240";
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_M240.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_M240_norail_X_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=276;
			class CUP_PicatinnyTopMountM240
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
	};
	class CUP_lmg_M240_B: CUP_lmg_M240
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_m240b";
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_M240B.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_M240B_X_ca.paa";
		recoil="CUP_M240B_recoil";
		recoilProne="CUP_M240B_recoil_prone";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountM240: CUP_PicatinnyTopMountM240
			{
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPosition[]={0.43000001,0.49000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
	};
	class CUP_lmg_L7A2: CUP_lmg_M240
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_l7a2";
		class Library
		{
			libTextDesc="$STR_CUP_lib_l7a2";
		};
		descriptionShort="$STR_CUP_dss_l7a2";
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_L7A2.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_l7a2_X_ca.paa";
	};
	class CUP_lmg_L7A2_Flat: CUP_lmg_L7A2
	{
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_l7a2_flat";
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_L7A2_Flat.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_l7a2_flat_X_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=276;
			class CUP_PicatinnyTopMountM240
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
	};
	class CUP_lmg_FNMAG: CUP_lmg_L7A2_Flat
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_mag58";
		class Library
		{
			libTextDesc="$STR_CUP_lib_mag58";
		};
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_FNMAG.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_MAG_X_ca.paa";
		recoil="CUP_FNMAG_recoil";
		recoilProne="CUP_FNMAG_recoil_prone";
	};
	class CUP_lmg_FNMAG_RIS: CUP_lmg_M240
	{
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_mag58_ris";
		class Library
		{
			libTextDesc="$STR_CUP_lib_mag58";
		};
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_FNMAG_Rail.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_MAG_RIS_X_ca.paa";
		recoil="CUP_FNMAG_recoil";
		recoilProne="CUP_FNMAG_recoil_prone";
	};
	class CUP_lmg_FNMAG_RIS_modern: CUP_lmg_M240
	{
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_mag58_ris_plastic";
		class Library
		{
			libTextDesc="$STR_CUP_lib_mag58";
		};
		model="\CUP\Weapons\CUP_Weapons_M240\model\CUP_L7A2.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M240\data\ui\gear_MAG_RIS_plastic_X_ca.paa";
		recoil="CUP_FNMAG_recoil";
		recoilProne="CUP_FNMAG_recoil_prone";
	};
	class CUP_lmg_M240_ElcanM143: CUP_lmg_M240
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM240";
				item="CUP_optic_ElcanM145";
			};
		};
	};
	class CUP_lmg_M240_B_ElcanM143_ANPEQ15: CUP_lmg_M240_B
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM240";
				item="CUP_optic_ElcanM145";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15";
			};
		};
	};
};
