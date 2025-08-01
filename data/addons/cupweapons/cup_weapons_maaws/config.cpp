class CfgPatches
{
	class CUP_Weapons_MAAWS
	{
		units[]={};
		weapons[]=
		{
			"CUP_optic_MAAWS_Scope",
			"CUP_launch_MAAWS",
			"CUP_launch_MAAWS_Scope"
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
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_optic_MAAWS_Scope: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		weaponInfoType="RscWeaponZeroing";
		displayName="$STR_CUP_dn_optic_maaws";
		picture="\CUP\Weapons\CUP_Weapons_MAAWS\data\ui\gear_acco_maaws_scope_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_MAAWS\CUP_m3maaws_optic.p3d";
		descriptionShort="$STR_CUP_dss_optic_maaws";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			optics=1;
			modelOptics="CUP\Weapons\CUP_Weapons_MAAWS\CUP_M3_optic_3x.p3d";
			class OpticsModes
			{
				class LRR
				{
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
					discreteDistance[]={100,200,300,400,500,600,700,800,900};
					discreteDistanceInitIndex=0;
					discreteDistanceCameraPoint[]=
					{
						"o_eye_1",
						"o_eye_2",
						"o_eye_3",
						"o_eye_4",
						"o_eye_5",
						"o_eye_6",
						"o_eye_7",
						"o_eye_8",
						"o_eye_9"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=0;
					cameraDir="o_look2";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur5"
					};
				};
			};
		};
	};
	class CUP_launch_MAAWS: Launcher_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=460;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="$STR_CUP_dn_maaws";
		model="\CUP\Weapons\CUP_Weapons_MAAWS\CUP_M3MAAWS.p3d";
		picture="\CUP\Weapons\CUP_Weapons_MAAWS\data\ui\gear_MAAWS_X_ca.paa";
		UiPicture="\a3\weapons_f\data\ui\icon_at_ca.paa";
		modelOptics="-";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		cursorAim="\a3\weapons_f\data\clear_empty";
		cursorSize=1;
		reloadAction="ReloadRPG";
		recoil="recoil_rpg";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_MAAWS\Data\Anim\maaws.rtm"
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		magazines[]=
		{
			"CUP_MAAWS_HEAT_M",
			"CUP_MAAWS_HEDP_M",
			"MRAWS_HEAT55_F",
			"MRAWS_HE_F",
			"MRAWS_HEAT_F"
		};
		magazineWell[]=
		{
			"CBA_Carl_Gustaf"
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
		sounds[]=
		{
			"StandardSound"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_Launcher";
		AGM_Backblast_Angle=60;
		AGM_Backblast_Range=28;
		AGM_Backblast_Damage=0.69999999;
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
					"Launcher_MRAWS_Shot_SoundSet",
					"Launcher_MRAWS_Tail_SoundSet"
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			dispersion=0.07;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.80000001;
			maxRange=700;
			maxRangeProbab=0.1;
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
		value=20;
		canLock=0;
		lockAcquire=0;
		class Library
		{
			libTextDesc="$STR_CUP_lib_maaws";
		};
		descriptionShort="$STR_CUP_dss_maaws";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=187.39999;
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]=
				{
					"CUP_optic_MAAWS_Scope"
				};
				iconPosition[]={0.25,0.41};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
		};
		inertia=0.89999998;
		aimTransitionSpeed=0.40000001;
		dexterity=1.1;
		class ItemInfo
		{
			priority=3;
		};
		weaponInfoType="RscWeaponZeroing";
		maxZeroing=900;
		ace_reloadlaunchers_enabled=1;
		class OpticsModes
		{
			class irons
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					""
				};
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				discreteDistance[]={100,200,300,400,500,600,700,800,900};
				discreteDistanceCameraPoint[]=
				{
					"eye_1",
					"eye_2",
					"eye_3",
					"eye_4",
					"eye_5",
					"eye_6",
					"eye_7",
					"eye_8",
					"eye_9"
				};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=900;
				cameraDir="look2";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
		};
	};
	class CUP_launch_MAAWS_Scope: CUP_launch_MAAWS
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_MAAWS_Scope";
			};
		};
	};
};
