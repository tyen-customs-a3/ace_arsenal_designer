class CfgPatches
{
	class CUP_Weapons_SoundShaders
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore"
		};
	};
	version=1.1799999;
	versionStr="1.18.1.0";
	versionAr[]={1,18,1,0};
};
class CfgSoundShaders
{
	class CUP_Base_SoundShader
	{
		volume=1;
		range=60;
		rangeCurve="closeShotCurve";
	};
	class CUP_PKM_closeShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\PKM\PKM_closeShot",
				1
			}
		};
		range=50;
		rangeCurve="CUP_closeShotCurve";
	};
	class CUP_PKM_midShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\PKM\PKM_midShot",
				1
			}
		};
		range=2000;
		rangeCurve="CUP_midShotCurve";
	};
	class CUP_PKM_distShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\PKM\PKM_distShot",
				1
			}
		};
		range=2000;
		rangeCurve="CUP_distShotCurve";
	};
	class CUP_SCAR_L_closeShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\SCAR_L\SCAR_L_closeShot",
				1
			}
		};
		range=50;
		rangeCurve="CUP_closeShotCurve";
	};
	class CUP_SCAR_L_midShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\SCAR_L\SCAR_L_midShot",
				1
			}
		};
		range=2000;
		rangeCurve="CUP_midShotCurve";
	};
	class CUP_SCAR_L_distShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\SCAR_L\SCAR_L_distShot",
				1
			}
		};
		range=2000;
		rangeCurve="CUP_midShotCurve";
	};
	class CUP_SCAR_H_closeShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\SCAR_H\SCAR_H_closeShot",
				1
			}
		};
		range=50;
		rangeCurve="CUP_closeShotCurve";
	};
	class CUP_SCAR_H_midShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\SCAR_H\SCAR_H_midShot",
				1
			}
		};
		range=2000;
		rangeCurve="CUP_midShotCurve";
	};
	class CUP_SCAR_H_distShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\SCAR_H\SCAR_H_distShot",
				1
			}
		};
		range=2000;
		rangeCurve="CUP_distShotCurve";
	};
	class CUP_HuntingRifle_closeShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\HuntingRifle\HuntingRifle_closeShot",
				1
			}
		};
		range=120;
		rangeCurve="CUP_closeShotCurve";
	};
	class CUP_AS50_closeShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\AS50\AS50_closeShot",
				1
			}
		};
		range=120;
		rangeCurve="CUP_closeShotCurve";
	};
	class CUP_GrenadeLaunchers_closeShot_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\GrenadeLaunchers\GrenadeLaunchers_closeShot",
				1
			}
		};
		range=40;
	};
	class CUP_MicroUZI_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\MicroUZI\MicroUZI_StandardSound",
				1
			}
		};
	};
	class CUP_MicroUZI_SilencedSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\MicroUZI\MicroUZI_SilencedSound",
				1
			}
		};
		range=120;
	};
	class CUP_Revolver_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Revolver\Revolver_StandardSound",
				1
			}
		};
	};
	class CUP_Compact_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Compact\Compact_StandardSound",
				1
			}
		};
	};
	class CUP_Duty_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Duty\Duty_StandardSound",
				1
			}
		};
	};
	class CUP_M9_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\M9\M9_StandardSound",
				1
			}
		};
	};
	class CUP_SA61_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\SA61\SA61_StandardSound",
				1
			}
		};
	};
	class CUP_Colt1911_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Colt1911\Colt1911_StandardSound",
				1
			}
		};
	};
	class CUP_Colt1911_SilencedSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Colt1911\Colt1911_SilencedSound",
				1
			}
		};
		range=100;
	};
	class CUP_Glock17_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Glock17\Glock17_StandardSound",
				1
			}
		};
	};
	class CUP_Glock17_SilencedSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Glock17\Glock17_SilencedSound",
				1
			}
		};
		range=100;
	};
	class CUP_Makarov_StandardSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Makarov\Makarov_StandardSound",
				1
			}
		};
	};
	class CUP_Makarov_SilencedSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\Makarov\Makarov_SilencedSound",
				1
			}
		};
		range=100;
	};
	class CUP_VSS_SilencedSound_SoundShader: CUP_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"\CUP\Weapons\CUP_Weapons_SoundShaders\sounds\VSS\VSS_SilencedSound",
				1
			}
		};
		range=120;
	};
};
class CfgSoundSets
{
	class CUP_Base_Shot_Soundset
	{
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
		soundShadersLimit=0;
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
	};
	class CUP_Base_Tail_Soundset: CUP_Base_Shot_Soundset
	{
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		soundShadersLimit=2;
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		distanceFilter="weaponShotTailDistanceFreqAttenuationFilter";
	};
	class CUP_PKM_Shot_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_PKM_closeShot_SoundShader",
			"CUP_PKM_midShot_SoundShader",
			"CUP_PKM_distShot_SoundShader",
			"MMG01_Closure_SoundShader"
		};
		volumeFactor=1.6;
		stereoStartDistance=8;
		stereoRadius=10;
	};
	class CUP_PKM_Tail_SoundSet: CUP_Base_Tail_Soundset
	{
		soundShaders[]=
		{
			"MMG01_tailDistant_SoundShader",
			"MMG01_tailForest_SoundShader",
			"MMG01_tailHouses_SoundShader",
			"MMG01_tailInterior_SoundShader",
			"MMG01_tailMeadows_SoundShader",
			"MMG01_tailTrees_SoundShader"
		};
		stereoStartDistance=100;
		stereoRadius=50;
		soundShadersLimit=4;
	};
	class CUP_SCAR_L_Shot_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_SCAR_L_closeShot_SoundShader",
			"CUP_SCAR_L_midShot_SoundShader",
			"CUP_SCAR_L_distShot_SoundShader",
			"TRG20_Closure_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_SCAR_L_Tail_SoundSet: CUP_Base_Tail_Soundset
	{
		soundShaders[]=
		{
			"TRG20_tailDistant_SoundShader",
			"TRG20_tailForest_SoundShader",
			"TRG20_tailHouses_SoundShader",
			"TRG20_tailInterior_SoundShader",
			"TRG20_tailMeadows_SoundShader",
			"TRG20_tailTrees_SoundShader"
		};
	};
	class CUP_SCAR_H_Shot_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_SCAR_H_closeShot_SoundShader",
			"CUP_SCAR_H_midShot_SoundShader",
			"CUP_SCAR_H_distShot_SoundShader",
			"TRG20_Closure_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_SCAR_H_Tail_SoundSet: CUP_Base_Tail_Soundset
	{
		soundShaders[]=
		{
			"TRG20_tailDistant_SoundShader",
			"TRG20_tailForest_SoundShader",
			"TRG20_tailHouses_SoundShader",
			"TRG20_tailInterior_SoundShader",
			"TRG20_tailMeadows_SoundShader",
			"TRG20_tailTrees_SoundShader"
		};
	};
	class CUP_HuntingRifle_Shot_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_HuntingRifle_closeShot_SoundShader",
			"M320_midShot_SoundShader",
			"M320_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_HuntingRifle_Tail_SoundSet: CUP_Base_Tail_Soundset
	{
		soundShaders[]=
		{
			"DMR06_tailDistant_SoundShader",
			"DMR06_tailForest_SoundShader",
			"DMR06_tailHouses_SoundShader",
			"DMR06_tailInterior_SoundShader",
			"DMR06_tailMeadows_SoundShader",
			"DMR06_tailTrees_SoundShader"
		};
	};
	class CUP_AS50_Shot_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_AS50_closeShot_SoundShader",
			"GM6Lynx_midShot_SoundShader",
			"GM6Lynx_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_GrenadeLaunchers_Shot_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_GrenadeLaunchers_closeShot_SoundShader",
			"UGL_midShot_SoundShader",
			"UGL_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_MicroUZI_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_MicroUZI_StandardSound_SoundShader",
			"SMGVermin_midShot_SoundShader",
			"SMGVermin_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_MicroUZI_SilencedSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_MicroUZI_SilencedSound_SoundShader"
		};
		volumeFactor=0.69999999;
	};
	class CUP_Revolver_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Revolver_StandardSound_SoundShader",
			"Zubr_Closure_SoundShader",
			"Zubr_midShot_SoundShader",
			"Zubr_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_Compact_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Compact_StandardSound_SoundShader",
			"P07_Closure_SoundShader",
			"P07_midShot_SoundShader",
			"P07_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_Duty_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Duty_StandardSound_SoundShader",
			"P07_Closure_SoundShader",
			"P07_midShot_SoundShader",
			"P07_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_M9_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_M9_StandardSound_SoundShader",
			"P07_Closure_SoundShader",
			"P07_midShot_SoundShader",
			"P07_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_SA61_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_SA61_StandardSound_SoundShader",
			"SMGVermin_Closure_SoundShader",
			"P07_midShot_SoundShader",
			"P07_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_Colt1911_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Colt1911_StandardSound_SoundShader",
			"4Five_midShot_SoundShader",
			"4Five_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_Colt1911_SilencedSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Colt1911_SilencedSound_SoundShader",
			"P07_Closure_SoundShader"
		};
		volumeFactor=0.69999999;
	};
	class CUP_Glock17_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Glock17_StandardSound_SoundShader",
			"4Five_midShot_SoundShader",
			"4Five_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_Glock17_SilencedSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Glock17_SilencedSound_SoundShader",
			"P07_Closure_SoundShader"
		};
		volumeFactor=0.69999999;
	};
	class CUP_Makarov_StandardSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Makarov_StandardSound_SoundShader",
			"ACPC2_midShot_SoundShader",
			"ACPC2_distShot_SoundShader"
		};
		volumeFactor=1.6;
	};
	class CUP_Makarov_SilencedSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_Makarov_SilencedSound_SoundShader"
		};
		volumeFactor=0.69999999;
	};
	class CUP_VSS_SilencedSound_SoundSet: CUP_Base_Shot_Soundset
	{
		soundShaders[]=
		{
			"CUP_VSS_SilencedSound_SoundShader"
		};
		volumeFactor=0.69999999;
	};
	class CUP_BoltActions_Tail_SoundSet: CUP_Base_Tail_Soundset
	{
		soundShaders[]=
		{
			"MMG01_tailForest_SoundShader",
			"MMG01_tailHouses_SoundShader",
			"MMG01_tailInterior_SoundShader",
			"MMG01_tailMeadows_SoundShader",
			"MMG01_tailTrees_SoundShader"
		};
		volumeCurve="CUP_rifleSoundCurve";
		distanceFilter="CUP_rifleTailDistanceFilter";
	};
	class CUP_BoltActions_Louder_Tail_SoundSet: CUP_Base_Tail_Soundset
	{
		soundShaders[]=
		{
			"DMR06_tailForest_SoundShader",
			"DMR06_tailHouses_SoundShader",
			"DMR06_tailInterior_SoundShader",
			"DMR06_tailMeadows_SoundShader",
			"DMR06_tailTrees_SoundShader"
		};
		volumeCurve="CUP_rifleSoundCurve";
		distanceFilter="CUP_rifleTailDistanceFilter";
	};
};
class CfgSoundCurves
{
	class CUP_closeShotCurve
	{
		points[]=
		{
			{0,1},
			{0.1,0.56129998},
			{0.2,0.3502},
			{0.30000001,0.2309},
			{0.40000001,0.1569},
			{0.5,0.108},
			{0.60000002,0.073899999},
			{0.69999999,0.0493},
			{0.80000001,0.0308},
			{0.89999998,0.0167},
			{1,0}
		};
	};
	class CUP_midShotCurve
	{
		points[]=
		{
			{0,0.2},
			{0.1,1},
			{0.2,0},
			{0.30000001,0},
			{0.40000001,0},
			{0.5,0},
			{0.60000002,0},
			{0.69999999,0},
			{0.80000001,0},
			{0.89999998,0},
			{1,0}
		};
	};
	class CUP_distShotCurve
	{
		points[]=
		{
			{0,0},
			{0.1,0},
			{0.2,1},
			{0.30000001,1},
			{0.40000001,1},
			{0.5,1},
			{0.60000002,1},
			{0.69999999,1},
			{0.80000001,1},
			{0.89999998,1},
			{1,1}
		};
	};
};
