class CfgPatches
{
	class CUP_Creatures_People_Military_DummyInfantrySet
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Creatures_People_Core"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class CfgVehicleClasses
{
	class CUP_B_Men_US_DeltaForce
	{
		displayName="Men (US - Delta Force)";
	};
	class CUP_Men_Story
	{
		displayName="Men (Special characters)";
	};
};
class CfgVehicles
{
	class All
	{
		class EventHandlers;
	};
	class AllVehicles: All
	{
	};
	class Land: AllVehicles
	{
	};
	class Man: Land
	{
	};
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierEB: CAManBase
	{
		delete vehicleClass;
	};
	class SoldierGB: CAManBase
	{
		delete vehicleClass;
	};
	class SoldierWB: CAManBase
	{
		delete vehicleClass;
	};
};
class CfgGroups
{
	class West
	{
	};
	class East
	{
	};
	class Indep
	{
	};
};
