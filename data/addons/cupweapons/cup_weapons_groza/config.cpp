class CfgPatches
{
	class CUP_Weapons_GROZA
	{
		units[]={};
		weapons[]=
		{
			"CUP_arifle_OTS14_GROZA_Base",
			"CUP_arifle_OTS14_GROZA_GL",
			"CUP_arifle_OTS14_GROZA_Grip",
			"CUP_arifle_OTS14_GROZA",
			"CUP_arifle_OTS14_GROZA_762_base",
			"CUP_arifle_OTS14_GROZA_762_Grip",
			"CUP_arifle_OTS14_GROZA_762",
			"CUP_arifle_OTS14_GROZA_762_GL",
			"CUP_arifle_OTS14_GROZA_scope_snds",
			"CUP_arifle_OTS14_GROZA_762_scope_snds"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_East_Attachments",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_AK"
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
class CUP_GrozaTopMount;
class CUP_EastGrozaMuzzleSlot;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_arifle_OTS14_GROZA_Base: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		model="\CUP\Weapons\CUP_Weapons_Groza\CUP_ots_14_groza_grip.p3d";
		magazines[]=
		{
			"CUP_20Rnd_9x39_SP5_GROZA_M"
		};
		dexterity=1.7;
		inertia=0.40000001;
		aimTransitionSpeed=1.2;
		displayname="$STR_CUP_dn_ots14_groza";
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			20
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_AK\data\sfx\Dry",
			1,
			1,
			35
		};
		reloadAction="GestureReloadTRG";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Reload_TRG20",
			1,
			1,
			10
		};
		magazineReloadSwitchPhase=0.47999999;
		recoil="CUP_Groza_recoil";
		ACE_barrelTwist=230;
		initSpeed=-1;
		discreteDistance[]={50,100,150,200};
		discreteDistanceInitIndex=1;
		maxZeroing=500;
		memoryPointCamera="eye";
		reloadTime=0.085714288;
		modes[]=
		{
			"Single",
			"Full",
			"FullAuto_medium"
		};
		class Single: Mode_SemiAuto
		{
			weaponSoundEffect="DefaultRifle";
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			dispersion=0.0018;
			soundContinuous=0;
			reloadTime=0.085714288;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class Full: Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_bizon_Closure_SoundSet",
					"CUP_bizon_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			dispersion=0.0018;
			soundContinuous=0;
			reloadTime=0.085714288;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=25;
			maxRangeProbab=0.050000001;
		};
		class FullAuto_medium: Full
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		class Library
		{
			libTextDesc="$STR_CUP_dss_ots14_groza";
		};
		descriptionShort="$STR_CUP_dss_ots14_groza";
		selectionFireAnim="zasleh";
		class WeaponSlotsInfo
		{
			mass=57.299999;
			class CUP_GrozaTopMountGroza: CUP_GrozaTopMount
			{
			};
			allowedslots[]={901};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class GP25Muzzle: UGL_F
		{
			descriptionShort="$STR_CUP_dn_gp25";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			reloadAction="GestureReloadMXUGL";
			discreteDistance[]={100,150,200,250};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250"
			};
			discreteDistanceInitIndex=1;
			displayName="$STR_CUP_dn_gp25";
			magazineReloadSwitchPhase=0.36000001;
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
			magazines[]=
			{
				"CUP_1Rnd_HE_GP25_M",
				"CUP_IlumFlareWhite_GP25_M",
				"CUP_IlumFlareRed_GP25_M",
				"CUP_IlumFlareGreen_GP25_M",
				"CUP_FlareWhite_GP25_M",
				"CUP_FlareGreen_GP25_M",
				"CUP_FlareRed_GP25_M",
				"CUP_FlareYellow_GP25_M",
				"CUP_1Rnd_SMOKE_GP25_M",
				"CUP_1Rnd_SMOKERED_GP25_M",
				"CUP_1Rnd_SMOKEGREEN_GP25_M",
				"CUP_1Rnd_SMOKEYELLOW_GP25_M"
			};
			magazineWell[]=
			{
				"CBA_40mm_GP",
				"VOG_40mm"
			};
		};
	};
	class CUP_arifle_OTS14_GROZA_GL: CUP_arifle_OTS14_GROZA_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Groza\CUP_ots_14_groza_gl.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Groza\data\ui\gear_groza_gl_X_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Groza\anim\groza_gl.rtm"
		};
		ACE_barrelLength=340;
		muzzles[]=
		{
			"this",
			"GP25Muzzle"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"CamoGL"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_groza\data\ots-14_groza_co.paa",
			"cup\weapons\cup_weapons_groza\data\grenade_launcher_co.paa"
		};
		displayname="$STR_CUP_dn_ots14_groza_gl";
		descriptionShort="$STR_CUP_dss_ots14_groza_gl";
		recoil="CUP_Groza_longer_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=87.419998;
		};
	};
	class CUP_arifle_OTS14_GROZA_Grip: CUP_arifle_OTS14_GROZA_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_Groza\data\ui\gear_groza_grip_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Groza\anim\groza_grip.rtm"
		};
		ACE_barrelLength=290;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_groza\data\ots-14_groza_co.paa",
			"cup\weapons\cup_weapons_groza\data\grip_co.paa"
		};
		displayname="$STR_CUP_dn_ots14_groza_grip";
		recoil="CUP_Groza_longer_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.23;
		};
	};
	class CUP_arifle_OTS14_GROZA: CUP_arifle_OTS14_GROZA_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Groza\CUP_ots_14_groza.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Groza\data\ui\gear_groza_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Groza\anim\groza.rtm"
		};
		ACE_barrelLength=230;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_groza\data\ots-14_groza_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_EastMuzzleSlotGroza: CUP_EastGrozaMuzzleSlot
			{
			};
			mass=54.599998;
		};
		displayname="$STR_CUP_dn_ots14_groza";
		recoil="CUP_Groza_recoil";
	};
	class CUP_arifle_OTS14_GROZA_762_base: CUP_arifle_OTS14_GROZA_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		magazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_bakelite_M",
			"CUP_30Rnd_762x39_AK103_bakelite_M",
			"CUP_30Rnd_762x39_AK47_TK_M",
			"CUP_20Rnd_762x39_AMD63_M",
			"CUP_10Rnd_762x39_SaigaMk03_M",
			"CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"
		};
		initSpeed=-0.95999998;
		magazineWell[]=
		{
			"CBA_762x39_AK"
		};
		reloadTime=0.079999998;
		descriptionShort="$STR_CUP_dss_ak47";
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_akm_Closure_SoundSet",
					"CUP_akm_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_akm_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_Rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.0018;
		};
		class Full: Full
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_akm_Closure_SoundSet",
					"CUP_akm_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_akm_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_Rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.0018;
		};
		recoil="CUP_Groza_762_recoil";
	};
	class CUP_arifle_OTS14_GROZA_762_Grip: CUP_arifle_OTS14_GROZA_762_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_Groza\data\ui\gear_groza762_grip_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Groza\anim\groza_grip.rtm"
		};
		ACE_barrelLength=300;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_groza\data\ots-14-1a_groza_co.paa",
			"cup\weapons\cup_weapons_groza\data\grip_co.paa"
		};
		displayname="$STR_CUP_dn_ots14_groza_762_grip";
		recoil="CUP_Groza_longer_762_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.23;
		};
	};
	class CUP_arifle_OTS14_GROZA_762: CUP_arifle_OTS14_GROZA_762_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Groza\CUP_ots_14_groza.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Groza\data\ui\gear_groza762_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Groza\anim\groza.rtm"
		};
		ACE_barrelLength=240;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_groza\data\ots-14-1a_groza_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_EastMuzzleSlotGroza: CUP_EastGrozaMuzzleSlot
			{
			};
			mass=54.599998;
		};
		displayname="$STR_CUP_dn_ots14_groza_762";
		recoil="CUP_Groza_762_recoil";
	};
	class CUP_arifle_OTS14_GROZA_762_GL: CUP_arifle_OTS14_GROZA_762_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="\CUP\Weapons\CUP_Weapons_Groza\CUP_ots_14_groza_gl.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Groza\data\ui\gear_groza762_gl_X_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_Groza\anim\groza_gl.rtm"
		};
		ACE_barrelLength=350;
		hiddenSelections[]=
		{
			"Camo1",
			"CamoGL"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_groza\data\ots-14-1a_groza_co.paa",
			"cup\weapons\cup_weapons_groza\data\grenade_launcher_co.paa"
		};
		muzzles[]=
		{
			"this",
			"GP25Muzzle"
		};
		displayname="$STR_CUP_dn_ots14_groza_762_gl";
		descriptionShort="$STR_CUP_dss_ak47gl";
		recoil="CUP_Groza_longer_762_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.23;
		};
	};
	class CUP_arifle_OTS14_GROZA_scope_snds: CUP_arifle_OTS14_GROZA
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_GrozaTopMountGroza";
				item="CUP_optic_GrozaScope";
			};
			class LinkedItemsMuzzle
			{
				slot="CUP_EastMuzzleSlotGroza";
				item="CUP_muzzle_snds_groza";
			};
		};
	};
	class CUP_arifle_OTS14_GROZA_762_scope_snds: CUP_arifle_OTS14_GROZA_762
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_GrozaTopMountGroza";
				item="CUP_optic_GrozaScope";
			};
			class LinkedItemsMuzzle
			{
				slot="CUP_EastMuzzleSlotGroza";
				item="CUP_muzzle_snds_groza";
			};
		};
	};
};
