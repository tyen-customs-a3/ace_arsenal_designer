class CfgPatches
{
	class CUP_Weapons_Stinger
	{
		units[]={};
		weapons[]=
		{
			"CUP_launch_FIM92Stinger",
			"CUP_launch_FIM92Stinger_Loaded",
			"CUP_launch_FIM92Stinger_Used"
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
	CUP_launch_FIM92Stinger_Loaded[]=
	{
		"CUP_launch_FIM92Stinger",
		"CUP_launch_FIM92Stinger_Used"
	};
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_FIM92Stinger_Loaded: Launcher_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		scopeArsenal=1;
		baseWeapon="CUP_launch_FIM92Stinger";
		displayName="$STR_CUP_dn_stinger";
		model="\CUP\Weapons\CUP_Weapons_Stinger\CUP_Stinger.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Stinger\data\ui\w_fim92_ca.paa";
		UiPicture="\a3\weapons_f\data\ui\icon_aa_ca.paa";
		modelOptics="-";
		cursorAim="\a3\weapons_f\data\clear_empty";
		cursor="missile";
		cursorSize=1;
		reloadAction="ReloadRPG";
		magazineReloadTime=0.1;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Stinger\data\anim\Stinger.rtm"
		};
		magazines[]=
		{
			"CUP_Stinger_M"
		};
		sounds[]=
		{
			"StandardSound"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_Stinger";
		AGM_Backblast_Angle=45;
		AGM_Backblast_Range=15;
		AGM_Backblast_Damage=0.30000001;
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.30000001;
		ace_overpressure_range=15;
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"CUP\Weapons\CUP_Weapons_Stinger\data\sfx\AA_s1",
				10,
				1,
				1200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Stinger\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Stinger\data\sfx\Dry",
			1,
			1,
			35
		};
		soundFly[]=
		{
			"CUP\Weapons\CUP_Weapons_Stinger\data\sfx\Fly",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Stinger\data\sfx\AA_seek",
			0.64999998,
			1
		};
		lockedTargetSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Stinger\data\sfx\AA_lock",
			0.64999998,
			2.5
		};
		value=20;
		canLock=2;
		recoil="recoil_single_titan";
		minRange=10;
		minRangeProbab=0.30000001;
		midRange=2500;
		midRangeProbab=0.80000001;
		maxRange=4800;
		maxRangeProbab=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=2500;
		class Library
		{
			libTextDesc="$STR_CUP_lib_stinger";
		};
		descriptionShort="$STR_CUP_dss_stinger";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=22.200001;
		};
		inertia=1.2;
		aimTransitionSpeed=0.40000001;
		class ItemInfo
		{
			priority=3;
		};
		weaponLockDelay=3;
		weaponLockSystem=1;
		cmImmunity=0.89999998;
		lockAcquire=1;
	};
	class CUP_launch_FIM92Stinger: CUP_launch_FIM92Stinger_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_FIM92Stinger";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=241.2;
		};
	};
	class CUP_launch_FIM92Stinger_Used: CUP_launch_FIM92Stinger_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_FIM92Stinger_Used";
		scope=1;
		displayName="$STR_CUP_dn_stinger_used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=22.200001;
		};
	};
};
