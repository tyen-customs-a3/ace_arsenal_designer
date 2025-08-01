class CfgPatches
{
	class simc_hillbilly_core
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
	class SIMC_men_civ
	{
		displayName="Slackers";
	};
};
class CfgFactionClasses
{
	class Simc_civ
	{
		displayName="slackers";
		author="Simcardo";
		icon="\simc_hillwilliam\icons\factoid_ua_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=3;
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
	class Civilian: CAManBase
	{
	};
	class Civilian_F: Civilian
	{
	};
	class C_man_1: Civilian_F
	{
	};
	class simc_civ_base: C_man_1
	{
		scope=1;
		author="smicdaro";
		side=3;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"Simc_UA67"
		};
		faction="Simc_civ";
		selectionClan="clan";
		genericNames="EnglishMen";
		model="\simc_hillwilliam\jean.p3d";
		modelSides[]={6};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\og107_surf_co.paa",
			"\simc_hillwilliam\data\og107_surf_co.paa",
			"",
			""
		};
		portrait="\simc_uaf_67_preview\potret\sns_wip_co.paa";
		editorPreview="\simc_uaf_67_preview\preview\sns_wip.jpg";
		displayName="Slacker";
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
		uniformClass="U_Simc_surf";
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
			0.2
		};
		LinkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_Boon_green_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="";
		cost=100000;
		accuracy=1.5;
		camouflage=1.8;
		armor=2;
		armorStructural=0.40000001;
		explosionShielding=0.039999999;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_67\data\og107_mk1.rvmat",
				"simc_uaf_67\data\og107_mk1_verwundet.rvmat",
				"simc_uaf_67\data\og107_mk1_verwundet.rvmat",
				"simc_uaf_67\data\og107_mk1.rvmat",
				"simc_uaf_67\data\og107_mk1_verwundet.rvmat",
				"simc_uaf_67\data\og107_mk1_verwundet.rvmat",
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
	class simc_surf: simc_civ_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_civ";
		genericNames="EnglishMen";
		model="\simc_uaf_65\og107_mk1_trop.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
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
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\og107_surf_co.paa",
			"\simc_hillwilliam\data\og107_surf_co.paa",
			"",
			""
		};
	};
	class simc_civ_jean_weiss: simc_civ_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_civ";
		genericNames="EnglishMen";
		model="\simc_hillwilliam\jean_alt.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
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
			"\simc_hillwilliam\data\civ_weiss_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_weiss_trop: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_weiss_tuck: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_tuck_alt.p3d";
	};
	class simc_civ_jean_weiss_tuck_trop: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_tuck_alt_trop.p3d";
	};
	class simc_civ_jean_weiss_dunkel: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_alt.p3d";
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
			"\simc_hillwilliam\data\civ_weiss_dunkel_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_weiss_dunkel_trop: simc_civ_jean_weiss_dunkel
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_weiss_dunkel_tuck: simc_civ_jean_weiss_dunkel
	{
		model="\simc_hillwilliam\jean_tuck.p3d";
	};
	class simc_civ_jean_weiss_dunkel_tuck_trop: simc_civ_jean_weiss_dunkel
	{
		model="\simc_hillwilliam\jean_tuck_trop.p3d";
	};
	class simc_civ_jean_rot: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_alt.p3d";
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
			"\simc_hillwilliam\data\civ_rot_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_rot_trop: simc_civ_jean_rot
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_rot_tuck: simc_civ_jean_rot
	{
		model="\simc_hillwilliam\jean_tuck_alt.p3d";
	};
	class simc_civ_jean_rot_tuck_trop: simc_civ_jean_rot
	{
		model="\simc_hillwilliam\jean_tuck_trop.p3d";
	};
	class simc_civ_jean_rot_ligt: simc_civ_jean_rot
	{
		model="\simc_hillwilliam\jean_alt.p3d";
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
			"\simc_hillwilliam\data\civ_rot_ligt_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_rot_ligt_trop: simc_civ_jean_rot_ligt
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_rot_ligt_tuck: simc_civ_jean_rot_ligt
	{
		model="\simc_hillwilliam\jean_tuck_alt.p3d";
	};
	class simc_civ_jean_rot_ligt_tuck_trop: simc_civ_jean_rot_ligt
	{
		model="\simc_hillwilliam\jean_tuck_alt_trop.p3d";
	};
	class simc_civ_jean_blau: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_alt.p3d";
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
			"\simc_hillwilliam\data\civ_blau_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_blau_trop: simc_civ_jean_blau
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_blau_tuck: simc_civ_jean_blau
	{
		model="\simc_hillwilliam\jean_tuck_alt.p3d";
	};
	class simc_civ_jean_blau_tuck_trop: simc_civ_jean_blau
	{
		model="\simc_hillwilliam\jean_tuck_alt_trop.p3d";
	};
	class simc_civ_jean_blau_dunkel: simc_civ_jean_blau
	{
		model="\simc_hillwilliam\jean_alt.p3d";
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
			"\simc_hillwilliam\data\civ_blau_dunkel_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_blau_dunkel_trop: simc_civ_jean_blau_dunkel
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_blau_dunkel_tuck: simc_civ_jean_blau_dunkel
	{
		model="\simc_hillwilliam\jean_tuck.p3d";
	};
	class simc_civ_jean_blau_dunkel_tuck_trop: simc_civ_jean_blau_dunkel
	{
		model="\simc_hillwilliam\jean_tuck_alt_trop.p3d";
	};
	class simc_civ_jean_khk: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_alt.p3d";
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
			"\simc_hillwilliam\data\civ_khk_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_khk_trop: simc_civ_jean_khk
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_khk_tuck: simc_civ_jean_khk
	{
		model="\simc_hillwilliam\jean_tuck.p3d";
	};
	class simc_civ_jean_khk_tuck_trop: simc_civ_jean_khk
	{
		model="\simc_hillwilliam\jean_tuck_trop.p3d";
	};
	class simc_civ_jean_grun: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_alt.p3d";
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
			"\simc_hillwilliam\data\civ_grun_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_civ_jean_grun_trop: simc_civ_jean_grun
	{
		model="\simc_hillwilliam\jean_trop.p3d";
	};
	class simc_civ_jean_grun_tuck: simc_civ_jean_grun
	{
		model="\simc_hillwilliam\jean_tuck_alt.p3d";
	};
	class simc_civ_jean_grun_tuck_trop: simc_civ_jean_grun
	{
		model="\simc_hillwilliam\jean_tuck_alt_trop.p3d";
	};
	class simc_civ_jean_VTN_trop: simc_civ_jean_weiss
	{
		model="\simc_hillwilliam\jean_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"clan",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_vtn_khk_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"\simc_uaf_67_ranks\patches\US_SFC_ca.paa",
			"\simc_uaf_67\patches\173ab_sub_ca.paa",
			"\simc_uaf_67\patches\nom_mook_ca.paa",
			""
		};
	};
	class simc_civ_jean_VTN_tuck_trop: simc_civ_jean_VTN_trop
	{
		model="\simc_hillwilliam\jean_tuck_alt_trop.p3d";
	};
	class simc_civ_jean_VTN_sub_trop: simc_civ_jean_VTN_trop
	{
		model="\simc_hillwilliam\jean_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"clan",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_vtn_jean_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"\simc_uaf_67_ranks\patches\US_SFC_sub_ca.paa",
			"\simc_uaf_67\patches\23id_sub_ca.paa",
			"\simc_uaf_67\patches\nom_crease_ca.paa",
			""
		};
	};
	class simc_civ_jean_VTN_sub_tuck_trop: simc_civ_jean_VTN_sub_trop
	{
		model="\simc_hillwilliam\jean_tuck_alt_trop.p3d";
	};
	class simc_swetr_base: simc_civ_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_civ";
		genericNames="EnglishMen";
		model="\simc_hillwilliam\swetr1.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\og107_surf_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			""
		};
	};
	class simc_swetr1: simc_swetr_base
	{
		scope=1;
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_089_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_trop: simc_swetr1
	{
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_089_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_amogus: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_amogus_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_amogus_trop: simc_swetr1_amogus
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_amogus_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_felix: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_felix_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_felix_trop: simc_swetr1_felix
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_felix_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_floyd: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_floyd_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_floyd_trop: simc_swetr1_floyd
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_floyd_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_geef: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_geef_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_geef_trop: simc_swetr1_geef
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_geef_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_ghoat: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ghoat_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_ghoat_trop: simc_swetr1_ghoat
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ghoat_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_grune: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_grune_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_grune_trop: simc_swetr1_grune
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_grune_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_leven: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_leven_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_leven_trop: simc_swetr1_leven
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_leven_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_mcod: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_mcod_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_mcod_trop: simc_swetr1_mcod
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_mcod_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_mcrd: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_mcrd_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_mcrd_trop: simc_swetr1_mcrd
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_mcrd_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_ninamori: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ninamori_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_ninamori_trop: simc_swetr1_ninamori
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ninamori_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_simc: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_simc_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_simc_trop: simc_swetr1_simc
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_simc_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_suka: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_suka_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_suka_trop: simc_swetr1_suka
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_suka_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_UA: simc_swetr1
	{
		author="smicdaro";
		model="\simc_hillwilliam\swetr1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ua_co.paa",
			"\simc_hillwilliam\data\obr_69_jean_co.paa",
			"",
			"",
			""
		};
	};
	class simc_swetr1_UA_trop: simc_swetr1_UA
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"collau"
		};
		model="\simc_hillwilliam\swetr1_trop.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ua_co.paa",
			"\simc_hillwilliam\data\obr_69_lows_co.paa",
			"",
			"",
			""
		};
	};
	class Item_Base_F;
	class Item_U_simc_surf: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Hawaii Shirt";
		author="SmithcarDAK";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_simc_surf
			{
				name="U_simc_surf";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_weiss: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Casual Clothes";
		author="SmithcarDAK";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_simc_civ_jean_weiss
			{
				name="U_simc_civ_jean_weiss";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_weiss_dunkel: Item_U_simc_civ_jean_weiss
	{
		displayName="Casual Clothes";
		author="SmithcarDAK";
		class TransportItems
		{
			class U_simc_civ_jean_weiss_dunkel_trop
			{
				name="U_simc_civ_jean_weiss_dunkel_trop";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_rot: Item_U_simc_civ_jean_weiss
	{
		displayName="Casual Clothes";
		author="SmithcarDAK";
		class TransportItems
		{
			class U_simc_civ_jean_rot_tuck_trop
			{
				name="U_simc_civ_jean_rot_tuck_trop";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_rot_ligt: Item_U_simc_civ_jean_weiss
	{
		displayName="Casual Clothes";
		author="SmithcarDAK";
		class TransportItems
		{
			class U_simc_civ_jean_rot_ligt
			{
				name="U_simc_civ_jean_rot_ligt";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_blau: Item_U_simc_civ_jean_weiss
	{
		displayName="Casual Clothes";
		author="SmithcarDAK";
		class TransportItems
		{
			class U_simc_civ_jean_blau_trop
			{
				name="U_simc_civ_jean_blau_trop";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_blau_dunkel: Item_U_simc_civ_jean_weiss
	{
		displayName="Casual Clothes";
		author="SmithcarDAK";
		class TransportItems
		{
			class U_simc_civ_jean_blau_dunkel_tuck_trop
			{
				name="U_simc_civ_jean_blau_dunkel_tuck_trop";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_khk: Item_U_simc_civ_jean_weiss
	{
		displayName="Casual Clothes";
		author="SmithcarDAK";
		class TransportItems
		{
			class U_simc_civ_jean_khk_tuck
			{
				name="U_simc_civ_jean_khk_tuck";
				count=1;
			};
		};
	};
	class Item_U_simc_civ_jean_grun: Item_U_simc_civ_jean_weiss
	{
		displayName="Casual Clothes";
		author="SmithcarDAK";
		class TransportItems
		{
			class U_simc_civ_jean_grun
			{
				name="U_simc_civ_jean_grun_trop";
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
	class U_simc_surf: U_Simc_67_BasicBody
	{
		author="Barden";
		scope=2;
		displayName="Hawaii shirt";
		model="\simc_uaf_65\suitpack_og107.p3d";
		modelSides[]={6};
		picture="\simc_hillwilliam\icons\surf_ca.paa";
		descriptionShort="Clothes, Casual, Hawaii Flower Pattern, Cyan";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\og107_surf_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_surf";
		};
	};
	class U_simc_civ_jean_weiss: U_Simc_67_BasicBody
	{
		author="Dopest Ghast in stad";
		scope=2;
		displayName="Casual Clothes (Flannel)";
		model="\simc_uaf_65\suitpack_og107.p3d";
		modelSides[]={6};
		picture="\simc_hillwilliam\icons\civ_weiss_ca.paa";
		descriptionShort="Clothes, Casual, Flannel";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_weiss_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss";
		};
	};
	class U_simc_civ_jean_weiss_trop: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss_trop";
		};
	};
	class U_simc_civ_jean_weiss_tuck: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss_tuck";
		};
	};
	class U_simc_civ_jean_weiss_tuck_trop: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss_tuck_trop";
		};
	};
	class U_simc_civ_jean_weiss_dunkel: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Casual Clothes (Flannel)";
		picture="\simc_hillwilliam\icons\civ_weiss_dunkel_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_weiss_dunkel_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss_dunkel";
		};
	};
	class U_simc_civ_jean_weiss_dunkel_trop: U_simc_civ_jean_weiss_dunkel
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss_dunkel_trop";
		};
	};
	class U_simc_civ_jean_weiss_dunkel_tuck: U_simc_civ_jean_weiss_dunkel
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss_dunkel_tuck";
		};
	};
	class U_simc_civ_jean_weiss_dunkel_tuck_trop: U_simc_civ_jean_weiss_dunkel
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_weiss_dunkel_tuck_trop";
		};
	};
	class U_simc_civ_jean_rot: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Casual Clothes (Flannel)";
		picture="\simc_hillwilliam\icons\civ_rot_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_rot_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot";
		};
	};
	class U_simc_civ_jean_rot_trop: U_simc_civ_jean_rot
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot_trop";
		};
	};
	class U_simc_civ_jean_rot_tuck: U_simc_civ_jean_rot
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot_tuck";
		};
	};
	class U_simc_civ_jean_rot_tuck_trop: U_simc_civ_jean_rot
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot_tuck_trop";
		};
	};
	class U_simc_civ_jean_rot_ligt: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Casual Clothes (Flannel)";
		picture="\simc_hillwilliam\icons\civ_rot_ligt_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_rot_ligt_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot_ligt";
		};
	};
	class U_simc_civ_jean_rot_ligt_trop: U_simc_civ_jean_rot_ligt
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot_ligt_trop";
		};
	};
	class U_simc_civ_jean_rot_ligt_tuck: U_simc_civ_jean_rot_ligt
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot_ligt_tuck";
		};
	};
	class U_simc_civ_jean_rot_ligt_tuck_trop: U_simc_civ_jean_rot_ligt
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_rot_ligt_tuck_trop";
		};
	};
	class U_simc_civ_jean_blau: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Casual Clothes (Flannel)";
		picture="\simc_hillwilliam\icons\civ_blau_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_blau_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau";
		};
	};
	class U_simc_civ_jean_blau_trop: U_simc_civ_jean_blau
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau_trop";
		};
	};
	class U_simc_civ_jean_blau_tuck: U_simc_civ_jean_blau
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau_tuck";
		};
	};
	class U_simc_civ_jean_blau_tuck_trop: U_simc_civ_jean_blau
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau_tuck_trop";
		};
	};
	class U_simc_civ_jean_blau_dunkel: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Casual Clothes (Blue)";
		picture="\simc_hillwilliam\icons\civ_blau_dunkel_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_blau_dunkel_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau_dunkel";
		};
	};
	class U_simc_civ_jean_blau_dunkel_trop: U_simc_civ_jean_blau_dunkel
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau_dunkel_trop";
		};
	};
	class U_simc_civ_jean_blau_dunkel_tuck: U_simc_civ_jean_blau_dunkel
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau_dunkel_tuck";
		};
	};
	class U_simc_civ_jean_blau_dunkel_tuck_trop: U_simc_civ_jean_blau_dunkel
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_blau_dunkel_tuck_trop";
		};
	};
	class U_simc_civ_jean_khk: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Casual Clothes (Grey)";
		picture="\simc_hillwilliam\icons\civ_khk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_khk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_khk";
		};
	};
	class U_simc_civ_jean_khk_trop: U_simc_civ_jean_khk
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_khk_trop";
		};
	};
	class U_simc_civ_jean_khk_tuck: U_simc_civ_jean_khk
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_khk_tuck";
		};
	};
	class U_simc_civ_jean_khk_tuck_trop: U_simc_civ_jean_khk
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_khk_tuck_trop";
		};
	};
	class U_simc_civ_jean_grun: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Casual Clothes (Flannel)";
		picture="\simc_hillwilliam\icons\civ_grun_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_grun_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_grun";
		};
	};
	class U_simc_civ_jean_grun_trop: U_simc_civ_jean_grun
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_grun_trop";
		};
	};
	class U_simc_civ_jean_grun_tuck: U_simc_civ_jean_grun
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_grun_tuck";
		};
	};
	class U_simc_civ_jean_grun_tuck_trop: U_simc_civ_jean_grun
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_grun_tuck_trop";
		};
	};
	class U_simc_civ_jean_VTN_trop: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Disgruntled Vietnam Veteran";
		picture="\simc_uaf_67_preview\icons\og107_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_vtn_khk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_VTN_trop";
		};
	};
	class U_simc_civ_jean_VTN_tuck_trop: U_simc_civ_jean_VTN_trop
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_VTN_tuck_trop";
		};
	};
	class U_simc_civ_jean_VTN_sub_trop: U_simc_civ_jean_weiss
	{
		author="Dopest Ghast in stad";
		displayName="Disgruntled Vietnam Veteran";
		picture="\simc_uaf_67_preview\icons\og107_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\civ_vtn_jean_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_VTN_sub_trop";
		};
	};
	class U_simc_civ_jean_VTN_sub_tuck_trop: U_simc_civ_jean_VTN_sub_trop
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_civ_jean_VTN_sub_tuck_trop";
		};
	};
	class U_simc_swetr1: U_Simc_67_BasicBody
	{
		author="C/089";
		scope=2;
		displayName="Casual Sweater (C/089)";
		model="\simc_hillwilliam\suitpack_swetr1.p3d";
		picture="\simc_hillwilliam\icons\swetr1_089_ca.paa";
		descriptionShort="Clothes, Casual, Sweater";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_089_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1";
		};
	};
	class U_simc_swetr1_trop: U_simc_swetr1
	{
		author="C/089";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_trop";
		};
	};
	class U_simc_swetr1_amogus: U_simc_swetr1
	{
		author="Dopest Ghast in stad";
		displayName="Casual Sweater (Amogus)";
		picture="\simc_hillwilliam\icons\swetr1_amogus_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_amogus_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_amogus";
		};
	};
	class U_simc_swetr1_amogus_trop: U_simc_swetr1_amogus
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_amogus_trop";
		};
	};
	class U_simc_swetr1_felix: U_simc_swetr1
	{
		author="me_irl";
		displayName="Casual Sweater (felix)";
		picture="\simc_hillwilliam\icons\swetr1_felix_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_felix_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_felix";
		};
	};
	class U_simc_swetr1_felix_trop: U_simc_swetr1_felix
	{
		author="me_irl";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_felix_trop";
		};
	};
	class U_simc_swetr1_floyd: U_simc_swetr1
	{
		author="Dopest Ghast in stad";
		displayName="Casual Sweater (Pink Floyd)";
		picture="\simc_hillwilliam\icons\swetr1_floyd_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_floyd_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_floyd";
		};
	};
	class U_simc_swetr1_floyd_trop: U_simc_swetr1_floyd
	{
		author="nil-acht-neun";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_floyd_trop";
		};
	};
	class U_simc_swetr1_geef: U_simc_swetr1
	{
		author="nil-acht-neun";
		displayName="Casual Sweater (Geef op)";
		picture="\simc_hillwilliam\icons\swetr1_felix_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_geef_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_geef";
		};
	};
	class U_simc_swetr1_geef_trop: U_simc_swetr1_geef
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_geef_trop";
		};
	};
	class U_simc_swetr1_ghoat: U_simc_swetr1
	{
		author="nil-acht-neun";
		displayName="Casual Sweater (Ghostbuster)";
		picture="\simc_hillwilliam\icons\swetr1_ghoat_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ghoat_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_ghoat";
		};
	};
	class U_simc_swetr1_ghoat_trop: U_simc_swetr1_ghoat
	{
		author="Dopest Ghast in stad";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_ghoat_trop";
		};
	};
	class U_simc_swetr1_grune: U_simc_swetr1
	{
		author="the grass";
		displayName="Casual Sweater (Green)";
		picture="\simc_hillwilliam\icons\swetr1_grune_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_grune_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_grune";
		};
	};
	class U_simc_swetr1_grune_trop: U_simc_swetr1_grune
	{
		author="the grass";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_grune_trop";
		};
	};
	class U_simc_swetr1_leven: U_simc_swetr1
	{
		author="vagina engineer";
		displayName="Casual Sweater (leven)";
		picture="\simc_hillwilliam\icons\swetr1_leven_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_leven_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_leven";
		};
	};
	class U_simc_swetr1_leven_trop: U_simc_swetr1_leven
	{
		author="vagina engineer";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_leven_trop";
		};
	};
	class U_simc_swetr1_mcod: U_simc_swetr1
	{
		author="brain fag grass";
		displayName="Casual Sweater (MC)";
		picture="\simc_hillwilliam\icons\swetr1_mcod_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_mcod_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_mcod";
		};
	};
	class U_simc_swetr1_mcod_trop: U_simc_swetr1_mcod
	{
		author="brain fag  grass";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_mcod_trop";
		};
	};
	class U_simc_swetr1_mcrd: U_simc_swetr1
	{
		author="brain fag grass";
		displayName="Casual Sweater (MC)";
		picture="\simc_hillwilliam\icons\swetr1_mcrd_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_mcrd_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_mcrd";
		};
	};
	class U_simc_swetr1_mcrd_trop: U_simc_swetr1_mcrd
	{
		author="brain fag grass";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_mcrd_trop";
		};
	};
	class U_simc_swetr1_ninamori: U_simc_swetr1
	{
		author="brain fag grass";
		displayName="Casual Sweater (ninamori)";
		picture="\simc_hillwilliam\icons\swetr1_simc_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ninamori_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_ninamori";
		};
	};
	class U_simc_swetr1_ninamori_trop: U_simc_swetr1_ninamori
	{
		author="brain fag grass";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_ninamori_trop";
		};
	};
	class U_simc_swetr1_simc: U_simc_swetr1
	{
		author="smithcardoge";
		displayName="Casual Sweater (Stemboot Wilhelm)";
		picture="\simc_hillwilliam\icons\swetr1_simc_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_simc_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_simc";
		};
	};
	class U_simc_swetr1_simc_trop: U_simc_swetr1_simc
	{
		author="smithcardog";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_simc_trop";
		};
	};
	class U_simc_swetr1_suka: U_simc_swetr1
	{
		author="casper_tfg";
		displayName="Casual Sweater (suka)";
		picture="\simc_hillwilliam\icons\swetr1_suka_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_suka_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_suka";
		};
	};
	class U_simc_swetr1_suka_trop: U_simc_swetr1_suka
	{
		author="casper_tfg";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_suka_trop";
		};
	};
	class U_simc_swetr1_ua: U_simc_swetr1
	{
		author="Vagineer089";
		displayName="Casual Sweater (Armija)";
		picture="\simc_hillwilliam\icons\swetr1_ua_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\simc_hillwilliam\data\swetr1_ua_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_ua";
		};
	};
	class U_simc_swetr1_ua_trop: U_simc_swetr1_ua
	{
		author="Vagineer089";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_swetr1_ua_trop";
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1717086301";
};
