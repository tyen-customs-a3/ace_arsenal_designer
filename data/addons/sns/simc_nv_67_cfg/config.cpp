class CfgPatches
{
	class simc_nv_67_core
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"simc_mc_67_assets"
		};
	};
};
class CfgFactionClasses
{
	class Simc_VC_67
	{
		displayName="Viet Cong (67)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=0;
	};
	class Simc_NVA_67
	{
		displayName="PAVN (69)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=0;
	};
};
class CfgEditorSubcategories
{
	class SIMC_men_local
	{
		displayName="Men (Locals)";
	};
	class SIMC_men_nord
	{
		displayName="Men (North)";
	};
};
class EventHandlers;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierEB: CAManBase
	{
	};
	class O_Soldier_base_F: SoldierEB
	{
	};
	class simc_nva_67_base: O_Soldier_base_F
	{
		scope=1;
		author="smicdaro";
		side=0;
		identityTypes[]=
		{
			"Head_Asian"
		};
		faction="Simc_NVA_67";
		selectionClan="clan";
		genericNames="EnglishMen";
		model="\simc_nv_67\sns_nva_1.p3d";
		modelSides[]={6};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_nva_co.paa",
			"\simc_nv_67\data\sns_nva_co.paa"
		};
		portrait="\simc_uaf_67_preview\potret\sns_wip_co.paa";
		editorPreview="\simc_uaf_67_preview\preview\sns_wip.jpg";
		displayName="Human";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
		uniformClass="U_Simc_nva_1";
		headgearProbability=100;
		headgearList[]=
		{
			"",
			1,
			"H_Simc_nasi",
			0.1
		};
		linkedItems[]=
		{
			"V_Simc_56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="";
		cost=100000;
		accuracy=1.5;
		camouflage=1.8;
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough="true";
				radius=0;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=5;
				material=-1;
				name="arms";
				passThrough="true";
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=5;
				material=-1;
				name="hands";
				passThrough="true";
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=5;
				material=-1;
				name="legs";
				passThrough="true";
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough="true";
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_nv_67\data\sns_nva.rvmat",
				"simc_nv_67\data\sns_nva_verwundet.rvmat",
				"simc_nv_67\data\sns_nva_verwundet.rvmat",
				"simc_nv_67\data\sns_nva.rvmat",
				"simc_nv_67\data\sns_nva_verwundet.rvmat",
				"simc_nv_67\data\sns_nva_verwundet.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class simc_nva_1: simc_nva_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_NVA_67";
		genericNames="EnglishMen";
		model="\simc_nv_67\sns_nva_1.p3d";
		linkedItems[]=
		{
			"V_Simc_mk56_sks",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56_sks",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_nva_co.paa",
			"\simc_nv_67\data\sns_nva_co.paa"
		};
	};
	class simc_nva_1_trop: simc_nva_1
	{
		author="smicdaro";
		uniformClass="U_Simc_nva_1_trop";
		model="\simc_nv_67\sns_nva_1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_nva_co.paa",
			"\simc_nv_67\data\sns_nva_co.paa"
		};
	};
	class simc_nva_2: simc_nva_1
	{
		author="smicdaro";
		uniformClass="U_Simc_nva_2";
		model="\simc_nv_67\sns_nva_2.p3d";
		linkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_nva_co.paa",
			"\simc_nv_67\data\sns_nva_co.paa"
		};
	};
	class simc_nva_2_trop: simc_nva_2
	{
		author="smicdaro";
		uniformClass="U_Simc_nva_2_trop";
		model="\simc_nv_67\sns_nva_2_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_nva_co.paa",
			"\simc_nv_67\data\sns_nva_co.paa"
		};
	};
	class simc_vc_black_1: simc_nva_1
	{
		author="smicdaro";
		model="\simc_nv_67\sns_vc_pajama_1.p3d";
		uniformClass="U_Simc_vc_1";
		linkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_pajama_co.paa",
			"\simc_nv_67\data\sns_vc_pajama_co.paa"
		};
	};
	class simc_vc_black_1_trop: simc_vc_black_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_1_trop";
		model="\simc_nv_67\sns_vc_pajama_1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_grau_co.paa",
			"\simc_nv_67\data\sns_vc_pajama_co.paa"
		};
	};
	class simc_vc_black_2: simc_vc_black_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_2";
		model="\simc_nv_67\sns_vc_pajama_2.p3d";
		linkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_pajama_co.paa",
			"\simc_nv_67\data\sns_vc_pajama_co.paa"
		};
	};
	class simc_vc_black_2_trop: simc_vc_black_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_2_trop";
		model="\simc_nv_67\sns_vc_pajama_2_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_grau_co.paa",
			"\simc_nv_67\data\sns_vc_pajama_co.paa"
		};
	};
	class simc_vc_blau_1: simc_vc_black_1
	{
		author="smicdaro";
		model="\simc_nv_67\sns_vc_pajama_1.p3d";
		uniformClass="U_Simc_vc_1";
		linkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_blau_co.paa",
			"\simc_nv_67\data\sns_vc_bruin_co.paa"
		};
	};
	class simc_vc_blau_1_trop: simc_vc_blau_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_1_trop";
		model="\simc_nv_67\sns_vc_pajama_1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_blau_co.paa",
			"\simc_nv_67\data\sns_vc_blau_co.paa"
		};
	};
	class simc_vc_blau_2: simc_vc_blau_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_2";
		model="\simc_nv_67\sns_vc_pajama_2.p3d";
		linkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_blau_co.paa",
			"\simc_nv_67\data\sns_vc_blau_co.paa"
		};
	};
	class simc_vc_blau_2_trop: simc_vc_blau_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_2_trop";
		model="\simc_nv_67\sns_vc_pajama_2_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_blau_co.paa",
			"\simc_nv_67\data\sns_vc_bruin_co.paa"
		};
	};
	class simc_vc_grun_1: simc_vc_black_1
	{
		author="smicdaro";
		model="\simc_nv_67\sns_vc_pajama_1.p3d";
		uniformClass="U_Simc_vc_1";
		linkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_grun_co.paa",
			"\simc_nv_67\data\sns_vc_grun_co.paa"
		};
	};
	class simc_vc_grun_1_trop: simc_vc_grun_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_1_trop";
		model="\simc_nv_67\sns_vc_pajama_1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_grun_co.paa",
			"\simc_nv_67\data\sns_vc_pajama_co.paa"
		};
	};
	class simc_vc_grun_2: simc_vc_grun_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_2";
		model="\simc_nv_67\sns_vc_pajama_2.p3d";
		linkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"V_Simc_mk56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_grun_co.paa",
			"\simc_nv_67\data\sns_vc_grun_co.paa"
		};
	};
	class simc_vc_grun_2_trop: simc_vc_grun_1
	{
		author="smicdaro";
		uniformClass="U_Simc_vc_2_trop";
		model="\simc_nv_67\sns_vc_pajama_2_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_grun_co.paa",
			"\simc_nv_67\data\sns_vc_pajama_co.paa"
		};
	};
	class B_AssaultPack_rgr;
	class Item_Base_F;
	class Item_U_Simc_nva_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="NVA Uniform";
		author="Justin N.";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_Simc_nva_1
			{
				name="U_Simc_nva_1";
				count=1;
			};
		};
	};
	class Item_U_Simc_vc_black_1: Item_U_Simc_nva_1
	{
		displayName="Pajamas";
		class TransportItems
		{
			class U_Simc_vc_black_1
			{
				name="U_Simc_vc_black_1";
				count=1;
			};
		};
	};
	class Item_U_Simc_vc_blau_1: Item_U_Simc_vc_black_1
	{
		displayName="Pajamas";
		class TransportItems
		{
			class U_Simc_vc_blau_1_trop
			{
				name="U_Simc_vc_blau_1_trop";
				count=1;
			};
		};
	};
	class Item_U_Simc_vc_grun_1: Item_U_Simc_vc_black_1
	{
		displayName="Pajamas";
		class TransportItems
		{
			class U_Simc_vc_grun_2
			{
				name="U_Simc_vc_grun_2";
				count=1;
			};
		};
	};
	class Vest_Base_F;
	class Ground_V_Simc_mk56: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		reversed=1;
		displayName="Mk56 AK Rig";
		author="Yaza + 089";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Simc_mk56
			{
				name="V_Simc_mk56";
				count=1;
			};
		};
	};
	class Ground_V_Simc_mk56_sks: Ground_V_Simc_mk56
	{
		displayName="Mk56 SKS Rig";
		author="Yaza + 089";
		class TransportItems
		{
			class V_Simc_mk56_sks
			{
				name="V_Simc_mk56_sks";
				count=1;
			};
		};
	};
	class Headgear_Base_F;
	class Ground_H_Simc_nasi: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		reversed=1;
		displayName="Asian Conical Hat";
		author="Justin N.";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class H_Simc_nasi
			{
				name="H_Simc_nasi";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class ItemCore;
	class U_BasicBody: Uniform_Base
	{
		class ItemInfo;
	};
	class U_Simc_nv_67_BasicBody: U_BasicBody
	{
		author="Simcardigs";
		scope=0;
		model="\simc_nv_67\sns_vc_suitpack.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\sns_wip_ca.paa";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply30";
			mass=20;
		};
	};
	class U_Simc_nva_1: U_Simc_nv_67_BasicBody
	{
		author="Justin N.";
		scope=2;
		displayName="[NVA] uniform";
		model="\simc_nv_67\sns_vc_suitpack.p3d";
		picture="\simc_uaf_67_preview\icons\sns_nva_ca.paa";
		descriptionShort="Uniform, PAVN, green";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_nva_1";
		};
	};
	class U_Simc_nva_1_trop: U_Simc_nva_1
	{
		author="Justin N.";
		scope=2;
		displayName="[NVA] uniform";
		descriptionShort="Uniform, PAVN, green";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_nva_1_trop";
		};
	};
	class U_Simc_nva_2: U_Simc_nva_1
	{
		author="Justin N.";
		scope=2;
		displayName="[NVA] uniform";
		descriptionShort="Uniform, PAVN, green";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_nva_2";
		};
	};
	class U_Simc_nva_2_trop: U_Simc_nva_2
	{
		author="Justin N.";
		scope=2;
		displayName="[NVA] uniform";
		descriptionShort="Uniform, PAVN, green";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_nva_2_trop";
		};
	};
	class U_Simc_vc_black_1: U_Simc_nv_67_BasicBody
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		model="\simc_nv_67\sns_vc_suitpack.p3d";
		picture="\simc_uaf_67_preview\icons\sns_vc_ca.paa";
		descriptionShort="Pajamas,  local, dyed";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_pajama_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_black_1";
		};
	};
	class U_Simc_vc_black_1_trop: U_Simc_vc_black_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_black_1_trop";
		};
	};
	class U_Simc_vc_black_2: U_Simc_vc_black_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_black_2";
		};
	};
	class U_Simc_vc_black_2_trop: U_Simc_vc_black_2
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_black_2_trop";
		};
	};
	class U_Simc_vc_blau_1: U_Simc_vc_black_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_blau_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_blau_1";
		};
	};
	class U_Simc_vc_blau_1_trop: U_Simc_vc_blau_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_blau_1_trop";
		};
	};
	class U_Simc_vc_blau_2: U_Simc_vc_blau_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_blau_2";
		};
	};
	class U_Simc_vc_blau_2_trop: U_Simc_vc_blau_2
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_blau_2_trop";
		};
	};
	class U_Simc_vc_grun_1: U_Simc_vc_black_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\sns_vc_grun_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_grun_1";
		};
	};
	class U_Simc_vc_grun_1_trop: U_Simc_vc_grun_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_grun_1_trop";
		};
	};
	class U_Simc_vc_grun_2: U_Simc_vc_grun_1
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_grun_2";
		};
	};
	class U_Simc_vc_grun_2_trop: U_Simc_vc_grun_2
	{
		author="Justin N.";
		scope=2;
		displayName="Pajamas";
		descriptionShort="Pajamas,  local, dyed";
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_vc_grun_2_trop";
		};
	};
	class H_Booniehat_khk: ItemCore
	{
		class ItemInfo;
	};
	class H_Simc_nv_67: H_Booniehat_khk
	{
		author="Justin N.";
		scope=1;
		displayName="Asiatic headwear";
		picture="\simc_uaf_67_preview\icons\sns_vc_hat_ca.paa";
		model="\simc_nv_67\sns_vc_hat.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_nv_67\sns_vc_hat.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0;
				};
			};
		};
	};
	class H_Simc_nasi: H_Simc_nv_67
	{
		author="Justin N.";
		scope=2;
		displayName="Asian Conical Hat";
		picture="\simc_uaf_67_preview\icons\sns_vc_hat_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\sns_vc_hat.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_jaza_pith: H_Simc_nv_67
	{
		author="Jaza/FemDzamie";
		scope=2;
		displayName="[NVA] Pith Helmet";
		model="\simc_nv_67\jaza_pithhelm_up.p3d";
		picture="\simc_uaf_67_preview\icons\jaza_pith_lol_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\jaza_nva_pithhelm_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_jaza_pith_khk: H_Simc_jaza_pith
	{
		author="Jaza/FemDzamie";
		displayName="[NVA] Pith Helmet (Kharkee)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\jaza_nva_pithhelm_khk_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_jaza_pith_up: H_Simc_jaza_pith
	{
		author="Jaza/FemDzamie";
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_up.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_jaza_pith_up_khk: H_Simc_jaza_pith_up
	{
		author="Jaza/FemDzamie";
		displayName="[NVA] Pith Helmet (Kharkee)";
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\jaza_nva_pithhelm_khk_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_up.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_jaza_pith_cover: H_Simc_jaza_pith
	{
		author="Jaza/FemDzamie";
		displayName="[NVA] Pith Helmet (Cover)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\jaza_nva_pith_cover_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_cover.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class H_Simc_jaza_pith_cover_up: H_Simc_jaza_pith_cover
	{
		author="Jaza/FemDzamie";
		scope=1;
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_cover_up.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class H_Simc_jaza_pith_netz: H_Simc_jaza_pith
	{
		author="Jaza/FemDzamie";
		displayName="[NVA] Pith Helmet (Net)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\jaza_nva_pith_net_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_net.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class H_Simc_jaza_pith_netz_up: H_Simc_jaza_pith_netz
	{
		author="Jaza/FemDzamie";
		scope=1;
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_cover_up.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class H_Simc_jaza_pith_sutra: H_Simc_jaza_pith
	{
		author="Jaza/FemDzamie";
		displayName="[NVA] Pith Helmet (Parachute Cover)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\jaza_nva_pith_net_para_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\simc_nv_67\data\jaza_nva_pith_net_para.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_net.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class H_Simc_jaza_pith_sutra_up: H_Simc_jaza_pith_sutra
	{
		author="Jaza/FemDzamie";
		scope=1;
		class ItemInfo: ItemInfo
		{
			mass=15;
			uniformModel="\simc_nv_67\jaza_pithhelm_cover_up.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class VestItem;
	class Vest_Camo_Base;
	class V_Simc_chicom_basic: Vest_Camo_Base
	{
		author="Justin ft. 089";
		scope=1;
		displayName="Chicom rig";
		model="\simc_nv_67\rig_mk56_drop.p3d";
		picture="\simc_uaf_67_preview\icons\sns_wip_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\simc_nv_67\rig_mk56.p3d";
			hiddenSelections[]=
			{
				""
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_mk56: V_Simc_chicom_basic
	{
		author="Justin + 089";
		scope=2;
		displayName="Mk56 AK rig";
		model="\simc_nv_67\rig_mk56_drop.p3d";
		picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_nv_67\rig_mk56.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_mk56_alt: V_Simc_mk56
	{
		author="Justin + 089";
		scope=2;
		displayName="Mk56 AK rig";
		hiddenSelections[]=
		{
			"botol"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_nv_67\rig_mk56_hoch.p3d";
			hiddenSelections[]=
			{
				"botol"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_mk56_sks: V_Simc_mk56
	{
		author="Justin + 089";
		scope=2;
		displayName="Mk56 SKS rig";
		model="\simc_nv_67\rig_mk56_sks_drop.p3d";
		picture="\simc_uaf_67_preview\icons\sns_mk56_sks_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_nv_67\rig_mk56_sks.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_mk56_sks_alt: V_Simc_mk56_sks
	{
		author="Justin + 089";
		scope=2;
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_nv_67\rig_mk56_sks_hoch.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=15;
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1666176303";
};
