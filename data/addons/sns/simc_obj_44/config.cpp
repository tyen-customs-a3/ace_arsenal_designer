class CfgPatches
{
	class simc_uaf_44_obj
	{
		units[]=
		{
			"runway_marston"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Structures_F_Items"
		};
	};
};
class CfgEditorCategories
{
	class simc_uaf_44_obj
	{
		displayName="FF-US-obj";
	};
	class ForgottenFrontsUS
	{
		displayName="[FF] Forgotten Fronts Objects (US)";
	};
};
class CfgEditorSubcategories
{
	class simc_uaf_44_roads
	{
		displayName="Roads";
	};
};
class CfgVehicles
{
	class Static;
	class simc_obj_base: Static
	{
		displayName="";
		accuracy=1000;
		vehicleClass="";
		model="";
		editorCategory="ForgottenFrontsUS";
		nameSound="";
		animated="false";
		simulation="house";
		cost=0;
		armor=1000;
		ladders[]={};
		icon="iconObject";
		placement="vertical";
	};
	class simc_runway_marston: simc_obj_base
	{
		scope=2;
		displayName="Marston Matting Runway";
		editorSubcategory="simc_uaf_44_roads";
		model="\simc_obj_44\runway_marston.p3d";
	};
	class simc_runway_marston_ca: simc_runway_marston
	{
		scope=2;
		displayName="Marston Matting Runway (alt)";
		model="\simc_obj_44\runway_marston_ca.p3d";
	};
};
class cfgMods
{
	author="schemcardrone";
	timepacked="1595212140";
};
