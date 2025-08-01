class CfgPatches
{
	class CUP_Weapons_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_SoundShaders"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class CfgDistanceFilters
{
	class CUP_defaultDistanceFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=400;
		range=2600;
		powerFactor=32;
	};
	class CUP_rifleTailDistanceFilter
	{
		type="lowPassFilter";
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=350;
		range=1800;
		powerFactor=32;
	};
};
class CfgSound3DProcessors
{
	class CUP_Sniper_crackling_3DProcessingType
	{
		type="panner";
		innerRange=60;
		range=370;
		rangeCurve[]=
		{
			{0,1},
			{370,0}
		};
	};
	class CUP_Cannon_3DProcessingType
	{
		type="panner";
		innerRange=100;
		range=100;
		rangeCurve="InverseSquare2Curve";
	};
};
class CfgSoundCurves
{
	class CUP_soundCurve
	{
		points[]=
		{
			{0,1},
			{1,0}
		};
	};
	class CUP_rifleSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.92000002},
			{0.0049999999,0.88999999},
			{0.1,0.84750003},
			{0.2,0.8096},
			{0.40000001,0.75330001},
			{0.60000002,0.63150001},
			{0.80000001,0.49680001},
			{0.89999998,0.39680001},
			{1,0}
		};
	};
	class CUP_silencedSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.85000002},
			{0.0049999999,0.69},
			{0.1,0.54750001},
			{0.2,0.4596},
			{0.40000001,0.30329999},
			{0.60000002,0.25150001},
			{0.80000001,0.1268},
			{0.89999998,0.046799999},
			{1,0}
		};
	};
	class CUP_cannonSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.97000003},
			{0.0049999999,0.95999998},
			{0.1,0.94749999},
			{0.2,0.87959999},
			{0.40000001,0.68330002},
			{0.60000002,0.62150002},
			{0.80000001,0.49680001},
			{0.89999998,0.33680001},
			{1,0}
		};
	};
	class CUP_miniCannonSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.97000003},
			{0.0049999999,0.92000002},
			{0.1,0.8775},
			{0.2,0.79960001},
			{0.40000001,0.61330003},
			{0.60000002,0.52149999},
			{0.80000001,0.3768},
			{0.89999998,0.2368},
			{1,0}
		};
	};
};
class CfgSounds
{
	class CUP_BoltActionSound
	{
		name="";
		sound[]=
		{
			"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\bolt",
			1,
			1
		};
		titles[]={};
	};
};
class CfgSoundSets
{
	class CUP_Base_SoundSet_Closure
	{
		distanceFilter="CUP_defaultDistanceFilter";
		doppler=0;
		frequencyRandomizer=0.050000001;
		loop=0;
		obstructionFactor=0.30000001;
		occlusionFactor=0.5;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		spatial=1;
		volumeCurve="CUP_rifleSoundCurve";
		volumeFactor=0.94999999;
	};
	class CUP_Base_SoundSet_Shot: CUP_Base_SoundSet_Closure
	{
		volumeFactor=1.35;
	};
	class CUP_Base_SoundSet_SD: CUP_Base_SoundSet_Closure
	{
		volumeCurve="CUP_silencedSoundCurve";
		volumeFactor=0.89999998;
	};
	class CUP_Base_Cannon_SoundSet_Closure: CUP_Base_SoundSet_Closure
	{
		volumeFactor=1.1;
		volumeCurve="CUP_cannonSoundCurve";
		sound3DProcessingType="WeaponHeavyShot3DProcessingType";
		frequencyRandomizer=0.050000001;
	};
	class CUP_Base_Cannon_SoundSet_Shot: CUP_Base_Cannon_SoundSet_Closure
	{
		volumeFactor=1.35;
	};
	class CUP_Base_MiniCannon_SoundSet_Shot: CUP_Base_Cannon_SoundSet_Shot
	{
		volumeFactor=1.25;
		volumeCurve="CUP_miniCannonSoundCurve";
	};
	class CUP_Base_SoundSet_Tail: CUP_Base_SoundSet_Closure
	{
		distanceFilter="CUP_rifleTailDistanceFilter";
		frequencyRandomizer=0.1;
		obstructionFactor=0;
		occlusionFactor=0.30000001;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		soundShadersLimit=2;
		volumeFactor=1;
	};
	class CUP_Base_SoundSet_Tail_SD: CUP_Base_SoundSet_Tail
	{
		volumeCurve="CUP_silencedSoundCurve";
	};
	class CUP_Base_SoundSet_Tail_Cannon: CUP_Base_SoundSet_Closure
	{
		volumeCurve="CUP_cannonSoundCurve";
	};
	class CUP_M4_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M4_Closure_SoundShader"
		};
	};
	class CUP_M4_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M4_0m_SoundShader",
			"CUP_M4_50m_SoundShader",
			"CUP_M4_150m_SoundShader",
			"CUP_M4_550m_SoundShader",
			"CUP_M4_1000m_SoundShader",
			"CUP_M4_1800m_SoundShader"
		};
	};
	class CUP_M4_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_M4_SD_0m_SoundShader",
			"CUP_M4_SD_30m_SoundShader",
			"CUP_M4_SD_150m_SoundShader",
			"CUP_M4_SD_350m_SoundShader"
		};
	};
	class CUP_Bizon_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_Bizon_Closure_SoundShader"
		};
	};
	class CUP_Bizon_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_Bizon_0m_SoundShader",
			"CUP_Bizon_50m_SoundShader",
			"CUP_Bizon_150m_SoundShader",
			"CUP_Bizon_550m_SoundShader",
			"CUP_Bizon_1000m_SoundShader",
			"CUP_Bizon_1800m_SoundShader"
		};
	};
	class CUP_Bizon_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_Bizon_SD_0m_SoundShader",
			"CUP_Bizon_SD_30m_SoundShader",
			"CUP_Bizon_SD_150m_SoundShader",
			"CUP_Bizon_SD_350m_SoundShader"
		};
	};
	class CUP_M16_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M16_Closure_SoundShader"
		};
	};
	class CUP_M16_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M16_0m_SoundShader",
			"CUP_M16_50m_SoundShader",
			"CUP_M16_150m_SoundShader",
			"CUP_M16_550m_SoundShader",
			"CUP_M16_1000m_SoundShader",
			"CUP_M16_1800m_SoundShader"
		};
	};
	class CUP_M16_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_M16_SD_0m_SoundShader",
			"CUP_M16_SD_30m_SoundShader",
			"CUP_M16_SD_150m_SoundShader",
			"CUP_M16_SD_350m_SoundShader"
		};
	};
	class CUP_M240_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M240_Closure_SoundShader"
		};
	};
	class CUP_M240_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M240_0m_SoundShader",
			"CUP_M240_50m_SoundShader",
			"CUP_M240_150m_SoundShader",
			"CUP_M240_550m_SoundShader",
			"CUP_M240_1000m_SoundShader",
			"CUP_M240_1800m_SoundShader"
		};
	};
	class CUP_MP7_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_MP7_Closure_SoundShader"
		};
	};
	class CUP_MP7_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_MP7_0m_SoundShader",
			"CUP_MP7_50m_SoundShader",
			"CUP_MP7_150m_SoundShader",
			"CUP_MP7_550m_SoundShader",
			"CUP_MP7_1000m_SoundShader",
			"CUP_MP7_1800m_SoundShader"
		};
	};
	class CUP_MP7_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_MP7_SD_0m_SoundShader",
			"CUP_MP7_SD_30m_SoundShader",
			"CUP_MP7_SD_150m_SoundShader",
			"CUP_MP7_SD_350m_SoundShader"
		};
	};
	class CUP_M249_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M249_Closure_SoundShader"
		};
	};
	class CUP_M249_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M249_0m_SoundShader",
			"CUP_M249_50m_SoundShader",
			"CUP_M249_150m_SoundShader",
			"CUP_M249_550m_SoundShader",
			"CUP_M249_1000m_SoundShader",
			"CUP_M249_1800m_SoundShader"
		};
	};
	class CUP_M249_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_M249_SD_0m_SoundShader",
			"CUP_M249_SD_30m_SoundShader",
			"CUP_M249_SD_150m_SoundShader",
			"CUP_M249_SD_350m_SoundShader"
		};
	};
	class CUP_M14_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M14_Closure_SoundShader"
		};
	};
	class CUP_M14_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M14_0m_SoundShader",
			"CUP_M14_50m_SoundShader",
			"CUP_M14_150m_SoundShader",
			"CUP_M14_550m_SoundShader",
			"CUP_M14_1000m_SoundShader",
			"CUP_M14_1800m_SoundShader"
		};
	};
	class CUP_M14_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_M14_SD_0m_SoundShader",
			"CUP_M14_SD_30m_SoundShader",
			"CUP_M14_SD_150m_SoundShader",
			"CUP_M14_SD_350m_SoundShader"
		};
	};
	class CUP_M134_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M134_Closure_SoundShader"
		};
	};
	class CUP_M134_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M134_0m_SoundShader",
			"CUP_M134_50m_SoundShader",
			"CUP_M134_150m_SoundShader",
			"CUP_M134_550m_SoundShader",
			"CUP_M134_1000m_SoundShader",
			"CUP_M134_1800m_SoundShader"
		};
	};
	class CUP_MK19_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_MK19_Closure_SoundShader"
		};
	};
	class CUP_MK19_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_MK19_0m_SoundShader",
			"CUP_MK19_50m_SoundShader",
			"CUP_MK19_150m_SoundShader",
			"CUP_MK19_550m_SoundShader",
			"CUP_MK19_1000m_SoundShader",
			"CUP_MK19_1800m_SoundShader"
		};
	};
	class CUP_SA61_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_SA61_Closure_SoundShader"
		};
	};
	class CUP_SA61_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_SA61_0m_SoundShader",
			"CUP_SA61_50m_SoundShader",
			"CUP_SA61_150m_SoundShader",
			"CUP_SA61_550m_SoundShader",
			"CUP_SA61_1000m_SoundShader",
			"CUP_SA61_1800m_SoundShader"
		};
	};
	class CUP_SA61_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_SA61_SD_0m_SoundShader",
			"CUP_SA61_SD_30m_SoundShader",
			"CUP_SA61_SD_150m_SoundShader",
			"CUP_SA61_SD_350m_SoundShader"
		};
	};
	class CUP_RPG7_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_RPG7_Closure_SoundShader"
		};
	};
	class CUP_RPG7_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_RPG7_0m_SoundShader",
			"CUP_RPG7_50m_SoundShader",
			"CUP_RPG7_150m_SoundShader",
			"CUP_RPG7_550m_SoundShader",
			"CUP_RPG7_1000m_SoundShader",
			"CUP_RPG7_1800m_SoundShader"
		};
	};
	class CUP_M590_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M590_Closure_SoundShader"
		};
	};
	class CUP_M590_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M590_0m_SoundShader",
			"CUP_M590_50m_SoundShader",
			"CUP_M590_150m_SoundShader",
			"CUP_M590_550m_SoundShader",
			"CUP_M590_1000m_SoundShader",
			"CUP_M590_1800m_SoundShader"
		};
	};
	class CUP_M2010_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M2010_Closure_SoundShader"
		};
	};
	class CUP_M2010_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M2010_0m_SoundShader",
			"CUP_M2010_50m_SoundShader",
			"CUP_M2010_150m_SoundShader",
			"CUP_M2010_550m_SoundShader",
			"CUP_M2010_1000m_SoundShader",
			"CUP_M2010_1800m_SoundShader"
		};
	};
	class CUP_M2010_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_M2010_SD_0m_SoundShader",
			"CUP_M2010_SD_30m_SoundShader",
			"CUP_M2010_SD_150m_SoundShader",
			"CUP_M2010_SD_350m_SoundShader"
		};
	};
	class CUP_M107_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M107_Closure_SoundShader"
		};
	};
	class CUP_M107_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M107_0m_SoundShader",
			"CUP_M107_50m_SoundShader",
			"CUP_M107_150m_SoundShader",
			"CUP_M107_550m_SoundShader",
			"CUP_M107_1000m_SoundShader",
			"CUP_M107_1800m_SoundShader"
		};
	};
	class CUP_M107_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_M107_SD_0m_SoundShader",
			"CUP_M107_SD_30m_SoundShader",
			"CUP_M107_SD_150m_SoundShader",
			"CUP_M107_SD_350m_SoundShader"
		};
	};
	class CUP_M2_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M2_Closure_SoundShader"
		};
	};
	class CUP_M2_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M2_0m_SoundShader",
			"CUP_M2_50m_SoundShader",
			"CUP_M2_150m_SoundShader",
			"CUP_M2_550m_SoundShader",
			"CUP_M2_1000m_SoundShader",
			"CUP_M2_1800m_SoundShader"
		};
	};
	class CUP_AK74_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_AK74_Closure_SoundShader"
		};
	};
	class CUP_AK74_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_AK74_0m_SoundShader",
			"CUP_AK74_50m_SoundShader",
			"CUP_AK74_150m_SoundShader",
			"CUP_AK74_550m_SoundShader",
			"CUP_AK74_1000m_SoundShader",
			"CUP_AK74_1800m_SoundShader"
		};
	};
	class CUP_AK74_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_AK74_SD_0m_SoundShader",
			"CUP_AK74_SD_30m_SoundShader",
			"CUP_AK74_SD_150m_SoundShader",
			"CUP_AK74_SD_350m_SoundShader"
		};
	};
	class CUP_AKM_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_AKM_Closure_SoundShader"
		};
	};
	class CUP_AKM_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_AKM_0m_SoundShader",
			"CUP_AKM_50m_SoundShader",
			"CUP_AKM_150m_SoundShader",
			"CUP_AKM_550m_SoundShader",
			"CUP_AKM_1000m_SoundShader",
			"CUP_AKM_1800m_SoundShader"
		};
	};
	class CUP_AKM_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_AKM_SD_0m_SoundShader",
			"CUP_AKM_SD_30m_SoundShader",
			"CUP_AKM_SD_150m_SoundShader",
			"CUP_AKM_SD_350m_SoundShader"
		};
	};
	class CUP_PKP_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_PKP_Closure_SoundShader"
		};
	};
	class CUP_PKP_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_PKP_0m_SoundShader",
			"CUP_PKP_50m_SoundShader",
			"CUP_PKP_150m_SoundShader",
			"CUP_PKP_550m_SoundShader",
			"CUP_PKP_1000m_SoundShader",
			"CUP_PKP_1800m_SoundShader"
		};
	};
	class CUP_SVD_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_SVD_Closure_SoundShader"
		};
	};
	class CUP_SVD_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_SVD_0m_SoundShader",
			"CUP_SVD_50m_SoundShader",
			"CUP_SVD_150m_SoundShader",
			"CUP_SVD_550m_SoundShader",
			"CUP_SVD_1000m_SoundShader",
			"CUP_SVD_1800m_SoundShader"
		};
	};
	class CUP_PP2000_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_PP2000_Closure_SoundShader"
		};
	};
	class CUP_PP2000_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_PP2000_0m_SoundShader",
			"CUP_PP2000_50m_SoundShader",
			"CUP_PP2000_150m_SoundShader",
			"CUP_PP2000_550m_SoundShader",
			"CUP_PP2000_1000m_SoundShader",
			"CUP_PP2000_1800m_SoundShader"
		};
	};
	class CUP_DSHKM_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_DSHKM_Closure_SoundShader"
		};
	};
	class CUP_DSHKM_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_DSHKM_0m_SoundShader",
			"CUP_DSHKM_50m_SoundShader",
			"CUP_DSHKM_150m_SoundShader",
			"CUP_DSHKM_550m_SoundShader",
			"CUP_DSHKM_1000m_SoundShader",
			"CUP_DSHKM_1800m_SoundShader"
		};
	};
	class CUP_20mmGatling_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_20mmGatling_Closure_SoundShader"
		};
	};
	class CUP_20mmGatling_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_20mmGatling_0m_SoundShader",
			"CUP_20mmGatling_50m_SoundShader",
			"CUP_20mmGatling_150m_SoundShader",
			"CUP_20mmGatling_550m_SoundShader",
			"CUP_20mmGatling_1000m_SoundShader",
			"CUP_20mmGatling_1800m_SoundShader"
		};
	};
	class CUP_ASVAL_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_ASVAL_Closure_SoundShader"
		};
	};
	class CUP_ASVAL_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_ASVAL_SD_0m_SoundShader",
			"CUP_ASVAL_SD_30m_SoundShader",
			"CUP_ASVAL_SD_150m_SoundShader",
			"CUP_ASVAL_SD_350m_SoundShader"
		};
	};
	class CUP_BoltActions_Closure_SoundSet: CUP_Base_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_BoltActions_Closure_SoundShader"
		};
		volumeCurve="CUP_closeShotCurve";
	};
	class CUP_BoltActions_Shot_SoundSet: CUP_Base_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_BoltActions_0m_SoundShader",
			"CUP_BoltActions_50m_SoundShader",
			"CUP_BoltActions_150m_SoundShader",
			"CUP_BoltActions_550m_SoundShader",
			"CUP_BoltActions_1000m_SoundShader",
			"CUP_BoltActions_1800m_SoundShader"
		};
	};
	class CUP_BoltActions_ShotSD_SoundSet: CUP_Base_SoundSet_SD
	{
		soundShaders[]=
		{
			"CUP_BoltActions_SD_0m_SoundShader",
			"CUP_BoltActions_SD_30m_SoundShader",
			"CUP_BoltActions_SD_150m_SoundShader",
			"CUP_BoltActions_SD_350m_SoundShader"
		};
	};
	class CUP_120mm_Closure_SoundSet: CUP_Base_Cannon_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_120mm_Closure_SoundShader"
		};
	};
	class CUP_120mm_Shot_SoundSet: CUP_Base_Cannon_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_120mm_0m_SoundShader",
			"CUP_120mm_50m_SoundShader",
			"CUP_120mm_150m_SoundShader",
			"CUP_120mm_550m_SoundShader",
			"CUP_120mm_1000m_SoundShader",
			"CUP_120mm_1800m_SoundShader"
		};
	};
	class CUP_155mm_Closure_SoundSet: CUP_Base_Cannon_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_155mm_Closure_SoundShader"
		};
	};
	class CUP_155mm_Shot_SoundSet: CUP_Base_Cannon_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_155mm_0m_SoundShader",
			"CUP_155mm_50m_SoundShader",
			"CUP_155mm_150m_SoundShader",
			"CUP_155mm_550m_SoundShader",
			"CUP_155mm_1000m_SoundShader",
			"CUP_155mm_1800m_SoundShader"
		};
	};
	class CUP_M230_Closure_SoundSet: CUP_Base_Cannon_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_M230_Closure_SoundShader"
		};
	};
	class CUP_M230_Shot_SoundSet: CUP_Base_MiniCannon_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_M230_0m_SoundShader",
			"CUP_M230_50m_SoundShader",
			"CUP_M230_150m_SoundShader",
			"CUP_M230_550m_SoundShader",
			"CUP_M230_1000m_SoundShader",
			"CUP_M230_1800m_SoundShader"
		};
	};
	class CUP_autocannon_Closure_SoundSet: CUP_Base_Cannon_SoundSet_Closure
	{
		soundShaders[]=
		{
			"CUP_autocannon_Closure_SoundShader"
		};
	};
	class CUP_autocannon_Shot_SoundSet: CUP_Base_MiniCannon_SoundSet_Shot
	{
		soundShaders[]=
		{
			"CUP_autocannon_0m_SoundShader",
			"CUP_autocannon_50m_SoundShader",
			"CUP_autocannon_150m_SoundShader",
			"CUP_autocannon_550m_SoundShader",
			"CUP_autocannon_1000m_SoundShader",
			"CUP_autocannon_1800m_SoundShader"
		};
	};
	class CUP_Rifle1_Tail_SoundSet: CUP_Base_SoundSet_Tail
	{
		soundShaders[]=
		{
			"CUP_Rifle1_Meadows_0m_SoundShader",
			"CUP_Rifle1_Meadows_50m_SoundShader",
			"CUP_Rifle1_Meadows_150m_SoundShader",
			"CUP_Rifle1_Meadows_550m_SoundShader",
			"CUP_Rifle1_Houses_0m_SoundShader",
			"CUP_Rifle1_Houses_50m_SoundShader",
			"CUP_Rifle1_Houses_150m_SoundShader",
			"CUP_Rifle1_Houses_550m_SoundShader",
			"CUP_Rifle1_Trees_0m_SoundShader",
			"CUP_Rifle1_Trees_50m_SoundShader",
			"CUP_Rifle1_Trees_150m_SoundShader",
			"CUP_Rifle1_Trees_550m_SoundShader",
			"CUP_Rifle1_Forest_0m_SoundShader",
			"CUP_Rifle1_Forest_50m_SoundShader",
			"CUP_Rifle1_Forest_150m_SoundShader",
			"CUP_Rifle1_Forest_550m_SoundShader",
			"CUP_Rifle1_Interior_0m_SoundShader",
			"CUP_Rifle1_Interior_50m_SoundShader",
			"CUP_Rifle1_Interior_150m_SoundShader",
			"CUP_Rifle1_Interior_550m_SoundShader"
		};
	};
	class CUP_pistol1_Tail_SoundSet: CUP_Base_SoundSet_Tail
	{
		soundShaders[]=
		{
			"CUP_pistol1_Meadows_0m_SoundShader",
			"CUP_pistol1_Meadows_50m_SoundShader",
			"CUP_pistol1_Meadows_150m_SoundShader",
			"CUP_pistol1_Meadows_550m_SoundShader",
			"CUP_pistol1_Houses_0m_SoundShader",
			"CUP_pistol1_Houses_50m_SoundShader",
			"CUP_pistol1_Houses_150m_SoundShader",
			"CUP_pistol1_Houses_550m_SoundShader",
			"CUP_pistol1_Trees_0m_SoundShader",
			"CUP_pistol1_Trees_50m_SoundShader",
			"CUP_pistol1_Trees_150m_SoundShader",
			"CUP_pistol1_Trees_550m_SoundShader",
			"CUP_pistol1_Forest_0m_SoundShader",
			"CUP_pistol1_Forest_50m_SoundShader",
			"CUP_pistol1_Forest_150m_SoundShader",
			"CUP_pistol1_Forest_550m_SoundShader",
			"CUP_pistol1_Interior_0m_SoundShader",
			"CUP_pistol1_Interior_50m_SoundShader",
			"CUP_pistol1_Interior_150m_SoundShader",
			"CUP_pistol1_Interior_550m_SoundShader"
		};
	};
	class CUP_lmg1_Tail_SoundSet: CUP_Base_SoundSet_Tail
	{
		soundShaders[]=
		{
			"CUP_lmg1_Meadows_0m_SoundShader",
			"CUP_lmg1_Meadows_50m_SoundShader",
			"CUP_lmg1_Meadows_150m_SoundShader",
			"CUP_lmg1_Meadows_550m_SoundShader",
			"CUP_lmg1_Houses_0m_SoundShader",
			"CUP_lmg1_Houses_50m_SoundShader",
			"CUP_lmg1_Houses_150m_SoundShader",
			"CUP_lmg1_Houses_550m_SoundShader",
			"CUP_lmg1_Trees_0m_SoundShader",
			"CUP_lmg1_Trees_50m_SoundShader",
			"CUP_lmg1_Trees_150m_SoundShader",
			"CUP_lmg1_Trees_550m_SoundShader",
			"CUP_lmg1_Forest_0m_SoundShader",
			"CUP_lmg1_Forest_50m_SoundShader",
			"CUP_lmg1_Forest_150m_SoundShader",
			"CUP_lmg1_Forest_550m_SoundShader",
			"CUP_lmg1_Interior_0m_SoundShader",
			"CUP_lmg1_Interior_50m_SoundShader",
			"CUP_lmg1_Interior_150m_SoundShader",
			"CUP_lmg1_Interior_550m_SoundShader"
		};
	};
	class CUP_mmg1_Tail_SoundSet: CUP_Base_SoundSet_Tail
	{
		soundShaders[]=
		{
			"CUP_mmg1_Meadows_0m_SoundShader",
			"CUP_mmg1_Meadows_50m_SoundShader",
			"CUP_mmg1_Meadows_150m_SoundShader",
			"CUP_mmg1_Meadows_550m_SoundShader",
			"CUP_mmg1_Houses_0m_SoundShader",
			"CUP_mmg1_Houses_50m_SoundShader",
			"CUP_mmg1_Houses_150m_SoundShader",
			"CUP_mmg1_Houses_550m_SoundShader",
			"CUP_mmg1_Trees_0m_SoundShader",
			"CUP_mmg1_Trees_50m_SoundShader",
			"CUP_mmg1_Trees_150m_SoundShader",
			"CUP_mmg1_Trees_550m_SoundShader",
			"CUP_mmg1_Forest_0m_SoundShader",
			"CUP_mmg1_Forest_50m_SoundShader",
			"CUP_mmg1_Forest_150m_SoundShader",
			"CUP_mmg1_Forest_550m_SoundShader",
			"CUP_mmg1_Interior_0m_SoundShader",
			"CUP_mmg1_Interior_50m_SoundShader",
			"CUP_mmg1_Interior_150m_SoundShader",
			"CUP_mmg1_Interior_550m_SoundShader"
		};
	};
	class CUP_sniper1_Tail_SoundSet: CUP_Base_SoundSet_Tail
	{
		soundShaders[]=
		{
			"CUP_sniper1_Meadows_0m_SoundShader",
			"CUP_sniper1_Meadows_50m_SoundShader",
			"CUP_sniper1_Meadows_150m_SoundShader",
			"CUP_sniper1_Meadows_550m_SoundShader",
			"CUP_sniper1_Houses_0m_SoundShader",
			"CUP_sniper1_Houses_50m_SoundShader",
			"CUP_sniper1_Houses_150m_SoundShader",
			"CUP_sniper1_Houses_550m_SoundShader",
			"CUP_sniper1_Trees_0m_SoundShader",
			"CUP_sniper1_Trees_50m_SoundShader",
			"CUP_sniper1_Trees_150m_SoundShader",
			"CUP_sniper1_Trees_550m_SoundShader",
			"CUP_sniper1_Forest_0m_SoundShader",
			"CUP_sniper1_Forest_50m_SoundShader",
			"CUP_sniper1_Forest_150m_SoundShader",
			"CUP_sniper1_Forest_550m_SoundShader",
			"CUP_sniper1_Interior_0m_SoundShader",
			"CUP_sniper1_Interior_50m_SoundShader",
			"CUP_sniper1_Interior_150m_SoundShader",
			"CUP_sniper1_Interior_550m_SoundShader"
		};
	};
	class CUP_sniper2_Tail_SoundSet: CUP_Base_SoundSet_Tail
	{
		soundShaders[]=
		{
			"CUP_sniper2_Meadows_0m_SoundShader",
			"CUP_sniper2_Meadows_50m_SoundShader",
			"CUP_sniper2_Meadows_150m_SoundShader",
			"CUP_sniper2_Meadows_550m_SoundShader",
			"CUP_sniper2_Houses_0m_SoundShader",
			"CUP_sniper2_Houses_50m_SoundShader",
			"CUP_sniper2_Houses_150m_SoundShader",
			"CUP_sniper2_Houses_550m_SoundShader",
			"CUP_sniper2_Trees_0m_SoundShader",
			"CUP_sniper2_Trees_50m_SoundShader",
			"CUP_sniper2_Trees_150m_SoundShader",
			"CUP_sniper2_Trees_550m_SoundShader",
			"CUP_sniper2_Forest_0m_SoundShader",
			"CUP_sniper2_Forest_50m_SoundShader",
			"CUP_sniper2_Forest_150m_SoundShader",
			"CUP_sniper2_Forest_550m_SoundShader",
			"CUP_sniper2_Interior_0m_SoundShader",
			"CUP_sniper2_Interior_50m_SoundShader",
			"CUP_sniper2_Interior_150m_SoundShader",
			"CUP_sniper2_Interior_550m_SoundShader"
		};
	};
	class CUP_Rifle1_SD_Tail_SoundSet: CUP_Base_SoundSet_Tail_SD
	{
		soundShaders[]=
		{
			"CUP_Rifle1_SD_Meadows_0m_SoundShader",
			"CUP_Rifle1_SD_Meadows_150m_SoundShader",
			"CUP_Rifle1_SD_Houses_0m_SoundShader",
			"CUP_Rifle1_SD_Houses_150m_SoundShader",
			"CUP_Rifle1_SD_Trees_0m_SoundShader",
			"CUP_Rifle1_SD_Trees_150m_SoundShader",
			"CUP_Rifle1_SD_Forest_0m_SoundShader",
			"CUP_Rifle1_SD_Forest_150m_SoundShader",
			"CUP_Rifle1_SD_Interior_0m_SoundShader",
			"CUP_Rifle1_SD_Interior_40m_SoundShader",
			"CUP_Rifle1_SD_Interior_150m_SoundShader"
		};
	};
	class CUP_cannon_Tail_SoundSet: CUP_Base_SoundSet_Tail_Cannon
	{
		soundShaders[]=
		{
			"CUP_cannon_Meadows_0m_SoundShader",
			"CUP_cannon_Meadows_350m_SoundShader",
			"CUP_cannon_Houses_0m_SoundShader",
			"CUP_cannon_Houses_350m_SoundShader",
			"CUP_cannon_Trees_0m_SoundShader",
			"CUP_cannon_Trees_350m_SoundShader",
			"CUP_cannon_Forest_0m_SoundShader",
			"CUP_cannon_Forest_350m_SoundShader"
		};
	};
	class CUP_autocannon_Tail_SoundSet: CUP_Base_SoundSet_Tail_Cannon
	{
		soundShaders[]=
		{
			"CUP_autocannon_Meadows_0m_SoundShader",
			"CUP_autocannon_Meadows_350m_SoundShader",
			"CUP_autocannon_Houses_0m_SoundShader",
			"CUP_autocannon_Houses_350m_SoundShader",
			"CUP_autocannon_Trees_0m_SoundShader",
			"CUP_autocannon_Trees_350m_SoundShader",
			"CUP_autocannon_Forest_0m_SoundShader",
			"CUP_autocannon_Forest_350m_SoundShader"
		};
	};
	class CUP_sniper1_crackling_SoundSet
	{
		soundShaders[]=
		{
			"CUP_sniper1_crackling_SoundShader"
		};
		volumeFactor=3.55;
		volumeCurve="CUP_soundCurve";
		sound3DProcessingType="CUP_Sniper_crackling_3DProcessingType";
		soundShadersLimit=2;
		frequencyRandomizer=0.13;
		spatial=1;
		doppler=0;
		loop=0;
	};
};
class CfgSoundShaders
{
	class CUP_AK74_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_AK74_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_AK74_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_AK74_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_AK74_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_AK74_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_AK74_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3000,0}
		};
	};
	class CUP_AK74_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_AK74_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_AK74_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_AK74_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{700,0}
		};
	};
	class CUP_AKM_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_AKM_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_AKM_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_AKM_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_AKM_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_AKM_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_AKM_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3250;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3250,0}
		};
	};
	class CUP_AKM_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_AKM_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_AKM_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_AKM_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{700,0}
		};
	};
	class CUP_ASVAL_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_ASVAL_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_ASVAL_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_ASVAL_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_ASVAL_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\ASVAL\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{550,0}
		};
	};
	class CUP_bizon_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_bizon_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_bizon_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_bizon_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_bizon_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_bizon_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_bizon_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2750,0}
		};
	};
	class CUP_bizon_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_bizon_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_bizon_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_bizon_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\bizon\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{650,0}
		};
	};
	class CUP_DSHKM_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_DSHKM_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_DSHKM_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_DSHKM_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_DSHKM_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_DSHKM_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_DSHKM_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\DSHKM\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3900;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3900,0}
		};
	};
	class CUP_M107_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M107_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M107_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M107_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M107_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M107_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M107_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3800,0}
		};
	};
	class CUP_M107_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_M107_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_M107_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_M107_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M107\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{1500,0}
		};
	};
	class CUP_M134_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M134_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M134_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M134_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M134_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M134_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M134_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M134\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3400;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3400,0}
		};
	};
	class CUP_M136_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M136_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M136_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M136_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M136_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M136_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M136_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M136\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2400;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2400,0}
		};
	};
	class CUP_M14_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M14_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M14_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M14_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M14_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M14_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M14_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3200;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3200,0}
		};
	};
	class CUP_M14_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_M14_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_M14_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_M14_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M14\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{1000,0}
		};
	};
	class CUP_M16_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M16_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M16_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M16_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M16_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M16_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M16_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3000,0}
		};
	};
	class CUP_M16_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_M16_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_M16_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_M16_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M16\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{700,0}
		};
	};
	class CUP_M2_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M2_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M2_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M2_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M2_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M2_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M2_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3800,0}
		};
	};
	class CUP_M2010_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M2010_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M2010_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M2010_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M2010_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M2010_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M2010_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3200;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3200,0}
		};
	};
	class CUP_M2010_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_M2010_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_M2010_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_M2010_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M2010\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{1000,0}
		};
	};
	class CUP_M240_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M240_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M240_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M240_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M240_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M240_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M240_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M240\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3300,0}
		};
	};
	class CUP_M249_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M249_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M249_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M249_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M249_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M249_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M249_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3200;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3200,0}
		};
	};
	class CUP_M249_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_M249_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_M249_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_M249_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M249\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{650,0}
		};
	};
	class CUP_M4_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M4_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M4_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M4_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M4_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M4_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M4_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3000,0}
		};
	};
	class CUP_M4_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_M4_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_M4_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_M4_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M4\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{700,0}
		};
	};
	class CUP_M590_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M590_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M590_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M590_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M590_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M590_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M590_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M590\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3000,0}
		};
	};
	class CUP_MK19_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_MK19_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_MK19_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_MK19_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_MK19_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_MK19_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_MK19_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MK19\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2800;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2800,0}
		};
	};
	class CUP_MP7_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_MP7_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_MP7_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_MP7_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_MP7_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_MP7_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_MP7_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2750,0}
		};
	};
	class CUP_MP7_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_MP7_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_MP7_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_MP7_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\MP7\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{650,0}
		};
	};
	class CUP_PKP_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_PKP_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_PKP_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_PKP_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_PKP_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_PKP_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_PKP_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PKP\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3300,0}
		};
	};
	class CUP_PP2000_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_PP2000_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_PP2000_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_PP2000_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_PP2000_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_PP2000_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_PP2000_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\PP2000\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2700;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2700,0}
		};
	};
	class CUP_RPG7_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_RPG7_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_RPG7_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_RPG7_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_RPG7_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_RPG7_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_RPG7_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\RPG7\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2500,0}
		};
	};
	class CUP_SA61_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_SA61_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_SA61_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_SA61_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_SA61_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_SA61_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_SA61_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2400;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2400,0}
		};
	};
	class CUP_SA61_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_SA61_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_SA61_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_SA61_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SA61\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=500;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{500,0}
		};
	};
	class CUP_SVD_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SVD\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SVD\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\SVD\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_BoltActions_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_BoltActions_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_BoltActions_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_BoltActions_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\150m_3",
				1
			}
		};
		volume=2.2119999;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_BoltActions_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\550m_3",
				1
			}
		};
		volume=2.4119999;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_BoltActions_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\1000m_3",
				1
			}
		};
		volume="(1.912-(interior*0.54))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_BoltActions_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\1800m_3",
				1
			}
		};
		volume="(1.912-(interior*0.45))";
		range=3200;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3200,0}
		};
	};
	class CUP_BoltActions_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class CUP_BoltActions_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_30m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_30m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class CUP_BoltActions_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class CUP_BoltActions_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\BoltActions\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{1000,0}
		};
	};
	class CUP_120mm_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_120mm_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\0m_3",
				1
			}
		};
		volume=2.4119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_120mm_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_120mm_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_120mm_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_120mm_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_120mm_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\120mm\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=4500;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{4500,0}
		};
	};
	class CUP_155mm_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_155mm_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\0m_3",
				1
			}
		};
		volume=2.4119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_155mm_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_155mm_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_155mm_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_155mm_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_155mm_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\155mm\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=4700;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{4700,0}
		};
	};
	class CUP_M230_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_M230_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\0m_3",
				1
			}
		};
		volume=2.4119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_M230_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_M230_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_M230_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_M230_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_M230_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\M230\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3900;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3900,0}
		};
	};
	class CUP_20mmgatling_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_20mmgatling_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\0m_3",
				1
			}
		};
		volume=2.4119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_20mmgatling_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_20mmgatling_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_20mmgatling_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_20mmgatling_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_20mmgatling_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\20mmgatling\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3400;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3400,0}
		};
	};
	class CUP_autocannon_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\Closure_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\Closure_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class CUP_autocannon_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\0m_3",
				1
			}
		};
		volume=2.4119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class CUP_autocannon_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class CUP_autocannon_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class CUP_autocannon_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class CUP_autocannon_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\1000m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\1000m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class CUP_autocannon_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\1800m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\1800m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\autocannon\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3900;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3900,0}
		};
	};
	class CUP_Rifle1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Meadows_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Meadows_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Houses_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Houses_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Trees_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Trees_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*Forest/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Forest_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_50m_3",
				1
			}
		};
		volume=" 3.85*(1.3*((1-interior/1.4)*Forest/3))";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_150m_3",
				1
			}
		};
		volume=" 3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Forest_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*(1.8*((1-interior/1.4)*forest/3))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_0m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_50m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_150m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_550m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_0m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_150m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_0m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_150m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*houses/3)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_0m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_150m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*trees/3)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_0m_3",
				1
			}
		};
		volume="2.40*((1-interior)*Forest)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_150m_3",
				1
			}
		};
		volume="2.40*((1-interior)*Forest)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_0m_3",
				1
			}
		};
		volume="2.40*((interior)*0.7)";
		range=40;
		rangeCurve[]=
		{
			{0,1},
			{40,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Interior_40m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_40m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_40m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_40m_3",
				1
			}
		};
		volume="2.40*((interior)*0.7)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{40,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Rifle1_SD_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_150m_3",
				1
			}
		};
		volume="2.40*((interior)*0.68)";
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{40,0},
			{150,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Meadows_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Meadows_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Meadows_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{2750,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Houses_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Houses_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Houses_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{2750,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Trees_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\forest_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Trees_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{2750,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*Forest/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Forest_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_50m_3",
				1
			}
		};
		volume=" 3.85*(1.3*((1-interior/1.4)*Forest/3))";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_150m_3",
				1
			}
		};
		volume=" 3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Forest_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*(1.8*((1-interior/1.4)*forest/3))";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{2750,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_0m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_50m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_150m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class CUP_Pistol1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\Pistol1\Interior_550m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Meadows_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Meadows_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3100,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Houses_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Houses_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3100,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Trees_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Trees_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3100,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*Forest/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Forest_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_50m_3",
				1
			}
		};
		volume=" 3.85*(1.3*((1-interior/1.4)*Forest/3))";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_150m_3",
				1
			}
		};
		volume=" 3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Forest_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*(1.8*((1-interior/1.4)*forest/3))";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3100,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_0m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_50m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_150m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class CUP_lmg1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_550m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Meadows_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Meadows_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Meadows_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3300,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Houses_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Houses_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Houses_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3300,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Trees_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\forest_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Trees_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3300,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*Forest/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Forest_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_50m_3",
				1
			}
		};
		volume=" 3.85*(1.3*((1-interior/1.4)*Forest/3))";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_150m_3",
				1
			}
		};
		volume=" 3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Forest_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*(1.8*((1-interior/1.4)*forest/3))";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3300,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_0m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_50m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_150m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class CUP_mmg1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\mmg1\Interior_550m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Meadows_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Meadows_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Meadows_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Houses_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Houses_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Houses_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Far_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*houses/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Trees_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_50m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\forest_150m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Trees_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*trees/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_0m_3",
				1
			}
		};
		volume=" 3.85*((1-interior/1.4)*Forest/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Forest_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_50m_3",
				1
			}
		};
		volume=" 3.85*(1.3*((1-interior/1.4)*Forest/3))";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_150m_3",
				1
			}
		};
		volume=" 3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Forest_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Forest_550m_3",
				1
			}
		};
		volume=" 3.85*(1.8*((1-interior/1.4)*forest/3))";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_0m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_50m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_150m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class CUP_sniper1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\Interior_550m_3",
				1
			}
		};
		volume=" 3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_0m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Meadows_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_50m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Meadows_150m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Meadows_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Far_550m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_0m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*houses/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Houses_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_50m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Houses_150m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*houses/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Houses_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Far_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Far_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Far_550m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*houses/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_0m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*trees/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Trees_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_50m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\forest_150m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*trees/3)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Trees_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_550m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*trees/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_0m_3",
				1
			}
		};
		volume="5.15*((1-interior/1.4)*Forest/3)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Forest_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_50m_3",
				1
			}
		};
		volume="5.15*(1.3*((1-interior/1.4)*Forest/3))";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_150m_3",
				1
			}
		};
		volume="5.15*(1.4*((1-interior/1.4)*forest/3))";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Forest_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Forest_550m_3",
				1
			}
		};
		volume="5.15*(1.8*((1-interior/1.4)*forest/3))";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{1000,1},
			{3800,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_0m_3",
				1
			}
		};
		volume="5.15*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_50m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_50m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_50m_3",
				1
			}
		};
		volume="5.15*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_150m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_150m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_150m_3",
				1
			}
		};
		volume="5.15*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class CUP_sniper2_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_550m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_550m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper2\Interior_550m_3",
				1
			}
		};
		volume="5.15*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class CUP_cannon_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Meadows_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_cannon_Meadows_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Meadows_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Meadows_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Meadows_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class CUP_cannon_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Houses_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_cannon_Houses_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Houses_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Houses_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Houses_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class CUP_cannon_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_cannon_Trees_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\forest_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\forest_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\forest_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class CUP_cannon_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*Forest/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_cannon_Forest_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Forest_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Forest_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\cannon\Forest_350m_3",
				1
			}
		};
		volume="5.45*(1.4*((1-interior/1.4)*forest/3))";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Meadows_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Meadows_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Meadows_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Meadows_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Meadows_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Meadows_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Meadows_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Houses_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Houses_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Houses_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Houses_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Houses_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Houses_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Houses_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Trees_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\forest_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\forest_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\forest_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Forest_0m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Forest_0m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*Forest/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class CUP_autocannon_Forest_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Forest_350m_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Forest_350m_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\autocannon\Forest_350m_3",
				1
			}
		};
		volume="5.45*(1.4*((1-interior/1.4)*forest/3))";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class CUP_sniper1_crackling_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\crackling_1",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\crackling_2",
				1
			},
			
			{
				"\CUP\Weapons\CUP_Weapons_Sounds\tails\sniper1\crackling_3",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=400;
		rangeCurve="CUP_soundCurve";
	};
};
