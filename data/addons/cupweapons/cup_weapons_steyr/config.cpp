class CfgPatches
{
	class CUP_Weapons_Steyr
	{
		units[]={};
		weapons[]=
		{
			"CUP_arifle_AUG_Base",
			"CUP_arifle_AUG_A1"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_Sounds",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition"
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
class asdg_MuzzleSlot_556;
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
	class CUP_arifle_AUG_Base: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		magazines[]=
		{
			"CUP_30Rnd_556x45_AUG",
			"CUP_30Rnd_TE1_Red_Tracer_556x45_AUG",
			"CUP_30Rnd_TE1_Yellow_Tracer_556x45_AUG",
			"CUP_30Rnd_TE1_Green_Tracer_556x45_AUG"
		};
		magazineWell[]=
		{
			"CBA_556x45_STEYR"
		};
		reloadAction="CUP_GestureReloadAUG";
		magazineReloadSwitchPhase=0.5;
		discreteDistanceInitIndex=2;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79.400002;
			allowedSlots[]={901};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0.12,0.41};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
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
			"CUP\Weapons\CUP_Weapons_Steyr\data\anim\CUP_Steyr_aug_alt.rtm"
		};
		dexterity=1.5;
		inertia=0.5;
		aimTransitionSpeed=1;
		selectionFireAnim="zasleh";
		modes[]=
		{
			"FullAuto",
			"Single",
			"fullauto_medium"
		};
		ACE_barrelTwist=228.60001;
		ACE_barrelLength=508;
		recoil="recoil_trg21";
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
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
			reloadTime=0.088229999;
			dispersion=0.00030835599;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
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
			reloadTime=0.088229999;
			dispersion=0.00030835599;
			minRange=0;
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
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Steyr\data\sfx\Dry",
			"db-8",
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Steyr\data\sfx\Reload",
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
			libTextDesc="$STR_CUP_lib_auga1";
		};
	};
	class CUP_arifle_AUG_A1: CUP_arifle_AUG_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Steyr\CUP_Steyr_AUG.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Steyr\data\ui\gear_AUG_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_steyr\data\steyr aug_co.paa"
		};
		displayName="$STR_CUP_dn_auga1";
		class Library
		{
			libTextDesc="$STR_CUP_lib_auga1";
		};
		descriptionShort="$STR_CUP_dss_auga1";
		class OpticsModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.166667;
				opticsZoomMax=0.166667;
				opticsZoomInit=0.166667;
				memoryPointCamera="opticsView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
			};
			class IronSight: Scope
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				distanceZoomMin=100;
				distanceZoomMax=100;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
};
