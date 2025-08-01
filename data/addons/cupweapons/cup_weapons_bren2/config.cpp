class CfgPatches
{
	class CUP_Weapons_Bren2
	{
		units[]={};
		weapons[]=
		{
			"CUP_CZ_BREN2_Base",
			"CUP_CZ_BREN2_GL_Base",
			"CUP_CZ_BREN2_762_Base",
			"CUP_CZ_BREN2_762_GL_Base",
			"CUP_CZ_BREN2_762_14",
			"CUP_CZ_BREN2_762_14_GL",
			"CUP_CZ_BREN2_762_8",
			"CUP_CZ_BREN2_556_14",
			"CUP_CZ_BREN2_556_14_GL",
			"CUP_CZ_BREN2_556_11",
			"CUP_CZ_BREN2_556_11_GL",
			"CUP_CZ_BREN2_556_8",
			"CUP_CZ_BREN2_556_14_Tan",
			"CUP_CZ_BREN2_556_14_Grn",
			"CUP_CZ_BREN2_556_14_GL_Tan",
			"CUP_CZ_BREN2_556_14_GL_Grn",
			"CUP_CZ_BREN2_556_11_Tan",
			"CUP_CZ_BREN2_556_11_Grn",
			"CUP_CZ_BREN2_556_11_GL_Tan",
			"CUP_CZ_BREN2_556_11_GL_Grn",
			"CUP_CZ_BREN2_556_8_Tan",
			"CUP_CZ_BREN2_556_8_Grn",
			"CUP_CZ_BREN2_762_14_Tan",
			"CUP_CZ_BREN2_762_14_Grn",
			"CUP_CZ_BREN2_762_14_GL_Tan",
			"CUP_CZ_BREN2_762_14_GL_Grn",
			"CUP_CZ_BREN2_762_8_Tan",
			"CUP_CZ_BREN2_762_8_Grn",
			"CUP_CZ_BREN2_556_11_ZDDot_Laser",
			"CUP_CZ_BREN2_556_11_GL_AIMMZDDot_Laser",
			"CUP_CZ_BREN2_556_11_GL_ZDDot_Laser"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
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
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_CZ_BREN2_Base: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_60Rnd_556x45_SureFire",
			"CUP_20Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green",
			"CUP_100Rnd_556x45_BetaCMag_ar15",
			"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15",
			"CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15",
			"CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL"
		};
		reloadAction="GestureReloadSPAR_01";
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=2;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		initSpeed=-1.1413;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=355.60001;
		recoil="recoil_spar";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.43000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.52999997,0.31999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPosition[]={0.31999999,0.69999999};
				iconScale=0.2;
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_CUP_dss_CZBREN2_556";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\anim\CZBREN2.rtm"
		};
		dexterity=1.5;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		selectionFireAnim="muzzleFlash";
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPAR01_Shot_SoundSet",
					"SPAR01_Tail_SoundSet",
					"SPAR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SPAR01_silencerShot_SoundSet",
					"SPAR01_silencerTail_SoundSet",
					"SPAR01_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.070588;
			dispersion=0.00049399998;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
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
					"SPAR01_Shot_SoundSet",
					"SPAR01_Tail_SoundSet",
					"SPAR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SPAR01_silencerShot_SoundSet",
					"SPAR01_silencerTail_SoundSet",
					"SPAR01_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.070588;
			dispersion=0.00049399998;
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
			displayName="$STR_CUP_dn_CZ_805_G1";
			useModelOptics=0;
			useExternalOptic=0;
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
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			"db-5",
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Bren2\data\sfx\Reload",
			1,
			1,
			10
		};
	};
	class CUP_CZ_BREN2_762_Base: CUP_CZ_BREN2_Base
	{
		magazines[]=
		{
			"CUP_30Rnd_762x39_CZ807",
			"CUP_30Rnd_TE1_Yellow_Tracer_762x39_CZ807",
			"CUP_30Rnd_TE1_Red_Tracer_762x39_CZ807",
			"CUP_30Rnd_TE1_Green_Tracer_762x39_CZ807",
			"CUP_20Rnd_762x51_CZ805B",
			"CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B"
		};
		magazineWell[]={};
		descriptionShort="$STR_CUP_dss_CZBREN2_762";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.43000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.52999997,0.31999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPosition[]={0.31999999,0.69999999};
				iconScale=0.2;
			};
		};
		initSpeed=-1.0190001;
		recoil="recoil_ak12";
		ACE_barrelTwist=240;
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
					"SPAR_17_Shot_SoundSet",
					"SPAR_17_Tail_SoundSet",
					"SPAR_17_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPAR_17_silencerShot_SoundSet",
					"SPAR_17_silencerTail_SoundSet",
					"SPAR_17_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.070588;
			dispersion=0.00049399998;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
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
					"SPAR_17_Shot_SoundSet",
					"SPAR_17_Tail_SoundSet",
					"SPAR_17_interiorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SPAR_17_silencerShot_SoundSet",
					"SPAR_17_silencerTail_SoundSet",
					"SPAR_17_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.070588;
			dispersion=0.00049399998;
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
	};
	class CUP_CZ_BREN2_GL_Base: CUP_CZ_BREN2_Base
	{
		descriptionShort="$STR_CUP_dss_CZBREN2_556_GL";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.43000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.52999997,0.31999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
				iconPosition[]={0.31999999,0.69999999};
				iconScale=0.2;
			};
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\anim\CZBREN2GL.rtm"
		};
	};
	class CUP_CZ_BREN2_762_GL_Base: CUP_CZ_BREN2_762_Base
	{
		descriptionShort="$STR_CUP_dss_CZBREN2_762_GL";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.43000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.52999997,0.31999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
				iconPosition[]={0.31999999,0.69999999};
				iconScale=0.2;
			};
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\anim\CZBREN2GL.rtm"
		};
	};
	class CUP_CZ_BREN2_556_14: CUP_CZ_BREN2_Base
	{
		baseWeapon="CUP_CZ_BREN2_556_14";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_14";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_556_14.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_14.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this"
		};
		recoil="CUP_bren2_556_14_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=71.650002;
		};
	};
	class CUP_CZ_BREN2_556_14_GL: CUP_CZ_BREN2_GL_Base
	{
		baseWeapon="CUP_CZ_BREN2_556_14_GL";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_14_GL";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_556_14_GL.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_14_gl.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this",
			"CUP_CZ_805_G1"
		};
		recoil="CUP_bren2_556_14_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.55;
		};
	};
	class CUP_CZ_BREN2_556_11: CUP_CZ_BREN2_Base
	{
		baseWeapon="CUP_CZ_BREN2_556_11";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_11";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_556_11.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_11.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this"
		};
		recoil="CUP_bren2_556_11_recoil";
		initSpeed=-1.1054;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=279.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=67.239998;
		};
	};
	class CUP_CZ_BREN2_556_11_GL: CUP_CZ_BREN2_GL_Base
	{
		baseWeapon="CUP_CZ_BREN2_556_11_GL";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_11_GL";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_556_11_GL.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_11_gl.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this",
			"CUP_CZ_805_G1"
		};
		recoil="CUP_bren2_556_11_recoil";
		initSpeed=-1.1054;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=279.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97.139999;
		};
	};
	class CUP_CZ_BREN2_556_8: CUP_CZ_BREN2_Base
	{
		baseWeapon="CUP_CZ_BREN2_556_8";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_8";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_556_8.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_8.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this"
		};
		recoil="CUP_bren2_556_8_recoil";
		initSpeed=-1.0815001;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=203.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=63.049999;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.13,0.43000001};
			};
		};
	};
	class CUP_CZ_BREN2_762_14: CUP_CZ_BREN2_762_Base
	{
		baseWeapon="CUP_CZ_BREN2_762_14";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_14";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_762_14.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_14.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this"
		};
		recoil="CUP_bren2_762_14_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=71.650002;
		};
	};
	class CUP_CZ_BREN2_762_14_GL: CUP_CZ_BREN2_762_GL_Base
	{
		baseWeapon="CUP_CZ_BREN2_762_14_GL";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_14_GL";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_762_14_GL.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_14_gl.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this",
			"CUP_CZ_805_G1"
		};
		recoil="CUP_bren2_762_14_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.55;
		};
	};
	class CUP_CZ_BREN2_762_8: CUP_CZ_BREN2_762_Base
	{
		baseWeapon="CUP_CZ_BREN2_762_8";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_8";
		model="\CUP\Weapons\CUP_Weapons_Bren2\CUP_CZ_BREN2_762_8.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_8.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this"
		};
		recoil="CUP_bren2_762_8_recoil";
		initSpeed=-0.82779998;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=203.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=66.150002;
		};
	};
	class CUP_CZ_BREN2_556_14_Tan: CUP_CZ_BREN2_556_14
	{
		baseWeapon="CUP_CZ_BREN2_556_14_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_14_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_14_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_14_Grn: CUP_CZ_BREN2_556_14
	{
		baseWeapon="CUP_CZ_BREN2_556_14_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_14_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_14_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_14_GL_Tan: CUP_CZ_BREN2_556_14_GL
	{
		baseWeapon="CUP_CZ_BREN2_556_14_GL_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_14_GL_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_14_gl_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_03_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_14_GL_Grn: CUP_CZ_BREN2_556_14_GL
	{
		baseWeapon="CUP_CZ_BREN2_556_14_GL_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_14_GL_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_14_gl_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_03_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_11_Tan: CUP_CZ_BREN2_556_11
	{
		baseWeapon="CUP_CZ_BREN2_556_11_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_11_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_11_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_11_Grn: CUP_CZ_BREN2_556_11
	{
		baseWeapon="CUP_CZ_BREN2_556_11_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_11_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_11_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_11_GL_Tan: CUP_CZ_BREN2_556_11_GL
	{
		baseWeapon="CUP_CZ_BREN2_556_11_GL_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_11_GL_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_11_gl_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_03_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_11_GL_Grn: CUP_CZ_BREN2_556_11_GL
	{
		baseWeapon="CUP_CZ_BREN2_556_11_GL_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_11_GL_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_11_gl_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_03_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_8_Tan: CUP_CZ_BREN2_556_8
	{
		baseWeapon="CUP_CZ_BREN2_556_8_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_8_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_8_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_8_Grn: CUP_CZ_BREN2_556_8
	{
		baseWeapon="CUP_CZ_BREN2_556_8_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_556_8_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_556_8_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_762_14_Tan: CUP_CZ_BREN2_762_14
	{
		baseWeapon="CUP_CZ_BREN2_762_14_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_14_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_14_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_762_14_Grn: CUP_CZ_BREN2_762_14
	{
		baseWeapon="CUP_CZ_BREN2_762_14_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_14_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_14_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_762_14_GL_Tan: CUP_CZ_BREN2_762_14_GL
	{
		baseWeapon="CUP_CZ_BREN2_762_14_GL_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_14_GL_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_14_gl_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_03_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_762_14_GL_Grn: CUP_CZ_BREN2_762_14_GL
	{
		baseWeapon="CUP_CZ_BREN2_762_14_GL_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_14_GL_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_14_gl_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_03_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_762_8_Tan: CUP_CZ_BREN2_762_8
	{
		baseWeapon="CUP_CZ_BREN2_762_8_Tan";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_8_Tan";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_8_tan.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_TAN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_TAN_co.paa"
		};
	};
	class CUP_CZ_BREN2_762_8_Grn: CUP_CZ_BREN2_762_8
	{
		baseWeapon="CUP_CZ_BREN2_762_8_Grn";
		scope=2;
		displayName="$STR_CUP_dn_CZBREN2_762_8_Grn";
		picture="\CUP\Weapons\CUP_Weapons_Bren2\data\UI\gear_bren2_762_8_grn.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_01_GRN_co.paa",
			"\CUP\Weapons\CUP_Weapons_Bren2\data\bren2_02_GRN_co.paa"
		};
	};
	class CUP_CZ_BREN2_556_11_ZDDot_Laser: CUP_CZ_BREN2_556_11
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ZDDot";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_CZ_BREN2_556_11_GL_AIMMZDDot_Laser: CUP_CZ_BREN2_556_11_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_ZDDOT_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class CUP_CZ_BREN2_556_11_GL_ZDDot_Laser: CUP_CZ_BREN2_556_11_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_ZDDot";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
};
