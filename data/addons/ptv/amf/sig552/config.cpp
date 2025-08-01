
#define _ARMA_

class cfgRecoils
{
	recoil_single_AMF_614_long_01_F[] = {0,0,0,0.03,"36.943*((0.001))*(0.3)","3.587*((0.004))*(3)",0.03,"31.817*((0.001))*(0.5)","1.251*((0.004))*(3.4)",0.03,"19.755*((0.001))*(0.7)","0.764*((0.004))*(3.8)",0.06,"7.388*((0.001))*(0.9)","0.285*((0.004))*(4.2)",0.06,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(7)",0.06,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(5)",0.06,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(3)",0.06,"-3.138*((0.001))*(0.3)","-0.125*((0.004))*(1)",0.06,0,0};
	recoil_single_prone_AMF_614_long_01_F[] = {0,0,0,0.03,"36.943*((0.001))*(0.3)","3.587*((0.004))*(0.7)",0.03,"31.817*((0.001))*(0.5)","1.251*((0.004))*(1.1)",0.03,"19.755*((0.001))*(0.7)","0.764*((0.004))*(1.5)",0.06,"7.388*((0.001))*(0.9)","0.285*((0.004))*(1.9)",0.06,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(2)",0.06,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(1)",0.06,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(0.5)",0.06,"-3.138*((0.001))*(0.3)","-0.125*((0.004))*(0.3)",0.06,0,0};
	recoil_auto_AMF_614_long_01_F[] = {0,0,0,0.06,"36.943*((0.001))*(1.2)","3.587*((0.004))*(1.7)",0.06,"31.817*((0.001))*(1.5)","1.251*((0.004))*(2.1)",0.06,"19.755*((0.001))*(1.7)","0.764*((0.004))*(2.4)",0.06,"7.388*((0.001))*(1.9)","0.285*((0.004))*(2.8)",0.03,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(7)",0.03,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(5)",0.03,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(3)",0.06,0,0};
	recoil_auto_prone_AMF_614_long_01_F[] = {0,0,0,0.06,"36.943*((0.001))*(1.2)","3.587*((0.004))*(0.3)",0.06,"31.817*((0.001))*(1.5)","1.251*((0.004))*(0.7)",0.06,"19.755*((0.001))*(1.7)","0.764*((0.004))*(1.1)",0.06,"7.388*((0.001))*(1.9)","0.285*((0.004))*(1.5)",0.03,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(4)",0.03,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(2)",0.03,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(1)",0.06,0,0};
	class Default;
	class recoil_default: Default
	{
		muzzleOuter[] = {0.3,1.0,0.3,0.2};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.03,0.06};
		permanent = 0.1;
		temporary = 0.01;
	};
};
class CfgPatches
{
	class AMF_weapon_F
	{
		units[] = {};
		weapons[] = {"amf_sig552"};
		requiredVersion = 2.0;
		requiredAddons[] = {"A3_Weapons_F","cba_xeh","cba_jr"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class Safety;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class ItemCore;
class WeaponSlotsInfo;
class OpticsModes;
class Item_Base_F;
class InventoryFlashLightItem_Base_F;
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		optic_Nightstalker = 1;
		optic_tws = 1;
		optic_tws_mg = 1;
		optic_NVS = 1;
		optic_SOS = 1;
		optic_SOS_khk_F = 1;
		optic_MRCO = 1;
		optic_Arco = 1;
		optic_Arco_ghex_F = 1;
		optic_Arco_blk_F = 1;
		optic_aco = 1;
		optic_ACO_grn = 1;
		optic_aco_smg = 1;
		optic_ACO_grn_smg = 1;
		optic_hamr = 1;
		optic_Hamr_khk_F = 1;
		optic_Holosight = 1;
		optic_Holosight_smg = 1;
		optic_Holosight_blk_F = 1;
		optic_Holosight_khk_F = 1;
		optic_Holosight_smg_blk_F = 1;
		optic_DMS = 1;
		optic_DMS_ghex_F = 1;
		optic_LRPS = 1;
		optic_LRPS_ghex_F = 1;
		optic_LRPS_tna_F = 1;
		optic_AMS = 1;
		optic_AMS_khk = 1;
		optic_AMS_snd = 1;
		optic_KHS_blk = 1;
		optic_KHS_hex = 1;
		optic_KHS_old = 1;
		optic_KHS_tan = 1;
		optic_ERCO_blk_F = 1;
		optic_ERCO_khk_F = 1;
		optic_ERCO_snd_F = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems;
};
class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems;
};
class amf_sig552_gripod_slot: UnderBarrelSlot
{
	displayName = "Gripod slot";
};
class amf_western_sig552_gripod_slot: amf_sig552_gripod_slot
{
	linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
};
class Safety_base;
class InventoryItem_Base_F;
class InventoryUnderItem_Base_F: InventoryItem_Base_F
{
	type = 302;
	mass = 2;
	mountAction = "GestureMountMuzzle";
	unmountAction = "GestureDismountMuzzle";
};
class RscInGameUI
{
	class RHS_Gripod1
	{
		idd = 3006;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getVariable 'BIS_fnc_initDisplay'); _this call AMF_fnc_rhs_gripod";
	};
	class amf_sig552_grip2: RHS_Gripod1{};
	class amf_sig552_grip3: RHS_Gripod1{};
	class amf_sig552_grip4: RHS_Gripod1{};
};
class CfgFunctions
{
	class sig552_bipod
	{
		tag = "AMF";
		class function_bipod_sig552
		{
			file = "amf_sig552\Script\Functions";
			class rhs_findplayer{};
			class rhs_gripod{};
			class rhs_gripod_change{};
		};
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class amf_sig552_01_Base_F: Rifle_Base_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		reloadAction = "GestureReloadSPAR_01";
		magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 0;
		recoil = "recoil_spar";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.5;
		initSpeed = -1;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 92;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M"};
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913{};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[] = {0.2,0.7};
				iconScale = 0.2;
				compatibleItems[] = {};
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "SIG 552";
		handAnim[] = {"OFP2_ManSkeleton","\amf_sig552\anim\amf_hand_nogrip.rtm"};
		dexterity = 1.8;
		selectionFireAnim = "muzzleFlash";
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.446684,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.446684,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.446684,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.446684,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",0.562341,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",0.562341,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",0.562341,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",0.562341,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",0.562341,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",0.562341,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",0.562341,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",0.562341,1,15};
		soundBullet[] = {"bullet1",0.087,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.63095737,1,30};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.25118864,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1.0,1,10};
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.067;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
			};
			soundBurst = 0;
			burst = 3;
			reloadTime = 0.066;
			recoil = "recoil_burst_sdar";
			recoilProne = "recoil_burst_prone_sdar";
			dispersion = 0.00131;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 10;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet","MX_Tail_SoundSet","MX_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_silencerShot_SoundSet","MX_silencerTail_SoundSet","MX_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.066;
			recoil = "recoil_auto_sdar";
			recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.00131;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 5;
		};
	};
	class amf_sig552: amf_sig552_01_Base_F
	{
		scope = 2;
		author = "Samuel Janech & AMF TEAM";
		displayName = "SIG 552";
		model = "\amf_sig552\amf_sig552.p3d";
		picture = "\amf_sig552\data\Ui\Sig_552.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\amf_sig552\anim\amf_hand_nogrip.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 92;
			allowedSlots[] = {901};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_M"};
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913{};
			class GripodSlot: amf_western_sig552_gripod_slot{};
		};
	};
};
