class CfgPatches
{
	class CUP_Weapons_Bizon
	{
		units[]={};
		weapons[]=
		{
			"CUP_smg_bizon",
			"CUP_smg_bizon_snds",
			"CUP_smg_vityaz",
			"CUP_smg_vityaz_vfg",
			"CUP_smg_vityaz_top_rail",
			"CUP_smg_vityaz_vfg_top_rail",
			"CUP_smg_vityaz_vfg_front_rail",
			"CUP_smg_saiga9"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_East_Attachments",
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
class CUP_DovetailMount;
class CUP_EastMuzzleSlot9mm;
class CUP_PicatinnySideMount;
class CUP_PicatinnyTopShortMount;
class asdg_OpticSideRail_AKSVD;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_smg_bizon: Rifle_Base_F
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		model="\CUP\Weapons\CUP_Weapons_Bizon\CUP_bizon";
		picture="\CUP\Weapons\CUP_Weapons_Bizon\data\ui\gear_bizon_x_ca.paa";
		magazines[]=
		{
			"CUP_64Rnd_9x19_Bizon_M",
			"CUP_64Rnd_Green_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_Red_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_White_Tracer_9x19_Bizon_M",
			"CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M"
		};
		magazineWell[]=
		{
			"CBA_9x19_PP19"
		};
		displayname="$STR_CUP_dn_bizon";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bizon\data\Anim\Bizon.rtm"
		};
		fireLightDuration=0;
		fireLightIntensity=0;
		dexterity=1.75;
		inertia=0.30000001;
		aimTransitionSpeed=1.3;
		selectionFireAnim="zasleh";
		reloadAction="GestureReloadDMR03";
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Bizon\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Bizon\data\sfx\Dry",
			1,
			1,
			35
		};
		distanceZoomMin=50;
		distanceZoomMax=50;
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		value=0;
		modes[]=
		{
			"FullAuto",
			"Single",
			"Burst"
		};
		initSpeed=-1;
		recoil="recoil_smg_05";
		jsrs_soundeffect="JSRS2_Distance_Effects_MP";
		ACE_barrelTwist=240.03;
		ACE_barrelLength=231.14;
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.088;
			dispersion=0.003;
			minRange=2;
			minRangeProbab=0.25;
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
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
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.088;
			ffCount=1;
			dispersion=0.003;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.050000001;
			showToPlayer=0;
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
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			soundContinuous=0;
			reloadTime=0.088;
			ffCount=1;
			dispersion=0.003;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab=0.050000001;
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_bizon";
		};
		descriptionShort="$STR_CUP_dss_bizon";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.529999;
			class CUP_DovetailMountBizon: asdg_OpticSideRail_AKSVD
			{
				iconPosition[]={0.54000002,0.34999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_EastMuzzleSlotBizon: CUP_EastMuzzleSlot9mm
			{
				iconPosition[]={0.2,0.44};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
			};
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
	class CUP_smg_vityaz: CUP_smg_bizon
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayname="$STR_CUP_dn_vityaz";
		descriptionShort="$STR_CUP_dss_vityaz";
		picture="\CUP\Weapons\CUP_Weapons_Bizon\data\ui\gear_vityaz_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Bizon\CUP_vityaz.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bizon\Data\Anim\Vityaz.rtm"
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19AP_Vityaz",
			"CUP_30Rnd_9x19_Vityaz",
			"CUP_10Rnd_9x19_Saiga9"
		};
		magazineWell[]=
		{
			"CBA_9x19_Vityaz"
		};
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Bizon\data\sfx\Dry",
			0.56234133,
			1,
			10
		};
		reloadAction="CUP_GestureReloadAK";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",
			1,
			1,
			10
		};
		magazineReloadSwitchPhase=0.15384001;
		ACE_barrelTwist=240.03;
		ACE_barrelLength=237;
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.077399999;
			dispersion=0.003;
			minRange=2;
			minRangeProbab=0.25;
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
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
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			soundContinuous=0;
			reloadTime=0.077399999;
			ffCount=1;
			dispersion=0.003;
			minRange=0;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab=0.050000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=63.939999;
			class CUP_DovetailMountBizon
			{
			};
			class CUP_EastMuzzleSlotBizon
			{
			};
			class CowsSlot: asdg_OpticSideRail_AKSVD
			{
				iconPinPoint="center";
				iconPosition[]={0.50800002,0.102};
				iconScale=0.18000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class MuzzleSlot: CUP_EastMuzzleSlot9mm
			{
				iconPinPoint="center";
				iconPosition[]={-0.052999999,0.289};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class PointerSlot
			{
			};
		};
	};
	class CUP_smg_vityaz_vfg: CUP_smg_vityaz
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayname="$STR_CUP_dn_vityaz_vfg";
		picture="\CUP\Weapons\CUP_Weapons_Bizon\data\ui\gear_vityaz_vfg_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Bizon\CUP_vityaz_vfg.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bizon\Data\Anim\Vityaz_vfg.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=64.940002;
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.215,0.30500001};
				iconScale=0.28;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
		};
		dexterity=2;
		inertia=0.15000001;
	};
	class CUP_smg_vityaz_top_rail: CUP_smg_vityaz
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayname="$STR_CUP_dn_vityaz_top_rail";
		picture="\CUP\Weapons\CUP_Weapons_Bizon\data\ui\gear_vityaz_top_rail_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Bizon\CUP_vityaz_top_rail.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CUP_PicatinnyTopShortMount
			{
				iconPinPoint="center";
				iconPosition[]={0.50800002,0.102};
				iconScale=0.18000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
		};
	};
	class CUP_smg_vityaz_vfg_top_rail: CUP_smg_vityaz_top_rail
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayname="$STR_CUP_dn_vityaz_vfg_top_rail";
		picture="\CUP\Weapons\CUP_Weapons_Bizon\data\ui\gear_vityaz_vfg_top_rail_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Bizon\CUP_vityaz_vfg_top_rail.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bizon\Data\Anim\Vityaz_vfg.rtm"
		};
		dexterity=2;
		inertia=0.15000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=64.940002;
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.215,0.30500001};
				iconScale=0.28;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
		};
	};
	class CUP_smg_vityaz_vfg_front_rail: CUP_smg_vityaz_top_rail
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayname="$STR_CUP_dn_vityaz_vfg_front_rail";
		picture="\CUP\Weapons\CUP_Weapons_Bizon\data\ui\gear_vityaz_vfg_front_rail_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Bizon\CUP_vityaz_vfg_front_rail.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Bizon\Data\Anim\Vityaz_vfg.rtm"
		};
		dexterity=2;
		inertia=0.15000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=64.940002;
			class CowsSlot: CUP_PicatinnyTopShortMount
			{
				iconPinPoint="center";
				iconPosition[]={0.16599999,0.102};
				iconScale=0.17;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.215,0.30500001};
				iconScale=0.28;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
		};
	};
	class CUP_smg_saiga9: CUP_smg_vityaz_top_rail
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayname="$STR_CUP_dn_saiga9";
		descriptionShort="$STR_CUP_dss_saiga9";
		picture="\CUP\Weapons\CUP_Weapons_Bizon\data\ui\gear_saiga9_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Bizon\CUP_vityaz_saiga9.p3d";
		modes[]=
		{
			"Single"
		};
		magazines[]=
		{
			"CUP_10Rnd_9x19_Saiga9",
			"CUP_30Rnd_9x19_Vityaz",
			"CUP_30Rnd_9x19AP_Vityaz"
		};
		ACE_barrelLength=367;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.349998;
			class CowsSlot: CUP_PicatinnyTopShortMount
			{
				iconPinPoint="center";
				iconPosition[]={0.56400001,0.242};
				iconScale=0.16;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class MuzzleSlot: CUP_EastMuzzleSlot9mm
			{
				iconPinPoint="center";
				iconPosition[]={-0.012,0.375};
				iconScale=0.20999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
		};
	};
	class CUP_smg_bizon_snds: CUP_smg_bizon
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="CUP_EastMuzzleSlotBizon";
				item="CUP_muzzle_bizon";
			};
		};
	};
};
