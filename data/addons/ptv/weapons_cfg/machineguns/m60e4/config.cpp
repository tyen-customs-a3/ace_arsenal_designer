
#define _ARMA_

class CfgPatches
{
	class ptv_m60e4
	{
		requiredAddons[] = {"A3_Weapons_F"};
		requiredversion = 2.0;
		units[] = {};
		weapons[] = {"ptv_m60e4","ptv_m60e4r","ptv_m60e4s","ptv_m60e4rs","ptv_m60e4_g","ptv_m60e4r_g","ptv_m60e4s_g","ptv_m60e4rs_g","ptv_m60e4_t","ptv_m60e4r_t","ptv_m60e4s_t","ptv_m60e4rs_t"};
	};
};
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_SlotInfo;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_762;
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class ptv_100Rnd_762x51_B_M60: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 100<br />Used in: M60";
		displayname = "100rnd M60 Box (Ball)";
		initspeed = 838;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_m60_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 32.34;
		displaynameshort = "7.62mm Ball";
	};
	class ptv_100Rnd_762x51_M_M60: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 100<br />Used in: M60";
		displayname = "100rnd M60 Box (Ball-Tracer Mix)";
		initspeed = 838;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_m60_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 32.34;
		displaynameshort = "7.62mm Ball/Tracer";
	};
	class ptv_100Rnd_762x51_Barrier_M60: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		ammo = "ptv_762x51_Barrier";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 100<br />Used in: M60";
		displayname = "100rnd M60 Box (Mk319-Tracer Mix)";
		initspeed = 815;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_m60_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 32.34;
		displaynameshort = "7.62mm Mk.319/Tracer";
	};
	class ptv_100Rnd_762x51_T_M60: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm Tracer<br />Rounds: 100<br />Used in: M60";
		displayname = "100rnd M60 Box (Tracer)";
		initspeed = 838;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_m60_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 32.34;
		displaynameshort = "7.62mm Tracer";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ptv_m60e4: Rifle_Long_Base_F
	{
		author = "Project True Viking";
		scope = 2;
		magazines[] = {"ptv_100Rnd_762x51_B_M60","ptv_100Rnd_762x51_M_M60","ptv_100Rnd_762x51_Barrier_M60","ptv_100Rnd_762x51_T_M60"};
		magazineWell[] = {"M240_762x51"};
		reloadAction = "ptv_GestureReloadNegev";
		magazineReloadSwitchPhase = 0.5;
		recoil = "recoil_zafir";
		maxZeroing = 1200;
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\machineguns\m60e4\anim\e4.rtm"};
		class ItemInfo
		{
			priority = 1;
		};
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4.p3d";
		displayName = "M60E4";
		nameSound = "Mgun";
		picture = "\ptv_weapons\data\inv\ptv_m60e4_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class Library
		{
			libTextDesc = "The 7.62mm NATO M60E4 General Purpose Machine Gun (GPMG) represents the latest improvements to the M60 Series of machine guns. It is a gas operated, disintegrating link, belt fed, air-cooled machine gun. It fires from an open bolt and features a quick-change barrel. The M60E4 features a machined aluminum feed cover with integrated M1913 Picatinny rail for mounting optics. An aluminum M1913 rail handguard provides for the mounting of infrared laser aiming devices and other sensors, giving the weapon 24 hour capability.";
		};
		descriptionShort = "General Purpose Machine Gun<br/>Caliber: 7.62x51mm NATO";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		inertia = 0.9;
		aimTransitionSpeed = 0.6;
		dexterity = 1.2;
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				positionName = "Nabojnicestart2";
				directionName = "Nabojniceend2";
				effectName = "MachineGunEject2";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 206;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0.1,0.5};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.6,0.45};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.35,0.5};
				iconScale = 0.25;
			};
		};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200",0.4466836,1,10};
		reloadmagazinesound[] = {"\ptv_weapons\sound\negev\negev_reload",0.7,1,20};
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",0.70794576,1,20};
		discreteDistance[] = {100,300,400,500,600,700,800,900,1000,1100};
		discreteDistanceInitIndex = 1;
		class manual: Mode_FullAuto
		{
			reloadTime = 0.1;
			dispersion = 0.0008;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"\ptv_weapons\sound\m60e4\soundshaders\m60e4\m60e4_first",0,1,10};
				closure2[] = {"\ptv_weapons\sound\m60e4\soundshaders\m60e4\m60e4_first",0,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ptv_M60E4_Shot_SoundSet","ptv_M60E4_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"ptv_M60E4_SilencerShot_SoundSet","ptv_M60E4_SilencerTail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
	};
	class ptv_m60e4r: ptv_m60e4
	{
		author = "Project True Viking";
		scope = 2;
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4r.p3d";
		displayName = "M60E4 FS";
		picture = "\ptv_weapons\data\inv\ptv_m60e4r_x_ca.paa";
	};
	class ptv_m60e4s: ptv_m60e4
	{
		author = "Project True Viking";
		scope = 2;
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4s.p3d";
		displayName = "M60E4 SB";
		picture = "\ptv_weapons\data\inv\ptv_m60e4s_x_ca.paa";
		inertia = 0.65;
		aimTransitionSpeed = 0.85;
		dexterity = 1.25;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 202;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.12,0.48};
				iconScale = 0.2;
			};
		};
	};
	class ptv_m60e4rs: ptv_m60e4s
	{
		author = "Project True Viking";
		scope = 2;
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4rs.p3d";
		displayName = "M60E4 SB FS";
		picture = "\ptv_weapons\data\inv\ptv_m60e4rs_x_ca.paa";
	};
	class ptv_m60e4_g: ptv_m60e4
	{
		author = "Project True Viking";
		displayName = "M60E4 (Green)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m60e4\data\m60e4_g_co.paa","\ptv_weapons\machineguns\m60e4\data\vertgrip_g_co.paa","\ptv_weapons\machineguns\m60e4\data\ammo_pouch_co.paa"};
		picture = "\ptv_weapons\data\inv\ptv_m60e4_g_x_ca.paa";
	};
	class ptv_m60e4r_g: ptv_m60e4_g
	{
		author = "Project True Viking";
		displayName = "M60E4 FS (Green)";
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4r.p3d";
		picture = "\ptv_weapons\data\inv\ptv_m60e4r_g_x_ca.paa";
	};
	class ptv_m60e4s_g: ptv_m60e4s
	{
		author = "Project True Viking";
		displayName = "M60E4 SB (Green)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m60e4\data\m60e4_g_co.paa","\ptv_weapons\machineguns\m60e4\data\vertgrip_g_co.paa","\ptv_weapons\machineguns\m60e4\data\ammo_pouch_co.paa"};
		picture = "\ptv_weapons\data\inv\ptv_m60e4s_g_x_ca.paa";
	};
	class ptv_m60e4rs_g: ptv_m60e4s_g
	{
		author = "Project True Viking";
		displayName = "M60E4 SB FS (Green)";
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4rs.p3d";
		picture = "\ptv_weapons\data\inv\ptv_m60e4rs_g_x_ca.paa";
	};
	class ptv_m60e4_t: ptv_m60e4
	{
		author = "Project True Viking";
		displayName = "M60E4 (Tan)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m60e4\data\m60e4_t_co.paa","\ptv_weapons\machineguns\m60e4\data\vertgrip_t_co.paa","\ptv_weapons\machineguns\m60e4\data\ammo_pouch_t_co.paa"};
		picture = "\ptv_weapons\data\inv\ptv_m60e4_t_x_ca.paa";
	};
	class ptv_m60e4r_t: ptv_m60e4_t
	{
		author = "Project True Viking";
		displayName = "M60E4 FS (Tan)";
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4r.p3d";
		picture = "\ptv_weapons\data\inv\ptv_m60e4r_t_x_ca.paa";
	};
	class ptv_m60e4s_t: ptv_m60e4s
	{
		author = "Project True Viking";
		displayName = "M60E4 SB (Tan)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m60e4\data\m60e4_t_co.paa","\ptv_weapons\machineguns\m60e4\data\vertgrip_t_co.paa","\ptv_weapons\machineguns\m60e4\data\ammo_pouch_t_co.paa"};
		picture = "\ptv_weapons\data\inv\ptv_m60e4s_t_x_ca.paa";
	};
	class ptv_m60e4rs_t: ptv_m60e4s_t
	{
		author = "Project True Viking";
		displayName = "M60E4 SB FS (Tan)";
		model = "\ptv_weapons\machineguns\m60e4\ptv_m60e4rs.p3d";
		picture = "\ptv_weapons\data\inv\ptv_m60e4rs_t_x_ca.paa";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class weapon_ptv_m60e4: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4
			{
				weapon = "ptv_m60e4";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4r: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 FS";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4r
			{
				weapon = "ptv_m60e4r";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4s: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 SB";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4s
			{
				weapon = "ptv_m60e4s";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4rs: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 SB FS";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4rs
			{
				weapon = "ptv_m60e4rs";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 (Green)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4_g
			{
				weapon = "ptv_m60e4_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4r_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 FS (Green)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4r_g
			{
				weapon = "ptv_m60e4r_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4s_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 SB (Green)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4s_g
			{
				weapon = "ptv_m60e4s_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4rs_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 SB FS (Green)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4rs_g
			{
				weapon = "ptv_m60e4rs_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 (Tan)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4_t
			{
				weapon = "ptv_m60e4_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4r_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 FS (Tan)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4r_t
			{
				weapon = "ptv_m60e4r_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4s_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 SB (Tan)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4s_t
			{
				weapon = "ptv_m60e4s_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m60e4rs_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "M60E4 SB FS (Tan)";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m60e4rs_t
			{
				weapon = "ptv_m60e4rs_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
};
class cfgMods
{
	author = "PTV";
	timepacked = "1736952437";
};
