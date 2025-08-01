class CfgPatches
{
	class CUP_Weapons_Remington
	{
		units[]={};
		weapons[]=
		{
			"CUP_optic_Remington",
			"CUP_optic_Remington_pip",
			"CUP_srifle_Remington700",
			"CUP_srifle_Remington700_scoped"
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
	CUP_optic_Remington="CUP_optic_Remington_pip";
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class CUP_optic_Remington: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_r700_scope";
		picture="\CUP\Weapons\CUP_Weapons_Remington\data\ui\gear_acco_r700_ca.paa";
		model="CUP\Weapons\CUP_Weapons_Remington\CUP_Remington700_scope.p3d";
		descriptionShort="$STR_CUP_dss_r700_scope";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_Remington\data\r700_reticle_ca.paa";
			reticleTextureSize=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4\data\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4\data\scope_bodyNight_ca.paa";
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
			};
		};
		ACE_ScopeAdjust_Vertical[]={-4,30};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		ace_scopeHeightAboveRail=2.0999999;
	};
	class CUP_optic_Remington_pip: CUP_optic_Remington
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class CUP_srifle_Remington700: Rifle_Long_Base_F
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
			cartridgeEjectPosition[]={-0.013,0.02,0.090000004};
			cartridgeEjectVelocity[]={0,1.2,0.5};
			cartridgeEjectDelay=0.54299998;
		};
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Remington\CUP_Remington700.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Remington\data\ui\gear_r700_X_ca.paa";
		cursor="srifle";
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		dexterity=1.5700001;
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		initSpeed=-0.90499997;
		displayName="$STR_CUP_dn_r700";
		descriptionShort="$STR_CUP_dss_r700";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"CUP\Weapons\CUP_Weapons_Remington\data\anim\R700.rtm"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_M24";
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=660;
		ace_railHeightAboveBore=2.3;
		maxZeroing=600;
		distanceZoomMin=200;
		distanceZoomMax=200;
		discreteDistance[]={200};
		discreteDistanceInitIndex=0;
		reloadAction="CUP_GestureReloadBolt1";
		magazines[]=
		{
			"CUP_6Rnd_762x51_R700"
		};
		magazineWell[]=
		{
			"CBA_762x51_1rnd",
			"CBA_762x51_2rnds",
			"CBA_762x51_3rnds",
			"CBA_762x51_4rnds",
			"CBA_762x51_5rnds"
		};
		magazineReloadSwitchPhase=0.35100001;
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_Remington\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_Remington\data\sfx\Dry",
			1,
			1,
			35
		};
		recoil="recoil_dmr_06";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Remington\Data\r700_co.paa"
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
			dispersion=0.00069000002;
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
			mass=89.839996;
			class PointerSlot
			{
			};
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"CUP_optic_Remington",
					"CUP_optic_Remington_pip"
				};
			};
			class MuzzleSlot
			{
			};
			allowedSlots[]={901};
		};
	};
	class CUP_srifle_Remington700_scoped: CUP_srifle_Remington700
	{
		author="$STR_CUP_AUTHOR_STRING";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_Remington";
			};
		};
	};
};
