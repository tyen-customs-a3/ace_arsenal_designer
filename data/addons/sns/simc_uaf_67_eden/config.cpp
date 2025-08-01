class CfgPatches
{
	class simc_uaf_67_eden
	{
		author="simcardii";
		name="KP Ranks";
		url="unabletocomply.net";
		units[]={};
		weapons[]={};
		requiredVersion=1.84;
		requiredAddons[]=
		{
			"A3_Modules_F",
			"cba_main"
		};
		version="2.0.2";
		versionStr="2.0.2";
		versionAr[]={2,0,2};
		authors[]=
		{
			"simcardii"
		};
	};
};
class CfgFunctions
{
	class simc
	{
		tag="simc";
		class simple_rp
		{
			file="\simc_uaf_67_eden\simc";
			class setUnitRankPatch
			{
			};
			class setUnitRank
			{
			};
			class getUnitRank
			{
			};
		};
	};
};
class CfgUnitRanks
{
	class simc_Insignia_Base
	{
		displayName="";
		scope=1;
		author="654wak654";
		texture="";
	};
	class Simc_UAE_0
	{
		author="089";
		displayName="US Coloured E1 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAE_1
	{
		author="9315";
		displayName="US Coloured E2 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PVT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_2
	{
		author="089";
		displayName="US Coloured E3 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PFC_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_3
	{
		author="089";
		displayName="US Coloured E4 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SP4_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_4
	{
		author="089";
		displayName="US Coloured E5 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_CPL_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_5
	{
		author="089";
		displayName="US Coloured E5 Specialist 5";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SP5_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_6
	{
		author="089";
		displayName="US Coloured E5 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SGT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_7
	{
		author="089";
		displayName="US Coloured E6 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SSG_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_8
	{
		author="Nils";
		displayName="US Coloured E7 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SFC_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_9
	{
		author="089";
		displayName="US Coloured E8 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_MSG_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_10
	{
		author="Nils";
		displayName="US Coloured E9 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_1SG_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_11
	{
		author="089";
		displayName="US Coloured O1 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_2LT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_12
	{
		author="Nils";
		displayName="US Coloured O2 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_1LT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_13
	{
		author="089";
		displayName="US Coloured O3 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_CPT_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_14
	{
		author="089";
		displayName="US Coloured O4 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_MAJ_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_15
	{
		author="089";
		displayName="US Coloured O5 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_LTCOL_mc.paa";
		textureVehicle="";
	};
	class Simc_UAE_16
	{
		author="9315";
		displayName="US Coloured O6 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_COL_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_0
	{
		author="0779";
		displayName="US Subdued E1 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAS_1
	{
		author="0779";
		displayName="US Subdued E2 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PVT_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_2
	{
		author="0779";
		displayName="US Subdued E3 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PFC_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_3
	{
		author="0779";
		displayName="US Subdued E4 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SP4_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_4
	{
		author="0779";
		displayName="US Subdued E4 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_CPL_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_5
	{
		author="0779";
		displayName="US Subdued E5 Specialist 5";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SP5_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_6
	{
		author="0779";
		displayName="US Subdued E5 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SGT_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_7
	{
		author="0779";
		displayName="US Subdued E6 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SSG_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_8
	{
		author="0779";
		displayName="US Subdued E7 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SFC_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_9
	{
		author="0779";
		displayName="US Subdued E8 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_MSG_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAS_10
	{
		author="0779";
		displayName="US Subdued E9 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_1SG_sub_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_0
	{
		author="Frenchy56";
		displayName="US Collar Pin E1 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAL_1
	{
		author="Frenchy56";
		displayName="US Collar Pin E2 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PVT_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_2
	{
		author="Frenchy56";
		displayName="US Collar Pin E3 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PFC_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_3
	{
		author="Frenchy56";
		displayName="US Collar Pin E4 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SP4_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_4
	{
		author="Frenchy56";
		displayName="US Collar Pin E4 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_CPL_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_5
	{
		author="Frenchy56";
		displayName="US Collar Pin E5 Specialist 5";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SP5_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_6
	{
		author="Frenchy56";
		displayName="US Collar Pin E5 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SGT_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_7
	{
		author="Frenchy56";
		displayName="US Collar Pin E6 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SSG_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_8
	{
		author="Frenchy56";
		displayName="US Collar Pin E7 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SFC_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_9
	{
		author="Frenchy56";
		displayName="US Collar Pin E8 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_MSG_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAL_10
	{
		author="Frenchy56";
		displayName="US Collar Pin E9 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_1SG_spat_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_0
	{
		author="0779";
		displayName="US Collar Patch E1 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_UAP_1
	{
		author="0779";
		displayName="US Collar Patch E2 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PVT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_2
	{
		author="0779";
		displayName="US Collar Patch E3 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_PFC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_3
	{
		author="0779";
		displayName="US Collar Patch E4 Specialist 4";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SPC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_4
	{
		author="0779";
		displayName="US Collar Patch E4 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_CPL_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_6
	{
		author="0779";
		displayName="US Collar Patch E5 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SGT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_7
	{
		author="0779";
		displayName="US Collar Patch E6 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SSG_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_8
	{
		author="0779";
		displayName="US Collar Patch E7 Sergeant First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_SFC_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_10
	{
		author="0779";
		displayName="US Collar Patch E8 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_1SG_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_11
	{
		author="089";
		displayName="US Collar Patch O1 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_2LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_12
	{
		author="Nils";
		displayName="US Collar Patch O2 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_1LT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_13
	{
		author="089";
		displayName="US Collar Patch O3 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_CPT_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_14
	{
		author="089";
		displayName="US Collar Patch O4 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_MAJ_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_15
	{
		author="089";
		displayName="US Collar Patch O5 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_LTCOL_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_UAP_16
	{
		author="9315";
		displayName="US Collar Patch O6 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\US_COL_od7_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_0
	{
		author="Beachhead!";
		displayName="USMC E1 Private";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle="";
	};
	class Simc_MCC_1
	{
		author="Beachhead";
		displayName="USMC E2 Private First Class";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_PFC_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_2
	{
		author="Beachhead!";
		displayName="USMC E3 Lance Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_LCPL_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_3
	{
		author="Beachhead!";
		displayName="USMC E4 Corporal";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_CPL_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_4
	{
		author="Beachhead!";
		displayName="USMC E5 Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_SGT_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_5
	{
		author="Beachhead!";
		displayName="USMC E6 Staff Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_SSGT_metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_6
	{
		author="Beachhead!";
		displayName="USMC E7 Gunnery Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_GYSGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_7
	{
		author="Beachhead!";
		displayName="USMC E8 Master Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_MSGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_8
	{
		author="Beachhead!";
		displayName="USMC E8 First Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_1SGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_9
	{
		author="Beachhead!";
		displayName="USMC E9 Master Gunnery Sergeant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_MGYSGT_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_10
	{
		author="Beachhead!";
		displayName="USMC E9 Sergeant Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_SGTMAJ_Metal_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_11
	{
		author="Beachhead!";
		displayName="USMC O1 Second Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_2LT_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_12
	{
		author="Beachhead!";
		displayName="USMC O2 First Lieutenant";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_1LT_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_13
	{
		author="Beachhead!";
		displayName="USMC O3 Captain";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_CPT_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_14
	{
		author="Beachhead!";
		displayName="USMC O4 Major";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_MAJ_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_15
	{
		author="Beachhead!";
		displayName="USMC O5 Lieutenant Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_LTCOL_mc.paa";
		textureVehicle="";
	};
	class Simc_MCC_16
	{
		author="Beachhead!";
		displayName="USMC O6 Colonel";
		material="\simc_uaf_67\data\fabr.rvmat";
		texture="simc_uaf_67_eden\patches\MC_COL_mc.paa";
		textureVehicle="";
	};
};
class ctrlCombo;
class ctrlStatic;
class Cfg3DEN
{
	class Object
	{
		textSingular="$STR_3DEN_Object_textSingular";
		textPlural="$STR_3DEN_Object_textPlural";
		class AttributeCategories
		{
			class Identity
			{
				displayName="$STR_3DEN_Object_AttributeCategory_Identity";
				collapsed=1;
				class Attributes
				{
					class UnitRankPatch
					{
						property="UnitRankPatch";
						value=0;
						control="UnitRankPatch";
						displayName="Rank Insignia";
						tooltip="simc ranks lol";
						expression="[_this,_value] call simc_fnc_setUnitRank;";
						defaultValue="''";
						condition="objectBrain";
						wikiType="[[String]]";
					};
				};
			};
		};
	};
	class Attributes
	{
		class Default;
		class Title: Default
		{
			class Controls
			{
				class Title: ctrlStatic
				{
				};
			};
		};
		class Combo: Title
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: ctrlCombo
				{
				};
			};
		};
		class UnitRankPatch: Combo
		{
			class Controls: Controls
			{
				class Title: Title
				{
				};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text="No rank";
							data="";
							value=-1;
						};
					};
					class ItemsConfig
					{
						path[]=
						{
							"CfgUnitRanks"
						};
						propertyText="displayName";
						propertyPicture="texture";
						sort=2;
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1661417769";
};
