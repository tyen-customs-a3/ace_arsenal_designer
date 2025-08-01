
#define _ARMA_

class cfgpatches
{
	class ptv_sounds
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 2.0;
		requiredaddons[] = {"a3_weapons_f","a3_weapons_f_acc","ptv_weapons_cfg","ptv_weapons"};
		version = 1;
		author[] = {};
		authorurl = "http://www.ptvfor.com//";
	};
};
class cfgsoundeffects
{
	class attenuationseffects
	{
		class ptv_car_attenuation
		{
			class equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.63095737,0.56234133,0.39810717,0.31622776};
			};
			class equalizer1
			{
				center[] = {60,500,3000,8000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.70794576,0.5011872,0.3548134,0.17782794};
			};
			class echo
			{
				wetdrymix = 0.1;
				feedback = 0.1;
				delay = 50;
			};
		};
		class ptv_semiopencar_attenuation
		{
			class equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {1,1,1,1};
				gain[] = {1,0.8912509,0.7943282,0.70794576};
			};
			class equalizer1
			{
				center[] = {60,500,3000,8000};
				bandwidth[] = {1,1,1,1};
				gain[] = {1,0.8912509,0.7943282,0.70794576};
			};
			class echo
			{
				wetdrymix = 0.1;
				feedback = 0.1;
				delay = 10;
			};
		};
		class ptv_opencar_attenuation
		{
			class equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,1,1};
			};
			class equalizer1
			{
				center[] = {60,500,3000,8000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,1,1,1};
			};
			class echo
			{
				wetdrymix = 0;
				feedback = 0;
				delay = 1;
			};
		};
		class ptv_truck_attenuation
		{
			class equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,0.8912509,0.63095737,0.5011872};
			};
			class equalizer1
			{
				center[] = {50,500,2500,10000};
				bandwidth[] = {2,2,2,2};
				gain[] = {1,0.8912509,0.7943282,0.5011872};
			};
			class echo
			{
				wetdrymix = 0;
				feedback = 0;
				delay = 1;
			};
		};
		class ptv_mrap_attenuation
		{
			class equalizer0
			{
				center[] = {100,250,1000,5000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.8912509,0.8912509,0.7943282,0.39810717};
			};
			class equalizer1
			{
				center[] = {50,500,2500,10000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.8912509,0.8912509,0.7943282,0.39810717};
			};
			class echo
			{
				wetdrymix = 0;
				feedback = 0;
				delay = 1;
			};
		};
		class ptv_tank_attenuation
		{
			class equalizer0
			{
				center[] = {100,250,2500,7500};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.8912509,0.84139514,0.39810717,0.12589253};
			};
			class equalizer1
			{
				center[] = {50,500,5000,10000};
				bandwidth[] = {2,2,2,2};
				gain[] = {0.8912509,0.84139514,0.39810717,0.12589253};
			};
			class echo
			{
				wetdrymix = 0;
				feedback = 0;
				delay = 1;
			};
		};
	};
};
class cfgsoundcurves
{
	class ptv_basic_volumecurve
	{
		points[] = {{0,1},{0.1,0.7},{0.2,0.5},{0.3,0.4},{0.4,0.3},{0.5,0.2},{0.6,0.1},{0.7,0.05},{0.8,0.025},{0.9,0.01},{1,0}};
	};
	class ptv_environment_volumecurve
	{
		points[] = {{0,1},{0.1,0.47},{0.2,0.35},{0.3,0.1},{0.4,0.08},{0.5,0.05},{0.6,0.026},{0.7,0.014},{0.8,0.01},{0.9,0.005},{1,0}};
	};
	class ptv_explosions_volumecurve
	{
		points[] = {{0,1},{0.05,0.72},{0.1,0.5},{0.15,0.344},{0.2,0.225},{0.25,0.195},{0.3,0.15},{0.35,0.12},{0.4,0.09},{0.45,0.07},{0.5,0.045},{0.6,0.025},{0.7,0.0125},{0.8,0.0055},{0.9,0.0025},{1,0}};
	};
	class ptv_weapons_pistols_volumecurve
	{
		points[] = {{0,1},{0.1,0.25},{0.2,0.075},{0.3,0.01},{0.4,0.0075},{0.5,0.005},{0.6,0.001},{0.7,0.00075},{0.8,0.00025},{0.9,0.0001},{1,0}};
	};
	class ptv_weapons_smgs_volumecurve
	{
		points[] = {{0,1},{0.1,0.3},{0.2,0.125},{0.3,0.05},{0.4,0.025},{0.5,0.01},{0.6,0.005},{0.7,0.0025},{0.8,0.00075},{0.9,0.0001},{1,0}};
	};
	class ptv_weapons_rifles556_volumecurve
	{
		points[] = {{0,1},{0.1,0.4},{0.2,0.175},{0.3,0.1},{0.4,0.075},{0.5,0.05},{0.6,0.01},{0.7,0.0075},{0.8,0.0025},{0.9,0.0005},{1,0}};
	};
	class ptv_weapons_rifles762_volumecurve
	{
		points[] = {{0,1},{0.1,0.45},{0.2,0.225},{0.3,0.15},{0.4,0.1},{0.5,0.075},{0.6,0.05},{0.7,0.025},{0.8,0.01},{0.9,0.005},{1,0}};
	};
	class ptv_weapons_dmrs_volumecurve
	{
		points[] = {{0,1},{0.1,0.475},{0.2,0.25},{0.3,0.175},{0.4,0.125},{0.5,0.1},{0.6,0.075},{0.7,0.05},{0.8,0.015},{0.9,0.005},{1,0}};
	};
	class ptv_weapons_mgs_volumecurve
	{
		points[] = {{0,1},{0.1,0.5},{0.2,0.275},{0.3,0.2},{0.4,0.15},{0.5,0.125},{0.6,0.1},{0.7,0.075},{0.8,0.05},{0.9,0.01},{1,0}};
	};
	class ptv_weapons_heavy_volumecurve
	{
		points[] = {{0,1},{0.1,0.5},{0.2,0.325},{0.3,0.25},{0.4,0.2},{0.5,0.175},{0.6,0.15},{0.7,0.125},{0.8,0.1},{0.9,0.05},{1,0}};
	};
	class ptv_weapons_silenced_volumecurve
	{
		points[] = {{0,1},{0.1,0.57},{0.2,0.25},{0.3,0.11},{0.4,0.09},{0.5,0.08},{0.6,0.06},{0.7,0.04},{0.8,0.01},{0.9,0.005},{1,0}};
	};
	class ptv_weapons_launcher_volumecurve
	{
		points[] = {{0,1},{0.05,0.93},{0.1,0.64},{0.15,0.35},{0.2,0.225},{0.25,0.15},{0.3,0.12},{0.35,0.1},{0.4,0.08},{0.45,0.05},{0.5,0.0375},{0.6,0.0175},{0.7,0.01},{0.8,0.0075},{0.9,0.001},{1,0}};
	};
	class ptv_basic_processorcurve
	{
		points[] = {{0,1},{0.1,0.97},{0.2,0.95},{0.3,0.85},{0.4,0.71},{0.5,0.52},{0.6,0.32},{0.7,0.18},{0.8,0.1},{0.9,0.03},{1,0}};
	};
	class ptv_fadeout_volumecurve
	{
		points[] = {{0,1},{1,0}};
	};
	class ptv_weapons_processorcurve
	{
		points[] = {{0,1},{0.01,0.75},{0.02,0.6},{0.1,0.45},{0.2,0.3},{0.3,0.15},{0.4,0.1},{0.9,0.05},{1,0}};
	};
};
class cfgsound3dprocessors
{
	class ptv_weapons_3dprocessor
	{
		type = "panner";
		innerrange = 2;
		range = 10;
		rangecurve = "linearcurve";
	};
	class ptv_weapons_tails_3dprocessor
	{
		type = "panner";
		innerrange = 5;
		range = 250;
		rangecurve[] = {{0,1},{50,0.33},{150,0.25},{250,0}};
	};
	class ptv_explosions_3dprocessor
	{
		type = "panner";
		innerrange = 10;
		range = 500;
		rangecurve[] = {{0,1},{10,0.15},{1000,0.25},{2000,0.5},{3000,0}};
	};
	class ptv_explosion_tails_3dprocessor
	{
		type = "panner";
		innerrange = 20;
		range = 500;
		rangecurve = "ptv_basic_processorcurve";
	};
	class ptv_basic_3dprocessor
	{
		type = "panner";
		innerrange = 1;
		range = 25;
		rangecurve = "ptv_basic_processorcurve";
	};
	class ptv_vehicle_3dprocessor
	{
		type = "panner";
		innerrange = 0;
		range = 100;
		rangecurve[] = {{0,0.5},{10,0.1},{20,0.05},{100,0}};
	};
	class ptv_tank_3dprocessor
	{
		type = "panner";
		innerrange = 5;
		range = 100;
		rangecurve[] = {{0,1},{20,0.25},{20,0.1},{40,0.05},{100,0}};
	};
	class ptv_vehicleint_middle_3dprocessingtype
	{
		type = "surround_panner";
		radius = 10;
		reference = "vehicle";
		volumefrontleft = 1;
		volumefrontright = 1;
		volumebackleft = 1;
		volumebackright = 1;
	};
	class ptv_vehicleext_noises_3dprocessingtype
	{
		type = "panner";
		innerrange = 5;
		range = 15;
		rangecurve = "ptv_basic_volumecurve";
	};
};
class cfgdistancefilters
{
	class ptv_basic_lowpass_filter
	{
		type = "lowpassfilter";
		mincutofffrequency = 350;
		qfactor = 1;
		innerrange = 7;
		range = 1500;
		powerfactor = 40;
	};
	class ptv_environment_lowpass_filter
	{
		type = "lowpassfilter";
		mincutofffrequency = 420;
		qfactor = 1;
		innerrange = 5;
		range = 500;
		powerfactor = 40;
	};
	class ptv_weapons_lowpass_filter
	{
		type = "lowpassfilter";
		mincutofffrequency = 75;
		qfactor = 1;
		innerrange = 50;
		range = 1500;
		powerfactor = 15;
	};
	class ptv_explosions_lowpass_filter
	{
		type = "lowpassfilter";
		mincutofffrequency = 190;
		qfactor = 1;
		innerrange = 25;
		range = 1000;
		powerfactor = 32;
	};
	class ptv_vehicle_lowpass_filter
	{
		type = "lowpassfilter";
		mincutofffrequency = 300;
		qfactor = 0.75;
		innerrange = 10;
		range = 300;
		powerfactor = 55;
	};
	class ptv_tank_lowpass_filter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 750;
		qFactor = 0.5;
		innerRange = 100;
		range = 2000;
		powerFactor = 50;
	};
};
class cfgsoundshapes
{
	class ptv_helo_rotor_front
	{
		type = "cone";
		innervolume = 1;
		outervolume = 0.2;
		innerangle = 120;
		outerangle = 240;
		azimuth = 0;
		elevation = 0;
	};
	class ptv_helo_turbine_back
	{
		type = "cone";
		innervolume = 1;
		outervolume = 0.1;
		innerangle = 120;
		outerangle = 240;
		azimuth = 180;
		elevation = 0;
	};
	class ptv_helo_front
	{
		type = "cone";
		innervolume = 1;
		outervolume = 0.5;
		innerangle = 120;
		outerangle = 240;
		azimuth = 0;
		elevation = 0;
	};
	class ptv_helo_back
	{
		type = "cone";
		innervolume = 1;
		outervolume = 0.5;
		innerangle = 120;
		outerangle = 240;
		azimuth = 180;
		elevation = 0;
	};
	class ptv_helo_tailrotor
	{
		type = "cone";
		innervolume = 1;
		outervolume = 0.5;
		innerangle = 60;
		outerangle = 120;
		azimuth = 180;
		elevation = 0;
	};
	class ptv_car_front
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.75;
		innerAngle = 200;
		outerAngle = 360;
		azimuth = 0;
		elevation = 0;
	};
	class ptv_car_back
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.75;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 180;
		elevation = 0;
	};
	class ptv_helicopter_rotor_front
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.25;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 0;
		elevation = 0;
	};
	class ptv_helicopter_turbine_back
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.25;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 180;
		elevation = 0;
	};
	class ptv_helicopter_front
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.5;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 0;
		elevation = 0;
	};
	class ptv_helicopter_back
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.5;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 180;
		elevation = 0;
	};
	class ptv_tank_front
	{
		type = "cone";
		innerVolume = 1.5;
		outerVolume = 1;
		innerAngle = 200;
		outerAngle = 360;
		azimuth = 0;
		elevation = 0;
	};
	class ptv_tank_back
	{
		type = "cone";
		innerVolume = 1.5;
		outerVolume = 1;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 180;
		elevation = 0;
	};
	class ptv_tank_left
	{
		type = "cone";
		innerVolume = 1.5;
		outerVolume = 1;
		innerAngle = 90;
		outerAngle = 180;
		azimuth = 90;
		elevation = 0;
	};
	class ptv_tank_right
	{
		type = "cone";
		innerVolume = 1.5;
		outerVolume = 1;
		innerAngle = 90;
		outerAngle = 180;
		azimuth = -90;
		elevation = 0;
	};
	class ptv_tank_distance_front
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.25;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 0;
		elevation = 0;
	};
	class ptv_tank_distance_back
	{
		type = "cone";
		innerVolume = 1;
		outerVolume = 0.25;
		innerAngle = 120;
		outerAngle = 240;
		azimuth = 180;
		elevation = 0;
	};
};
class cfgsoundsets
{
	class ptv_pistol_shake_soundset
	{
		soundshaders[] = {"ptv_pistol_shake_soundshader"};
		volumefactor = 1;
		volumecurve = "inversesquare2curve";
		volumerandomizer = 0.5;
		sound3dprocessingtype = "ptv_weapons_3dprocessor";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "ptv_weapons_lowpass_filter";
		frequencyrandomizer = 2;
		soundshaderslimit = 2;
		occlusionfactor = 0.2;
		obstructionfactor = 0;
	};
	class ptv_rifle_shake_soundset
	{
		soundshaders[] = {"ptv_rifle_shake_soundshader"};
		volumefactor = 1;
		volumecurve = "inversesquare2curve";
		volumerandomizer = 0.5;
		sound3dprocessingtype = "ptv_weapons_3dprocessor";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "ptv_weapons_lowpass_filter";
		frequencyrandomizer = 2;
		soundshaderslimit = 2;
		occlusionfactor = 0.2;
		obstructionfactor = 0;
	};
	class ptv_sniper_shake_soundset
	{
		soundshaders[] = {"ptv_sniper_shake_soundshader"};
		volumefactor = 1;
		volumecurve = "inversesquare2curve";
		volumerandomizer = 0.5;
		sound3dprocessingtype = "ptv_weapons_3dprocessor";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "ptv_weapons_lowpass_filter";
		frequencyrandomizer = 2;
		soundshaderslimit = 2;
		occlusionfactor = 0.2;
		obstructionfactor = 0;
	};
	class ptv_basic_shot_soundset
	{
		volumefactor = 1.6;
		volumerandomizer = 1;
		frequencyrandomizer = 1;
		volumecurve = "inversesquare2curve";
		sound3dprocessingtype = "ptv_weapons_3dprocessor";
		distancefilter = "ptv_weapons_lowpass_filter";
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class ptv_basic_shot_silenced_soundset
	{
		volumefactor = 1.4;
		volumecurve = "inversesquare2curve";
		sound3dprocessingtype = "ptv_weapons_3dprocessor";
		distancefilter = "ptv_weapons_lowpass_filter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		occlusionfactor = 0.33;
		obstructionfactor = 0.33;
		volumerandomizer = 1;
		frequencyrandomizer = 1;
	};
	class ptv_l9a2_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_l9a2_closure_soundshader","ptv_l9a2_interior_shot_soundshader","ptv_glock_interior_distance_shot_soundshader","ptv_l9a2_close_shot_soundshader","ptv_l9a2_close_distance_shot_soundshader","ptv_l9a2_medium_distance_shot_soundshader","ptv_l9a2_far_distance_shot_soundshader"};
	};
	class ptv_l9a2_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_l9a2_closure_soundshader","ptv_l9a2_silenced_interior_shot_soundshader","ptv_l9a2_silenced_interior_distance_shot_soundshader","ptv_l9a2_silenced_close_shot_soundshader","ptv_l9a2_silenced_close_distance_shot_soundshader"};
	};
	class ptv_p320_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_p320_closure_soundshader","ptv_p320_interior_shot_soundshader","ptv_p320_interior_distance_shot_soundshader","ptv_p320_close_shot_soundshader","ptv_p320_close_distance_shot_soundshader","ptv_p320_medium_distance_shot_soundshader","ptv_p320_far_distance_shot_soundshader"};
	};
	class ptv_p320_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_p320_closure_soundshader","ptv_p320_silenced_interior_shot_soundshader","ptv_p320_silenced_interior_distance_shot_soundshader","ptv_p320_silenced_close_shot_soundshader","ptv_p320_silenced_close_distance_shot_soundshader"};
	};
	class ptv_glock_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_glock_closure_soundshader","ptv_glock_interior_shot_soundshader","ptv_glock_interior_distance_shot_soundshader","ptv_glock_close_shot_soundshader","ptv_glock_close_distance_shot_soundshader","ptv_glock_medium_distance_shot_soundshader","ptv_glock_far_distance_shot_soundshader"};
	};
	class ptv_glock_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_glock_closure_soundshader","ptv_glock_silenced_interior_shot_soundshader","ptv_glock_silenced_interior_distance_shot_soundshader","ptv_glock_silenced_close_shot_soundshader","ptv_glock_silenced_close_distance_shot_soundshader"};
	};
	class ptv_usp45_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_usp45_closure_soundshader","ptv_usp45_interior_shot_soundshader","ptv_usp45_interior_distance_shot_soundshader","ptv_usp45_close_shot_soundshader","ptv_usp45_close_distance_shot_soundshader","ptv_usp45_medium_distance_shot_soundshader","ptv_usp45_far_distance_shot_soundshader"};
	};
	class ptv_usp45_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_usp45_closure_soundshader","ptv_usp45_silenced_interior_shot_soundshader","ptv_usp45_silenced_interior_distance_shot_soundshader","ptv_usp45_silenced_close_shot_soundshader","ptv_usp45_silenced_close_distance_shot_soundshader"};
	};
	class ptv_benelli_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_benelli_closure_soundshader","ptv_benelli_interior_shot_soundshader","ptv_benelli_interior_distance_shot_soundshader","ptv_benelli_close_shot_soundshader","ptv_benelli_close_distance_shot_soundshader","ptv_benelli_medium_distance_shot_soundshader","ptv_benelli_far_distance_shot_soundshader"};
	};
	class ptv_cbj_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_cbj_closure_soundshader","ptv_cbj_interior_shot_soundshader","ptv_cbj_interior_distance_shot_soundshader","ptv_cbj_close_shot_soundshader","ptv_cbj_close_distance_shot_soundshader","ptv_cbj_medium_distance_shot_soundshader","ptv_cbj_far_distance_shot_soundshader"};
	};
	class ptv_cbj_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_cbj_closure_soundshader","ptv_cbj_silenced_interior_shot_soundshader","ptv_cbj_silenced_interior_distance_shot_soundshader","ptv_cbj_silenced_close_shot_soundshader","ptv_cbj_silenced_close_distance_shot_soundshader"};
	};
	class ptv_cbj45_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_cbj45_closure_soundshader","ptv_cbj45_interior_shot_soundshader","ptv_cbj45_interior_distance_shot_soundshader","ptv_cbj45_close_shot_soundshader","ptv_cbj45_close_distance_shot_soundshader","ptv_cbj45_medium_distance_shot_soundshader","ptv_cbj45_far_distance_shot_soundshader"};
	};
	class ptv_cbj45_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_cbj45_closure_soundshader","ptv_cbj45_silenced_interior_shot_soundshader","ptv_cbj45_silenced_interior_distance_shot_soundshader","ptv_cbj45_silenced_close_shot_soundshader","ptv_cbj45_silenced_close_distance_shot_soundshader"};
	};
	class ptv_mp9_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_mp9_closure_soundshader","ptv_mp9_interior_shot_soundshader","ptv_mp9_interior_distance_shot_soundshader","ptv_mp9_close_shot_soundshader","ptv_mp9_close_distance_shot_soundshader","ptv_mp9_medium_distance_shot_soundshader","ptv_mp9_far_distance_shot_soundshader"};
	};
	class ptv_mp9_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_mp9_closure_soundshader","ptv_mp9_silenced_interior_shot_soundshader","ptv_mp9_silenced_interior_distance_shot_soundshader","ptv_mp9_silenced_close_shot_soundshader","ptv_mp9_silenced_close_distance_shot_soundshader"};
	};
	class ptv_galil_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_galil_closure_soundshader","ptv_galil_interior_shot_soundshader","ptv_galil_interior_distance_shot_soundshader","ptv_galil_close_shot_soundshader","ptv_galil_close_distance_shot_soundshader","ptv_galil_medium_distance_shot_soundshader","ptv_galil_far_distance_shot_soundshader"};
	};
	class ptv_galil_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_galil_closure_soundshader","ptv_galil_silenced_interior_shot_soundshader","ptv_galil_silenced_interior_distance_shot_soundshader","ptv_galil_silenced_close_shot_soundshader","ptv_galil_silenced_close_distance_shot_soundshader"};
	};
	class ptv_galil_auto_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_galil_auto_closure_soundshader","ptv_galil_interior_shot_soundshader","ptv_galil_interior_distance_shot_soundshader","ptv_galil_close_auto_shot_soundshader","ptv_galil_close_distance_shot_soundshader","ptv_galil_medium_distance_shot_soundshader","ptv_galil_far_distance_shot_soundshader"};
	};
	class ptv_galil_auto_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_galil_auto_closure_soundshader","ptv_galil_silenced_interior_shot_soundshader","ptv_galil_silenced_interior_distance_shot_soundshader","ptv_galil_silenced_close_shot_soundshader","ptv_galil_silenced_close_distance_shot_soundshader"};
	};
	class ptv_rs556_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_rs556_closure_soundshader","ptv_rs556_interior_shot_soundshader","ptv_rs556_interior_distance_shot_soundshader","ptv_rs556_close_shot_soundshader","ptv_rs556_close_distance_shot_soundshader","ptv_rs556_medium_distance_shot_soundshader","ptv_rs556_far_distance_shot_soundshader"};
	};
	class ptv_rs556_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_rs556_closure_soundshader","ptv_rs556_silenced_interior_shot_soundshader","ptv_rs556_silenced_interior_distance_shot_soundshader","ptv_rs556_silenced_close_shot_soundshader","ptv_rs556_silenced_close_distance_shot_soundshader"};
	};
	class ptv_rs556_auto_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_rs556_auto_closure_soundshader","ptv_rs556_interior_shot_soundshader","ptv_rs556_interior_distance_shot_soundshader","ptv_rs556_close_shot_soundshader","ptv_rs556_close_distance_shot_soundshader","ptv_rs556_medium_distance_shot_soundshader","ptv_rs556_far_distance_shot_soundshader"};
	};
	class ptv_rs556_auto_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_rs556_auto_closure_soundshader","ptv_rs556_silenced_interior_shot_soundshader","ptv_rs556_silenced_interior_distance_shot_soundshader","ptv_rs556_silenced_close_shot_soundshader","ptv_rs556_silenced_close_distance_shot_soundshader"};
	};
	class ptv_hk433_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_hk433_closure_soundshader","ptv_hk433_interior_shot_soundshader","ptv_hk433_interior_distance_shot_soundshader","ptv_hk433_close_shot_soundshader","ptv_hk433_close_distance_shot_soundshader","ptv_hk433_medium_distance_shot_soundshader","ptv_hk433_far_distance_shot_soundshader"};
	};
	class ptv_hk433_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_hk433_closure_soundshader","ptv_hk433_silenced_interior_shot_soundshader","ptv_hk433_silenced_interior_distance_shot_soundshader","ptv_hk433_silenced_close_shot_soundshader","ptv_hk433_silenced_close_distance_shot_soundshader"};
	};
	class ptv_hk433_auto_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_hk433_auto_closure_soundshader","ptv_hk433_interior_shot_soundshader","ptv_hk433_interior_distance_shot_soundshader","ptv_hk433_close_shot_soundshader","ptv_hk433_close_distance_shot_soundshader","ptv_hk433_medium_distance_shot_soundshader","ptv_hk433_far_distance_shot_soundshader"};
	};
	class ptv_hk433_auto_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_hk433_auto_closure_soundshader","ptv_hk433_silenced_interior_shot_soundshader","ptv_hk433_silenced_interior_distance_shot_soundshader","ptv_hk433_silenced_close_shot_soundshader","ptv_hk433_silenced_close_distance_shot_soundshader"};
	};
	class ptv_rk_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_rk_closure_soundshader","ptv_rk_interior_shot_soundshader","ptv_rk_interior_distance_shot_soundshader","ptv_rk_close_shot_soundshader","ptv_rk_close_distance_shot_soundshader","ptv_rk_medium_distance_shot_soundshader","ptv_rk_far_distance_shot_soundshader"};
	};
	class ptv_rk_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_rk_closure_soundshader","ptv_rk_silenced_interior_shot_soundshader","ptv_rk_silenced_interior_distance_shot_soundshader","ptv_rk_silenced_close_shot_soundshader","ptv_rk_silenced_close_distance_shot_soundshader"};
	};
	class ptv_rk_auto_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_rk_auto_closure_soundshader","ptv_rk_interior_shot_soundshader","ptv_rk_interior_distance_shot_soundshader","ptv_rk_close_auto_shot_soundshader","ptv_rk_close_distance_shot_soundshader","ptv_rk_medium_distance_shot_soundshader","ptv_rk_far_distance_shot_soundshader"};
	};
	class ptv_rk_auto_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_rk_auto_closure_soundshader","ptv_rk_silenced_interior_shot_soundshader","ptv_rk_silenced_interior_distance_shot_soundshader","ptv_rk_silenced_close_shot_soundshader","ptv_rk_silenced_close_distance_shot_soundshader"};
	};
	class ptv_m60_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_m60_closure_soundshader","ptv_m60_interior_shot_soundshader","ptv_m60_interior_distance_shot_soundshader","ptv_m60_close_shot_soundshader","ptv_m60_close_distance_shot_soundshader","ptv_m60_medium_distance_shot_soundshader","ptv_m60_far_distance_shot_soundshader"};
		frequencyrandomizer = 0;
	};
	class ptv_m60_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_m60_closure_soundshader","ptv_m60_silenced_interior_shot_soundshader","ptv_m60_silenced_interior_distance_shot_soundshader","ptv_m60_silenced_close_shot_soundshader","ptv_m60_silenced_close_distance_shot_soundshader"};
		frequencyrandomizer = 0;
	};
	class ptv_negev_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_negev_closure_soundshader","ptv_negev_interior_shot_soundshader","ptv_negev_interior_distance_shot_soundshader","ptv_negev_close_shot_soundshader","ptv_negev_close_distance_shot_soundshader","ptv_negev_medium_distance_shot_soundshader","ptv_negev_far_distance_shot_soundshader"};
	};
	class ptv_negev_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_negev_closure_soundshader","ptv_negev_silenced_interior_shot_soundshader","ptv_negev_silenced_interior_distance_shot_soundshader","ptv_negev_silenced_close_shot_soundshader","ptv_negev_silenced_close_distance_shot_soundshader"};
	};
	class ptv_m249_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_m249_closure_soundshader","ptv_m249_interior_shot_soundshader","ptv_m249_interior_distance_shot_soundshader","ptv_m249_close_shot_soundshader","ptv_m249_close_distance_shot_soundshader","ptv_m249_medium_distance_shot_soundshader","ptv_m249_far_distance_shot_soundshader"};
	};
	class ptv_m249_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_m249_closure_soundshader","ptv_m249_silenced_interior_shot_soundshader","ptv_m249_silenced_interior_distance_shot_soundshader","ptv_m249_silenced_close_shot_soundshader","ptv_m249_silenced_close_distance_shot_soundshader"};
	};
	class ptv_mg3_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_mg3_closure_soundshader","ptv_mg3_interior_shot_soundshader","ptv_mg3_interior_distance_shot_soundshader","ptv_mg3_close_shot_soundshader","ptv_mg3_close_distance_shot_soundshader","ptv_mg3_medium_distance_shot_soundshader","ptv_mg3_far_distance_shot_soundshader"};
	};
	class ptv_trg42_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_trg42_interior_shot_soundshader","ptv_trg42_interior_distance_shot_soundshader","ptv_trg42_close_shot_soundshader","ptv_trg42_close_distance_shot_soundshader","ptv_trg42_medium_distance_shot_soundshader","ptv_trg42_far_distance_shot_soundshader"};
	};
	class ptv_trg42_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_trg42_silenced_interior_shot_soundshader","ptv_trg42_silenced_interior_distance_shot_soundshader","ptv_trg42_silenced_close_shot_soundshader","ptv_trg42_silenced_close_distance_shot_soundshader"};
	};
	class ptv_ax_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_ax_interior_shot_soundshader","ptv_ax_interior_distance_shot_soundshader","ptv_ax_close_shot_soundshader","ptv_ax_close_distance_shot_soundshader","ptv_ax_medium_distance_shot_soundshader","ptv_ax_far_distance_shot_soundshader"};
	};
	class ptv_ax_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_ax_silenced_interior_shot_soundshader","ptv_ax_silenced_interior_distance_shot_soundshader","ptv_ax_silenced_close_shot_soundshader","ptv_ax_silenced_close_distance_shot_soundshader"};
	};
	class ptv_m14_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_m14_closure_soundshader","ptv_m14_interior_shot_soundshader","ptv_m14_interior_distance_shot_soundshader","ptv_m14_close_shot_soundshader","ptv_m14_close_distance_shot_soundshader","ptv_m14_medium_distance_shot_soundshader","ptv_m14_far_distance_shot_soundshader"};
	};
	class ptv_m14_shot_silenced_soundset: ptv_basic_shot_silenced_soundset
	{
		soundshaders[] = {"ptv_m14_closure_soundshader","ptv_m14_silenced_interior_shot_soundshader","ptv_m14_silenced_interior_distance_shot_soundshader","ptv_m14_silenced_close_shot_soundshader","ptv_m14_silenced_close_distance_shot_soundshader"};
	};
	class ptv_m14_socom_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_m14_socom_closure_soundshader","ptv_m14_socom_interior_shot_soundshader","ptv_m14_socom_interior_distance_shot_soundshader","ptv_m14_socom_close_shot_soundshader","ptv_m14_socom_close_distance_shot_soundshader","ptv_m14_socom_medium_distance_shot_soundshader","ptv_m14_socom_far_distance_shot_soundshader"};
	};
	class ptv_m82a1_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_m82a1_closure_soundshader","ptv_m82a1_interior_shot_soundshader","ptv_m82a1_interior_distance_shot_soundshader","ptv_m82a1_close_shot_soundshader","ptv_m82a1_close_distance_shot_soundshader","ptv_m82a1_medium_distance_shot_soundshader","ptv_m82a1_far_distance_shot_soundshader"};
	};
	class ptv_ugl_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_ugl_interior_shot_soundshader","ptv_ugl_interior_distance_shot_soundshader","ptv_ugl_close_shot_soundshader","ptv_ugl_close_distance_shot_soundshader","ptv_ugl_medium_distance_shot_soundshader","ptv_ugl_far_distance_shot_soundshader"};
	};
	class ptv_m72_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_m72_interior_shot_soundshader","ptv_m72_interior_distance_shot_soundshader","ptv_m72_close_shot_soundshader","ptv_m72_close_distance_shot_soundshader","ptv_m72_medium_distance_shot_soundshader","ptv_m72_far_distance_shot_soundshader"};
	};
	class ptv_basic_tails_soundset
	{
		soundshaders[] = {"mx_tailtrees_soundshader","mx_tailforest_soundshader","mx_tailmeadows_soundshader","mx_tailhouses_soundshader"};
		volumecurve = "inversesquare2curve";
		volumerandomizer = 1.5;
		sound3dprocessingtype = "weaponmediumshottail3dprocessingtype";
		distancefilter = "weaponshottaildistancefreqattenuationfilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundshaderslimit = 2;
		occlusionfactor = 0;
		obstructionfactor = 0;
		volumefactor = 1;
		frequencyrandomizer = 2.5;
	};
	class ptv_basic_silencertails_soundset
	{
		soundshaders[] = {"mx_silencertailtrees_soundshader","mx_silencertailforest_soundshader","mx_silencertailmeadows_soundshader","mx_silencertailhouses_soundshader"};
		volumefactor = 1;
		volumerandomizer = 1.5;
		volumecurve = "inversesquare2curve";
		sound3dprocessingtype = "weaponmediumshottail3dprocessingtype";
		frequencyrandomizer = 1;
		occlusionfactor = 0.3;
		obstructionfactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundshaderslimit = 2;
	};
	class ptv_9mm_tails_soundset: ptv_basic_tails_soundset
	{
		soundshaders[] = {"ptv_9mm_tail_forest_soundshader","ptv_9mm_tail_houses_soundshader","ptv_9mm_tail_meadow_soundshader","ptv_9mm_tail_interior_soundshader"};
	};
	class ptv_cal45_tails_soundset: ptv_basic_tails_soundset
	{
		soundshaders[] = {"ptv_cal45_tail_forest_soundshader","ptv_cal45_tail_houses_soundshader","ptv_cal45_tail_meadow_soundshader","ptv_cal45_tail_interior_soundshader"};
	};
	class ptv_5x56mm_tails_soundset: ptv_basic_tails_soundset
	{
		soundshaders[] = {"ptv_5x56mm_tail_forest_soundshader","ptv_5x56mm_tail_houses_soundshader","ptv_5x56mm_tail_meadow_soundshader","ptv_5x56mm_tail_interior_soundshader"};
	};
	class ptv_7x62mm_tails_soundset: ptv_basic_tails_soundset
	{
		soundshaders[] = {"ptv_7x62mm_tail_forest_soundshader","ptv_7x62mm_tail_houses_soundshader","ptv_7x62mm_tail_meadow_soundshader","ptv_7x62mm_tail_interior_soundshader"};
	};
	class ptv_12x7mm_tails_soundset: ptv_basic_tails_soundset
	{
		soundshaders[] = {"ptv_12x7mm_tail_forest_soundshader","ptv_12x7mm_tail_houses_soundshader","ptv_12x7mm_tail_meadow_soundshader","ptv_12x7mm_tail_interior_soundshader"};
	};
	class ptv_9mm_silenced_tails_soundset: ptv_basic_silencertails_soundset
	{
		soundshaders[] = {"ptv_9mm_silenced_tail_houses_soundshader","ptv_9mm_silenced_tail_meadow_soundshader"};
	};
	class ptv_cal45_silenced_tails_soundset: ptv_basic_silencertails_soundset
	{
		soundshaders[] = {"ptv_cal45_silenced_tail_forest_soundshader","ptv_cal45_silenced_tail_houses_soundshader","ptv_cal45_silenced_tail_meadow_soundshader"};
	};
	class ptv_5x56mm_silenced_tails_soundset: ptv_basic_silencertails_soundset
	{
		soundshaders[] = {"ptv_5x56mm_silenced_tail_forest_soundshader","ptv_5x56mm_silenced_tail_houses_soundshader","ptv_5x56mm_silenced_tail_meadow_soundshader"};
	};
	class ptv_7x62mm_silenced_tails_soundset: ptv_basic_silencertails_soundset
	{
		soundshaders[] = {"ptv_7x62mm_silenced_tail_forest_soundshader","ptv_7x62mm_silenced_tail_houses_soundshader","ptv_7x62mm_silenced_tail_meadow_soundshader"};
	};
	class ptv_12x7mm_silenced_tails_soundset: ptv_basic_silencertails_soundset
	{
		soundshaders[] = {"ptv_12x7mm_silenced_tail_forest_soundshader","ptv_12x7mm_silenced_tail_houses_soundshader","ptv_12x7mm_silenced_tail_meadow_soundshader"};
	};
	class ptv_shotgun_tails_soundset: ptv_basic_tails_soundset
	{
		soundshaders[] = {"ptv_shotgun_trees_tail_soundshader","ptv_shotgun_forest_tail_soundshader","ptv_shotgun_meadows_tail_soundshader","ptv_shotgun_houses_tail_soundshader"};
	};
	class ptv_ugl_launcher_tails_soundset: ptv_basic_tails_soundset
	{
		soundshaders[] = {"ptv_ugl_launcher_trees_tail_soundshader","ptv_ugl_launcher_forest_tail_soundshader","ptv_ugl_launcher_meadows_tail_soundshader","ptv_ugl_launcher_houses_tail_soundshader"};
	};
	class ptv_lmg_coax_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_lmg_coax_closure_soundshader","ptv_lmg_coax_closure_external_soundshader","ptv_lmg_coax_interior_shot_soundshader","ptv_lmg_coax_close_shot_soundshader","ptv_lmg_coax_medium_distance_shot_soundshader","ptv_lmg_coax_far_distance_shot_soundshader"};
	};
	class ptv_m2_crows_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_m2_crows_closure_soundshader","ptv_m2_crows_closure_external_soundshader","ptv_m2_crows_interior_shot_soundshader","ptv_m2_crows_close_shot_soundshader","ptv_m2_crows_close_distance_shot_soundshader","ptv_m2_crows_medium_distance_shot_soundshader","ptv_m2_crows_far_distance_shot_soundshader"};
	};
	class ptv_mk19_crows_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_mk19_crows_closure_soundshader","ptv_mk19_crows_closure_external_soundshader","ptv_mk19_crows_interior_shot_soundshader","ptv_mk19_crows_close_shot_soundshader","ptv_mk19_crows_close_distance_shot_soundshader","ptv_mk19_crows_medium_distance_shot_soundshader","ptv_mk19_crows_far_distance_shot_soundshader"};
	};
	class ptv_autocannon_shot_soundset: ptv_basic_shot_soundset
	{
		soundshaders[] = {"ptv_autocannon_closure_soundshader","ptv_autocannon_closure_external_soundshader","ptv_autocannon_interior_shot_soundshader","ptv_autocannon_close_shot_soundshader","ptv_autocannon_medium_distance_shot_soundshader","ptv_autocannon_far_distance_shot_soundshader"};
	};
	class ptv_basic_engine_ext
	{
		sound3DProcessingType = "ptv_vehicle_3dprocessor";
		distanceFilter = "ptv_vehicle_lowpass_filter";
		volumeCurve = "ptv_basic_volumecurve";
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
	};
	class ptv_tank_engine_ext
	{
		sound3DProcessingType = "ptv_tank_3dprocessor";
		distanceFilter = "ptv_tank_lowpass_filter";
		volumeCurve = "ptv_basic_volumecurve";
		occlusionFactor = 0.6;
		obstructionFactor = 0.6;
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
	};
	class ptv_basic_engine_INT_SoundSet
	{
		sound3DProcessingType = "VehicleInt_Front_3DProcessingType";
		distanceFilter = "ptv_vehicle_lowpass_filter";
		volumeCurve = "ptv_fadeout_volumecurve";
		volumeFactor = 1;
		spatial = 0;
		loop = 1;
	};
	class ptv_basic_engine_INT_Back_SoundSet
	{
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		distanceFilter = "ptv_vehicle_lowpass_filter";
		volumeCurve = "ptv_fadeout_volumecurve";
		volumeFactor = 1;
		spatial = 0;
		loop = 1;
	};
	class ptv_basic_engine_INT_Middle_SoundSet
	{
		sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
		distanceFilter = "ptv_vehicle_lowpass_filter";
		volumeCurve = "ptv_fadeout_volumecurve";
		volumeFactor = 1;
		spatial = 0;
		loop = 1;
	};
	class ptv_matv_engine_ext_idle_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_matv_engine_ext_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_matv_engine_int_idle_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_matv_engine_int_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_matv_engine_ext_drive_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_matv_engine_ext_drive_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
	};
	class ptv_matv_engine_ext_distance_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_matv_engine_ext_distance_soundshader"};
		volumefactor = 0.5;
		shape = "ptv_tank_front";
	};
	class ptv_matv_exhaust_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_matv_exhaust_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
		shape = "ptv_tank_right";
	};
	class ptv_matv_exhaust_distance_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_matv_exhaust_distance_soundshader"};
		volumefactor = 0.5;
		shape = "ptv_tank_right";
	};
	class ptv_matv_engine_int_drive_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_matv_engine_int_drive_soundshader"};
		volumefactor = 1;
	};
	class ptv_matv_engine_rev_int_drive_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_matv_engine_rev_int_drive_soundshader"};
		volumefactor = 1;
	};
	class ptv_Warrior_engine_ext_idle_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Warrior_engine_ext_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_Warrior_engine_int_idle_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_Warrior_engine_int_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_Warrior_engine_ext_drive_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Warrior_engine_ext_drive_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
	};
	class ptv_Warrior_engine_ext_distance_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Warrior_engine_ext_distance_soundshader"};
		volumefactor = 0.5;
		occlusionFactor = 0.25;
		obstructionFactor = 0.25;
	};
	class ptv_Warrior_exhaust_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Warrior_exhaust_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
		shape = "ptv_tank_right";
	};
	class ptv_Warrior_exhaust_distance_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Warrior_exhaust_distance_soundshader"};
		volumefactor = 0.5;
		shape = "ptv_tank_right";
	};
	class ptv_Warrior_engine_int_drive_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_Warrior_engine_int_drive_soundshader"};
		volumefactor = 1;
	};
	class ptv_Pnd_engine_ext_idle_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Pnd_engine_ext_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_Pnd_engine_int_idle_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_Pnd_engine_int_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_Pnd_engine_ext_drive_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Pnd_engine_ext_drive_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
	};
	class ptv_Pnd_engine_ext_distance_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Pnd_engine_ext_distance_soundshader"};
		volumefactor = 0.5;
		occlusionFactor = 0.25;
		obstructionFactor = 0.25;
	};
	class ptv_Pnd_exhaust_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Pnd_exhaust_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
		shape = "ptv_tank_right";
	};
	class ptv_Pnd_exhaust_distance_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Pnd_exhaust_distance_soundshader"};
		volumefactor = 0.5;
		shape = "ptv_tank_right";
	};
	class ptv_Pnd_engine_int_drive_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_Pnd_engine_int_drive_soundshader"};
		volumefactor = 1;
	};
	class ptv_Leo2sg_engine_ext_idle_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Leo2sg_engine_ext_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_Leo2sg_engine_int_idle_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_Leo2sg_engine_int_idle_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.5;
	};
	class ptv_Leo2sg_engine_ext_drive_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Leo2sg_engine_ext_drive_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
	};
	class ptv_Leo2sg_engine_ext_distance_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Leo2sg_engine_ext_distance_soundshader"};
		volumefactor = 0.5;
		occlusionFactor = 0.25;
		obstructionFactor = 0.25;
	};
	class ptv_Leo2sg_exhaust_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Leo2sg_exhaust_soundshader"};
		posoffset[] = {0,0,0};
		volumefactor = 0.85;
		shape = "ptv_tank_back";
	};
	class ptv_Leo2sg_exhaust_distance_soundset: ptv_tank_engine_ext
	{
		soundshaders[] = {"ptv_Leo2sg_exhaust_distance_soundshader"};
		volumefactor = 0.5;
		shape = "ptv_tank_back";
	};
	class ptv_Leo2sg_engine_int_drive_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_Leo2sg_engine_int_drive_soundshader"};
		volumefactor = 1;
	};
	class ptv_treads_old_light_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_old_light_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_modern_light_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_modern_light_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_old_heavy_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_old_heavy_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_modern_heavy_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_modern_heavy_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_old_light_distance_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_old_light_distance_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_modern_light_distance_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_modern_light_distance_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_old_heavy_distance_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_old_heavy_distance_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_modern_heavy_distance_soundset: ptv_basic_engine_ext
	{
		soundshaders[] = {"ptv_treads_modern_heavy_distance_soundshader"};
		volumefactor = 0.75;
		sound3DProcessingType = "ptv_vehicleext_noises_3dprocessingtype";
	};
	class ptv_treads_interior_old_light_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_treads_interior_old_light_soundshader"};
		volumefactor = 1;
		sound3DProcessingType = "ptv_vehicleint_middle_3dprocessingtype";
	};
	class ptv_treads_interior_modern_light_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_treads_interior_modern_light_soundshader"};
		volumefactor = 1;
		sound3DProcessingType = "ptv_vehicleint_middle_3dprocessingtype";
	};
	class ptv_treads_interior_old_heavy_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_treads_interior_old_heavy_soundshader"};
		volumefactor = 1;
		sound3DProcessingType = "ptv_vehicleint_middle_3dprocessingtype";
	};
	class ptv_treads_interior_modern_heavy_soundset: ptv_basic_engine_INT_Middle_SoundSet
	{
		soundshaders[] = {"ptv_treads_interior_modern_heavy_soundshader"};
		volumefactor = 1;
		sound3DProcessingType = "ptv_vehicleint_middle_3dprocessingtype";
	};
};
class cfgsoundshaders
{
	class ptv_pistol_shake_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\shake\pistol_1.ogg",1},{"ptv_sounds\weapons\shake\pistol_2.ogg",1},{"ptv_sounds\weapons\shake\pistol_3.ogg",1},{"ptv_sounds\weapons\shake\pistol_4.ogg",1},{"ptv_sounds\weapons\shake\pistol_5.ogg",1},{"ptv_sounds\weapons\shake\pistol_6.ogg",1},{"ptv_sounds\weapons\shake\pistol_7.ogg",1},{"ptv_sounds\weapons\shake\pistol_8.ogg",1},{"ptv_sounds\weapons\shake\pistol_9.ogg",1},{"ptv_sounds\weapons\shake\pistol_10.ogg",1},{"ptv_sounds\weapons\shake\pistol_11.ogg",1},{"ptv_sounds\weapons\shake\pistol_12.ogg",1},{"ptv_sounds\weapons\shake\pistol_13.ogg",1}};
		volume = 1.25;
		range = 2;
		rangecurve[] = {{0,1},{1,1},{2,0}};
	};
	class ptv_rifle_shake_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\shake\rifle_1.ogg",1},{"ptv_sounds\weapons\shake\rifle_2.ogg",1},{"ptv_sounds\weapons\shake\rifle_3.ogg",1},{"ptv_sounds\weapons\shake\rifle_4.ogg",1},{"ptv_sounds\weapons\shake\rifle_5.ogg",1},{"ptv_sounds\weapons\shake\rifle_6.ogg",1},{"ptv_sounds\weapons\shake\rifle_7.ogg",1},{"ptv_sounds\weapons\shake\rifle_8.ogg",1},{"ptv_sounds\weapons\shake\rifle_9.ogg",1},{"ptv_sounds\weapons\shake\rifle_10.ogg",1},{"ptv_sounds\weapons\shake\rifle_11.ogg",1},{"ptv_sounds\weapons\shake\rifle_12.ogg",1},{"ptv_sounds\weapons\shake\rifle_13.ogg",1}};
		volume = 1.5;
		range = 2;
		rangecurve[] = {{0,1},{1,1},{2,0}};
	};
	class ptv_sniper_shake_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\shake\sniper_1.ogg",1},{"ptv_sounds\weapons\shake\sniper_2.ogg",1},{"ptv_sounds\weapons\shake\sniper_3.ogg",1},{"ptv_sounds\weapons\shake\sniper_4.ogg",1},{"ptv_sounds\weapons\shake\sniper_5.ogg",1},{"ptv_sounds\weapons\shake\sniper_6.ogg",1},{"ptv_sounds\weapons\shake\sniper_7.ogg",1},{"ptv_sounds\weapons\shake\sniper_8.ogg",1},{"ptv_sounds\weapons\shake\sniper_9.ogg",1},{"ptv_sounds\weapons\shake\sniper_10.ogg",1},{"ptv_sounds\weapons\shake\sniper_11.ogg",1},{"ptv_sounds\weapons\shake\sniper_12.ogg",1},{"ptv_sounds\weapons\shake\sniper_13.ogg",1}};
		volume = 1.25;
		range = 2;
		rangecurve[] = {{0,1},{1,1},{2,0}};
	};
	class ptv_basic_tail_soundshader
	{
		range = 500;
		limitation = 1;
		rangecurve[] = {{0,1.5},{10,0.5},{500,0}};
	};
	class ptv_extended_tail_soundshader
	{
		range = 1500;
		limitation = 1;
		rangecurve[] = {{0,0.5},{100,1},{1500,0}};
	};
	class ptv_basic_silenced_tail_soundshader
	{
		range = 150;
		limitation = 1;
		rangecurve[] = {{0,1},{150,0}};
	};
	class ptv_9mm_tail_forest_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\9mm\forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\9mm\forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\9mm\forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\9mm\forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_9mm_tail_houses_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\9mm\houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\9mm\houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\9mm\houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\9mm\houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_9mm_tail_meadow_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\9mm\meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\9mm\meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\9mm\meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\9mm\meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_9mm_tail_interior_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\9mm\interior_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\9mm\interior_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\9mm\interior_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\9mm\interior_tail_4.ogg",1}};
		volume = "0.5*interior";
	};
	class ptv_cal45_tail_forest_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\cal45\forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\cal45\forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\cal45\forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\cal45\forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_cal45_tail_houses_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\cal45\houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\cal45\houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\cal45\houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\cal45\houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_cal45_tail_meadow_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\cal45\meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\cal45\meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\cal45\meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\cal45\meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_cal45_tail_interior_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\cal45\interior_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\cal45\interior_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\cal45\interior_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\cal45\interior_tail_4.ogg",1}};
		volume = "0.5*interior";
	};
	class ptv_5x56mm_tail_forest_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\5.56mm\forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_5x56mm_tail_houses_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\5.56mm\houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_5x56mm_tail_meadow_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\5.56mm\meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_5x56mm_tail_interior_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\5.56mm\interior_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\interior_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\interior_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\interior_tail_4.ogg",1}};
		volume = "0.5*interior";
	};
	class ptv_7x62mm_tail_forest_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\7.62mm\forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_7x62mm_tail_houses_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\7.62mm\houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_7x62mm_tail_meadow_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\7.62mm\meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_7x62mm_tail_interior_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\7.62mm\interior_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\interior_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\interior_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\interior_tail_4.ogg",1}};
		volume = "0.5*interior";
	};
	class ptv_12x7mm_tail_forest_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\12.7mm\forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_12x7mm_tail_houses_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\12.7mm\houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_12x7mm_tail_meadow_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\12.7mm\meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_12x7mm_tail_interior_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\12.7mm\interior_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\interior_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\interior_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\interior_tail_4.ogg",1}};
		volume = "0.5*interior";
	};
	class ptv_9mm_silenced_tail_forest_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\9mm\silenced_forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_9mm_silenced_tail_houses_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\9mm\silenced_houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_9mm_silenced_tail_meadow_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\9mm\silenced_meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\9mm\silenced_meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_cal45_silenced_tail_forest_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\cal45\silenced_forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_cal45_silenced_tail_houses_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\cal45\silenced_houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_cal45_silenced_tail_meadow_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\cal45\silenced_meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\cal45\silenced_meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_5x56mm_silenced_tail_forest_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\5.56mm\silenced_forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_5x56mm_silenced_tail_houses_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\5.56mm\silenced_houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_5x56mm_silenced_tail_meadow_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\5.56mm\silenced_meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\5.56mm\silenced_meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_7x62mm_silenced_tail_forest_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\7.62mm\silenced_forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_7x62mm_silenced_tail_houses_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\7.62mm\silenced_houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_7x62mm_silenced_tail_meadow_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\7.62mm\silenced_meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\7.62mm\silenced_meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_12x7mm_silenced_tail_forest_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\12.7mm\silenced_forest_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_forest_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_forest_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_forest_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*forest/3";
	};
	class ptv_12x7mm_silenced_tail_houses_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\12.7mm\silenced_houses_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_houses_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_houses_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_houses_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*houses/3";
	};
	class ptv_12x7mm_silenced_tail_meadow_soundshader: ptv_basic_silenced_tail_soundshader
	{
		samples[] = {{"\ptv_sounds\weapons\tails\12.7mm\silenced_meadow_tail_1.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_meadow_tail_2.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_meadow_tail_3.ogg",1},{"\ptv_sounds\weapons\tails\12.7mm\silenced_meadow_tail_4.ogg",1}};
		volume = "1.012*(1-interior)*(meadows/2 max sea/2)/3";
	};
	class ptv_shotgun_trees_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\forest\shotgun\tail_1.ogg",1},{"ptv_sounds\weapons\tails\forest\shotgun\tail_2.ogg",1},{"ptv_sounds\weapons\tails\forest\shotgun\tail_3.ogg",1},{"ptv_sounds\weapons\tails\forest\shotgun\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class ptv_shotgun_forest_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\forest\shotgun\tail_1.ogg",1},{"ptv_sounds\weapons\tails\forest\shotgun\tail_2.ogg",1},{"ptv_sounds\weapons\tails\forest\shotgun\tail_3.ogg",1},{"ptv_sounds\weapons\tails\forest\shotgun\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class ptv_shotgun_meadows_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\meadow\shotgun\tail_1.ogg",1},{"ptv_sounds\weapons\tails\meadow\shotgun\tail_2.ogg",1},{"ptv_sounds\weapons\tails\meadow\shotgun\tail_3.ogg",1},{"ptv_sounds\weapons\tails\meadow\shotgun\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class ptv_shotgun_houses_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\houses\shotgun\tail_1.ogg",1},{"ptv_sounds\weapons\tails\houses\shotgun\tail_2.ogg",1},{"ptv_sounds\weapons\tails\houses\shotgun\tail_3.ogg",1},{"ptv_sounds\weapons\tails\houses\shotgun\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class ptv_ugl_launcher_trees_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_1.ogg",1},{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_2.ogg",1},{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_3.ogg",1},{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class ptv_ugl_launcher_forest_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_1.ogg",1},{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_2.ogg",1},{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_3.ogg",1},{"ptv_sounds\weapons\tails\forest\ugl_launcher\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class ptv_ugl_launcher_meadows_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\meadow\ugl_launcher\tail_1.ogg",1},{"ptv_sounds\weapons\tails\meadow\ugl_launcher\tail_2.ogg",1},{"ptv_sounds\weapons\tails\meadow\ugl_launcher\tail_3.ogg",1},{"ptv_sounds\weapons\tails\meadow\ugl_launcher\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class ptv_ugl_launcher_houses_tail_soundshader: ptv_basic_tail_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\tails\houses\ugl_launcher\tail_1.ogg",1},{"ptv_sounds\weapons\tails\houses\ugl_launcher\tail_2.ogg",1},{"ptv_sounds\weapons\tails\houses\ugl_launcher\tail_3.ogg",1},{"ptv_sounds\weapons\tails\houses\ugl_launcher\tail_4.ogg",1}};
		volume = "1.5*(1-interior)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class ptv_usp45_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\closure.ogg",1}};
		volume = 1.5;
		range = 5;
		rangecurve[] = {{0,1},{15,0}};
	};
	class ptv_usp45_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\close_interior_1.ogg",1},{"ptv_sounds\weapons\usp45\close_interior_2.ogg",1},{"ptv_sounds\weapons\usp45\close_interior_3.ogg",1},{"ptv_sounds\weapons\usp45\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_usp45_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_usp45_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\close_1.ogg",1},{"ptv_sounds\weapons\usp45\close_2.ogg",1},{"ptv_sounds\weapons\usp45\close_3.ogg",1},{"ptv_sounds\weapons\usp45\close_4.ogg",1}};
		volume = "1.5*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_usp45_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_usp45_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_usp45_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_usp45_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\close_silenced_1.ogg",1},{"ptv_sounds\weapons\usp45\close_silenced_2.ogg",1},{"ptv_sounds\weapons\usp45\close_silenced_3.ogg",1},{"ptv_sounds\weapons\usp45\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_usp45_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_usp45_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_usp45_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\usp45\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_l9a2_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_l9a2_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\close_interior_1.ogg",1},{"ptv_sounds\weapons\L9A2\close_interior_2.ogg",1},{"ptv_sounds\weapons\L9A2\close_interior_3.ogg",1},{"ptv_sounds\weapons\L9A2\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_l9a2_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_l9a2_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\close_1.ogg",1},{"ptv_sounds\weapons\L9A2\close_2.ogg",1},{"ptv_sounds\weapons\L9A2\close_3.ogg",1},{"ptv_sounds\weapons\L9A2\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_l9a2_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_l9a2_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_l9a2_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_l9a2_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\close_silenced_1.ogg",1},{"ptv_sounds\weapons\L9A2\close_silenced_2.ogg",1},{"ptv_sounds\weapons\L9A2\close_silenced_3.ogg",1},{"ptv_sounds\weapons\L9A2\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_l9a2_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_l9a2_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_l9a2_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\L9A2\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_p320_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_p320_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\close_interior_1.ogg",1},{"ptv_sounds\weapons\p320\close_interior_2.ogg",1},{"ptv_sounds\weapons\p320\close_interior_3.ogg",1},{"ptv_sounds\weapons\p320\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_p320_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_p320_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\close_1.ogg",1},{"ptv_sounds\weapons\p320\close_2.ogg",1},{"ptv_sounds\weapons\p320\close_3.ogg",1},{"ptv_sounds\weapons\p320\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_p320_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_p320_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_p320_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_p320_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\close_silenced_1.ogg",1},{"ptv_sounds\weapons\p320\close_silenced_2.ogg",1},{"ptv_sounds\weapons\p320\close_silenced_3.ogg",1},{"ptv_sounds\weapons\p320\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_p320_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_p320_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_p320_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\p320\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_glock_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_glock_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\close_interior_1.ogg",1},{"ptv_sounds\weapons\glock\close_interior_2.ogg",1},{"ptv_sounds\weapons\glock\close_interior_3.ogg",1},{"ptv_sounds\weapons\glock\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_glock_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_glock_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\close_1.ogg",1},{"ptv_sounds\weapons\glock\close_2.ogg",1},{"ptv_sounds\weapons\glock\close_3.ogg",1},{"ptv_sounds\weapons\glock\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_glock_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_glock_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_glock_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_glock_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\close_silenced_1.ogg",1},{"ptv_sounds\weapons\glock\close_silenced_2.ogg",1},{"ptv_sounds\weapons\glock\close_silenced_3.ogg",1},{"ptv_sounds\weapons\glock\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_glock_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_glock_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_glock_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\glock\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_benelli_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\benelli\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_benelli_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\benelli\close_interior_1.ogg",1},{"ptv_sounds\weapons\benelli\close_interior_2.ogg",1},{"ptv_sounds\weapons\benelli\close_interior_3.ogg",1},{"ptv_sounds\weapons\benelli\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_benelli_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\benelli\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_benelli_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\benelli\close_1.ogg",1},{"ptv_sounds\weapons\benelli\close_2.ogg",1},{"ptv_sounds\weapons\benelli\close_3.ogg",1},{"ptv_sounds\weapons\benelli\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_benelli_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\benelli\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_benelli_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\benelli\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_benelli_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\benelli\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_cbj_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_cbj_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\close_interior_1.ogg",1},{"ptv_sounds\weapons\cbj\close_interior_2.ogg",1},{"ptv_sounds\weapons\cbj\close_interior_3.ogg",1},{"ptv_sounds\weapons\cbj\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_cbj_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_cbj_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\close_1.ogg",1},{"ptv_sounds\weapons\cbj\close_2.ogg",1},{"ptv_sounds\weapons\cbj\close_3.ogg",1},{"ptv_sounds\weapons\cbj\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_cbj_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_cbj_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_cbj_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_cbj_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\close_silenced_1.ogg",1},{"ptv_sounds\weapons\cbj\close_silenced_2.ogg",1},{"ptv_sounds\weapons\cbj\close_silenced_3.ogg",1},{"ptv_sounds\weapons\cbj\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_cbj_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_cbj_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_cbj_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_cbj45_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_cbj45_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\close_interior_1.ogg",1},{"ptv_sounds\weapons\cbj45\close_interior_2.ogg",1},{"ptv_sounds\weapons\cbj45\close_interior_3.ogg",1},{"ptv_sounds\weapons\cbj45\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_cbj45_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_cbj45_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\close_1.ogg",1},{"ptv_sounds\weapons\cbj45\close_2.ogg",1},{"ptv_sounds\weapons\cbj45\close_3.ogg",1},{"ptv_sounds\weapons\cbj45\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_cbj45_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_cbj45_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_cbj45_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_cbj45_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\close_silenced_1.ogg",1},{"ptv_sounds\weapons\cbj45\close_silenced_2.ogg",1},{"ptv_sounds\weapons\cbj45\close_silenced_3.ogg",1},{"ptv_sounds\weapons\cbj45\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_cbj45_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_cbj45_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_cbj45_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\cbj45\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_mp9_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_mp9_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\close_interior_1.ogg",1},{"ptv_sounds\weapons\mp9\close_interior_2.ogg",1},{"ptv_sounds\weapons\mp9\close_interior_3.ogg",1},{"ptv_sounds\weapons\mp9\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_mp9_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_mp9_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\close_1.ogg",1},{"ptv_sounds\weapons\mp9\close_2.ogg",1},{"ptv_sounds\weapons\mp9\close_3.ogg",1},{"ptv_sounds\weapons\mp9\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_mp9_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_mp9_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_mp9_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_mp9_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\close_silenced_1.ogg",1},{"ptv_sounds\weapons\mp9\close_silenced_2.ogg",1},{"ptv_sounds\weapons\mp9\close_silenced_3.ogg",1},{"ptv_sounds\weapons\mp9\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_mp9_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_mp9_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_mp9_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mp9\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_galil_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\closure.ogg",1}};
		volume = 0.9;
		range = 5;
		rangecurve[] = {{0,1},{1,0.75},{5,0}};
	};
	class ptv_galil_auto_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\closure_1.ogg",1},{"ptv_sounds\weapons\galil\closure_2.ogg",1},{"ptv_sounds\weapons\galil\closure_3.ogg",1},{"ptv_sounds\weapons\galil\closure_4.ogg",1}};
		volume = 0.9;
		range = 5;
		rangecurve[] = {{0,1},{1,0.75},{5,0}};
	};
	class ptv_galil_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_interior_1.ogg",1},{"ptv_sounds\weapons\galil\close_interior_2.ogg",1},{"ptv_sounds\weapons\galil\close_interior_3.ogg",1},{"ptv_sounds\weapons\galil\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_galil_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_galil_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_1.ogg",1},{"ptv_sounds\weapons\galil\close_2.ogg",1},{"ptv_sounds\weapons\galil\close_3.ogg",1},{"ptv_sounds\weapons\galil\close_4.ogg",1}};
		volume = "1.5*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_galil_close_auto_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_1a.ogg",1},{"ptv_sounds\weapons\galil\close_2a.ogg",1},{"ptv_sounds\weapons\galil\close_3a.ogg",1},{"ptv_sounds\weapons\galil\close_4a.ogg",1}};
		volume = "1.5*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_galil_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_galil_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_galil_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_galil_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_silenced_1.ogg",1},{"ptv_sounds\weapons\galil\close_silenced_2.ogg",1},{"ptv_sounds\weapons\galil\close_silenced_3.ogg",1},{"ptv_sounds\weapons\galil\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_galil_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_galil_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_galil_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\galil\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_rs556_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\closure.ogg",1}};
		volume = 2;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_rs556_auto_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\closure_1.ogg",1},{"ptv_sounds\weapons\rs556\closure_2.ogg",1},{"ptv_sounds\weapons\rs556\closure_3.ogg",1},{"ptv_sounds\weapons\rs556\closure_4.ogg",1}};
		volume = 2;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_rs556_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\close_interior_1.ogg",1},{"ptv_sounds\weapons\rs556\close_interior_2.ogg",1},{"ptv_sounds\weapons\rs556\close_interior_3.ogg",1},{"ptv_sounds\weapons\rs556\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_rs556_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_rs556_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\close_1.ogg",1},{"ptv_sounds\weapons\rs556\close_2.ogg",1},{"ptv_sounds\weapons\rs556\close_3.ogg",1},{"ptv_sounds\weapons\rs556\close_4.ogg",1}};
		volume = "1.5*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_rs556_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_rs556_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_rs556_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_rs556_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\close_silenced_1.ogg",1},{"ptv_sounds\weapons\rs556\close_silenced_2.ogg",1},{"ptv_sounds\weapons\rs556\close_silenced_3.ogg",1},{"ptv_sounds\weapons\rs556\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_rs556_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_rs556_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_rs556_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rs556\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_rk_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\closure.ogg",1}};
		volume = 0.9;
		range = 5;
		rangecurve[] = {{0,1},{1,0.75},{5,0}};
	};
	class ptv_rk_auto_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\closure_1.ogg",1},{"ptv_sounds\weapons\rk\closure_2.ogg",1},{"ptv_sounds\weapons\rk\closure_3.ogg",1},{"ptv_sounds\weapons\rk\closure_4.ogg",1}};
		volume = 0.9;
		range = 5;
		rangecurve[] = {{0,1},{1,0.75},{5,0}};
	};
	class ptv_rk_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_interior_1.ogg",1},{"ptv_sounds\weapons\rk\close_interior_2.ogg",1},{"ptv_sounds\weapons\rk\close_interior_3.ogg",1},{"ptv_sounds\weapons\rk\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_rk_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_rk_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_1.ogg",1},{"ptv_sounds\weapons\rk\close_2.ogg",1},{"ptv_sounds\weapons\rk\close_3.ogg",1},{"ptv_sounds\weapons\rk\close_4.ogg",1}};
		volume = "1.5*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_rk_close_auto_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_1a.ogg",1},{"ptv_sounds\weapons\rk\close_2a.ogg",1},{"ptv_sounds\weapons\rk\close_3a.ogg",1},{"ptv_sounds\weapons\rk\close_4a.ogg",1}};
		volume = "1.5*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_rk_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_rk_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_rk_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_rk_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_silenced_1.ogg",1},{"ptv_sounds\weapons\rk\close_silenced_2.ogg",1},{"ptv_sounds\weapons\rk\close_silenced_3.ogg",1},{"ptv_sounds\weapons\rk\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_rk_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_rk_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_rk_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\rk\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_hk433_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\closure.ogg",1}};
		volume = 2;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_hk433_auto_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\closure_1.ogg",1},{"ptv_sounds\weapons\hk433\closure_2.ogg",1},{"ptv_sounds\weapons\hk433\closure_3.ogg",1},{"ptv_sounds\weapons\hk433\closure_4.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_hk433_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\close_interior_1.ogg",1},{"ptv_sounds\weapons\hk433\close_interior_2.ogg",1},{"ptv_sounds\weapons\hk433\close_interior_3.ogg",1},{"ptv_sounds\weapons\hk433\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_hk433_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_hk433_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\close_1.ogg",1},{"ptv_sounds\weapons\hk433\close_2.ogg",1},{"ptv_sounds\weapons\hk433\close_3.ogg",1},{"ptv_sounds\weapons\hk433\close_4.ogg",1}};
		volume = "1.5*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_hk433_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_hk433_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_hk433_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_hk433_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\close_silenced_1.ogg",1},{"ptv_sounds\weapons\hk433\close_silenced_2.ogg",1},{"ptv_sounds\weapons\hk433\close_silenced_3.ogg",1},{"ptv_sounds\weapons\hk433\close_silenced_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_hk433_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\close_silenced_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_hk433_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_hk433_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\hk433\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m60_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\big_mg_with_belt_1.ogg",1},{"ptv_sounds\weapons\m60\big_mg_with_belt_2.ogg",1},{"ptv_sounds\weapons\m60\big_mg_with_belt_3.ogg",1},{"ptv_sounds\weapons\m60\big_mg_with_belt_4.ogg",1},{"ptv_sounds\weapons\m60\big_mg_with_belt_5.ogg",1},{"ptv_sounds\weapons\m60\big_mg_with_belt_6.ogg",1},{"ptv_sounds\weapons\m60\big_mg_with_belt_7.ogg",1},{"ptv_sounds\weapons\m60\big_mg_with_belt_8.ogg",1}};
		volume = 0.75;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_m60_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\close_interior_1.ogg",1},{"ptv_sounds\weapons\m60\close_interior_2.ogg",1},{"ptv_sounds\weapons\m60\close_interior_3.ogg",1},{"ptv_sounds\weapons\m60\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m60_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m60_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\close_1.ogg",1},{"ptv_sounds\weapons\m60\close_2.ogg",1},{"ptv_sounds\weapons\m60\close_3.ogg",1},{"ptv_sounds\weapons\m60\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m60_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_m60_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_m60_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_m60_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\close_silenced_1.ogg",1},{"ptv_sounds\weapons\m60\close_silenced_2.ogg",1},{"ptv_sounds\weapons\m60\close_silenced_3.ogg",1},{"ptv_sounds\weapons\m60\close_silenced_4.ogg",1}};
		volume = 1.25;
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m60_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\close_silenced_distance.ogg",1}};
		volume = 1.25;
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_m60_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m60_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m60\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_negev_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\small_mg_with_belt_1.ogg",1},{"ptv_sounds\weapons\negev\small_mg_with_belt_2.ogg",1},{"ptv_sounds\weapons\negev\small_mg_with_belt_3.ogg",1},{"ptv_sounds\weapons\negev\small_mg_with_belt_4.ogg",1},{"ptv_sounds\weapons\negev\small_mg_with_belt_5.ogg",1},{"ptv_sounds\weapons\negev\small_mg_with_belt_6.ogg",1},{"ptv_sounds\weapons\negev\small_mg_with_belt_7.ogg",1},{"ptv_sounds\weapons\negev\small_mg_with_belt_8.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_negev_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\close_interior_1.ogg",1},{"ptv_sounds\weapons\negev\close_interior_2.ogg",1},{"ptv_sounds\weapons\negev\close_interior_3.ogg",1},{"ptv_sounds\weapons\negev\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_negev_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_negev_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\close_1.ogg",1},{"ptv_sounds\weapons\negev\close_2.ogg",1},{"ptv_sounds\weapons\negev\close_3.ogg",1},{"ptv_sounds\weapons\negev\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_negev_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_negev_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_negev_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_negev_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\close_silenced_1.ogg",1},{"ptv_sounds\weapons\negev\close_silenced_2.ogg",1},{"ptv_sounds\weapons\negev\close_silenced_3.ogg",1},{"ptv_sounds\weapons\negev\close_silenced_4.ogg",1}};
		volume = 1.25;
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_negev_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\close_silenced_distance.ogg",1}};
		volume = 1.25;
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_negev_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_negev_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\negev\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m249_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\small_mg_with_belt_1.ogg",1},{"ptv_sounds\weapons\m249\small_mg_with_belt_2.ogg",1},{"ptv_sounds\weapons\m249\small_mg_with_belt_3.ogg",1},{"ptv_sounds\weapons\m249\small_mg_with_belt_4.ogg",1},{"ptv_sounds\weapons\m249\small_mg_with_belt_5.ogg",1},{"ptv_sounds\weapons\m249\small_mg_with_belt_6.ogg",1},{"ptv_sounds\weapons\m249\small_mg_with_belt_7.ogg",1},{"ptv_sounds\weapons\m249\small_mg_with_belt_8.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_m249_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\close_interior_1.ogg",1},{"ptv_sounds\weapons\m249\close_interior_2.ogg",1},{"ptv_sounds\weapons\m249\close_interior_3.ogg",1},{"ptv_sounds\weapons\m249\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m249_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m249_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\close_1.ogg",1},{"ptv_sounds\weapons\m249\close_2.ogg",1},{"ptv_sounds\weapons\m249\close_3.ogg",1},{"ptv_sounds\weapons\m249\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m249_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_m249_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\medium_distance.ogg",1}};
		volume = 1;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_m249_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\far_distance.ogg",1}};
		volume = 1;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_m249_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\close_silenced_1.ogg",1},{"ptv_sounds\weapons\m249\close_silenced_2.ogg",1},{"ptv_sounds\weapons\m249\close_silenced_3.ogg",1},{"ptv_sounds\weapons\m249\close_silenced_4.ogg",1}};
		volume = 1;
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m249_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\close_silenced_distance.ogg",1}};
		volume = 1;
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_m249_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m249_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m249\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_mg3_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mg3\big_mg_with_belt_1.ogg",1},{"ptv_sounds\weapons\mg3\big_mg_with_belt_2.ogg",1},{"ptv_sounds\weapons\mg3\big_mg_with_belt_3.ogg",1},{"ptv_sounds\weapons\mg3\big_mg_with_belt_4.ogg",1},{"ptv_sounds\weapons\mg3\big_mg_with_belt_5.ogg",1},{"ptv_sounds\weapons\mg3\big_mg_with_belt_6.ogg",1},{"ptv_sounds\weapons\mg3\big_mg_with_belt_7.ogg",1},{"ptv_sounds\weapons\mg3\big_mg_with_belt_8.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_mg3_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mg3\close_interior_1.ogg",1},{"ptv_sounds\weapons\mg3\close_interior_2.ogg",1},{"ptv_sounds\weapons\mg3\close_interior_3.ogg",1},{"ptv_sounds\weapons\mg3\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_mg3_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mg3\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_mg3_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mg3\close_1.ogg",1},{"ptv_sounds\weapons\mg3\close_2.ogg",1},{"ptv_sounds\weapons\mg3\close_3.ogg",1},{"ptv_sounds\weapons\mg3\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_mg3_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mg3\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_mg3_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mg3\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_mg3_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mg3\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_ugl_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ugl\close_interior_1.ogg",1},{"ptv_sounds\weapons\ugl\close_interior_2.ogg",1},{"ptv_sounds\weapons\ugl\close_interior_3.ogg",1},{"ptv_sounds\weapons\ugl\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_ugl_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ugl\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_ugl_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ugl\close_1.ogg",1},{"ptv_sounds\weapons\ugl\close_2.ogg",1},{"ptv_sounds\weapons\ugl\close_3.ogg",1},{"ptv_sounds\weapons\ugl\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_ugl_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ugl\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_ugl_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ugl\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_ugl_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ugl\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_m72_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m72\close_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m72_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m72\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m72_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m72\close.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m72_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m72\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_m72_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m72\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_m72_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m72\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_trg42_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\reloads\trg42_bolt_1.ogg",1},{"ptv_sounds\weapons\reloads\trg42_bolt_2.ogg",1},{"ptv_sounds\weapons\reloads\trg42_bolt_3.ogg",1},{"ptv_sounds\weapons\reloads\trg42_bolt_4.ogg",1}};
		volume = 1;
		range = 15;
		rangecurve[] = {{0,1},{15,0}};
	};
	class ptv_trg42_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\close_interior_1.ogg",1},{"ptv_sounds\weapons\trg42\close_interior_2.ogg",1},{"ptv_sounds\weapons\trg42\close_interior_3.ogg",1},{"ptv_sounds\weapons\trg42\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_trg42_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_trg42_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\close_1.ogg",1},{"ptv_sounds\weapons\trg42\close_2.ogg",1},{"ptv_sounds\weapons\trg42\close_3.ogg",1},{"ptv_sounds\weapons\trg42\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_trg42_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_trg42_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_trg42_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_trg42_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\close_silenced_1.ogg",1},{"ptv_sounds\weapons\trg42\close_silenced_2.ogg",1},{"ptv_sounds\weapons\trg42\close_silenced_3.ogg",1},{"ptv_sounds\weapons\trg42\close_silenced_4.ogg",1}};
		volume = 1.25;
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_trg42_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\close_silenced_distance.ogg",1}};
		volume = 1.25;
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_trg42_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_trg42_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\trg42\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_ax_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\close_interior_1.ogg",1},{"ptv_sounds\weapons\ax\close_interior_2.ogg",1},{"ptv_sounds\weapons\ax\close_interior_3.ogg",1},{"ptv_sounds\weapons\ax\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_ax_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_ax_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\close_1.ogg",1},{"ptv_sounds\weapons\ax\close_2.ogg",1},{"ptv_sounds\weapons\ax\close_3.ogg",1},{"ptv_sounds\weapons\ax\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_ax_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_ax_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_ax_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_ax_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\close_silenced_1.ogg",1},{"ptv_sounds\weapons\ax\close_silenced_2.ogg",1},{"ptv_sounds\weapons\ax\close_silenced_3.ogg",1},{"ptv_sounds\weapons\ax\close_silenced_4.ogg",1}};
		volume = 1.25;
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_ax_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\close_silenced_distance.ogg",1}};
		volume = 1.25;
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_ax_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_ax_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\ax\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m82a1_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m82a1\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_m82a1_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m82a1\close_interior_1.ogg",1},{"ptv_sounds\weapons\m82a1\close_interior_2.ogg",1},{"ptv_sounds\weapons\m82a1\close_interior_3.ogg",1},{"ptv_sounds\weapons\m82a1\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m82a1_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m82a1\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m82a1_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m82a1\close_1.ogg",1},{"ptv_sounds\weapons\m82a1\close_2.ogg",1},{"ptv_sounds\weapons\m82a1\close_3.ogg",1},{"ptv_sounds\weapons\m82a1\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m82a1_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m82a1\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_m82a1_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m82a1\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_m82a1_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m82a1\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_m14_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_m14_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\close_interior_1.ogg",1},{"ptv_sounds\weapons\m14\close_interior_2.ogg",1},{"ptv_sounds\weapons\m14\close_interior_3.ogg",1},{"ptv_sounds\weapons\m14\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m14_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m14_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\close_1.ogg",1},{"ptv_sounds\weapons\m14\close_2.ogg",1},{"ptv_sounds\weapons\m14\close_3.ogg",1},{"ptv_sounds\weapons\m14\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m14_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_m14_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_m14_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_m14_socom_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14_socom\closure.ogg",1}};
		volume = 1.25;
		range = 5;
		rangecurve[] = {{0,1},{5,0}};
	};
	class ptv_m14_socom_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14_socom\close_interior_1.ogg",1},{"ptv_sounds\weapons\m14_socom\close_interior_2.ogg",1},{"ptv_sounds\weapons\m14_socom\close_interior_3.ogg",1},{"ptv_sounds\weapons\m14_socom\close_interior_4.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m14_socom_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14_socom\distance_interior.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_m14_socom_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14_socom\close_1.ogg",1},{"ptv_sounds\weapons\m14_socom\close_2.ogg",1},{"ptv_sounds\weapons\m14_socom\close_3.ogg",1},{"ptv_sounds\weapons\m14_socom\close_4.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m14_socom_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14_socom\close_distance.ogg",1}};
		volume = "1.25*(1-interior)";
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_m14_socom_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14_socom\medium_distance.ogg",1}};
		volume = 1.25;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_m14_socom_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14_socom\far_distance.ogg",1}};
		volume = 1.25;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_m14_silenced_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\close_silenced_1.ogg",1},{"ptv_sounds\weapons\m14\close_silenced_2.ogg",1},{"ptv_sounds\weapons\m14\close_silenced_3.ogg",1},{"ptv_sounds\weapons\m14\close_silenced_4.ogg",1}};
		volume = 1.25;
		range = 25;
		rangecurve[] = {{0,1},{25,0}};
	};
	class ptv_m14_silenced_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\close_silenced_distance.ogg",1}};
		volume = 1.25;
		range = 100;
		rangecurve[] = {{0,0},{25,1},{100,0}};
	};
	class ptv_m14_silenced_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\close_silenced_interior.ogg",1}};
		volume = "1.15*interior";
		range = 5;
	};
	class ptv_m14_silenced_interior_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m14\close_silenced_distance.ogg",1}};
		volume = "1.15*interior";
		range = 100;
		rangecurve[] = {{0,0},{5,1.5},{25,0.8},{100,0}};
	};
	class ptv_lmg_coax_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\lmg_coax\closure_1.ogg",1},{"ptv_sounds\weapons\lmg_coax\closure_2.ogg",1},{"ptv_sounds\weapons\lmg_coax\closure_3.ogg",1},{"ptv_sounds\weapons\lmg_coax\closure_4.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_lmg_coax_closure_external_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\lmg_coax\closure_external_1.ogg",1},{"ptv_sounds\weapons\lmg_coax\closure_external_2.ogg",1},{"ptv_sounds\weapons\lmg_coax\closure_external_3.ogg",1},{"ptv_sounds\weapons\lmg_coax\closure_external_4.ogg",1}};
		volume = 1;
		range = 15;
		rangecurve[] = {{0,0},{2,0},{4,1},{15,0}};
	};
	class ptv_lmg_coax_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\lmg_coax\close_1.ogg",1},{"ptv_sounds\weapons\lmg_coax\close_2.ogg",1},{"ptv_sounds\weapons\lmg_coax\close_3.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_lmg_coax_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\lmg_coax\close_distance.ogg",1}};
		volume = 1;
		range = 300;
		rangecurve[] = {{0,0},{4,1},{300,0}};
	};
	class ptv_lmg_coax_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\lmg_coax\medium_distance.ogg",1}};
		volume = 1;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_lmg_coax_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\lmg_coax\far_distance.ogg",1}};
		volume = 1;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_m2_crows_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m2_crows\closure_1.ogg",1},{"ptv_sounds\weapons\m2_crows\closure_2.ogg",1},{"ptv_sounds\weapons\m2_crows\closure_3.ogg",1},{"ptv_sounds\weapons\m2_crows\closure_4.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_m2_crows_closure_external_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m2_crows\closure_external_1.ogg",1},{"ptv_sounds\weapons\m2_crows\closure_external_2.ogg",1},{"ptv_sounds\weapons\m2_crows\closure_external_3.ogg",1},{"ptv_sounds\weapons\m2_crows\closure_external_4.ogg",1}};
		volume = 1;
		range = 15;
		rangecurve[] = {{0,0},{2,0},{4,1},{15,0}};
	};
	class ptv_m2_crows_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m2_crows\close_vehicle_1.ogg",1},{"ptv_sounds\weapons\m2_crows\close_vehicle_2.ogg",1},{"ptv_sounds\weapons\m2_crows\close_vehicle_3.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_m2_crows_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m2_crows\close_1.ogg",1},{"ptv_sounds\weapons\m2_crows\close_2.ogg",1},{"ptv_sounds\weapons\m2_crows\close_3.ogg",1}};
		volume = 1;
		range = 25;
		rangecurve[] = {{0,0},{4,1},{25,0}};
	};
	class ptv_m2_crows_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m2_crows\close_distance.ogg",1}};
		volume = 1;
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_m2_crows_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m2_crows\medium_distance.ogg",1}};
		volume = 1;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_m2_crows_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\m2_crows\far_distance.ogg",1}};
		volume = 1;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_mk19_crows_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mk19_crows\closure_1.ogg",1},{"ptv_sounds\weapons\mk19_crows\closure_2.ogg",1},{"ptv_sounds\weapons\mk19_crows\closure_3.ogg",1},{"ptv_sounds\weapons\mk19_crows\closure_4.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_mk19_crows_closure_external_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mk19_crows\closure_external_1.ogg",1},{"ptv_sounds\weapons\mk19_crows\closure_external_2.ogg",1},{"ptv_sounds\weapons\mk19_crows\closure_external_3.ogg",1},{"ptv_sounds\weapons\mk19_crows\closure_external_4.ogg",1}};
		volume = 0.4;
		range = 15;
		rangecurve[] = {{0,0},{2,0},{4,1},{15,0}};
	};
	class ptv_mk19_crows_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mk19_crows\close_vehicle_1.ogg",1},{"ptv_sounds\weapons\mk19_crows\close_vehicle_2.ogg",1},{"ptv_sounds\weapons\mk19_crows\close_vehicle_3.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_mk19_crows_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mk19_crows\close_1.ogg",1},{"ptv_sounds\weapons\mk19_crows\close_2.ogg",1},{"ptv_sounds\weapons\mk19_crows\close_3.ogg",1}};
		volume = 1;
		range = 25;
		rangecurve[] = {{0,0},{4,1},{25,0}};
	};
	class ptv_mk19_crows_close_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mk19_crows\close_distance.ogg",1}};
		volume = 1;
		range = 300;
		rangecurve[] = {{0,0},{25,1},{300,0}};
	};
	class ptv_mk19_crows_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mk19_crows\medium_distance.ogg",1}};
		volume = 1;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_mk19_crows_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\mk19_crows\far_distance.ogg",1}};
		volume = 1;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_autocannon_closure_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\autocannon\closure_1.ogg",1},{"ptv_sounds\weapons\autocannon\closure_2.ogg",1},{"ptv_sounds\weapons\autocannon\closure_3.ogg",1},{"ptv_sounds\weapons\autocannon\closure_4.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_autocannon_closure_external_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\autocannon\closure_external_1.ogg",1},{"ptv_sounds\weapons\autocannon\closure_external_2.ogg",1},{"ptv_sounds\weapons\autocannon\closure_external_3.ogg",1},{"ptv_sounds\weapons\autocannon\closure_external_4.ogg",1}};
		volume = 1;
		range = 15;
		rangecurve[] = {{0,0},{2,0},{4,1},{15,0}};
	};
	class ptv_autocannon_interior_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\autocannon\close_1.ogg",1},{"ptv_sounds\weapons\autocannon\close_2.ogg",1},{"ptv_sounds\weapons\autocannon\close_3.ogg",1}};
		volume = 1;
		range = 5;
		rangecurve[] = {{0,1},{2,1},{4,0}};
	};
	class ptv_autocannon_close_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\autocannon\close_distance.ogg",1}};
		volume = 1;
		range = 300;
		rangecurve[] = {{0,0},{4,1},{300,0}};
	};
	class ptv_autocannon_medium_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\autocannon\medium_distance.ogg",1}};
		volume = 1;
		range = 600;
		rangecurve[] = {{0,0},{25,0},{300,1},{600,0}};
	};
	class ptv_autocannon_far_distance_shot_soundshader
	{
		samples[] = {{"ptv_sounds\weapons\autocannon\far_distance.ogg",1}};
		volume = 1;
		range = 2000;
		rangecurve[] = {{0,0},{300,0},{600,1},{2000,0}};
	};
	class ptv_matv_engine_ext_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Engine_Ext_Idle.ogg",1}};
		frequency = "1	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55";
		volume = "0.5*engineon*(((rpm/	4500) factor[(600/	4500),(800/	4500)])	*	((rpm/	4500) factor[(3500/	4500),(1500/	4500)]))";
		range = 300;
		rangecurve[] = {{0,1},{50,0.33},{300,0}};
	};
	class ptv_matv_engine_int_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Engine_int_Idle.ogg",1}};
		frequency = "1	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55";
		volume = "0.5*engineon*(((rpm/	4500) factor[(600/	4500),(800/	4500)])	*	((rpm/	4500) factor[(3500/	4500),(1500/	4500)]))";
		range = 50;
	};
	class ptv_matv_engine_ext_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Engine_ext_drive.ogg",1}};
		frequency = "0.65	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55+ (speed factor [0,90])";
		volume = "0.6*(thrust factor[-1,1])*engineon*((rpm/	4500) factor[(800/	4500),(3500/	4500)])";
		range = 300;
		rangecurve[] = {{0,1},{75,0.33},{400,0}};
	};
	class ptv_matv_engine_ext_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Engine_ext_distance.ogg",1}};
		frequency = "0.65	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55+ (speed factor [0,90])";
		volume = "0.75*engineon*((rpm/	4500) factor[(1000/	4500),(2800/	4500)])";
		range = 300;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_matv_exhaust_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Exhaust_ext_drive.ogg",1}};
		frequency = "0.65	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55+ (speed factor [0,90])";
		volume = "0.3*engineon*thrust*((rpm/	4500) factor[(800/	4500),(3500/	4500)])";
		range = 300;
		rangecurve[] = {{0,1.75},{300,0}};
	};
	class ptv_matv_exhaust_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Exhaust_ext_distance.ogg",1}};
		frequency = "0.65	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55+ (speed factor [0,90])";
		volume = "0.75*engineon*((rpm/	4500) factor[(1000/	4500),(2800/	4500)])";
		range = 2000;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_matv_engine_int_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Engine_int_drive.ogg",1}};
		frequency = "0.65	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55+ (speed factor [0,90])";
		volume = "0.6*(thrust factor[-1,1])*engineon*((rpm/	4500) factor[(800/	4500),(3500/	4500)])";
		range = 50;
	};
	class ptv_matv_engine_rev_int_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_matv\Engine_int_drive.ogg",1}};
		frequency = "0.65	+	((rpm/	4500) factor[(800/	4500),(4500/	4500)])*0.55+ (speed factor [0,90])";
		volume = "0.75*engineon*((rpm/	4500) factor[(4000/	4500),(4500/	4500)])";
		range = 50;
	};
	class ptv_Leo2sg_engine_ext_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Leo2sg\Engine_Ext_Idle.ogg",1}};
		frequency = "1	+	((rpm/	3300) factor[(1400/	3300),(3300/	3300)])*0.55";
		volume = "0.9*engineon*(((rpm/	3300) factor[(1000/	3300),(1300/	3300)])	*	((rpm/	3300) factor[(3300/	3300),(2500/	3300)]))";
		range = 300;
		rangecurve[] = {{0,1},{75,0.5},{300,0}};
	};
	class ptv_Leo2sg_engine_int_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Leo2sg\Engine_int_Idle.ogg",1}};
		frequency = "1	+	((rpm/	3300) factor[(1400/	3300),(3300/	3300)])*0.55";
		volume = "0.5*engineon*(((rpm/	3300) factor[(1000/	3300),(1300/	3300)])	*	((rpm/	3300) factor[(3300/	3300),(2500/	3300)]))";
		range = 50;
	};
	class ptv_Leo2sg_engine_ext_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Leo2sg\Engine_ext_drive.ogg",1}};
		frequency = "0.95	+	((rpm/	3300) factor[(1400/	3300),(3300/	3300)])*0.15+ (speed factor [0,50])";
		volume = "1*(thrust factor[-1,1])*engineon*((rpm/	3300) factor[(1400/	3300),(1750/	3300)])";
		range = 600;
		rangecurve[] = {{0,1},{200,0.4},{600,0}};
	};
	class ptv_Leo2sg_engine_ext_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Leo2sg\Engine_ext_distance.ogg",1}};
		frequency = "0.95	+	((rpm/	3000) factor[(1000/	3000),(3000/	3000)])*0.15+ (speed factor [0,50])";
		volume = "0.75*engineon*((rpm/	3000) factor[(1000/	3000),(1800/	3000)])";
		range = 2000;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_Leo2sg_exhaust_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Leo2sg\Exhaust_ext_drive.ogg",1}};
		frequency = "0.95	+	((rpm/	3300) factor[(1400/	3300),(3300/	3300)])*0.35+ (speed factor [0,50])";
		volume = "0.6*engineon*thrust*((rpm/	3300) factor[(1400/	3300),(1750/	3300)])";
		range = 600;
		rangecurve[] = {{0,1.75},{300,0}};
	};
	class ptv_Leo2sg_exhaust_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Leo2sg\Exhaust_ext_distance.ogg",1}};
		frequency = "0.95	+	((rpm/	3000) factor[(1000/	3000),(3000/	3000)])*0.35+ (speed factor [0,50])";
		volume = "0.75*engineon*((rpm/	3000) factor[(1000/	3000),(1800/	3000)])";
		range = 2000;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_Leo2sg_engine_int_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Leo2sg\Engine_int_drive.ogg",1}};
		frequency = "0.95	+	((rpm/	3300) factor[(1400/	3300),(3300/	3300)])*0.15+ (speed factor [0,50])";
		volume = "0.6*(thrust factor[-1,1])*engineon*((rpm/	3300) factor[(1400/	3300),(1750/	3300)])";
		range = 50;
	};
	class ptv_Pnd_engine_ext_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Pnd\Engine_Ext_Idle.ogg",1}};
		frequency = "1	+	((rpm/	2100) factor[(425/	2100),(2100/	2100)])*0.55";
		volume = "0.5*engineon*(((rpm/	2100) factor[(300/	2100),(400/	2100)])	*	((rpm/	2100) factor[(2100/	2100),(2025/	2100)]))";
		range = 300;
		rangecurve[] = {{0,1},{75,0.5},{300,0}};
	};
	class ptv_Pnd_engine_int_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Pnd\Engine_int_Idle.ogg",1}};
		frequency = "1	+	((rpm/	2100) factor[(425/	2100),(2100/	2100)])*0.55";
		volume = "0.5*engineon*(((rpm/	2100) factor[(300/	2100),(400/	2100)])	*	((rpm/	2100) factor[(2100/	2100),(2025/	2100)]))";
		range = 50;
	};
	class ptv_Pnd_engine_ext_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Pnd\Engine_ext_drive.ogg",1}};
		frequency = "0.65	+	((rpm/	2100) factor[(425/	2100),(2100/	2100)])*0.35+ (speed factor [0,90])";
		volume = "0.6*(thrust factor[-1,1])*engineon*((rpm/	2100) factor[(425/	2100),(2100/	2100)])";
		range = 600;
		rangecurve[] = {{0,1},{200,0.4},{600,0}};
	};
	class ptv_Pnd_engine_ext_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Pnd\Engine_ext_distance.ogg",1}};
		frequency = "0.65	+	((rpm/	2100) factor[(425/	2100),(2100/	2100)])*0.35+ (speed factor [0,90])";
		volume = "0.75*engineon*((rpm/	2100) factor[(1000/	2100),(1800/	2100)])";
		range = 2000;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_Pnd_exhaust_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Pnd\Exhaust_ext_drive.ogg",1}};
		frequency = "0.65	+	((rpm/	2100) factor[(425/	2100),(2100/	2100)])*0.35+ (speed factor [0,90])";
		volume = "0.3*engineon*thrust*((rpm/	2100) factor[(425/	2100),(2100/	2100)])";
		range = 600;
		rangecurve[] = {{0,1.75},{300,0}};
	};
	class ptv_Pnd_exhaust_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Pnd\Exhaust_ext_distance.ogg",1}};
		frequency = "0.65	+	((rpm/	2100) factor[(425/	2100),(2100/	2100)])*0.35+ (speed factor [0,90])";
		volume = "0.75*engineon*((rpm/	2100) factor[(1000/	2100),(1800/	2100)])";
		range = 2000;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_Pnd_engine_int_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Pnd\Engine_int_drive.ogg",1}};
		frequency = "0.65	+	((rpm/	2100) factor[(425/	2100),(2100/	2100)])*0.35+ (speed factor [0,90])";
		volume = "0.6*(thrust factor[-1,1])*engineon*((rpm/	2100) factor[(425/	2100),(2100/	2100)])";
		range = 50;
	};
	class ptv_Warrior_engine_ext_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Warrior\Engine_Ext_Idle.ogg",1}};
		frequency = "1	+	((rpm/	2600) factor[(610/	2600),(2600/	2600)])*0.55";
		volume = "0.5*engineon*(((rpm/	2600) factor[(500/	2600),(600/	2600)])	*	((rpm/	2600) factor[(2600/	2600),(2100/	2600)]))";
		range = 300;
		rangecurve[] = {{0,1},{75,0.5},{300,0}};
	};
	class ptv_Warrior_engine_int_idle_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Warrior\Engine_int_Idle.ogg",1}};
		frequency = "1	+	((rpm/	2600) factor[(610/	2600),(2600/	2600)])*0.55";
		volume = "0.5*engineon*(((rpm/	2600) factor[(500/	2600),(600/	2600)])	*	((rpm/	2600) factor[(2600/	2600),(2100/	2600)]))";
		range = 50;
	};
	class ptv_Warrior_engine_ext_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Warrior\Engine_ext_drive.ogg",1}};
		frequency = "0.95	+	((rpm/	2600) factor[(610/	2600),(2600/	2600)])*0.35+ (speed factor [0,50])";
		volume = "0.6*(thrust factor[-1,1])*engineon*((rpm/	2600) factor[(610/	2600),(750/	2600)])";
		range = 600;
		rangecurve[] = {{0,1},{200,0.4},{600,0}};
	};
	class ptv_Warrior_engine_ext_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Warrior\Engine_ext_distance.ogg",1}};
		frequency = "0.95	+	((rpm/	3000) factor[(1000/	3000),(3000/	3000)])*0.35+ (speed factor [0,50])";
		volume = "0.75*engineon*((rpm/	3000) factor[(1000/	3000),(1800/	3000)])";
		range = 2000;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_Warrior_exhaust_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Warrior\Exhaust_ext_drive.ogg",1}};
		frequency = "0.95	+	((rpm/	2600) factor[(610/	2600),(2600/	2600)])*0.35+ (speed factor [0,50])";
		volume = "0.6*engineon*thrust*((rpm/	2600) factor[(610/	2600),(750/	2600)])";
		range = 600;
		rangecurve[] = {{0,1.75},{300,0}};
	};
	class ptv_Warrior_exhaust_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Warrior\Exhaust_ext_distance.ogg",1}};
		frequency = "0.95	+	((rpm/	3000) factor[(1000/	3000),(3000/	3000)])*0.35+ (speed factor [0,50])";
		volume = "0.75*engineon*((rpm/	3000) factor[(1000/	3000),(1800/	3000)])";
		range = 2000;
		rangecurve[] = {{0,0},{75,0.75},{400,1},{600,1},{1600,0}};
	};
	class ptv_Warrior_engine_int_drive_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\ptv_Warrior\Engine_int_drive.ogg",1}};
		frequency = "0.95	+	((rpm/	2600) factor[(610/	2600),(2600/	2600)])*0.35+ (speed factor [0,50])";
		volume = "0.6*(thrust factor[-1,1])*engineon*((rpm/	2600) factor[(610/	2600),(750/	2600)])";
		range = 50;
	};
	class ptv_treads_old_light_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_old_light.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 300;
		rangecurve[] = {{0,1},{150,0.75},{300,0}};
	};
	class ptv_treads_old_light_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_old_light_distance.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 1000;
		rangecurve[] = {{70,0},{300,1},{1000,0}};
	};
	class ptv_treads_modern_light_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_modern_light.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 300;
		rangecurve[] = {{0,1},{150,0.75},{300,0}};
	};
	class ptv_treads_modern_light_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_modern_light_distance.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 1000;
		rangecurve[] = {{70,0},{300,1},{1000,0}};
	};
	class ptv_treads_old_heavy_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_old_heavy.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 300;
		rangecurve[] = {{0,1},{150,0.75},{300,0}};
	};
	class ptv_treads_old_heavy_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_old_heavy_distance.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 1000;
		rangecurve[] = {{70,0},{300,1},{1000,0}};
	};
	class ptv_treads_modern_heavy_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_modern_heavy.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 300;
		rangecurve[] = {{0,1},{150,0.75},{300,0}};
	};
	class ptv_treads_modern_heavy_distance_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_modern_heavy_distance.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 1000;
		rangecurve[] = {{70,0},{300,1},{1000,0}};
	};
	class ptv_treads_interior_old_light_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_interior_old_light.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 50;
	};
	class ptv_treads_interior_modern_light_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_interior_modern_light.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 50;
	};
	class ptv_treads_interior_old_heavy_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_interior_old_heavy.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 50;
	};
	class ptv_treads_interior_modern_heavy_soundshader
	{
		samples[] = {{"\ptv_sounds\vehicles\shared\treads_interior_modern_heavy.ogg",1}};
		frequency = "0.45+ (speed factor [0,30])*0.5";
		volume = "2* (speed factor [0,20]) + (0.3*(angVelocity factor[0.3,0.4]))";
		range = 50;
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class cfgweapons
{
	class rifle;
	class ugl_f;
	class rifle_base_f: rifle{};
	class ptv_cbj_ms: rifle_base_f
	{
		drysound[] = {"ptv_sounds\weapons\dry\cbj_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\cbj_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\cbj_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_cbj_ms2: ptv_cbj_ms
	{
		drysound[] = {"ptv_sounds\weapons\dry\cbj_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\cbj_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\cbj_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj45_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj45_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj45_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_cbj45_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_mp9: rifle_base_f
	{
		reloadtime = 0.06;
		drysound[] = {"ptv_sounds\weapons\dry\cbj_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\cbj_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\cbj_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_mp9_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_mp9_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			reloadtime = 0.06;
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_mp9_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_mp9_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_ag: rifle_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\galil_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\galil_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class eglm: ugl_f
		{
			reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\ugl_reload.ogg",1,1,25};
			changefiremodesound[] = {"ptv_sounds\weapons\noises\stinge_firemode.ogg",1.25,1,25};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_ugl_shot_soundset"};
			};
			class single: mode_semiauto
			{
				sounds[] = {"standardsound"};
				class basesoundmodetype
				{
					closure1[] = {"a3\sounds_f\arsenal\weapons\ugl\closure_ugl",1,1,10};
					soundclosure[] = {"closure1",1};
				};
				class standardsound: basesoundmodetype
				{
					soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_ugl_shot_soundset"};
				};
			};
		};
	};
	class ptv_ag_k: ptv_ag
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\galil_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\galil_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_agm: ptv_ag_k
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\galil_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\galil_m_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_ag_c: ptv_ag
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\galil_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\galil_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_agm_gl: ptv_agm
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\galil_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\galil_m_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_galil_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_rs556: rifle_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\trg42_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\rs556_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class m203: ugl_f
		{
			reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\ugl_reload.ogg",1,1,25};
			changefiremodesound[] = {"ptv_sounds\weapons\noises\stinge_firemode.ogg",1.25,1,25};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_ugl_shot_soundset"};
			};
			class single: mode_semiauto
			{
				sounds[] = {"standardsound"};
				class basesoundmodetype
				{
					closure1[] = {"a3\sounds_f\arsenal\weapons\ugl\closure_ugl",1,1,10};
					soundclosure[] = {"closure1",1};
				};
				class standardsound: basesoundmodetype
				{
					soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_ugl_shot_soundset"};
				};
			};
		};
	};
	class ptv_rs556s: ptv_rs556
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\trg42_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\rs556_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rs556_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_hk433: rifle_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\trg42_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\hk433_Reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class m203: ugl_f
		{
			reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\ugl_reload.ogg",1,1,25};
			changefiremodesound[] = {"ptv_sounds\weapons\noises\stinge_firemode.ogg",1.25,1,25};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_ugl_shot_soundset"};
			};
			class single: mode_semiauto
			{
				sounds[] = {"standardsound"};
				class basesoundmodetype
				{
					closure1[] = {"a3\sounds_f\arsenal\weapons\ugl\closure_ugl",1,1,10};
					soundclosure[] = {"closure1",1};
				};
				class standardsound: basesoundmodetype
				{
					soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_ugl_shot_soundset"};
				};
			};
		};
	};
	class ptv_hk433s: ptv_rs556
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\trg42_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\hk433_Reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\galil_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_auto_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_hk433_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_rk62m2: rifle_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\galil_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\galil_reload3.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\rk_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rk_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rk_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rk_auto_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_rk_auto_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class rifle_long_base_f: rifle_base_f{};
	class ptv_m249: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_m249_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_m249_shot_silenced_soundset","ptv_5x56mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_negev: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\negev_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_silenced_soundset","ptv_5x56mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_silenced_soundset","ptv_5x56mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_ng5: ptv_negev
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\negev_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_silenced_soundset","ptv_5x56mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_soundset","ptv_5x56mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_negev_shot_silenced_soundset","ptv_5x56mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_m60e4: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\negev_firemode.ogg",1.25,1,25};
		class manual: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_m60_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_m60_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_m60e4s: ptv_m60e4
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\negev_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_m60_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_m60_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_m60_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_m60_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_mg3_base;
	class ptv_mg3: ptv_mg3_base
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_mg3_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
		};
	};
	class ptv_mg3r: ptv_mg3_base
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_mg3_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
		};
	};
	class ptv_mg3kws: ptv_mg3_base
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_mg3_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
		};
	};
	class ptv_m14: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\m14_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\m14_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_m14_socom: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\m14_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\m14_reload.ogg",2,1,35};
		changefiremodesound[] = {"ptv_sounds\weapons\noises\m14_firemode.ogg",1.25,1,25};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_socom_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_socom_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_rifle_shake_soundset","ptv_m14_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_ax_base: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\trg42_dry.ogg",1.5,1,15};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_ax_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_ax_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_trg42: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\trg42_dry.ogg",1.5,1,15};
		reloadsound[] = {"ptv_sounds\weapons\reloads\trg42_bolt",2,1,35};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\trg42_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_trg42_shot_soundset","ptv_7x62mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_trg42_shot_silenced_soundset","ptv_7x62mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_m82a1: rifle_long_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\big\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\big\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\big\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\big\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\big\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\big\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\big\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\big\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\big\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\big\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\big\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\big\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\m82a1_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\m82a1_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_m82a1_shot_soundset","ptv_12x7mm_tails_soundset"};
			};
		};
	};
	class ptv_bm4: rifle_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\big\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\big\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\big\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\big\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\big\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\big\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\big\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\big\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\big\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\big\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\big\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\big\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\benelli_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\benelli_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_sniper_shake_soundset","ptv_benelli_shot_soundset","ptv_shotgun_tails_soundset"};
			};
		};
	};
	class pistol;
	class pistol_base_f: pistol{};
	class ptv_p80: pistol_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\small\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\small\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\small\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\small\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\small\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\small\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\small\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\small\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\small\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\small\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\small\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\small\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\glock_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\p80_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_glock_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_glock_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_g19: pistol_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\small\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\small\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\small\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\small\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\small\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\small\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\small\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\small\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\small\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\small\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\small\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\small\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\glock_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\glock_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_glock_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_glock_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_p320: pistol_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\small\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\small\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\small\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\small\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\small\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\small\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\small\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\small\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\small\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\small\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\small\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\small\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\usp_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\usp_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_p320_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_p320_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
	};
	class ptv_usp45t: pistol_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\small\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\small\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\small\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\small\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\small\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\small\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\small\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\small\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\small\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\small\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\small\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\small\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\usp_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\usp_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_usp45_shot_soundset","ptv_cal45_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_usp45_shot_silenced_soundset","ptv_cal45_silenced_tails_soundset"};
			};
		};
	};
	class ptv_l9a2: pistol_base_f
	{
		bullet1[] = {"ptv_sounds\weapons\shells\small\metal_1.ogg",2.0099,1,10};
		bullet2[] = {"ptv_sounds\weapons\shells\small\metal_2.ogg",2.0099,1,10};
		bullet3[] = {"ptv_sounds\weapons\shells\small\metal_3.ogg",2.0099,1,10};
		bullet4[] = {"ptv_sounds\weapons\shells\small\metal_4.ogg",2.0099,1,10};
		bullet5[] = {"ptv_sounds\weapons\shells\small\dirt_1.ogg",2.0099,1,10};
		bullet6[] = {"ptv_sounds\weapons\shells\small\dirt_2.ogg",2.0099,1,10};
		bullet7[] = {"ptv_sounds\weapons\shells\small\dirt_3.ogg",2.0099,1,10};
		bullet8[] = {"ptv_sounds\weapons\shells\small\dirt_4.ogg",2.0099,1,10};
		bullet9[] = {"ptv_sounds\weapons\shells\small\grass_1.ogg",2.0099,1,10};
		bullet10[] = {"ptv_sounds\weapons\shells\small\grass_2.ogg",2.0099,1,10};
		bullet11[] = {"ptv_sounds\weapons\shells\small\grass_3.ogg",2.0099,1,10};
		bullet12[] = {"ptv_sounds\weapons\shells\small\grass_4.ogg",2.0099,1,10};
		soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"ptv_sounds\weapons\dry\usp_dry.ogg",1.5,1,15};
		reloadmagazinesound[] = {"ptv_sounds\weapons\reloads\glock_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_l9a2_shot_soundset","ptv_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_pistol_shake_soundset","ptv_l9a2_shot_silenced_soundset","ptv_9mm_silenced_tails_soundset"};
			};
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher{};
	class ptv_m72a7: Launcher_Base_F
	{
		drysound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
		reloadmagazinesound[] = {"\ptv_weapons\sound\at4prep.ogg",0.562341,1,50};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"ptv_m72_shot_soundset"};
			};
		};
	};
};
class cfgmods
{
	author = "PTV";
	timepacked = "1741872627";
};
