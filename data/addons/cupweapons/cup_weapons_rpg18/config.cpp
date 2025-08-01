class CfgPatches
{
	class CUP_Weapons_RPG18
	{
		units[]={};
		weapons[]=
		{
			"CUP_launch_RPG18_Loaded",
			"CUP_launch_RPG18",
			"CUP_launch_RPG18_Used"
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
class CBA_DisposableLaunchers
{
	CUP_launch_RPG18_Loaded[]=
	{
		"CUP_launch_RPG18",
		"CUP_launch_RPG18_Used"
	};
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_RPG18_Loaded: Launcher_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
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
		baseWeapon="CUP_launch_RPG18";
		displayName="$STR_CUP_dn_rpg18";
		reloadAction="ReloadRPG";
		model="\CUP\Weapons\CUP_Weapons_RPG18\CUP_rpg18.p3d";
		magazineReloadTime=0.1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_RPG18\Data\Anim\rpg18.rtm"
		};
		modelOptics="-";
		magazines[]=
		{
			"CUP_RPG18_M"
		};
		sounds[]=
		{
			"StandardSound"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_rpg";
		AGM_Backblast_Angle=40;
		AGM_Backblast_Range=15;
		AGM_Backblast_Damage=1;
		AGM_UsedTube="AGM_launch_RPG18_Used_F";
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s1",
				4,
				1,
				1400
			};
			begin2[]=
			{
				"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s2",
				4,
				1,
				1400
			};
			begin3[]=
			{
				"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s3",
				4,
				1,
				1400
			};
			begin4[]=
			{
				"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s4",
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
			"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Dry",
			1,
			1,
			35
		};
		soundFly[]=
		{
			"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Fly",
			0.31622776,
			1.5,
			900
		};
		weaponSoundEffect="DefaultRifle";
		picture="\CUP\Weapons\CUP_Weapons_RPG18\data\ui\gear_rpg18_X_ca.paa";
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=17.299999;
		};
		recoil="recoil_single_law";
		aiRateOfFire=10;
		aiRateOfFireDistance=100;
		minRange=10;
		midRange=100;
		maxRange=200;
		class Library
		{
			libTextDesc="$STR_CUP_lib_rpg18";
		};
		descriptionShort="$STR_CUP_dss_rpg18";
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class Iron2
			{
				opticsID=2;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.60000002;
				opticsZoomMax=0.60000002;
				opticsZoomInit=0.60000002;
				visionMode="";
				cameraDir="op_look2";
				discreteDistanceInitIndex=0;
				discreteDistance[]={100};
				discreteDistanceCameraPoint[]=
				{
					"look2_10"
				};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Iron: Iron2
			{
				opticsID=1;
				opticsZoomMin=0.25;
				cameraDir="op_look";
				discreteDistanceInitIndex=2;
				discreteDistance[]={50,100,150,200};
				discreteDistanceCameraPoint[]=
				{
					"look_05",
					"look_10",
					"look_15",
					"look_20"
				};
				distanceZoomMin=50;
				distanceZoomMax=200;
			};
		};
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
	};
	class CUP_launch_RPG18: CUP_launch_RPG18_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_RPG18";
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
	class CUP_launch_RPG18_Used: CUP_launch_RPG18_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_RPG18_Used";
		scope=1;
		displayName="$STR_CUP_dn_rpg18_used";
		model="\CUP\Weapons\CUP_Weapons_RPG18\CUP_rpg18_used.p3d";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=17.299999;
		};
	};
};
