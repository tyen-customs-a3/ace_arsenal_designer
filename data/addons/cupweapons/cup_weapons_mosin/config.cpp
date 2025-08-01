class CfgPatches
{
	class CUP_Weapons_Mosin
	{
		units[]={};
		weapons[]=
		{
			"CUP_optic_PEM",
			"CUP_optic_PEM_pip",
			"CUP_optic_PEM_3D",
			"CUP_srifle_Mosin_Nagant",
			"CUP_srifle_Mosin_Nagant_PEM"
		};
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
class CowsSlot;
class PointerSlot;
class ItemCore;
class InventoryFlashLightItem_Base_F;
class CBA_PIPItems
{
	CUP_optic_PEM="CUP_optic_PEM_pip";
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_optic_PEM: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_mosin_scope";
		picture="\CUP\Weapons\CUP_Weapons_Mosin\data\ui\gear_acco_PE_ca.paa";
		model="CUP\Weapons\CUP_Weapons_Mosin\CUP_acco_PE.p3d";
		descriptionShort="$STR_CUP_dss_mosin_scope";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\Groza_Scope\data\po4x34_ca.paa";
			reticleTextureSize=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_bodyNight_ca.paa";
			bodyTextureSize=1.53;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
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
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
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
				class Iron: Optics
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=2;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.4000001;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PEM_pip: CUP_optic_PEM
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class CUP_optic_PEM_3D: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		displayName="$STR_CUP_dn_mosin_scope";
		picture="\CUP\Weapons\CUP_Weapons_Mosin\data\ui\gear_acco_PE_ca.paa";
		model="CUP\Weapons\CUP_Weapons_Mosin\CUP_acco_PE.p3d";
		descriptionShort="$STR_CUP_dss_mosin_scope";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Optics
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomInit=0.125;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="opticView2";
					visionMode[]=
					{
						"Normal"
					};
					discreteDistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex=2;
				};
				class Iron: Optics
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=2;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.4000001;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_srifle_Mosin_Nagant: Rifle_Long_Base_F
	{
		class EventHandlers
		{
			fired="_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction="CUP_GestureRechamberMosin";
			sound="CUP_BoltActionSound";
			soundLocation="RightHandMiddle1";
			delay=0.02;
			onEmpty=0;
			hasOptic=1;
			cartridgeType="FxCartridge_762";
			cartridgeEjectPosition[]={0.064999998,0.0099999998,0.097999997};
			cartridgeEjectVelocity[]={0,1.2,0.5};
			cartridgeEjectDelay=0.54299998;
		};
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Mosin\CUP_Mosin.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Mosin\data\ui\gear_mosin_X_ca.paa";
		dexterity=1.5700001;
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		initSpeed=-1;
		displayName="$STR_CUP_dn_mosin";
		descriptionShort="$STR_CUP_dss_mosin";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_Mosin\Data\anim\Mosin.rtm"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_SVD";
		ACE_barrelTwist=254;
		ACE_barrelLength=730;
		maxZeroing=2000;
		distanceZoomMin=300;
		distanceZoomMax=300;
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
		discreteDistanceInitIndex=2;
		reloadAction="CUP_GestureReloadMosin";
		magazines[]=
		{
			"CUP_5Rnd_762x54_Mosin_M"
		};
		magazineWell[]=
		{
			"CBA_762x54R_Mosin"
		};
		magazineReloadSwitchPhase=0.35100001;
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Mosin\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Mosin\data\sfx\Dry",
			1,
			1,
			35
		};
		recoil="CUP_SVD_recoil";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Mosin\Data\mosin_wood_co.paa",
			"\CUP\Weapons\CUP_Weapons_Mosin\Data\mosin_metal_co.paa"
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		class Single: Mode_SemiAuto
		{
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
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_svd_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=2;
			dispersion=0.00063999998;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=83.800003;
			class PointerSlot
			{
			};
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"CUP_optic_PEM",
					"CUP_optic_PEM_pip",
					"CUP_optic_PEM_3D"
				};
			};
			class MuzzleSlot
			{
			};
		};
	};
	class CUP_srifle_Mosin_Nagant_PEM: CUP_srifle_Mosin_Nagant
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_PEM";
			};
		};
	};
};
