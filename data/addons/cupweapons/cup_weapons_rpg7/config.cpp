class CfgPatches
{
	class CUP_Weapons_RPG7
	{
		units[]={};
		weapons[]=
		{
			"CUP_launch_RPG7V",
			"CUP_optic_PGO7V",
			"CUP_optic_PGO7V2",
			"CUP_optic_PGO7V3",
			"CUP_optic_NSPU_RPG",
			"CUP_launch_RPG7V_PGO7V",
			"CUP_launch_RPG7V_PGO7V2",
			"CUP_launch_RPG7V_PGO7V3",
			"CUP_launch_RPG7V_NSPU"
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
class CowsSlot;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_RPG7V: Launcher_Base_F
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
			mass=138.92;
			class CowsSlot
			{
				displayName="Optics Slot";
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"CUP_optic_PGO7V",
					"CUP_optic_PGO7V2",
					"CUP_optic_PGO7V3",
					"CUP_optic_NSPU_RPG"
				};
			};
		};
		aimTransitionSpeed=0.5;
		scope=2;
		displayName="$STR_CUP_dn_rpg7v";
		model="\CUP\Weapons\CUP_Weapons_RPG7\CUP_rhs_rpg7v2.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_RPG7\data\anim\RPG7.rtm"
		};
		modelOptics="-";
		magazines[]=
		{
			"CUP_PG7V_M",
			"CUP_PG7VM_M",
			"CUP_PG7VL_M",
			"CUP_PG7VR_M",
			"CUP_OG7_M",
			"CUP_TBG7V_M"
		};
		magazineWell[]=
		{
			"CBA_RPG7",
			"RPG7"
		};
		AGM_Backblast_Angle=45;
		AGM_Backblast_Range=20;
		AGM_Backblast_Damage=1;
		ace_reloadlaunchers_enabled=1;
		class BaseSoundModeType;
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
			"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\Dry",
			1,
			1,
			35
		};
		soundFly[]=
		{
			"CUP\Weapons\CUP_Weapons_RPG7\data\sfx\Fly",
			0.31622776,
			1.5,
			900
		};
		weaponSoundEffect="DefaultRifle";
		jsrs_soundeffect="JSRS2_Distance_Effects_rpg";
		reloadAction="GestureReloadRPG7";
		magazineReloadSwitchPhase=0.40000001;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\cup_weapons_rpg7\data\cup_rhs_rpg7v2_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_RPG7\data\ui\gear_rpg7_X_ca.paa";
		recoil="recoil_rpg";
		class Library
		{
			libTextDesc="$STR_CUP_lib_rpg7v";
		};
		descriptionShort="$STR_CUP_dss_rpg7v";
		weaponInfoType="RscWeaponZeroing";
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
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=200;
				distanceZoomMax=500;
				cameraDir="eye_look";
				discreteDistance[]={100,150,200,100,150,200,300};
				discreteDistanceCameraPoint[]=
				{
					"eye_v_100",
					"eye_v_150",
					"eye_v_200",
					"eye_vl_100",
					"eye_vl_150",
					"eye_vl_200",
					"eye_vl_300"
				};
				discreteDistanceInitIndex=0;
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
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class CUP_optic_PGO7V: ItemCore
	{
		scope=2;
		displayName="$STR_CUP_dn_PGO7V";
		picture="\CUP\Weapons\CUP_Weapons_RPG7\data\ui\gear_acco_pgo7v_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_RPG7\CUP_rhs_pgo7v.p3d";
		descriptionShort="Magnification: 2.7x";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13.2;
			optics=1;
			modelOptics="\CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V_reticle.p3d";
			class OpticsModes
			{
				class regular
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.138;
					opticsZoomMax=0.138;
					opticsZoomInit=0.138;
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={0.138,0.138};
					discreteInitIndex=0;
					memoryPointCamera="sighteye";
					modelOptics[]=
					{
						"CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V_reticle.p3d",
						"CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V_reticle_night.p3d"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="sightview";
					visionMode[]=
					{
						"Normal"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
				};
				class iron: regular
				{
					opticsID=2;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					cameraDir="eye_look";
					discreteDistance[]={100,150,200,100,150,200,300};
					discreteDistanceCameraPoint[]=
					{
						"eye_v_100",
						"eye_v_150",
						"eye_v_200",
						"eye_vl_100",
						"eye_vl_150",
						"eye_vl_200",
						"eye_vl_300"
					};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class CUP_optic_PGO7V2: CUP_optic_PGO7V
	{
		displayName="$STR_CUP_dn_PGO7V2";
		picture="\CUP\Weapons\CUP_Weapons_RPG7\data\ui\gear_acco_pgo7v_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_RPG7\CUP_rhs_pgo7v.p3d";
		class ItemInfo: ItemInfo
		{
			modelOptics="\CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V2_reticle.p3d";
			class OpticsModes: OpticsModes
			{
				class regular: regular
				{
					modelOptics[]=
					{
						"CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V2_reticle.p3d",
						"CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V2_reticle_night.p3d"
					};
				};
				class iron: regular
				{
					opticsID=2;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					cameraDir="eye_look";
					discreteDistance[]={100,150,200,100,150,200,300};
					discreteDistanceCameraPoint[]=
					{
						"eye_v_100",
						"eye_v_150",
						"eye_v_200",
						"eye_vl_100",
						"eye_vl_150",
						"eye_vl_200",
						"eye_vl_300"
					};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class CUP_optic_PGO7V3: CUP_optic_PGO7V
	{
		displayName="$STR_CUP_dn_PGO7V3";
		picture="\CUP\Weapons\CUP_Weapons_RPG7\data\ui\gear_acco_pgo7v_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_RPG7\CUP_rhs_pgo7v3.p3d";
		class ItemInfo: ItemInfo
		{
			mass=13.2;
			modelOptics="\CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V3_reticle.p3d";
			class OpticsModes: OpticsModes
			{
				class regular: regular
				{
					modelOptics[]=
					{
						"CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V3_reticle.p3d",
						"CUP\Weapons\CUP_Weapons_RPG7\CUP_PGO7V3_reticle_night.p3d"
					};
				};
				class iron: regular
				{
					opticsID=2;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					cameraDir="eye_look";
					discreteDistance[]={100,150,200,100,150,200,300};
					discreteDistanceCameraPoint[]=
					{
						"eye_v_100",
						"eye_v_150",
						"eye_v_200",
						"eye_vl_100",
						"eye_vl_150",
						"eye_vl_200",
						"eye_vl_300"
					};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class CUP_optic_NSPU_RPG: CUP_optic_PGO7V
	{
		displayName="$STR_CUP_dn_NSPU_RPG";
		descriptionShort="Magnification: 3.5x";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\NSPU\data\UI\gear_acco_NSPU_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_RPG7\CUP_NSPU_optic.p3d";
		class ItemInfo: ItemInfo
		{
			mass=10;
			modelOptics="\CUP\Weapons\CUP_Weapons_RPG7\CUP_nspu_reticle.p3d";
			class OpticsModes
			{
				class regular
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="sighteye";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="sightview";
					visionMode[]=
					{
						"NVG"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
				};
			};
		};
	};
	class CUP_launch_RPG7V_PGO7V: CUP_launch_RPG7V
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_PGO7V";
			};
		};
	};
	class CUP_launch_RPG7V_PGO7V2: CUP_launch_RPG7V
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_PGO7V2";
			};
		};
	};
	class CUP_launch_RPG7V_PGO7V3: CUP_launch_RPG7V
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_PGO7V3";
			};
		};
	};
	class CUP_launch_RPG7V_NSPU: CUP_launch_RPG7V
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemOptic
			{
				slot="CowsSlot";
				item="CUP_optic_NSPU_RPG";
			};
		};
	};
};
