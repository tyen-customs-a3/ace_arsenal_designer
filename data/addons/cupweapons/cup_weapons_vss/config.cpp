class CfgPatches
{
	class CUP_Weapons_VSS
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_VSSVintorez",
			"CUP_srifle_VSSVintorez_top_rail",
			"CUP_srifle_VSSVintorez_VFG",
			"CUP_srifle_VSSVintorez_VFG_top_rail",
			"CUP_srifle_VSSVintorez_flash",
			"CUP_srifle_VSSVintorez_flash_top",
			"CUP_arifle_AS_VAL",
			"CUP_arifle_AS_VAL_top_rail",
			"CUP_arifle_AS_VAL_VFG",
			"CUP_arifle_AS_VAL_VFG_top_rail",
			"CUP_arifle_AS_VAL_flash",
			"CUP_arifle_AS_VAL_flash_top",
			"CUP_muzzle_snds_SR3M",
			"CUP_arifle_SR3M_Vikhr",
			"CUP_arifle_SR3M_Vikhr_top_rail",
			"CUP_srifle_VSSVintorez_pso",
			"CUP_arifle_AS_VAL_pso",
			"CUP_arifle_SR3M_Vikhr_VFG",
			"CUP_arifle_SR3M_Vikhr_VFG_top_rail",
			"CUP_arifle_SR3M_Vikhr_VFG_snds",
			"CUP_arifle_AS_VAL_VFG_pso_open"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_East_Attachments",
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
class asdg_OpticSideRail_AKSVD;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnyUnderMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_srifle_VSSVintorez: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_vss.p3d";
		cursor="srifle";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vss_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vikhr.rtm"
		};
		magazines[]=
		{
			"CUP_10Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M"
		};
		magazineWell[]=
		{
			"CBA_9x39_VSS",
			"ASVAL_9x39"
		};
		dexterity=1.7;
		inertia=0.40000001;
		aimTransitionSpeed=1.2;
		fireLightIntensity=0;
		displayname="$STR_CUP_dn_vss";
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_VSS\data\sfx\Reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_VSS\data\sfx\Dry",
			1,
			1,
			35
		};
		reloadAction="CUP_GestureReloadVSS";
		magazineReloadSwitchPhase=0.161616;
		recoil="CUP_VSS_recoil";
		ACE_barrelTwist=210.82001;
		ACE_barrelLength=200.66;
		initSpeed=-0.93334001;
		discreteDistance[]={100,150,200,220,250,270,300,320,350,370,400,420};
		discreteDistanceInitIndex=0;
		maxZeroing=500;
		cameraDir="eye_look";
		discreteDistanceCameraPoint[]=
		{
			"eye_100",
			"eye_150",
			"eye_200",
			"eye_220",
			"eye_250",
			"eye_270",
			"eye_300",
			"eye_320",
			"eye_350",
			"eye_370",
			"eye_400",
			"eye_420"
		};
		modes[]=
		{
			"Single",
			"Full",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		class Single: Mode_SemiAuto
		{
			weaponSoundEffect="DefaultRifle";
			sounds[]=
			{
				"SilencedSound"
			};
			class SilencedSound
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118703,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118703,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSetShot[]=
				{
					"CUP_MP7_Closure_SoundSet",
					"CUP_MP7_ShotSD_SoundSet",
					"SMGSting_silencerInteriorTail_SoundSet"
				};
			};
			dispersion=0.0018;
			soundContinuous=0;
			reloadTime=0.1;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.050000001;
		};
		class Full: Mode_FullAuto
		{
			sounds[]=
			{
				"SilencedSound"
			};
			class SilencedSound
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118703,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118703,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSetShot[]=
				{
					"CUP_MP7_Closure_SoundSet",
					"CUP_MP7_ShotSD_SoundSet",
					"SMGSting_silencerInteriorTail_SoundSet"
				};
			};
			dispersion=0.0018;
			soundContinuous=0;
			reloadTime=0.0666667;
			minRange=0;
			minRangeProbab=0.1;
			midRange=60;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=250;
			midRangeProbab=0.80000001;
			maxRange=400;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=250;
			aiRateOfFireDispersion=2;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=250;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=450;
			aiRateOfFireDispersion=2;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.5;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=700;
			aiRateOfFireDispersion=2;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		class Library
		{
			libTextDesc="$STR_CUP_lib_vss";
		};
		descriptionShort="$STR_CUP_dss_vss";
		selectionFireAnim="zasleh";
		class WeaponSlotsInfo
		{
			mass=57.299999;
			class CUP_DovetailMountVSS: asdg_OpticSideRail_AKSVD
			{
				iconPosition[]={0.55000001,0.38};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class CUP_PicatinnySideMountVSS: CUP_PicatinnySideMount
			{
				iconPosition[]={0.31,0.44};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CUP_PicatinnyUnderMountVSS: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.2,0.5};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			allowedslots[]={901};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class CUP_srifle_VSSVintorez_top_rail: CUP_srifle_VSSVintorez
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_vss_top.p3d";
		displayName="$STR_CUP_dn_vss_top";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vss_top_X_ca.paa";
		class WeaponSlotsInfo
		{
			mass=57.299999;
			class CUP_PicatinnyTopMountVSS: CUP_PicatinnyTopShortMount
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnySideMountVSS: CUP_PicatinnySideMount
			{
				iconPosition[]={0.31,0.44};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CUP_PicatinnyUnderMountVSS: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.2,0.5};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			allowedslots[]={901};
		};
	};
	class CUP_srifle_VSSVintorez_VFG: CUP_srifle_VSSVintorez
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_vss_hg.p3d";
		displayName="$STR_CUP_dn_vss_hg";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vss_hg_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		recoil="CUP_VSS_HG_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=58.299999;
		};
	};
	class CUP_srifle_VSSVintorez_VFG_top_rail: CUP_srifle_VSSVintorez_top_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_vss_hg_top.p3d";
		displayName="$STR_CUP_dn_vss_hg_top";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vss_hg_top_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=58.299999;
		};
	};
	class CUP_srifle_VSSVintorez_flash: CUP_srifle_VSSVintorez
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_vss_flash.p3d";
		displayName="$STR_CUP_dn_vss_flash";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vss_flash_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.81,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=8;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.4;
			flareMaxDistance=100;
			dayLight=0;
			volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={1,1,1};
		};
		class WeaponSlotsInfo
		{
			mass=62.060001;
			class CUP_DovetailMountVSS: asdg_OpticSideRail_AKSVD
			{
				iconPosition[]={0.55000001,0.38};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			allowedslots[]={901};
		};
	};
	class CUP_srifle_VSSVintorez_flash_top: CUP_srifle_VSSVintorez_top_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_vss_flash_top.p3d";
		displayName="$STR_CUP_dn_vss_flash_top";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vss_flash_top_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.81,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=8;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.4;
			flareMaxDistance=100;
			dayLight=0;
			volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={1,1,1};
		};
		class WeaponSlotsInfo
		{
			mass=62.060001;
			class CUP_PicatinnyTopMountVSS: CUP_PicatinnyTopShortMount
			{
				iconPosition[]={0.56,0.28};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			allowedslots[]={901};
		};
	};
	class CUP_arifle_AS_VAL: CUP_srifle_VSSVintorez
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_val.p3d";
		displayName="$STR_CUP_dn_val";
		descriptionShort="$STR_CUP_dss_val";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_val_X_ca.paa";
		magazines[]=
		{
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_10Rnd_9x39_SP5_VSS_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M"
		};
		magazineWell[]=
		{
			"CBA_9x39_VSS",
			"ASVAL_9x39"
		};
		class WeaponSlotsInfo
		{
			mass=55.099998;
			class CUP_DovetailMountVSS: asdg_OpticSideRail_AKSVD
			{
				iconPosition[]={0.55000001,0.38};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnySideMountVSS: CUP_PicatinnySideMount
			{
				iconPosition[]={0.31,0.44};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CUP_PicatinnyUnderMountVSS: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.2,0.5};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			allowedslots[]={901};
		};
	};
	class CUP_arifle_AS_VAL_top_rail: CUP_arifle_AS_VAL
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_val_top.p3d";
		displayName="$STR_CUP_dn_val_top";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_val_top_X_ca.paa";
		class WeaponSlotsInfo
		{
			mass=55.099998;
			class CUP_PicatinnyTopMountVSS: CUP_PicatinnyTopShortMount
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnySideMountVSS: CUP_PicatinnySideMount
			{
				iconPosition[]={0.31,0.44};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CUP_PicatinnyUnderMountVSS: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.2,0.5};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			allowedslots[]={901};
		};
	};
	class CUP_arifle_AS_VAL_VFG: CUP_arifle_AS_VAL
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_val_hg.p3d";
		displayName="$STR_CUP_dn_val_hg";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_val_hg_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		recoil="CUP_VSS_HG_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=56.099998;
		};
	};
	class CUP_arifle_AS_VAL_VFG_top_rail: CUP_arifle_AS_VAL_top_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_val_hg_top.p3d";
		displayName="$STR_CUP_dn_val_hg_top";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_val_hg_top_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=56.099998;
		};
	};
	class CUP_arifle_AS_VAL_flash: CUP_arifle_AS_VAL
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_val_flash.p3d";
		displayName="$STR_CUP_dn_val_flash";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_val_flash_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.81,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=8;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.4;
			flareMaxDistance=100;
			dayLight=0;
			volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={1,1,1};
		};
		class WeaponSlotsInfo
		{
			mass=59.860001;
			class CUP_DovetailMountVSS: asdg_OpticSideRail_AKSVD
			{
				iconPosition[]={0.55000001,0.38};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			allowedslots[]={901};
		};
	};
	class CUP_arifle_AS_VAL_flash_top: CUP_arifle_AS_VAL_top_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_val_flash_top.p3d";
		displayName="$STR_CUP_dn_val_flash_top";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_val_flash_top_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vss_hg.rtm"
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.81,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=8;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.4;
			flareMaxDistance=100;
			dayLight=0;
			volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={1,1,1};
		};
		class WeaponSlotsInfo
		{
			mass=59.860001;
			class CUP_PicatinnyTopMountVSS: CUP_PicatinnyTopShortMount
			{
				iconPosition[]={0.56,0.28};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			allowedslots[]={901};
		};
	};
	class CUP_muzzle_snds_SR3M: ItemCore
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
		displayName="$STR_CUP_dn_snds_vikhr";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\bizon_Silencer\data\UI\gear_acca_bizon_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_vss\CUP_sr3m_silencer.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
	};
	class CUP_arifle_SR3M_Vikhr: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_sr3m.p3d";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vikhr_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vikhr.rtm"
		};
		reloadAction="CUP_GestureReloadVSS";
		magazines[]=
		{
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_10Rnd_9x39_SP5_VSS_M"
		};
		magazineWell[]=
		{
			"CBA_9x39_VSS",
			"ASVAL_9x39"
		};
		dexterity=1.7;
		inertia=0.34999999;
		aimTransitionSpeed=1.2;
		displayName="$STR_CUP_dn_sr3m_vikhr";
		descriptionShort="$STR_CUP_dss_val";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_VSS\data\sfx\Dry",
			1,
			1,
			35
		};
		magazineReloadSwitchPhase=0.161616;
		recoil="CUP_SR3M_recoil";
		ACE_barrelTwist=210.82001;
		ACE_barrelLength=154.3;
		initSpeed=-0.93334001;
		discretedistance[]={100,200};
		discreteDistanceInitIndex=0;
		maxZeroing=500;
		modes[]=
		{
			"Single",
			"Full"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",
					0.56234133,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",
					0.39810699,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",
					2.818383,
					1,
					1200
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",
					2.818383,
					1,
					1200
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",
					2.818383,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118703,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118703,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSetShot[]=
				{
					"CUP_MP7_Closure_SoundSet",
					"CUP_MP7_ShotSD_SoundSet",
					"SMGSting_silencerInteriorTail_SoundSet"
				};
			};
			dispersion=0.0018;
			soundContinuous=0;
			reloadTime=0.1;
			weaponSoundEffect="DefaultRifle";
			minRange=2;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class Full: Mode_FullAuto
		{
			dispersion=0.0018;
			soundContinuous=0;
			reloadTime=0.0666667;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_01",
					0.56234133,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\closure_Vermin_02",
					0.56234133,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",
					2.818383,
					1,
					1200
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",
					2.818383,
					1,
					1200
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",
					2.818383,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118703,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118703,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSetShot[]=
				{
					"CUP_MP7_Closure_SoundSet",
					"CUP_MP7_ShotSD_SoundSet",
					"SMGSting_silencerInteriorTail_SoundSet"
				};
			};
			minRange=0;
			minRangeProbab=0.1;
			midRange=60;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
		selectionFireAnim="zasleh";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=44;
			class CUP_DovetailMountVSS: asdg_OpticSideRail_AKSVD
			{
				iconPosition[]={0.55000001,0.38};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"CUP_muzzle_snds_SR3M"
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPosition[]={0.28999999,0.43000001};
				iconScale=0.2;
				iconPinPoint="Right";
			};
			class PointerSlot
			{
			};
			class CowsSlot
			{
			};
			allowedSlots[]={701,901};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class CUP_arifle_SR3M_Vikhr_top_rail: CUP_arifle_SR3M_Vikhr
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_sr3m_top_rail.p3d";
		displayName="$STR_CUP_dn_sr3m_vikhr_top";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vikhr_top_X_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_DovetailMountVSS
			{
			};
			class CUP_PicatinnyTopMountVSS: CUP_PicatinnyTopShortMount
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
		};
	};
	class CUP_arifle_SR3M_Vikhr_VFG: CUP_arifle_SR3M_Vikhr
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_sr3m_vikhr_grip";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_sr3m_vfg.p3d";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vikhr_grip_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vikhr_grip.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: CUP_PicatinnySideMount
			{
			};
		};
	};
	class CUP_arifle_SR3M_Vikhr_VFG_top_rail: CUP_arifle_SR3M_Vikhr_top_rail
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_sr3m_vikhr_grip_top";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_VSS\CUP_sr3m_vfg_top_rail.p3d";
		picture="\CUP\Weapons\CUP_Weapons_VSS\data\ui\gear_vikhr_grip_top_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_VSS\data\anim\vikhr_grip.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: CUP_PicatinnySideMount
			{
			};
		};
	};
	class CUP_srifle_VSSVintorez_pso: CUP_srifle_VSSVintorez
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMountVSS";
				item="CUP_optic_PSO_1_1";
			};
		};
	};
	class CUP_arifle_AS_VAL_pso: CUP_arifle_AS_VAL
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMountVSS";
				item="CUP_optic_PSO_1_1";
			};
		};
	};
	class CUP_arifle_AS_VAL_VFG_pso_open: CUP_arifle_AS_VAL_VFG
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMountVSS";
				item="CUP_optic_PSO_1_1_open";
			};
		};
	};
	class CUP_arifle_SR3M_Vikhr_VFG_snds: CUP_arifle_SR3M_Vikhr_VFG
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_SR3M";
			};
		};
	};
};
