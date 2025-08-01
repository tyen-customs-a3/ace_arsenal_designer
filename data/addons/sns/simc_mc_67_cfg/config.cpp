class CfgPatches
{
	class simc_mc_67_core
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
	class Simc_MC_65
	{
		displayName="USMC (65)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=1;
	};
	class Simc_MC_68
	{
		displayName="USMC (68)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=1;
	};
	class Simc_MC_67
	{
		displayName="USMC (67)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=1;
	};
	class Simc_MC_69
	{
		displayName="USMC (69)";
		author="Simcardo";
		icon="\simc_uaf_67_preview\icons\factoid_usmc_ca.paa";
		flag="\A3\ui_f\data\map\markers\flags\USA_ca.paa";
		priority=3;
		side=1;
	};
};
class CfgEditorSubcategories
{
	class SIMC_men_tcu
	{
		displayName="Men (TCU/Late)";
	};
	class SIMC_men_tcu_erla
	{
		displayName="Men (TCU)";
	};
	class SIMC_men_og107_mk1
	{
		displayName="Men (OG107)";
	};
	class SIMC_men_og107_mk3
	{
		displayName="Men (OG107/Late)";
	};
	class SIMC_men_erdl
	{
		displayName="Men (ERDL)";
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
	class simc_mc_67_base: B_Soldier_base_F
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
		faction="Simc_mc_67";
		selectionClan="clan";
		genericNames="EnglishMen";
		model="\simc_uaf_67\tcu_mk3.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"\simc_uaf_67\data\tcu_mk3_co.paa",
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
			"H_Simc_MC_M1_bitch_ns",
			1,
			"H_Simc_MC_M1_bitch_op",
			1,
			"H_Simc_MC_M1_bitch_op_2",
			1,
			"H_Simc_MC_M1_bitch_flip_ns",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op_2",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op",
			0.1,
			"H_Simc_MC_M1_muggen",
			0.2,
			"H_Simc_MC_M1_bitch_ben",
			1,
			"H_Simc_MC_M1_bitch_low_ben",
			1,
			"H_Simc_MC_M1_bitch_low_ben_op",
			1
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_56",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
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
	class simc_tcu_mk3_blench: simc_mc_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		model="\Simc_uaf_67\tcu_mk3.p3d";
		headgearList[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			1,
			"H_Simc_MC_M1_bitch_op",
			1,
			"H_Simc_MC_M1_bitch_op_2",
			1,
			"H_Simc_MC_M1_bitch_low",
			1,
			"H_Simc_MC_M1_bitch_low_rot",
			1,
			"H_Simc_MC_M1_bitch_flip_op_2",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op",
			0.1,
			"H_Simc_MC_M1_bitch_flip_low",
			0.1,
			"H_Simc_MC_M1_bitch_flip_ns",
			0.1,
			"H_Simc_MC_M1_muggen",
			0.2,
			"H_Simc_MC_M1_bitch_ben",
			1,
			"H_Simc_MC_M1_bitch_low_ben",
			1,
			"H_Simc_MC_M1_bitch_low_ben_op",
			1
		};
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
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk3_co.paa",
			"\Simc_uaf_67\data\tcu_mk3_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_nomex_blench: simc_tcu_mk3_blench
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_nomex_blench";
		model="\Simc_uaf_69\tcu_mk3_nomex.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
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
			"\Simc_uaf_67\data\tcu_mk3_co.paa",
			"\Simc_uaf_67\data\tcu_mk3_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_trop_blench: simc_tcu_mk3_blench
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_trop_blench";
		model="\Simc_uaf_67\tcu_mk3_roll.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
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
			"\Simc_uaf_67\data\tcu_mk3_co.paa",
			"\Simc_uaf_67\data\tcu_mk3_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_cute_blench: simc_tcu_mk3_blench
	{
		scope=1;
		author="smicdaro";
		faction="Simc_UA_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_trop";
		model="\simc_uaf_69\tcu_mk3_cute.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		linkedItems[]=
		{
			"H_Simc_M1_bitch_ns",
			"V_Simc_56_M43",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_M1_bitch_ns",
			"V_Simc_56_M43",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_tcu_mk3_poplijn_blench: simc_tcu_mk3_blench
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_poplijn_blench";
		model="\simc_uaf_67\tcu_mk3_2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"bots",
			"nom",
			"gas"
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_bandoleer_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_bandoleer_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_primus_co.paa",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk3_poplijn_nomex_blench: simc_tcu_mk3_blench
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_poplijn_nomex_blench";
		model="\Simc_uaf_69\tcu_mk3_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk3_poplijn_trop_blench: simc_tcu_mk3_blench
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_poplijn_trop_blench";
		model="\Simc_uaf_67\tcu_mk3_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk1_blench: simc_mc_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_TCU_mk1";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		headgearList[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			1,
			"H_Simc_MC_M1_bitch_op",
			1,
			"H_Simc_MC_M1_bitch_op_2",
			1,
			"H_Simc_MC_M1_bitch_flip_ns",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op_2",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op",
			0.1,
			"H_Simc_MC_M1_muggen",
			0.2
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_nomex_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_TCU_mk1_nomex_blench";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk1_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_trop_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_trop_blench";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_roll_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_roll_blench";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_og_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_blench";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_og.p3d";
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
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_67\data\tcu_mk1.rvmat",
				"simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk1_og_trop_blench: simc_tcu_mk1_og_blench
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_trop_blench";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_og_trop.p3d";
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
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk1_og_gas_blench: simc_tcu_mk1_og_blench
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_gas_blench";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
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
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk1_og_gas_trop_blench: simc_tcu_mk1_og_trop_blench
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_gas_trop_blench";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
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
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_trop_blench";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		model="\simc_uaf_65\tcu_mk1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_rdt1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_nomex_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_nomex_blench";
		model="\simc_uaf_69\tcu_mk1_nomex.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
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
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_trop_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_trop_blench";
		model="\simc_uaf_65\tcu_mk1_trop.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
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
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_roll_blench: simc_tcu_mk1_blench
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_roll_blench";
		model="\simc_uaf_65\tcu_mk1_roll.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
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
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"\Simc_uaf_67\data\tcu_mk1_co.paa",
			"",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			"",
			""
		};
	};
	class simc_og107_mk1_blench: simc_mc_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_65";
		model="\simc_uaf_65\og107_mk1.p3d";
		uniformClass="U_Simc_OG107_mk1_blench";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
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
				"Simc_uaf_67\data\og107_mk1.rvmat",
				"Simc_uaf_67\data\og107_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\og107_mk1_verwundet.rvmat",
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
	class simc_og107_mk1_nomex_blench: simc_og107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_nomex_blench";
		model="\simc_uaf_69\og107_mk1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_trop_blench: simc_og107_mk1_blench
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_trop_blench";
		model="\simc_uaf_65\og107_mk1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_trop_nomex_blench: simc_og107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_trop_nomex_blench";
		model="\simc_uaf_69\og107_mk1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_tuck_blench: simc_og107_mk1_blench
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_blench";
		model="\simc_uaf_65\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_tuck_nomex_blench: simc_og107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_nomex_blench";
		model="\simc_uaf_69\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_tuck_trop_blench: simc_og107_mk1_tuck_blench
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_trop_blench";
		model="\simc_uaf_65\og107_mk1_tuck_trop.p3d";
	};
	class simc_og107_mk1_tuck_trop_nomex_blench: simc_og107_mk1_tuck_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_trop_nomex_blench";
		model="\simc_uaf_69\og107_mk1_tuck_trop.p3d";
	};
	class simc_og107_mk1_gas_blench: simc_og107_mk1_blench
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_blench";
		model="\simc_uaf_65\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_gas_nomex_blench: simc_og107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_nomex_blench";
		model="\simc_uaf_69\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_gas_trop_blench: simc_og107_mk1_gas_blench
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_trop_blench";
		model="\simc_uaf_65\og107_mk1_tuck_trop.p3d";
	};
	class simc_og107_mk1_gas_trop_nomex_blench: simc_og107_mk1_gas_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_trop_nomex_blench";
		model="\simc_uaf_69\og107_mk1_tuck_trop.p3d";
	};
	class simc_og107_mk3_blench: simc_og107_mk1_blench
	{
		author="smicdaro";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_blench";
		model="\simc_uaf_65\og107_mk3.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
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
				"Simc_uaf_67\data\og107_mk1.rvmat",
				"Simc_uaf_67\data\og107_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\og107_mk1_verwundet.rvmat",
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
	class simc_og107_mk3_nomex_blench: simc_og107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_nomex_blench";
		model="\simc_uaf_69\og107_mk3.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"",
			""
		};
	};
	class simc_og107_mk3_trop_blench: simc_og107_mk3_blench
	{
		author="smicdaro";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_trop_blench";
		model="\simc_uaf_65\og107_mk3_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"",
			""
		};
	};
	class simc_og107_mk3_trop_nomex_blench: simc_og107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_trop_nomex_blench";
		model="\simc_uaf_69\og107_mk3_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"",
			""
		};
	};
	class simc_og107_mk3_tuck_blench: simc_og107_mk3_blench
	{
		author="smicdaro";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_tuck_blench";
		model="\simc_uaf_65\og107_mk3_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"",
			""
		};
	};
	class simc_og107_mk3_tuck_nomex_blench: simc_og107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_tuck_nomex_blench";
		model="\simc_uaf_69\og107_mk3_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"",
			""
		};
	};
	class simc_og107_mk3_tuck_trop_blench: simc_og107_mk3_tuck_blench
	{
		author="smicdaro";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_tuck_trop_blench";
		model="\simc_uaf_65\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_mk3_tuck_trop_nomex_blench: simc_og107_mk3_tuck_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_tuck_trop_nomex_blench";
		model="\simc_uaf_69\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_mk3_gas_blench: simc_og107_mk3_blench
	{
		author="smicdaro";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_gas_blench";
		model="\simc_uaf_65\og107_mk3_tuck.p3d";
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
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			""
		};
	};
	class simc_og107_mk3_gas_nomex_blench: simc_og107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_gas_nomex_blench";
		model="\simc_uaf_69\og107_mk3_tuck.p3d";
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
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			"\Simc_uaf_67\data\og107_mk3_co.paa",
			""
		};
	};
	class simc_og107_mk3_gas_trop_blench: simc_og107_mk3_gas_blench
	{
		author="smicdaro";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_gas_trop_blench";
		model="\simc_uaf_65\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_mk3_gas_trop_nomex_blench: simc_og107_mk3_gas_blench
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_UA_67";
		uniformClass="U_Simc_OG107_mk3_gas_trop_nomex_blench";
		model="\simc_uaf_69\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_mk1_MC: simc_og107_mk1_blench
	{
		author="smicdaro";
		scope=1;
		faction="Simc_MC_65";
		selectionClan="";
		model="\simc_uaf_65\og107_mk1.p3d";
		uniformClass="U_Simc_OG107_mk1_MC";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
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
				"Simc_mc_67\data\og107_mk1_mc.rvmat",
				"Simc_mc_67\data\og107_mk1_mc_verwundet.rvmat",
				"Simc_mc_67\data\og107_mk1_mc_verwundet.rvmat",
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
	class simc_og107_mk1_nomex_MC: simc_og107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_nomex_MC";
		model="\simc_uaf_69\og107_mk1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_trop_MC: simc_og107_mk1_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_trop_MC";
		model="\simc_uaf_65\og107_mk1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_trop_nomex_MC: simc_og107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_trop_nomex_MC";
		model="\simc_uaf_69\og107_mk1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_tuck_MC: simc_og107_mk1_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_MC";
		model="\Simc_mc_67\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_tuck_nomex_MC: simc_og107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_nomex_MC";
		model="\Simc_mc_68\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_tuck_trop_MC: simc_og107_mk1_tuck_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_trop_MC";
		model="\Simc_mc_67\og107_mk1_tuck_trop.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_tuck_trop_nomex_MC: simc_og107_mk1_tuck_MC
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_tuck_trop_nomex_MC";
		model="\Simc_mc_68\og107_mk1_tuck_trop.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_gas_MC: simc_og107_mk1_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_MC";
		model="\Simc_mc_67\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_gas_nomex_MC: simc_og107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_nomex_MC";
		model="\Simc_mc_68\og107_mk1_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_gas_trop_MC: simc_og107_mk1_gas_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_trop_MC";
		model="\Simc_mc_67\og107_mk1_tuck_trop.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk1_gas_trop_nomex_MC: simc_og107_mk1_gas_MC
	{
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_mk1_gas_trop_nomex_MC";
		model="\Simc_mc_68\og107_mk1_tuck_trop.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk3_MC: simc_og107_mk1_MC
	{
		author="smicdaro";
		faction="Simc_MC_67";
		uniformClass="U_Simc_OG107_mk3_mc";
		model="\simc_uaf_65\og107_mk3.p3d";
		hiddenSelections[]=
		{
			"camo",
			"nom",
			"rank",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			"",
			""
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61_ligt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class simc_og107_mk3_nomex_MC: simc_og107_mk3_MC
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_OG107_mk3_nomex_mc";
		model="\simc_uaf_69\og107_mk3_trop.p3d";
	};
	class simc_og107_mk3_trop_MC: simc_og107_mk3_MC
	{
		author="smicdaro";
		uniformClass="U_Simc_OG107_mk3_trop_mc";
		model="\simc_uaf_65\og107_mk3_trop.p3d";
	};
	class simc_og107_mk3_trop_nomex_MC: simc_og107_mk3_MC
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_OG107_mk3_trop_nomex_mc";
		model="\simc_uaf_69\og107_mk3_trop.p3d";
	};
	class simc_og107_mk3_tuck_MC: simc_og107_mk3_MC
	{
		author="smicdaro";
		uniformClass="U_Simc_OG107_mk3_tuck_mc";
		model="\Simc_mc_67\og107_mk3_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			""
		};
	};
	class simc_og107_mk3_tuck_nomex_MC: simc_og107_mk3_MC
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_OG107_mk3_tuck_nomex_mc";
		model="\Simc_mc_68\og107_mk3_tuck.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			""
		};
	};
	class simc_og107_mk3_tuck_trop_MC: simc_og107_mk3_tuck_MC
	{
		author="smicdaro";
		uniformClass="U_Simc_OG107_mk3_tuck_trop_mc";
		model="\Simc_mc_67\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_mk3_tuck_trop_nomex_MC: simc_og107_mk3_tuck_MC
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_OG107_mk3_tuck_trop_nomex_mc";
		model="\Simc_mc_68\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_mk3_gas_MC: simc_og107_mk3_MC
	{
		author="smicdaro";
		uniformClass="U_Simc_OG107_mk3_gas_mc";
		model="\Simc_mc_67\og107_mk3_tuck.p3d";
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
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			""
		};
	};
	class simc_og107_mk3_gas_nomex_MC: simc_og107_mk3_MC
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_OG107_mk3_gas_nomex_mc";
		model="\Simc_mc_68\og107_mk3_tuck.p3d";
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
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			"\Simc_mc_67\data\og107_mk3_mc_co.paa",
			""
		};
	};
	class simc_og107_mk3_gas_trop_MC: simc_og107_mk3_gas_MC
	{
		author="smicdaro";
		uniformClass="U_Simc_OG107_mk3_gas_trop_mc";
		model="\Simc_mc_67\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_mk3_gas_trop_nomex_MC: simc_og107_mk3_gas_MC
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_OG107_mk3_gas_trop_nomex_mc";
		model="\Simc_mc_68\og107_mk3_tuck_trop.p3d";
	};
	class simc_og107_tee_MC: simc_og107_mk1_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_tee_mc";
		model="\Simc_mc_67\tee_og107_mc.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_67\data\tcu_mk3_tee.rvmat",
				"simc_uaf_67\data\tcu_mk3_tee_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk3_tee_verwundet.rvmat",
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
	class simc_og107_tee_MC_weiss: simc_og107_tee_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_tee_mc_weiss";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			""
		};
	};
	class simc_og107_tee_MC_gas: simc_og107_tee_MC
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_tee_mc_weiss";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			""
		};
	};
	class simc_og107_tee_MC_gas_weiss: simc_og107_tee_MC_gas
	{
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_OG107_tee_mc_weiss";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			""
		};
	};
	class simc_tcu_mk3_mc: simc_mc_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		model="\Simc_uaf_67\tcu_mk3.p3d";
		headgearList[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			1,
			"H_Simc_MC_M1_bitch_op",
			1,
			"H_Simc_MC_M1_bitch_op_2",
			1,
			"H_Simc_MC_M1_bitch_low",
			1,
			"H_Simc_MC_M1_bitch_low_rot",
			1,
			"H_Simc_MC_M1_bitch_flip_op_2",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op",
			0.1,
			"H_Simc_MC_M1_bitch_flip_low",
			0.1,
			"H_Simc_MC_M1_bitch_flip_ns",
			0.1,
			"H_Simc_MC_M1_muggen",
			0.2,
			"H_Simc_MC_M1_bitch_ben",
			1,
			"H_Simc_MC_M1_bitch_low_ben",
			1,
			"H_Simc_MC_M1_bitch_low_ben_op",
			1
		};
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
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk3_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk3_mc_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_nomex_mc: simc_tcu_mk3_mc
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_nomex_mc";
		model="\Simc_uaf_69\tcu_mk3_nomex.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk3_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk3_mc_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_trop_mc: simc_tcu_mk3_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_trop_mc";
		model="\Simc_uaf_67\tcu_mk3_roll.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_belt_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk3_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk3_mc_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk3_poplijn_mc: simc_tcu_mk3_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_poplijn_mc";
		model="\simc_uaf_67\tcu_mk3_2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_bandoleer_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_mk2_bandoleer_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_primus_co.paa",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk3_poplijn_nomex_mc: simc_tcu_mk3_mc
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_poplijn_nomex_mc";
		model="\Simc_uaf_69\tcu_mk3_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk3_poplijn_trop_mc: simc_tcu_mk3_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk3_poplijn_trop_mc";
		model="\Simc_uaf_67\tcu_mk3_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat_bandoleer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"\Simc_uaf_67\data\tcu_mk1.rvmat",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"Simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk1_mc: simc_mc_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_65";
		uniformClass="U_Simc_TCU_mk1";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_61",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		headgearList[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			1,
			"H_Simc_MC_M1_bitch_op",
			1,
			"H_Simc_MC_M1_bitch_op_2",
			1,
			"H_Simc_MC_M1_bitch_flip_ns",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op_2",
			0.1,
			"H_Simc_MC_M1_bitch_flip_op",
			0.1,
			"H_Simc_MC_M1_muggen",
			0.2
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_nomex_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_TCU_mk1_nomex_mc";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_69\tcu_mk1_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_trop_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_trop_mc";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_roll_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_roll_mc";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_mk1_og_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_mc";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_og.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_uaf_67\data\og107_mk1_co.paa",
			"",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_67\data\tcu_mk1.rvmat",
				"simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk1_verwundet.rvmat",
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
	class simc_tcu_mk1_og_trop_mc: simc_tcu_mk1_og_mc
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_trop_mc";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		model="\simc_uaf_65\tcu_mk1_og_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk1_og_gas_mc: simc_tcu_mk1_og_mc
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_gas_mc";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk1_og_gas_trop_mc: simc_tcu_mk1_og_trop_mc
	{
		scope=1;
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk1_og_gas_trop_mc";
		faction="Simc_MC_65";
		genericNames="EnglishMen";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\og107_mk1_mc_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_trop_mc";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_open",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		model="\simc_uaf_65\tcu_mk1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_rdt1_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_nomex_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="Lennard, Frenchy, Simcardo";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_nomex_mc";
		model="\simc_uaf_69\tcu_mk1_nomex.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_trop_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_trop_mc";
		model="\simc_uaf_65\tcu_mk1_trop.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_mk2_roll_mc: simc_tcu_mk1_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_67";
		genericNames="EnglishMen";
		uniformClass="U_Simc_TCU_mk2_roll_mc";
		model="\simc_uaf_65\tcu_mk1_roll.p3d";
		linkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Simc_MC_M1_bitch_ns",
			"V_Simc_flak_55_M61_laat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"buttons",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"\Simc_mc_67\data\tcu_mk1_mc_co.paa",
			"",
			"\Simc_uaf_67\data\bot_dschungel_mk2_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_tee_mc: simc_mc_67_base
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_67";
		model="\simc_uaf_65\tee_2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"buttons",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"\simc_mc_67\data\tcu_mk3_tee_mc_co.paa",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_67\data\tcu_mk3_tee.rvmat",
				"simc_uaf_67\data\tcu_mk3_tee_verwundet.rvmat",
				"simc_uaf_67\data\tcu_mk3_tee_verwundet.rvmat",
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
	class simc_tcu_tee_mc_weiss: simc_tcu_tee_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_65";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_tee_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_tee_mc_co.paa",
			""
		};
	};
	class simc_tcu_tee_mc_erdl: simc_tcu_tee_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"buttons",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_tee_co.paa",
			"\simc_mc_67\data\tcu_mk3_tee_mc_erdl_co.paa",
			"",
			""
		};
	};
	class simc_tcu_tee_1mardiv: simc_tcu_tee_mc
	{
		scope=1;
		author="smicdaro";
		faction="Simc_MC_69";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"buttons",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_tee_mc_erdl_co.paa",
			"\simc_mc_67\data\tcu_mk3_tee_mc_co.paa",
			"",
			""
		};
	};
	class simc_tcu_tee_1mardiv_erdl: simc_tcu_tee_1mardiv
	{
		scope=1;
		author="smicdaro";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"buttons",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_tee_mc_erdl_co.paa",
			"\simc_mc_67\data\tcu_mk3_tee_mc_erdl_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_l: simc_tcu_mk3_mc
	{
		author="smicdaro";
		selectionClan="";
		uniformClass="U_Simc_TCU_mk3_erdl_mc";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"bots",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"\simc_uaf_67\data\bot_dschungel_primus_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_nomex: simc_tcu_erdl_mc_l
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_TCU_mk3_erdl_mc_nomex";
		model="\simc_uaf_69\tcu_mk3_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"",
			"\simc_uaf_67\data\bot_dschungel_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_top: simc_tcu_erdl_mc_l
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk3_erdl_mc_top";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_mc_co.paa",
			"",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_trop: simc_tcu_erdl_mc_l
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk3_erdl_mc_trop";
		model="\simc_uaf_67\tcu_mk3_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"",
			"\simc_uaf_67\data\bot_dschungel_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_low: simc_tcu_erdl_mc_l
	{
		author="smicdaro";
		selectionClan="clan";
		uniformClass="U_Simc_TCU_mk3_erdl_top";
		model="\simc_uaf_67\tcu_mk3_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_mc_co.paa",
			"",
			"\simc_uaf_67\data\bot_dschungel_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_H: simc_tcu_mk3_mc
	{
		author="smicdaro";
		selectionClan="";
		uniformClass="U_Simc_TCU_mk3_erdl_H";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"\simc_uaf_67\data\bot_dschungel_primus_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_H_nomex: simc_tcu_erdl_mc_H
	{
		author="Lennard, Frenchy, Simcardo";
		uniformClass="U_Simc_TCU_mk3_erdl_H_nomex";
		model="\simc_uaf_69\tcu_mk3_nomex.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"\simc_uaf_67\data\bot_dschungel_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_H_trop: simc_tcu_erdl_mc_H
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk3_erdl_H_trop";
		model="\simc_uaf_67\tcu_mk3_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"\simc_uaf_67\data\bot_dschungel_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_H_top: simc_tcu_erdl_mc_H
	{
		author="smicdaro";
		uniformClass="U_Simc_TCU_mk3_erdl_H_top";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"\simc_uaf_67\data\tcu_mk3_co.paa",
			"",
			""
		};
	};
	class simc_tcu_erdl_mc_H_low: simc_tcu_erdl_mc_H_trop
	{
		author="smicdaro";
		selectionClan="clan";
		uniformClass="U_Simc_TCU_mk3_erdl_H_low";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"bots",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\tcu_mk3_mc_co.paa",
			"\simc_mc_67\data\tcu_mk3_erdl_H_mc_co.paa",
			"",
			"\simc_uaf_67\data\bot_dschungel_primus_co.paa",
			"",
			""
		};
	};
	class B_AssaultPack_rgr;
	class B_simc_USMC65_M41: B_AssaultPack_rgr
	{
		displayName="[USMC] M-1941/44 Pack";
		author="Smicradeu";
		scope=2;
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1910";
		model="\simc_mc_67\paket_41.p3d";
		hiddenSelections[]=
		{
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\sack_ca.paa";
		maximumLoad=120;
		mass=60;
	};
	class B_simc_USMC65_M41_M43: B_simc_USMC65_M41
	{
		displayName="[USMC] M-1941/44 Pack (M43)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"roll",
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMC65_M41_M43_roll: B_simc_USMC65_M41
	{
		displayName="[USMC] M-1941/44 Pack (M43, Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMC65_M41_Roll: B_simc_USMC65_M41
	{
		displayName="[USMC] M-1941/44 Pack (Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"sekop",
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
	};
	class B_simc_USMC65_M41_flat: B_simc_USMC65_M41
	{
		displayName="[USMC] M-1941/44 Pack";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		model="\simc_mc_67\paket_41_roll.p3d";
		hiddenSelections[]=
		{
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class B_simc_USMC65_M41_flat_M43: B_simc_USMC65_M41_flat
	{
		displayName="[USMC] M-1941/44 Pack (M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"roll"
		};
	};
	class B_simc_USMC65_M41_flat_M43_roll: B_simc_USMC65_M41_flat
	{
		displayName="[USMC] M-1941/44 Pack (M43/shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			""
		};
	};
	class B_simc_USMC65_M41_flat_roll: B_simc_USMC65_M41_flat
	{
		displayName="[USMC] M-1941/44 Pack (shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"sekop"
		};
	};
	class B_simc_USMC65_M41_erdl: B_simc_USMC65_M41
	{
		displayName="[USMC] M-1941/44 Pack (Poncho Liner)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		model="\simc_mc_67\paket_41_erdl.p3d";
		hiddenSelections[]=
		{
			"sekop",
			"roll",
			"roll2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class B_simc_USMC65_M41_erdl_M43: B_simc_USMC65_M41_erdl
	{
		displayName="[USMC] M-1941/44 Pack (Poncho Liner/M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		hiddenSelections[]=
		{
			"roll"
		};
	};
	class B_simc_USMC65_M41_mortar: B_simc_USMC65_M41
	{
		displayName="[USMC] M-1941/44 Pack (ordnance)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		model="\simc_mc_67\paket_41_mortar.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class B_simc_USMC65_M68_erdl: B_simc_USMC65_M41
	{
		displayName="[USMC] M-1941/68 Pack (Poncho Liner)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		model="\simc_mc_67\paket_41_erdl.p3d";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
	};
	class B_simc_USMC65_M68_erdl_M43: B_simc_USMC65_M41_erdl
	{
		displayName="[USMC] M-1941/68 Pack (Poncho Liner/M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		hiddenSelections[]=
		{
			"camo",
			"roll",
			"roll2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
	};
	class B_simc_USMC65_M68: B_AssaultPack_rgr
	{
		displayName="[USMC] M-1941/68 Pack";
		author="Smicradeu";
		scope=2;
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1910";
		model="\simc_mc_67\paket_41.p3d";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll",
			"roll2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
		picture="\simc_uaf_67_preview\icons\sack_ca.paa";
		maximumLoad=120;
		mass=60;
	};
	class B_simc_USMC65_M68_M43: B_simc_USMC65_M68
	{
		displayName="[USMC] M-1941/68 Pack (M43)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"camo",
			"roll"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMC65_M68_M43_roll: B_simc_USMC65_M68
	{
		displayName="[USMC] M-1941/68 Pack (M43, Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMC65_M68_Roll: B_simc_USMC65_M68
	{
		displayName="[USMC] M-1941/68 Pack (Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
	};
	class B_simc_USMC65_M68_flat: B_simc_USMC65_M68
	{
		displayName="[USMC] M-1941/68 Pack";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		model="\simc_mc_67\paket_41_roll.p3d";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
	};
	class B_simc_USMC65_M68_flat_M43: B_simc_USMC65_M68_flat
	{
		displayName="[USMC] M-1941/68 Pack (M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"camo",
			"roll"
		};
	};
	class B_simc_USMC65_M68_flat_M43_roll: B_simc_USMC65_M68_flat
	{
		displayName="[USMC] M-1941/68 Pack (M43/shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class B_simc_USMC65_M68_flat_roll: B_simc_USMC65_M68_flat
	{
		displayName="[USMC] M-1941/68 Pack (shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"camo",
			"sekop"
		};
	};
	class B_simc_USMCFLAK_M41: B_AssaultPack_rgr
	{
		displayName="[USMC/Flak] M-1941/44 Pack";
		author="Smicradeu";
		scope=2;
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1910";
		model="\simc_mc_67\paket_41_flak.p3d";
		hiddenSelections[]=
		{
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\sack_ca.paa";
		maximumLoad=120;
		mass=60;
	};
	class B_simc_USMCFLAK_M41_M43: B_simc_USMCFLAK_M41
	{
		displayName="[USMC/Flak] M-1941/44 Pack (M43)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"roll",
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMCFLAK_M41_M43_roll: B_simc_USMCFLAK_M41
	{
		displayName="[USMC/Flak] M-1941/44 Pack (M43, Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMCFLAK_M41_Roll: B_simc_USMCFLAK_M41
	{
		displayName="[USMC/Flak] M-1941/44 Pack (Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"sekop"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
	};
	class B_simc_USMCFLAK_M41_flat: B_simc_USMCFLAK_M41
	{
		displayName="[USMC/Flak] M-1941/44 Pack";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		model="\simc_mc_67\paket_41_roll_flak.p3d";
		hiddenSelections[]=
		{
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class B_simc_USMCFLAK_M41_flat_M43: B_simc_USMCFLAK_M41_flat
	{
		displayName="[USMC/Flak] M-1941/44 Pack (M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"roll"
		};
	};
	class B_simc_USMCFLAK_M41_flat_M43_roll: B_simc_USMCFLAK_M41_flat
	{
		displayName="[USMC/Flak] M-1941/44 Pack (M43/shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			""
		};
	};
	class B_simc_USMCFLAK_M41_flat_roll: B_simc_USMCFLAK_M41_flat
	{
		displayName="[USMC/Flak] M-1941/44 Pack (shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"sekop"
		};
	};
	class B_simc_USMCFLAK_M41_erdl: B_simc_USMCFLAK_M41
	{
		displayName="[USMC/Flak] M-1941/44 Pack (Poncho Liner)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		model="\simc_mc_67\paket_41_erdl_flak.p3d";
		hiddenSelections[]=
		{
			"sekop",
			"roll",
			"roll2"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class B_simc_USMCFLAK_M41_erdl_M43: B_simc_USMCFLAK_M41_erdl
	{
		displayName="[USMC/Flak] M-1941/44 Pack (Poncho Liner/M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		hiddenSelections[]=
		{
			"roll"
		};
	};
	class B_simc_USMCFLAK_M68_erdl: B_simc_USMCFLAK_M41
	{
		displayName="[USMC/Flak] M-1941/68 Pack (Poncho Liner)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		model="\simc_mc_67\paket_41_erdl_flak.p3d";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
	};
	class B_simc_USMCFLAK_M68_erdl_M43: B_simc_USMCFLAK_M41_erdl
	{
		displayName="[USMC/Flak] M-1941/68 Pack (Poncho Liner/M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Poncho Liner, ERDL";
		hiddenSelections[]=
		{
			"camo",
			"roll",
			"roll2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
	};
	class B_simc_USMCFLAK_M41_mortar: B_simc_USMCFLAK_M41
	{
		displayName="[USMC/Flak] M-1941/44 Pack (ordnance)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		model="\simc_mc_67\paket_41_mortar_flak.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class B_simc_USMCFLAK_M68: B_AssaultPack_rgr
	{
		displayName="[USMC/Flak] M-1941/68 Pack";
		author="Smicradeu";
		scope=2;
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1910";
		model="\simc_mc_67\paket_41_flak.p3d";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll",
			"roll2"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
		picture="\simc_uaf_67_preview\icons\sack_ca.paa";
		maximumLoad=120;
		mass=60;
	};
	class B_simc_USMCFLAK_M68_M43: B_simc_USMCFLAK_M68
	{
		displayName="[USMC/Flak] M-1941/68 Pack (M43)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"camo",
			"roll"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMCFLAK_M68_M43_roll: B_simc_USMCFLAK_M68
	{
		displayName="[USMC/Flak] M-1941/68 Pack (M43, Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"camo",
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shovel, Intrenching, M-1943";
	};
	class B_simc_USMCFLAK_M68_Roll: B_simc_USMCFLAK_M68
	{
		displayName="[USMC/Flak] M-1941/68 Pack (Shelter)";
		author="Smicradeu";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll2"
		};
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
	};
	class B_simc_USMCFLAK_M68_flat: B_simc_USMCFLAK_M68
	{
		displayName="[USMC/Flak] M-1941/68 Pack";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		model="\simc_mc_67\paket_41_roll_flak.p3d";
		hiddenSelections[]=
		{
			"camo",
			"sekop",
			"roll"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_67\data\paket_41_mc_nilon_co.paa",
			""
		};
	};
	class B_simc_USMCFLAK_M68_flat_M43: B_simc_USMCFLAK_M68_flat
	{
		displayName="[USMC/Flak] M-1941/68 Pack (M43)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"camo",
			"roll"
		};
	};
	class B_simc_USMCFLAK_M68_flat_M43_roll: B_simc_USMCFLAK_M68_flat
	{
		displayName="[USMC/Flak] M-1941/68 Pack (M43/shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class B_simc_USMCFLAK_M68_flat_roll: B_simc_USMCFLAK_M68_flat
	{
		displayName="[USMC/Flak] M-1941/68 Pack (shelter)";
		author="Smicradeu";
		descriptionShort="Carrier, Pack, Canvas, Field, OD, M-1941 w/ Shelter Half, OD";
		hiddenSelections[]=
		{
			"camo",
			"sekop"
		};
	};
	class B_simc_MC_rajio_base: B_AssaultPack_rgr
	{
		displayName="[USMC] AN/PRC25";
		author="Petr Svenda, ashton324";
		scope=2;
		descriptionShort="AN/PRC-25 w/ ST138 carrier";
		model="\simc_mc_68\pack_rajio_1.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\rajio_ca.paa";
		maximumLoad=40;
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
	class B_simc_MC_rajio_1: B_simc_MC_rajio_base
	{
		author="Petr Svenda, ashton324";
		displayName="[USMC] AN/PRC25 (M1941)";
		model="\simc_mc_68\pack_rajio_2.p3d";
		maximumLoad=120;
		mass=120;
		class TransportItems
		{
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=1;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellPurple
			{
				name="SmokeShellPurple";
				count=2;
			};
		};
	};
	class B_simc_MC_rajio_2: B_simc_MC_rajio_1
	{
		author="Petr Svenda, ashton324";
		model="\simc_mc_68\pack_rajio_3.p3d";
		maximumLoad=120;
		class TransportItems
		{
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=1;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=1;
			};
		};
	};
	class B_simc_MC_packboard_rajio_1: B_simc_MC_rajio_base
	{
		author="Petr Svenda, ashton324";
		displayName="[USMC] Packboard/ AN/PRC25 (Bandoleer)";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		model="\simc_mc_68\packboard_rajio_1.p3d";
		maximumLoad=150;
		mass=120;
	};
	class B_simc_MC_packboard_rajio_2: B_simc_MC_packboard_rajio_1
	{
		author="Petr Svenda, ashton324";
		model="\simc_mc_68\packboard_rajio_2.p3d";
		displayName="[USMC] Packboard/ AN/PRC25";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=150;
		mass=100;
	};
	class B_simc_MC_packboard_rajio_3: B_simc_MC_packboard_rajio_2
	{
		author="Petr Svenda, ashton324";
		model="\simc_mc_68\packboard_rajio_2.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=150;
		mass=90;
	};
	class B_simc_MC_packboard_1: B_simc_USMC65_M41
	{
		author="Petr Svenda, casper_TFG";
		displayName="[USMC] Packboard/Haversack/Ammo";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		model="\simc_mc_68\packboard_mc_1.p3d";
		maximumLoad=250;
		mass=100;
	};
	class B_simc_MC_packboard_2: B_simc_MC_packboard_1
	{
		author="Petr Svenda, casper_TFG";
		model="\simc_mc_68\packboard_mc_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=250;
		mass=100;
	};
	class B_simc_MC_packboard_3: B_simc_MC_packboard_1
	{
		displayName="[USMC] Packboard/Haversack/Ordnance";
		author="Petr Svenda, casper_TFG";
		model="\simc_mc_68\packboard_mc_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=250;
		mass=100;
	};
	class B_simc_MC_rajio_flak_base: B_AssaultPack_rgr
	{
		displayName="[USMC/Flak] AN/PRC25";
		author="Petr Svenda, ashton324";
		scope=2;
		descriptionShort="AN/PRC-25 w/ ST138 carrier";
		model="\simc_mc_68\pack_rajio_1_flak.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		picture="\simc_uaf_67_preview\icons\rajio_ca.paa";
		maximumLoad=40;
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
	class B_simc_MC_rajio_flak_1: B_simc_MC_rajio_flak_base
	{
		author="Petr Svenda, ashton324";
		displayName="[USMC/Flak] AN/PRC25 (M1941)";
		model="\simc_mc_68\pack_rajio_2_flak.p3d";
		maximumLoad=120;
		mass=120;
		class TransportItems
		{
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=1;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellPurple
			{
				name="SmokeShellPurple";
				count=2;
			};
		};
	};
	class B_simc_MC_rajio_flak_2: B_simc_MC_rajio_flak_1
	{
		author="Petr Svenda, ashton324";
		model="\simc_mc_68\pack_rajio_3_flak.p3d";
		maximumLoad=120;
		class TransportItems
		{
			class _xx_ItemRadio
			{
				name="ItemRadio";
				count=1;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=1;
			};
		};
	};
	class B_simc_MC_packboard_flak_rajio_1: B_simc_MC_rajio_base
	{
		author="Petr Svenda, ashton324";
		displayName="[USMC/Flak] Packboard/ AN/PRC25 (Bandoleer)";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		model="\simc_mc_68\packboard_flak_rajio_1.p3d";
		maximumLoad=150;
		mass=120;
	};
	class B_simc_MC_packboard_flak_rajio_2: B_simc_MC_packboard_flak_rajio_1
	{
		author="Petr Svenda, ashton324";
		model="\simc_mc_68\packboard_flak_rajio_2.p3d";
		displayName="[USMC/Flak] Packboard/ AN/PRC25";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=150;
		mass=100;
	};
	class B_simc_MC_packboard_flak_rajio_3: B_simc_MC_packboard_flak_rajio_2
	{
		author="Petr Svenda, ashton324";
		model="\simc_mc_68\packboard_flak_rajio_2.p3d";
		hiddenSelections[]=
		{
			"extras"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=150;
		mass=90;
	};
	class B_simc_MC_packboard_flak_1: B_simc_USMC65_M41
	{
		author="Petr Svenda, casper_TFG";
		displayName="[USMC/Flak] Packboard/Haversack/Ammo";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		model="\simc_mc_68\packboard_flak_mc_1.p3d";
		maximumLoad=250;
		mass=120;
	};
	class B_simc_MC_packboard_flak_2: B_simc_MC_packboard_flak_1
	{
		author="Petr Svenda, casper_TFG";
		model="\simc_mc_68\packboard_flak_mc_3.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=250;
		mass=120;
	};
	class B_simc_MC_packboard_flak_3: B_simc_MC_packboard_flak_1
	{
		displayName="[USMC/Flak] Packboard/Haversack/Ordnance";
		author="Petr Svenda, casper_TFG";
		model="\simc_mc_68\packboard_flak_mc_2.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		maximumLoad=250;
		mass=120;
	};
	class Item_Base_F;
	class Item_U_Simc_TCU_mk3_blench: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Tropical Combat Fatigues 1967";
		author="SmithcarDAK";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_Simc_TCU_mk3_blench
			{
				name="U_Simc_TCU_mk3_blench";
				count=1;
			};
		};
	};
	class Item_U_Simc_OG107_mk1: Item_U_Simc_TCU_mk3_blench
	{
		displayName="OG-107 1952";
		class TransportItems
		{
			class U_Simc_OG107_mk1_blench
			{
				name="U_Simc_OG107_mk1_blench";
				count=1;
			};
		};
	};
	class Vest_Base_F;
	class Ground_V_Simc_61: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		reversed=1;
		displayName="[USMC] M1961 Kit";
		author="Justin + 089";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class V_Simc_61
			{
				name="V_Simc_61";
				count=1;
			};
		};
	};
	class Ground_V_Simc_flak_55: Ground_V_Simc_61
	{
		displayName="[USMC] M1955 Vest";
		author="Casper_TFG";
		class TransportItems
		{
			class V_Simc_flak_55
			{
				name="V_Simc_flak_55";
				count=1;
			};
		};
	};
	class Headgear_Base_F;
	class Ground_H_Simc_MC_M1_bitch_ns: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		reversed=1;
		displayName="[USMC] M1 Helmet (Mitchell)";
		author="Mo + Eth + 089 + Justin + Cat + Lak";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class H_Simc_MC_M1_bitch_ns
			{
				name="H_Simc_MC_M1_bitch_ns";
				count=1;
			};
		};
	};
	class Ground_H_Simc_MC_M1_bitch_ben: Ground_H_Simc_MC_M1_bitch_ns
	{
		displayName="[USMC] M1 Helmet (Mitchell/Band)";
		class TransportItems
		{
			class H_Simc_MC_M1_bitch_ben
			{
				name="H_Simc_MC_M1_bitch_ben";
				count=1;
			};
		};
	};
	class Ground_H_Simc_MC_M1_bitch_low: Ground_H_Simc_MC_M1_bitch_ns
	{
		class TransportItems
		{
			class H_Simc_MC_M1_bitch_low
			{
				name="H_Simc_MC_M1_bitch_low";
				count=1;
			};
		};
	};
	class Ground_H_Simc_MC_M1_bitch_low_rot: Ground_H_Simc_MC_M1_bitch_ns
	{
		class TransportItems
		{
			class H_Simc_MC_M1_bitch_low_rot
			{
				name="H_Simc_MC_M1_bitch_low_rot";
				count=1;
			};
		};
	};
	class Ground_H_Simc_MC_M1_bitch_op_2: Ground_H_Simc_MC_M1_bitch_ns
	{
		class TransportItems
		{
			class H_Simc_MC_M1_bitch_op_2
			{
				name="H_Simc_MC_M1_bitch_op_2";
				count=1;
			};
		};
	};
	class Ground_H_Simc_MC_M1_muggen: Ground_H_Simc_MC_M1_bitch_ns
	{
		displayName="[USMC] M1 Helmet (Mosquito net)";
		class TransportItems
		{
			class H_Simc_MC_M1_muggen
			{
				name="H_Simc_MC_M1_muggen";
				count=1;
			};
		};
	};
	class Ground_H_Simc_MC_M1_muggen_B: Ground_H_Simc_MC_M1_muggen
	{
		class TransportItems
		{
			class H_Simc_MC_M1_muggen_B
			{
				name="H_Simc_MC_M1_muggen_B";
				count=1;
			};
		};
	};
	class Ground_H_Simc_MC_M1_muggen_c: Ground_H_Simc_MC_M1_muggen
	{
		class TransportItems
		{
			class H_Simc_MC_M1_muggen_c
			{
				name="H_Simc_MC_M1_muggen_c";
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
		author="Simcardigs";
		scope=0;
		model="\simc_uaf_65\suitpack_og107.p3d";
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
	class U_Simc_OG107_mk1_MC: U_Simc_67_BasicBody
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="[USMC] OG-107 1952";
		model="\simc_uaf_65\suitpack_og107.p3d";
		picture="\simc_uaf_67_preview\icons\og107_ca.paa";
		descriptionShort="Uniform, Fatigues, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_MC";
		};
	};
	class U_Simc_OG107_mk1_nomex_MC: U_Simc_OG107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_nomex_MC";
		};
	};
	class U_Simc_OG107_mk1_trop_MC: U_Simc_OG107_mk1_MC
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_trop_MC";
		};
	};
	class U_Simc_OG107_mk1_trop_nomex_MC: U_Simc_OG107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_trop_nomex_MC";
		};
	};
	class U_Simc_OG107_mk1_tuck_MC: U_Simc_OG107_mk1_MC
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_MC";
		};
	};
	class U_Simc_OG107_mk1_tuck_nomex_MC: U_Simc_OG107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_nomex_MC";
		};
	};
	class U_Simc_OG107_mk1_tuck_trop_MC: U_Simc_OG107_mk1_MC
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_trop_MC";
		};
	};
	class U_Simc_OG107_mk1_tuck_trop_nomex_MC: U_Simc_OG107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_trop_nomex_MC";
		};
	};
	class U_Simc_OG107_mk1_gas_MC: U_Simc_OG107_mk1_MC
	{
		author="Brijnvag";
		displayName="[USMC] OG-107 1952/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_MC";
		};
	};
	class U_Simc_OG107_mk1_gas_nomex_MC: U_Simc_OG107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="[USMC] OG-107 1952/M17 (Nomex)";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_nomex_MC";
		};
	};
	class U_Simc_OG107_mk1_gas_trop_MC: U_Simc_OG107_mk1_gas_MC
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_trop_MC";
		};
	};
	class U_Simc_OG107_mk1_gas_trop_nomex_MC: U_Simc_OG107_mk1_gas_MC
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="[USMC] OG-107 1952/M17 (Nomex)";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_trop_nomex_MC";
		};
	};
	class U_Simc_OG107_mk3_MC: U_Simc_OG107_mk1_MC
	{
		author="Brijnvag";
		scope=2;
		displayName="[USMC] OG-107 1964";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_MC";
		};
	};
	class U_Simc_OG107_mk3_nomex_MC: U_Simc_OG107_mk1_MC
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_nomex_MC";
		};
	};
	class U_Simc_OG107_mk3_trop_MC: U_Simc_OG107_mk3_MC
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_trop_MC";
		};
	};
	class U_Simc_OG107_mk3_trop_nomex_MC: U_Simc_OG107_mk3_MC
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="[USMC] OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_trop_nomex_MC";
		};
	};
	class U_Simc_OG107_mk3_tuck_MC: U_Simc_OG107_mk3_MC
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_MC";
		};
	};
	class U_Simc_OG107_mk3_tuck_nomex_MC: U_Simc_OG107_mk3_MC
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="[USMC] OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_nomex_MC";
		};
	};
	class U_Simc_OG107_mk3_tuck_trop_MC: U_Simc_OG107_mk3_tuck_MC
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_trop_MC";
		};
	};
	class U_Simc_OG107_mk3_tuck_trop_nomex_MC: U_Simc_OG107_mk3_tuck_MC
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="[USMC] OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_trop_nomex_MC";
		};
	};
	class U_Simc_OG107_mk3_gas_MC: U_Simc_OG107_mk3_MC
	{
		author="Brijnvag";
		displayName="[USMC] OG-107 1964/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_MC";
		};
	};
	class U_Simc_OG107_mk3_gas_nomex_MC: U_Simc_OG107_mk3_MC
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="[USMC] OG-107 1964/M17 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_nomex_MC";
		};
	};
	class U_Simc_OG107_mk3_gas_trop_MC: U_Simc_OG107_mk3_gas_MC
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_trop_MC";
		};
	};
	class U_Simc_OG107_mk3_gas_trop_nomex_MC: U_Simc_OG107_mk3_gas_MC
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="[USMC] OG-107 1964/M17 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_trop_nomex_MC";
		};
	};
	class U_Simc_OG107_tee_MC: U_Simc_OG107_mk1_MC
	{
		author="Brijnvag";
		displayName="[USMC] OG-107 (tee)";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_tee_MC";
		};
	};
	class U_Simc_OG107_tee_MC_weiss: U_Simc_OG107_tee_MC
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_tee_MC_weiss";
		};
	};
	class U_Simc_OG107_tee_MC_gas: U_Simc_OG107_mk1_MC
	{
		author="Brijnvag";
		displayName="[USMC] OG-107 (tee)/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_tee_MC_gas";
		};
	};
	class U_Simc_OG107_tee_MC_gas_weiss: U_Simc_OG107_tee_MC_gas
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_tee_MC_gas_weiss";
		};
	};
	class U_Simc_OG107_mk1_blench: U_Simc_67_BasicBody
	{
		author="sim-kar98-dough";
		scope=2;
		displayName="OG-107 1952";
		model="\simc_uaf_65\suitpack_og107.p3d";
		picture="\simc_uaf_67_preview\icons\og107_ca.paa";
		descriptionShort="Uniform, Fatigues, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_blench";
		};
	};
	class U_Simc_OG107_mk1_nomex_blench: U_Simc_OG107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_nomex_blench";
		};
	};
	class U_Simc_OG107_mk1_trop_blench: U_Simc_OG107_mk1_blench
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_trop_blench";
		};
	};
	class U_Simc_OG107_mk1_trop_nomex_blench: U_Simc_OG107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_trop_nomex_blench";
		};
	};
	class U_Simc_OG107_mk1_tuck_blench: U_Simc_OG107_mk1_blench
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_blench";
		};
	};
	class U_Simc_OG107_mk1_tuck_nomex_blench: U_Simc_OG107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_nomex_blench";
		};
	};
	class U_Simc_OG107_mk1_tuck_trop_blench: U_Simc_OG107_mk1_blench
	{
		author="Brijnvag";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_trop_blench";
		};
	};
	class U_Simc_OG107_mk1_tuck_trop_nomex_blench: U_Simc_OG107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="OG-107 1952 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_tuck_trop_nomex_blench";
		};
	};
	class U_Simc_OG107_mk1_gas_blench: U_Simc_OG107_mk1_blench
	{
		author="Brijnvag";
		displayName="OG-107 1952/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_blench";
		};
	};
	class U_Simc_OG107_mk1_gas_nomex_blench: U_Simc_OG107_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="OG-107 1952/M17 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_nomex_blench";
		};
	};
	class U_Simc_OG107_mk1_gas_trop_blench: U_Simc_OG107_mk1_gas_blench
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_trop_blench";
		};
	};
	class U_Simc_OG107_mk1_gas_trop_nomex_blench: U_Simc_OG107_mk1_gas_blench
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="OG-107 1952/M17 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk1_gas_trop_nomex_blench";
		};
	};
	class U_Simc_OG107_mk3_blench: U_Simc_OG107_mk1_blench
	{
		author="Brijnvag";
		scope=2;
		displayName="OG-107 1964";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_blench";
		};
	};
	class U_Simc_OG107_mk3_nomex_blench: U_Simc_OG107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_nomex_blench";
		};
	};
	class U_Simc_OG107_mk3_trop_blench: U_Simc_OG107_mk3_blench
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_trop_blench";
		};
	};
	class U_Simc_OG107_mk3_trop_nomex_blench: U_Simc_OG107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_trop_nomex_blench";
		};
	};
	class U_Simc_OG107_mk3_tuck_blench: U_Simc_OG107_mk3_blench
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_blench";
		};
	};
	class U_Simc_OG107_mk3_tuck_nomex_blench: U_Simc_OG107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_nomex_blench";
		};
	};
	class U_Simc_OG107_mk3_tuck_trop_blench: U_Simc_OG107_mk3_tuck_blench
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_trop_blench";
		};
	};
	class U_Simc_OG107_mk3_tuck_trop_nomex_blench: U_Simc_OG107_mk3_tuck_blench
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="OG-107 1964 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_tuck_trop_nomex_blench";
		};
	};
	class U_Simc_OG107_mk3_gas_blench: U_Simc_OG107_mk3_blench
	{
		author="Brijnvag";
		displayName="OG-107 1964/M17";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_blench";
		};
	};
	class U_Simc_OG107_mk3_gas_nomex_blench: U_Simc_OG107_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="OG-107 1964/M17 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_nomex_blench";
		};
	};
	class U_Simc_OG107_mk3_gas_trop_blench: U_Simc_OG107_mk3_gas_blench
	{
		author="Brijnvag";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_trop_blench";
		};
	};
	class U_Simc_OG107_mk3_gas_trop_nomex_blench: U_Simc_OG107_mk3_gas_blench
	{
		author="Lennard, Frenchy, Simcardo";
		displayName="OG-107 1964/M17 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_og107_mk3_gas_trop_nomex_blench";
		};
	};
	class U_Simc_TCU_mk3_blench: U_Simc_67_BasicBody
	{
		author="Casper_TFG";
		scope=2;
		displayName="Tropical Combat Fatigues 1967";
		model="\simc_uaf_67\suitpack_tcu.p3d";
		picture="\simc_uaf_67_preview\icons\tcu_ca.paa";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_blench";
		};
	};
	class U_Simc_TCU_mk3_nomex_blench: U_Simc_TCU_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="Tropical Combat Fatigues 1967 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_nomex_blench";
		};
	};
	class U_Simc_TCU_mk3_trop_blench: U_Simc_TCU_mk3_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_trop_blench";
		};
	};
	class U_Simc_TCU_mk3_cute_blench: U_Simc_TCU_mk3_blench
	{
		displayName="Tropical Combat Fatigues 1967 (cut)";
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_cute_blench";
		};
	};
	class U_Simc_TCU_mk3_poplijn_blench: U_Simc_TCU_mk3_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_poplijn_blench";
		};
	};
	class U_Simc_TCU_mk3_poplijn_nomex_blench: U_Simc_TCU_mk3_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="Tropical Combat Fatigues 1967 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_poplijn_nomex_blench";
		};
	};
	class U_Simc_TCU_mk3_poplijn_trop_blench: U_Simc_TCU_mk3_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_poplijn_trop_blench";
		};
	};
	class U_Simc_TCU_mk1_blench: U_Simc_TCU_mk3_blench
	{
		author="Casper_TFG";
		scope=2;
		displayName="Tropical Combat Fatigues 1963";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_blench";
		};
	};
	class U_Simc_TCU_mk1_nomex_blench: U_Simc_TCU_mk1_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="Tropical Combat Fatigues 1963 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_nomex_blench";
		};
	};
	class U_Simc_TCU_mk1_trop_blench: U_Simc_TCU_mk1_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_trop_blench";
		};
	};
	class U_Simc_TCU_mk1_roll_blench: U_Simc_TCU_mk1_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_roll_blench";
		};
	};
	class U_Simc_TCU_mk1_og_blench: U_Simc_TCU_mk1_blench
	{
		author="Casper_TFG";
		displayName="Tropical Combat Jacket 1963/OG107";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_blench";
		};
	};
	class U_Simc_TCU_mk1_og_trop_blench: U_Simc_TCU_mk1_og_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_trop_blench";
		};
	};
	class U_Simc_TCU_mk1_og_gas_blench: U_Simc_TCU_mk1_blench
	{
		author="Casper_TFG";
		displayName="Tropical Combat Jacket 1963/OG107/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_gas_blench";
		};
	};
	class U_Simc_TCU_mk1_og_gas_trop_blench: U_Simc_TCU_mk1_og_gas_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_gas_trop_blench";
		};
	};
	class U_Simc_TCU_mk2_blench: U_Simc_TCU_mk3_blench
	{
		author="Casper_TFG";
		scope=2;
		displayName="Tropical Combat Fatigues 1966";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_blench";
		};
	};
	class U_Simc_TCU_mk2_nomex_blench: U_Simc_TCU_mk2_blench
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="Tropical Combat Fatigues 1966 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_nomex_blench";
		};
	};
	class U_Simc_TCU_mk2_trop_blench: U_Simc_TCU_mk2_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_trop_blench";
		};
	};
	class U_Simc_TCU_mk2_roll_blench: U_Simc_TCU_mk2_blench
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_roll_blench";
		};
	};
	class U_Simc_TCU_mk3_mc: U_Simc_67_BasicBody
	{
		author="Casper_TFG";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues 1967";
		model="\simc_uaf_67\suitpack_tcu.p3d";
		picture="\simc_uaf_67_preview\icons\tcu_ca.paa";
		descriptionShort="Uniform, Combat, Tropical, OG-107";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_mc";
		};
	};
	class U_Simc_TCU_mk3_nomex_mc: U_Simc_TCU_mk3_mc
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues 1967 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_nomex_mc";
		};
	};
	class U_Simc_TCU_mk3_trop_mc: U_Simc_TCU_mk3_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_trop_mc";
		};
	};
	class U_Simc_TCU_mk3_poplijn_mc: U_Simc_TCU_mk3_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_poplijn_mc";
		};
	};
	class U_Simc_TCU_mk3_poplijn_nomex_mc: U_Simc_TCU_mk3_mc
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues 1967 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_poplijn_nomex_mc";
		};
	};
	class U_Simc_TCU_mk3_poplijn_trop_mc: U_Simc_TCU_mk3_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk3_poplijn_trop_mc";
		};
	};
	class U_Simc_TCU_mk1_mc: U_Simc_TCU_mk3_mc
	{
		author="Casper_TFG";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues 1963";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_mc";
		};
	};
	class U_Simc_TCU_mk1_nomex_mc: U_Simc_TCU_mk1_mc
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues 1963 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_nomex_mc";
		};
	};
	class U_Simc_TCU_mk1_trop_mc: U_Simc_TCU_mk1_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_trop_mc";
		};
	};
	class U_Simc_TCU_mk1_roll_mc: U_Simc_TCU_mk1_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_roll_mc";
		};
	};
	class U_Simc_TCU_mk1_og_mc: U_Simc_TCU_mk1_mc
	{
		author="Casper_TFG";
		displayName="[USMC] Tropical Combat Jacket 1963/OG107";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_mc";
		};
	};
	class U_Simc_TCU_mk1_og_trop_mc: U_Simc_TCU_mk1_og_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_trop_mc";
		};
	};
	class U_Simc_TCU_mk1_og_gas_mc: U_Simc_TCU_mk1_mc
	{
		author="Casper_TFG";
		displayName="[USMC] Tropical Combat Jacket 1963/OG107/M17";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_gas_mc";
		};
	};
	class U_Simc_TCU_mk1_og_gas_trop_mc: U_Simc_TCU_mk1_og_gas_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk1_og_gas_trop_mc";
		};
	};
	class U_Simc_TCU_mk2_mc: U_Simc_TCU_mk3_mc
	{
		author="Casper_TFG";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues 1966";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_mc";
		};
	};
	class U_Simc_TCU_mk2_nomex_mc: U_Simc_TCU_mk2_mc
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues 1966 (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_nomex_mc";
		};
	};
	class U_Simc_TCU_mk2_trop_mc: U_Simc_TCU_mk2_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_trop_mc";
		};
	};
	class U_Simc_TCU_mk2_roll_mc: U_Simc_TCU_mk2_mc
	{
		author="Casper_TFG";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_mk2_roll_mc";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc: U_Simc_TCU_mk3_mc
	{
		author="Dopest Ghast in stad";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues ERDL-Low";
		model="\simc_uaf_67\suitpack_tcu.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
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
			uniformClass="simc_tcu_erdl_mc_l";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_nomex: U_Simc_TCU_mk3_erdl_mc
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues ERDL-Low (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_nomex";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_trop: U_Simc_TCU_mk3_erdl_mc
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_trop";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_top: U_Simc_TCU_mk3_erdl_mc
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_top";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_low: U_Simc_TCU_mk3_erdl_mc
	{
		author="vagina engineer";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_low";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_H: U_Simc_TCU_mk3_mc
	{
		author="Dopest Ghast in stad";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues ERDL-High";
		model="\simc_uaf_67\suitpack_tcu.p3d";
		picture="\simc_uaf_67_preview\icons\arvn_erdl_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\tcu_mk3_erdl_H_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_H";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_H_nomex: U_Simc_TCU_mk3_erdl_mc_H
	{
		author="Lennard, Frenchy, Simcardo";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues ERDL-High (Nomex)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_H_nomex";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_H_trop: U_Simc_TCU_mk3_erdl_mc_H
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_H_trop";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_H_top: U_Simc_TCU_mk3_erdl_mc_H
	{
		author="nil-acht-neun";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_H_top";
		};
	};
	class U_Simc_TCU_mk3_erdl_mc_H_low: U_Simc_TCU_mk3_erdl_mc_H
	{
		author="vagina engineer";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_erdl_mc_H_low";
		};
	};
	class U_Simc_TCU_tee_mc: U_Simc_TCU_mk3_mc
	{
		author="Vagineer";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues (tee)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_tee_mc";
		};
	};
	class U_Simc_TCU_tee_mc_weiss: U_Simc_TCU_tee_mc
	{
		author="Brainless Vagineer";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_tee_mc_weiss";
		};
	};
	class U_Simc_TCU_tee_1mardiv: U_Simc_TCU_tee_mc
	{
		author="Brainless Vagineer";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_tee_1mardiv";
		};
	};
	class U_Simc_TCU_tee_mc_erdl: U_Simc_TCU_tee_mc
	{
		author="Brainless Vagineer";
		scope=2;
		displayName="[USMC] Tropical Combat Fatigues ERDL (tee)";
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_tee_mc_erdl";
		};
	};
	class U_Simc_TCU_tee_1mardiv_erdl: U_Simc_TCU_tee_mc_erdl
	{
		author="Brainless Vagineer";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="simc_tcu_tee_1mardiv_erdl";
		};
	};
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_Simc_MC_M1_67_base: H_HelmetB
	{
		author="Motta + Ethridge + 089";
		scope=1;
		displayName="[USMC] M1 Helmet";
		picture="\simc_uaf_67_preview\icons\pot_btich_ca.paa";
		model="\simc_uaf_65\helmet_m1_F.p3d";
		hiddenSelections[]=
		{
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
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
	class H_Simc_MC_M1_muggen: H_Simc_MC_M1_67_base
	{
		author="Mo + Eth + 089";
		scope=2;
		displayName="[USMC] M1 Helmet (Mosquito net)";
		Model="\simc_mc_67\helmet_m1_mug.p3d";
		picture="\simc_uaf_67_preview\icons\pot_green_ca.paa";
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
			uniformModel="\simc_mc_67\helmet_m1_mug.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_MC_M1_muggen_c: H_Simc_MC_M1_muggen
	{
		author="Mo + Eth + 089 + zwijn";
		scope=2;
		displayName="[USMC] M1 Helmet (Mosquito net/Bandages)";
		Model="\simc_mc_67\helmet_m1_mug_c.p3d";
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
			uniformModel="\simc_mc_67\helmet_m1_mug_c.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_MC_M1_muggen_B: H_Simc_MC_M1_muggen
	{
		author="Mo + Eth + 089 + zwijn";
		scope=2;
		displayName="[USMC] M1 Helmet (Mosquito net/Bandages)";
		Model="\simc_mc_67\helmet_m1_mug_b.p3d";
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
			uniformModel="\simc_mc_67\helmet_m1_mug_b.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class H_Simc_MC_M1_bitch_op: H_Simc_MC_M1_67_base
	{
		author="Mo + Eth + 089 + Justin + ItsJustCat + David";
		scope=2;
		displayName="[USMC] M1 Helmet (Mitchell)";
		picture="\simc_uaf_67_preview\icons\pot_bitch_ca.paa";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_ns: H_Simc_MC_M1_bitch_op
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_low: H_Simc_MC_M1_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_low_rot: H_Simc_MC_M1_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_weiss_co.paa",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_op_2: H_Simc_MC_M1_bitch_op
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_OP.p3d";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_OP.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_erla: H_Simc_MC_M1_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_Cl.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1_bitch_erla_ns: H_Simc_MC_M1_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_jellwick_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_F_erla.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1_bitch_ben: H_Simc_MC_M1_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_ben.p3d";
		displayName="[USMC] M1 Helmet (Mitchell/Band)";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_low_ben: H_Simc_MC_M1_bitch_ben
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_ben_low.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_low_ben_op: H_Simc_MC_M1_bitch_ben
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_jellwick_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_op: H_Simc_MC_M1_67_base
	{
		author="Mo + Eth + 089 + Justin + Lakarak";
		scope=2;
		displayName="[USMC] M1 Helmet (Mitchell-tan)";
		picture="\simc_uaf_67_preview\icons\pot_tan_ca.paa";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_ns: H_Simc_MC_M1_bitch_flip_op
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_low: H_Simc_MC_M1_bitch_flip_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_op_2: H_Simc_MC_M1_bitch_flip_op
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_OP.p3d";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_OP.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_ben: H_Simc_MC_M1_bitch_flip_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_ben.p3d";
		displayName="[USMC] M1 Helmet (Mitchell-tan/Band)";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_low_ben: H_Simc_MC_M1_bitch_flip_ben
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_ben_low.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_op: H_Simc_MC_M1_67_base
	{
		author="Mo + Eth + 089 + Justin + ItsJustCat + David";
		scope=2;
		displayName="[USMC] M1C Helmet (Mitchell)";
		picture="\simc_uaf_67_preview\icons\pot_bitch_ca.paa";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_jellwick_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_Op.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_ns: H_Simc_MC_M1C_bitch_op
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_low: H_Simc_MC_M1C_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_low_rot: H_Simc_MC_M1C_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_op_2: H_Simc_MC_M1C_bitch_op
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_OP.p3d";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_OP.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_ben: H_Simc_MC_M1C_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_ben.p3d";
		displayName="[USMC] M1C Helmet (Mitchell/Band)";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_weiss_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_low_ben: H_Simc_MC_M1C_bitch_ben
	{
		author="Mo + Eth + 089 + Justin + David";
		model="\simc_mc_67\helmet_m1_ben_low.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_low_ben_op: H_Simc_MC_M1C_bitch_ben
	{
		author="Mo + Eth + 089 + Justin + David";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_jellwick_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\helmet_m1_ben_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b1: H_Simc_MC_M1_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		displayName="[USMC] M1 Helmet (Mitchell/Band)";
		picture="\simc_uaf_67_preview\icons\pot_bitch_ca.paa";
		uniformModel="\simc_mc_67\helmet_m1_F.p3d";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b2: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b3: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		displayName="[USMC] M1 Helmet (Mitchell/Mags)";
		scope=1;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b4: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		displayName="[USMC] M1 Helmet (Mitchell/Mag)";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b5: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_jellwick_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b6: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_weiss_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b7: H_Simc_MC_M1_bitch_b1
	{
		displayName="[USMC] M1 Helmet (Mitchell/Bandages)";
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_jellwick_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b8: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_weiss_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_b9: H_Simc_MC_M1_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b9.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b1: H_Simc_MC_M1_bitch_flip_ns
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		displayName="[USMC] M1 Helmet (Mitchell-Tan/Band)";
		picture="\simc_uaf_67_preview\icons\pot_tan_ca.paa";
		uniformModel="\simc_mc_67\helmet_m1_F.p3d";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b: H_Simc_MC_M1_bitch_flip_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b2: H_Simc_MC_M1_bitch_flip_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b3: H_Simc_MC_M1_bitch_flip_b1
	{
		displayName="[USMC] M1 Helmet (Mitchell-Tan/Mags)";
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=1;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b4: H_Simc_MC_M1_bitch_flip_b1
	{
		displayName="[USMC] M1 Helmet (Mitchell-Tan/Mag)";
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=1;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b5: H_Simc_MC_M1_bitch_flip_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b6: H_Simc_MC_M1_bitch_flip_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b7: H_Simc_MC_M1_bitch_flip_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		displayName="[USMC] M1 Helmet (Mitchell-Tan/Bandages)";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b8: H_Simc_MC_M1_bitch_flip_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1_bitch_flip_b9: H_Simc_MC_M1_bitch_flip_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_flip_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b9.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b1: H_Simc_MC_M1C_bitch_ns
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		displayName="[USMC] M1C Helmet (Mitchell/Band)";
		picture="\simc_uaf_67_preview\icons\pot_bitch_ca.paa";
		uniformModel="\simc_mc_67\helmet_m1_F.p3d";
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b: H_Simc_MC_M1C_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b2: H_Simc_MC_M1C_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b2.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b5: H_Simc_MC_M1C_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b5.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b6: H_Simc_MC_M1C_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b6.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b7: H_Simc_MC_M1C_bitch_b1
	{
		displayName="[USMC] M1C Helmet (Mitchell/Bandages)";
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"starpe",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_dirt_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b7.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"starpe"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b8: H_Simc_MC_M1C_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_rot_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b8.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_MC_M1C_bitch_b9: H_Simc_MC_M1C_bitch_b1
	{
		author="Mo + Eth + 089 + Justin + Cat + Lak + zwijn";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_67\data\pot_cover_bitch_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\simc_mc_67\helmet_m1_b9.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Booniehat_khk: ItemCore
	{
		class ItemInfo;
	};
	class H_Simc_MC_hat_base: H_Booniehat_khk
	{
		author="Casper_TFG";
		scope=1;
		displayName="[USMC] P58 Utility hat";
		picture="\simc_uaf_67_preview\icons\cap_hbt_ca.paa";
		model="\simc_mc_67\hat_util_1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\hats_trop_co.paa"
		};
		allowedFacewear[]=
		{
			"G_M17_Gasbag",
			0.89999998,
			"G_Anduk_1",
			0.0099999998,
			"G_Anduk_2",
			0.0099999998
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\hat_util_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_MC_hat_1: H_Simc_MC_hat_base
	{
		author="Casper_TFG";
		scope=2;
		displayName="[USMC] P58 Utility hat";
		model="\simc_mc_67\hat_util_1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\hats_trop_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\simc_mc_67\hat_util_1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_MC_hat_2: H_Simc_MC_hat_1
	{
		author="Casper_TFG";
		model="\simc_mc_67\hat_util_2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\hat_util_2.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_MC_hat_3: H_Simc_MC_hat_1
	{
		author="Casper_TFG";
		model="\simc_mc_67\hat_util_3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\hat_util_3.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_MC_hat_erdl_1: H_Simc_MC_hat_1
	{
		author="Casper_TFG";
		displayName="[USMC] P58 Utility hat ERDL";
		model="\simc_mc_67\hat_util_1.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_68\data\hats_trop_erdl_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\hat_util_1.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_MC_hat_erdl_2: H_Simc_MC_hat_erdl_1
	{
		author="Casper_TFG";
		model="\simc_mc_67\hat_util_2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\hat_util_2.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Simc_MC_hat_erdl_3: H_Simc_MC_hat_erdl_1
	{
		author="Casper_TFG";
		model="\simc_mc_67\hat_util_3.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\hat_util_3.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class VestItem;
	class Vest_Camo_Base;
	class V_Simc_61_basic: Vest_Camo_Base
	{
		author="Justin ft. 089";
		scope=1;
		displayName="[USMC] M61 Kit";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_open.p3d";
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
	class V_Simc_61: V_Simc_61_basic
	{
		author="Justin + 089";
		scope=2;
		displayName="[USMC] M1961 Kit";
		model="\simc_mc_67\belt_61_drop.p3d";
		picture="\simc_uaf_67_preview\icons\belt_61_ca.paa";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_61_alt: V_Simc_61
	{
		author="Justin + Jujurat + 089";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61_alt.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_61_rear: V_Simc_61
	{
		author="Justin + Jujurat + 089";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_68\belt_61_rear.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_61_ligt: V_Simc_61
	{
		author="Justin + Jujurat + 089";
		hiddenSelections[]=
		{
			"zusp",
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61.p3d";
			hiddenSelections[]=
			{
				"zusp",
				"band"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_61_bandoleer: V_Simc_61
	{
		displayName="[USMC] M1961 Kit/Bandoleer";
		author="schmindtkardeu";
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
			uniformModel="\simc_mc_67\belt_61.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_61_morser: V_Simc_61
	{
		displayName="[USMC] M1961 Kit/Mortar";
		author="schmindtkardeu";
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
			uniformModel="\simc_mc_67\belt_61.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply250";
			mass=15;
		};
	};
	class V_Simc_61_56: V_Simc_61
	{
		author="Justin + Jujurat + 089";
		displayName="[USMC] M1961 Kit/M56";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61_56.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_61_56_bandoleer: V_Simc_61_56
	{
		author="Justin + Jujurat + 089";
		displayName="[USMC] M1961 Kit/M56/Bandoleer";
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
			uniformModel="\simc_mc_67\belt_61_56.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_61_56_morser: V_Simc_61_56
	{
		author="Justin + Jujurat + 089";
		displayName="[USMC] M1961 Kit/M56/Mortar";
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
			uniformModel="\simc_mc_67\belt_61_56.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply250";
			mass=15;
		};
	};
	class V_Simc_61_79: V_Simc_61
	{
		author="Justin + 089";
		displayName="[USMC] M1961 Kit/40mm";
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
			uniformModel="\simc_mc_67\belt_61_79.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_61_med: V_Simc_61
	{
		author="Justin + 089";
		displayName="[USMC] M1961 Kit/Corpsman";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61_med.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=30;
		};
	};
	class V_Simc_61_45: V_Simc_61
	{
		author="Justin + 089";
		displayName="[USMC] M1961 Kit/Sidearm";
		hiddenSelections[]=
		{
			"nadeban"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61_79.p3d";
			hiddenSelections[]=
			{
				"nadeban"
			};
			containerClass="Supply60";
			mass=15;
		};
	};
	class V_Simc_61_45_alt: V_Simc_61_45
	{
		author="Justin + 089";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61_45.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=15;
		};
	};
	class V_Simc_61_45_bandoleer: V_Simc_61_45_alt
	{
		displayName="[USMC] M1961 Kit/Sidearm/Bandoleer";
		author="Justin + 089";
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
			uniformModel="\simc_mc_67\belt_61_45.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_Simc_61_60: V_Simc_61_45
	{
		author="Justin + 089 + Jujurat";
		displayName="[USMC] M1961 Kit/MG";
		hiddenSelections[]=
		{
			"regt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\belt_61_60.p3d";
			hiddenSelections[]=
			{
				"regt",
				"left_B"
			};
			containerClass="Supply180";
			mass=15;
		};
	};
	class V_Simc_61_60_2: V_Simc_61_60
	{
		author="Justin + 089 + Jujurat";
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
			uniformModel="\simc_mc_67\belt_61_60.p3d";
			hiddenSelections[]=
			{
				"left",
				"regt"
			};
			containerClass="Supply180";
			mass=15;
		};
	};
	class V_Simc_flak_55: V_Simc_61_basic
	{
		author="089";
		scope=2;
		displayName="[USMC] M1955 Vest";
		model="\simc_mc_67\vest_55_drop.p3d";
		picture="\simc_uaf_67_preview\icons\falk_55_ca.paa";
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
			uniformModel="\simc_mc_67\vest_55.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply20";
			mass=85;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=12;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
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
	class V_Simc_flak_55_open: V_Simc_flak_55
	{
		author="9315";
		displayName="[USMC] M1955 Vest";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_open.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply20";
			mass=85;
		};
	};
	class V_Simc_flak_55_bandoleer: V_Simc_flak_55
	{
		author="089";
		displayName="[USMC] M1955 Vest/Bandoleer";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"belt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt_open_laat.p3d";
			hiddenSelections[]=
			{
				"belt"
			};
			containerClass="Supply90";
			mass=85;
		};
	};
	class V_Simc_flak_55_M61: V_Simc_flak_55
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/Kit";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=85;
		};
	};
	class V_Simc_flak_55_M61_bandoleer: V_Simc_flak_55
	{
		scope=1;
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/Kit/Bandoleer";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_belt.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=85;
		};
	};
	class V_Simc_flak_55_M61_open: V_Simc_flak_55_M61
	{
		author="089 + Justin";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt_open.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_open_bandoleer: V_Simc_flak_55_M61_open
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/Kit/Bandoleer";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_belt_open.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_open_morser: V_Simc_flak_55_M61_open
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/Kit/Mortar";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_belt_open.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply250";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_laat: V_Simc_flak_55_M61
	{
		author="089 + Justin + Jujurat";
		model="\simc_mc_67\vest_55_drop.p3d";
		displayName="[USMC] M1955 Vest/LCE";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt_open_laat.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_laat_bandoleer: V_Simc_flak_55_M61_open
	{
		author="089 + Justin + Jujurat";
		displayName="[USMC] M1955 Vest/LCE/Bandoleer";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_belt_open_laat.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_79: V_Simc_flak_55_M61
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/40mm";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"belt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt_open_79.p3d";
			hiddenSelections[]=
			{
				"belt"
			};
			containerClass="Supply30";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_79_belt: V_Simc_flak_55_M61_79
	{
		author="089 + Justin";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_belt_open_79.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_45: V_Simc_flak_55_M61_79
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/Sidearm";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"nadeban"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt_open_79.p3d";
			hiddenSelections[]=
			{
				"nadeban"
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_60: V_Simc_flak_55_M61_45
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/MG Box";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"regt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt_open_60.p3d";
			hiddenSelections[]=
			{
				"regt"
			};
			containerClass="Supply150";
			mass=100;
		};
	};
	class V_Simc_flak_55_60: V_Simc_flak_55_M61_60
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/MG Box";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"belt",
			"regt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_67\vest_55_belt_open_60.p3d";
			hiddenSelections[]=
			{
				"belt",
				"regt"
			};
			containerClass="Supply150";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_60_2: V_Simc_flak_55_M61_60
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/MG Box";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_belt_open_60.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply170";
			mass=100;
		};
	};
	class V_Simc_flak_55_M61_med: V_Simc_flak_55_M61_45
	{
		author="089 + Justin";
		displayName="[USMC] M1955 Vest/Corpsman";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_67\vest_55_belt_open_med.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply140";
			mass=100;
		};
	};
	class V_Simc_flak_55_rear: V_Simc_flak_55_M61
	{
		author="089 + Justin + Jujurat";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_68\vest_55_belt_rear.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2: V_Simc_flak_55
	{
		author="089";
		displayName="[USMC] M1955/P67 Vest";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"belt",
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_68\vest_55_mk2_belt.p3d";
			hiddenSelections[]=
			{
				"belt",
				"band"
			};
			containerClass="Supply60";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_bandoleer: V_Simc_flak_55_mk2
	{
		author="089";
		displayName="[USMC] M1955/P67 Vest/Bandoleer";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"belt"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_68\vest_55_mk2_belt.p3d";
			hiddenSelections[]=
			{
				"belt"
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt: V_Simc_flak_55_mk2
	{
		author="089 + Justin + Jujurat";
		displayName="[USMC] M1955/P67 Vest/LCE";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_68\vest_55_mk2_belt.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_bandoleer_belt: V_Simc_flak_55_mk2_belt
	{
		author="089 + Justin + Jujurat";
		displayName="[USMC] M1955/P67 Vest/LCE/Bandoleer";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_68\vest_55_mk2_belt.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt_open: V_Simc_flak_55_mk2_belt
	{
		author="089 + Justin + Jujurat";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_bandoleer_belt_open: V_Simc_flak_55_mk2_belt_open
	{
		author="089 + Justin + Jujurat";
		displayName="[USMC] M1955/P67 Vest/LCE/Bandoleer";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_morser: V_Simc_flak_55_mk2_belt_open
	{
		author="089 + Justin + Jujurat";
		displayName="[USMC] M1955/P67 Vest/LCE/Mortar";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply250";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt_rear: V_Simc_flak_55_mk2_belt
	{
		author="089 + Justin + Jujurat";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_68\vest_55_mk2_rear.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt_open_erla: V_Simc_flak_55_mk2_belt
	{
		author="089 + Justin";
		displayName="[USMC] M1955/P67 Vest/M61";
		model="\simc_mc_67\vest_55_drop.p3d";
		hiddenSelections[]=
		{
			"band"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open_erla.p3d";
			hiddenSelections[]=
			{
				"band"
			};
			containerClass="Supply90";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt_open_79: V_Simc_flak_55_mk2_belt_open
	{
		author="089 + Justin + Jujurat";
		model="\simc_mc_67\vest_55_drop.p3d";
		displayName="[USMC] M1955/P67 Vest/40mm";
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
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open_79.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply120";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt_open_45: V_Simc_flak_55_mk2_belt_open
	{
		author="089 + Justin + Jujurat";
		model="\simc_mc_67\vest_55_drop.p3d";
		displayName="[USMC] M1955/P67 Vest/Sidearm";
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
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open_79.p3d";
			hiddenSelections[]=
			{
				"nadeban"
			};
			containerClass="Supply100";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt_open_60_1: V_Simc_flak_55_mk2_belt_open
	{
		author="089 + Justin + Jujurat";
		displayName="[USMC] M1955/P67 Vest/MG";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open_60.p3d";
			hiddenSelections[]=
			{
				"left_B",
				"regt"
			};
			containerClass="Supply170";
			mass=100;
		};
	};
	class V_Simc_flak_55_mk2_belt_open_60_2: V_Simc_flak_55_mk2_belt_open
	{
		author="089 + Justin + Jujurat";
		displayName="[USMC] M1955/P67 Vest/MG";
		model="\simc_mc_67\vest_55_drop.p3d";
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
			uniformModel="\simc_mc_68\vest_55_mk2_belt_open_60.p3d";
			hiddenSelections[]=
			{
				"left",
				"regt"
			};
			containerClass="Supply170";
			mass=100;
		};
	};
	class V_Simc_nadevest_mc_flak: V_Simc_flak_55_mk2_belt_open
	{
		author="Justin + Jujurat + Motta + 089";
		scope=2;
		displayName="[USMC] M1955/P67 Vest/40mm Ammo vest";
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
			uniformModel="\simc_mc_68\vest_nade_flak_55.p3d";
			hiddenSelections[]=
			{
				""
			};
			containerClass="Supply180";
			mass=115;
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1645449407";
};
