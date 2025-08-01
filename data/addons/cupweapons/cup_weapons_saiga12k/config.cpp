class CfgPatches
{
	class CUP_Weapons_Saiga12k
	{
		units[]={};
		weapons[]=
		{
			"CUP_sgun_Saiga12K",
			"CUP_sgun_Saiga12K_top_rail"
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
class asdg_OpticSideRail_AKSVD;
class CUP_EastMuzzleSlot9mm;
class CUP_PicatinnyTopShortMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_sgun_Saiga12K: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Saiga12K\CUP_saiga12k.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Saiga12K\data\ui\gear_saiga12k_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_Saiga12K\data\anim\Saiga12K_new.rtm"
		};
		magazines[]=
		{
			"CUP_5Rnd_B_Saiga12_Slug",
			"CUP_5Rnd_B_Saiga12_Buck_00",
			"CUP_5Rnd_B_Saiga12_Buck_0",
			"CUP_5Rnd_B_Saiga12_Buck_1",
			"CUP_5Rnd_B_Saiga12_Buck_2",
			"CUP_5Rnd_B_Saiga12_Buck_3",
			"CUP_5Rnd_B_Saiga12_Buck_4",
			"CUP_5Rnd_B_Saiga12_Bird_4",
			"CUP_5Rnd_B_Saiga12_HE",
			"CUP_12Rnd_B_Saiga12_Slug",
			"CUP_12Rnd_B_Saiga12_Buck_00",
			"CUP_12Rnd_B_Saiga12_Buck_0",
			"CUP_12Rnd_B_Saiga12_Buck_1",
			"CUP_12Rnd_B_Saiga12_Buck_2",
			"CUP_12Rnd_B_Saiga12_Buck_3",
			"CUP_12Rnd_B_Saiga12_Buck_4",
			"CUP_12Rnd_B_Saiga12_Bird_4",
			"CUP_12Rnd_B_Saiga12_HE"
		};
		magazineWell[]=
		{
			"CBA_12g_SAIGA",
			"CBA_12g_SAIGA_XL"
		};
		optics=1;
		modelOptics="-";
		displayname="$STR_CUP_dn_saiga12k";
		modes[]=
		{
			"Single",
			"Single_close",
			"Single_far"
		};
		distanceZoomMin=50;
		distanceZoomMax=50;
		discreteDistance[]={100};
		jsrs_soundeffect="JSRS2_Distance_Effects_Shotgun";
		ACE_barrelTwist=0;
		ACE_twistDirection=0;
		ACE_barrelLength=429.26001;
		initSpeed=-1;
		reloadAction="CUP_GestureReloadAK";
		recoil="CUP_Saiga12K_recoil";
		magazineReloadSwitchPhase=0.15384001;
		fireSpreadAngle=0.94999999;
		cursor="sgun";
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
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",
					0.39810699,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",
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
				soundSetShot[]=
				{
					"CUP_M590_Closure_SoundSet",
					"CUP_M590_Shot_SoundSet",
					"CUP_MMG1_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_Saiga12k\data\sfx\S12K_s1",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_Saiga12k\data\sfx\S12K_s2",
					1,
					1,
					1500
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_Saiga12k\data\sfx\S12K_s3",
					1,
					1,
					1500
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_Saiga12k\data\sfx\S12K_s4",
					1,
					1,
					1500
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
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",
							1,
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
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",
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
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",
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
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",
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
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",
							1,
							1,
							1500
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
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
				begin1[]=
				{
					"A3\sounds_f\weapons\silenced\silent-18",
					1,
					1,
					300
				};
				begin2[]=
				{
					"A3\sounds_f\weapons\silenced\silent-19",
					1,
					1,
					300
				};
				begin3[]=
				{
					"A3\sounds_f\weapons\silenced\silent-11",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			dispersion=0.003;
			soundContinuous=0;
			reloadTime=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
			minRange=0;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
		};
		class Single_close: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.1;
			midRange=170;
			midRangeProbab=0.80000001;
			maxRange=250;
			maxRangeProbab=0.15000001;
		};
		class Single_far: Single_close
		{
			aiRateOfFire=4;
			aiRateOfFireDistance=300;
			minRange=220;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.15000001;
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_saiga12k";
		};
		descriptionShort="$STR_CUP_dss_saiga12k";
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Saiga12k\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Saiga12k\data\sfx\Dry",
			1,
			1,
			35
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77.099998;
			class CUP_DovetailMount_Saiga12k: asdg_OpticSideRail_AKSVD
			{
				iconPinPoint="center";
				iconPosition[]={0.588,0.227};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
		};
		aimTransitionSpeed=0.89999998;
	};
	class CUP_sgun_Saiga12K_top_rail: CUP_sgun_Saiga12K
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Saiga12K\CUP_saiga12k_top_rail.p3d";
		displayName="$STR_CUP_dn_saiga12k_top_rail";
		picture="\CUP\Weapons\CUP_Weapons_Saiga12K\data\ui\gear_saiga12k_top_X_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_DovetailMount_Saiga12k: CUP_PicatinnyTopShortMount
			{
				iconPinPoint="center";
				iconPosition[]={0.58399999,0.207};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
		};
	};
};
