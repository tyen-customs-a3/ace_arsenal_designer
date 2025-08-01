class CfgPatches
{
	class CUP_Weapons_SKS
	{
		units[]={};
		weapons[]=
		{
			"CUP_SKS",
			"CUP_SKS_rail"
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
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class ItemCore;
class InventoryFlashLightItem_Base_F;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyUnderMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_SKS: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="cup\weapons\CUP_Weapons_SKS\CUP_SKS_stnd.p3d";
		dexterity=1.5700001;
		inertia=0.69999999;
		initSpeed=-1;
		displayName="$STR_CUP_dn_SKS";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\cup\weapons\CUP_Weapons_SKS\anim\CUP_sks_alt.rtm"
		};
		reloadAction="CUP_GestureReloadSKS";
		picture="\cup\weapons\CUP_Weapons_SKS\ui\sks_ca.paa";
		modes[]=
		{
			"Single"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class PointerSlot
			{
			};
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_SKS";
		ACE_barrelTwist=238.75999;
		ACE_barrelLength=619.76001;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",
					0.60000002,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",
					0.60000002,
					1,
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
					"\cup\weapons\CUP_Weapons_SKS\sfx\SKS_S1",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\cup\weapons\CUP_Weapons_SKS\sfx\SKS_S2",
					1,
					1,
					2000
				};
				begin3[]=
				{
					"\cup\weapons\CUP_Weapons_SKS\sfx\SKS_S3",
					1,
					1,
					2000
				};
				begin4[]=
				{
					"\cup\weapons\CUP_Weapons_SKS\sfx\SKS_S4",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_interior",
							2.2387211,
							1,
							1500
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_trees",
							1,
							1,
							1500
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_forest",
							1,
							1,
							1500
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_meadows",
							1,
							1,
							1500
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\Mk20_tail_houses",
							1,
							1,
							1500
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				soundSetShot[]=
				{
					"CUP_akm_Closure_SoundSet",
					"CUP_akm_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_akm_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_Rifle1_SD_Tail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.15000001;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			dispersion=0.00025000001;
			minRange=0;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1300;
			maxRangeProbab=0.050000001;
		};
		autoFire=0;
		aiRateOfFire=9;
		aiRateOfFireDistance=1300;
		magazines[]=
		{
			"CUP_10Rnd_762x39_SKS_M"
		};
		reloadMagazineSound[]=
		{
			"\cup\weapons\CUP_Weapons_SKS\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"\cup\weapons\CUP_Weapons_SKS\sfx\Dry",
			1,
			1,
			35
		};
		descriptionShort="$STR_CUP_dss_SKS";
		recoil="recoil_ebr";
	};
	class CUP_SKS_rail: CUP_SKS
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="cup\weapons\CUP_Weapons_SKS\CUP_SKS_rail.p3d";
		displayName="$STR_CUP_dn_SKS_rail";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class PointerSlot
			{
			};
			class CUP_PicatinnyTopMountSKS: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.57999998,0.41};
				iconScale=0.12;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class MuzzleSlot
			{
			};
		};
	};
};
