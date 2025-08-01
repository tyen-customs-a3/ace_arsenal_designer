
#define _ARMA_

class CfgPatches
{
	class sfp_ak5
	{
		units[] = {};
		weapons[] = {"sfp_ak5","sfp_ak5_flashlight","sfp_ak5b_susat","sfp_ak5_m203","sfp_ak5d","sfp_ak5dmk2","sfp_ak5c","sfp_ak5c_3xaimpoint_dbal2","sfp_ak5c_m203","sfp_ak5c_blk","sfp_ak5c_m203_blk","sfp_ak5b","sfp_cga5p","sfp_ak5c_alt","sfp_ak5c_aimpoint_dbal2","sfp_ak5c_m203_aimpoint","sfp_ak5dmk2_aimpoint","sfp_ak5dmk2_aimpoint_dbal2","sfp_ak5dmk2_aimpoint_flashlight","sfp_ak5c_aimpoint_dbal2_blk","sfp_ak5c_m203_aimpoint_blk","sfp_ak5c_aimpoint_sd"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","sfp_attachments"};
		magazines[] = {"sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag_plastic","sfp_30Rnd_556x45_Stanag_tracer","sfp_30Rnd_556x45_Stanag_tracer_plastic","sfp_30Rnd_556x45_Stanag_irtracer","sfp_30Rnd_556x45_Stanag_irtracer_plastic"};
	};
	class sfp_asdg_jr_ak5
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class sfp_asdg_jr_ak5_prep
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class sfp_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		dlc = "sfp";
		author = "Swedish Forces Pack";
		scope = 2;
		displayName = "5.56mm 30Rnd Ball";
		displayNameShort = "5.56mm";
		descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK5<br />Swedish: 5,56/5 STKPRJ";
		picture = "\sfp_ak5\ui\mag\mag_ca.paa";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_metal_mag.p3d";
		modelSpecialIsProxy = 1;
		ammo = "sfp_556x45_ball";
		lastRoundsTracer = 0;
		tracersEvery = 0;
	};
	class sfp_30Rnd_556x45_Stanag_plastic: sfp_30Rnd_556x45_Stanag
	{
		displayName = "5.56mm 30Rnd Ball (Plastic)";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5_plastic.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_plastic_mag.p3d";
		picture = "\sfp_ak5\ui\mag\plasticmag_ca.paa";
	};
	class sfp_30Rnd_556x45_Stanag_tracer: sfp_30Rnd_556x45_Stanag
	{
		tracersEvery = 3;
		displayName = "5.56mm 30Rnd Tracer";
		displayNameShort = "5.56mm Tracer";
		descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK5<br />Swedish: 5,56/5 SLPRJ";
	};
	class sfp_30Rnd_556x45_Stanag_tracer_plastic: sfp_30Rnd_556x45_Stanag_tracer
	{
		displayName = "5.56mm 30Rnd Tracer (Plastic)";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5_plastic.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_plastic_mag.p3d";
		picture = "\sfp_ak5\ui\mag\plasticmag_ca.paa";
	};
	class sfp_30Rnd_556x45_Stanag_irtracer: sfp_30Rnd_556x45_Stanag
	{
		ammo = "sfp_556x45_irTracer";
		tracersEvery = 3;
		displayName = "5.56mm 30Rnd IR-Tracer";
		displayNameShort = "5.56mm IR-Tracer";
		descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: AK5<br />Swedish: 5,56/5 IR-SLPRJ";
	};
	class sfp_30Rnd_556x45_Stanag_irtracer_plastic: sfp_30Rnd_556x45_Stanag_irtracer
	{
		displayName = "5.56mm 30Rnd IR-Tracer (Plastic)";
		model = "\sfp_ak5\ui\mag\sfp_m_ak5_plastic.p3d";
		modelSpecial = "\sfp_ak5\magazines\sfp_stanag_plastic_mag.p3d";
		picture = "\sfp_ak5\ui\mag\plasticmag_ca.paa";
	};
};
class CfgMagazineWells
{
	class CBA_556x45_STANAG
	{
		SFP_Magazines[] = {"sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag_plastic","sfp_30Rnd_556x45_Stanag_tracer","sfp_30Rnd_556x45_Stanag_tracer_plastic","sfp_30Rnd_556x45_Stanag_irtracer","sfp_30Rnd_556x45_Stanag_irtracer_plastic"};
	};
	class STANAG_556x45
	{
		SFP_Magazines[] = {"sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag_plastic","sfp_30Rnd_556x45_Stanag_tracer","sfp_30Rnd_556x45_Stanag_tracer_plastic","sfp_30Rnd_556x45_Stanag_irtracer","sfp_30Rnd_556x45_Stanag_irtracer_plastic"};
	};
	class CBA_40mm_M203{};
	class UGL_40x36{};
};
class CfgRecoils
{
	class recoil_sfp_ak5
	{
		kickBack[] = {0.02,0.04};
		muzzleInner[] = {0,0,0.0,0.1,0.1};
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		permanent = 0.1;
		temporary = 0.01;
	};
	class recoil_sfp_ak5c
	{
		kickBack[] = {0.02,0.04};
		muzzleInner[] = {0,0,0.0,0.1,0.1};
		muzzleOuter[] = {0.3,1,0.4,0.3};
		permanent = 0.1;
		temporary = 0.01;
	};
	class recoil_sfp_ak5d
	{
		kickBack[] = {0.03,0.06};
		muzzleInner[] = {0,0,0.0,0.1,0.1};
		muzzleOuter[] = {0.3,1.2,0.4,0.3};
		permanent = 0.1;
		temporary = 0.015;
	};
	recoil_single_sfp_ak5[] = {0,0,0,0.03,"36.943*((0.001))*(0.3)","3.587*((0.004))*(3)",0.03,"31.817*((0.001))*(0.5)","1.251*((0.004))*(3.4)",0.03,"19.755*((0.001))*(0.7)","0.764*((0.004))*(3.8)",0.06,"7.388*((0.001))*(0.9)","0.285*((0.004))*(4.2)",0.06,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(7)",0.06,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(5)",0.06,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(3)",0.06,"-3.138*((0.001))*(0.3)","-0.125*((0.004))*(1)",0.06,0,0};
	recoil_single_prone_sfp_ak5[] = {0,0,0,0.03,"36.943*((0.001))*(0.3)","3.587*((0.004))*(0.7)",0.03,"31.817*((0.001))*(0.5)","1.251*((0.004))*(1.1)",0.03,"19.755*((0.001))*(0.7)","0.764*((0.004))*(1.5)",0.06,"7.388*((0.001))*(0.9)","0.285*((0.004))*(1.9)",0.06,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(2)",0.06,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(1)",0.06,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(0.5)",0.06,"-3.138*((0.001))*(0.3)","-0.125*((0.004))*(0.3)",0.06,0,0};
	recoil_auto_sfp_ak5[] = {0,0,0,0.06,"36.943*((0.001))*(1.2)","3.587*((0.004))*(1.7)",0.06,"31.817*((0.001))*(1.5)","1.251*((0.004))*(2.1)",0.06,"19.755*((0.001))*(1.7)","0.764*((0.004))*(2.4)",0.06,"7.388*((0.001))*(1.9)","0.285*((0.004))*(2.8)",0.03,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(7)",0.03,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(5)",0.03,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(3)",0.06,0,0};
	recoil_auto_prone_sfp_ak5[] = {0,0,0,0.06,"36.943*((0.001))*(1.2)","3.587*((0.004))*(0.3)",0.06,"31.817*((0.001))*(1.5)","1.251*((0.004))*(0.7)",0.06,"19.755*((0.001))*(1.7)","0.764*((0.004))*(1.1)",0.06,"7.388*((0.001))*(1.9)","0.285*((0.004))*(1.5)",0.03,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(4)",0.03,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(2)",0.03,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(1)",0.06,0,0};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class sfp_ak5_base: Rifle_Base_F
	{
		ACE_Overheating_Dispersion = 1.0;
		ACE_Overheating_SlowdownFactor = 1.0;
		ACE_Overheating_MRBS = 2000;
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		dlc = "sfp";
		scope = 0;
		inertia = 0.5;
		maxRecoilSway = 0.008;
		swayDecaySpeed = 2;
		recoil = "recoil_sfp_ak5";
		magazines[] = {"sfp_30Rnd_556x45_Stanag_plastic","sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag_tracer","sfp_30Rnd_556x45_Stanag_tracer_plastic","sfp_30Rnd_556x45_Stanag_irtracer","sfp_30Rnd_556x45_Stanag_irtracer_plastic"};
		magazineWell[] = {"CBA_556x45_STANAG","STANAG_556x45"};
		magazineReloadSwitchPhase = 0.5;
		reloadAction = "GestureReloadDMR02";
		reloadMagazineSound[] = {"sfp_ak5\sound\ak5_reload.wss",0.1,1,30};
		memoryPointCamera = "eye";
		handAnim[] = {"OFP2_ManSkeleton","\sfp_ak5\anims\sfp_handanim_ak5c.rtm"};
		descriptionShort = "Automatkarbin 5(Ak 5) is the Swedish version of the FN FNC assault rifle with modifications to adapt the weapon to Swedish climate";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\muzzle";
				iconPosition[] = {0.0,0.42};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.42};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.2,0.7};
				iconScale = 0.2;
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			};
		};
		discreteDistance[] = {250,400};
		discreteDistanceInitIndex = 0;
		distanceZoomMin = 250;
		distanceZoomMax = 250;
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01",0.1,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02",0.1,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03",0.17782794,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04",0.17782794,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\dirt_556_01",0.1,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\dirt_556_02",0.1,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\dirt_556_03",0.1,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\dirt_556_04",0.1,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01",0.01,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02",0.01,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03",0.01,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04",0.01,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.251189,1,5};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.316228,1,10};
		emptySound[] = {"",1,1};
		selectionFireAnim = "zasleh";
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			reloadTime = 0.0923;
			dispersion = 0.0008727;
			recoil = "recoil_single_sfp_ak5";
			recoilProne = "recoil_single_prone_sfp_ak5";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			reloadTime = 0.0923;
			dispersion = 0.0008727;
			recoil = "recoil_auto_sfp_ak5";
			recoilProne = "recoil_auto_prone_sfp_ak5";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 700;
		};
		class sfp_m203: UGL_F
		{
			displayName = "M203";
			descriptionShort = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"CBA_40mm_M203","UGL_40x36"};
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
			discreteDistanceInitIndex = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"sfp_ak5\sound\m203_fire1","db-3",1,200};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
	};
	class sfp_ak5b: sfp_ak5_base
	{
		ACE_barrelTwist = 229;
		ACE_twistDirection = 1;
		ACE_barrelLength = 450;
		ACE_railHeightAboveBore = 3.86146;
		scope = 2;
		author = "Swedish Forces Pack (Ulfen)";
		model = "\sfp_ak5\sfp_ak5.p3d";
		dexterity = 1.8;
		displayName = "Ak 5B";
		descriptionShort = "Automatkarbin 5B - modified FN FNC<br />Ak 5 with SUSAT optic, used as marksman rifle 1990s to 2000s";
		hiddenSelections[] = {"rearsight","flashlight"};
		hiddenSelectionsTextures[] = {"",""};
		picture = "\sfp_ak5\ui\w_ak5b_ca.paa";
		UiPicture = "A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {};
		class Library
		{
			libTextDesc = "Swedish modification of the FN FNC. Includes changes to improve fighting in cold climate.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 97;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\muzzle";
				iconPosition[] = {0.0,0.5};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "AK 5";
			onHoverText = "TODO C8IUR DSS";
		};
	};
	class sfp_ak5b_susat: sfp_ak5b
	{
		author = "Swedish Forces Pack (Ulfen)";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_susat_4x";
			};
		};
	};
	class sfp_ak5: sfp_ak5b
	{
		displayName = "Ak 5";
		descriptionShort = "Automatkarbin 5 - modified FN FNC<br />Army standard issue 1990s to 2000s, replaced by Ak 5C";
		author = "Swedish Forces Pack (Ulfen)";
		hiddenSelections[] = {"ak5b","flashlight"};
		hiddenSelectionsTextures[] = {"",""};
		picture = "\sfp_ak5\ui\w_ak5.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 86;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\muzzle";
				iconPosition[] = {0.0,0.5};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
	};
	class sfp_ak5_flashlight: sfp_ak5
	{
		displayName = "Ak 5 (Flash Light)";
		author = "Swedish Forces Pack (Ulfen)";
		hiddenSelections[] = {"ak5b","handguard"};
		hiddenSelectionsTextures[] = {"",""};
		scope = 1;
		class FlashLight
		{
			color[] = {180,160,130};
			ambient[] = {0.9,0.81,0.7};
			coneFadeCoef = 8;
			dayLight = 0;
			flareMaxDistance = 100;
			flareSize = 1.4;
			innerAngle = 5;
			intensity = 100;
			outerAngle = 100;
			position = "flash dir";
			direction = "flash";
			scale[] = {0};
			size = 1;
			useFlare = 1;
		};
	};
	class sfp_ak5_gold: sfp_ak5
	{
		displayName = "Ak 5 Gold";
		scope = 1;
		hiddenSelections[] = {"ak5","ak5b","flashlight"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\ak5_gold_co.paa","",""};
	};
	class sfp_ak5_m203: sfp_ak5
	{
		displayName = "Ak 5 M203";
		descriptionShort = "Automatkarbin 5 med granattillsats - modified FN FNC<br />Army standard issue 1990s to 2000s, replaced by Ak 5C";
		author = "Swedish Forces Pack (Ulfen)";
		model = "\sfp_ak5\sfp_ak5_m203.p3d";
		muzzles[] = {"this","sfp_m203"};
		handAnim[] = {"OFP2_ManSkeleton","\sfp_ak5\anims\sfp_handanim_ak5c_m203.rtm"};
		picture = "\sfp_ak5\ui\w_ak5_m203_ca.paa";
		UiPicture = "A3\weapons_f\data\UI\icon_gl_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 116;
		};
	};
	class sfp_ak5d: sfp_ak5
	{
		ACE_barrelTwist = 229;
		ACE_twistDirection = 1;
		ACE_barrelLength = 260;
		scope = 2;
		author = "Swedish Forces Pack (Ulfen)";
		model = "\sfp_ak5\sfp_cga5p.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\ak5_co.paa"};
		recoil = "recoil_sfp_ak5d";
		dexterity = 1.8;
		displayName = "Ak 5D";
		picture = "\sfp_ak5\ui\w_ak5d.paa";
		descriptionShort = "Automatkarbin 5D - modified FN FNC<br />Short version of original Ak 5 used ca 1999 to 2010, replaced by Ak 5D Mk2";
		initSpeed = -0.87;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79;
		};
	};
	class sfp_cga5p: sfp_ak5d
	{
		scope = 2;
		displayName = "CGA 5P";
		author = "Swedish Forces Pack (Ulfen)";
		picture = "\sfp_ak5\ui\w_cga5p_ca.paa";
		UiPicture = "A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {};
		descriptionShort = "Police version of AK 5D, limited to semi-automatic fire";
		class Library
		{
			libTextDesc = "Police version of AK 5. Limited to single shot";
		};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\cga5p_co.paa"};
	};
	class sfp_ak5c: sfp_ak5_base
	{
		ACE_Overheating_MRBS = 3500;
		ACE_barrelTwist = 229;
		ACE_twistDirection = 1;
		ACE_barrelLength = 350;
		ACE_railHeightAboveBore = 3.52479;
		ACE_ironSightBaseAngle = -0.357411;
		scope = 2;
		author = "Swedish Forces Pack (Ulfen)";
		model = "\sfp_ak5\sfp_ak5c.p3d";
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",1,1,10};
		dexterity = 1.8;
		recoil = "recoil_sfp_ak5c";
		displayName = "Ak 5C";
		picture = "\sfp_ak5\ui\w_ak5c.paa";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		descriptionShort = "Automatkarbin 5C - modified FN FNC<br />Ak 5 upgrade with shorter barrel, Picatinny rails, new handguard, and more<br />Army standard issue with Aimpoint CS 2006 to present";
		initSpeed = -0.94;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 88;
		};
	};
	class sfp_ak5c_plastic: sfp_ak5c
	{
		scope = 1;
		author = "Swedish Forces Pack (Ulfen)";
	};
	class sfp_ak5c_alt: sfp_ak5c
	{
		author = "Swedish Forces Pack (Ulfen)";
		displayName = "Ak 5C (Alt)";
		handAnim[] = {};
		hiddenSelections[] = {"grip"};
		hiddenSelectionsTextures[] = {""};
	};
	class sfp_ak5c_alt_plastic: sfp_ak5c_alt
	{
		scope = 1;
		author = "Swedish Forces Pack (Ulfen)";
	};
	class sfp_ak5c_m203: sfp_ak5c
	{
		scope = 2;
		author = "Swedish Forces Pack (Ulfen)";
		model = "\sfp_ak5\sfp_ak5c_m203.p3d";
		ACE_railHeightAboveBore = 3.52483;
		dexterity = 1.8;
		displayName = "Ak 5C M203";
		muzzles[] = {"this","sfp_m203"};
		picture = "\sfp_ak5\ui\w_ak5c_m203.paa";
		UiPicture = "A3\weapons_f\data\UI\icon_gl_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\sfp_ak5\anims\sfp_handanim_ak5c_m203.rtm"};
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		descriptionShort = "Automatkarbin 5C med granattillsats - modified FN FNC<br />Ak 5 upgrade with shorter barrel, Picatinny rails, new handguard, and more<br />Army standard issue with Aimpoint CS 2006 to present";
		initSpeed = -0.94;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 118;
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot{};
		};
	};
	class sfp_ak5c_m203_plastic: sfp_ak5c_m203
	{
		scope = 1;
		author = "Swedish Forces Pack (Ulfen)";
	};
	class sfp_ak5c_aimpoint_dbal2: sfp_ak5c
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class sfp_ak5c_3xaimpoint_dbal2: sfp_ak5c_alt
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_3x_aimpoint";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class sfp_ak5c_m203_aimpoint: sfp_ak5c_m203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
		};
	};
	class sfp_ak5dmk2: sfp_ak5c
	{
		ACE_Overheating_MRBS = 3000;
		ACE_barrelTwist = 229;
		ACE_twistDirection = 1;
		ACE_barrelLength = 260;
		ACE_railHeightAboveBore = 3.52479;
		ACE_ironSightBaseAngle = 0;
		scope = 2;
		author = "Swedish Forces Pack (Ulfen)";
		model = "\sfp_ak5\sfp_ak5dmk2.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\ak5dmk2_co.paa"};
		dexterity = 1.8;
		recoil = "recoil_sfp_ak5d";
		displayName = "Ak 5D Mk2";
		picture = "\sfp_ak5\ui\w_ak5dmk2.paa";
		descriptionShort = "Automatkarbin 5D mk2 - modified FN FNC<br />Ak 5D upgraded to Ak 5C standard, used ca 2010 to present";
		initSpeed = -0.87;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\muzzle";
				compatibleItems[] = {"muzzle_snds_M"};
				iconPosition[] = {0.05,0.38};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.48,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.25,0.38};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.25,0.7};
				iconScale = 0.2;
				linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			};
		};
		class Library
		{
			libTextDesc = "Short version of the C model";
		};
	};
	class sfp_ak5dmk2_plastic: sfp_ak5dmk2
	{
		scope = 1;
		author = "Swedish Forces Pack (Ulfen)";
	};
	class sfp_ak5dmk2_aimpoint: sfp_ak5dmk2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
		};
	};
	class sfp_ak5dmk2_aimpoint_dbal2: sfp_ak5dmk2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class sfp_ak5dmk2_aimpoint_flashlight: sfp_ak5dmk2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class sfp_ak5c_blk: sfp_ak5c_alt
	{
		displayName = "Ak 5C (Alt/Black)";
		author = "Swedish Forces Pack (Ulfen)";
		picture = "\sfp_ak5\ui\w_ak5c_blk.paa";
		hiddenSelections[] = {"camo","grip"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\ak5c\ak5c_blk_co.paa",""};
	};
	class sfp_ak5c_blk_plastic: sfp_ak5c_alt_plastic
	{
		displayName = "Ak 5C (Alt/Black)";
		author = "Swedish Forces Pack (Ulfen)";
		picture = "\sfp_ak5\ui\w_ak5c_blk.paa";
		hiddenSelections[] = {"camo","grip"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\ak5c\ak5c_blk_co.paa",""};
	};
	class sfp_ak5c_m203_blk: sfp_ak5c_m203
	{
		displayName = "Ak 5C M203 (Black)";
		author = "Swedish Forces Pack (Ulfen)";
		picture = "\sfp_ak5\ui\w_ak5c_m203_blk.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\ak5c\ak5c_blk_co.paa"};
	};
	class sfp_ak5c_m203_blk_plastic: sfp_ak5c_m203_plastic
	{
		displayName = "Ak 5C M203 (Black)";
		author = "Swedish Forces Pack (Ulfen)";
		picture = "\sfp_ak5\ui\w_ak5c_m203_blk.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\sfp_ak5\data\ak5c\ak5c_blk_co.paa"};
	};
	class sfp_ak5c_aimpoint_dbal2_blk: sfp_ak5c_blk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class sfp_ak5c_m203_aimpoint_blk: sfp_ak5c_m203_blk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
		};
	};
	class sfp_ak5c_aimpoint_sd: sfp_ak5c_blk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sfp_optic_aimpoint";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class MuzzleSlot
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_M";
			};
		};
	};
};
