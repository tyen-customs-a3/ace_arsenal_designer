class CfgPatches
{
	class CUP_Weapons_CZ750
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_CZ750_Base",
			"CUP_srifle_CZ750",
			"CUP_srifle_CZ750_SOS_bipod"
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
class asdg_FrontSideRail;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_srifle_CZ750_Base: Rifle_Long_Base_F
	{
		class EventHandlers
		{
			fired="_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction="CUP_GestureRechamberAWM";
			sound="CUP_bolt_AWM";
			soundLocation="RightHandMiddle1";
			delay=0.02;
			onEmpty=0;
			hasOptic=1;
			cartridgeType="FxCartridge_762";
			cartridgeEjectPosition[]={-0.0099999998,0.0099999998,0.1};
			cartridgeEjectVelocity[]={0,1.2,0.5};
			cartridgeEjectDelay=0.54000002;
		};
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		cursor="srifle";
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		scope=0;
		magazines[]=
		{
			"CUP_10Rnd_762x51_CZ750_Tracer",
			"CUP_10Rnd_762x51_CZ750"
		};
		magazineWell[]=
		{
			"CBA_762x51_CZ750"
		};
		reloadAction="CUP_GestureReloadAWM";
		maxZeroing=2000;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.89125103,
			1,
			25
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.89125103,
			1,
			25
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.89125103,
			1,
			25
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.89125103,
			1,
			25
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.79432797,
			1,
			25
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.79432797,
			1,
			25
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.79432797,
			1,
			25
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.79432797,
			1,
			25
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.707946,
			1,
			25
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.707946,
			1,
			25
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.707946,
			1,
			25
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.707946,
			1,
			25
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		descriptionShort="$STR_CUP_dss_cz750";
		class Library
		{
			libTextDesc="$STR_CUP_lib_cz750";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_CZ750\Anims\M24.rtm"
		};
		dexterity=1.3;
		inertia=0.69999999;
		aimTransitionSpeed=0.69999999;
		selectionFireAnim="zasleh";
		recoil="recoil_dmr_03";
		initSpeed=-1;
		jsrs_soundeffect="JSRS2_Distance_Effects_snip1";
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=660.40002;
		ace_railHeightAboveBore=2.7;
		class Single: Mode_SemiAuto
		{
			dispersion=0.00055;
			soundContinuous=0;
			reloadTime=1.6666666;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_BoltActions_Closure_SoundSet",
					"CUP_BoltActions_Shot_SoundSet",
					"CUP_SNIPER2_Tail_SoundSet"
				};
			};
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
			midRange=700;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_CZ750\data\sfx\Reload",
			1,
			1,
			10
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_CZ750\data\sfx\Dry",
			0.50118703,
			1,
			20
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=119;
			class CUP_PicatinnyTopMountCZ750: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.58999997,0.38};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountCZ750: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.38,0.49000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
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
	};
	class CUP_srifle_CZ750: CUP_srifle_CZ750_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_cz750";
		model="CUP\Weapons\CUP_Weapons_CZ750\CUP_CZ750.p3d";
		picture="\CUP\Weapons\CUP_Weapons_CZ750\data\ui\gear_cz750_x_ca.paa";
		weaponInfoType="RscWeaponZeroing";
	};
	class CUP_srifle_CZ750_SOS_bipod: CUP_srifle_CZ750
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountCZ750";
				item="optic_SOS";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountCZ750";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
};
