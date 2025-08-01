class CfgPatches
{
	class CUP_Weapons_SW_Model327
	{
		units[]={};
		weapons[]=
		{
			"CUP_hgun_SWM327MP",
			"CUP_hgun_SWM327MP_reddot",
			"CUP_hgun_SWM327MP_reddot_flash"
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
class asdg_PistolUnderRail;
class asdg_PistolOpticRail1913;
class Mode_SemiAuto;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class CUP_hgun_SWM327MP: Pistol_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		inertia=0.30000001;
		dexterity=1.7;
		aimTransitionSpeed=1.5;
		distanceZoomMin=50;
		distanceZoomMax=50;
		initSpeed=-0.92000002;
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_SW_Model327\CUP_SW_Model327.p3d";
		modelOptics="-";
		picture="\CUP\Weapons\CUP_Weapons_SW_Model327\data\ui\gear_SWM327MP_x_ca.paa";
		jsrs_soundeffect="JSRS2_Distance_Effects_rook40";
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=101.6;
		reloadAction="GestureReloadPistolHeavy02";
		magazineReloadSwitchPhase=0.41;
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_SW_Model327\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_SW_Model327\data\sfx\Dry",
			1,
			1,
			35
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_SW_Model327\data\Revolver_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Weapons\CUP_Weapons_SW_Model327\data\sw.rvmat"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
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
				soundSetShot[]=
				{
					"CUP_Revolver_StandardSound_SoundSet",
					"Zubr_Tail_SoundSet",
					"Zubr_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_SW_Model327\data\sfx\Revolver_s1",
					1,
					1,
					800
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_SW_Model327\data\sfx\Revolver_s2",
					1,
					1,
					800
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_SW_Model327\data\sfx\Revolver_s3",
					1,
					1,
					800
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_SW_Model327\data\sfx\Revolver_s4",
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
			reloadTime=0.25;
			dispersion=0.00145;
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
		};
		magazines[]=
		{
			"CUP_8Rnd_357SW_M"
		};
		displayName="Smith & Wesson M&P R8 Model 327";
		recoil="recoil_pistol_zubr";
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="";
		autoFire=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=18;
			class MuzzleSlot
			{
			};
			class CowsSlot: asdg_PistolOpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.61176473,0.27058825};
				iconScale=0.1;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
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
	class CUP_hgun_SWM327MP_reddot: CUP_hgun_SWM327MP
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptics
			{
				slot="CowsSlot";
				item="CUP_optic_SERedDot";
			};
		};
	};
	class CUP_hgun_SWM327MP_reddot_flash: CUP_hgun_SWM327MP
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_SF_XC1";
			};
			class LinkedItemsOptics
			{
				slot="CowsSlot";
				item="CUP_optic_SERedDot";
			};
		};
	};
};
