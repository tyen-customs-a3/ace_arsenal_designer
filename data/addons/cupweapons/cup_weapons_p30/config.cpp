class CfgPatches
{
	class CUP_Weapons_P30
	{
		units[]={};
		weapons[]=
		{
			"CUP_hgun_P30L_blk",
			"CUP_hgun_P30L_od",
			"CUP_hgun_P30L_tan",
			"CUP_hgun_P30L_Match_blk",
			"CUP_hgun_P30L_Match_od",
			"CUP_hgun_P30L_Match_tan"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
		magazines[]=
		{
			"CUP_17Rnd_9x19_P30L"
		};
	};
};
class asdg_MuzzleSlot_9MM;
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
class Mode_SemiAuto;
class CfgRecoils
{
	class recoil_default;
	class CUP_recoil_pistol_P30L: recoil_default
	{
		muzzleOuter[]={0.2,1,0.2,0.30000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.029999999;
	};
	class CUP_recoil_pistol_P30L_Match: CUP_recoil_pistol_P30L
	{
		muzzleOuter[]={0.2,0.80000001,0.2,0.30000001};
		kickBack[]={0.02,0.039999999};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CUP_17Rnd_9x19_P30L: CA_Magazine
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="9mm 17Rnd P30 Mag";
		initSpeed=370;
		ammo="CUP_B_9x19_Ball";
		picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_glock17_CA.paa";
		descriptionShort="Caliber: 9x19mm&lt;br/&gt;Rounds: 17&lt;br/&gt;Used in: P30";
		count=17;
		mass=6;
		model="\CUP\Weapons\CUP_Weapons_M17\CUP_M17_17Rnd_mag.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_M17\data\m17_coyote_co.paa"
		};
	};
};
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class CUP_hgun_P30_Base: Pistol_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=0;
		model="\CUP\Weapons\CUP_Weapons_P30\CUP_P30L.p3d";
		picture="\CUP\Weapons\CUP_Weapons_P30\data\ui\gear_P30L_blk_x_ca.paa";
		displayName="P30L";
		descriptionShort="P30L";
		inertia=0.1;
		aimTransitionSpeed=1.6;
		dexterity=1.9;
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
			"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",
			0.39810699,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",
			1,
			1,
			10
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_M9";
		ACE_barrelTwist=248.92;
		ACE_barrelLength=124.46;
		initSpeed=-1;
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
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"P07_silencerShot_SoundSet",
					"P07_silencerTail_SoundSet",
					"P07_silencerInteriorTail_SoundSet"
				};
			};
			dispersion=0.0057999999;
			reloadtime=0.13;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=30;
			midRangeProbab=0.60000002;
			maxRange=60;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=30;
		};
		recoil="CUP_recoil_pistol_P30L";
		reloadAction="GestureReloadPistol";
		magazines[]=
		{
			"CUP_17Rnd_9x19_P30L"
		};
		magazineReloadSwitchPhase=0.24600001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20.799999;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
			holsterScale=0.92000002;
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_P30\data\P30L_co.paa"
		};
	};
	class CUP_hgun_P30L_blk: CUP_hgun_P30_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_P30\data\ui\gear_P30L_blk_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_P30\data\P30L_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20.799999;
			class CowsSlot
			{
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
	class CUP_hgun_P30L_od: CUP_hgun_P30L_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="P30L (Olive)";
		picture="\CUP\Weapons\CUP_Weapons_P30\data\ui\gear_P30L_od_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_P30\data\P30L_od_co.paa"
		};
	};
	class CUP_hgun_P30L_tan: CUP_hgun_P30L_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="P30L (Tan)";
		picture="\CUP\Weapons\CUP_Weapons_P30\data\ui\gear_P30L_tan_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_P30\data\P30L_tan_co.paa"
		};
	};
	class CUP_hgun_P30L_Match_blk: CUP_hgun_P30_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_P30\CUP_P30L_Match.p3d";
		picture="\CUP\Weapons\CUP_Weapons_P30\data\ui\gear_P30L_Match_blk_x_ca.paa";
		recoil="CUP_recoil_pistol_P30L_Match";
		displayName="P30L Match";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_P30\data\P30L_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20.799999;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
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
	class CUP_hgun_P30L_Match_od: CUP_hgun_P30L_Match_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="P30L Match (Olive)";
		picture="\CUP\Weapons\CUP_Weapons_P30\data\ui\gear_P30L_Match_od_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_P30\data\P30L_od_co.paa"
		};
	};
	class CUP_hgun_P30L_Match_tan: CUP_hgun_P30L_Match_blk
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="P30L Match (Tan)";
		picture="\CUP\Weapons\CUP_Weapons_P30\data\ui\gear_P30L_Match_tan_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_P30\data\P30L_tan_co.paa"
		};
	};
};
