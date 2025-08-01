
#define _ARMA_

class CfgPatches
{
	class sfp_attachment
	{
		units[] = {};
		weapons[] = {"sfp_optic_aimpoint","sfp_optic_aimpoint_t1","sfp_optic_3x_aimpoint","sfp_optic_hensoldt_4x","sfp_optic_kikarsikte09_4x","sfp_optic_grg","sfp_optic_susat_4x","sfp_optic_kikarsikte90b_10x","sfp_dbal2"};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class sfp_attachments
	{
		units[] = {};
		weapons[] = {"sfp_optic_aimpoint","sfp_optic_3x_aimpoint","sfp_optic_hensoldt_4x","sfp_dbal2","sfp_tlr2","sfp_optic_kikarsikte90b_10x","sfp_optic_kikarsikte09_4x"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Items","cba_jr"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class sfp_optic_aimpoint: ItemCore
	{
		dlc = "sfp";
		scope = 2;
		displayName = "Aimpoint CS";
		author = "Swedish Forces Pack (Echo)";
		picture = "\sfp_attachments\optics\ui\aimpoint_co.paa";
		model = "\sfp_attachments\optics\sfp_aimpoint.p3d";
		descriptionShort = "The CS is a non-magnifying red dot sight manufactured by the Swedish company Aimpoint AB.<br />Dot size: 1.2 mil/4 MOA<br />Used with: Picatinny rail versions of Ak 4 and 5, Ksp 58 and 90";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "Aimpoint CS";
			modelOptics = "A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class aimpoint
				{
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
				class backup
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};
	class sfp_optic_aimpoint_t1: ItemCore
	{
		dlc = "sfp";
		scope = 2;
		displayName = "Aimpoint T1";
		author = "Swedish Forces Pack (Scenery explosion)";
		picture = "\sfp_attachments\optics\ui\aimpoint_co.paa";
		model = "\sfp_attachments\optics\sfp_aimpoint_t1.p3d";
		descriptionShort = "The T1 is a non-magnifying red dot sight manufactured by the Swedish company Aimpoint AB.";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			RMBhint = "Aimpoint T1";
			modelOptics = "A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class aimpoint
				{
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};
	class sfp_optic_3x_aimpoint: ItemCore
	{
		dlc = "sfp";
		displayName = "Aimpoint CS + 3x";
		author = "Swedish Forces Pack (Echo)";
		scope = 2;
		picture = "\sfp_attachments\optics\ui\aimpoint3x_co.paa";
		model = "\sfp_attachments\optics\sfp_aimpoint3x.p3d";
		descriptionShort = "Quick release/attach magnifier from Aimpoint";
		MRT_SwitchItemNextClass = "sfp_optic_aimpoint_twist";
		MRT_SwitchItemPrevClass = "sfp_optic_aimpoint_twist";
		MRT_switchItemHintText = "Attached Magnifier";
		weaponInfoType = "RscOptics_sos";
		inertia = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 15;
			opticType = 2;
			optics = 1;
			modelOptics = "A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope3x
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = "0.25/3";
					opticsZoomMax = "0.25/3";
					opticsZoomInit = "0.25/3";
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class backup
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};
	class sfp_optic_aimpoint_twist: sfp_optic_aimpoint
	{
		scope = 1;
		author = "Swedish Forces Pack";
		displayName = "Aimpoint CS + 3X";
		picture = "\sfp_attachments\optics\ui\aimpoint3x_co.paa";
		model = "\sfp_attachments\optics\sfp_aimpoint3x_twist.p3d";
		MRT_SwitchItemNextClass = "sfp_optic_3x_aimpoint";
		MRT_SwitchItemPrevClass = "sfp_optic_3x_aimpoint";
		MRT_switchItemHintText = "Detached Magnifier";
	};
	class sfp_optic_hensoldt_4x: sfp_optic_aimpoint
	{
		dlc = "sfp";
		scope = 2;
		displayname = "Hensoldt 4x";
		author = "Swedish Forces Pack";
		model = "\sfp_attachments\optics\sfp_hensoldt4x.p3d";
		picture = "\sfp_attachments\optics\ui\hensoldt_ca.paa";
		descriptionShort = "4x optic attachment by Hensoldt (Zeiss) with claw mount for Ak 4<br />Middle vertical line: 1.5 mils wide<br />Thick horizontal lines: 1 mil tall<br />Tall vertical lines: 4 mils tall, 10 mils apart<br />Short vertical lines: 2.5 mils tall";
		inertia = 0.2;
		ACE_scopeHeightAboveRail = 4.44179;
		ACE_scopeAdjust_horizontal[] = {-3,3};
		ACE_scopeAdjust_horizontalIncrement = 0.25;
		class ItemInfo: ItemInfo
		{
			mass = 14;
			optics = 1;
			opticType = 2;
			modelOptics = "A3\Weapons_F\empty";
			class OpticsModes
			{
				class hensoldt4x
				{
					modelOptics[] = {"\sfp_attachments\optics\sfp_hensoldt4x_optic"};
					discreteDistance[] = {100,200,300,400,500,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMax = 600;
					distanceZoomMin = 100;
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/4";
					opticsZoomInit = "0.25/4";
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Normal"};
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				};
				class leftEye: hensoldt4x
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsPPEffects[] = {"",""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.5;
					opticsZoomMax = 0.5;
					opticsZoomInit = 0.5;
					memoryPointCamera = "eye2";
					cameraDir = "eye2dir";
					visionMode[] = {};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class sfp_optic_kikarsikte09_4x: sfp_optic_hensoldt_4x
	{
		displayname = "Kikarsikte 09";
		author = "Swedish Forces Pack (Megadeth)";
		model = "\sfp_attachments\optics\sfp_kikarsikte_09.p3d";
		picture = "\sfp_attachments\optics\ui\kikarsikte09_ca.paa";
		descriptionShort = "4x optic attachment by Hensoldt (Zeiss) Picatinny rail version for Ak 4<br />Middle vertical line: 1.5 mils wide<br />Thick horizontal lines: 1 mil tall<br />Tall vertical lines: 4 mils tall, 10 mils apart<br />Short vertical lines: 2.5 mils tall";
	};
	class sfp_optic_fcs13: sfp_optic_aimpoint
	{
		displayname = "FCS 13";
		scope = 1;
		author = "Swedish Forces Pack";
		model = "\sfp_attachments\optics\sfp_hensoldt4x.p3d";
		picture = "\sfp_attachments\optics\ui\hensoldt_ca.paa";
		descriptionShort = "FCS attachment for GRG M4";
		inertia = 0.2;
		weaponInfoType = "RscOpticsRangeFinderMRAWS";
		class ItemInfo: ItemInfo
		{
			mass = 14;
			class OpticsModes
			{
				class FCS13
				{
					optics = 1;
					modelOptics = "\a3\Weapons_F_Tank\acc\reticle_MRAWSNew.p3d";
					discreteDistance[] = {100,200,300,400,500,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = 0.0875;
					opticsZoomMax = 0.0875;
					opticsZoomInit = 0.0875;
					memoryPointCamera = "optic";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Normal"};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
			};
		};
	};
	class sfp_optic_grg: sfp_optic_aimpoint
	{
		displayname = "GRG Optic";
		author = "Swedish Forces Pack";
		model = "\sfp_attachments\optics\sfp_grg_sight.p3d";
		picture = "\sfp_attachments\optics\ui\hensoldt_ca.paa";
		descriptionShort = "Optic attachment for GRG M4";
		inertia = 0.2;
		class ItemInfo: ItemInfo
		{
			mass = 9;
			class OpticsModes
			{
				class susat
				{
					optics = 1;
					modelOptics = "\a3\Weapons_F_Tank\acc\reticle_MRAWSOld.p3d";
					distanceZoomMax = 600;
					distanceZoomMin = 100;
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = 0.1083;
					opticsZoomMax = 0.1083;
					opticsZoomInit = 0.1083;
					memoryPointCamera = "optic";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Normal"};
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class sfp_optic_gcgm: sfp_optic_aimpoint
	{
		displayname = "GCGM Sight";
		scope = 1;
		author = "Swedish Forces Pack";
		model = "\A3\weapons_f\acc\acco_tws_F";
		picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_tws_ca.paa";
		descriptionShort = "Missile Sight Attachment for GRG m/18<br />Magnification: 4x-10x";
		inertia = 0.2;
		weaponInfoType = "RscOptics_tws";
		class ItemInfo: ItemInfo
		{
			mass = 14;
			allowedSlots[] = {801,701,901};
			modelOptics = "A3\Weapons_F\empty";
			muzzleEnd = "konec hlavne";
			muzzlePos = "usti hlavne";
			weaponInfoType = "RscWeaponRangeZeroingModeFOV";
			class OpticsModes
			{
				class thermal
				{
					optics = 1;
					modelOptics = "\A3\Weapons_f\acc\reticle_tws";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteInitIndex = 2;
					discretefov[] = {0.0625,0.025};
					distanceZoomMax = 1200;
					distanceZoomMin = 100;
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Ti","Normal"};
					thermalMode[] = {0,1};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
			};
		};
	};
	class sfp_optic_susat_4x: sfp_optic_aimpoint
	{
		dlc = "sfp";
		scope = 2;
		displayname = "SUSAT 4x";
		author = "Swedish Forces Pack";
		model = "\sfp_attachments\optics\sfp_susat.p3d";
		picture = "\sfp_attachments\optics\ui\hensoldt_ca.paa";
		descriptionShort = "Sight Unit Small Arms, Trilux - 4x telescopic sight<br />Used with: Ak 5B";
		inertia = 0.2;
		class ItemInfo: ItemInfo
		{
			mass = 9;
			optics = 1;
			opticType = 2;
			modelOptics = "A3\Weapons_F\empty";
			class OpticsModes
			{
				class susat
				{
					modelOptics[] = {"\sfp_attachments\optics\susat_optic"};
					discreteDistance[] = {100,200,250,300,350,400,450,500,550,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMax = 600;
					distanceZoomMin = 100;
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/4";
					opticsZoomInit = "0.25/4";
					memoryPointCamera = "optic";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Normal"};
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				};
				class backup
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye3";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
	};
	class sfp_optic_kikarsikte90b_10x: sfp_optic_hensoldt_4x
	{
		dlc = "sfp";
		scope = 2;
		displayname = "Kikarsikte 90B (10x)";
		model = "\sfp_attachments\optics\sfp_hensoldt10x.p3d";
		author = "Swedish Forces Pack (Echo)";
		picture = "\sfp_attachments\optics\ui\kikarsikte90_ca.paa";
		descriptionShort = "10x optic attachment by Hensoldt (Zeiss)<br />Mildot reticle with green tritium illumination<br />Dots: 0.2 mils wide, 1 mil apart (center to center)<br />Used with: Ag 90 and Psg 90";
		ACE_scopeZeroRange = 100;
		ACE_scopeHeightAboveRail = 3.46776;
		ACE_scopeAdjust_vertical[] = {-4,15};
		ACE_scopeAdjust_horizontal[] = {-3,3};
		ACE_scopeAdjust_verticalIncrement = 0.2;
		ACE_scopeAdjust_horizontalIncrement = 0.2;
		class ItemInfo: ItemInfo
		{
			mass = 16;
			opticType = 2;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "A3\Weapons_F\empty";
			class OpticsModes
			{
				class hensoldt10x
				{
					opticsID = 1;
					discretefov[] = {"0.25/9.6","0.25/9.6","0.25/9.6"};
					discreteInitIndex = 0;
					modelOptics[] = {"\sfp_attachments\optics\sfp_hensoldt10x_optic","\sfp_attachments\optics\sfp_hensoldt10x_optic_illum1","\sfp_attachments\optics\sfp_hensoldt10x_optic_illum2"};
					cameraDir = "";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 1000;
					distanceZoomMin = 100;
					useModelOptics = 1;
					opticsZoomMin = "0.25/9.6";
					opticsZoomMax = "0.25/9.6";
					opticsZoomInit = "0.25/9.6";
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {"Normal"};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
				class leftEye: hensoldt10x
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsPPEffects[] = {"",""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.5;
					opticsZoomMax = 0.5;
					opticsZoomInit = 0.5;
					memoryPointCamera = "eye2";
					cameraDir = "eye2dir";
					visionMode[] = {};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					discretefov[] = {0.5};
					discreteInitIndex = 0;
				};
			};
		};
	};
	class sfp_dbal2: ItemCore
	{
		dlc = "sfp";
		scope = 2;
		displayName = "Dbal 2";
		author = "Swedish Forces Pack";
		descriptionUse = "$STR_A3_cfgWeapons_use_pointer_IR0";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\A3\weapons_f\acc\accv_pointer_F";
		descriptionShort = "$STR_A3_cfgWeapons_acc_pointer_IR1";
		inertia = 0.1;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
			class Pointer
			{
				RMBhint = "Laser Pointer";
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 100;
			};
			class FlashLight{};
		};
	};
	class acc_flashlight;
	class sfp_tlr2: acc_flashlight
	{
		dlc = "sfp";
		displayname = "TLR-2";
		author = "Swedish Forces Pack (Echo)";
		model = "\sfp_attachments\side\sfp_tlr2.p3d";
		picture = "\sfp_attachments\side\ui\tlr2_ca.paa";
		mass = 3;
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		sfp_dbal2 = 1;
	};
};
class asdg_PistolUnderRail: asdg_SlotInfo
{
	class compatibleItems
	{
		sfp_tlr2 = 1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems;
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		sfp_optic_aimpoint = 1;
		sfp_optic_aimpoint_t1 = 1;
		sfp_optic_3x_aimpoint = 1;
		sfp_optic_aimpoint_twist = 1;
		sfp_optic_susat_4x = 1;
		sfp_optic_kikarsikte09_4x = 1;
		sfp_optic_kikarsikte90b_10x = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		sfp_optic_aimpoint_t1 = 1;
	};
};
class asdg_OpticSideMount_GRG: asdg_OpticRail
{
	class compatibleItems
	{
		sfp_optic_fcs13 = 1;
		sfp_optic_grg = 1;
		sfp_optic_gcgm = 1;
	};
};
