class CfgPatches
{
	class CUP_Weapons_M14_DMR
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_M14_DMR",
			"CUP_srifle_M14_DMR_LeupoldMk4",
			"CUP_srifle_M14_DMR_LeupoldMk4_snds",
			"CUP_srifle_DMR",
			"CUP_srifle_DMR_LeupoldMk4",
			"CUP_srifle_DMR_LeupoldMk4_snds"
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
	class CUP_Weapons_DMR
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]={};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_srifle_M14_DMR: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_dmr";
		selectionFireAnim="zasleh";
		model="CUP\Weapons\CUP_Weapons_M14_DMR\CUP_us_dmr.p3d";
		magazines[]=
		{
			"CUP_20Rnd_762x51_DMR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
			"CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
			"20Rnd_762x51_Mag",
			"10Rnd_Mk14_762x51_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x51_M14",
			"M14_762x51"
		};
		picture="\CUP\Weapons\CUP_Weapons_M14_DMR\data\ui\gear_DMR_X_CA.paa";
		cursor="srifle";
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		reloadAction="GestureReloadDMR06";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_reload",
			1,
			1,
			10
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M14_DMR\data\sfx\Dry",
			0.63095737,
			1,
			30
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		magazineReloadSwitchPhase=0.14;
		recoil="recoil_dmr_06";
		jsrs_soundeffect="JSRS2_Distance_Effects_DMR";
		reloadTime=0.2;
		dispersion=0.000818;
		initSpeed=-0.99939501;
		ACE_barrelTwist=305;
		ACE_barrelLength=559;
		ACE_overheating_mrbs=2000;
		ACE_overheating_dispersion=1;
		ACE_overheating_slowdownFactor=1;
		ace_railHeightAboveBore=2.9000001;
		class WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.51999998,0.41999999};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountDMR: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.28,0.54000002};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				class compatibleItems
				{
					CUP_muzzle_snds_M14=1;
					muzzle_snds_B=1;
					muzzle_snds_B_khk_F=1;
					muzzle_snds_B_snd_F=1;
				};
				iconPosition[]={0.079999998,0.47};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.189,0.47299999};
				iconScale=0.19;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			allowedSlots[]={};
		};
		class ItemInfo
		{
			priority=1;
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR06_Shot_SoundSet",
					"DMR06_tail_SoundSet",
					"DMR06_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR06_silencerShot_SoundSet",
					"DMR06_silencerTail_SoundSet",
					"DMR06_silencerInteriorTail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		minRange=2;
		minRangeProbab=0.1;
		midRange=300;
		midRangeProbab=0.69999999;
		maxRange=600;
		maxRangeProbab=0.050000001;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M14_DMR\data\anim\DMR_2.rtm"
		};
		dexterity=1.3;
		inertia=0.69999999;
		aimTransitionSpeed=0.89999998;
		class Library
		{
			libTextDesc="$STR_CUP_lib_dmr";
		};
		descriptionShort="$STR_CUP_dss_dmr";
	};
	class CUP_srifle_M14_DMR_LeupoldMk4: CUP_srifle_M14_DMR
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_LeupoldMk4";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountDMR";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	class CUP_srifle_M14_DMR_LeupoldMk4_snds: CUP_srifle_M14_DMR
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_LeupoldMk4";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountDMR";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_b";
			};
		};
	};
	class CUP_srifle_DMR: CUP_srifle_M14_DMR
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
	};
	class CUP_srifle_DMR_LeupoldMk4: CUP_srifle_M14_DMR_LeupoldMk4
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
	};
	class CUP_srifle_DMR_LeupoldMk4_snds: CUP_srifle_M14_DMR_LeupoldMk4_snds
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
	};
};
