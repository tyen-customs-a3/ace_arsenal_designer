class CfgPatches
{
	class CUP_Weapons_Shield
	{
		units[]={};
		weapons[]=
		{
			"CUP_hgun_BallisticShield_Armed",
			"CUP_smg_BallisticShield_Sa61",
			"CUP_smg_BallisticShield_PP19",
			"CUP_smg_BallisticShield_MP7",
			"CUP_hgun_BallisticShield_PMM",
			"CUP_decal_BallisticShield_Decal_Base",
			"CUP_decal_BallisticShield_Bullseye",
			"CUP_decal_BallisticShield_Police",
			"CUP_decal_BallisticShield_Police_Yellow",
			"CUP_decal_BallisticShield_Police_worn",
			"CUP_decal_BallisticShield_Police_Yellow_wron",
			"CUP_decal_BallisticShield_Polizei",
			"CUP_decal_BallisticShield_Polizei_Yellow",
			"CUP_decal_BallisticShield_Polizei_worn",
			"CUP_decal_BallisticShield_Polizei_Yellow_wron",
			"CUP_decal_BallisticShield_Militia",
			"CUP_decal_BallisticShield_Militia_Yellow",
			"CUP_decal_BallisticShield_Militia_worn",
			"CUP_decal_BallisticShield_Militia_Yellow_wron",
			"CUP_hgun_BallisticShield_Armed_M9"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_M9",
			"CUP_Weapons_SA61",
			"CUP_Weapons_Bizon",
			"CUP_Weapons_MP7",
			"CUP_Weapons_Makarov"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class CUP_EastMuzzleSlot9mm;
class asdg_MuzzleSlot_9MM;
class asdg_PistolUnderRail;
class CUP_PicatinnySideMount;
class CUP_MuzzleSlot_SA61;
class UnderBarrelSlot;
class CUP_BallisticShield_Decals_Slot: UnderBarrelSlot
{
	iconPinPoint="center";
	iconPosition[]={1,0};
	iconScale=0.0099999998;
	iconPicture="\A3\weapons_f_mark\data\UI\attachment_under.paa";
	class compatibleItems
	{
		CUP_decal_BallisticShield_Bullseye=1;
		CUP_decal_BallisticShield_Police=1;
		CUP_decal_BallisticShield_Police_Yellow=1;
		CUP_decal_BallisticShield_Police_worn=1;
		CUP_decal_BallisticShield_Police_Yellow_wron=1;
		CUP_decal_BallisticShield_Polizei=1;
		CUP_decal_BallisticShield_Polizei_Yellow=1;
		CUP_decal_BallisticShield_Polizei_worn=1;
		CUP_decal_BallisticShield_Polizei_Yellow_wron=1;
		CUP_decal_BallisticShield_Militia=1;
		CUP_decal_BallisticShield_Militia_Yellow=1;
		CUP_decal_BallisticShield_Militia_worn=1;
		CUP_decal_BallisticShield_Militia_Yellow_wron=1;
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class CUP_decal_BallisticShield_Decal_Base: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="-";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\bullseye_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Bullseye.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="";
			hasBipod=0;
			mass=0;
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
		};
		inertia=0;
	};
	class CUP_decal_BallisticShield_Bullseye: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Bullseye";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\bullseye_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Bullseye.p3d";
	};
	class CUP_decal_BallisticShield_Police: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Police (White)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\police_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Police.p3d";
	};
	class CUP_decal_BallisticShield_Police_Yellow: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Police (Yellow)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\police_yellow_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Police_Y.p3d";
	};
	class CUP_decal_BallisticShield_Police_worn: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Police (White, Worn)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\police_worn_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Police_worn.p3d";
	};
	class CUP_decal_BallisticShield_Police_Yellow_wron: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Police (Yellow, Worn)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\police_yellow_worn_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Police_Y_worn.p3d";
	};
	class CUP_decal_BallisticShield_Polizei: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Polizei (White)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Polizei_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Polizei.p3d";
	};
	class CUP_decal_BallisticShield_Polizei_Yellow: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Polizei (Yellow)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Polizei_yellow_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Polizei_Y.p3d";
	};
	class CUP_decal_BallisticShield_Polizei_worn: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Polizei (White, Worn)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Polizei_worn_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Polizei_worn.p3d";
	};
	class CUP_decal_BallisticShield_Polizei_Yellow_wron: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Polizei (Yellow, Worn)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Polizei_yellow_worn_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Polizei_Y_worn.p3d";
	};
	class CUP_decal_BallisticShield_Militia: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Милиция (White)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Militia_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Militia.p3d";
	};
	class CUP_decal_BallisticShield_Militia_Yellow: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Милиция (Yellow)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Militia_yellow_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Militia_Y.p3d";
	};
	class CUP_decal_BallisticShield_Militia_worn: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Милиция (White, Worn)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Militia_worn_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Militia_worn.p3d";
	};
	class CUP_decal_BallisticShield_Militia_Yellow_wron: CUP_decal_BallisticShield_Decal_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="Милиция (Yellow, Worn)";
		picture="\CUP\Weapons\CUP_Weapons_Shield\decals\Militia_yellow_worn_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\decals\CUP_BallisticShield_Decal_Militia_Y_worn.p3d";
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Short_Base_F;
	class CUP_hgun_M9;
	class CUP_hgun_M9A1: CUP_hgun_M9
	{
		class WeaponSlotsInfo;
	};
	class CUP_smg_SA61;
	class CUP_smg_SA61_RIS: CUP_smg_SA61
	{
		class WeaponSlotsInfo;
		class FullAuto;
	};
	class CUP_smg_vityaz;
	class CUP_smg_vityaz_vfg: CUP_smg_vityaz
	{
		class WeaponSlotsInfo;
		class Single;
		class Burst;
		class FullAuto;
	};
	class CUP_smg_MP7: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo;
		class Single;
		class FullAuto;
	};
	class CUP_hgun_Makarov;
	class CUP_hgun_PMM: CUP_hgun_Makarov
	{
		class WeaponSlotsInfo;
	};
	class CUP_hgun_BallisticShield_Armed: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		modelOptics="-";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Shield\data\anims\shield_armed.rtm"
		};
		model="\CUP\Weapons\CUP_Weapons_Shield\CUP_BallisticShield_Armed.p3d";
		displayName="$STR_CUP_dn_BallisticShield_Armed";
		picture="CUP\Weapons\CUP_Weapons_Shield\data\ui\gear_Shield_X_ca.paa";
		descriptionShort="$STR_CUP_dss_mk16";
		inertia=0.40000001;
		dexterity=1.6799999;
		aimTransitionSpeed=0.5;
		ACE_barrelTwist=248.92;
		ACE_barrelLength=124.46;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20.799999;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"CUP_muzzle_snds_M9"
				};
				iconPosition[]={0.33000001,0.31};
				iconScale=0.30000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
			class PointerSlot
			{
			};
		};
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
			jsrs_soundeffect="JSRS2_Distance_Effects_M9";
			ACE_barrelTwist=248.92;
			ACE_barrelLength=124.46;
			initSpeed=-1;
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
				SoundSetShot[]=
				{
					"CUP_M9_StandardSound_SoundSet",
					"P07_Tail_SoundSet",
					"P07_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s1",
					0.79432797,
					1,
					700
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s2",
					0.79432797,
					1,
					700
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s3",
					0.79432797,
					1,
					700
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_M9\data\sfx\M9_s4",
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
				SoundSetShot[]=
				{
					"P07_silencerShot_SoundSet",
					"P07_silencerTail_SoundSet",
					"P07_silencerInteriorTail_SoundSet"
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
			reloadMagazineSound[]=
			{
				"\CUP\Weapons\CUP_Weapons_M9\data\sfx\Reload",
				1,
				1,
				35
			};
			drySound[]=
			{
				"\CUP\Weapons\CUP_Weapons_M9\data\sfx\Dry",
				1,
				1,
				35
			};
			reloadtime=0.13;
		};
		recoil="recoil_pistol_p07";
		reloadAction="GestureReloadPistol";
		magazines[]=
		{
			"CUP_15Rnd_9x19_M9"
		};
		magazineWell[]=
		{
			"CBA_9x19_M9"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M9\data\m9_beretta_co.paa",
			"CUP\Weapons\CUP_Weapons_Shield\data\Riot_Shield_Diffuse.paa"
		};
	};
	class CUP_hgun_BallisticShield_Armed_M9: CUP_hgun_M9A1
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_BallisticShield_M9";
		picture="CUP\Weapons\CUP_Weapons_Shield\data\ui\gear_Shield_m9_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\CUP_BallisticShield_M9.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Shield\data\anims\shield_armed_low.rtm"
		};
		descriptionShort="$STR_CUP_dss_BallisticShield_M9";
		hiddenSelections[]=
		{
			"Camo1",
			"CamoShield"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_M9\data\m9_beretta_co.paa",
			"CUP\Weapons\CUP_Weapons_Shield\data\Riot_Shield_Diffuse_removed.paa"
		};
		type=1;
		inertia=0.5;
		dexterity=1.25;
		recoil="CUP_Shield_Pistol_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=218.24562;
			allowedSlots[]={};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPinPoint="center";
				iconPosition[]={0.184,0.368};
				iconScale=0.27000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPinPoint="center";
				iconPosition[]={0.398,0.56699997};
				iconScale=0.28999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class UnderBarrelSlot: CUP_BallisticShield_Decals_Slot
			{
			};
		};
	};
	class CUP_smg_BallisticShield_Sa61: CUP_smg_SA61_RIS
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_BallisticShield_SA61";
		picture="CUP\Weapons\CUP_Weapons_Shield\data\ui\gear_Shield_sa61_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\CUP_BallisticShield_SA61.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Shield\data\anims\shield_armed_low.rtm"
		};
		descriptionShort="$STR_CUP_dss_BallisticShield_SA61";
		hiddenSelections[]=
		{
			"Camo1",
			"CamoShield"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_sa61\data\sa61_co.paa",
			"CUP\Weapons\CUP_Weapons_Shield\data\Riot_Shield_Diffuse_removed.paa"
		};
		inertia=0.5;
		dexterity=1.25;
		recoil="CUP_Shield_Pistol_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=228.1554;
			allowedSlots[]={};
			class CowsSlot
			{
			};
			class MuzzleSlot: CUP_MuzzleSlot_SA61
			{
				iconPinPoint="center";
				iconPosition[]={0.164,0.375};
				iconScale=0.25999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPinPoint="center";
				iconPosition[]={0.338,0.50800002};
				iconScale=0.25999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class UnderBarrelSlot: CUP_BallisticShield_Decals_Slot
			{
			};
		};
		class FullAuto: FullAuto
		{
			dispersion="0.018 * 5";
		};
	};
	class CUP_smg_BallisticShield_PP19: CUP_smg_vityaz_vfg
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_BallisticShield_PP19Vityaz";
		picture="CUP\Weapons\CUP_Weapons_Shield\data\ui\gear_Shield_pp19_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\CUP_BallisticShield_PP19Vityaz.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Shield\data\anims\shield_armed_smg_low.rtm"
		};
		descriptionShort="$STR_CUP_dss_BallisticShield_PP19Vityaz";
		hiddenSelections[]=
		{
			"CamoShield"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_Shield\data\Riot_Shield_Diffuse_removed.paa"
		};
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		inertia=2.5;
		dexterity=0.30000001;
		recoil="CUP_Shield_SMG_recoil";
		class Single: Single
		{
			dispersion="0.003 * 5";
		};
		class Burst: Burst
		{
			dispersion="0.003 * 10";
		};
		class FullAuto: FullAuto
		{
			dispersion="0.003 * 10";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=268.60114;
			allowedSlots[]={};
			class CowsSlot
			{
			};
			class UnderBarrelSlot: CUP_BallisticShield_Decals_Slot
			{
			};
			class MuzzleSlot: CUP_EastMuzzleSlot9mm
			{
				iconPinPoint="center";
				iconPosition[]={-0.057,0.29300001};
				iconScale=0.23;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class PointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.145,0.43799999};
				iconScale=0.25999999;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
		};
	};
	class CUP_smg_BallisticShield_MP7: CUP_smg_MP7
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_BallisticShield_MP7";
		picture="CUP\Weapons\CUP_Weapons_Shield\data\ui\gear_Shield_mp7_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\CUP_BallisticShield_MP7.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Shield\data\anims\shield_armed_low.rtm"
		};
		descriptionShort="$STR_CUP_dss_BallisticShield_MP7";
		baseWeapon="CUP_smg_BallisticShield_MP7";
		hiddenSelections[]=
		{
			"Camo1",
			"CamoShield"
		};
		hiddenSelectionsTextures[]=
		{
			"CUP\Weapons\CUP_Weapons_MP7\data\mp7_co.paa",
			"CUP\Weapons\CUP_Weapons_Shield\data\Riot_Shield_Diffuse_removed.paa"
		};
		maxZeroing=100;
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				visionMode[]={};
				opticsPPEffects[]={};
				memoryPointCamera="eye";
				discretedistance[]={100};
				discretedistanceinitindex=1;
			};
		};
		inertia=2.2;
		dexterity=0.40000001;
		recoil="CUP_Shield_SMG_recoil";
		class Single: Single
		{
			dispersion="0.002 * 5";
		};
		class FullAuto: FullAuto
		{
			dispersion="0.002 * 10";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=237.37379;
			allowedSlots[]={};
			class CowsSlot
			{
			};
			class UnderBarrelSlot: CUP_BallisticShield_Decals_Slot
			{
			};
		};
	};
	class CUP_hgun_BallisticShield_PMM: CUP_hgun_PMM
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_BallisticShield_PMM";
		picture="CUP\Weapons\CUP_Weapons_Shield\data\ui\gear_Shield_pmm_X_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Shield\CUP_BallisticShield_PMM.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Shield\data\anims\shield_armed_low.rtm"
		};
		descriptionShort="$STR_CUP_dss_BallisticShield_PMM";
		hiddenSelections[]=
		{
			"Camo1",
			"CamoShield"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_makarov\data\pmm_co.paa",
			"CUP\Weapons\CUP_Weapons_Shield\data\Riot_Shield_Diffuse_removed.paa"
		};
		type=1;
		inertia=0.5;
		dexterity=1.25;
		recoil="CUP_Shield_Pistol_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=213.40596;
			allowedSlots[]={};
			class UnderBarrelSlot: CUP_BallisticShield_Decals_Slot
			{
			};
		};
	};
};
