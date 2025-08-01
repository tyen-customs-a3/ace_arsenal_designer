class CfgPatches
{
	class simc_uaf_69_core
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
class CfgWeapons
{
	class Uniform_Base;
	class ItemCore;
	class U_BasicBody: Uniform_Base
	{
		class ItemInfo;
	};
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_Simc_M1_67_base: H_HelmetB
	{
		class ItemInfo;
	};
	class H_Simc_M1_g_casper: H_Simc_M1_67_base
	{
		author="Mo + Eth + 089 + Justin";
		displayName="[US] M1 Helmet (Graffiti-C/089)";
		picture="\simc_uaf_67_preview\icons\pot_bitch_ca.paa";
		model="\simc_uaf_69\helmet_m1_a4.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\pot_cover_g_casper_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformmodel="\simc_uaf_69\helmet_m1_a4.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_M1_g8_magasin: H_Simc_M1_g_casper
	{
		author="Mo + Eth + 089 + Justin";
		displayName="[US] M1 Helmet (Graffiti-F/089)";
		model="\simc_uaf_65\helmet_m1_b3.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\pot_cover_g_8_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformmodel="\simc_uaf_65\helmet_m1_b3.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_M1_g_baskin: H_Simc_M1_g_casper
	{
		author="Mo + Eth + Justin + Shoivets";
		displayName="[US] M1 Helmet (Graffiti-Baskin)";
		scope=2;
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		model="\simc_mc_67\helmet_m1_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\pot_cover_g_baskin_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformmodel="\simc_uaf_65\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_M1_g_shibbin: H_Simc_M1_g_casper
	{
		author="Mo + Eth + Justin + Shoivets";
		displayName="[US] M1 Helmet (Graffiti-Zhivets)";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		model="\simc_uaf_65\helmet_m1_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\pot_cover_g_shibbin_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformmodel="\simc_uaf_65\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_M1_g_motta: H_Simc_M1_g_casper
	{
		author="Mo + Eth + 089 + Justin";
		displayName="[US] M1 Helmet (Graffiti-Motta)";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		model="\simc_uaf_69\helmet_m1_mo.p3d";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\pot_cover_g_motta_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformmodel="\simc_uaf_69\helmet_m1_mo.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover",
				"jokes"
			};
		};
	};
	class H_Simc_M1_jenk_sk1: H_Simc_M1_g_casper
	{
		author="Mo + Eth + Justin + Jenkins";
		displayName="[US] M1 Helmet (Graffiti-Empire)";
		model="\simc_uaf_65\helmet_m1_F.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jokes"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\pot_cover_g_jonk_sk1_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformmodel="\simc_uaf_65\helmet_m1_Cl.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
	class H_Simc_M1_jenk_sk2: H_Simc_M1_jenk_sk1
	{
		author="Mo + Eth + Justin + Jenkins";
		displayName="[US] M1 Helmet (Graffiti-Empire)";
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_69\data\pot_cover_g_jonk_sk2_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformmodel="\simc_uaf_65\helmet_m1_F.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"cover"
			};
		};
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1673619062";
};
