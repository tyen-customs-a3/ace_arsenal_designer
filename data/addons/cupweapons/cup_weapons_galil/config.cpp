class CfgPatches
{
	class CUP_Weapons_Galil
	{
		units[]={};
		weapons[]=
		{
			"CUP_arifle_GALIL_BASE",
			"CUP_arifle_Galil_black",
			"CUP_arifle_Galil_556_black",
			"CUP_arifle_Galil_SAR_black",
			"CUP_arifle_Galil_SAR_black"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
		magazines[]=
		{
			"CUP_25Rnd_762x51_Galil_Mag",
			"CUP_25Rnd_762x51_Red_Tracers_Galil_Mag",
			"CUP_25Rnd_762x51_Green_Tracers_Galil_Mag",
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_35Rnd_556x45_Green_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Galil_Mag",
			"CUP_50Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Green_Tracer_Galil_Mag"
		};
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
class CfgMagazines
{
	class CA_Magazine;
	class CUP_25Rnd_762x51_Galil_Mag: CA_Magazine
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName="$STR_CUP_dn_galil_25rnd_M";
		displayNameShort="$STR_CUP_dns_76251";
		count=25;
		tracersEvery=0;
		ammo="B_762x51_Ball";
		mass=10.5;
		initSpeed=850;
		descriptionShort="$STR_CUP_dss_galil_25rnd_M";
		model="\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_762_mag.p3d";
		modelSpecial="\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_762_mag.p3d";
		modelSpecialIsProxy=1;
	};
	class CUP_25Rnd_762x51_Red_Tracers_Galil_Mag: CUP_25Rnd_762x51_Galil_Mag
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		tracersEvery=1;
		ammo="B_762x51_Tracer_Red";
		displayName="$STR_CUP_dn_galil_25rnd_te1_r_M";
		displayNameShort="$STR_CUP_dns_76251_Red";
	};
	class CUP_25Rnd_762x51_Green_Tracers_Galil_Mag: CUP_25Rnd_762x51_Galil_Mag
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		tracersEvery=1;
		ammo="B_762x51_Tracer_Green";
		displayName="$STR_CUP_dn_galil_25rnd_te1_g_M";
		displayNameShort="$STR_CUP_dns_76251_Green";
	};
	class CUP_35Rnd_556x45_Galil_Mag: CA_Magazine
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName="$STR_CUP_dn_galil_35rnd_M";
		displayNameShort="$STR_CUP_dns_55645";
		count=35;
		tracersEvery=0;
		lastRoundsTracer=4;
		ammo="B_556x45_Ball";
		mass=8.5;
		initSpeed=950;
		descriptionShort="$STR_CUP_dss_galil_35rnd_M";
		model="\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_556_35_mag.p3d";
		modelSpecial="\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_556_35_mag.p3d";
		modelSpecialIsProxy=1;
	};
	class CUP_35Rnd_556x45_Red_Tracer_Galil_Mag: CUP_35Rnd_556x45_Galil_Mag
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		tracersEvery=1;
		ammo="B_556x45_Ball_Tracer_Red";
		displayName="$STR_CUP_dn_galil_35rnd_te1_r_M";
		displayNameShort="$STR_CUP_dns_55645_Red";
	};
	class CUP_35Rnd_556x45_Green_Tracer_Galil_Mag: CUP_35Rnd_556x45_Galil_Mag
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		tracersEvery=1;
		ammo="B_556x45_Ball_Tracer_Green";
		displayName="$STR_CUP_dn_galil_35rnd_te1_g_M";
		displayNameShort="$STR_CUP_dns_55645_Green";
	};
	class CUP_50Rnd_556x45_Galil_Mag: CA_Magazine
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		displayName="$STR_CUP_dn_galil_50rnd_M";
		displayNameShort="$STR_CUP_dns_55645";
		count=50;
		tracersEvery=0;
		lastRoundsTracer=4;
		ammo="B_556x45_Ball";
		initSpeed=950;
		mass=14;
		descriptionShort="$STR_CUP_dss_galil_50rnd_M";
		model="\CUP\Weapons\CUP_Weapons_Galil\magazines\galil_556_50_mag.p3d";
		modelSpecial="\CUP\Weapons\CUP_Weapons_Galil\proxies\galil_556_50_mag.p3d";
		modelSpecialIsProxy=1;
	};
	class CUP_50Rnd_556x45_Red_Tracer_Galil_Mag: CUP_50Rnd_556x45_Galil_Mag
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		tracersEvery=1;
		ammo="B_556x45_Ball_Tracer_Red";
		displayName="$STR_CUP_dn_galil_50rnd_te1_r_M";
		displayNameShort="$STR_CUP_dns_55645_Red";
	};
	class CUP_50Rnd_556x45_Green_Tracer_Galil_Mag: CUP_50Rnd_556x45_Galil_Mag
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		tracersEvery=1;
		ammo="B_556x45_Ball_Tracer_Green";
		displayName="$STR_CUP_dn_galil_50rnd_te1_g_M";
		displayNameShort="$STR_CUP_dns_55645_Green";
	};
};
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
	class CUP_arifle_GALIL_BASE: Rifle_Base_F
	{
		scope=1;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		magazines[]=
		{
			"CUP_25Rnd_762x51_Galil_Mag",
			"CUP_25Rnd_762x51_Red_Tracers_Galil_Mag",
			"CUP_25Rnd_762x51_Green_Tracers_Galil_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x51_GALIL"
		};
		magazineReloadSwitchPhase=0.40000001;
		recoil="recoil_ebr";
		class Library
		{
			libTextDesc="$STR_CUP_lib_Galil";
		};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		maxZeroing=1000;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_CUP_dss_Galil";
		discreteDistance[]={50,100,200,300,400};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics1",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",
					0.56234133,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",
					0.56234133,
					1.2,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk18_Shot_SoundSet",
					"Mk18_tail_SoundSet",
					"Mk18_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",
					3.9810717,
					1,
					2000
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",
					3.9810717,
					1,
					2000
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",
					3.9810717,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
							1.5848932,
							1,
							2000
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"Mk18_silencerShot_SoundSet",
					"Mk18_silencerTail_SoundSet",
					"Mk18_silencerInteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",
					0.56234133,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",
					0.56234133,
					1.2,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk18_Shot_SoundSet",
					"Mk18_tail_SoundSet",
					"Mk18_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",
					3.9810717,
					1,
					2000
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",
					3.9810717,
					1,
					2000
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",
					3.9810717,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
							1.5848932,
							1,
							2000
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"Mk18_silencerShot_SoundSet",
					"Mk18_silencerTail_SoundSet",
					"Mk18_silencerInteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",
							1.9952624,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_auto_ebr";
			recoilProne="recoil_auto_prone_ebr";
			dispersion=0.00073000003;
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
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class asdg_OpticRail_Galil: asdg_OpticRail1913
			{
				iconPosition[]={0.60000002,0.30000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Center";
			};
		};
		inertia=0.69999999;
		dexterity=1.3;
		class ItemInfo
		{
			priority=1;
		};
	};
	class CUP_arifle_Galil_black: CUP_arifle_GALIL_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		magazines[]=
		{
			"CUP_25Rnd_762x51_Galil_Mag",
			"CUP_25Rnd_762x51_Red_Tracers_Galil_Mag",
			"CUP_25Rnd_762x51_Green_Tracers_Galil_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x51_GALIL"
		};
		displayName="$STR_CUP_dn_Galil_black";
		model="\CUP\Weapons\CUP_Weapons_Galil\CUP_galil_arm_762.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Galil\data\ui\gear_galil_ar_X_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Galil\data\anim\hand_anim.rtm"
		};
		initSpeed=-0.94117647;
		hasBipod=1;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=533.40002;
		ace_railHeightAboveBore=6.4000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=98.120003;
		};
	};
	class CUP_arifle_Galil_556_black: CUP_arifle_GALIL_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		magazines[]=
		{
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_35Rnd_556x45_Green_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Galil_Mag",
			"CUP_50Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Green_Tracer_Galil_Mag"
		};
		magazineWell[]=
		{
			"CBA_556x45_GALIL"
		};
		displayName="$STR_CUP_dn_Galil_556_black";
		model="\CUP\Weapons\CUP_Weapons_Galil\CUP_galil_arm.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Galil\data\ui\gear_galil_ar_X_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Galil\data\anim\hand_anim.rtm"
		};
		initSpeed=-1;
		hasBipod=1;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=457.20001;
		ACE_railHeightAboveBore=6.4000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95.910004;
		};
	};
	class CUP_arifle_Galil_SAR_black: CUP_arifle_GALIL_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		magazines[]=
		{
			"CUP_35Rnd_556x45_Galil_Mag",
			"CUP_35Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_35Rnd_556x45_Green_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Galil_Mag",
			"CUP_50Rnd_556x45_Red_Tracer_Galil_Mag",
			"CUP_50Rnd_556x45_Green_Tracer_Galil_Mag"
		};
		magazineWell[]=
		{
			"CBA_556x45_GALIL"
		};
		displayName="$STR_CUP_dn_Galil_SAR_black";
		model="\CUP\Weapons\CUP_Weapons_Galil\CUP_galil_SAR.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Galil\data\ui\gear_galil_sar_X_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Galil\data\anim\hand_anim.rtm"
		};
		initSpeed=-0.94736844;
		hasBipod=0;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=330.20001;
		ace_railHeightAboveBore=6.4000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82.68;
		};
	};
};
