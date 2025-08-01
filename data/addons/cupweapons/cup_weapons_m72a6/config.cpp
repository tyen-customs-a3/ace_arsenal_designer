class CfgPatches
{
	class CUP_Weapons_M72A6
	{
		units[]={};
		weapons[]=
		{
			"CUP_launch_M72A6",
			"CUP_launch_M72A6_Loaded",
			"CUP_launch_M72A6_Used",
			"CUP_launch_M72A6_Special",
			"CUP_launch_M72A6_Special_Loaded",
			"CUP_launch_M72A6_Special_Used"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds"
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
	CUP_launch_M72A6_Loaded[]=
	{
		"CUP_launch_M72A6",
		"CUP_launch_M72A6_Used"
	};
	CUP_launch_M72A6_Special_Loaded[]=
	{
		"CUP_launch_M72A6_Special",
		"CUP_launch_M72A6_Special_Used"
	};
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_M72A6_Loaded: Launcher_Base_F
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
		inertia=0.80000001;
		dexterity=1.2;
		aimTransitionSpeed=0.60000002;
		scope=1;
		scopeArsenal=1;
		baseWeapon="CUP_launch_M72A6_Loaded";
		displayName="$STR_CUP_dn_m72a6";
		reloadAction="ReloadRPG";
		model="\CUP\Weapons\CUP_Weapons_M72A6\CUP_m72a6_launcher.p3d";
		magazineReloadTime=0.1;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		modelOptics="-";
		magazines[]=
		{
			"CUP_M72A6_M"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"CUP\Weapons\CUP_Weapons_M72A6\data\sfx\RPG_s1",
				4,
				1,
				1400
			};
			begin2[]=
			{
				"CUP\Weapons\CUP_Weapons_M72A6\data\sfx\RPG_s2",
				4,
				1,
				1400
			};
			begin3[]=
			{
				"CUP\Weapons\CUP_Weapons_M72A6\data\sfx\RPG_s3",
				4,
				1,
				1400
			};
			begin4[]=
			{
				"CUP\Weapons\CUP_Weapons_M72A6\data\sfx\RPG_s4",
				4,
				1,
				1400
			};
			soundBegin[]=
			{
				"begin1",
				0.25,
				"begin2",
				0.25,
				"begin3",
				0.25,
				"begin4",
				0.25
			};
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_M72A6\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M72A6\data\sfx\Dry",
			1,
			1,
			35
		};
		soundFly[]=
		{
			"CUP\Weapons\CUP_Weapons_M72A6\data\sfx\Fly",
			0.31622776,
			1.5,
			900
		};
		weaponSoundEffect="DefaultRifle";
		picture="\CUP\Weapons\CUP_Weapons_M72A6\data\ui\gear_M72A6_X_ca.paa";
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=17.299999;
		};
		ace_overpressure_angle=40;
		ace_overpressure_damage=0.5;
		ace_overpressure_range=15;
		recoil="recoil_single_law";
		aiRateOfFire=10;
		aiRateOfFireDistance=100;
		minRange=10;
		midRange=100;
		maxRange=200;
		descriptionShort="$STR_CUP_dss_m72a6";
		maxZeroing=400;
		weaponInfoType="RscWeaponZeroing";
		distanceZoomMin=50;
		distanceZoomMax=400;
		discreteDistance[]={50,100,150,200};
		discreteDistanceCameraPoint[]=
		{
			"eye_1",
			"eye_2",
			"eye_3",
			"eye_4"
		};
		discreteDistanceInitIndex=0;
		memorypointcamera="eye";
		cameraDir="eye_dir";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_m72a6\data\m72a6_co.paa"
		};
	};
	class CUP_launch_M72A6_Special_Loaded: CUP_launch_M72A6_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		scopeArsenal=1;
		baseWeapon="CUP_launch_M72A6_Special";
		displayName="$STR_CUP_dn_m72a6_special";
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_m72a6\data\m72a6_special_co.paa"
		};
	};
	class CUP_launch_M72A6: CUP_launch_M72A6_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_M72A6";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=57.299999;
		};
	};
	class CUP_launch_M72A6_Used: CUP_launch_M72A6_Loaded
	{
		author="$STR_BWA3_Author";
		baseWeapon="CUP_launch_M72A6_Used";
		scope=1;
		displayName="$STR_CUP_dn_m72a6_used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		model="\CUP\Weapons\CUP_Weapons_M72A6\CUP_m72a6_used.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=17.299999;
		};
	};
	class CUP_launch_M72A6_Special: CUP_launch_M72A6_Special_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_M72A6_Special";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=57.299999;
		};
	};
	class CUP_launch_M72A6_Special_Used: CUP_launch_M72A6_Special_Loaded
	{
		author="$STR_BWA3_Author";
		baseWeapon="CUP_launch_M72A6_Special_Used";
		scope=1;
		displayName="$STR_CUP_dn_m72a6_special_used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		model="\CUP\Weapons\CUP_Weapons_M72A6\CUP_m72a6_special_used.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=17.299999;
		};
	};
};
