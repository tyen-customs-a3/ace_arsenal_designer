class CfgPatches
{
	class CUP_Weapons_MG3
	{
		units[]={};
		weapons[]=
		{
			"CUP_lmg_MG3",
			"CUP_lmg_MG3_rail",
			"CUP_lmg_MG3_M145"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_West_Attachments"
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
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_lmg_MG3: Rifle_Long_Base_F
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
		model="\CUP\Weapons\CUP_Weapons_MG3\CUP_MG3_norail.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_MG3\anim\MG3_handanim.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_MG3\ui\gear_mg3_X_ca.paa";
		recoil="CUP_MG3_recoil";
		recoilProne="CUP_MG3_recoil_prone";
		UIPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName="$STR_CUP_dn_lmg_MG3";
		descriptionShort="$STR_CUP_dss_lmg_MG3";
		discreteDistance[]={100,200,300,400,500,600,800,900,1000,1100,1200};
		discreteDistanceInitIndex=2;
		cursor="mg";
		cursorAim="EmptyCursor";
		inertia=0.89999998;
		dexterity=1.8;
		aimTransitionSpeed=0.60000002;
		jsrs_soundeffect="JSRS2_Distance_Effects_MG3";
		initSpeed=-1;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=630;
		ACE_overheating_mrbs=2750;
		ACE_overheating_dispersion=1;
		ACE_overheating_slowdownFactor=2;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=260;
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
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
					"CUP_M240_Closure_SoundSet",
					"CUP_M240_Shot_SoundSet",
					"CUP_mmg1_Tail_SoundSet"
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
			reloadTime=0.046;
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
			"\CUP\Weapons\CUP_Weapons_MG3\sfx\Reload",
			0.80000001,
			1,
			18
		};
		drySound[]=
		{
			"\CUP\Weapons\CUP_Weapons_MG3\sfx\Dry",
			1.77828,
			1,
			1500
		};
		magazines[]=
		{
			"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",
			"CUP_120Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M"
		};
		reloadAction="CUP_GestureReloadMG3";
		magazineReloadTime=1;
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				effectName="MachineGunEject1";
				positionName="linkstart";
				directionName="linkend";
			};
			class SmokeEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class CUP_lmg_MG3_rail: CUP_lmg_MG3
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_lmg_MG3_rail";
		model="\CUP\Weapons\CUP_Weapons_MG3\CUP_MG3.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountMG3: CUP_PicatinnyTopMount
			{
			};
			class CUP_PicatinnySideMountMG3: CUP_PicatinnySideMount
			{
			};
		};
	};
	class CUP_lmg_MG3_M145: CUP_lmg_MG3_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ElcanM145";
			};
		};
	};
};
