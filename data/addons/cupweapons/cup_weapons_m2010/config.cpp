class CfgPatches
{
	class CUP_Weapons_M2010
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_M2010_blk",
			"CUP_srifle_M2010_blk_LRT",
			"CUP_srifle_M2010_ctrg",
			"CUP_srifle_M2010_ctrg_LRT",
			"CUP_srifle_M2010_ctrgt",
			"CUP_srifle_M2010_ctrgt_LRT",
			"CUP_srifle_M2010_hex",
			"CUP_srifle_M2010_hex_LRT",
			"CUP_srifle_M2010_wdl",
			"CUP_srifle_M2010_wdl_LRT",
			"CUP_srifle_M2010_winter",
			"CUP_srifle_M2010_winter_LRT",
			"CUP_srifle_M2010_dsrt",
			"CUP_srifle_M2010_dsrt_LRT"
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
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_GestureReloadM2010="CUP_GestureReloadM2010";
		CUP_GestureReloadM2010Prone="CUP_GestureReloadM2010Prone";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class NoActions: ManActions
		{
			CUP_GestureReloadM2010[]=
			{
				"CUP_GestureReloadM2010",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			CUP_GestureReloadM2010[]=
			{
				"CUP_GestureReloadM2010Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM2010[]=
			{
				"CUP_GestureReloadM2010_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM2010[]=
			{
				"CUP_GestureReloadM2010_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM2010[]=
			{
				"CUP_GestureReloadM2010",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class CUP_GestureReloadM2010: Default
		{
			file="\CUP\Weapons\CUP_Weapons_M2010\data\anim\xm2010_reload.rtm";
			looped=0;
			speed=0.30000001;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			rightHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
			leftHandIKBeg=1;
			legtHandIKEnd=1;
		};
		class CUP_GestureReloadM2010Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_M2010\data\anim\xm2010_reload_prone.rtm";
			looped=0;
			speed=0.30000001;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			rightHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
			leftHandIKBeg=1;
			legtHandIKEnd=1;
		};
		class CUP_GestureReloadM2010_Context: CUP_GestureReloadM2010
		{
			mask="handsWeapon_context";
		};
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
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_srifle_M2010_BASE: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		magazines[]=
		{
			"CUP_5Rnd_762x67_M2010_M",
			"CUP_5Rnd_TE1_Red_Tracer_762x67_M2010_M"
		};
		class Library
		{
			libTextDesc="Remington M2010 ESR";
		};
		model="CUP\Weapons\CUP_Weapons_M2010\CUP_M2010.p3d";
		class EventHandlers
		{
			fired="_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction="CUP_GestureBoltActionFire";
			sound="CUP_BoltActionSound";
			soundLocation="RightHandMiddle1";
			delay=0.02;
			onEmpty=0;
			hasOptic=1;
			cartridgeType="FxCartridge_762";
			cartridgeEjectPosition[]={0.0049999999,0.0099999998,0.1};
			cartridgeEjectVelocity[]={0,1.2,0.5};
			cartridgeEjectDelay=0.54299998;
		};
		reloadAction="CUP_GestureReloadM2010";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M2010\data\anim\XM2010_anim.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
			class CUP_PicatinnyTopMountM2010: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.55000001,0.41999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountM2010: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.28999999,0.72000003};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
			class MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_B",
					"muzzle_snds_B_snd_F",
					"muzzle_snds_B_khk_F"
				};
				displayname="Muzzle Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope=0;
			};
			class CowsSlot
			{
			};
		};
		inertia=0.69999999;
		dexterity=1.3;
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="M2010 ESR Sniper Rifle<br/>Caliber: .300 Winchester Magnum";
		discreteDistance[]={50,100,200,300,400};
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
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_snip1";
		initSpeed=-1;
		ACE_barrelTwist=254;
		ACE_barrelLength=640.08002;
		ace_railHeightAboveBore=1.9;
		modes[]=
		{
			"Single",
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
					"CUP_BoltActions_Closure_SoundSet",
					"CUP_BoltActions_Shot_SoundSet",
					"CUP_BoltActions_Tail_SoundSet",
					"CUP_SNIPER2_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_BoltActions_Closure_SoundSet",
					"CUP_M2010_ShotSD_SoundSet",
					"CUP_Rifle1_SD_Tail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=1.2;
			recoil="recoil_single_sdar";
			recoilProne="recoil_single_prone_sdar";
			dispersion=0.00092999998;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.0099999998,
			1
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\reloads\new_MX",
			0.39810717,
			1,
			30
		};
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class CUP_srifle_M2010_blk: CUP_srifle_M2010_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="M2010 (Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M2010\data\M2010_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_M2010\data\ui\gear_M2010_blk_x_ca.paa";
	};
	class CUP_srifle_M2010_blk_LRT: CUP_srifle_M2010_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM2010";
				item="CUP_optic_LeupoldMk4_20x40_LRT";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM2010";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M2010_ctrg: CUP_srifle_M2010_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="M2010 (CTRG)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M2010\data\M2010_ctrg_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_M2010\data\ui\gear_M2010_ctrg_x_ca.paa";
	};
	class CUP_srifle_M2010_ctrg_LRT: CUP_srifle_M2010_ctrg
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM2010";
				item="CUP_optic_LeupoldMk4_20x40_LRT";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM2010";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M2010_ctrgt: CUP_srifle_M2010_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="M2010 (CTRG Tropical)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M2010\data\M2010_ctrgt_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_M2010\data\ui\gear_M2010_ctrgt_x_ca.paa";
	};
	class CUP_srifle_M2010_ctrgt_LRT: CUP_srifle_M2010_ctrgt
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM2010";
				item="CUP_optic_LeupoldMk4_20x40_LRT";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM2010";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M2010_hex: CUP_srifle_M2010_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="M2010 (Urban Hex)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M2010\data\M2010_hex_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_M2010\data\ui\gear_M2010_hex_x_ca.paa";
	};
	class CUP_srifle_M2010_hex_LRT: CUP_srifle_M2010_hex
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM2010";
				item="CUP_optic_LeupoldMk4_20x40_LRT";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM2010";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M2010_wdl: CUP_srifle_M2010_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="M2010 (Woodland)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M2010\data\M2010_wdl_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_M2010\data\ui\gear_M2010_wdl_x_ca.paa";
	};
	class CUP_srifle_M2010_wdl_LRT: CUP_srifle_M2010_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM2010";
				item="CUP_optic_LeupoldMk4_20x40_LRT";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM2010";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M2010_winter: CUP_srifle_M2010_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="M2010 (Winter)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M2010\data\M2010_winter_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_M2010\data\ui\gear_M2010_winter_x_ca.paa";
	};
	class CUP_srifle_M2010_winter_LRT: CUP_srifle_M2010_winter
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM2010";
				item="CUP_optic_LeupoldMk4_20x40_LRT";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM2010";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M2010_dsrt: CUP_srifle_M2010_BASE
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="M2010 (Desert)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M2010\data\M2010_dsrt_co.paa"
		};
		picture="\CUP\Weapons\CUP_Weapons_M2010\data\ui\gear_M2010_dsrt_x_ca.paa";
	};
	class CUP_srifle_M2010_dsrt_LRT: CUP_srifle_M2010_dsrt
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM2010";
				item="CUP_optic_LeupoldMk4_20x40_LRT";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM2010";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
};
