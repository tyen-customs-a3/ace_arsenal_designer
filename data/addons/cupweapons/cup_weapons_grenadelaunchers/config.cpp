class CfgPatches
{
	class CUP_Weapons_GrenadeLaunchers
	{
		units[]={};
		weapons[]=
		{
			"CUP_glaunch_Base",
			"CUP_glaunch_M32",
			"CUP_glaunch_M79",
			"CUP_glaunch_Mk13",
			"CUP_glaunch_6G30"
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
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CUP_EastMuzzleSlot9mm;
class CUP_PicatinnySideMount;
class CfgWeaponCursors
{
	class gl;
	class cup_gl_rifle: gl
	{
		author="$STR_CUP_AUTHOR_STRING";
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
	class CUP_glaunch_Base: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=0;
		weaponInfoType="RscWeaponZeroing";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		cursor="cup_gl_rifle";
		magazineWell[]=
		{
			"CBA_40mm_M203"
		};
		magazines[]=
		{
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"1Rnd_HE_Grenade_shell",
			"CUP_1Rnd_StarCluster_White_M203",
			"CUP_1Rnd_StarCluster_Red_M203",
			"CUP_1Rnd_StarCluster_Green_M203",
			"CUP_1Rnd_StarFlare_White_M203",
			"CUP_1Rnd_StarFlare_Red_M203",
			"CUP_1Rnd_StarFlare_Green_M203",
			"CUP_FlareWhite_M203",
			"CUP_FlareGreen_M203",
			"CUP_FlareRed_M203",
			"CUP_FlareYellow_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_SmokeRed_M203",
			"CUP_1Rnd_SmokeGreen_M203",
			"CUP_1Rnd_SmokeYellow_M203",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
		cameraDir="GL look";
		memoryPointCamera="GL eye";
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			10
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
			class StandardSound
			{
				soundSetShot[]=
				{
					"CUP_GrenadeLaunchers_Shot_SoundSet",
					"UGL_Tail_SoundSet",
					"UGL_InteriorTail_SoundSet"
				};
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\sfx\g_launcher",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		autoReload=0;
		autoAimEnabled=0;
		reloadAction="gesturereloadtrgugl";
		reloadMagazineSound[]=
		{
			"A3\sounds_f\Weapons\grenades\ugl_reload2",
			1,
			1,
			10
		};
		drySound[]=
		{
			"A3\sounds_f\Weapons\other\sfx5",
			0.56234133,
			1,
			10
		};
		ffMagnitude=0.1;
		ffFrequency=1;
		ffCount=1;
		dispersion=0.0070000002;
		aiDispersionCoefY=6;
		muzzlePos="usti granatometu";
		muzzleEnd="konec granatometu";
		cartridgePos="";
		cartridgeVel="";
		minRange=30;
		minRangeProbab=0.1;
		midRange=200;
		midRangeProbab=0.69999999;
		maxRange=400;
		maxRangeProbab=0.050000001;
		recoil="recoil_mmg_02";
	};
	class CUP_glaunch_M32: CUP_glaunch_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\anim\M32.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\ui\gear_m32_X_ca.paa";
		displayName="$STR_CUP_dn_m32";
		class Library
		{
			libTextDesc="$STR_CUP_lib_m32";
		};
		descriptionShort="$STR_CUP_dss_m32";
		discreteDistance[]={0,50,100,150,200,250,300,350,375};
		discreteDistanceCameraPoint[]=
		{
			"gl_eye_0m",
			"gl_eye_50m",
			"gl_eye_100m",
			"gl_eye_150m",
			"gl_eye_200m",
			"gl_eye_250m",
			"gl_eye_300m",
			"gl_eye_350m",
			"gl_eye_375m"
		};
		discreteDistanceInitIndex=4;
		cameraDir="gl_look";
		model="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\CUP_M32.p3d";
		magazineWell[]=
		{
			"CBA_40mm_M203",
			"CBA_40mm_EGLM",
			"CBA_40mm_M203_6rnds"
		};
		magazines[]=
		{
			"CUP_6Rnd_HE_M203",
			"CUP_6Rnd_FlareWhite_M203",
			"CUP_6Rnd_FlareGreen_M203",
			"CUP_6Rnd_FlareRed_M203",
			"CUP_6Rnd_FlareYellow_M203",
			"CUP_6Rnd_Smoke_M203",
			"CUP_6Rnd_SmokeRed_M203",
			"CUP_6Rnd_SmokeGreen_M203",
			"CUP_6Rnd_SmokeYellow_M203",
			"CUP_1Rnd_HE_M203",
			"CUP_1Rnd_HEDP_M203",
			"1Rnd_HE_Grenade_shell",
			"CUP_1Rnd_StarCluster_White_M203",
			"CUP_1Rnd_StarCluster_Red_M203",
			"CUP_1Rnd_StarCluster_Green_M203",
			"CUP_1Rnd_StarFlare_White_M203",
			"CUP_1Rnd_StarFlare_Red_M203",
			"CUP_1Rnd_StarFlare_Green_M203",
			"CUP_FlareWhite_M203",
			"CUP_FlareGreen_M203",
			"CUP_FlareRed_M203",
			"CUP_FlareYellow_M203",
			"CUP_1Rnd_Smoke_M203",
			"CUP_1Rnd_SmokeRed_M203",
			"CUP_1Rnd_SmokeGreen_M203",
			"CUP_1Rnd_SmokeYellow_M203",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=131.8;
			class CowsSlot
			{
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPosition[]={0.20999999,0.50999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
		};
		aimTransitionSpeed=0.69999999;
	};
	class CUP_glaunch_M79: CUP_glaunch_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\anim\M79.rtm"
		};
		reloadAction="GestureReloadHunterShotgun01";
		magazineReloadSwitchPhase=0.40700001;
		picture="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\ui\gear_m79_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\CUP_M79.p3d";
		magazineWell[]=
		{
			"CBA_40mm_M203"
		};
		displayName="$STR_CUP_dn_m79";
		class Library
		{
			libTextDesc="$STR_CUP_lib_m79";
		};
		descriptionShort="$STR_CUP_dss_m79";
		cameraDir="OP_look";
		discreteDistance[]={50,75,100,150,200,250,300,350,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300",
			"OP_eye_350",
			"OP_eye_400"
		};
		discreteDistanceInitIndex=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.5;
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
		};
		aimTransitionSpeed=1;
		class Single: Single
		{
			magazineReloadTime=6;
		};
	};
	class CUP_glaunch_Mk13: CUP_glaunch_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\anim\Mk13.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\ui\gear_mk13_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\CUP_Mk13.p3d";
		magazineWell[]=
		{
			"CBA_40mm_M203",
			"CBA_40mm_EGLM"
		};
		displayName="$STR_CUP_dn_mk13";
		class Library
		{
			libTextDesc="$STR_CUP_lib_mk13";
		};
		descriptionShort="$STR_CUP_dss_mk13";
		cameraDir="OP_look";
		discreteDistance[]={50,75,100,150,200,250,300,350,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300",
			"OP_eye_350",
			"OP_eye_400"
		};
		discreteDistanceInitIndex=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.200001;
			class CowsSlot
			{
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPosition[]={0.19,0.41};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
		};
		aimTransitionSpeed=1.1;
	};
	class CUP_glaunch_6G30: CUP_glaunch_M32
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\anim\6G30.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\ui\gear_6G30_X_ca.paa";
		displayName="$STR_CUP_dn_6G30";
		class Library
		{
			libTextDesc="$STR_CUP_lib_m32";
		};
		descriptionShort="$STR_CUP_dss_m32";
		cameraDir="gl_look";
		discreteDistance[]={50,100,150,200,250,300,350};
		discreteDistanceCameraPoint[]=
		{
			"gl_eye_50m",
			"gl_eye_100m",
			"gl_eye_150m",
			"gl_eye_200m",
			"gl_eye_250m",
			"gl_eye_300m",
			"gl_eye_350m"
		};
		discreteDistanceInitIndex=1;
		aimTransitionSpeed=0.69999999;
		model="\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\CUP_6G30.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\6g30_co.paa"
		};
		magazines[]=
		{
			"CUP_6Rnd_HE_GP25_M",
			"CUP_1Rnd_HE_GP25_M",
			"CUP_IlumFlareWhite_GP25_M",
			"CUP_IlumFlareRed_GP25_M",
			"CUP_IlumFlareGreen_GP25_M",
			"CUP_FlareWhite_GP25_M",
			"CUP_FlareGreen_GP25_M",
			"CUP_FlareRed_GP25_M",
			"CUP_FlareYellow_GP25_M",
			"CUP_1Rnd_SMOKE_GP25_M",
			"CUP_1Rnd_SMOKERED_GP25_M",
			"CUP_1Rnd_SMOKEGREEN_GP25_M",
			"CUP_1Rnd_SMOKEYELLOW_GP25_M"
		};
		magazineWell[]=
		{
			"CBA_40mm_GP",
			"CBA_40mm_GP_6rnds",
			"VOG_40mm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=136.60001;
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
		};
	};
};
