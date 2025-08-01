
#define _ARMA_

class CfgPatches
{
	class Swedish_Forces_Pack
	{
		name = "Swedish Forces Pack";
		author = "Swedish Forces Pack Team";
		url = "http://www.anrop.se";
		units[] = {
		};
		weapons[] = {
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_Armor_F_AMV",
			"A3_Characters_F",
			"A3_Modules_F",
			"cba_main"
		};
		magazines[] = {};
		ammo[] = {
			"sfp_556x45_ball",
			"sfp_556x45_irTracer",
			"sfp_556x45_ap",
			"sfp_762x51_ball",
			"sfp_762x51_irTracer",
			"sfp_762x51_ap",
			"sfp_762x51_prick"
		};
		worlds[] = {};
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class B_762x51_Ball;
	class sfp_650x25_cbj_ball: B_556x45_Ball
	{
		hit = 5.5;
		typicalSpeed = 830;
		airFriction = -0.001525;
		caliber = 1.2;
		deflecting = 19;
		visibleFire = 2.2;
		audibleFire = 4.8;
		ACE_caliber = 3.9878;
		ACE_bulletLength = 11.6078;
		ACE_bulletMass = 2.002286;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.1275};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {730,780,830,900};
		ACE_barrelLengths[] = {119.38,149.86,200.66,299.72};
	};
	class sfp_650x25_cbj_subsonic: B_556x45_Ball
	{
		hit = 4;
		typicalSpeed = 320;
		airFriction = -0.0013;
		caliber = 1.0;
		deflecting = 19;
		visibleFire = 2.2;
		audibleFire = 3;
		ACE_caliber = 6.5024;
		ACE_bulletLength = 17.7038;
		ACE_bulletMass = 7.970266;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {300,310,320,325};
		ACE_barrelLengths[] = {119.38,149.86,200.66,299.72};
	};
	class sfp_65x55_m38: B_556x45_Ball
	{
		hit = 10.3;
		airFriction = -0.00062437;
		ACE_caliber = 6.71;
		ACE_bulletLength = 36.22;
		ACE_bulletMass = 9.072;
		ACE_ammoTempMuzzleVelocityShifts[] = {-19.55,-18.47,-15.85,-13.12,-9.98,-5.8,-0.64,6.53,12.96,22.17,33.19};
		ACE_ballisticCoefficients[] = {0.31};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {800};
		ACE_barrelLengths[] = {739};
	};
	class sfp_556x45_ball: B_556x45_Ball
	{
		hit = 8;
		typicalSpeed = 762;
		airFriction = -0.00130094;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.073;
		tracerEndTime = 1.57123;
	};
	class sfp_556x45_irTracer: sfp_556x45_ball
	{
		nvgOnly = 1;
	};
	class sfp_556x45_ap: B_556x45_Ball
	{
		airFriction = -0.00126182;
		caliber = 1.6;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.5359235;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.31};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820,865,880};
		ACE_barrelLengths[] = {254.0,368.3,508.0};
	};
	class sfp_762x51_ball: B_762x51_Ball
	{
		airFriction = -0.00103711;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.073;
		tracerEndTime = 2.15957;
	};
	class sfp_762x51_irTracer: sfp_762x51_ball
	{
		nvgOnly = 1;
	};
	class sfp_762x51_ap: B_762x51_Ball
	{
		airFriction = -0.0010939;
		caliber = 2.2;
		hit = 11;
		typicalSpeed = 910;
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 8.229462;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.359};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {905,930,960};
		ACE_barrelLengths[] = {330.2,406.4,508.0};
	};
	class sfp_762x51_prick: B_762x51_Ball
	{
		hit = 16;
		typicalSpeed = 815;
		airFriction = -0.00095;
		caliber = 2.6;
		timeToLive = 10;
		audibleFire = 50;
		visibleFire = 4;
		cost = 2;
		ACE_caliber = 4.81;
		ACE_bulletLength = 18.288;
		ACE_bulletMass = 3.4;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-16,-12,-8,-4,0,4,8,12,16,20,24};
		ACE_ballisticCoefficients[] = {0.1789};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {1340};
		ACE_barrelLengths[] = {657};
	};
};
class CfgMods
{
	class Mod_Base;
	class sfp: Mod_Base
	{
		action = "http://sfp.anrop.se/";
		author = "Swedish Forces Pack";
		dir = "sfp";
		dlcColor[] = {0,0,0,1};
		fieldManualTopicAndHint[] = {};
		hideName = 1;
		hidePicture = 0;
		logo = "\sfp_config\data\Logos\sfp_logo_ca.paa";
		logoOver = "\sfp_config\data\Logos\sfp_logoOver_ca.paa";
		logoSmall = "\sfp_config\data\Logos\sfp_logo_small_ca.paa";
		name = "Swedish Forces Pack";
		overview = "Swedish armed forces from the cold war and beyond!";
		picture = "\sfp_config\data\Logos\sfp_logo_ca.paa";
		tooltip = "SFP";
		tooltipOwned = "SFP";
	};
};
