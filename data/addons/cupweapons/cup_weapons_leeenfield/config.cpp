class CfgPatches
{
	class CUP_Weapons_LeeEnfield
	{
		units[]={};
		weapons[]=
		{
			"CUP_optic_no23mk2",
			"CUP_optic_no23mk2_pip",
			"CUP_srifle_LeeEnfield",
			"CUP_srifle_LeeEnfield_rail",
			"CUP_srifle_LeeEnfield_T"
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
	};
};
class Mode_SemiAuto;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class CBA_PIPItems
{
	CUP_optic_no23mk2="CUP_optic_no23mk2_pip";
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class CUP_optic_no23mk2: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_leeenfield_scope";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Groza_Scope\data\ui\gear_acco_groza_scope_ca.paa";
		model="CUP\Weapons\CUP_Weapons_LeeEnfield\CUP_LeeEnfield_no32mk2.p3d";
		descriptionShort="$STR_CUP_dss_leeenfield_scope";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_LeeEnfield\data\no32_reticle_ca.paa";
			reticleTextureSize=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_LeeEnfield\data\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_LeeEnfield\data\scope_bodyNight_ca.paa";
			bodyTextureSize=1.53;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7.9200001;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class Optics
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.0999999;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_no23mk2_pip: CUP_optic_no23mk2
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class CUP_srifle_LeeEnfield: Rifle_Long_Base_F
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
		htMin=1;
		htMax=420;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="$STR_CUP_dn_leeenfield";
		model="\CUP\Weapons\CUP_Weapons_LeeEnfield\CUP_LeeEnfield_no4mk1.p3d";
		picture="\CUP\Weapons\CUP_Weapons_LeeEnfield\data\ui\leeEnfield_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_LeeEnfield\Data\Anim\LeeEnfield.rtm"
		};
		dexterity=1.61;
		aimTransitionSpeed=0.89999998;
		magazines[]=
		{
			"CUP_10x_303_M"
		};
		magazineWell[]=
		{
			"CBA_303B_LeeEn"
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		discreteDistance[]={300,600};
		discreteDistanceInitIndex=0;
		opticsDisablePeripherialVision=0;
		opticsPPEffects[]={};
		distanceZoomMin=300;
		distanceZoomMax=300;
		maxZeroing=1600;
		recoil="recoil_dmr_06";
		class Library
		{
			libTextDesc="$STR_CUP_lib_leeenfield";
		};
		descriptionShort="$STR_CUP_dss_leeenfield";
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
		class Single: Mode_SemiAuto
		{
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
			dispersion=0.00066999998;
			reloadTime=2;
			backgroundReload=1;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
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
			"CUP\Weapons\CUP_Weapons_LeeEnfield\data\sfx\Reload",
			0.80000001,
			1,
			20
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_LeeEnfield\data\sfx\Dry",
			1,
			1,
			35
		};
		reloadAction="CUP_GestureReloadBolt1";
		magazineReloadSwitchPhase=0.35100001;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_leeenfield\data\lee_enfield_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=88.199997;
			class PointerSlot
			{
			};
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"CUP_optic_no23mk2",
					"CUP_optic_no23mk2_pip"
				};
				iconPosition[]={0.51999998,0.34};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class MuzzleSlot
			{
			};
			allowedSlots[]={901};
		};
	};
	class CUP_srifle_LeeEnfield_rail: CUP_srifle_LeeEnfield
	{
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_leeenfield_rail";
		model="\CUP\Weapons\CUP_Weapons_LeeEnfield\CUP_LeeEnfield_no4mk1_rail.p3d";
		author="$STR_CUP_AUTHOR_STRING";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92.599998;
			class PointerSlot
			{
			};
			class MuzzleSlot
			{
			};
			class CowsSlot: CUP_PicatinnyTopMount
			{
				iconPosition[]={0.51999998,0.34};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class CUP_PicatinnyUnderMountEndfield: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.28,0.46000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
		};
	};
	class CUP_srifle_LeeEnfield_T: CUP_srifle_LeeEnfield
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_no23mk2";
			};
		};
	};
};
