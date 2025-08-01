class CfgPatches
{
	class simc_uaf_68_core
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"simc_uaf_67_assets"
		};
	};
};
class CfgEditorSubcategories
{
	class SIMC_men_SF
	{
		displayName="Men (Tacticool)";
	};
};
class CfgGlasses
{
	class None;
	class G_simc_US_Zusp_56: None
	{
		author="Brijnvag";
		scope=2;
		displayName="M1956 Suspenders";
		model="\simc_uaf_68\zusp_56.p3d";
		picture="\simc_uaf_67_preview\icons\belt_56_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\gear_56_co"
		};
		identityTypes[]=
		{
			"G_simc_ua67",
			0
		};
	};
	class G_simc_US_Zusp_56_alt: G_simc_US_Zusp_56
	{
		author="Brijnvag";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\gear_56_laat_co"
		};
	};
	class G_illegal_canteen: None
	{
		author="Brijnvag";
		scope=2;
		displayName="2QT Canteen 1968";
		model="\simc_uaf_68\illegal_canteen.p3d";
		picture="\simc_uaf_67_preview\icons\illegal_canteen_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		identityTypes[]=
		{
			"G_simc_ua69",
			0.5
		};
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
	class SoldierWB: CAManBase
	{
	};
	class B_Soldier_base_F: SoldierWB
	{
	};
	class simc_UA_68_base: B_Soldier_base_F
	{
		scope=1;
		author="smicdaro";
		side=1;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_simc_ua69"
		};
		faction="Simc_UA_67";
		selectionClan="clan";
		genericNames="EnglishMen";
		model="\simc_uaf_67\tcu_mk3.p3d";
		modelSides[]={6};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"",
			""
		};
		portrait="\simc_uaf_67_preview\potret\sns_wip_co.paa";
		editorPreview="\simc_uaf_67_preview\preview\sns_wip.jpg";
		displayName="Snowflake";
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
		uniformClass="U_Simc_TCU_mk3";
		headgearProbability=100;
		headgearList[]=
		{
			"H_Simc_Boon_green_1",
			1,
			"H_Simc_Boon_green_2",
			1,
			"H_Simc_Boon_green_3",
			1,
			"H_Simc_Boon_green_4",
			1,
			"H_Simc_Boon_green_5",
			0.2,
			"H_Simc_Boon_green_6",
			0.2,
			"H_Simc_Boon_green_7",
			0.2,
			"H_Simc_Boon_tigre_1",
			1,
			"H_Simc_Boon_tigre_2",
			1,
			"H_Simc_Boon_tigre_3",
			1,
			"H_Simc_Boon_tigre_4",
			1,
			"H_Simc_Boon_tigre_5",
			0.2,
			"H_Simc_Boon_tigre_6",
			0.2,
			"H_Simc_Boon_tigre_7",
			0.2,
			"H_Simc_Boon_erdl_low_1",
			1,
			"H_Simc_Boon_erdl_low_2",
			1,
			"H_Simc_Boon_erdl_low_3",
			1,
			"H_Simc_Boon_erdl_low_4",
			1,
			"H_Simc_Boon_erdl_low_5",
			0.2,
			"H_Simc_Boon_erdl_low_6",
			0.2,
			"H_Simc_Boon_erdl_low_7",
			0.2
		};
		LinkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"V_Simc_SF_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"V_Simc_SF_2",
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
				"simc_uaf_67\data\tcu_mk3.rvmat",
				"simc_uaf_67\data\tcu_mk3_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk3_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk3.rvmat",
				"simc_uaf_67\data\tcu_mk3_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk3_verwundet.rvmat",
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
		class PlateInfos
		{
			name="nom";
			color[]={0,0,0,0.89999998};
			plateFont="PuristaSemiBold";
			plateFormat="GAY####";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
	};
	class simc_tcu_mk3_tuck: simc_UA_68_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_68\tcu_mk3_tuck.p3d";
		linkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"V_Simc_SF_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"V_Simc_SF_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_tuck_nom: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_68\tcu_mk3_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk3_sog.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_nomex: simc_tcu_mk3_sog
	{
		model="\simc_uaf_69\tcu_mk3_sog_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_leg: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk3_sog_leg.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_leg_nomex: simc_tcu_mk3_sog_leg
	{
		model="\simc_uaf_69\tcu_mk3_sog_leg_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_trop: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk3_sog_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_leg: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_leg";
		model="\simc_uaf_68\tcu_mk3_leg.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		linkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"V_Simc_SF_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"V_Simc_SF_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_leg_roll: simc_tcu_mk3_leg
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk3_leg_roll";
		model="\simc_uaf_68\tcu_mk3_leg_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_leg: simc_tcu_mk3_leg
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_leg";
		model="\simc_uaf_68\tcu_mk1_leg.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_leg_roll: simc_tcu_mk3_leg
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_leg_roll";
		model="\simc_uaf_68\tcu_mk1_leg_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_leg_zwart: simc_tcu_mk3_leg
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk3_leg";
		model="\simc_uaf_68\tcu_mk3_leg.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"bots"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_68\data\tcu_mk3_tee_zwart_co.paa",
			"",
			"",
			"",
			"\simc_uaf_68\data\3ds_bot_zwart_co.paa"
		};
	};
	class simc_tcu_mk3_leg_zwart_roll: simc_tcu_mk3_leg_zwart
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk3_leg_roll";
		model="\simc_uaf_68\tcu_mk3_leg_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"bots"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			"",
			"\simc_uaf_68\data\3ds_bot_zwart_co.paa"
		};
	};
	class simc_tcu_mk1_leg_zwart: simc_tcu_mk3_leg_zwart
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_leg";
		model="\simc_uaf_68\tcu_mk1_leg.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"bots"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			"",
			"\simc_uaf_68\data\3ds_bot_zwart_co.paa"
		};
	};
	class simc_tcu_mk1_leg_zwart_roll: simc_tcu_mk3_leg_zwart
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_leg_roll";
		model="\simc_uaf_68\tcu_mk1_leg_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"bots"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			"",
			"\simc_uaf_68\data\3ds_bot_zwart_co.paa"
		};
	};
	class simc_tcu_mk3_tuck_zwart: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_67";
		genericNames="EnglishMen";
		model="\simc_uaf_68\tcu_mk3_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_68\data\tcu_mk3_tee_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_zwart: simc_tcu_mk3_tuck_zwart
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk3_sog.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_68\data\tcu_mk3_tee_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_nomex_zwart: simc_tcu_mk3_sog_zwart
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_nomex.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_68\data\tcu_mk3_tee_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_leg_zwart: simc_tcu_mk3_sog_zwart
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_leg.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"bots"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_68\data\tcu_mk3_tee_zwart_co.paa",
			"",
			"",
			"",
			"\simc_uaf_68\data\3ds_bot_zwart_co.paa"
		};
	};
	class simc_tcu_mk3_sog_leg_nomex_zwart: simc_tcu_mk3_sog_leg_zwart
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_leg_nomex.p3d";
	};
	class simc_tcu_mk3_zwart: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_67";
		genericNames="EnglishMen";
		model="\simc_uaf_67\tcu_mk3.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_zwart_roll: simc_tcu_mk3_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_67\tcu_mk3_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_zwart_nomex: simc_tcu_mk3_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk3_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_zwart: simc_tcu_mk3_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"buttons",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_zwart_roll: simc_tcu_mk2_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"buttons",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_zwart_nomex: simc_tcu_mk2_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk1_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"buttons",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk1_zwart: simc_tcu_mk3_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk1_zwart_roll: simc_tcu_mk1_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk1_zwart_nomex: simc_tcu_mk1_zwart
	{
		author="smicdaro";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk1_nomex.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"\simc_uaf_67\data\tcu_zwart_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_TS: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_67";
		genericNames="EnglishMen";
		model="\simc_uaf_68\tcu_mk3_TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_67\data\tcu_mk3.rvmat",
				"simc_uaf_67\data\tcu_mk3_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk3_verwundet.rvmat",
				"simc_uaf_68\data\SF_TS.rvmat",
				"simc_uaf_68\data\SF_TS_verwundet.rvmat",
				"simc_uaf_68\data\SF_TS_verwundet.rvmat",
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
	class simc_tcu_mk3_TS_trop: simc_tcu_mk3_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		genericNames="EnglishMen";
		model="\simc_uaf_68\tcu_mk3_TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_TS_tuck: simc_tcu_mk3_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		genericNames="EnglishMen";
		model="\simc_uaf_68\tcu_mk3_TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_TS_sog: simc_tcu_mk3_TS
	{
		author="smicdaro";
		faction="Simc_UA_69";
		model="\simc_uaf_69\tcu_mk3_sog_ts.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_TS_sog_trop: simc_tcu_mk3_TS_sog
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_ts_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_TS_sog_nomex: simc_tcu_mk3_TS_sog
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_ts_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_erdl_TS: simc_tcu_mk3_TS
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_68\tcu_mk3_TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_erdl_TS_trop: simc_tcu_mk3_erdl_TS
	{
		author="smicdaro";
		model="\simc_uaf_68\tcu_mk3_TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_erdl_TS_tuck: simc_tcu_mk3_erdl_TS
	{
		author="smicdaro";
		model="\simc_uaf_68\tcu_mk3_TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_erdl_TS_sog: simc_tcu_mk3_erdl_TS
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_ts.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_erdl_TS_sog_trop: simc_tcu_mk3_erdl_TS_sog
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_ts_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_68\data\SF_TS_2_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_erdl_TS_sog_nomex: simc_tcu_mk3_erdl_TS_sog
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_ts_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_68\data\SF_TS_2_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk3_sog.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_trop: simc_tcu_mk3_sog_erdl
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_nomex: simc_tcu_mk3_sog_erdl
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_h: simc_tcu_mk3_sog_erdl
	{
		author="smicdaro";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_erdl_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_h_trop: simc_tcu_mk3_sog_erdl_h
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_erdl_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_h_nomex: simc_tcu_mk3_sog_erdl_h
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_erdl_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_top: simc_tcu_mk3_sog_erdl
	{
		author="smicdaro";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_H_top: simc_tcu_mk3_sog_erdl
	{
		author="smicdaro";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_H_top_nomex: simc_tcu_mk3_sog_erdl_h_nomex
	{
		author="smicdaro";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_lows: simc_tcu_mk3_sog_erdl
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_lows_nomex: simc_tcu_mk3_sog_erdl_nomex
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_sog_erdl_H_lows: simc_tcu_mk3_sog_erdl
	{
		author="smicdaro";
		model="\simc_uaf_69\tcu_mk3_sog_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_67\data\tcu_mk3_tee_erdl_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_jean: simc_tcu_mk3_tuck
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\tcu_mk3_jean.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			"\simc_uaf_68\data\ARVN_jean_1_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk3_jean_trop: simc_tcu_mk3_jean
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\tcu_mk3_jean_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_68\data\ARVN_jean_1_co.paa",
			"",
			""
		};
	};
	class simc_SF_TS: simc_UA_68_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\TS.p3d";
		linkedItems[]=
		{
			"H_Simc_Boon_tigre_3",
			"V_Simc_SF_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_Boon_tigre_3",
			"V_Simc_SF_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_68\data\SF_TS.rvmat",
				"simc_uaf_68\data\SF_TS_verwundet.rvmat",
				"simc_uaf_68\data\SF_TS_verwundet.rvmat",
				"simc_uaf_68\data\SF_TS.rvmat",
				"simc_uaf_68\data\SF_TS_verwundet.rvmat",
				"simc_uaf_68\data\SF_TS_verwundet.rvmat",
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
	class simc_SF_TS_trop: simc_SF_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_2_co.paa",
			"\simc_uaf_68\data\SF_TS_2_co.paa",
			"",
			""
		};
	};
	class simc_SF_TS_tuck: simc_SF_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_2_co.paa",
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_SF_TS_tuck_trop: simc_SF_TS_tuck
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\TS_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"\simc_uaf_68\data\SF_TS_2_co.paa",
			"",
			""
		};
	};
	class simc_SF_TS_jean: simc_SF_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\TS_jean.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_2_co.paa",
			"\simc_uaf_68\data\ARVN_jean_1_co.paa",
			"",
			""
		};
	};
	class simc_SF_TS_tee: simc_SF_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\TS_tee.p3d";
		hiddenSelections[]=
		{
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"",
			""
		};
	};
	class simc_SF_TS_jean_trop: simc_SF_TS_jean
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\TS_jean_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_1_co.paa",
			"\simc_uaf_68\data\ARVN_jean_1_co.paa",
			"",
			""
		};
	};
	class simc_ADV_TS: simc_UA_68_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_UA_67";
		genericNames="EnglishMen";
		model="\simc_uaf_68\rvn.p3d";
		linkedItems[]=
		{
			"H_Simc_Boon_tigre_3",
			"V_simc_SF_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_Boon_tigre_3",
			"V_simc_SF_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_gibson_ca.paa"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_svn_67\data\arvn.rvmat",
				"simc_svn_67\data\arvn_verwundet.rvmat",
				"simc_svn_67\data\arvn_verwundet.rvmat",
				"simc_svn_67\data\arvn.rvmat",
				"simc_svn_67\data\arvn_verwundet.rvmat",
				"simc_svn_67\data\arvn_verwundet.rvmat",
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
	class simc_ADV_TS_trop: simc_ADV_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\rvn_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_nort_ca.paa"
		};
	};
	class simc_ADV_TS_tuck: simc_ADV_TS
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\rvn_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_sebring_ca.paa"
		};
	};
	class simc_ADV_TS_tuck_trop: simc_ADV_TS_tuck
	{
		author="smicdaro";
		faction="Simc_UA_67";
		model="\simc_uaf_68\rvn_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_lamp_ca.paa"
		};
	};
	class simc_ADV_DerFrosch: simc_ADV_TS
	{
		scope=1;
		author="smicdaro";
		model="\simc_uaf_68\rvn.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_croix_ca.paa"
		};
	};
	class simc_ADV_DerFrosch_trop: simc_ADV_DerFrosch
	{
		author="smicdaro";
		model="\simc_uaf_68\rvn_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_ekgrus_ca.paa"
		};
	};
	class simc_ADV_DerFrosch_tuck: simc_ADV_DerFrosch
	{
		author="smicdaro";
		model="\simc_uaf_68\rvn_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_jansen_ca.paa"
		};
	};
	class simc_ADV_DerFrosch_tuck_trop: simc_ADV_DerFrosch_tuck
	{
		author="smicdaro";
		model="\simc_uaf_68\rvn_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			"\simc_uaf_67\patches\nom_barden_erla_co.paa"
		};
	};
	class simc_regenkot: simc_UA_68_base
	{
		scope=1;
		author="Justin N.";
		faction="Simc_MC_67";
		displayName="Wet man";
		genericNames="EnglishMen";
		model="\simc_uaf_68\regenkot_tcu.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_bandoleer_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_bandoleer_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\regenkot_alt_co.paa",
			""
		};
	};
	class simc_regenkot_gas: simc_regenkot
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class simc_regenkot_erdl_low: simc_regenkot
	{
		scope=1;
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\regenkot_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			""
		};
	};
	class simc_regenkot_erdl_low_gas: simc_regenkot_erdl_low
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\regenkot_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			""
		};
	};
	class simc_regenkot_erdl_high: simc_regenkot
	{
		scope=1;
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\regenkot_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			""
		};
	};
	class simc_regenkot_erdl_high_gas: simc_regenkot_erdl_high
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\regenkot_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa",
			""
		};
	};
	class simc_regenkot_og107: simc_regenkot
	{
		scope=1;
		author="Justin N.";
		model="\simc_uaf_68\regenkot_og107.p3d";
		hiddenSelections[]=
		{
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class simc_regenkot_og107_gas: simc_regenkot_og107
	{
		author="Justin N.";
		model="\simc_uaf_68\regenkot_og107.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\regenkot_alt_co.paa"
		};
	};
	class simc_og107_veldjas: simc_UA_68_base
	{
		scope=1;
		author="smicdaro";
		model="\simc_uaf_69\veldjas_1965_og107.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\og107_mk1_co.paa",
			"\simc_uaf_67\patches\nom_hancoc_ca.paa",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_69\data\veldjas_1965.rvmat",
				"simc_uaf_69\data\veldjas_1965_verwundet.rvmat",
				"simc_uaf_69\data\veldjas_1965_verwundet.rvmat",
				"simc_uaf_67\data\og107_mk1.rvmat",
				"simc_uaf_67\data\og107_mk1_verwundet.rvmat",
				"simc_uaf_67\data\og107_mk1_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk1.rvmat",
				"simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_og107_veldjas_trop: simc_og107_veldjas
	{
		author="smicdaro";
		uniformClass="U_Simc_og107_veldjas_trop";
		model="\simc_uaf_69\veldjas_1965_og107_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\og107_mk1_co.paa",
			"\simc_uaf_67\patches\nom_jansen_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_og107_veldjas_gas: simc_og107_veldjas
	{
		author="smicdaro";
		uniformClass="U_Simc_og107_veldjas_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\og107_mk1_co.paa",
			"\simc_uaf_67\patches\nom_kaas_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_og107_veldjas_gas_trop: simc_og107_veldjas_trop
	{
		author="smicdaro";
		uniformClass="U_Simc_og107_veldjas_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\og107_mk1_co.paa",
			"\simc_uaf_67\patches\nom_laroche_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_veldjas: simc_og107_veldjas
	{
		author="smicdaro";
		editorSubcategory="SIMC_men_erdl";
		model="\simc_uaf_69\veldjas_1965_tcu.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_uaf_67\patches\nom_morton_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_veldjas_trop: simc_tcu_veldjas
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_trop";
		model="\simc_uaf_69\veldjas_1965_tcu_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_67\patches\nom_ondrej_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_veldjas_gas: simc_tcu_veldjas
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"\simc_uaf_67\patches\nom_parson_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_veldjas_gas_trop: simc_tcu_veldjas_trop
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\simc_uaf_67\patches\nom_roger_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_low_veldjas: simc_og107_veldjas
	{
		author="smicdaro";
		editorSubcategory="SIMC_men_erdl";
		model="\simc_uaf_69\veldjas_1965_tcu.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\patches\nom_gunther_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_low_veldjas_trop: simc_tcu_erdl_low_veldjas
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_trop";
		model="\simc_uaf_69\veldjas_1965_tcu_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\patches\nom_hoover_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_low_veldjas_gas: simc_tcu_erdl_low_veldjas
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\patches\nom_ketsu_ca.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_low_veldjas_gas_trop: simc_tcu_erdl_low_veldjas_trop
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"\simc_uaf_67\patches\nom_mcfee_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_high_veldjas: simc_og107_veldjas
	{
		author="smicdaro";
		editorSubcategory="SIMC_men_erdl";
		model="\simc_uaf_69\veldjas_1965_tcu.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_h_co.paa",
			"\simc_uaf_67\patches\nom_summers_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_high_veldjas_trop: simc_tcu_erdl_high_veldjas
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_trop";
		model="\simc_uaf_69\veldjas_1965_tcu_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_h_co.paa",
			"\simc_uaf_67\patches\nom_walk_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_high_veldjas_gas: simc_tcu_erdl_high_veldjas
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_h_co.paa",
			"\simc_uaf_67\patches\nom_yndoril_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_high_veldjas_gas_trop: simc_tcu_erdl_high_veldjas_trop
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_h_co.paa",
			"\simc_uaf_67\patches\nom_zemke_co.paa",
			"",
			"",
			""
		};
	};
	class simc_og107_veldjas_blench: simc_og107_veldjas
	{
		author="smicdaro";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\og107_mk1_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_og107_veldjas_blench_trop: simc_og107_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_og107_veldjas_blench_trop";
		model="\simc_uaf_69\veldjas_1965_og107_trop.p3d";
	};
	class simc_og107_veldjas_blench_gas: simc_og107_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_og107_veldjas_blench_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class simc_og107_veldjas_blench_gas_trop: simc_og107_veldjas_blench_trop
	{
		author="smicdaro";
		uniformClass="U_simc_og107_veldjas_blench_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class simc_tcu_veldjas_blench: simc_og107_veldjas_blench
	{
		author="smicdaro";
		editorSubcategory="SIMC_men_erdl";
		model="\simc_uaf_69\veldjas_1965_tcu.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_veldjas_blench_trop: simc_tcu_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_trop";
		model="\simc_uaf_69\veldjas_1965_tcu_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_veldjas_blench_gas: simc_tcu_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class simc_tcu_veldjas_blench_gas_trop: simc_tcu_veldjas_blench_trop
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class simc_tcu_erdl_low_veldjas_blench: simc_og107_veldjas_blench
	{
		author="smicdaro";
		editorSubcategory="SIMC_men_erdl";
		model="\simc_uaf_69\veldjas_1965_tcu.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_low_veldjas_blench_trop: simc_tcu_erdl_low_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_trop";
		model="\simc_uaf_69\veldjas_1965_tcu_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_low_veldjas_blench_gas: simc_tcu_erdl_low_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class simc_tcu_erdl_low_veldjas_blench_gas_trop: simc_tcu_erdl_low_veldjas_blench_trop
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class simc_tcu_erdl_high_veldjas_blench: simc_og107_veldjas_blench
	{
		author="smicdaro";
		editorSubcategory="SIMC_men_erdl";
		model="\simc_uaf_69\veldjas_1965_tcu.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_h_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_high_veldjas_blench_trop: simc_tcu_erdl_high_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_trop";
		model="\simc_uaf_69\veldjas_1965_tcu_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa",
			"\simc_uaf_67\data\tcu_mk3_erdl_h_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_high_veldjas_blench_gas: simc_tcu_erdl_high_veldjas_blench
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_gas";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class simc_tcu_erdl_high_veldjas_blench_gas_trop: simc_tcu_erdl_high_veldjas_blench_trop
	{
		author="smicdaro";
		uniformClass="U_simc_tcu_veldjas_blench_gas_trop";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"rank",
			"insignia"
		};
	};
	class B_AssaultPack_rgr;
	class B_simc_pack_67: B_AssaultPack_rgr
	{
		displayName="[US] Pack";
		author="Smicradeu";
		scope=1;
		descriptionShort="sack";
		model="\simc_uaf_68\pack_trop_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\pack_trop_ca.paa";
		mass=65;
	};
	class B_simc_illegal_canteen: B_simc_pack_67
	{
		scope=1;
		displayName="2QT Canteen (1968)";
		author="Smicradeu";
		model="\simc_uaf_68\illegal_canteen.p3d";
		picture="\simc_uaf_67_preview\icons\illegal_canteen_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Illegal Canteen";
		maximumLoad=60;
		mass=7;
	};
	class B_simc_pack_trop_1: B_simc_pack_67
	{
		displayName="[US] Tropical Rucksack";
		author="Smicradeu";
		scope=2;
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\pack_trop_ca.paa";
		maximumLoad=240;
		mass=100;
	};
	class B_simc_pack_trop_1_alt: B_simc_pack_trop_1
	{
		author="Smicradeu";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		maximumLoad=240;
	};
	class B_simc_pack_trop_2: B_simc_pack_trop_1
	{
		author="Smicradeu";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=240;
	};
	class B_simc_pack_trop_3: B_simc_pack_trop_1
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=240;
	};
	class B_simc_pack_trop_4: B_simc_pack_trop_1
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack (Bandoleer)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_4.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=240;
		mass=150;
	};
	class B_simc_pack_trop_4_alt: B_simc_pack_trop_1
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_4.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		maximumLoad=240;
	};
	class B_simc_pack_trop_5: B_simc_pack_trop_1
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack (Framed)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_frem_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		mass=150;
		maximumLoad=300;
	};
	class B_simc_pack_trop_6: B_simc_pack_trop_1
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack (Framed)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_frem_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=300;
		mass=150;
	};
	class B_simc_pack_trop_6_alt: B_simc_pack_trop_1
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack (Framed)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_frem_2.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		maximumLoad=300;
		mass=135;
	};
	class B_simc_pack_trop_rajio: B_simc_pack_trop_1
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack (PRC)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_rajio.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=150;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_range=20000;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class B_simc_pack_trop_rajio_frem: B_simc_pack_trop_6
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack (Framed/PRC)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_frem_rajio.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=150;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_range=20000;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class B_simc_pack_trop_rajio_frem_2: B_simc_pack_trop_rajio_frem
	{
		author="Smicradeu";
		displayName="[US] Tropical Rucksack (Framed/PRC)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_frem_rajio_2.p3d";
	};
	class B_simc_pack_trop_flak_1: B_simc_pack_67
	{
		displayName="[US/Flak] Tropical Rucksack";
		author="Smicradeu";
		scope=2;
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\pack_trop_ca.paa";
		maximumLoad=240;
		mass=100;
	};
	class B_simc_pack_trop_flak_1_alt: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		maximumLoad=240;
	};
	class B_simc_pack_trop_flak_2: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=240;
	};
	class B_simc_pack_trop_flak_3: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=240;
	};
	class B_simc_pack_trop_flak_4: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack (Bandoleer)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_4.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=290;
		mass=150;
	};
	class B_simc_pack_trop_flak_4_alt: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_4.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		maximumLoad=290;
	};
	class B_simc_pack_trop_flak_5: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack (Framed)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_frem_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		mass=150;
		maximumLoad=300;
	};
	class B_simc_pack_trop_flak_6: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack (Framed)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_frem_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=300;
		mass=150;
	};
	class B_simc_pack_trop_flak_6_alt: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack (Framed)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_frem_2.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		maximumLoad=300;
		mass=135;
	};
	class B_simc_pack_trop_flak_rajio: B_simc_pack_trop_flak_1
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack (PRC)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_rajio.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=150;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_range=20000;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class B_simc_pack_trop_flak_rajio_frem: B_simc_pack_trop_flak_6
	{
		author="Smicradeu";
		displayName="[US/Flak] Tropical Rucksack (Framed/PRC)";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_frem_rajio.p3d";
		hiddenSelections[]=
		{
			""
		};
		maximumLoad=150;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_range=20000;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class B_simc_pack_trop_flak_rajio_frem_2: B_simc_pack_trop_flak_rajio_frem
	{
		author="Smicradeu";
		descriptionShort="Rucksack, Tropical, 1968";
		model="\simc_uaf_68\pack_trop_flak_frem_rajio_2.p3d";
	};
	class Vest_Base_F;
	class Headgear_Base_F;
	class Ground_H_Simc_Boon_green_1: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		reversed=1;
		displayName="[US] Bush Hat";
		author="Justin N.";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class H_Simc_Boon_green_2
			{
				name="H_Simc_Boon_green_2";
				count=1;
			};
		};
	};
	class Ground_H_Simc_Boon_green_2: Ground_H_Simc_Boon_green_1
	{
		class TransportItems
		{
			class H_Simc_Boon_green_3
			{
				name="H_Simc_Boon_green_3";
				count=1;
			};
		};
	};
	class Ground_H_Simc_Boon_tigre_1: Ground_H_Simc_Boon_green_1
	{
		displayName="[US] Bush Hat (Tiger)";
		author="Justin N. + adriaNsteam";
		class TransportItems
		{
			class H_Simc_Boon_tigre_1
			{
				name="H_Simc_Boon_tigre_1";
				count=1;
			};
		};
	};
	class Ground_H_Simc_Boon_tigre_2: Ground_H_Simc_Boon_tigre_1
	{
		displayName="[US] Bush Hat (Tiger)";
		author="Justin N. + adriaNsteam";
		class TransportItems
		{
			class H_Simc_Boon_tigre_2
			{
				name="H_Simc_Boon_tigre_2";
				count=1;
			};
		};
	};
	class Ground_H_Simc_Boon_erdl_low_1: Ground_H_Simc_Boon_green_1
	{
		displayName="[US] Bush Hat (ERDL-Low)";
		author="Justin N.";
		class TransportItems
		{
			class H_Simc_Boon_erdl_low_1
			{
				name="H_Simc_Boon_erdl_low_1";
				count=1;
			};
		};
	};
	class Ground_H_Simc_Boon_erdl_low_2: Ground_H_Simc_Boon_erdl_low_1
	{
		displayName="[US] Bush Hat (ERDL-Low)";
		author="Justin N.";
		class TransportItems
		{
			class H_Simc_Boon_erdl_low_2
			{
				name="H_Simc_Boon_erdl_low_2";
				count=1;
			};
		};
	};
	class Item_Base_F;
	class Item_U_Simc_TCU_mk3_zwart: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Tropical Combat Fatigues (Black Dye)";
		author="SmithcarDAK";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_Simc_TCU_mk3_zwart
			{
				name="U_Simc_TCU_mk3_zwart";
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
	class U_Simc_67_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};
	class U_Simc_TCU_mk3_tuck: U_Simc_67_BasicBody
	{
		author="Casper_TFG";
		scope=2;
		displayName="Tropical Combat Fatigues 1967";
		model="\simc_uaf_67\suitpack_tcu.p3d";
		picture="\simc_uaf_67_preview\icons\tcu_ca.paa";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_tuck";
			containerClass="Supply80";
		};
	};
	class U_Simc_TCU_mk3_sog: U_Simc_TCU_mk3_tuck
	{
		author="Motta";
		scope=2;
		displayName="Tropical Combat Fatigues/Pockets";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog";
		};
	};
	class U_Simc_TCU_mk3_sog_trop: U_Simc_TCU_mk3_sog
	{
		author="Motta";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_trop";
		};
	};
	class U_Simc_TCU_mk3_sog_nomex: U_Simc_TCU_mk3_sog
	{
		displayName="Tropical Combat Fatigues/Pockets/Nomex";
		author="Motta & Lennard";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_nomex";
		};
	};
	class U_Simc_TCU_mk3_sog_leg: U_Simc_TCU_mk3_sog
	{
		author="Motta";
		displayName="Tropical Combat Fatigues/Leggings/Pockets";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_leg";
		};
	};
	class U_Simc_TCU_mk3_sog_leg_nomex: U_Simc_TCU_mk3_sog_leg
	{
		author="Motta & Lennard";
		displayName="Tropical Combat Fatigues/Leggings/Pockets/Nomex";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_leg_nomex";
		};
	};
	class U_Simc_TCU_mk3_tuck_nom: U_Simc_TCU_mk3_tuck
	{
		author="Casper_TFG";
		scope=2;
		displayName="[US] Tropical Combat Fatigues 1967";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_tuck_nom";
		};
	};
	class U_Simc_TCU_mk3_leg: U_Simc_TCU_mk3_tuck
	{
		author="Casper_TFG";
		displayName="Tropical Combat Fatigues/Leggings";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_leg";
		};
	};
	class U_Simc_TCU_mk3_leg_roll: U_Simc_TCU_mk3_leg
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_leg_roll";
		};
	};
	class U_Simc_TCU_mk1_leg: U_Simc_TCU_mk3_leg
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_leg";
		};
	};
	class U_Simc_TCU_mk1_leg_roll: U_Simc_TCU_mk3_leg
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_leg_roll";
		};
	};
	class U_Simc_TCU_mk3_leg_zwart: U_Simc_TCU_mk3_tuck
	{
		author="Casper_TFG";
		displayName="Tropical Combat Fatigues (Black Dye)/Leggings";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa"
		};
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_leg_zwart";
		};
	};
	class U_Simc_TCU_mk3_leg_zwart_roll: U_Simc_TCU_mk3_leg_zwart
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_leg_zwart_roll";
		};
	};
	class U_Simc_TCU_mk1_leg_zwart: U_Simc_TCU_mk3_leg_zwart
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_leg_zwart";
		};
	};
	class U_Simc_TCU_mk1_leg_zwart_roll: U_Simc_TCU_mk3_leg_zwart
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_leg_zwart_roll";
		};
	};
	class U_Simc_TCU_mk3_tuck_zwart: U_Simc_TCU_mk3_tuck
	{
		author="Casper_TFG";
		displayName="Tropical Combat Fatigues (Black Dye)";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_zwart_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_tuck_zwart";
		};
	};
	class U_Simc_TCU_mk3_sog_zwart: U_Simc_TCU_mk3_tuck_zwart
	{
		author="Motta";
		scope=2;
		displayName="Tropical Combat Fatigues (Black Dye)";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_zwart";
		};
	};
	class U_Simc_TCU_mk3_sog_nomex_zwart: U_Simc_TCU_mk3_sog_zwart
	{
		author="Motta";
		scope=2;
		displayName="Tropical Combat Fatigues (Black Dye/Nomex)";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_nomex_zwart";
		};
	};
	class U_Simc_TCU_mk3_sog_leg_zwart: U_Simc_TCU_mk3_sog_zwart
	{
		author="Motta";
		scope=2;
		displayName="Tropical Combat Fatigues (Black Dye)/Leggings";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_leg_zwart";
		};
	};
	class U_Simc_TCU_mk3_sog_leg_nomex_zwart: U_Simc_TCU_mk3_sog_leg_zwart
	{
		author="Motta";
		scope=2;
		displayName="Tropical Combat Fatigues (Black Dye/Nomex)/Leggings";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_leg_nomex_zwart";
		};
	};
	class U_Simc_TCU_mk3_zwart: U_Simc_TCU_mk3_tuck_zwart
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_zwart";
		};
	};
	class U_Simc_TCU_mk3_zwart_roll: U_Simc_TCU_mk3_zwart
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_zwart_roll";
		};
	};
	class U_Simc_TCU_mk3_zwart_nomex: U_Simc_TCU_mk3_zwart
	{
		author="Casper_TFG";
		displayName="Tropical Combat Fatigues (Black Dye/Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_zwart_nomex";
		};
	};
	class U_Simc_TCU_mk2_zwart: U_Simc_TCU_mk3_tuck_zwart
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_zwart";
		};
	};
	class U_Simc_TCU_mk2_zwart_roll: U_Simc_TCU_mk2_zwart
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_zwart_roll";
		};
	};
	class U_Simc_TCU_mk2_zwart_nomex: U_Simc_TCU_mk3_zwart_nomex
	{
		author="Lennard";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_zwart_nomex";
		};
	};
	class U_Simc_TCU_mk1_zwart: U_Simc_TCU_mk3_tuck_zwart
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_zwart";
		};
	};
	class U_Simc_TCU_mk1_zwart_roll: U_Simc_TCU_mk1_zwart
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_zwart_roll";
		};
	};
	class U_Simc_TCU_mk1_zwart_nomex: U_Simc_TCU_mk3_zwart_nomex
	{
		author="Lennard";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_zwart_nomex";
		};
	};
	class U_Simc_TCU_mk3_TS: U_Simc_TCU_mk3_tuck
	{
		author="Casper_TFG";
		displayName="Tropical Combat Fatigues/Tiger Stripe";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk1_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_TS";
		};
	};
	class U_Simc_TCU_mk3_TS_trop: U_Simc_TCU_mk3_TS
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_TS_trop";
		};
	};
	class U_Simc_TCU_mk3_TS_tuck: U_Simc_TCU_mk3_TS
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_TS_tuck";
		};
	};
	class U_Simc_TCU_mk3_TS_sog: U_Simc_TCU_mk3_TS
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_TS_sog";
		};
	};
	class U_Simc_TCU_mk3_TS_sog_trop: U_Simc_TCU_mk3_TS
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_TS_sog_trop";
		};
	};
	class U_Simc_TCU_mk3_TS_sog_nomex: U_Simc_TCU_mk3_TS
	{
		displayName="Tropical Combat Fatigues/Tiger Stripe(Nomex)";
		author="Motta & Lennard";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_TS_sog_nomex";
		};
	};
	class U_Simc_TCU_mk3_erdl_TS: U_Simc_TCU_mk3_tuck
	{
		author="Casper_TFG";
		displayName="Tropical Combat Fatigues ERDL/Tiger Stripe";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_erdl_TS";
		};
	};
	class U_Simc_TCU_mk3_erdl_TS_tuck: U_Simc_TCU_mk3_erdl_TS
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_erdl_TS_tuck";
		};
	};
	class U_Simc_TCU_mk3_erdl_TS_trop: U_Simc_TCU_mk3_erdl_TS
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_erdl_TS_trop";
		};
	};
	class U_Simc_TCU_mk3_erdl_TS_sog: U_Simc_TCU_mk3_erdl_TS
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_erdl_TS_sog";
		};
	};
	class U_Simc_TCU_mk3_erdl_TS_sog_trop: U_Simc_TCU_mk3_erdl_TS
	{
		author="Motta";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_erdl_TS_sog_trop";
		};
	};
	class U_Simc_TCU_mk3_erdl_TS_sog_nomex: U_Simc_TCU_mk3_erdl_TS
	{
		author="Motta & Lennard";
		displayName="Tropical Combat Fatigues ERDL/Tiger Stripe(Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_erdl_TS_sog_nomex";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl: U_Simc_TCU_mk3_tuck
	{
		author="Motta";
		displayName="Tropical Combat Fatigues ERDL-Low/Pockets";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_trop: U_Simc_TCU_mk3_sog_erdl
	{
		author="Motta";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_trop";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_nomex: U_Simc_TCU_mk3_sog_erdl
	{
		author="Motta & Lennard";
		displayName="Tropical Combat Fatigues ERDL-Low/Pockets(Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_nomex";
		};
	};
	class U_simc_tcu_mk3_sog_erdl_top: U_Simc_TCU_mk3_sog_erdl
	{
		author="Motta";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_top";
		};
	};
	class U_simc_tcu_mk3_sog_erdl_lows: U_Simc_TCU_mk3_sog_erdl
	{
		author="Motta";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_lows";
		};
	};
	class U_simc_tcu_mk3_sog_erdl_lows_nomex: U_Simc_TCU_mk3_sog_erdl_nomex
	{
		author="Motta & Lennard";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_lows_nomex";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_h: U_Simc_TCU_mk3_sog_erdl
	{
		author="Motta";
		displayName="Tropical Combat Fatigues ERDL-High/Pockets";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_h";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_h_trop: U_Simc_TCU_mk3_sog_erdl_h
	{
		author="Motta";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_h_trop";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_h_nomex: U_Simc_TCU_mk3_sog_erdl_h
	{
		author="Motta & Lennard";
		displayName="Tropical Combat Fatigues ERDL-High/Pockets(Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_h_nomex";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_h_top: U_Simc_TCU_mk3_sog_erdl_h
	{
		author="Motta";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_H_top";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_h_top_nomex: U_Simc_TCU_mk3_sog_erdl_h
	{
		author="Motta & Lennard";
		displayName="Tropical Combat Fatigues ERDL-High/Pockets(Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_H_top_nomex";
		};
	};
	class U_Simc_TCU_mk3_sog_erdl_h_lows: U_Simc_TCU_mk3_sog_erdl_h
	{
		author="Motta";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_sog_erdl_H_lows";
		};
	};
	class U_Simc_TCU_mk3_jean: U_Simc_TCU_mk3_erdl_TS
	{
		author="Casper_TFG";
		displayName="[USN-ST]Tropical Combat Jacket ERDL/Denims";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_jean";
		};
	};
	class U_Simc_TCU_mk3_jean_trop: U_Simc_TCU_mk3_jean
	{
		author="Casper_TFG";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_jean_trop";
		};
	};
	class U_Simc_SF_TS: U_Simc_67_BasicBody
	{
		author="Dopest Ghast in stad";
		scope=2;
		displayName="[US-SF] Tiger Stripe Uniform";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_ts_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_ts_1_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_SF_TS";
		};
	};
	class U_Simc_SF_TS_trop: U_Simc_SF_TS
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_SF_TS_trop";
		};
	};
	class U_Simc_SF_TS_tuck: U_Simc_SF_TS
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_SF_TS_tuck";
		};
	};
	class U_Simc_SF_TS_tuck_trop: U_Simc_SF_TS
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_SF_TS_tuck_trop";
		};
	};
	class U_Simc_SF_TS_tee: U_Simc_SF_TS
	{
		author="nil-acht-neun";
		displayName="[US-SF] Tiger Stripe/tee";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_SF_TS_tee";
		};
	};
	class U_Simc_SF_TS_jean: U_Simc_SF_TS
	{
		author="Dopest Ghast in stad";
		scope=2;
		displayName="[USN-ST] Tiger Stripe/Denims";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_SF_TS_jean";
		};
	};
	class U_Simc_SF_TS_jean_trop: U_Simc_SF_TS_jean
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_SF_TS_jean_trop";
		};
	};
	class U_Simc_ADV_TS: U_Simc_67_BasicBody
	{
		author="Dopest Ghast in stad";
		scope=2;
		displayName="[US] Advisor Tiger Stripe Uniform";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_ts_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_ts_1_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_TS";
		};
	};
	class U_Simc_ADV_TS_trop: U_Simc_ADV_TS
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_TS_trop";
		};
	};
	class U_Simc_ADV_TS_tuck: U_Simc_ADV_TS
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_TS_tuck";
		};
	};
	class U_Simc_ADV_TS_tuck_trop: U_Simc_ADV_TS
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_TS_tuck_trop";
		};
	};
	class U_Simc_ADV_DerFrosch: U_Simc_ADV_TS
	{
		author="Zwijnieyy";
		scope=2;
		displayName="[US] Advisor Beo Gam Uniform";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_DerFrosch";
		};
	};
	class U_Simc_ADV_DerFrosch_trop: U_Simc_ADV_DerFrosch
	{
		author="Zwijnieyy";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_DerFrosch_trop";
		};
	};
	class U_Simc_ADV_DerFrosch_tuck: U_Simc_ADV_DerFrosch
	{
		author="Zwijnieyy";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_DerFrosch_tuck";
		};
	};
	class U_Simc_ADV_DerFrosch_tuck_trop: U_Simc_ADV_DerFrosch
	{
		author="Zwijnieyy";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_ADV_DerFrosch_tuck_trop";
		};
	};
	class U_Simc_regenkot: U_Simc_67_BasicBody
	{
		author="Justin N.";
		scope=2;
		displayName="[US] Rain Parka/TCU";
		model="\simc_uaf_67\suitpack_tcu.p3d";
		picture="\simc_uaf_67_preview\icons\og107_ca.paa";
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
			uniformClass="Simc_regenkot";
		};
	};
	class U_Simc_regenkot_gas: U_Simc_regenkot
	{
		author="Justin N.";
		displayName="[US] Rain Parka/TCU/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_regenkot_gas";
		};
	};
	class U_Simc_regenkot_og107: U_Simc_regenkot
	{
		author="Justin N.";
		displayName="[US] Rain Parka/OG107";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_regenkot_og107";
		};
	};
	class U_Simc_regenkot_og107_gas: U_Simc_regenkot_og107
	{
		author="Justin N.";
		displayName="[US] Rain Parka/OG107/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_regenkot_og107_gas";
		};
	};
	class U_Simc_regenkot_erdl_low: U_Simc_regenkot
	{
		author="Justin N.";
		displayName="[US] Rain Parka/ERDL-Low";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_regenkot_erdl_low";
		};
	};
	class U_Simc_regenkot_erdl_low_gas: U_Simc_regenkot_erdl_low
	{
		author="Justin N.";
		displayName="[US] Rain Parka/ERDL-Low/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_regenkot_erdl_low_gas";
		};
	};
	class U_Simc_regenkot_erdl_High: U_Simc_regenkot
	{
		author="Justin N.";
		displayName="[US] Rain Parka/ERDL-High";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_regenkot_erdl_High";
		};
	};
	class U_Simc_regenkot_erdl_High_gas: U_Simc_regenkot_erdl_High
	{
		author="Justin N.";
		displayName="[US] Rain Parka/ERDL-High/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_regenkot_erdl_High_gas";
		};
	};
	class U_Simc_og107_veldjas: U_Simc_TCU_mk3_tuck
	{
		author="eeyore";
		scope=2;
		displayName="[US] M1965 Field Jacket/OG107";
		model="\simc_uaf_69\suitpack_veldjas_1965.p3d";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas";
		};
	};
	class U_Simc_og107_veldjas_trop: U_Simc_og107_veldjas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas_trop";
		};
	};
	class U_Simc_og107_veldjas_gas: U_Simc_og107_veldjas
	{
		author="eeyore";
		displayName="[US] M1965 Field Jacket/OG107/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas_gas";
		};
	};
	class U_Simc_og107_veldjas_gas_trop: U_Simc_og107_veldjas_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas_gas_trop";
		};
	};
	class U_simc_tcu_veldjas: U_Simc_og107_veldjas
	{
		author="eeyore";
		scope=2;
		displayName="[US] M1965 Field Jacket/TCU";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas";
		};
	};
	class U_simc_tcu_veldjas_trop: U_simc_tcu_veldjas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas_trop";
		};
	};
	class U_simc_tcu_veldjas_gas: U_simc_tcu_veldjas
	{
		author="eeyore";
		displayName="[US] M1965 Field Jacket/TCU/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas_gas";
		};
	};
	class U_simc_tcu_veldjas_gas_trop: U_simc_tcu_veldjas_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas_gas_trop";
		};
	};
	class U_simc_tcu_erdl_low_veldjas: U_Simc_og107_veldjas
	{
		author="eeyore";
		scope=2;
		displayName="[US] M1965 Field Jacket/TCU ERDL-Low";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas";
		};
	};
	class U_simc_tcu_erdl_low_veldjas_trop: U_simc_tcu_erdl_low_veldjas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas_trop";
		};
	};
	class U_simc_tcu_erdl_low_veldjas_gas: U_simc_tcu_erdl_low_veldjas
	{
		author="eeyore";
		displayName="[US] M1965 Field Jacket/TCU ERDL-Low/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas_gas";
		};
	};
	class U_simc_tcu_erdl_low_veldjas_gas_trop: U_simc_tcu_erdl_low_veldjas_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas_gas_trop";
		};
	};
	class U_simc_tcu_erdl_high_veldjas: U_Simc_og107_veldjas
	{
		author="eeyore";
		scope=2;
		displayName="[US] M1965 Field Jacket/TCU ERDL-high";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas";
		};
	};
	class U_simc_tcu_erdl_high_veldjas_trop: U_simc_tcu_erdl_high_veldjas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas_trop";
		};
	};
	class U_simc_tcu_erdl_high_veldjas_gas: U_simc_tcu_erdl_high_veldjas
	{
		author="eeyore";
		displayName="[US] M1965 Field Jacket/TCU ERDL-high/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas_gas";
		};
	};
	class U_simc_tcu_erdl_high_veldjas_gas_trop: U_simc_tcu_erdl_high_veldjas_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas_gas_trop";
		};
	};
	class U_simc_og107_veldjas_blench: U_Simc_og107_veldjas
	{
		author="eeyore";
		scope=2;
		displayName="M1965 Field Jacket/OG107";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\veldjas_1965_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas_blench";
		};
	};
	class U_simc_og107_veldjas_blench_trop: U_simc_og107_veldjas_blench
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas_blench_trop";
		};
	};
	class U_simc_og107_veldjas_blench_gas: U_simc_og107_veldjas_blench
	{
		author="eeyore";
		displayName="M1965 Field Jacket/OG107/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas_blench_gas";
		};
	};
	class U_simc_og107_veldjas_blench_gas_trop: U_simc_og107_veldjas_blench_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_veldjas_blench_gas_trop";
		};
	};
	class U_simc_tcu_veldjas_blench: U_simc_og107_veldjas_blench
	{
		author="eeyore";
		scope=2;
		displayName="M1965 Field Jacket/TCU";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas_blench";
		};
	};
	class U_simc_tcu_veldjas_blench_trop: U_simc_tcu_veldjas_blench
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas_blench_trop";
		};
	};
	class U_simc_tcu_veldjas_blench_gas: U_simc_tcu_veldjas_blench
	{
		author="eeyore";
		displayName="M1965 Field Jacket/TCU/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas_blench_gas";
		};
	};
	class U_simc_tcu_veldjas_blench_gas_trop: U_simc_tcu_veldjas_blench_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_veldjas_blench_gas_trop";
		};
	};
	class U_simc_tcu_erdl_low_veldjas_blench: U_simc_og107_veldjas_blench
	{
		author="eeyore";
		scope=2;
		displayName="M1965 Field Jacket/TCU ERDL-Low";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas_blench";
		};
	};
	class U_simc_tcu_erdl_low_veldjas_blench_trop: U_simc_tcu_erdl_low_veldjas_blench
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas_blench_trop";
		};
	};
	class U_simc_tcu_erdl_low_veldjas_blench_gas: U_simc_tcu_erdl_low_veldjas_blench
	{
		author="eeyore";
		displayName="M1965 Field Jacket/TCU ERDL-Low/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas_blench_gas";
		};
	};
	class U_simc_tcu_erdl_low_veldjas_blench_gas_trop: U_simc_tcu_erdl_low_veldjas_blench_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_low_veldjas_blench_gas_trop";
		};
	};
	class U_simc_tcu_erdl_high_veldjas_blench: U_simc_og107_veldjas_blench
	{
		author="eeyore";
		scope=2;
		displayName="M1965 Field Jacket/TCU ERDL-high";
		picture="\simc_uaf_67_preview\icons\veldjas_1965_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\veldjas_1965_m81_alt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas_blench";
		};
	};
	class U_simc_tcu_erdl_high_veldjas_blench_trop: U_simc_tcu_erdl_high_veldjas_blench
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas_blench_trop";
		};
	};
	class U_simc_tcu_erdl_high_veldjas_blench_gas: U_simc_tcu_erdl_high_veldjas_blench
	{
		author="eeyore";
		displayName="M1965 Field Jacket/TCU ERDL-high/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas_blench_gas";
		};
	};
	class U_simc_tcu_erdl_high_veldjas_blench_gas_trop: U_simc_tcu_erdl_high_veldjas_blench_gas
	{
		author="eeyore";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_high_veldjas_blench_gas_trop";
		};
	};
	class H_Booniehat_khk: ItemCore
	{
		class ItemInfo;
	};
	class H_Simc_Boon_base: H_Booniehat_khk
	{
		author="Justin N.";
		scope=1;
		displayName="[US] Bush Hat";
		picture="\simc_uaf_67_preview\icons\boon_od_ca.paa";
		model="\simc_uaf_68\boon_1.p3d";
		hiddenSelections[]=
		{
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		allowedFacewear[]=
		{
			"G_M17_Gasbag",
			0.60000002,
			"G_Anduk_1",
			0.0099999998,
			"G_Anduk_2",
			0.0099999998
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_uaf_68\boon_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"ben"
			};
		};
	};
	class H_Simc_Boon_green_1: H_Simc_Boon_base
	{
		author="Justin N.";
		scope=2;
		displayName="[US] Bush Hat";
		picture="\simc_uaf_67_preview\icons\boon_od_ca.paa";
		model="\simc_uaf_68\boon_2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_green_2: H_Simc_Boon_green_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_green_3: H_Simc_Boon_green_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_green_4: H_Simc_Boon_green_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_green_5: H_Simc_Boon_green_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_green_6: H_Simc_Boon_green_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_green_7: H_Simc_Boon_green_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_green_8: H_Simc_Boon_green_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_tigre_1: H_Simc_Boon_base
	{
		author="Justin N. + adriaNsteam";
		scope=2;
		displayName="[US] Bush Hat (Tiger)";
		picture="\simc_uaf_67_preview\icons\boon_TS_ca.paa";
		model="\simc_uaf_68\boon_2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_tigre_2: H_Simc_Boon_tigre_1
	{
		author="Justin N. + adriaNsteam";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_tigre_3: H_Simc_Boon_tigre_1
	{
		author="Justin N. + adriaNsteam";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_tigre_4: H_Simc_Boon_tigre_1
	{
		author="Justin N. + adriaNsteam";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_tigre_5: H_Simc_Boon_tigre_1
	{
		author="Justin N. + adriaNsteam";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_tigre_6: H_Simc_Boon_tigre_1
	{
		author="Justin N. + adriaNsteam";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_tigre_7: H_Simc_Boon_tigre_1
	{
		author="Justin N. + adriaNsteam";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_tigre_8: H_Simc_Boon_tigre_1
	{
		author="Justin N. + adriaNsteam";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_TS_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_1: H_Simc_Boon_base
	{
		author="Justin N. + adriaNsteam";
		scope=2;
		displayName="[US] Bush Hat (Beo Gam)";
		picture="\simc_uaf_67_preview\icons\boon_TS_ca.paa";
		model="\simc_uaf_68\boon_2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_2: H_Simc_Boon_DerFrosch_1
	{
		author="Justin N. + Zwijnieyy";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_3: H_Simc_Boon_DerFrosch_1
	{
		author="Justin N. + Zwijnieyy";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_4: H_Simc_Boon_DerFrosch_1
	{
		author="Justin N. + Zwijnieyy";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_5: H_Simc_Boon_DerFrosch_1
	{
		author="Justin N. + Zwijnieyy";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_6: H_Simc_Boon_DerFrosch_1
	{
		author="Justin N. + Zwijnieyy";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_7: H_Simc_Boon_DerFrosch_1
	{
		author="Justin N. + Zwijnieyy";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_DerFrosch_8: H_Simc_Boon_DerFrosch_1
	{
		author="Justin N. + Zwijnieyy";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\boon_frosch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_low_1: H_Simc_Boon_base
	{
		author="Justin N.";
		scope=2;
		displayName="[US] Bush Hat (ERDL-Low)";
		picture="\simc_uaf_67_preview\icons\boon_erdl_ca.paa";
		model="\simc_uaf_68\boon_2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_low_2: H_Simc_Boon_erdl_low_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_low_3: H_Simc_Boon_erdl_low_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_low_4: H_Simc_Boon_erdl_low_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_low_5: H_Simc_Boon_erdl_low_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_low_6: H_Simc_Boon_erdl_low_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_low_7: H_Simc_Boon_erdl_low_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_low_8: H_Simc_Boon_erdl_low_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_low_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_high_1: H_Simc_Boon_base
	{
		author="Justin N.";
		scope=2;
		displayName="[US] Bush Hat (ERDL-High)";
		picture="\simc_uaf_67_preview\icons\boon_erdl_ca.paa";
		model="\simc_uaf_68\boon_2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_high_2: H_Simc_Boon_erdl_high_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_high_3: H_Simc_Boon_erdl_high_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_high_4: H_Simc_Boon_erdl_high_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_high_5: H_Simc_Boon_erdl_high_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_erdl_high_6: H_Simc_Boon_erdl_high_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_high_7: H_Simc_Boon_erdl_high_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_erdl_high_8: H_Simc_Boon_erdl_high_1
	{
		author="Justin N.";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\boon_erdl_hoch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_zwart_1: H_Simc_Boon_base
	{
		author="Justin N. ";
		scope=2;
		displayName="[US] Bush Hat (Black)";
		picture="\simc_uaf_67_preview\icons\boon_TS_ca.paa";
		model="\simc_uaf_68\boon_2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_zwart_2: H_Simc_Boon_zwart_1
	{
		author="Justin N. ";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_zwart_3: H_Simc_Boon_zwart_1
	{
		author="Justin N. ";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_zwart_4: H_Simc_Boon_zwart_1
	{
		author="Justin N. ";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_zwart_5: H_Simc_Boon_zwart_1
	{
		author="Justin N. ";
		hiddenSelections[]=
		{
			"camo",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"ben"
			};
		};
	};
	class H_Simc_Boon_zwart_6: H_Simc_Boon_zwart_1
	{
		author="Justin N. ";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_zwart_7: H_Simc_Boon_zwart_1
	{
		author="Justin N. ";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_Boon_zwart_8: H_Simc_Boon_zwart_1
	{
		author="Justin N. ";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_nv_67\data\boon_vc_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\boon_8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_hat_trop_1: H_Simc_Boon_base
	{
		author="Justin N.";
		scope=2;
		displayName="[US] Hot Weather Cap";
		picture="\simc_uaf_67_preview\icons\cap_hbt_ca.paa";
		model="\simc_uaf_68\hat_trop_1.p3d";
		hiddenSelections[]=
		{
			"cib",
			"air",
			"med"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\hat_trop_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cib",
				"air",
				"med"
			};
		};
	};
	class H_Simc_hat_trop_2: H_Simc_hat_trop_1
	{
		author="Justin N.";
		displayName="[US] Hot Weather Cap";
		hiddenSelections[]=
		{
			"cib",
			"air",
			"med"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\hat_trop_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cib",
				"air",
				"med"
			};
		};
	};
	class H_Simc_hat_trop_cib: H_Simc_hat_trop_1
	{
		author="Justin N.";
		displayName="[US] Hot Weather Cap (CIB)";
		hiddenSelections[]=
		{
			"air",
			"med"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\hat_trop_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"air",
				"med"
			};
		};
	};
	class H_Simc_hat_trop_cib_air: H_Simc_hat_trop_1
	{
		author="Justin N.";
		displayName="[US] Hot Weather Cap (CIB/Airborne)";
		hiddenSelections[]=
		{
			"med"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\hat_trop_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"med"
			};
		};
	};
	class H_Simc_hat_trop_air: H_Simc_hat_trop_1
	{
		author="Justin N.";
		displayName="[US] Hot Weather Cap (Airborne)";
		hiddenSelections[]=
		{
			"cib",
			"med"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\hat_trop_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cib",
				"med"
			};
		};
	};
	class H_Simc_hat_trop_cib_med: H_Simc_hat_trop_1
	{
		author="Justin N.";
		displayName="[US] Hot Weather Cap (CIB/Medic)";
		hiddenSelections[]=
		{
			"air"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\hat_trop_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"air"
			};
		};
	};
	class H_Simc_hat_trop_med: H_Simc_hat_trop_1
	{
		author="Justin N.";
		displayName="[US] Hot Weather Cap (Medic)";
		hiddenSelections[]=
		{
			"cib",
			"air"
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_68\hat_trop_2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cib",
				"air"
			};
		};
	};
	class H_Simc_Hat_Patrol_od7: H_Simc_Boon_base
	{
		author="c/089";
		scope=2;
		displayName="[US] M1951 Field Cap";
		picture="\simc_uaf_81_preview\icons\hat_patrol_od7_ca.paa";
		model="\simc_uaf_69\hat_patrol.p3d";
		hiddenSelections[]=
		{
			"camo",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\hats_od7_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_69\hat_patrol.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"rank"
			};
		};
	};
	class H_Simc_Hat_Patrol_od7_swdg: H_Simc_Hat_Patrol_od7
	{
		author="c/089";
		scope=2;
		displayName="[US] M1951 Field Cap (SWDG)";
		model="\simc_uaf_69\hat_patrol_swdg.p3d";
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_69\hat_patrol_swdg.p3d";
		};
	};
	class H_Simc_Hat_Patrol_od7_swdg_rear: H_Simc_Hat_Patrol_od7
	{
		author="c/089";
		scope=2;
		displayName="[US] M1951 Field Cap (SWDG/Rearwards)";
		model="\simc_uaf_69\hat_patrol_swdg.p3d";
		class ItemInfo: ItemInfo
		{
			mass=5;
			uniformModel="\simc_uaf_69\hat_patrol_swdg_rear.p3d";
		};
	};
	class VestItem;
	class Vest_Camo_Base;
	class V_Simc_67_basic: Vest_Camo_Base
	{
		author="Justin ft. 089";
		scope=1;
		displayName="[US] M1967 LCE";
		model="\simc_uaf_67\belt_56_drop.p3d";
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
			uniformModel="\simc_uaf_67\belt_56.p3d";
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
	class V_Simc_67: V_Simc_67_basic
	{
		author="Justin + Jujurat + Motta + 089";
		scope=2;
		displayName="[US] M1956 LCE/M67";
		model="\simc_uaf_67\belt_56_drop.p3d";
		picture="\simc_uaf_67_preview\icons\belt_56_ca.paa";
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
			uniformModel="\simc_uaf_68\belt_67_1.p3d";
			hiddenSelections[]=
			{
				"botol"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_67_ass: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Buttpack)";
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
			uniformModel="\simc_uaf_68\belt_67_1.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_67_ligt: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Light)";
		hiddenSelections[]=
		{
			"botol",
			"zusp"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_67_1.p3d";
			hiddenSelections[]=
			{
				"botol",
				"zusp"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_67_frag: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Frags)";
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
			uniformModel="\simc_uaf_68\belt_67_2.p3d";
			hiddenSelections[]=
			{
				"botol"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_67_frag_ass: V_Simc_67_frag
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Buttpack/Frags)";
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
			uniformModel="\simc_uaf_68\belt_67_2.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_67_frag_ligt: V_Simc_67_frag
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Light)";
		hiddenSelections[]=
		{
			"botol",
			"zusp"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_67_2.p3d";
			hiddenSelections[]=
			{
				"botol",
				"zusp"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_67_45: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Sidearm)";
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
			uniformModel="\simc_uaf_68\belt_67_45.p3d";
			hiddenSelections[]=
			{
				"botol"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_67_45_ass: V_Simc_67_45
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Sidearm/Buttpack)";
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
			uniformModel="\simc_uaf_68\belt_67_45.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_67_45_ligt: V_Simc_67_45
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US] M1956 LCE/M67 (Sidearm/Light)";
		hiddenSelections[]=
		{
			"botol",
			"zusp"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_67_45.p3d";
			hiddenSelections[]=
			{
				"botol",
				"zusp"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_SF_1: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		scope=2;
		displayName="[US-SF] M1956 LCE";
		model="\simc_uaf_67\belt_56_drop.p3d";
		picture="\simc_uaf_67_preview\icons\belt_56_ca.paa";
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
			uniformModel="\simc_uaf_68\belt_56_SF_1.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_SF_2: V_Simc_SF_1
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US-SF] M1956 LCE";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_56_SF_2.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_SF_3: V_Simc_SF_1
	{
		author="Justin + Jujurat + Motta + TheDude";
		displayName="[US-SF] M1956 LCE/M17";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_69\belt_56_SF_1.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_SF_4: V_Simc_SF_1
	{
		author="Justin + Jujurat + Motta + TheDude";
		displayName="[US-SF] M1956 LCE/M79";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_69\belt_56_SF_2.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_SF_mk56_1: V_Simc_SF_1
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US-SF] M1956 LCE/Mk56 rig";
		model="\simc_nv_67\rig_mk56_drop.p3d";
		picture="\simc_uaf_67_preview\icons\sns_mk56_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_56_SF_mk56_1.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=20;
		};
	};
	class V_Simc_SF_mk56_2: V_Simc_SF_mk56_1
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US-SF] M1956 LCE/Mk56 rig";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_56_SF_mk56_2.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=20;
		};
	};
	class V_Simc_SF_mk56_3: V_Simc_SF_mk56_1
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US-SF] M1956 LCE/Mk56 SKS rig";
		picture="\simc_uaf_67_preview\icons\sns_mk56_sks_ca.paa";
		model="\simc_nv_67\rig_mk56_sks_drop.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_56_SF_mk56_3.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=20;
		};
	};
	class V_Simc_SF_mk56_4: V_Simc_SF_mk56_1
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US-SF] M1956 LCE/Mk56 rig";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_69\belt_56_SF_mk56_1.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=20;
		};
	};
	class V_Simc_SF_mk56_5: V_Simc_SF_mk56_1
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US-SF] M1956 LCE/Mk56 rig/M17";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_69\belt_56_SF_mk56_2.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=20;
		};
	};
	class V_Simc_SF_BAR_1: V_Simc_SF_1
	{
		author="Justin + Jujurat + Motta + 089";
		model="\simc_svn_67\belt_drop_bar.p3d";
		picture="\simc_uaf_67_preview\icons\belt_garlan_ca.paa";
		displayName="[US-SF] M1937 BAR Belt";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_bar_SF.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_SF_BAR_2: V_Simc_SF_BAR_1
	{
		author="Justin + Jujurat + Motta + 089";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_68\belt_bar_SF_2.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_SF_BAR_3: V_Simc_SF_BAR_1
	{
		author="Justin + Jujurat + Motta + 089";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_69\belt_bar_SF.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_SF_BAR_4: V_Simc_SF_BAR_1
	{
		author="Justin + Jujurat + Motta + 089";
		displayName="[US-SF] M1937 BAR Belt/Mk56 rig";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_69\belt_bar_SF_2.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_nadevest: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		scope=2;
		displayName="[US] 40mm Ammo vest";
		model="\simc_uaf_68\vest_nade_drop.p3d";
		picture="\simc_uaf_67_preview\icons\vest_nade_ca.paa";
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
			uniformModel="\simc_uaf_68\vest_nade.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=15;
		};
	};
	class V_Simc_nadevest_56: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		scope=2;
		displayName="[US] 40mm Ammo vest/LCE";
		model="\simc_uaf_68\vest_nade_drop.p3d";
		picture="\simc_uaf_67_preview\icons\vest_nade_ca.paa";
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
			uniformModel="\simc_uaf_68\vest_nade_56.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=15;
		};
	};
	class V_Simc_nadevest_67: V_Simc_67
	{
		author="Justin + Jujurat + Motta + 089";
		scope=2;
		displayName="[US] 40mm Ammo vest/LCE/M67";
		model="\simc_uaf_68\vest_nade_drop.p3d";
		picture="\simc_uaf_67_preview\icons\vest_nade_ca.paa";
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
			uniformModel="\simc_uaf_68\vest_nade_67.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply150";
			mass=15;
		};
	};
	class V_Simc_flak;
	class V_Simc_flak_M69: V_Simc_flak
	{
		class ItemInfo;
	};
	class V_Simc_nadevest_flak: V_Simc_flak_M69
	{
		author="Justin + Jujurat + Motta + 089";
		scope=2;
		displayName="[US] 3/4 Collar/40mm Ammo vest";
		model="\simc_uaf_68\vest_nade_drop.p3d";
		picture="\simc_uaf_67_preview\icons\vest_nade_ca.paa";
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
			uniformModel="\simc_uaf_68\vest_nade_flak.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply180";
			mass=90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class NVGoggles;
	class HeadgearItem;
	class zusp_56_addon: NVGoggles
	{
		author="Brijnvag";
		scope=2;
		displayName="M1956 Suspenders";
		model="\simc_uaf_67\belt_56_drop.p3d";
		picture="\simc_uaf_67_preview\icons\belt_56_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\gear_56_co.paa"
		};
		modelOptics="\A3\Weapons_F\empty";
		visionMode[]=
		{
			"Normal",
			"Normal"
		};
		descriptionShort="American Suspenders (decorative)";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="simc_uaf_68\zusp_56.p3d";
			modelOff="simc_uaf_68\zusp_56.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			mass=15;
		};
	};
	class zusp_56_alt_addon: zusp_56_addon
	{
		author="Brijnvag";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\gear_56_laat_co.paa"
		};
		descriptionShort="American Suspenders (decorative)";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="simc_uaf_68\zusp_56.p3d";
			modelOff="simc_uaf_68\zusp_56.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			mass=15;
		};
	};
	class illegal_canteen_addon: NVGoggles
	{
		author="Brijnvag";
		scope=2;
		displayName="2QT Canteen (1968)";
		model="\simc_uaf_68\illegal_canteen.p3d";
		picture="\simc_uaf_67_preview\icons\illegal_canteen_ca.paa";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		modelOptics="\A3\Weapons_F\empty";
		visionMode[]=
		{
			"Normal",
			"Normal"
		};
		descriptionShort="Illegal Canteen (decorative)";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="simc_uaf_68\illegal_canteen.p3d";
			modelOff="simc_uaf_68\illegal_canteen.p3d";
			hiddenSelections[]=
			{
				""
			};
			mass=15;
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1666176570";
};
