class CfgPatches
{
	class CUP_Weapons_L129
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_L129A1",
			"CUP_srifle_L129A1_HG",
			"CUP_srifle_L129A1_d",
			"CUP_srifle_L129A1_HG_d",
			"CUP_srifle_L129A1_w",
			"CUP_srifle_L129A1_HG_w",
			"CUP_srifle_L129A1_ctrg",
			"CUP_srifle_L129A1_HG_ctrg",
			"CUP_srifle_L129A1_ctrgt",
			"CUP_srifle_L129A1_HG_ctrgt",
			"CUP_srifle_L129A1_HG_Leupold_Bipod"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_Ammunition"
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
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class asdg_MuzzleSlot_762;
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
	class CUP_srifle_L129A1: Rifle_Base_F
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="$STR_CUP_dn_L129a1";
		descriptionshort="$STR_CUP_dss_L129a1";
		discretedistance[]={100,200,300};
		discretedistanceinitindex=0;
		dispersion=0.00059000001;
		aimTransitionSpeed=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_L129\data\anim\default.rtm"
		};
		magazines[]=
		{
			"CUP_20Rnd_762x51_L129_M",
			"20Rnd_762x51_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x51_AR10",
			"CBA_762x51_AR10_L"
		};
		model="CUP\Weapons\CUP_Weapons_L129\CUP_L129A1_new.p3d";
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_X_ca.paa";
		cursor="srifle";
		reloadAction="GestureReloadSPAR_01";
		recoil="recoil_dmr_03";
		hasbipod=1;
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\sfx\Dry",
			1,
			1,
			35
		};
		ACE_barrelLength=410;
		ACE_barrelTwist=285.75;
		ACE_twistDirection=1;
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libtextdesc="$STR_CUP_lib_L129a1";
		};
		class GunClouds
		{
			cloudletaccy=0;
			cloudletalpha=0.30000001;
			cloudletanimperiod=1;
			cloudletcolor[]={1,1,1,0};
			cloudletduration=0.050000001;
			cloudletfadein=0;
			cloudletfadeout=0.1;
			cloudletgrowup=0.050000001;
			cloudletmaxyspeed=100;
			cloudletminyspeed=-100;
			cloudletshape="cloudletClouds";
			cloudletsize=1;
			deltat=0;
			initt=0;
			interval=-0.02;
			size=0.30000001;
			sourcesize=0.02;
			timetolive=0;
			class Table
			{
				class T0
				{
					color[]={1,1,1,0};
					maxt=0;
				};
			};
		};
		class WeaponSlotsInfo
		{
			mass=97;
			class CUP_PicatinnyTopMountL129: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.52999997,0.36000001};
				iconScale=0.12;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnySideMountL129: CUP_PicatinnySideMount
			{
				iconPosition[]={0.2,0.44};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0.039999999,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class CUP_PicatinnyUnderMountL129: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.2,0.54000002};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			allowedSlots[]={901};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="Konec hlavne";
				effectname="RifleAssaultCloud";
				positionname="Usti hlavne";
			};
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
					"CUP_M4_Closure_SoundSet",
					"CUP_M14_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M4_Closure_SoundSet",
					"CUP_M14_ShotSD_SoundSet",
					"CUP_Rifle1_SD_Tail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.085000001;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			dispersion=0.00059000001;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
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
			maxRangeProbab=0.0089999996;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69;
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
		ace_railHeightAboveBore=3.5;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_co.paa"
		};
	};
	class CUP_srifle_L129A1_HG: CUP_srifle_L129A1
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="CUP\Weapons\CUP_Weapons_L129\CUP_L129A1_new_FG.p3d";
		displayname="$STR_CUP_dn_L129a1_HG";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_L129\data\anim\fg.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_HG_X_ca.paa";
		modes[]=
		{
			"Single"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=98;
		};
	};
	class CUP_srifle_L129A1_d: CUP_srifle_L129A1
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (Desert)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_d_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_d_X_ca.paa";
	};
	class CUP_srifle_L129A1_HG_d: CUP_srifle_L129A1_HG
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (Foregrip/Desert)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_d_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_HG_d_X_ca.paa";
	};
	class CUP_srifle_L129A1_w: CUP_srifle_L129A1
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (Woodland)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_w_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_w_X_ca.paa";
	};
	class CUP_srifle_L129A1_HG_w: CUP_srifle_L129A1_HG
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (Foregrip/Woodland)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_w_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_HG_w_X_ca.paa";
	};
	class CUP_srifle_L129A1_ctrg: CUP_srifle_L129A1
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (CTRG Arid)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_ctrg_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_ctrg_X_ca.paa";
	};
	class CUP_srifle_L129A1_HG_ctrg: CUP_srifle_L129A1_HG
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (Foregrip/CTRG Arid)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_ctrg_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_HG_ctrg_X_ca.paa";
	};
	class CUP_srifle_L129A1_ctrgt: CUP_srifle_L129A1
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (CTRG Tropical)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_ctrgt_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_ctrgt_X_ca.paa";
	};
	class CUP_srifle_L129A1_HG_ctrgt: CUP_srifle_L129A1_HG
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="L129A1 (Foregrip/CTRG Tropical)";
		hiddenselectionstextures[]=
		{
			"CUP\Weapons\CUP_Weapons_L129\data\new\L129A1_ctrgt_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_L129\UI\gear_L129A1_HG_ctrg_X_ca.paa";
	};
	class CUP_srifle_L129A1_HG_Leupold_Bipod: CUP_srifle_L129A1_HG
	{
		scope=1;
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL129";
				item="CUP_optic_Leupold_VX3";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL129";
				item="CUP_acc_LLM";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountL129";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	class CUP_srifle_L129A1_HG_TA648_Bipod: CUP_srifle_L129A1_HG
	{
		scope=1;
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL129";
				item="CUP_optic_ACOG_TA648_308_RDS_Black";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL129";
				item="CUP_acc_LLM";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountL129";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	class CUP_srifle_L129A1_HG_TA648_Bipod_d: CUP_srifle_L129A1_HG_d
	{
		scope=1;
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL129";
				item="CUP_optic_ACOG_TA648_308_RDS_Desert";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL129";
				item="CUP_acc_LLM";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountL129";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
	class CUP_srifle_L129A1_HG_TA648_Bipod_w: CUP_srifle_L129A1_HG_w
	{
		scope=1;
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL129";
				item="CUP_optic_ACOG_TA648_308_RDS_Wdl";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL129";
				item="CUP_acc_LLM";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountL129";
				item="CUP_bipod_Harris_1A2_L_BLK";
			};
		};
	};
};
