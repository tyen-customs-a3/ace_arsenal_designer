class CfgPatches
{
	class CUP_Weapons_Panzerfaust
	{
		units[]={};
		weapons[]=
		{
			"CUP_launch_PzF_Base",
			"CUP_launch_PzF3",
			"CUP_launch_PzF3_Loaded",
			"CUP_launch_PzF3_Used",
			"CUP_launch_BF3",
			"CUP_launch_BF3_Loaded",
			"CUP_launch_PzF3_Used",
			"CUP_launch_HCPF3",
			"CUP_launch_HCPF3_Loaded",
			"CUP_launch_PzF3_Used"
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
	CUP_launch_PzF3_Loaded[]=
	{
		"CUP_launch_PzF3",
		"CUP_launch_PzF3_Used"
	};
	CUP_launch_BF3_Loaded[]=
	{
		"CUP_launch_BF3",
		"CUP_launch_PzF3_Used"
	};
	CUP_launch_HCPF3_Loaded[]=
	{
		"CUP_launch_HCPF3",
		"CUP_launch_PzF3_Used"
	};
};
class Mode_SemiAuto;
class CowsSlot;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_PzF_Base: Launcher_Base_F
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			allowedSlots[]={901};
		};
		aimTransitionSpeed=0.5;
		scope=0;
		displayName="Panzerfaust 3";
		model="\CUP\Weapons\CUP_Weapons_Panzerfaust\CUP_PzFst3.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Panzerfaust\data\anim\Pzf3.rtm"
		};
		magazines[]=
		{
			"CUP_PTF3IT_M",
			"CUP_PTFHE_M",
			"CUP_PTFHC_M"
		};
		AGM_Backblast_Angle=45;
		AGM_Backblast_Range=20;
		AGM_Backblast_Damage=1;
		class BaseSoundModeType
		{
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"CUP_RPG7_Closure_SoundSet",
				"CUP_RPG7_Shot_SoundSet",
				"CUP_mmg1_Tail_SoundSet"
			};
		};
		sounds[]=
		{
			"StandardSound"
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			1,
			1,
			10
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Panzerfaust\data\sfx\Dry",
			1,
			1,
			35
		};
		soundFly[]=
		{
			"CUP\Weapons\CUP_Weapons_Panzerfaust\data\sfx\Fly",
			0.31622776,
			1.5,
			900
		};
		weaponSoundEffect="DefaultRifle";
		jsrs_soundeffect="JSRS2_Distance_Effects_rpg";
		reloadAction="GestureReloadRPG7";
		magazineReloadSwitchPhase=0.40000001;
		magazineReloadTime=0.1;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		picture="\CUP\Weapons\CUP_Weapons_Panzerfaust\data\ui\icon_launch_pzf3_x_ca.paa";
		recoil="recoil_rpg";
		class Library
		{
			libTextDesc="$STR_CUP_lib_PzF3";
		};
		descriptionShort="$STR_CUP_dss_launch_PzF3";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="\CUP\Weapons\CUP_Weapons_Panzerfaust\CUP_PzF_reticle.p3d";
		class OpticsModes
		{
			class PzFScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				opticsZoomMin="2.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax="2.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit="2.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				distanceZoomMin=200;
				distanceZoomMax=200;
				discreteInitIndex=0;
				memoryPointCamera="eye";
				visionMode[]=
				{
					"Normal"
				};
				cameraDir="eye_dir";
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.99526,
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
					"CUP_RPG7_Closure_SoundSet",
					"CUP_RPG7_Shot_SoundSet",
					"CUP_mmg1_Tail_SoundSet"
				};
			};
			aiRateOfFire=7;
			aiRateOfFireDistance=500;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class CUP_launch_PzF3_Loaded: CUP_launch_PzF_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_PzF3";
		scope=1;
		scopeArsenal=1;
		displayName="$STR_CUP_dn_launch_PzF3";
		magazines[]=
		{
			"CUP_PTF3IT_M",
			"CUP_PTFHE_M",
			"CUP_PTFHC_M"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
		};
	};
	class CUP_launch_PzF3: CUP_launch_PzF3_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_launch_PzF3";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass="110 + 40";
		};
	};
	class CUP_launch_PzF3_Used: CUP_launch_PzF3_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		baseWeapon="CUP_launch_PzF3_used";
		scope=1;
		displayName="$STR_CUP_dn_launch_PzF3_Used";
		scopeArsenal=1;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		picture="\CUP\Weapons\CUP_Weapons_Panzerfaust\data\ui\icon_launch_pzf3_used_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
		};
	};
	class CUP_launch_BF3_Loaded: CUP_launch_PzF_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_launch_BF3";
		baseWeapon="CUP_launch_BF3";
		scope=1;
		scopeArsenal=1;
		magazines[]=
		{
			"CUP_PTFHE_M",
			"CUP_PTFHC_M",
			"CUP_PTF3IT_M"
		};
		picture="\CUP\Weapons\CUP_Weapons_Panzerfaust\data\ui\icon_launch_bf3_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
		};
	};
	class CUP_launch_BF3: CUP_launch_BF3_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_launch_BF3";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
		};
	};
	class CUP_launch_HCPF3_Loaded: CUP_launch_PzF_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_launch_HCPF3";
		baseWeapon="CUP_launch_HCPF3";
		scope=1;
		scopeArsenal=1;
		magazines[]=
		{
			"CUP_PTFHC_M",
			"CUP_PTF3IT_M",
			"CUP_PTFHE_M"
		};
		picture="\CUP\Weapons\CUP_Weapons_Panzerfaust\data\ui\icon_launch_hcpf3_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
		};
	};
	class CUP_launch_HCPF3: CUP_launch_HCPF3_Loaded
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_launch_HCPF3";
		scope=2;
		scopeArsenal=2;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
		};
	};
};
