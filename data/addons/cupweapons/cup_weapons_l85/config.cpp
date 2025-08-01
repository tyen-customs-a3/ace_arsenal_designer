class CfgPatches
{
	class CUP_Weapons_L85
	{
		units[]={};
		weapons[]=
		{
			"CUP_muzzle_snds_L85",
			"CUP_acc_sffh",
			"CUP_acc_bfa",
			"CUP_l85a2_base",
			"CUP_l85a2",
			"CUP_l85a2_ris",
			"CUP_l85a2_ris_ng",
			"CUP_l85a2_ugl",
			"CUP_arifle_L85A2",
			"CUP_arifle_L85A2_G",
			"CUP_arifle_L85A2_NG",
			"CUP_arifle_L85A2_GL",
			"CUP_arifle_L86A2",
			"CUP_arifle_L85A2_Holo_laser",
			"CUP_arifle_L85A2_HoloGrey_laser",
			"CUP_arifle_L85A2_GL_Holo_Laser",
			"CUP_arifle_L85A2_SUSAT_Laser",
			"CUP_arifle_L85A2_GL_SUSAT_Laser",
			"CUP_arifle_L85A2_CWS_Laser",
			"CUP_arifle_L85A2_ACOG_Laser",
			"CUP_arifle_L85A2_GL_ACOG_Laser",
			"CUP_arifle_L86A2_ACOG",
			"CUP_arifle_L85A2_Elcan_Laser",
			"CUP_arifle_L85A2_GL_Elcan_Laser"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_West_Attachments",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds"
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
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_muzzle_snds_L85: ItemCore
	{
		author="Community Upgrade Project";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		inertia=0.1;
		displayName="$STR_CUP_dn_snds_l85";
		picture="\CUP\Weapons\CUP_Weapons_G36\data\ui\gear_acca_g36_silencer_black_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_L85\CUP_L85_silencer_black.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_acc_sffh: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		inertia=0.2;
		displayName="Surefire FlashHider";
		picture="\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Surefire\data\ui\gear_sffh_x_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Surefire\sf_fh";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="1f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.5f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_acc_bfa: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		inertia=0.2;
		displayName="BFA";
		picture="\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Bfa\data\ui\gear_bfa_x_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_West_Attachments\BAF_Bfa\bfa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.1;
			};
			class AmmoCoef
			{
				hit=0;
				typicalSpeed=0;
				airFriction=0;
				visibleFire=0;
				audibleFire=0;
				visibleFireTime=0;
				audibleFireTime=0;
				cost=0;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0f";
				artilleryDispersionCoef="0f";
				fireLightCoef="0f";
				recoilCoef="0f";
				recoilProneCoef="0f";
				minRangeCoef="0f";
				minRangeProbabCoef="0f";
				midRangeCoef="0f";
				midRangeProbabCoef="0f";
				maxRangeCoef="0f";
				maxRangeProbabCoef="0f";
			};
		};
	};
	class CUP_l85a2_base: Rifle_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Stanag_Mk16",
			"CUP_30Rnd_556x45_Stanag_Mk16_black",
			"CUP_30Rnd_556x45_Stanag_Mk16_woodland",
			"CUP_20Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green"
		};
		magazineWell[]=
		{
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_XMX_Library0";
		};
		scope=0;
		reloadAction="CUP_GestureReloadSA80";
		recoil="recoil_trg20";
		magazineReloadSwitchPhase=0.13;
		model="\CUP\Weapons\CUP_Weapons_L85\CUP_L85A2.p3d";
		initspeed=-1.0217391;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		ACE_barrelLength=518;
		ACE_barrelTwist=180;
		ACE_twistDirection=1;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=84.230003;
			class CUP_PicatinnyTopMountL85: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.60000002,0.38999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnySideMountL85: CUP_PicatinnySideMount
			{
				iconPosition[]={0.43000001,0.49000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"CUP_muzzle_snds_L85",
					"CUP_acc_sffh",
					"CUP_acc_bfa"
				};
				iconPosition[]={0.23,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
		};
		inertia=0.40000001;
		dexterity=1.6;
		aimTransitionSpeed=1;
		class ItemInfo
		{
			priority=1;
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_A3_CfgWeapons_XM_base_F0";
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.17782794,
			1,
			5
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
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
					"A3\sounds_f\weapons\closure\closure_rifle_6",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_7",
					0.70794576,
					1,
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
					"CUP_m16_Closure_SoundSet",
					"CUP_m16_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire1",
					1,
					2,
					1200
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire2",
					1,
					2,
					1200
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire3",
					1,
					2,
					1200
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire4",
					1,
					2,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5,
					"begin3",
					0.5,
					"begin4",
					0.5
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m16_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
				begin1[]=
				{
					"A3\sounds_f\weapons\silenced\silent-18",
					0.79432821,
					1,
					100
				};
				begin2[]=
				{
					"A3\sounds_f\weapons\silenced\silent-19",
					0.79432821,
					1,
					100
				};
				begin3[]=
				{
					"A3\sounds_f\weapons\silenced\silent-11",
					0.79432821,
					1,
					100
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
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
					"A3\sounds_f\weapons\closure\closure_rifle_6",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_7",
					0.70794576,
					1,
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
					"CUP_m16_Closure_SoundSet",
					"CUP_m16_Shot_SoundSet",
					"CUP_rifle1_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire1",
					1,
					2,
					1200
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire2",
					1,
					2,
					1200
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire3",
					1,
					2,
					1200
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_L85\data\sounds\Fire4",
					1,
					2,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5,
					"begin3",
					0.5,
					"begin4",
					0.5
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_m16_Closure_SoundSet",
					"CUP_m16_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
				begin1[]=
				{
					"A3\sounds_f\weapons\silenced\silent-18",
					0.79432821,
					1,
					100
				};
				begin2[]=
				{
					"A3\sounds_f\weapons\silenced\silent-19",
					0.79432821,
					1,
					100
				};
				begin3[]=
				{
					"A3\sounds_f\weapons\silenced\silent-11",
					0.79432821,
					1,
					100
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			aiBurstTerminable=1;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\CUP\Weapons\CUP_Weapons_L85\data\sounds\l85_Reload",
			1,
			1,
			10
		};
	};
	class CUP_l85a2: CUP_l85a2_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		displayName="L85A2 Ris";
		model="\CUP\Weapons\CUP_Weapons_L85\CUP_L85A2.p3d";
		picture="\CUP\Weapons\CUP_Weapons_L85\data\ui\gear_l85a2_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_L85\data\anim\L85.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_L85\data\main_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\ris_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\front_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_PicatinnySideMountL85: CUP_PicatinnySideMount
			{
				class compatibleItems
				{
				};
			};
		};
	};
	class CUP_l85a2_ris: CUP_l85a2_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		displayName="L85A2 Ris";
		model="\CUP\Weapons\CUP_Weapons_L85\CUP_L85A2_Ris.p3d";
		picture="\CUP\Weapons\CUP_Weapons_L85\data\ui\gear_l85a2_ris_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_L85\data\anim\L85_Grip.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_L85\data\main_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\ris_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\front_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\dd_ris_co.paa"
		};
		recoil="CUP_L85_HG_recoil";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			"db-3",
			1,
			20
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85.230003;
		};
	};
	class CUP_l85a2_ris_ng: CUP_l85a2_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		displayName="L85A2 Ris (No Grip)";
		model="\CUP\Weapons\CUP_Weapons_L85\CUP_L85A2_Ris_ng.p3d";
		picture="\CUP\Weapons\CUP_Weapons_L85\data\ui\gear_l85a2_ris_ng_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_L85\data\anim\L85.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_L85\data\main_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\ris_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\front_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\dd_ris_co.paa"
		};
	};
	class CUP_l85a2_ugl: CUP_l85a2_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		displayName="L85A2 UGL";
		model="\CUP\Weapons\CUP_Weapons_L85\CUP_L85A2_ugl.p3d";
		picture="\CUP\Weapons\CUP_Weapons_L85\data\ui\gear_l85a2UGL_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		muzzles[]=
		{
			"this",
			"L85_UGL"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_L85\data\anim\L85_UGL.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_L85\data\main_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\ris_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\front_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\ugl_co.paa"
		};
		inertia=0.5;
		dexterity=1.5;
		aimTransitionSpeed=0.80000001;
		recoil="CUP_L85_HG_recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=117.3;
			class CUP_PicatinnyTopMountL85: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.62,0.34999999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnySideMountL85: CUP_PicatinnySideMount
			{
				iconPosition[]={0.37,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"CUP_acc_sffh",
					"CUP_acc_bfa",
					"CUP_acc_LLM"
				};
				iconPosition[]={0.12,0.41999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
			};
		};
		class L85_UGL: UGL_F
		{
			displayName="$STR_CUP_dn_L123A2";
			magazines[]=
			{
				"CUP_1Rnd_HE_M203",
				"CUP_1Rnd_HEDP_M203",
				"CUP_1Rnd_StarCluster_White_M203",
				"CUP_1Rnd_StarCluster_Red_M203",
				"CUP_1Rnd_StarCluster_Green_M203",
				"CUP_1Rnd_StarFlare_White_M203",
				"CUP_1Rnd_StarFlare_Red_M203",
				"CUP_1Rnd_StarFlare_Green_M203",
				"CUP_FlareWhite_M203",
				"CUP_FlareGreen_M203",
				"CUP_FlareRed_M203",
				"CUP_FlareYellow_M203",
				"CUP_1Rnd_Smoke_M203",
				"CUP_1Rnd_SmokeRed_M203",
				"CUP_1Rnd_SmokeGreen_M203",
				"CUP_1Rnd_SmokeYellow_M203",
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell"
			};
			magazineWell[]=
			{
				"CBA_40mm_M203"
			};
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4",
				"OP_eye5",
				"OP_eye6",
				"OP_eye7"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadKatibaUGL";
			magazineReloadSwitchPhase=0.244;
		};
	};
	class CUP_arifle_L85A2: CUP_l85a2
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_l85a2";
		class Library
		{
			libTextDesc="$STR_CUP_lib_l85a2";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
	};
	class CUP_arifle_L85A2_G: CUP_l85a2_ris
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_l85a2_g";
		class Library
		{
			libTextDesc="$STR_CUP_lib_l85a2";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
	};
	class CUP_arifle_L85A2_NG: CUP_l85a2_ris_ng
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_l85a2_ng";
		class Library
		{
			libTextDesc="$STR_CUP_lib_l85a2";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
	};
	class CUP_arifle_L85A2_GL: CUP_l85a2_ugl
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_l85a2_ugl";
		class Library
		{
			libTextDesc="$STR_CUP_lib_l85a2";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=117.3;
		};
	};
	class CUP_arifle_L86A2: CUP_l85a2
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_L85\CUP_L86A2.p3d";
		picture="\CUP\Weapons\CUP_Weapons_L85\data\ui\gear_l86a2_x_ca.paa";
		displayName="$STR_CUP_dn_l86a2";
		cursor="mg";
		UiPicture="\A3\weapons_f\data\UI\icon_MG_CA.paa";
		recoil="CUP_L86_recoil";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		initSpeed=-1.0326087;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_L85\data\main_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\ris_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\front_co.paa",
			"\CUP\Weapons\CUP_Weapons_L85\data\sa80_co.paa"
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_l86a2";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=119.51;
			class CUP_PicatinnySideMountL85: CUP_PicatinnySideMount
			{
				class compatibleItems
				{
				};
			};
		};
		aimTransitionSpeed=0.80000001;
		ACE_barrelLength=646;
		class fullauto_medium: fullauto_medium
		{
			burst=4;
		};
		class single_medium_optics1: single_medium_optics1
		{
			burst=3;
			minRange=5;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=525;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=525;
		};
	};
	class CUP_arifle_L85A2_Holo_laser: CUP_arifle_L85A2_G
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="cup_optic_eotech553_black";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_HoloGrey_laser: CUP_arifle_L85A2_G
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="cup_optic_eotech533grey";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_GL_Holo_Laser: CUP_arifle_L85A2_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="CUP_optic_Eotech533";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_SUSAT_Laser: CUP_arifle_L85A2_G
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="CUP_optic_SUSAT";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_GL_SUSAT_Laser: CUP_arifle_L85A2_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="CUP_optic_SUSAT";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_CWS_Laser: CUP_arifle_L85A2_G
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="CUP_optic_CWS";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_ACOG_Laser: CUP_arifle_L85A2_G
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="CUP_optic_ACOG";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_GL_ACOG_Laser: CUP_arifle_L85A2_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="CUP_optic_ACOG";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L86A2_ACOG: CUP_arifle_L86A2
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="CUP_optic_ACOG";
			};
		};
	};
	class CUP_arifle_L85A2_Elcan_Laser: CUP_arifle_L85A2_G
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="cup_optic_elcan_reflex";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
	class CUP_arifle_L85A2_GL_Elcan_Laser: CUP_arifle_L85A2_GL
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountL85";
				item="cup_optic_elcan_reflex";
			};
			class LinkedItemsAcc
			{
				slot="CUP_PicatinnySideMountL85";
				item="cup_acc_llm";
			};
		};
	};
};
