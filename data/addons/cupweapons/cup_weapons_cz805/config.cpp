class CfgPatches
{
	class CUP_Weapons_CZ805
	{
		units[]={};
		weapons[]=
		{
			"CUP_arifle_CZ805_Base",
			"CUP_arifle_CZ805_A2",
			"CUP_arifle_CZ805_A1",
			"CUP_arifle_CZ805_GL",
			"CUP_arifle_CZ805_A2_blk",
			"CUP_arifle_CZ805_A2_coyote",
			"CUP_arifle_CZ805_A1_blk",
			"CUP_arifle_CZ805_A1_coyote",
			"CUP_arifle_CZ805_GL_blk",
			"CUP_arifle_CZ805_GL_coyote",
			"CUP_arifle_CZ805_A2_Holo_Laser",
			"CUP_arifle_CZ805_A1_Holo_Laser",
			"CUP_arifle_CZ805_A2_Aco_Laser",
			"CUP_arifle_CZ805_A1_Aco_Laser",
			"CUP_arifle_CZ805_A1_MRCO_Laser",
			"CUP_arifle_CZ805_A2_MRCO_Laser",
			"CUP_arifle_CZ805_GL_Hamr_Laser",
			"CUP_arifle_CZ805_A1_ZDDot_Laser",
			"CUP_arifle_CZ805_GL_ZDDot_Laser",
			"CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds",
			"CUP_arifle_CZ805_B",
			"CUP_arifle_CZ805_B_GL",
			"CUP_arifle_CZ805B_GL_ACOG_Laser",
			"CUP_arifle_CZ805B_ACOG_Laser"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Bren2",
			"CUP_Weapons_West_Attachments"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_arifle_CZ805_Base: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		magazines[]=
		{
			"CUP_30Rnd_556x45_CZ805",
			"CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805",
			"CUP_30Rnd_TE1_Green_Tracer_556x45_CZ805",
			"CUP_30Rnd_TE1_Yellow_Tracer_556x45_CZ805",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
			"CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
			"CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
			"CUP_100Rnd_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
			"CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"
		};
		magazineWell[]=
		{
			"CBA_556x45_G36"
		};
		reloadAction="GestureReloadSPAR_01";
		magazineReloadSwitchPhase=0.1829;
		discreteDistance[]={350,500};
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo
		{
			mass=79.400002;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
			};
			class CUP_PicatinnyTopMountCZ805: CUP_PicatinnyTopMount
			{
			};
			class CUP_PicatinnySideMountCZ805: CUP_PicatinnySideMount
			{
			};
			class UnderBarrelSlot
			{
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_CZ805\Anims\CZ805.rtm"
		};
		dexterity=1.5;
		inertia=0.5;
		aimTransitionSpeed=1;
		selectionFireAnim="zasleh";
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_G36";
		initSpeed=-0.87282997;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=355.60001;
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m4_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m4_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.078947;
			dispersion=0.0011;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m4_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m4_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.078947;
			dispersion=0.0011;
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m4_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m4_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.078947;
			dispersion=0.0011;
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			aiBurstTerminable=1;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=700;
		};
		class CUP_CZ_805_G1: UGL_F
		{
			displayName="$STR_CUP_dn_g1_gl";
			descriptionShort="$STR_CUP_dss_g1_gl";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"CUP_1Rnd_HE_M203",
				"CUP_1Rnd_HEDP_M203",
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
				"1Rnd_HE_Grenade_shell",
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
			reloadAction="GestureReloadKatibaUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_ugl_reload",
				1,
				1,
				10
			};
			opticsZoomMin=0.25;
			opticsZoomMax=1.25;
			opticsZoomInit=0.75;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_CZ805\data\sfx\Dry",
			"db-8",
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_CZ805\data\sfx\Reload",
			"db-8",
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_cz805";
		};
	};
	class CUP_arifle_CZ805_A2: CUP_arifle_CZ805_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_cz805_a2";
		model="CUP\Weapons\CUP_Weapons_CZ805\CUP_CZ_805_A2.p3d";
		descriptionShort="$STR_CUP_dss_cz805_a2";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_cz805_a2_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=276.85999;
		initSpeed=-0.87282997;
		recoil="CUP_cz805_a2_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=74.970001;
			class CUP_PicatinnyTopMountCZ805: CUP_PicatinnyTopMountCZ805
			{
				iconPosition[]={0.537,0.2};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Center";
			};
			class CUP_PicatinnySideMountCZ805: CUP_PicatinnySideMountCZ805
			{
				iconPosition[]={0.34999999,0.36000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.17588235,0.35294119};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPinPoint="center";
				iconPosition[]={0.27500001,0.59799999};
				iconScale=0.34999999;
				iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
		};
		aimTransitionSpeed=1.1;
	};
	class CUP_arifle_CZ805_A1: CUP_arifle_CZ805_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_cz805_a1";
		model="CUP\Weapons\CUP_Weapons_CZ805\CUP_CZ_805_A1.p3d";
		descriptionShort="$STR_CUP_dss_cz805_a1";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_cz805_a1_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=355.60001;
		initSpeed=-0.93695998;
		recoil="CUP_cz805_a1_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79.400002;
			class CUP_PicatinnyTopMountCZ805: CUP_PicatinnyTopMountCZ805
			{
				iconPosition[]={0.537,0.2};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Center";
			};
			class CUP_PicatinnySideMountCZ805: CUP_PicatinnySideMountCZ805
			{
				iconPosition[]={0.34999999,0.36000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.12588236,0.35294119};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPinPoint="center";
				iconPosition[]={0.27500001,0.59799999};
				iconScale=0.34999999;
				iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
		};
	};
	class CUP_arifle_CZ805_GL: CUP_arifle_CZ805_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_cz805_gl";
		model="CUP\Weapons\CUP_Weapons_CZ805\CUP_CZ_805_A1_GL.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_CZ805\Anims\CZ805GL.rtm"
		};
		descriptionShort="$STR_CUP_dss_cz805_gl";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_cz805_a1_gl_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this",
			"CUP_CZ_805_G1"
		};
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		recoil="CUP_cz805_a2_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=109.3;
			class CUP_PicatinnyTopMountCZ805: CUP_PicatinnyTopMountCZ805
			{
				iconPosition[]={0.537,0.2};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Center";
			};
			class CUP_PicatinnySideMountCZ805: CUP_PicatinnySideMountCZ805
			{
				iconPosition[]={0.28,0.31999999};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.12,0.33000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
		};
	};
	class CUP_arifle_CZ805_A2_blk: CUP_arifle_CZ805_A2
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_cz805_a2_blk";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_CZ805_A2_blk_X_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_cz805\data\cz805_blk_co.paa",
			"cup\weapons\cup_weapons_x95\data\x95_co.paa"
		};
	};
	class CUP_arifle_CZ805_A2_coyote: CUP_arifle_CZ805_A2
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_cz805_a2_coyote";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_CZ805_A2_coyote_X_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_cz805\data\cz805_coyote_co.paa",
			"cup\weapons\cup_weapons_x95\data\x95_co.paa"
		};
	};
	class CUP_arifle_CZ805_A1_blk: CUP_arifle_CZ805_A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_cz805_a1_blk";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_CZ805_A1_blk_X_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_cz805\data\cz805_blk_co.paa",
			"cup\weapons\cup_weapons_x95\data\x95_co.paa"
		};
	};
	class CUP_arifle_CZ805_A1_coyote: CUP_arifle_CZ805_A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_cz805_a1_coyote";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_CZ805_A1_coyote_X_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_cz805\data\cz805_coyote_co.paa",
			"cup\weapons\cup_weapons_x95\data\x95_co.paa"
		};
	};
	class CUP_arifle_CZ805_GL_blk: CUP_arifle_CZ805_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_cz805_a1_gl_blk";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_CZ805_A1_GL_blk_X_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camoGL1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_cz805\data\cz805_blk_co.paa",
			"cup\weapons\cup_weapons_cz805\data\bren2_03_co.paa"
		};
	};
	class CUP_arifle_CZ805_GL_coyote: CUP_arifle_CZ805_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_cz805_a1_gl_coyote";
		picture="\CUP\Weapons\CUP_Weapons_CZ805\data\ui\gear_CZ805_A1_GL_coyote_X_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camoGL1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_cz805\data\cz805_coyote_co.paa",
			"cup\weapons\cup_weapons_cz805\data\bren2_03_co.paa"
		};
	};
	class CUP_arifle_CZ805_A2_Holo_Laser: CUP_arifle_CZ805_A2
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_A1_Holo_Laser: CUP_arifle_CZ805_A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_A2_Aco_Laser: CUP_arifle_CZ805_A2
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="optic_Aco";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_A1_Aco_Laser: CUP_arifle_CZ805_A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="optic_Aco";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_A1_MRCO_Laser: CUP_arifle_CZ805_A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_A2_MRCO_Laser: CUP_arifle_CZ805_A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_GL_Hamr_Laser: CUP_arifle_CZ805_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_A1_ZDDot_Laser: CUP_arifle_CZ805_A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="CUP_optic_ZDDot";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_GL_ZDDot_Laser: CUP_arifle_CZ805_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="CUP_optic_ZDDot";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds: CUP_arifle_CZ805_A2
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ805";
				item="CUP_optic_ZDDot";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountCZ805";
				item="CUP_acc_Flashlight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class CUP_CZ_BREN2_762_14;
	class CUP_CZ_BREN2_762_14_GL;
	class CUP_arifle_CZ805_B: CUP_CZ_BREN2_762_14
	{
		scope=1;
	};
	class CUP_arifle_CZ805_B_GL: CUP_CZ_BREN2_762_14_GL
	{
		scope=1;
	};
	class CUP_arifle_CZ805B_GL_ACOG_Laser: CUP_arifle_CZ805_B_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ACOG";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_arifle_CZ805B_ACOG_Laser: CUP_arifle_CZ805_B
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ACOG";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
};
