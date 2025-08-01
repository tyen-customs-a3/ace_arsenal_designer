class CfgPatches
{
	class CUP_Weapons_Mk23
	{
		units[]={};
		weapons[]=
		{
			"CUP_hgun_Mk23",
			"CUP_acc_mk23_lam_f",
			"CUP_acc_mk23_lam_l",
			"CUP_acc_mk23_lam_v",
			"CUP_hgun_mk23_snds_lam"
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
class asdg_MuzzleSlot_45ACP;
class asdg_SlotInfo;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class CUP_acc_Flashlight;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class CUP_acc_mk23_lam_f: CUP_acc_Flashlight
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="Prototype Laser Aiming Module";
		picture="\CUP\Weapons\CUP_Weapons_Mk23\data\ui\gear_acc_lam_proto_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_mk23\CUP_mk23_lam_proto.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=100;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=100;
				dayLight=0;
				volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
				class Attenuation
				{
					start=0;
					constant=0.5;
					linear=0.1;
					quadratic=0.2;
					hardLimitStart=27;
					hardLimitEnd=34;
				};
				scale[]={1,1,1};
			};
		};
		MRT_SwitchItemNextClass="CUP_acc_mk23_lam_v";
		MRT_SwitchItemPrevClass="CUP_acc_mk23_lam_l";
		MRT_switchItemHintText="$STR_CUP_dn_MRT_AttachMode_Flashlight";
	};
	class CUP_acc_mk23_lam_l: CUP_acc_mk23_lam_f
	{
		scope=1;
		class ItemInfo: ItemInfo
		{
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser pos";
				irLaserEnd="laser dir";
				irDistance=1;
			};
			class FlashLight
			{
			};
		};
		MRT_SwitchItemNextClass="CUP_acc_mk23_lam_f";
		MRT_SwitchItemPrevClass="CUP_acc_mk23_lam_v";
		MRT_switchItemHintText="$STR_CUP_dn_MRT_AttachMode_IRLaser";
	};
	class CUP_acc_mk23_lam_v: CUP_acc_mk23_lam_f
	{
		scope=1;
		class ItemInfo: ItemInfo
		{
			class Pointer
			{
				irLaserPos="laser pos";
				irLaserEnd="laser dir";
				irDistance=5;
				isIR=0;
				irDotSize=0.025;
				beamThickness=0;
				beamMaxLength=50;
				dotColor[]={16384,0,0};
				beamColor[]={0,0,0};
			};
		};
		MRT_SwitchItemNextClass="CUP_acc_mk23_lam_l";
		MRT_SwitchItemPrevClass="CUP_acc_mk23_lam_f";
		MRT_switchItemHintText="$STR_CUP_dn_MRT_AttachMode_VisLaser";
	};
	class CUP_hgun_Mk23: Pistol_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Mk23\CUP_hgun_mk23.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Mk23\data\ui\gear_mk23_x_ca.paa";
		magazines[]=
		{
			"CUP_12Rnd_45ACP_mk23"
		};
		displayname="$STR_CUP_dn_mk23";
		descriptionShort="$STR_CUP_dss_mk23";
		class Library
		{
			libTextDesc="$STR_CUP_lib_mk23";
		};
		reloadTime=0.13;
		bullet1[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_01",
			0.2238721,
			1,
			15
		};
		bullet10[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_02",
			0.2238721,
			1,
			15
		};
		bullet11[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_03",
			0.2238721,
			1,
			15
		};
		bullet12[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_04",
			0.2238721,
			1,
			15
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
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Mk23\data\sfx\Dry",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Mk23\data\sfx\Reload",
			0.56234133,
			1,
			30
		};
		magazineReloadSwitchPhase=0.24600001;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Mk23\data\mk23_co.paa"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_1911";
		initSpeed=-1.04;
		ACE_barrelTwist=377.952;
		ACE_barrelLength=149.09801;
		modes[]=
		{
			"Single"
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
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\weapons\closure\closure_handgun_3",
					1.0351422,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\weapons\closure\closure_handgun_3",
					1.0351422,
					1.1,
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
					"CUP_Colt1911_StandardSound_SoundSet",
					"4Five_Tail_SoundSet",
					"4Five_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_Mk23\data\sfx\M1911_S1",
					0.79432797,
					1,
					700
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_Mk23\data\sfx\M1911_S2",
					0.79432797,
					1,
					700
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_Mk23\data\sfx\M1911_S3",
					0.79432797,
					1,
					700
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_Mk23\data\sfx\M1911_S4",
					0.79432797,
					1,
					700
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
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_Colt1911_SilencedSound_SoundSet",
					"4Five_silencerTail_SoundSet",
					"4Five_silencerInteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\sounds_f\weapons\silenced\silent-23",
					0.56234133,
					1,
					600
				};
				begin2[]=
				{
					"A3\sounds_f\weapons\silenced\silent-24",
					0.56234133,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
		};
		recoil="recoil_pistol_acpc2";
		aimTransitionSpeed=1.6;
		dexterity=1.8;
		inertia=0.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=26.4552;
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_45ACP
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				class compatibleItems
				{
					CUP_muzzle_snds_mk23=1;
				};
			};
			class PointerSlot: asdg_SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				class compatibleItems
				{
					CUP_acc_mk23_lam_l=1;
					CUP_acc_mk23_lam_f=1;
					CUP_acc_mk23_lam_v=1;
				};
			};
			holsterScale=0.92000002;
		};
	};
	class CUP_hgun_mk23_snds_lam: CUP_hgun_Mk23
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="CUP_muzzle_snds_mk23";
			};
			class LinkedItemSide
			{
				slot="PointerSlot";
				item="CUP_acc_mk23_lam_l";
			};
		};
	};
};
