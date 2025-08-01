class CfgPatches
{
	class CUP_Weapons_Glock17
	{
		units[]={};
		weapons[]=
		{
			"CUP_acc_Glock17_Flashlight",
			"CUP_hgun_Glock17",
			"CUP_hgun_Glock17_blk",
			"CUP_hgun_glock17_blk_flashlight_snds",
			"CUP_hgun_glock17_blk_snds",
			"CUP_hgun_Glock17_tan",
			"CUP_hgun_glock17_tan_snds",
			"CUP_hgun_glock17_flashlight",
			"CUP_hgun_glock17_flashlight_snds",
			"CUP_hgun_glock17_snds",
			"CUP_hgun_glock17_tan_flashlight_snds"
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
class asdg_MuzzleSlot_9MM;
class Mode_SemiAuto;
class asdg_SlotInfo;
class asdg_PistolUnderRail: asdg_SlotInfo
{
	class compatibleItems
	{
		CUP_acc_Glock17_Flashlight=1;
		CUP_acc_Glock17_L=1;
		CUP_acc_Glock17_V=1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class CUP_acc_Glock17_Flashlight: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		inertia=0.1;
		displayName="$STR_CUP_dn_flashlight_glock17";
		descriptionUse="Glock 17 Flashlight Attachment<br/>Flashlight";
		picture="\CUP\Weapons\CUP_Weapons_Glock17\data\ui\gear_accv_g17flashlight_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Glock17\CUP_flashlight.p3d";
		descriptionShort="$STR_CUP_dss_flashlight_glock17";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			RMBhint="Flashlight";
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
		MRT_SwitchItemNextClass="CUP_acc_Glock17_V";
		MRT_SwitchItemPrevClass="CUP_acc_Glock17_L";
		MRT_switchItemHintText="$STR_CUP_dn_MRT_AttachMode_Flashlight";
	};
	class CUP_acc_Glock17_L: CUP_acc_Glock17_Flashlight
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		class ItemInfo: ItemInfo
		{
			RMBhint="IR laser";
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser pos";
				irLaserEnd="laser dir";
				irDistance=5;
			};
			class FlashLight
			{
			};
		};
		MRT_SwitchItemNextClass="CUP_acc_Glock17_Flashlight";
		MRT_SwitchItemPrevClass="CUP_acc_Glock17_V";
		MRT_switchItemHintText="$STR_CUP_dn_MRT_AttachMode_IRLaser";
	};
	class CUP_acc_Glock17_V: CUP_acc_Glock17_Flashlight
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		class ItemInfo: ItemInfo
		{
			RMBhint="Laser";
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
		MRT_SwitchItemNextClass="CUP_acc_Glock17_L";
		MRT_SwitchItemPrevClass="CUP_acc_Glock17_Flashlight";
		MRT_switchItemHintText="$STR_CUP_dn_MRT_AttachMode_VisLaser";
	};
	class CUP_hgun_Glock17: Pistol_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		aimTransitionSpeed=1.6;
		distanceZoomMin=50;
		distanceZoomMax=50;
		selectionFireAnim="zasleh";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Glock17\CUP_glock17.p3d";
		magazineWell[]=
		{
			"CBA_9x19_Glock_Full"
		};
		modelOptics="-";
		picture="\CUP\Weapons\CUP_Weapons_Glock17\data\ui\gear_glock17_X_ca.paa";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",
			0.2238721,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",
			0.2238721,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",
			0.2238721,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",
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
			"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Dry",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Reload",
			1,
			1,
			10
		};
		ACE_barrelTwist=254;
		ACE_barrelLength=114.3;
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
			jsrs_soundeffect="JSRS2_Distance_Effects_Glock";
			ACE_barrelTwist=248.92;
			ACE_barrelLength=114.046;
			initSpeed=-0.95950001;
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_3",
					1.0351422,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_handgun_3",
					1.0351422,
					1.1,
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
				soundSetShot[]=
				{
					"CUP_Glock17_StandardSound_SoundSet",
					"Rook40_Tail_SoundSet",
					"Rook40_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s1",
					1,
					1,
					800
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s2",
					1,
					1,
					800
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s3",
					1,
					1,
					800
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s4",
					1,
					1,
					800
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
					"CUP_Glock17_SilencedSound_SoundSet",
					"Rook40_silencerTail_SoundSet",
					"Rook40_silencerInteriorTail_SoundSet"
				};
				begin1[]=
				{
					"A3\sounds_f\weapons\silenced\silent-07",
					0.56234133,
					1,
					200
				};
				begin2[]=
				{
					"A3\sounds_f\weapons\silenced\silent-08",
					0.56234133,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			dispersion=0.0043500001;
			reloadtime=0.13;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
		};
		recoil="recoil_pistol_p07";
		reloadAction="GestureReloadPistol";
		magazines[]=
		{
			"CUP_17Rnd_9x19_glock17"
		};
		magazineReloadSwitchPhase=0.24600001;
		displayName="$STR_CUP_dn_glock17";
		class Library
		{
			libTextDesc="$STR_CUP_lib_glock17";
		};
		descriptionShort="$STR_CUP_dss_glock17";
		autoFire=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=13.8;
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"optic_MRD",
					"optic_MRD_black"
				};
				iconPosition[]={0.61176473,0.27058825};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0.2764706,0.35294119};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.40588236,0.61176473};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Bottom";
			};
		};
	};
	class CUP_hgun_Glock17_blk: CUP_hgun_Glock17
	{
		displayName="$STR_CUP_dn_glock17_blk";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_glock17\data\glock17_blk_co.paa"
		};
	};
	class CUP_hgun_glock17_blk_flashlight_snds: CUP_hgun_Glock17_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_Glock17_Flashlight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class CUP_hgun_glock17_blk_snds: CUP_hgun_Glock17_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class CUP_hgun_Glock17_tan: CUP_hgun_Glock17
	{
		displayName="$STR_CUP_dn_glock17_tan";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_glock17\data\glock17_tan_co.paa"
		};
	};
	class CUP_hgun_glock17_tan_flashlight_snds: CUP_hgun_Glock17_tan
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_Glock17_Flashlight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class CUP_hgun_glock17_tan_snds: CUP_hgun_Glock17_tan
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class CUP_hgun_glock17_flashlight: CUP_hgun_Glock17
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_Glock17_Flashlight";
			};
		};
	};
	class CUP_hgun_glock17_flashlight_snds: CUP_hgun_Glock17
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_Glock17_Flashlight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class CUP_hgun_glock17_snds: CUP_hgun_Glock17
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
};
