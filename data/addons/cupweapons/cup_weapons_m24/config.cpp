class CfgPatches
{
	class CUP_Weapons_M24
	{
		units[]={};
		weapons[]=
		{
			"CUP_srifle_M24_des",
			"CUP_srifle_M24_wdl",
			"CUP_srifle_M24_ghillie",
			"CUP_srifle_M24_blk",
			"CUP_srifle_M40A3",
			"CUP_Mxx_camo",
			"CUP_Mxx_camo_half",
			"CUP_srifle_M24_des_LeupoldMk4LRT",
			"CUP_srifle_M24_wdl_LeupoldMk4LRT",
			"CUP_srifle_M24_blk_LeupoldMk4LRT",
			"CUP_srifle_M24_ghillie_bipod",
			"CUP_srifle_M40A3_bipod",
			"CUP_srifle_M24_wdl_leupoldmk4_camo_bipod_snd"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_West_Attachments"
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
class ItemCore;
class InventoryFlashLightItem_Base_F;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_srifle_M24_des: Rifle_Base_F
	{
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
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_m24_d";
		selectionFireAnim="zasleh";
		model="CUP\Weapons\CUP_Weapons_M24\CUP_M24.p3d";
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24"
		};
		magazineWell[]=
		{
			"CBA_762x51_1rnd",
			"CBA_762x51_2rnds",
			"CBA_762x51_3rnds",
			"CBA_762x51_4rnds",
			"CBA_762x51_5rnds"
		};
		picture="\CUP\Weapons\CUP_Weapons_M24\data\ui\gear_M24D_X_CA.paa";
		cursor="srifle";
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		reloadTime=2;
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\sfx\M24_Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\sfx\M24_Dry",
			1,
			1,
			35
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		reloadAction="CUP_GestureReloadBolt1";
		jsrs_soundeffect="JSRS2_Distance_Effects_M24";
		ACE_barrelTwist=285.75;
		ACE_barrelLength=609.59998;
		ace_railHeightAboveBore=1.8;
		initSpeed=-1;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=119;
			class CUP_PicatinnyTopMountM24: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.55000001,0.41999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountM24: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.28999999,0.72000003};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"CUP_Mxx_camo",
					"CUP_Mxx_camo_half"
				};
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
		class ItemInfo
		{
			priority=1;
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\wpn_m24_d_co.paa"
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
			};
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
			reloadTime=2;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			dispersion=0.00050000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
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
		recoil="recoil_dmr_06";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M24\data\anim\M24.rtm"
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_m24";
		};
		descriptionShort="$STR_CUP_dss_m24";
		dexterity=1.35;
		inertia=0.69999999;
		aimTransitionSpeed=0.69999999;
	};
	class CUP_srifle_M24_wdl: CUP_srifle_M24_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_m24";
		picture="\CUP\Weapons\CUP_Weapons_M24\data\ui\gear_M24G_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\wpn_m24_green_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountM24: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.56999999,0.44999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountM24: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.28999999,0.69};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"CUP_Mxx_camo",
					"CUP_Mxx_camo_half"
				};
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
	};
	class CUP_srifle_M24_ghillie: CUP_srifle_M24_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_m24_c";
		picture="\CUP\Weapons\CUP_Weapons_M24\data\ui\gear_m24_camo_X_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\wpn_m24_green_camo_co.paa"
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM24";
				item="CUP_optic_LeupoldMk4_10x40_LRT_Woodland";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_Mxx_camo";
			};
		};
	};
	class CUP_srifle_M24_blk: CUP_srifle_M24_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_m24_black";
		picture="\CUP\Weapons\CUP_Weapons_M24\data\ui\gear_M24Blk_X_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\m24_blk_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\m24_blk.rvmat"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountM24: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.56999999,0.44999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountM24: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.28999999,0.69};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"CUP_Mxx_camo",
					"CUP_Mxx_camo_half"
				};
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
	};
	class CUP_srifle_M40A3: CUP_srifle_M24_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_m40A3";
		descriptionShort="$STR_CUP_dss_m40A3";
		class Library
		{
			libTextDesc="$STR_CUP_lib_m40A3";
		};
		model="CUP\Weapons\CUP_Weapons_M24\CUP_M40A3.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M24\data\ui\gear_m40A3_X_ca.paa";
		class CBA_weaponEvents
		{
			handAction="CUP_GestureBoltActionFire";
			sound="CUP_BoltActionSound";
			soundLocation="RightHandMiddle1";
			delay=0.02;
			onEmpty=0;
			hasOptic=1;
			cartridgeType="FxCartridge_762";
			cartridgeEjectPosition[]={-0.029999999,0.0099999998,0.1};
			cartridgeEjectVelocity[]={0,1.2,0.5};
			cartridgeEjectDelay=0.54299998;
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\m40a3_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M24\data\anim\M40A3.rtm"
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\sfx\M40_Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M24\data\sfx\M24_Dry",
			1,
			1,
			35
		};
		aimTransitionSpeed=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=160.5;
			class CUP_PicatinnyTopMountM24: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.56999999,0.44999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountM24: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.38,0.69};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Left";
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"CUP_Mxx_camo",
					"CUP_Mxx_camo_half"
				};
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
			class MuzzleSlot
			{
				compatibleitems[]={};
				displayname="Muzzle Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope=0;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_BoltActions_Closure_SoundSet",
					"CUP_BoltActions_Shot_SoundSet",
					"CUP_BoltActions_Tail_SoundSet",
					"CUP_SNIPER1_Tail_SoundSet"
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
			dispersion=0.00049000001;
		};
		ace_railHeightAboveBore=2.2;
	};
	class CUP_Mxx_camo: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		inertia=0.1;
		displayName="$STR_CUP_dn_m24_m40_camo";
		descriptionUse="Wrap";
		picture="\CUP\Weapons\CUP_Weapons_M24\data\ui\gear_Mxx_camo.paa";
		model="CUP\Weapons\CUP_Weapons_M24\CUP_Mxx_camo.p3d";
		descriptionShort="$STR_CUP_dss_m24_m40_camo";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			RMBhint="Wrap";
			class FlashLight
			{
				color[]={0,0,0};
				ambient[]={0,0,0};
				position="";
				direction="";
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=0;
				intensity=0;
				useFlare=0;
				dayLight=0;
				FlareSize=0;
				onlyInNvg=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
				};
				scale[]={0};
			};
		};
	};
	class CUP_Mxx_camo_half: CUP_Mxx_camo
	{
		displayName="$STR_CUP_dn_m24_m40_camo_half";
		model="CUP\Weapons\CUP_Weapons_M24\CUP_Mxx_camo_half.p3d";
		picture="\CUP\Weapons\CUP_Weapons_M24\data\ui\gear_Mxx_camo_half.paa";
	};
	class CUP_srifle_M24_des_LeupoldMk4LRT: CUP_srifle_M24_des
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM24";
				item="CUP_optic_LeupoldMk4_10x40_LRT_Desert";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM24";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M24_wdl_LeupoldMk4LRT: CUP_srifle_M24_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM24";
				item="CUP_optic_LeupoldMk4_10x40_LRT_Woodland";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM24";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M24_blk_LeupoldMk4LRT: CUP_srifle_M24_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM24";
				item="CUP_optic_LeupoldMk4";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM24";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M24_ghillie_bipod: CUP_srifle_M24_ghillie
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM24";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M40A3_bipod: CUP_srifle_M40A3
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountM24";
				item="CUP_optic_LeupoldMk4";
			};
			class LinkedItemsBipod
			{
				slot="CUP_PicatinnyUnderMountM24";
				item="CUP_bipod_Harris_1A2_L";
			};
		};
	};
	class CUP_srifle_M24_wdl_leupoldmk4_camo_bipod_snd: CUP_srifle_M24_wdl
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B_khk_F";
			};
			class LinkedItemOptic
			{
				slot="CUP_PicatinnyTopMountM24";
				item="cup_optic_leupoldmk4_10x40_lrt_woodland";
			};
			class LinkedItemBipod
			{
				slot="CUP_PicatinnyUnderMountM24";
				item="bipod_01_f_khk";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="cup_mxx_camo";
			};
		};
	};
};
