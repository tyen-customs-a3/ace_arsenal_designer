class CfgPatches
{
	class CUP_Weapons_APILAS
	{
		units[]={};
		weapons[]=
		{
			"CUP_launch_APILAS",
			"CUP_launch_APILAS_Loaded",
			"CUP_launch_APILAS_Used"
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
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CBA_DisposableLaunchers
{
	CUP_launch_APILAS_Loaded[]=
	{
		"CUP_launch_APILAS",
		"CUP_launch_APILAS_Used"
	};
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_APILAS_Loaded: Launcher_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M72A6\data\anim\law_hand_anim.rtm"
		};
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		inertia=0.89999998;
		dexterity=1.2;
		aimTransitionSpeed=0.40000001;
		scope=1;
		scopeArsenal=1;
		baseWeapon="CUP_launch_APILAS";
		displayName="$STR_CUP_dn_apilas";
		reloadAction="ReloadRPG";
		model="\CUP\Weapons\CUP_Weapons_APILAS\CUP_APILAS.p3d";
		magazineReloadTime=0.1;
		magazines[]=
		{
			"CUP_APILAS_M"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
				1.9952624,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_SPG9_Shot_SoundSet",
				"Launcher_SPG9_Tail_SoundSet"
			};
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",
			0.31622776,
			1.5,
			900
		};
		weaponSoundEffect="DefaultRifle";
		picture="\CUP\Weapons\CUP_Weapons_APILAS\data\ui\gear_apilas_X_ca.paa";
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={};
			mass=108;
		};
		ace_overpressure_angle=60;
		ace_overpressure_damage=0.80000001;
		ace_overpressure_range=50;
		recoil="recoil_recoiless_weapon";
		aiRateOfFire=10;
		aiRateOfFireDistance=250;
		minRange=25;
		midRange=300;
		maxRange=600;
		class Library
		{
			libTextDesc="$STR_CUP_lib_apilas";
		};
		descriptionShort="$STR_CUP_dss_apilas";
		distanceZoomMin=100;
		distanceZoomMax=900;
		opticsID=1;
		opticType=1;
		useModelOptics=1;
		modelOptics[]=
		{
			"CUP\Weapons\CUP_Weapons_MAAWS\CUP_M3_optic_3x.p3d"
		};
		opticsZoomMin=0.12;
		opticsZoomMax=0.12;
		opticsZoomInit=0.125;
		discreteDistance[]={200,300,400,500,600};
		discreteDistanceInitIndex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye_1",
			"eye_2",
			"eye_3",
			"eye_4",
			"eye_5"
		};
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		cameraDir="eye_dir";
		visionMode[]={};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur5"
		};
		maxZeroing=600;
		weaponInfoType="RscWeaponZeroing";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_apilas\data\apilas_co.paa"
		};
	};
	class CUP_launch_APILAS: CUP_launch_APILAS_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_APILAS";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
		};
	};
	class CUP_launch_APILAS_Used: CUP_launch_APILAS_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_APILAS_Used";
		scope=1;
		displayName="$STR_CUP_dn_apilas_used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		model="\CUP\Weapons\CUP_Weapons_APILAS\CUP_APILAS_Used.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=108;
		};
	};
};
