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
	class H_Simc_M1_67_base;
	class H_Simc_M1_g_casper: H_Simc_M1_67_base
	{
		scope=2;
	};
};
class cfgMods
{
	author="Brian Hates Games";
	timepacked="1621577426";
};
