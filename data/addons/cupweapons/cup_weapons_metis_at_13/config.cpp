class CfgPatches
{
	class CUP_Weapons_Metis_AT_13
	{
		units[]={};
		weapons[]=
		{
			"CUP_launch_Metis"
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
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_Metis: Launcher_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_metis";
		model="\CUP\Weapons\CUP_Weapons_Metis_AT_13\CUP_metis_launcher_loaded.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Metis_AT_13\data\ui\gear_metis_x_ca.paa";
		modelOptics="\CUP\Weapons\CUP_Weapons_Metis_AT_13\CUP_2Dscope_Metis.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Metis_AT_13\data\anim\Metis.rtm"
		};
		cameraDir="look";
		opticsZoomMin=0.078000002;
		opticsZoomMax=0.078000002;
		opticsZoomInit=0.078000002;
		magazines[]=
		{
			"CUP_AT13_M",
			"Vorona_HEAT",
			"Vorona_HE"
		};
		sounds[]=
		{
			"StandardSound"
		};
		class gunParticles
		{
			class effect1
			{
				effectname="CUP_Metis_caps";
				positionname="usti hlavne";
				directionname="cap_dir_1";
			};
			class effect2
			{
				effectName="CUP_Metis_caps";
				positionname="konec hlavne";
				directionname="cap_dir_2";
			};
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_Launcher";
		AGM_Backblast_Angle=45;
		AGM_Backblast_Range=30;
		AGM_Backblast_Damage=0.5;
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",
				3.1622801,
				1,
				2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		inertia=1.1;
		dexterity=0.80000001;
		aimTransitionSpeed=1;
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Metis_AT_13\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Metis_AT_13\data\sfx\Dry",
			1,
			1,
			35
		};
		soundFly[]=
		{
			"CUP\Weapons\CUP_Weapons_Metis_AT_13\data\sfx\Fly",
			0.63095737,
			1.5,
			300
		};
		value=20;
		canLock=0;
		weaponLockDelay=1.5;
		weaponLockSystem=0;
		lockAcquire=1;
		recoil="launcherBase";
		aiRateOfFire=5;
		aiRateOfFireDistance=2500;
		minRange=10;
		minRangeProbab=0.30000001;
		midRange=1000;
		midRangeProbab=0.57999998;
		maxRange=2000;
		maxRangeProbab=0.039999999;
		class Library
		{
			libTextDesc="$STR_CUP_lib_metis";
		};
		descriptionShort="$STR_CUP_dss_metis";
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		visionMode[]=
		{
			"Normal",
			"Ti"
		};
		thermalMode[]={4};
		reloadAction="ReloadRPG";
		magazineReloadTime=0.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=121.2;
		};
	};
};
