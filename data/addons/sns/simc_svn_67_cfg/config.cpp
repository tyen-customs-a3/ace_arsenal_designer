class CfgPatches
{
	class simc_svn_67_core
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"simc_svn_67_assets"
		};
	};
};
class CfgFactionClasses
{
	class Simc_SVN_65
	{
		displayName="ARVN (65)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=1;
	};
	class Simc_SVN_67
	{
		displayName="ARVN (68)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=1;
	};
	class Simc_SVN_69
	{
		displayName="ARVN (69)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=1;
	};
};
class CfgEditorSubcategories
{
	class SIMC_men_og107
	{
		displayName="Men (OG107)";
	};
	class SIMC_men_TS
	{
		displayName="Men (Tiger)";
	};
	class SIMC_men_BDQ
	{
		displayName="Men (BDQ)";
	};
	class SIMC_men_erdl
	{
		displayName="Men (ERDL)";
	};
};
class CfgGlasses
{
	class None;
	class G_claysack: None
	{
		author="Brijnvag";
		scope=2;
		displayName="M7 Claymore Bandoleer";
		model="\simc_svn_67\claysac.p3d";
		picture="\simc_uaf_67_preview\icons\claysac_ca.paa";
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
			"Simc_UA67",
			0.30000001
		};
	};
	class G_claysack_flak: G_claysack
	{
		author="Brijnvag";
		scope=2;
		displayName="(Flak) M7 Claymore Bandoleer";
		model="\simc_svn_67\claysac_flak.p3d";
		identityTypes[]=
		{
			"Simc_UA67",
			0
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
	class simc_svn_67_base: B_Soldier_base_F
	{
		scope=1;
		author="smicdaro";
		side=1;
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"LIB_Glasses",
			"Simc_UA42"
		};
		faction="Simc_SVN_67";
		selectionClan="clan";
		genericNames="EnglishMen";
		model="\simc_svn_67\TS.p3d";
		modelSides[]={6};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_co.paa",
			"\simc_svn_67\data\arvn_co.paa",
			""
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
		uniformClass="U_Simc_TCU_mk3_blench";
		headgearProbability=100;
		headgearList[]=
		{
			"H_Simc_SVN_M1_op",
			1,
			"H_Simc_SVN_M1_ns",
			1,
			"H_Simc_SVN_M1_Cl",
			1,
			"H_Simc_SVN_M1_net_Op",
			1,
			"H_Simc_SVN_M1_net_ns",
			1,
			"H_Simc_SVN_M1_net_ben",
			1,
			"H_Simc_SVN_M1_ifak",
			1,
			"H_Simc_SVN_M1_ifak_Cl",
			1,
			"H_Simc_SVN_M1_ifak_Op",
			1,
			"H_Simc_SVN_M1_ben_ns",
			1,
			"H_Simc_SVN_M1_ben_Op",
			1
		};
		linkedItems[]=
		{
			"H_Simc_SVN_M1_ns",
			"V_Simc_56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_SVN_M1_ns",
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
		class PlateInfos
		{
			name="nom";
			color[]={0,0,0,0.89999998};
			plateFont="PuristaSemiBold";
			plateFormat="GAY####";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
	};
	class simc_arvn_og107: simc_svn_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_SVN_65";
		uniformClass="U_Simc_arvn_og107";
		model="\simc_svn_67\TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_co.paa",
			"\simc_svn_67\data\arvn_co.paa",
			"",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_SVN_M1_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_SVN_M1_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
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
	class simc_arvn_og107_trop: simc_arvn_og107
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_og107_trop";
		model="\simc_svn_67\TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_co.paa",
			"\simc_svn_67\data\arvn_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_og107_tuck: simc_arvn_og107
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_og107_tuck";
		model="\simc_svn_67\TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_co.paa",
			"\simc_svn_67\data\arvn_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_og107_tuck_trop: simc_arvn_og107_tuck
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_og107_tuck_trop";
		model="\simc_svn_67\TS_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_co.paa",
			"\simc_svn_67\data\arvn_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_OD7: simc_arvn_og107
	{
		scope=1;
		author="smicdaro";
		faction="Simc_SVN_67";
		uniformClass="U_Simc_arvn_OD7";
		model="\simc_svn_67\rvn.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"",
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
	class simc_arvn_OD7_trop: simc_arvn_OD7
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_OD7_trop";
		model="\simc_svn_67\rvn_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_OD7_tuck: simc_arvn_OD7
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_OD7_tuck";
		model="\simc_svn_67\rvn_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_OD7_tuck_trop: simc_arvn_OD7_tuck
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_OD7_tuck_trop";
		model="\simc_svn_67\rvn_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"\simc_uaf_68\data\SF_TS_OD7_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_BDQ: simc_arvn_og107
	{
		scope=1;
		author="smicdaro";
		faction="Simc_SVN_67";
		uniformClass="U_Simc_arvn_BDQ";
		model="\simc_svn_67\TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_BDQ_trop: simc_arvn_BDQ
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_BDQ_trop";
		model="\simc_svn_67\TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_BDQ_tuck: simc_arvn_BDQ
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_BDQ_tuck";
		model="\simc_svn_67\TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_BDQ_tuck_trop: simc_arvn_BDQ_tuck
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_BDQ_tuck_trop";
		model="\simc_svn_67\TS_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"\simc_svn_67\data\arvn_erdl_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_low: simc_arvn_og107
	{
		scope=1;
		author="smicdaro";
		faction="Simc_SVN_67";
		uniformClass="U_Simc_arvn_ERDL_low";
		model="\simc_svn_67\TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_low_trop: simc_arvn_ERDL_low
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_ERDL_low_trop";
		model="\simc_svn_67\TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_low_tuck: simc_arvn_ERDL_low
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_ERDL_low_tuck";
		model="\simc_svn_67\TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_low_tuck_trop: simc_arvn_ERDL_low_tuck
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_ERDL_low_tuck_trop";
		model="\simc_svn_67\TS_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"\simc_svn_67\data\arvn_erdl_low_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_invis: simc_arvn_og107
	{
		scope=1;
		author="smicdaro";
		faction="Simc_SVN_67";
		uniformClass="U_Simc_arvn_ERDL_invis";
		model="\simc_svn_67\TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_invis_trop: simc_arvn_ERDL_invis
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_ERDL_invis_trop";
		model="\simc_svn_67\TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_invis_tuck: simc_arvn_ERDL_invis
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_ERDL_invis_tuck";
		model="\simc_svn_67\TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_ERDL_invis_tuck_trop: simc_arvn_ERDL_invis_tuck
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_ERDL_invis_tuck_trop";
		model="\simc_svn_67\TS_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"\simc_svn_67\data\arvn_erdl_invis_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_DerFrosch: simc_arvn_og107
	{
		scope=1;
		author="smicdaro";
		faction="Simc_SVN_67";
		uniformClass="U_Simc_arvn_DerFrosch";
		model="\simc_svn_67\TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_DerFrosch_trop: simc_arvn_DerFrosch
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_DerFrosch_trop";
		model="\simc_svn_67\TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_DerFrosch_tuck: simc_arvn_DerFrosch
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_DerFrosch_tuck";
		model="\simc_svn_67\TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_DerFrosch_tuck_trop: simc_arvn_DerFrosch_tuck
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_DerFrosch_tuck_trop";
		model="\simc_svn_67\TS_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"\simc_svn_67\data\arvn_frosch_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_TS: simc_arvn_og107
	{
		scope=1;
		author="smicdaro";
		faction="Simc_SVN_67";
		uniformClass="U_Simc_arvn_TS";
		model="\simc_svn_67\TS.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_TS_trop: simc_arvn_TS
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_TS_trop";
		model="\simc_svn_67\TS_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_TS_tuck: simc_arvn_TS
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_TS_tuck";
		model="\simc_svn_67\TS_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"",
			"",
			""
		};
	};
	class simc_arvn_TS_tuck_trop: simc_arvn_TS_tuck
	{
		author="smicdaro";
		uniformClass="U_Simc_arvn_TS_tuck_trop";
		model="\simc_svn_67\TS_tuck_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_1_co.paa",
			"\simc_svn_67\data\arvn_TS_2_co.paa",
			"",
			"",
			""
		};
	};
	class B_AssaultPack_rgr;
	class B_simc_ARVN_ruck_base: B_AssaultPack_rgr
	{
		displayName="[ARVN] Rucksack";
		author="Smicradeu";
		scope=1;
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
		model="\simc_svn_67\paket_arvn_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\sack_arwk_ca.paa";
		maximumLoad=200;
		mass=80;
	};
	class B_claymore_sack: B_AssaultPack_rgr
	{
		displayName="[US] M7 Claymore Bandoleer";
		author="Smicradeu";
		scope=2;
		descriptionShort="Bandolier, M18 Claymore, M7";
		model="\simc_svn_67\claysac.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\claysac_ca.paa";
		maximumLoad=80;
		mass=30;
	};
	class B_claymore_sack_flak: B_claymore_sack
	{
		author="Smicradeu";
		displayName="[US/Flak] M7 Claymore Bandoleer";
		descriptionShort="Bandolier, M18 Claymore, M7";
		model="\simc_svn_67\claysac_flak.p3d";
	};
	class B_simc_ARVN_ruck_1: B_simc_ARVN_ruck_base
	{
		displayName="[ARVN] Rucksack";
		scope=2;
		author="Schoifets";
		model="\simc_svn_67\paket_arvn_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_ruck_rajio: B_simc_ARVN_ruck_1
	{
		author="Schoifets";
		displayName="[ARVN] Rucksack (PRC)";
		model="\simc_uaf_69\paket_arvn_rajio.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_ruck_rajio_empty: B_simc_ARVN_ruck_rajio
	{
		author="Schoifets";
		hiddenSelections[]=
		{
			"extras"
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_ruck_empty: B_simc_ARVN_ruck_1
	{
		author="Schoifets";
		model="\simc_svn_67\paket_arvn_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_ruck_2: B_simc_ARVN_ruck_1
	{
		author="Schoifets";
		model="\simc_svn_67\paket_arvn_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_ruck_3: B_simc_ARVN_ruck_1
	{
		author="Schoifets";
		model="\simc_svn_67\paket_arvn_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_ruck_M43_1: B_simc_ARVN_ruck_1
	{
		displayName="[ARVN] Rucksack (M43)";
		model="\simc_svn_67\paket_arvn_M43_1.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_ruck_M43_2: B_simc_ARVN_ruck_M43_1
	{
		model="\simc_svn_67\paket_arvn_M43_2.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_ruck_M43_3: B_simc_ARVN_ruck_M43_1
	{
		model="\simc_svn_67\paket_arvn_M43_3.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_ruck_M43_casque: B_simc_ARVN_ruck_1
	{
		displayName="[ARVN] Rucksack (M43/Helmet)";
		model="\simc_svn_67\paket_arvn_M43_cask.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_ruck_gump: B_simc_ARVN_ruck_1
	{
		displayName="[US] ARVN Rucksack (M43)";
		author="Schoifets";
		model="\simc_svn_67\paket_arvn_gump.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_ruck_sheen: B_simc_ARVN_ruck_1
	{
		displayName="[US] ARVN Rucksack (M43)";
		author="Schoifets";
		model="\simc_svn_67\paket_arvn_sheen.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_1: B_simc_ARVN_ruck_base
	{
		displayName="[ARVN/Flak] Rucksack";
		scope=2;
		author="Schoifets";
		model="\simc_svn_67\paket_ARVN_flak_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_empty: B_simc_ARVN_flak_ruck_1
	{
		author="Schoifets";
		model="\simc_svn_67\paket_ARVN_flak_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_rajio: B_simc_ARVN_flak_ruck_1
	{
		author="Schoifets";
		displayName="[ARVN/Flak] Rucksack (PRC)";
		model="\simc_uaf_69\paket_arvn_flak_rajio.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_rajio_empty: B_simc_ARVN_flak_ruck_rajio
	{
		author="Schoifets";
		hiddenSelections[]=
		{
			"extras"
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_2: B_simc_ARVN_flak_ruck_1
	{
		author="Schoifets";
		model="\simc_svn_67\paket_ARVN_flak_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_3: B_simc_ARVN_flak_ruck_1
	{
		author="Schoifets";
		model="\simc_svn_67\paket_ARVN_flak_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_M43_1: B_simc_ARVN_flak_ruck_1
	{
		displayName="[ARVN/Flak] Rucksack (M43)";
		model="\simc_svn_67\paket_ARVN_flak_M43_1.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_flak_ruck_M43_2: B_simc_ARVN_flak_ruck_M43_1
	{
		model="\simc_svn_67\paket_ARVN_flak_M43_2.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_flak_ruck_M43_3: B_simc_ARVN_flak_ruck_M43_1
	{
		model="\simc_svn_67\paket_ARVN_flak_M43_3.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_flak_ruck_M43_casque: B_simc_ARVN_flak_ruck_1
	{
		displayName="[ARVN/Flak] Rucksack (M43/Helmet)";
		model="\simc_svn_67\paket_ARVN_flak_M43_cask.p3d";
		author="Smicradeu";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_ARVN_flak_ruck_gump: B_simc_ARVN_flak_ruck_1
	{
		displayName="[US/Flak] ARVN Rucksack (M43)";
		author="Schoifets";
		model="\simc_svn_67\paket_ARVN_flak_gump.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_ARVN_flak_ruck_sheen: B_simc_ARVN_flak_ruck_1
	{
		displayName="[US/Flak] ARVN Rucksack (M43)";
		author="Schoifets";
		model="\simc_svn_67\paket_ARVN_flak_sheen.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="Rucksack, Tropical, Indigeneous Ranger";
	};
	class B_simc_packboard_MG_1: B_simc_ARVN_ruck_base
	{
		displayName="[US] Packboard (Ammo)";
		author="Schoifets";
		scope=2;
		model="\simc_svn_67\packboard_MG_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ Munitions";
		picture="\simc_uaf_67_preview\icons\packboard_ca.paa";
		maximumLoad=250;
		mass=120;
	};
	class B_simc_packboard_MG_2: B_simc_packboard_MG_1
	{
		author="Schoifets";
		model="\simc_svn_67\packboard_MG_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ Munitions";
	};
	class B_simc_packboard_roket_1: B_simc_packboard_MG_1
	{
		author="Schoifets";
		displayName="[US] Packboard (Rockets)";
		model="\simc_svn_67\packboard_roket_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ Munitions";
	};
	class B_simc_packboard_roket_2: B_simc_packboard_roket_1
	{
		author="Schoifets";
		model="\simc_svn_67\packboard_roket_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ Munitions";
	};
	class B_simc_packboard_mortar_1: B_simc_packboard_MG_1
	{
		displayName="[US] Packboard (Ordnance)";
		author="Schoifets";
		model="\simc_svn_67\packboard_mortar_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ Munitions";
	};
	class B_simc_packboard_rajio_base: B_AssaultPack_rgr
	{
		displayName="[US] Packboard/ AN/PRC25";
		author="Petr Svenda, ashton324";
		scope=1;
		descriptionShort="1945-Packboard w/ AN/PRC-25";
		model="\simc_svn_67\packboard_rajio_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\packboard_ca.paa";
		maximumLoad=50;
		mass=90;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_range=20000;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		class TransportItems
		{
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=1;
			};
			class _xx_SmokeShellRed
			{
				name="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				name="SmokeShellGreen";
				count=1;
			};
		};
	};
	class B_simc_packboard_rajio_1: B_simc_packboard_rajio_base
	{
		author="Petr Svenda, ashton324";
		scope=2;
		model="\simc_svn_67\packboard_rajio_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ AN/PRC-25";
		maximumLoad=60;
		mass=100;
	};
	class B_simc_packboard_rajio_1_B: B_simc_packboard_rajio_1
	{
		author="Petr Svenda, ashton324";
		displayName="[US] Packboard/ AN/PRC25 (Bandoleer)";
		model="\simc_svn_67\packboard_rajio_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ AN/PRC-25";
		maximumLoad=120;
		mass=120;
	};
	class B_simc_packboard_rajio_2: B_simc_packboard_rajio_1
	{
		author="Petr Svenda, ashton324";
		model="\simc_svn_67\packboard_rajio_2.p3d";
		maximumLoad=60;
		mass=90;
	};
	class B_simc_packboard_rajio_3: B_simc_packboard_rajio_2
	{
		author="Petr Svenda, ashton324";
		model="\simc_svn_67\packboard_rajio_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=40;
		mass=80;
	};
	class B_simc_packboard_flak_MG_1: B_simc_packboard_MG_1
	{
		displayName="[US/Flak] Packboard (Ammo)";
		author="Schoifets";
		scope=2;
		model="\simc_svn_67\packboard_flak_MG_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-packboard w/ Munitions";
		maximumLoad=250;
		mass=120;
	};
	class B_simc_packboard_flak_MG_2: B_simc_packboard_flak_MG_1
	{
		author="Schoifets";
		model="\simc_svn_67\packboard_flak_MG_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-packboard w/ Munitions";
	};
	class B_simc_packboard_flak_roket_1: B_simc_packboard_flak_MG_1
	{
		author="Schoifets";
		displayName="[US/Flak] Packboard (Rockets)";
		model="\simc_svn_67\packboard_flak_roket_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ Munitions";
	};
	class B_simc_packboard_flak_roket_2: B_simc_packboard_flak_roket_1
	{
		author="Schoifets";
		model="\simc_svn_67\packboard_flak_roket_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-Packboard w/ Munitions";
	};
	class B_simc_packboard_flak_mortar_1: B_simc_packboard_flak_MG_1
	{
		displayName="[US/Flak] Packboard (Ordnance)";
		author="Schoifets";
		model="\simc_svn_67\packboard_flak_mortar_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		descriptionShort="1945-packboard w/ Munitions";
	};
	class B_simc_packboard_flak_rajio_base: B_simc_packboard_rajio_base
	{
		displayName="[US/Flak] Packboard/ AN/PRC25";
		author="Petr Svenda, ashton324";
		scope=1;
		descriptionShort="1945-packboard w/ AN/PRC-25";
		model="\simc_svn_67\packboard_flak_rajio_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=40;
		mass=90;
	};
	class B_simc_packboard_flak_rajio_1: B_simc_packboard_flak_rajio_base
	{
		author="Petr Svenda, ashton324";
		scope=2;
		model="\simc_svn_67\packboard_flak_rajio_1.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="1945-packboard w/ AN/PRC-25";
		maximumLoad=60;
		mass=100;
	};
	class B_simc_packboard_flak_rajio_1_B: B_simc_packboard_flak_rajio_1
	{
		author="Petr Svenda, ashton324";
		displayName="[US/Flak] Packboard/ AN/PRC25 (Bandoleer)";
		model="\simc_svn_67\packboard_flak_rajio_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		descriptionShort="1945-packboard w/ AN/PRC-25";
		maximumLoad=120;
		mass=120;
	};
	class B_simc_packboard_flak_rajio_2: B_simc_packboard_flak_rajio_1
	{
		author="Petr Svenda, ashton324";
		model="\simc_svn_67\packboard_flak_rajio_2.p3d";
		maximumLoad=60;
		mass=90;
	};
	class B_simc_packboard_flak_rajio_3: B_simc_packboard_flak_rajio_2
	{
		author="Petr Svenda, ashton324";
		model="\simc_svn_67\packboard_flak_rajio_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=40;
		mass=80;
	};
	class Item_Base_F;
	class Item_U_Simc_arvn_og107: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ARVN OG107";
		author="SmithcarDAK";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_Simc_arvn_og107
			{
				name="U_Simc_arvn_og107";
				count=1;
			};
		};
	};
	class Item_U_Simc_arvn_BDQ: Item_U_Simc_arvn_og107
	{
		displayName="ARVN BDQ Uniform";
		class TransportItems
		{
			class U_Simc_arvn_BDQ
			{
				name="U_Simc_arvn_BDQ";
				count=1;
			};
		};
	};
	class Item_U_Simc_arvn_ERDL_low: Item_U_Simc_arvn_og107
	{
		displayName="ARVN ERDL uniform";
		class TransportItems
		{
			class U_Simc_arvn_ERDL_low
			{
				name="U_Simc_arvn_ERDL_low";
				count=1;
			};
		};
	};
	class Item_U_Simc_arvn_ERDL_invis: Item_U_Simc_arvn_og107
	{
		displayName="ARVN ERDL uniform";
		class TransportItems
		{
			class U_Simc_arvn_ERDL_invis
			{
				name="U_Simc_arvn_ERDL_invis";
				count=1;
			};
		};
	};
	class Item_U_Simc_arvn_TS: Item_U_Simc_arvn_og107
	{
		displayName="Tiger Stripe uniform";
		class TransportItems
		{
			class U_Simc_arvn_TS
			{
				name="U_Simc_arvn_TS";
				count=1;
			};
		};
	};
	class Vest_Base_F;
	class Ground_V_Simc_garlan: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		reversed=1;
		displayName="M1923 Cartridge belt";
		author="Justin + 089";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Simc_garlan
			{
				name="V_Simc_garlan";
				count=1;
			};
		};
	};
	class Ground_V_Simc_Barbelt: Ground_V_Simc_garlan
	{
		displayName="M1937 BAR belt";
		author="Casper_TFG";
		class TransportItems
		{
			class V_Simc_Barbelt
			{
				name="V_Simc_Barbelt";
				count=1;
			};
		};
	};
	class Headgear_Base_F;
	class Ground_H_Simc_SVN_M1_ns: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		reversed=1;
		displayName="M1 Helmet";
		author="Mo + Eth + 089";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class H_Simc_SVN_M1_ns
			{
				name="H_Simc_SVN_M1_ns";
				count=1;
			};
		};
	};
	class Ground_H_Simc_SVN_M1_net_ns: Ground_H_Simc_SVN_M1_ns
	{
		displayName="M1 Helmet (Net)";
		class TransportItems
		{
			class H_Simc_SVN_M1_net_ns
			{
				name="H_Simc_SVN_M1_net_ns";
				count=1;
			};
		};
	};
	class Ground_H_Simc_SVN_M1_ifak: Ground_H_Simc_SVN_M1_ns
	{
		displayName="M1 Helmet (Bandage)";
		class TransportItems
		{
			class H_Simc_SVN_M1_ifak
			{
				name="H_Simc_SVN_M1_ifak";
				count=1;
			};
		};
	};
	class Ground_H_Simc_SVN_M1_net_ben: Ground_H_Simc_SVN_M1_ns
	{
		displayName="M1 Helmet (Net)";
		class TransportItems
		{
			class H_Simc_SVN_M1_net_ben
			{
				name="H_Simc_SVN_M1_net_ben";
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
	class U_Simc_67_BasicBody: Uniform_Base
	{
		class ItemInfo;
	};
	class U_Simc_arvn_og107: U_Simc_67_BasicBody
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="[ARVN] OG107 (Reinforced)";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\og107_ca.paa";
		descriptionShort="Uniform, Fatigues, OG-107";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_arvn_og107";
		};
	};
	class U_Simc_arvn_og107_trop: U_Simc_arvn_og107
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_og107_trop";
		};
	};
	class U_Simc_arvn_og107_tuck: U_Simc_arvn_og107
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_og107_tuck";
		};
	};
	class U_Simc_arvn_og107_tuck_trop: U_Simc_arvn_og107_tuck
	{
		author="Vagineer089";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_og107_tuck_trop";
		};
	};
	class U_Simc_arvn_OD7: U_Simc_arvn_og107
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="[ARVN] OG107";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\og107_ca.paa";
		descriptionShort="Uniform, Fatigues, OG107, Reinforced";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\SF_TS_OD7_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_arvn_OD7";
		};
	};
	class U_Simc_arvn_OD7_trop: U_Simc_arvn_OD7
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_OD7_trop";
		};
	};
	class U_Simc_arvn_OD7_tuck: U_Simc_arvn_OD7
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_OD7_tuck";
		};
	};
	class U_Simc_arvn_OD7_tuck_trop: U_Simc_arvn_OD7_tuck
	{
		author="Vagineer089";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_OD7_tuck_trop";
		};
	};
	class U_Simc_arvn_BDQ: U_Simc_arvn_og107
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="[ARVN] BDQ";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		descriptionShort="Uniform, Fatigues, BDQ ERDL";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_arvn_BDQ";
		};
	};
	class U_Simc_arvn_BDQ_trop: U_Simc_arvn_BDQ
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_BDQ_trop";
		};
	};
	class U_Simc_arvn_BDQ_tuck: U_Simc_arvn_BDQ
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_BDQ_tuck";
		};
	};
	class U_Simc_arvn_BDQ_tuck_trop: U_Simc_arvn_BDQ_tuck
	{
		author="Vagineer089";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_BDQ_tuck_trop";
		};
	};
	class U_Simc_arvn_ERDL_low: U_Simc_arvn_og107
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="[ARVN] ERDL";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		descriptionShort="Uniform, Fatigues, ERDL";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_low_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_arvn_ERDL_low";
		};
	};
	class U_Simc_arvn_ERDL_low_trop: U_Simc_arvn_ERDL_low
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_ERDL_low_trop";
		};
	};
	class U_Simc_arvn_ERDL_low_tuck: U_Simc_arvn_ERDL_low
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_ERDL_low_tuck";
		};
	};
	class U_Simc_arvn_ERDL_low_tuck_trop: U_Simc_arvn_ERDL_low_tuck
	{
		author="Vagineer089";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_ERDL_low_tuck_trop";
		};
	};
	class U_Simc_arvn_ERDL_invis: U_Simc_arvn_og107
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="[ARVN] ERDL";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		descriptionShort="Uniform, Fatigues, ERDL (invisible)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_erdl_invis_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_arvn_ERDL_invis";
		};
	};
	class U_Simc_arvn_ERDL_invis_trop: U_Simc_arvn_ERDL_invis
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_ERDL_invis_trop";
		};
	};
	class U_Simc_arvn_ERDL_invis_tuck: U_Simc_arvn_ERDL_invis
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_ERDL_invis_tuck";
		};
	};
	class U_Simc_arvn_ERDL_invis_tuck_trop: U_Simc_arvn_ERDL_invis_tuck
	{
		author="Vagineer089";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_ERDL_invis_tuck_trop";
		};
	};
	class U_Simc_arvn_DerFrosch: U_Simc_arvn_og107
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="[ARVN] Beo Gam";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		descriptionShort="Uniform, Fatigues, Beo Gam";
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
			uniformClass="simc_arvn_DerFrosch";
		};
	};
	class U_Simc_arvn_DerFrosch_trop: U_Simc_arvn_DerFrosch
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_DerFrosch_trop";
		};
	};
	class U_Simc_arvn_DerFrosch_tuck: U_Simc_arvn_DerFrosch
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_DerFrosch_tuck";
		};
	};
	class U_Simc_arvn_DerFrosch_tuck_trop: U_Simc_arvn_DerFrosch_tuck
	{
		author="Vagineer089";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_DerFrosch_tuck_trop";
		};
	};
	class U_Simc_arvn_TS: U_Simc_arvn_og107
	{
		author="089 + adriaNsteam";
		scope=2;
		displayName="[ARVN] Tiger Stripe";
		model="\simc_svn_67\suitpack_TS.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		descriptionShort="Uniform, Fatigues, Tiger Stripe";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_svn_67\data\arvn_TS_1_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_arvn_TS";
		};
	};
	class U_Simc_arvn_TS_trop: U_Simc_arvn_TS
	{
		author="089 + adriaNsteam";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_TS_trop";
		};
	};
	class U_Simc_arvn_TS_tuck: U_Simc_arvn_TS
	{
		author="089 + adriaNsteam";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_TS_tuck";
		};
	};
	class U_Simc_arvn_TS_tuck_trop: U_Simc_arvn_TS_tuck
	{
		author="089 + adriaNsteam";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="Simc_arvn_TS_tuck_trop";
		};
	};
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_Simc_svn_M1_67_base: H_HelmetB
	{
		author="Motta + Ethridge + 089";
		scope=1;
		displayName="M1 Helmet";
		picture="\simc_uaf_67_preview\icons\pot_ca.paa";
		model="\simc_svn_67\helmet_m1_F.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
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
					armor=8;
					passThrough=2;
				};
			};
		};
	};
	class H_Simc_SVN_M1_op: H_Simc_svn_M1_67_base
	{
		author="Mo + Eth + 089";
		scope=2;
		displayName="M1 Helmet";
		picture="\simc_uaf_67_preview\icons\pot_ca.paa";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_ns: H_Simc_SVN_M1_op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_Cl: H_Simc_SVN_M1_op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"cover",
			"jokes",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Cl.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes",
				"ben"
			};
		};
	};
	class H_Simc_SVN_M1_net_Op: H_Simc_SVN_M1_ns
	{
		author="Mo + Eth + 089";
		displayName="M1 Helmet (Net)";
		picture="\simc_uaf_67_preview\icons\pot_netz_ca.paa";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_net_ns: H_Simc_SVN_M1_net_Op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_net_ben: H_Simc_SVN_M1_net_Op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_b_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_ifak: H_Simc_SVN_M1_op
	{
		author="Mo + Eth + 089";
		displayName="M1 Helmet (Bandages)";
		model="\simc_svn_67\helmet_m1_ifak.p3d";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_ifak.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_ifak_Cl: H_Simc_SVN_M1_ifak
	{
		author="Mo + Eth + 089";
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_ifak.p3d";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Cl.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_ifak_Op: H_Simc_SVN_M1_ifak
	{
		author="Mo + Eth + 089";
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_ifak.p3d";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes"
			};
		};
	};
	class H_Simc_SVN_M1_ben_ns: H_Simc_SVN_M1_ns
	{
		author="Mo + Eth + 089";
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_b_F.p3d";
		displayName="M1 Helmet (Band)";
		hiddenSelections[]=
		{
			"jokes",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes",
				"cover"
			};
		};
	};
	class H_Simc_SVN_M1_ben_Op: H_Simc_SVN_M1_ben_ns
	{
		author="Mo + Eth + 089";
		model="\simc_svn_67\helmet_m1_b_Op.p3d";
		hiddenSelections[]=
		{
			"jokes",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"jokes",
				"cover"
			};
		};
	};
	class H_Simc_SVN_M1C_op: H_Simc_svn_M1_67_base
	{
		author="Mo + Eth + 089";
		scope=2;
		displayName="M1C Helmet";
		picture="\simc_uaf_67_preview\icons\pot_ca.paa";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_SVN_M1C_ns: H_Simc_SVN_M1C_op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_SVN_M1C_Cl: H_Simc_SVN_M1C_op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"cover",
			"jokes",
			"ben"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Cl.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"ben"
			};
		};
	};
	class H_Simc_SVN_M1C_net_Op: H_Simc_SVN_M1C_ns
	{
		author="Mo + Eth + 089";
		displayName="M1C Helmet (Net)";
		picture="\simc_uaf_67_preview\icons\pot_netz_ca.paa";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_SVN_M1C_net_ns: H_Simc_SVN_M1C_net_Op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_SVN_M1C_net_ben: H_Simc_SVN_M1C_net_Op
	{
		author="Mo + Eth + 089";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_b_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_SVN_M1C_ifak: H_Simc_SVN_M1C_op
	{
		author="Mo + Eth + 089";
		displayName="M1C Helmet (Bandages)";
		model="\simc_svn_67\helmet_m1_ifak.p3d";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_ifak.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_SVN_M1C_ifak_Cl: H_Simc_SVN_M1C_ifak
	{
		author="Mo + Eth + 089";
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_ifak.p3d";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Cl.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_SVN_M1C_ifak_Op: H_Simc_SVN_M1C_ifak
	{
		author="Mo + Eth + 089";
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_ifak.p3d";
		hiddenSelections[]=
		{
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_SVN_M1C_ben_ns: H_Simc_SVN_M1C_ns
	{
		author="Mo + Eth + 089";
		picture="\simc_uaf_67_preview\icons\pot_spat_ca.paa";
		model="\simc_svn_67\helmet_m1_b_F.p3d";
		displayName="M1C Helmet (Band)";
		hiddenSelections[]=
		{
			"jokes",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_SVN_M1C_ben_Op: H_Simc_SVN_M1C_ben_ns
	{
		author="Mo + Eth + 089";
		model="\simc_svn_67\helmet_m1_b_Op.p3d";
		hiddenSelections[]=
		{
			"jokes",
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_svn_67\helmet_m1_b_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class NVGoggles;
	class claysac_addon: NVGoggles
	{
		author="Brijnvag";
		scope=2;
		displayName="M7 Claymore Bandoleer";
		model="\simc_svn_67\claysac_drop.p3d";
		picture="\simc_uaf_67_preview\icons\claysac_ca.paa";
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
		descriptionShort="American Claymore sack (decorative)";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="simc_svn_67\claysac.p3d";
			modelOff="simc_svn_67\claysac.p3d";
			hiddenSelections[]=
			{
				""
			};
			mass=15;
		};
	};
	class claysac_flak_addon: claysac_addon
	{
		author="Brijnvag";
		scope=2;
		displayName="(Flak) M7 Claymore Bandoleer";
		descriptionShort="American Claymore sack (decorative)";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="simc_svn_67\claysac_flak.p3d";
			modelOff="simc_svn_67\claysac_flak.p3d";
			hiddenSelections[]=
			{
				""
			};
			mass=15;
		};
	};
	class VestItem;
	class Vest_Camo_Base;
	class V_Simc_SVN_basic: Vest_Camo_Base
	{
		author="Justin ft. 089";
		scope=1;
		displayName="M1923 Cartridge belt";
		model="\simc_svn_67\belt_drop_garlan.p3d";
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
			uniformModel="\simc_svn_67\belt_garlan.p3d";
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
	class V_Simc_garlan: V_Simc_SVN_basic
	{
		author="T/Sloot + 089";
		scope=2;
		displayName="M1923 Cartridge belt";
		model="\simc_svn_67\belt_drop_garlan.p3d";
		picture="\simc_uaf_67_preview\icons\belt_garlan_ca.paa";
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
			uniformModel="\simc_svn_67\belt_garlan.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_garlan_M56: V_Simc_garlan
	{
		author="T/Fauf + 089";
		displayName="M1923 Cartridge belt/M56 LCE";
		hiddenSelections[]=
		{
			"zusp"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_svn_67\belt_garlan_m56.p3d";
			hiddenSelections[]=
			{
				"zusp"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_garlan_M56_zusp: V_Simc_garlan_M56
	{
		author="T/Fauf + 089";
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
			uniformModel="\simc_svn_67\belt_garlan_m56.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_Barbelt: V_Simc_SVN_basic
	{
		author="T/Sloot + 089";
		scope=2;
		displayName="M1937 BAR belt";
		model="\simc_svn_67\belt_drop_bar.p3d";
		picture="\simc_uaf_67_preview\icons\belt_garlan_ca.paa";
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
			uniformModel="\simc_svn_67\belt_bar.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_Simc_Barbelt_M56: V_Simc_Barbelt
	{
		author="T/Fauf + 089";
		displayName="M1937 BAR belt/M56 LCE";
		hiddenSelections[]=
		{
			"zusp"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_svn_67\belt_bar_m56.p3d";
			hiddenSelections[]=
			{
				"zusp"
			};
			containerClass="Supply100";
			mass=15;
		};
	};
	class V_Simc_Barbelt_M56_zusp: V_Simc_Barbelt
	{
		author="T/Fauf + 089";
		displayName="M1937 BAR belt/M56 LCE";
		hiddenSelections[]=
		{
			"zusp"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_svn_67\belt_bar_m56.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply100";
			mass=15;
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1666176617";
};
