class CfgPatches
{
	class simc_KP_ranks
	{
		author="Wyqer";
		name="KP Ranks";
		url="https://github.com/KillahPotatoes/KP-Ranks";
		units[]=
		{
			"KPR_force"
		};
		weapons[]={};
		requiredVersion=1.84;
		requiredAddons[]=
		{
			"A3_Modules_F",
			"cba_main"
		};
		versionDesc="KP Ranks";
		version="2.0.2";
		versionStr="2.0.2";
		versionAr[]={2,0,2};
		authors[]=
		{
			"Wyqer"
		};
	};
};
class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class KP_Ranks
			{
				main_addon="KP_Ranks";
				class Dependencies
				{
					CBA[]=
					{
						"cba_main",
						{3,7,1},
						"true"
					};
				};
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class KPR_preInit
	{
		init="[] call KPR_fnc_initCBA";
	};
};
class Extended_PostInit_EventHandlers
{
	class KPR_postInit
	{
		init="[] call KPR_fnc_initRanks";
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class KPR_Category: NO_CATEGORY
	{
		displayName="KP Ranks";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class ModuleDescription;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class KPR_force: Module_F
	{
		scope=2;
		displayName="Force Ranks";
		icon="simc_uaf_67_preview\icons\US_rank_ca.paa";
		category="KPR_Category";
		function="KPR_fnc_forceRanks";
		functionPriority=1;
		isGlobal=0;
		isTriggerActivated=0;
		isDisposable=0;
		is3DEN=0;
		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description[]=
			{
				"$STR_KPR_CONFIG_MODULEDESC1",
				"$STR_KPR_CONFIG_MODULEDESC2"
			};
			position=0;
			direction=0;
			optional=1;
			duplicate=0;
		};
	};
};
class CfgFunctions
{
	class KPR
	{
		class KP_Ranks
		{
			file="\simc_uaf_67_ranks\fnc";
			class addActions
			{
			};
			class addPlayer
			{
			};
			class addScore
			{
			};
			class applyRank
			{
			};
			class autoLoop
			{
			};
			class entityKilled
			{
			};
			class forceRanks
			{
			};
			class getAceKiller
			{
			};
			class getInsigniaData
			{
			};
			class getPlayerIndex
			{
			};
			class getPlaytime
			{
			};
			class getPlaytimePlain
			{
			};
			class getRank
			{
			};
			class getRankName
			{
			};
			class getRankScore
			{
			};
			class getRankScoreNext
			{
			};
			class getScore
			{
			};
			class getUniformIndex
			{
			};
			class hasRank
			{
			};
			class initACE
			{
			};
			class initCBA
			{
			};
			class initRanks
			{
			};
			class isAdmin
			{
			};
			class levelAnnounce
			{
			};
			class openDialogPlayers
			{
			};
			class openDialogUniforms
			{
			};
			class playerAddEdit
			{
			};
			class playerDeath
			{
			};
			class playerExport
			{
			};
			class playerImport
			{
			};
			class playerSave
			{
			};
			class playerSaveServer
			{
			};
			class savePlayers
			{
			};
			class saveUniforms
			{
			};
			class scoreUpdate
			{
			};
			class sendAceKiller
			{
			};
			class setDefaultUniforms
			{
			};
			class setRank
			{
			};
			class setScore
			{
			};
			class showHint
			{
			};
			class uniformExport
			{
			};
			class uniformFill
			{
			};
			class uniformImport
			{
			};
			class uniformLBChange
			{
			};
			class uniformMove
			{
			};
			class uniformSave
			{
			};
			class updatePlayer
			{
			};
		};
	};
};
class CfgUnitKPRanks
{
	class simc_Insignia_Base
	{
		displayName="";
		author="654wak654";
		texture="";
	};
	class EMPTY_simc: simc_Insignia_Base
	{
	};
	class PRIVATE_SIMC_0: simc_Insignia_Base
	{
		displayName="US Private";
		texture="simc_uaf_67_ranks\patches\US_PFC_mc.paa";
		material="\simc_uaf_67\data\fabr.rvmat";
	};
	class CORPORAL_SIMC_0: simc_Insignia_Base
	{
		displayName="US Corporal";
		texture="simc_uaf_67_ranks\patches\US_CPL_mc.paa";
		material="\simc_uaf_67\data\fabr.rvmat";
	};
	class SERGEANT_SIMC_0: simc_Insignia_Base
	{
		displayName="US Sergeant";
		texture="simc_uaf_67_ranks\patches\US_SSG_mc.paa";
		material="\simc_uaf_67\data\fabr.rvmat";
	};
	class LIEUTENANT_SIMC_0: simc_Insignia_Base
	{
		displayName="US Lieutenant";
		texture="simc_uaf_67_ranks\patches\US_1LT_mc.paa";
		material="\simc_uaf_67\data\fabr.rvmat";
	};
	class CAPTAIN_SIMC_0: simc_Insignia_Base
	{
		displayName="US Captain";
		texture="simc_uaf_67_ranks\patches\US_CPT_mc.paa";
		material="\simc_uaf_67\data\fabr.rvmat";
	};
	class MAJOR_SIMC_0: simc_Insignia_Base
	{
		displayName="US Major";
		texture="simc_uaf_67_ranks\patches\US_MAJ_mc.paa";
		material="\simc_uaf_67\data\fabr.rvmat";
	};
	class COLONEL_SIMC_0: simc_Insignia_Base
	{
		displayName="US Colonel";
		texture="simc_uaf_67_ranks\patches\US_COL_mc.paa";
		material="\simc_uaf_67\data\fabr.rvmat";
	};
	class Simc_UAE_0
	{
		author="089";
		displayName="UAE00 Private E1";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAE_1
	{
		author="9315";
		displayName="UAE01 Private E2";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PVT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_2
	{
		author="089";
		displayName="UAE02 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PFC_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_3
	{
		author="089";
		displayName="UAE03 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP4_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_4
	{
		author="089";
		displayName="UAE04 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPL_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_5
	{
		author="089";
		displayName="UAE05 Specialist 5";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP5_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_6
	{
		author="089";
		displayName="UAE06 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SGT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_7
	{
		author="089";
		displayName="UAE07 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SSG_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_8
	{
		author="Nils";
		displayName="UAE08 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SFC_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_9
	{
		author="089";
		displayName="UAE09 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MSG_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_10
	{
		author="Nils";
		displayName="UAE10 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1SG_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_11
	{
		author="089";
		displayName="UAE13 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_2LT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_12
	{
		author="Nils";
		displayName="UAE12 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1LT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_13
	{
		author="089";
		displayName="UAE13 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_14
	{
		author="089";
		displayName="UAE14 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MAJ_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_15
	{
		author="089";
		displayName="UAE15 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_LTC_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_16
	{
		author="9315";
		displayName="UAE16 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_COL_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_0
	{
		author="0779";
		displayName="UAS00 Private E1";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAS_1
	{
		author="0779";
		displayName="UAS01 Private E2";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PVT_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_2
	{
		author="0779";
		displayName="UAS02 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PFC_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_3
	{
		author="0779";
		displayName="UAS03 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP4_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_4
	{
		author="0779";
		displayName="UAS04 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPL_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_5
	{
		author="0779";
		displayName="UAS05 Specialist 5";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP5_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_6
	{
		author="0779";
		displayName="UAS06 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SGT_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_7
	{
		author="0779";
		displayName="UAS07 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SSG_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_8
	{
		author="0779";
		displayName="UAS08 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SFC_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_9
	{
		author="0779";
		displayName="UAS09 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MSG_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_10
	{
		author="0779";
		displayName="UAS10 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1SG_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_11
	{
		author="089";
		displayName="UAS11 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_2LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_12
	{
		author="Nils";
		displayName="UAS12 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_13
	{
		author="089";
		displayName="UAS13 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_14
	{
		author="089";
		displayName="UAS14 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MAJ_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_15
	{
		author="089";
		displayName="UAS15 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_LTC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_16
	{
		author="9315";
		displayName="UAS16 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_COL_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_0
	{
		author="Frenchy56";
		displayName="UAL00 Private E1";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAL_1
	{
		author="Frenchy56";
		displayName="UAL01 Private E2";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PVT_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_2
	{
		author="Frenchy56";
		displayName="UAL02 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PFC_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_3
	{
		author="Frenchy56";
		displayName="UAL03 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP4_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_4
	{
		author="Frenchy56";
		displayName="UAL04 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPL_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_5
	{
		author="Frenchy56";
		displayName="UAL05 Specialist 5";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP5_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_6
	{
		author="Frenchy56";
		displayName="UAL06 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SGT_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_7
	{
		author="Frenchy56";
		displayName="UAL07 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SSG_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_8
	{
		author="Frenchy56";
		displayName="UAL08 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SFC_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_9
	{
		author="Frenchy56";
		displayName="UAL09 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MSG_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_10
	{
		author="Frenchy56";
		displayName="UAL10 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1SG_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_11
	{
		author="089";
		displayName="UAL11 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_2LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_12
	{
		author="Nils";
		displayName="UAL12 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_13
	{
		author="089";
		displayName="UAL13 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_14
	{
		author="089";
		displayName="UAL14 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MAJ_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_15
	{
		author="089";
		displayName="UAL15 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_LTC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_16
	{
		author="9315";
		displayName="UAL16 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_COL_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_0
	{
		author="0779";
		displayName="UAP00 Private E1";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAP_1
	{
		author="0779";
		displayName="UAP01 Private E2";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PVT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_2
	{
		author="0779";
		displayName="UAP02 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_PFC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_3
	{
		author="0779";
		displayName="UAP03 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP4_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_4
	{
		author="0779";
		displayName="UAP04 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPL_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_5
	{
		author="0779";
		displayName="UAP05 Specialist 5";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SP5_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_6
	{
		author="0779";
		displayName="UAP06 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SGT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_7
	{
		author="0779";
		displayName="UAP07 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SSG_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_8
	{
		author="0779";
		displayName="UAP08 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_SFC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_9
	{
		author="0779";
		displayName="UAP09 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MSG_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_10
	{
		author="0779";
		displayName="UAP10 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1SG_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_11
	{
		author="089";
		displayName="UAP11 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_2LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_12
	{
		author="Nils";
		displayName="UAP12 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_1LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_13
	{
		author="089";
		displayName="UAP13 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_CPT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_14
	{
		author="089";
		displayName="UAP14 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_MAJ_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_15
	{
		author="089";
		displayName="UAP15 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_LTC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_16
	{
		author="9315";
		displayName="UAP16 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\US_COL_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_0
	{
		author="Beachhead!";
		displayName="MCC00 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_MCC_1
	{
		author="Beachhead";
		displayName="MCC01 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_PFC_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_2
	{
		author="Beachhead!";
		displayName="MCC02 Lance Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_LCPL_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_3
	{
		author="Beachhead!";
		displayName="MCC03 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_CPL_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_4
	{
		author="Beachhead!";
		displayName="MCC04 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_SGT_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_5
	{
		author="Beachhead!";
		displayName="MCC05 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_SSGT_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_6
	{
		author="Beachhead!";
		displayName="MCC06 Gunnery Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_GYSGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_7
	{
		author="Beachhead!";
		displayName="MCC07 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_MSGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_8
	{
		author="Beachhead!";
		displayName="MCC08 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_1SGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_9
	{
		author="Beachhead!";
		displayName="MCC09 Master Gunnery Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_MGYSGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_10
	{
		author="Beachhead!";
		displayName="MCC10 Sergeant Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_SGTMAJ_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_11
	{
		author="Beachhead!";
		displayName="MCC13 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_2LT_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_12
	{
		author="Beachhead!";
		displayName="MCC12 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_1LT_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_13
	{
		author="Beachhead!";
		displayName="MCC13 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_CPT_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_14
	{
		author="Beachhead!";
		displayName="MCC14 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_MAJ_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_15
	{
		author="Beachhead!";
		displayName="MCC15 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_LTCOL_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_16
	{
		author="Beachhead!";
		displayName="MCC16 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_ranks\patches\MC_COL_mc.paa";
		textureVehicle="";
	};
};
class ScrollBar;
class RscActivePicture;
class RscActiveText;
class RscButton;
class RscCheckBox;
class RscCombo;
class RscControlsGroup;
class RscEdit;
class RscListBox;
class RscListNBox;
class RscShortcutButton;
class RscText;
class RscXListBox;
class RscXSliderH;
class KP_Title: RscText
{
	colorBackground[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
	};
	text="DIALOG TITLE";
	h="safeZoneH * 0.035";
	shadow=1;
	sizeEx="safeZoneH * 0.03";
};
class KP_CloseCross: RscActiveText
{
	style=48;
	color[]={1,1,1,0.75};
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,0.75};
	colorActive[]={1,1,1,1};
	text="\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
	w="safeZoneW * 0.014";
	h="safeZoneH * 0.025";
	tooltip="$STR_DISP_CLOSE";
	action="closeDialog 0";
};
class KP_Background: RscText
{
	colorBackground[]={0,0,0,0.5};
};
class KP_Text: RscText
{
	sizeEx="safeZoneH * 0.02";
};
class KP_InlineTitle: RscText
{
	style=2;
	sizeEx="safeZoneH * 0.025";
};
class KP_ActiveText: RscActiveText
{
	style=2;
	sizeEx="safeZoneH * 0.02";
};
class KP_Picture: RscText
{
	style=48;
};
class KP_ActivePicture: RscActivePicture
{
};
class KP_PictureRatio: RscText
{
	style="48 + 2048";
};
class KP_Button: RscButton
{
	colorBackground[]={0,0,0,0.5};
	colorFocused[]={0,0,0,0.5};
	h="safeZoneH * 0.025";
	sizeEx="safeZoneH * 0.02";
};
class KP_InlineButton: RscButton
{
	colorBackground[]={0.25,0.25,0.25,1};
	colorBackgroundDisabled[]={0,1,0,1};
	colorBackgroundActive[]={0.30000001,0.30000001,0.30000001,1};
	colorFocused[]={0.25,0.25,0.25,1};
	sizeEx="safeZoneH * 0.02";
	offsetPressedX="safeZoneW * 0.0005";
	offsetPressedY="safeZoneH * 0.001";
};
class KP_ControlsGroup: RscControlsGroup
{
};
class KP_Combo: RscCombo
{
	colorBackground[]={0,0,0,0.5};
	sizeEx="safeZoneH * 0.02";
};
class KP_CheckBox: RscCheckBox
{
	style=2;
	w="safeZoneW * 0.014";
	h="safeZoneH * 0.025";
};
class KP_ListBox: RscListBox
{
	sizeEx="safeZoneH * 0.02";
};
class KP_ListNBox: RscListNBox
{
	sizeEx="safeZoneH * 0.02";
};
class KP_XListBox: RscXListBox
{
	colorBackground[]={0,0,0,0.5};
	sizeEx="safeZoneH * 0.02";
};
class KP_Slider: RscXSliderH
{
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,0.60000002};
};
class KP_EditBox: RscEdit
{
	colorBackground[]={0,0,0,0.30000001};
	sizeEx="safeZoneH * 0.02";
};
class KP_DialogTitle: KP_Title
{
	x="safeZoneX + safeZoneW * (0.25 + 0 * ((1 - 2 * 0.25) + 0.002) / 1)";
	y="safeZoneY + safeZoneH * 0.2";
	w="safeZoneW * (((1 - 2 * 0.25) - (1 - 1) * 0.002) / 1)";
};
class KP_DialogCross: KP_CloseCross
{
	x="safeZoneX + safeZoneW * (1 - 0.25 - 0.02)";
	y="safeZoneY + safeZoneH * (0.2 + 0.005)";
};
class KP_DialogBackground: KP_Background
{
	x="safeZoneX + safeZoneW * (0.25 + 0 * ((1 - 2 * 0.25) + 0.002) / 1)";
	y="safeZoneY + safeZoneH * (0.2 + 0.035 + 0.004)";
	w="safeZoneW * (((1 - 2 * 0.25) - (1 - 1) * 0.002) / 1)";
	h="safeZoneH * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004)";
};
class KP_DialogButton: KP_Button
{
	x="safeZoneX + safeZoneW * (0.25 + 0 * ((1 - 2 * 0.25) + 0.002) / 4)";
	y="safeZoneY + safeZoneH * (0.2 + 0.035 + 2 * 0.004 + (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004))";
	w="safeZoneW * (((1 - 2 * 0.25) - (4 - 1) * 0.002) / 4)";
};
class KP_DialogTitleL: KP_Title
{
	x="safeZoneX + safeZoneW * (0.15 + 0 * ((1 - 2 * 0.15) + 0.002) / 1)";
	y="safeZoneY + safeZoneH * 0.15";
	w="safeZoneW * (((1 - 2 * 0.15) - (1 - 1) * 0.002) / 1)";
};
class KP_DialogCrossL: KP_CloseCross
{
	x="safeZoneX + safeZoneW * (1 - 0.15 - 0.02)";
	y="safeZoneY + safeZoneH * (0.15 + 0.005)";
};
class KP_DialogBackgroundL: KP_Background
{
	x="safeZoneX + safeZoneW * (0.15 + 0 * ((1 - 2 * 0.15) + 0.002) / 1)";
	y="safeZoneY + safeZoneH * (0.15 + 0.035 + 0.004)";
	w="safeZoneW * (((1 - 2 * 0.15) - (1 - 1) * 0.002) / 1)";
	h="safeZoneH * (1 - 2 * 0.15 - 0.035 - 0.025 - 2 * 0.004)";
};
class KP_DialogButtonL: KP_Button
{
	x="safeZoneX + safeZoneW * (0.15 + 0 * ((1 - 2 * 0.15) + 0.002) / 4)";
	y="safeZoneY + safeZoneH * (0.15 + 0.035 + 2 * 0.004 + (1 - 2 * 0.15 - 0.035 - 0.025 - 2 * 0.004))";
	w="safeZoneW * (((1 - 2 * 0.15) - (4 - 1) * 0.002) / 4)";
};
class KP_DialogTitleC: KP_Title
{
	x="safeZoneX + safeZoneW * (0.035 + 0 * (0.2 + 0.002) / 1)";
	y="safeZoneY + safeZoneH * 0.05";
	w="safeZoneW * ((0.2 - (1 - 1) * 0.002) / 1)";
};
class KP_DialogCrossC: KP_CloseCross
{
	x="safeZoneX + safeZoneW * (0.035 + 0.2 - 0.02)";
	y="safeZoneY + safeZoneH * (0.05 + 0.005)";
};
class KP_DialogBackgroundC: KP_Background
{
	x="safeZoneX + safeZoneW * (0.035 + 0 * (0.2 + 0.002) / 1)";
	y="safeZoneY + safeZoneH * (0.05 + 0.035 + 0.004)";
	w="safeZoneW * ((0.2 - (1 - 1) * 0.002) / 1)";
	h="safeZoneH * (0.75 - 0.035 - 0.025 - 2 * 0.004)";
};
class KP_DialogButtonC: KP_Button
{
	x="safeZoneX + safeZoneW * (0.035 + 0 * (0.2 + 0.002) / 1)";
	y="safeZoneY + safeZoneH * (0.05 + 0.035 + 2 * 0.004 + (0.75 - 0.035 - 0.025 - 2 * 0.004))";
	w="safeZoneW * ((0.2 - (1 - 1) * 0.002) / 1)";
};
class KPR_playerList
{
	idd=7580821;
	movingEnable=0;
	onLoad="KPR_editPlayers = [[],[]]";
	onUnload="KPR_editPlayers = nil";
	class controlsBackground
	{
		class KPR_DialogTitle: KP_DialogTitle
		{
			text="$STR_KPR_DIALOG_PLAYERMANAGE";
		};
		class KPR_DialogBackground: KP_DialogBackground
		{
		};
	};
	class controls
	{
		class KPR_ControlsGroup: KP_ControlsGroup
		{
			idc=75801;
			x="safeZoneX + safeZoneW * (0.25 + (0 * (1 - 2 * 0.25) + (1 - 0) * 0.002) / 1)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (0 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (1 - 0) * 0.004) / 1)";
			w="safeZoneW * (((1 - 2 * 0.25) - (1 + 1) * 0.002) / 1)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (1 + 1) * 0.004) / 1)";
			class controls
			{
				class KPR_HeaderBackground: KP_Text
				{
					colorBackground[]={0,0,0,0.5};
					x=0;
					y=0;
					w="safeZoneW * (((1 - 2 * 0.25) - (1 + 1) * 0.002) / 1)";
					h="safeZoneH * 0.04";
				};
				class KPR_HeaderName: KP_Text
				{
					style=2;
					text="$STR_KPR_DIALOG_PLAYER";
					x="safeZoneW * 0.01";
					y="safeZoneH * 0.005";
					w="safeZoneW * 0.08";
					h="safeZoneH * 0.03";
					sizeEx="safeZoneH * 0.025";
				};
				class KPR_HeaderAdmin: KPR_HeaderName
				{
					text="$STR_KPR_DIALOG_ADMIN";
					x="safeZoneW * 0.11";
				};
				class KPR_HeaderRank: KPR_HeaderName
				{
					text="$STR_KPR_DIALOG_RANK";
					x="safeZoneW * 0.21";
				};
				class KPR_HeaderNation: KPR_HeaderName
				{
					text="$STR_KPR_DIALOG_NATION";
					x="safeZoneW * 0.31";
				};
				class KPR_HeaderDelete: KPR_HeaderName
				{
					text="$STR_KPR_DIALOG_DEL";
					x="safeZoneW * 0.41";
				};
			};
		};
		class KPR_DialogButtonS1: KP_DialogButton
		{
			text="$STR_KPR_DIALOG_RESET";
			tooltip="$STR_KPR_DIALOG_RESETDESC";
			onButtonClick="closeDialog 0; [{!dialog}, {call KPR_fnc_openDialogPlayers;}] call CBA_fnc_waitUntilAndExecute";
		};
		class KPR_DialogButtonS2: KP_DialogButton
		{
			idc=75802;
			x="safeZoneX + safeZoneW * (0.25 + 1 * ((1 - 2 * 0.25) + 0.002) / 4)";
			text="$STR_KPR_DIALOG_IMPORT";
			tooltip="$STR_KPR_DIALOG_IMPORTDESC";
			onButtonClick="call KPR_fnc_playerImport";
		};
		class KPR_DialogButtonS3: KP_DialogButton
		{
			x="safeZoneX + safeZoneW * (0.25 + 2 * ((1 - 2 * 0.25) + 0.002) / 4)";
			text="$STR_KPR_DIALOG_EXPORT";
			tooltip="$STR_KPR_DIALOG_EXPORTDESC";
			onButtonClick="call KPR_fnc_playerExport";
		};
		class KPR_DialogButtonS4: KP_DialogButton
		{
			x="safeZoneX + safeZoneW * (0.25 + 3 * ((1 - 2 * 0.25) + 0.002) / 4)";
			text="$STR_KPR_DIALOG_SAVE";
			tooltip="$STR_KPR_DIALOG_SAVEDESC";
			onButtonClick="call KPR_fnc_playerSave";
		};
		class KPR_DialogCross: KP_DialogCross
		{
		};
	};
};
class KPR_uniformList
{
	idd=7580822;
	movingEnable=0;
	onLoad="KPR_activeUniforms = []; KPR_inactiveUniforms = []";
	onUnload="KPR_activeUniforms = nil; KPR_inactiveUniforms = nil;";
	class controlsBackground
	{
		class KPR_DialogTitle: KP_DialogTitle
		{
			text="$STR_KPR_DIALOG_UNIFORMMANAGE";
		};
		class KPR_DialogBackground: KP_DialogBackground
		{
		};
		class KP_HeaderActive: KP_Text
		{
			style=2;
			colorBackground[]={0,0,0,0.5};
			x="safeZoneX + safeZoneW * (0.25 + (0 * (1 - 2 * 0.25) + (1 - 0) * 0.002) / 1)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (0 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 0) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (8 + 1) * 0.004) / 8)";
			text="$STR_KPR_DIALOG_UNIFORMACTIVE";
			sizeEx="safeZoneH * 0.025";
		};
		class KP_HeaderDetails: KP_Text
		{
			style=2;
			colorBackground[]={0,0,0,0.5};
			x="safeZoneX + safeZoneW * (0.25 + (1 * (1 - 2 * 0.25) + (4 - 1) * 0.002) / 4)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (0 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 0) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (2 + 1) * 0.002) / 2)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (8 + 1) * 0.004) / 8)";
			text="$STR_KPR_DIALOG_UNIFORMDETAILS";
			sizeEx="safeZoneH * 0.025";
		};
		class KPR_UniformPicture: KP_PictureRatio
		{
			idc=75803;
			x="safeZoneX + safeZoneW * (0.25 + (3 * (1 - 2 * 0.25) + (8 - 3) * 0.002) / 8)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (1 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 1) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (2 + 1) * 0.004) / 2)";
			text="";
		};
		class KPR_UniformClass: KP_Text
		{
			idc=75804;
			style=2;
			x="safeZoneX + safeZoneW * (0.25 + (3 * (1 - 2 * 0.25) + (8 - 3) * 0.002) / 8)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (5 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 5) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (16 + 1) * 0.004) / 16)";
			text="";
		};
		class KPR_UniformAuthor: KP_Text
		{
			idc=75805;
			style=2;
			x="safeZoneX + safeZoneW * (0.25 + (3 * (1 - 2 * 0.25) + (8 - 3) * 0.002) / 8)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (11 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (16 - 11) * 0.004) / 16)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (16 + 1) * 0.004) / 16)";
			text="";
		};
		class KP_HeaderInactive: KP_Text
		{
			style=2;
			colorBackground[]={0,0,0,0.5};
			x="safeZoneX + safeZoneW * (0.25 + (3 * (1 - 2 * 0.25) + (4 - 3) * 0.002) / 4)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (0 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 0) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (8 + 1) * 0.004) / 8)";
			text="$STR_KPR_DIALOG_UNIFORMINACTIVE";
			sizeEx="safeZoneH * 0.025";
		};
	};
	class controls
	{
		class KPR_ListActive: KP_ListBox
		{
			idc=75801;
			x="safeZoneX + safeZoneW * (0.25 + (0 * (1 - 2 * 0.25) + (1 - 0) * 0.002) / 1)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (1 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 1) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (1.15 + 1) * 0.004) / 1.15)";
			onLBSelChanged="if ((_this select 1) > -1) then {['active', _this select 1] call KPR_fnc_uniformLBChange;}";
		};
		class KPR_ListInactive: KP_ListBox
		{
			idc=75802;
			x="safeZoneX + safeZoneW * (0.25 + (3 * (1 - 2 * 0.25) + (4 - 3) * 0.002) / 4)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (1 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 1) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (1.15 + 1) * 0.004) / 1.15)";
			onLBSelChanged="if ((_this select 1) > -1) then {['inactive', _this select 1] call KPR_fnc_uniformLBChange;}";
		};
		class KPR_ComboFaction: KP_Combo
		{
			idc=75806;
			x="safeZoneX + safeZoneW * (0.25 + (3 * (1 - 2 * 0.25) + (8 - 3) * 0.002) / 8)";
			y="safeZoneY + safeZoneH * ((0.2 + 0.035 + 0.004) + (6 * (1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) + (8 - 6) * 0.004) / 8)";
			w="safeZoneW * (((1 - 2 * 0.25) - (4 + 1) * 0.002) / 4)";
			h="safeZoneH * (((1 - 2 * 0.2 - 0.035 - 0.025 - 2 * 0.004) - (16 + 1) * 0.004) / 16)";
		};
		class KPR_addActive: KP_DialogButton
		{
			idc=75807;
			x="safeZoneX + safeZoneW * (KP_x_VAL + (5 * (1 - 2 * 0.25) + (16 - 5) * 0.002) / 16)";
			w="safeZoneW * (((1 - 2 * 0.25) - (16 - 1) * 0.002) / 16)";
			text="<<";
			tooltip="$STR_KPR_DIALOG_ADDUNIFORMDESC";
			onButtonClick="['add'] call KPR_fnc_uniformMove";
		};
		class KPR_saveUniform: KPR_addActive
		{
			idc=75808;
			x="safeZoneX + safeZoneW * (0.25 + (7 * (1 - 2 * 0.25) + (16 - 7) * 0.002) / 16)";
			w="safeZoneW * (((1 - 2 * 0.25) - (8 - 1) * 0.002) / 8)";
			text="$STR_KPR_DIALOG_SAVE";
			onButtonClick="call KPR_fnc_uniformSave";
		};
		class KPR_delActive: KPR_addActive
		{
			idc=75809;
			x="safeZoneX + safeZoneW * (0.25 + 9 * ((1 - 2 * 0.25) + 0.002) / 16)";
			text=">>";
			tooltip="$STR_KPR_DIALOG_DELUNIFORMDESC";
			onButtonClick="['del'] call KPR_fnc_uniformMove";
		};
		class KPR_DialogButtonS2: KP_DialogButton
		{
			idc=758010;
			text="$STR_KPR_DIALOG_IMPORT";
			tooltip="$STR_KPR_DIALOG_IMPORTDESC";
			onButtonClick="call KPR_fnc_uniformImport";
		};
		class KPR_DialogButtonS3: KP_DialogButton
		{
			x="safeZoneX + safeZoneW * (0.25 + 3 * ((1 - 2 * 0.25) + 0.002) / 4)";
			text="$STR_KPR_DIALOG_EXPORT";
			tooltip="$STR_KPR_DIALOG_EXPORTDESC";
			onButtonClick="call KPR_fnc_uniformExport";
		};
		class KPR_DialogCross: KP_DialogCross
		{
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1661345708";
};
