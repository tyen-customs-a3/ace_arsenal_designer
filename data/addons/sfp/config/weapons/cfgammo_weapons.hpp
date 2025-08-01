//Small arms ammunition
class B_556x45_Ball; 	// External class reference
class B_762x51_Ball; 	// External class reference

#define in_to_mm 25.4
#define grains_to_gram 0.06479891

// -------------
// 6,5 mm sk ptr m/94
// -------------

// 6,5 mm sk ptr m/94 prj m/38
class sfp_65x55_m38 : B_556x45_Ball
{
	hit = 10.3;				// Inbetween 5.56 and 7.62
	airFriction=-0.00062437;		// From ACE Creedmor
	ACE_caliber=6.71;			// Reported as either 6.71mm or .264 inches=~6.7056
	ACE_bulletLength=36.22;			// From ACE Creedmor, can't find real data
	ACE_bulletMass=9.072;
	ACE_ammoTempMuzzleVelocityShifts[]={-19.55, -18.47, -15.85, -13.12, -9.98, -5.80, -0.64, 6.53, 12.96, 22.17, 33.19};
	ACE_ballisticCoefficients[]={0.310};	// From ACE Creedmor
	ACE_velocityBoundaries[]={};
	ACE_standardAtmosphere="ICAO";
	ACE_dragModel=7;
	ACE_muzzleVelocities[]={800};		// m/s
	ACE_barrelLengths[]={739};		// cm
};

//--------------
// NATO 5,56mm
//--------------
class sfp_556x45_ball : B_556x45_Ball
{
// Uppmätt i spelet:
//	Avst:	 50	100	200	300	400	500 meter
//	Ak 5C:	800	747	655	565	480	410	m/s
//	Ak 5D:	730	680	590	510	430	360	m/s
	hit = 8;						// BIS har 9 men högre typicalSpeed, så det jämnar nog ut sig
	typicalSpeed = 762; 			// Projectile does not fragment at impact under 762m/s
	airFriction = -0.00130094;		// Från ACE
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	tracerStartTime = 0.073; 		// M856 tracer burns out to 800m
	tracerEndTime = 1.57123;		// Time in milliseconds calculated with ballistics calculator
	// caliber = 0.62; 				// 3.5mm RHA at 640m - ärver BIS istället: 0,869565
	// ärver rätt ACE-värden
};

class sfp_556x45_irTracer : sfp_556x45_ball
{
	nvgOnly = 1;
};

class sfp_556x45_ap : B_556x45_Ball	// Från ACE M995
{
	airFriction=-0.00126182;
	caliber=1.6;
	ACE_caliber=5.69;
	ACE_bulletLength=23.012;
	ACE_bulletMass=4.5359237;
	ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
	ACE_ballisticCoefficients[]={0.310};
	ACE_velocityBoundaries[]={};
	ACE_standardAtmosphere="ASM";
	ACE_dragModel=1;
	ACE_muzzleVelocities[]={820, 865, 880};
	ACE_barrelLengths[]={254.0, 368.3, 508.0};
};

//--------------
// NATO 7,62mm
//--------------
class sfp_762x51_ball : B_762x51_Ball
{
//	hit = 12;						// Grundklassen har 11.6
	airFriction = -0.00103711;		// Från ACE
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	tracerScale = 1.2;				// Från ACE, grundvärdet på 0.6 måste vara fel
	tracerStartTime=0.073;			// Based on the British L5A1 which burns out to 1000m 
	tracerEndTime=2.15957;			// Time in seconds calculated with ballistics calculator
	// caliber = 1.6; 				// 3.5mm RHA at 620m - ärver BIS, samma värde
	// ärver rätt ACE-värden
};

class sfp_762x51_irTracer : sfp_762x51_ball
{
	nvgOnly = 1;
};

class sfp_762x51_ap : B_762x51_Ball		// Från ACE M993
{
	airFriction=-0.0010939;
	caliber=2.2;
	hit=11;
	typicalSpeed=910;
	ACE_caliber=7.823;
	ACE_bulletLength=31.496;
	ACE_bulletMass=8.22946157;
	ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
	ACE_ballisticCoefficients[]={0.359};
	ACE_velocityBoundaries[]={};
	ACE_standardAtmosphere="ICAO";
	ACE_dragModel=1;
	ACE_muzzleVelocities[]={905, 930, 960};
	ACE_barrelLengths[]={330.2, 406.4, 508.0};
};

class sfp_762x51_prick : B_762x51_Ball
{
	hit = 16;						// ACE: M118LR=16, M993_AP=11  Satt högt för att göra den användbar med så låg eldhastighet.
	typicalSpeed = 815;
	airFriction = -0.00095;
	caliber = 2.6; 					//30mm HB400 at 100m from the muzzle - högre penetrering än PPRJ
	timeToLive = 10;				// Default 6, BIS sniper ammo 10
// AI
	audibleFire = 50;				// +5 skjuts utan mynningsbroms
	visibleFire = 4;				// +1
	cost = 2;
// ACE	
	ACE_caliber=4.81;
	ACE_bulletLength=18.288;		// osäker på längden, Dagger tycker 10.2, men 18 stämmer bättre med uppskattning av bild
	ACE_bulletMass=3.4;
	ACE_muzzleVelocityVariationSD=0.4;
	ACE_ammoTempMuzzleVelocityShifts[]={-16, -12, -8, -4, 0, 4, 8, 12, 16, 20, 24};
	ACE_ballisticCoefficients[]={0.1789}; // If dragModel 7: 0.1789 then use the dragModel 1 value of 0.371 (0.395?) in C1 field in AtragMX
	ACE_velocityBoundaries[]={};
	ACE_standardAtmosphere="ICAO";
	ACE_dragModel=7;
	ACE_muzzleVelocities[]={1340};
	ACE_barrelLengths[]={657};
};