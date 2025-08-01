// SFP Sides

#define SFP_SWE_SIDE	1


// Tracer colour defines
#define TRACER_NONE         0,0,0,0
#define TRACER_KSP          1,0.05,0.025,1
#define TRACER_KSPEast	    0.05,1,0.025,1
#define TRACER_SNIPER       0.8,0.5,0.1,0.04

// Sound defines
#define SFP_Sd_Dis_10m          10
#define SFP_Sd_Dis_100m         100
#define SFP_Sd_Dis_250m         250
#define SFP_Sd_Dis_500m         500
#define SFP_Sd_Dis_1km          1000
#define SFP_Sd_Dis_2km          2000
#define SFP_Sd_Dis_3km          3000
#define SFP_Sd_Dis_4km          4000
#define SFP_Sd_Dis_5km          5000

// Sound defines
// This values taken from Default ArmA2

#define SFP_Sd_Level_Silencers		0.316228
#define SFP_Sd_Level_Pistols		0.794328
#define SFP_Sd_Level_AssaultRifles	1.77828
#define SFP_Sd_Level_MG			2.5
#define SFP_Sd_Level_HvyMG		5.62341
#define SFP_Sd_Level_AutomaticCannons	db10
#define SFP_Sd_Level_Launchers  	db20
#define SFP_Sd_Level_HvyLaunchers	31.6228
#define SFP_Sd_Level_TankGuns		316.228

// Damage defines
#define SFP_D_Damage9mm			3.25
#define SFP_D_Damage9SDmm		3
#define SFP_D_Damage556mm		8
#define SFP_D_Damage762mm		10.5
#define SFP_D_Damage127mm		27

#define SFP_D_Damage20mm_HE		32
#define SFP_D_Damage20mm_HEI		40
#define SFP_D_Damage30mm_HE		55
#define SFP_D_Damage40mm_HE_M203	12
#define SFP_D_Damage40mm_HE		70
#define SFP_D_Damage57mm_HE		80
#define SFP_D_Damage73mm_HE		60
#define SFP_D_Damage90mm_HE		300
#define SFP_D_Damage155mm_HE		430

#define SFP_D_Damage73mm_HEAT		250
#define SFP_D_Damage84mm_HEAT		120
#define SFP_D_Damage90mm_HEAT		400
#define SFP_D_Damage105mm_HEAT		210
#define SFP_D_Damage120mm_HEAT		330

#define SFP_D_Damage30mm_SABOT		79
#define SFP_D_Damage40mm_SABOT		380
#define SFP_D_Damage57mm_SABOT		400
#define SFP_D_Damage84mm_SABOT		550
#define SFP_D_Damage105mm_SABOT		650
#define SFP_D_Damage120mm_SABOT		800


// Indirect damage
#define SFP_iD_Damage9mm		1
#define SFP_iD_Damage9SDmm		1
#define SFP_iD_Damage556mm		1
#define SFP_iD_Damage762mm		1
#define SFP_iD_Damage127mm		3

#define SFP_iD_Damage20mm_HE		20
#define SFP_iD_Damage20mm_HEI		1
#define SFP_iD_Damage30mm_HE		25
#define SFP_iD_Damage30mm_SABOT		1
#define SFP_iD_Damage40mm_HE_M203	10
#define SFP_iD_Damage40mm_HE		15
#define SFP_iD_Damage40mm_SABOT		1
#define SFP_iD_Damage57mm_HE		25
#define SFP_iD_Damage57mm_SABOT		1

#define SFP_iD_Damage73mm_HE		16
#define SFP_iD_Damage73mm_HEAT		8
#define SFP_iD_Damage84mm_HEAT		27
#define SFP_iD_Damage84mm_SABOT		1
#define SFP_iD_Damage90mm_HE		35
#define SFP_iD_Damage90mm_HEAT		1
#define SFP_iD_Damage105mm_HEAT		40
#define SFP_iD_Damage105mm_SABOT	1
#define SFP_iD_Damage120mm_HEAT		42
#define SFP_iD_Damage120mm_SABOT	10
#define SFP_iD_Damage155mm_HE		60

// Indirect damage range

#define SFP_iDr_Damage9mm		1
#define SFP_iDr_Damage9SDmm		0.0
#define SFP_iDr_Damage556mm		0.0
#define SFP_iDr_Damage762mm		0.0
#define SFP_iDr_Damage127mm		0.0

#define SFP_iDr_Damage20mm_HE		1
#define SFP_iDr_Damage20mm_HEI		0.0
#define SFP_iDr_Damage30mm_HE		1
#define SFP_iDr_Damage30mm_SABOT	0.0
#define SFP_iDr_Damage40mm_HE_M203	5
#define SFP_iDr_Damage40mm_HE		10
#define SFP_iDr_Damage40mm_SABOT	0.0
#define SFP_iDr_Damage57mm_HE		12
#define SFP_iDr_Damage57mm_SABOT	0.0

#define SFP_iDr_Damage73mm_HE		10
#define SFP_iDr_Damage73mm_HEAT		10
#define SFP_iDr_Damage84mm_HE		15
#define SFP_iDr_Damage84mm_SABOT	0.0
#define SFP_iDr_Damage90mm_HE		15
#define SFP_iDr_Damage90mm_HEAT		15
#define SFP_iDr_Damage90mm_SABOT	0.0
#define SFP_iDr_Damage105mm_HEAT	20
#define SFP_iDr_Damage105mm_SABOT	0.0
#define SFP_iDr_Damage120mm_HEAT	29
#define SFP_iDr_Damage120mm_SABOT	1
#define SFP_iDr_Damage155mm_HE		35

// Dispersion and Ai behaviour defines
#define SFP_Dispersion556rif		0.0004
#define SFP_Dispersion556rifAuto	0.0007

#define SFP_Dispersion762rif		0.0003
#define SFP_Dispersion762rifAuto	0.0006

#define SFP_Dispersion762mg		0.0006

#define SFP_aiDispersionCoefXMG 10
#define SFP_aiDispersionCoefYMG 10


/*  Cost and values. */

#define sfp_cost_tank		50
#define sfp_cost_plane  	50
#define sfp_cost_apc    	50
#define sfp_cost_car    	50
#define sfp_cost_unarmed_car    50
/* 
    Fuel tank defines for more sensible running times for the engines
    Old values were crazy: Ikv91, PBV 302, PBV 501 would run for 4-5 days, patgb would run for one hour.
    
    For starters, we make Tgb run for 60 minutes, strv 122 run for 45 minutes and keep the rest between those values.
    
    We are using the same value for the different defines for now. It seems to give
    roughly the correct values. Fuel consumption seems to be based somewhat on top speed, vehicle type and weight.
*/

#define SFP_FuelTank_Tgb    250
#define SFP_FuelTank_Pbv    240
#define SFP_FuelTank_Strf   250
#define SFP_FuelTank_Strv   250
#define SFP_FuelTank_Fpl    2110
#define SFP_FuelTank_Hkp    250

#define SFP_FuelTank_car    270
#define SFP_FuelTank_apc    255
#define SFP_FuelTank_tank   240
#define SFP_FuelTank_plane   2200
#define SFP_FuelTank_plane_extended	2250
#define SFP_FuelTank_chopper 2350

/*
    terrainCoef values. These control how much the vehicle gets slowed down when driving offroad.
    Car-type vehicles (basically every tgb type) should go the slowest, patgbs and the like slightly faster and tracked vehicles
    can make their way through the terrain the fastest.
    
    The values are how much the top speed of the vehicle is lowered.
*/

#define SFP_TerrainCoef_Tgb     3
#define SFP_TerrainCoef_Patgb   2


/*
	Sensitivity defines, defines how much units can see and hear
	Default BIS infantry has a sensitivity of 1, so that's what we'll grant our basic soldiers,
	but we let them hear better (default BIS hears 0.13, ours 0.20), and our ranger type units get
	a 50% increase in their vision, and a 100% increase in their ears. Snipers have double the rate of
	regular infantry, just like with default BIS soldiers.
*/
#define SFP_RegularSens		1
#define SFP_RegularEarSens	0.2
#define SFP_RangerSens		1.5
#define SFP_RangerEarSens	0.4
#define SFP_SniperSens		2

/*
	Standard magazine loadouts
*/
#define sfp_soldier_40mm_4mag "1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"

#define sfp_soldier_ag90_4mag "sfp_10Rnd_127x99_ag90","sfp_10Rnd_127x99_ag90","sfp_10Rnd_127x99_ag90","sfp_10Rnd_127x99_ag90"
#define sfp_soldier_ag90_5mag sfp_soldier_ag90_4mag,"sfp_10Rnd_127x99_ag90"

#define sfp_soldier_ak4_7mag "sfp_20Rnd_762x51_ak4","sfp_20Rnd_762x51_ak4","sfp_20Rnd_762x51_ak4","sfp_20Rnd_762x51_ak4","sfp_20Rnd_762x51_ak4","sfp_20Rnd_762x51_ak4","sfp_20Rnd_762x51_ak4"

#define sfp_soldier_ak4_8mag sfp_soldier_ak4_7mag,"sfp_20Rnd_762x51_ak4"

#define sfp_soldier_ak5_4mag "sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag"
#define sfp_soldier_ak5_6mag sfp_soldier_ak5_4mag,"sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag"
#define sfp_soldier_ak5_8mag sfp_soldier_ak5_4mag,sfp_soldier_ak5_4mag

#define sfp_soldier_ak5c_4mag "sfp_30Rnd_556x45_Stanag_plastic","sfp_30Rnd_556x45_Stanag_plastic","sfp_30Rnd_556x45_Stanag_plastic","sfp_30Rnd_556x45_Stanag_plastic"
#define sfp_soldier_ak5c_6mag sfp_soldier_ak5c_4mag,"sfp_30Rnd_556x45_Stanag","sfp_30Rnd_556x45_Stanag"
#define sfp_soldier_ak5c_7mag sfp_soldier_ak5c_6mag,"sfp_30Rnd_556x45_Stanag"
#define sfp_soldier_ak5c_8mag sfp_soldier_ak5c_4mag,sfp_soldier_ak5_4mag

#define sfp_soldier_g36c_4mag "sfp_30Rnd_556x45_Stanag_g36","sfp_30Rnd_556x45_Stanag_g36","sfp_30Rnd_556x45_Stanag_g36","sfp_30Rnd_556x45_Stanag_g36"
#define sfp_soldier_g36c_8mag sfp_soldier_g36c_4mag,sfp_soldier_g36c_4mag

#define sfp_soldier_kpistm45_6mag "sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45"
#define sfp_soldier_kpistm45_8mag sfp_soldier_kpistm45_6mag,"sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45"

#define sfp_soldier_ksp58_50rnd_2mag "sfp_50Rnd_762x51_ksp58","sfp_50Rnd_762x51_ksp58"
#define sfp_soldier_ksp58_50rnd_3mag sfp_soldier_ksp58_50rnd_2mag,"sfp_50Rnd_762x51_ksp58"
#define sfp_soldier_ksp58_50rnd_4mag sfp_soldier_ksp58_50rnd_2mag,sfp_soldier_ksp58_50rnd_2mag
#define sfp_soldier_ksp58_100rnd_2mag "sfp_100Rnd_762x51_ksp58","sfp_100Rnd_762x51_ksp58"
#define sfp_soldier_ksp90_200rnd_2mag "sfp_200Rnd_556x45_ksp90","sfp_200Rnd_556x45_ksp90"

#define sfp_soldier_p88_2mag "sfp_17Rnd_9x19_Mag","sfp_17Rnd_9x19_Mag"
#define sfp_soldier_p88_3mag sfp_soldier_p88_2mag,"sfp_17Rnd_9x19_Mag"
#define sfp_soldier_p88_4mag sfp_soldier_p88_2mag,sfp_soldier_p88_2mag

#define sfp_soldier_psg90_4mag "sfp_9Rnd_762x51_psg90","sfp_9Rnd_762x51_psg90","sfp_9Rnd_762x51_psg90","sfp_9Rnd_762x51_psg90"
#define sfp_soldier_psg90_8mag sfp_soldier_psg90_4mag,sfp_soldier_psg90_4mag

#define sfp_soldier_shgr07_2mag "sfp_handgrenade_shgr07","sfp_handgrenade_shgr07"
#define sfp_soldier_shgr56_2mag "sfp_handgrenade_shgr56","sfp_handgrenade_shgr56"
#define sfp_soldier_shgr2000_2mag "sfp_handgrenade_shgr2000","sfp_handgrenade_shgr2000"

#define sfp_soldier_smoke_2mag "SmokeShell","SmokeShell"
#define sfp_soldier_smoke_green_2mag "SmokeShellGreen","SmokeShellGreen"

#define sfp_mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define sfp_weap_xx(a,b) class _xx_##a {weapon = a; count = b;}

#define sfp_swe_mag_modern(x) \
	class TransportMagazines \
	{ \
		sfp_mag_xx(sfp_17Rnd_9x19_P88,10*x); \
		sfp_mag_xx(30Rnd_556x45_Stanag,20*x); \
		sfp_mag_xx(200Rnd_556x45_M249,5*x); \
	};
#define sfp_swe_mag_modern_apc(x) \
	class TransportMagazines \
	{ \
		sfp_mag_xx(sfp_17Rnd_9x19_P88,10*x); \
		sfp_mag_xx(30Rnd_556x45_Stanag,20*x); \
		sfp_mag_xx(200Rnd_556x45_M249,4*x); \
		sfp_mag_xx(sfp_pskott86_rocket,2*x); \
	};

#define sfp_swe_weap_modern_apc(x) \
	class TransportWeapons \
	{ \
		sfp_weap_xx(sfp_pskott86,2*x); \
	};

#define sfp_swe_mag(x) \
	class TransportMagazines \
	{ \
		sfp_mag_xx(sfp_36Rnd_9x19_M45,10*x); \
		sfp_mag_xx(sfp_20Rnd_762x51_ak4,20*x); \
		sfp_mag_xx(sfp_50Rnd_762x51_ksp58,5*x); \
	};
#define sfp_swe_mag_apc(x) \
	class TransportMagazines \
	{ \
		sfp_mag_xx(sfp_36Rnd_9x19_M45,10*x); \
		sfp_mag_xx(sfp_20Rnd_762x51_ak4,20*x); \
		sfp_mag_xx(sfp_50Rnd_762x51_ksp58,4*x); \
		sfp_mag_xx(sfp_pskott68_rocket,2*x); \
	};

#define sfp_swe_weap_apc(x) \
	class TransportWeapons \
	{ \
		sfp_weap_xx(sfp_pskott68,2*x); \
	};
