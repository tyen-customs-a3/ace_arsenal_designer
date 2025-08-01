class CfgPatches
{
	class CUP_Weapons_M107
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_M107_Base",
			"CUP_srifle_M107_Desert",
			"CUP_srifle_M107_Pristine",
			"CUP_srifle_M107_Snow",
			"CUP_srifle_M107_Woodland",
			"CUP_srifle_M107_LeupoldVX3",
			"CUP_srifle_M107_LeupoldMk4",
			"CUP_srifle_M107_ANPAS13c2",
			"CUP_srifle_M107_LeupoldMk4_10x40",
			"CUP_srifle_M107_Woodland_LeupoldMk4_25x50"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_West_Attachments",
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
class CUP_MuzzleSlot_50BMG;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_srifle_M107_Base: Rifle_Long_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=420;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		maxZeroing=2000;
		cursor="srifle";
		model="CUP\Weapons\CUP_Weapons_M107\CUP_M107.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M107\data\UI\gear_M107_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=270.60001;
			class CUP_PicatinnyTopMountM107: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.55000001,0.44999999};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_M107Muzzle: CUP_MuzzleSlot_50BMG
			{
				iconPosition[]={0.1,0.34999999};
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
		class ItemInfo
		{
			priority=1;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		selectionFireAnim="muzzleFlashNOROT";
		dexterity=0.44999999;
		inertia=1;
		aimTransitionSpeed=0.5;
		displayName="$STR_CUP_dn_m107";
		reloadtime=0.75;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_M107\data\anim\M107b.rtm"
		};
		reloadAction="GestureReloadDMR05";
		magazineReloadSwitchPhase=0.12;
		recoil="recoil_gm6";
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\sfx\Dry",
			1,
			1,
			35
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		magazines[]=
		{
			"CUP_10Rnd_127x99_m107"
		};
		magazineWell[]=
		{
			"CBA_50BMG_M107"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_BigSniper";
		ACE_barrelTwist=381;
		ACE_barrelLength=736.59998;
		ace_railHeightAboveBore=3.5999999;
		initSpeed=-1;
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m107_Closure_SoundSet",
					"CUP_sniper1_crackling_SoundSet",
					"CUP_m107_Shot_SoundSet",
					"CUP_sniper1_Tail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"CUP_m107_Closure_SoundSet",
					"CUP_m107_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.5;
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.40000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.2;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2100;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class Library
		{
			libtextdesc="$STR_CUP_lib_m107";
		};
		descriptionshort="$STR_CUP_dss_m107";
		deployedPivot="bipod";
		hasBipod=1;
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\Cheek_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82\m82.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\m82_plastik.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\M82_cheeckrest.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod.rvmat"
		};
	};
	class CUP_srifle_M107_Desert: CUP_srifle_M107_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_m107_desert";
		picture="\CUP\Weapons\CUP_Weapons_M107\data\UI\gear_M107_desert_x_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_Desert\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_Desert\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\Cheek_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_Desert\m82_desert.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_Desert\m82_desert_plastik.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\M82_cheeckrest.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod.rvmat"
		};
	};
	class CUP_srifle_M107_Pristine: CUP_srifle_M107_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_m107_pristine";
		picture="\CUP\Weapons\CUP_Weapons_M107\data\UI\gear_M107_black_x_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_pristine\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_pristine\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\Cheek_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_pristine\m82.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_pristine\m82_plastik.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\M82_cheeckrest.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod.rvmat"
		};
	};
	class CUP_srifle_M107_Snow: CUP_srifle_M107_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_m107_snow";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		picture="\CUP\Weapons\CUP_Weapons_M107\data\UI\gear_M107_winter_x_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_snow\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_snow\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\Cheek_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_snow\m82.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_snow\m82_plastik.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\M82_cheeckrest.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod.rvmat"
		};
	};
	class CUP_srifle_M107_Woodland: CUP_srifle_M107_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_m107_woodland";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		picture="\CUP\Weapons\CUP_Weapons_M107\data\UI\gear_M107_woodland_x_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_woodland\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_woodland\Barrett_M82A1_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\Cheek_co.paa",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"CUP\Weapons\CUP_Weapons_M107\data\M82_woodland\m82.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82_woodland\m82_plastik.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\M82\M82_cheeckrest.rvmat",
			"CUP\Weapons\CUP_Weapons_M107\data\Bipod.rvmat"
		};
	};
	class CUP_srifle_M107_LeupoldVX3: CUP_srifle_M107_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM107";
				item="CUP_optic_LeupoldMk4_25x50_LRT";
			};
		};
	};
	class CUP_srifle_M107_LeupoldMk4: CUP_srifle_M107_Pristine
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM107";
				item="CUP_optic_LeupoldMk4_25x50_LRT";
			};
		};
	};
	class CUP_srifle_M107_ANPAS13c2: CUP_srifle_M107_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM107";
				item="CUP_optic_AN_PAS_13c2";
			};
		};
	};
	class CUP_srifle_M107_LeupoldMk4_10x40: CUP_srifle_M107_Pristine
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM107";
				item="cup_optic_leupoldmk4";
			};
		};
	};
	class CUP_srifle_M107_Woodland_LeupoldMk4_25x50: CUP_srifle_M107_Woodland
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM107";
				item="CUP_optic_LeupoldMk4_25x50_LRT_WOODLAND";
			};
		};
	};
};
