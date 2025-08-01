
#define _ARMA_

class CfgSoundShaders
{
	class ptv_MG3_Closure_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_first",1}};
		range = 5;
		volume = 0.8;
	};
	class ptv_MG3_closeShot_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_close1",1},{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_close2",1},{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_close3",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ptv_MG3_midShot_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_mid1",1},{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_mid2",1},{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_mid3",1}};
		volume = 0.5011872;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class ptv_MG3_distShot_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_dist1",1},{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_dist2",1},{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_dist3",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class ptv_MG3_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class ptv_MG3_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class ptv_MG3_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class ptv_MG3_tailInterior_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_indoor",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class ptv_MG3_tailMeadows_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\mg3\soundshaders\MG3\MG3_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class ptv_MG3_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class ptv_MG3_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class ptv_MG3_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ptv_MG3_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class ptv_MG3_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class ptv_MG3_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ptv_MG3_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ptv_M60E4_Closure_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",1},{"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",1}};
		range = 5;
		volume = 0;
	};
	class ptv_M60E4_closeShot_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\m60e4\soundshaders\M60E4\M60E4_close1",3},{"\ptv_weapons\sound\m60e4\soundshaders\M60E4\M60E4_close2",2},{"\ptv_weapons\sound\m60e4\soundshaders\M60E4\M60E4_close3",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ptv_M60E4_midShot_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\m60e4\soundshaders\M60E4\Close_Distance",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class ptv_M60E4_distShot_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\m60e4\soundshaders\M60E4\Medium_Distance",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class ptv_M60E4_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant",1}};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class ptv_M60E4_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class ptv_M60E4_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class ptv_M60E4_tailInterior_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\m60e4\soundshaders\M60E4\M60E4_indoor",1}};
		volume = "interior";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class ptv_M60E4_tailMeadows_SoundShader
	{
		samples[] = {{"\ptv_weapons\sound\m60e4\soundshaders\M60E4\M60E4_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class ptv_M60E4_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class ptv_M60E4_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",1}};
		volume = 1;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class ptv_M60E4_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ptv_M60E4_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class ptv_M60E4_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class ptv_M60E4_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class ptv_M60E4_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class ptv_M60E4_Shot_SoundSet
	{
		soundShaders[] = {"ptv_M60E4_closeShot_SoundShader","ptv_M60E4_midShot_SoundShader","ptv_M60E4_distShot_SoundShader","ptv_M60E4_Closure_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class ptv_M60E4_tail_SoundSet
	{
		soundShaders[] = {"ptv_M60E4_tailDistant_SoundShader","ptv_M60E4_tailForest_SoundShader","ptv_M60E4_tailHouses_SoundShader","ptv_M60E4_tailInterior_SoundShader","ptv_M60E4_tailMeadows_SoundShader","ptv_M60E4_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class ptv_M60E4_SilencerShot_SoundSet
	{
		soundShaders[] = {"ptv_M60E4_silencerShot_SoundShader","ptv_M60E4_Closure_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class ptv_M60E4_Silencertail_SoundSet
	{
		soundShaders[] = {"ptv_M60e4_silencerTailTrees_SoundShader","ptv_M60e4_silencerTailForest_SoundShader","ptv_M60e4_silencerTailMeadows_SoundShader","ptv_M60e4_silencerTailHouses_SoundShader","ptv_M60e4_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class ptv_MG3_Shot_SoundSet
	{
		soundShaders[] = {"ptv_MG3_closeShot_SoundShader","ptv_MG3_midShot_SoundShader","ptv_MG3_distShot_SoundShader","ptv_MG3_Closure_SoundShader"};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class ptv_MG3_tail_SoundSet
	{
		soundShaders[] = {"ptv_MG3_tailDistant_SoundShader","ptv_MG3_tailForest_SoundShader","ptv_MG3_tailHouses_SoundShader","ptv_MG3_tailInterior_SoundShader","ptv_MG3_tailMeadows_SoundShader","ptv_MG3_tailTrees_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
class CfgPatches
{
	class ptv_weapons_cfg
	{
		units[] = {"ptv_weapbox","weapon_ptv_hk69","weapon_ptv_g19","weapon_ptv_g19t","weapon_ptv_p80","weapon_ptv_p80t","weapon_ptv_usp45t","weapon_ptv_cbj_ms","weapon_ptv_cbj_ms2","weapon_ptv_cbj_ms_b","weapon_ptv_cbj_ms2_b","weapon_ptv_bm4","weapon_ptv_bm4e","weapon_ptv_AG","weapon_ptv_AG_b","weapon_ptv_AG_c","weapon_ptv_AG_c_b","weapon_ptv_AG_c2","weapon_ptv_AG_c2_b","weapon_ptv_AG_k","weapon_ptv_AG_k_b","weapon_ptv_AG_r","weapon_ptv_AG_r_b","weapon_ptv_AG_c_r","weapon_ptv_AG_c_r_b","weapon_ptv_AG_k_r","weapon_ptv_AG_k_r_b","weapon_ptv_AG_gl_k_r","weapon_ptv_AG_gl_k_r_b","weapon_ptv_AG_r2","weapon_ptv_AG_r2_b","weapon_ptv_AG_k_r2","weapon_ptv_AG_k_r2_b","weapon_ptv_AGM","weapon_ptv_AGM_b","weapon_ptv_AGMR","weapon_ptv_AGMR_b","weapon_ptv_AGM_GL","weapon_ptv_AGM_GL_b","weapon_ptv_m14","weapon_ptv_m14_socom","weapon_ptv_m14_socom_wdl","weapon_ptv_MG3","weapon_ptv_MG3r","weapon_ptv_mg3KWS","weapon_ptv_mg3KWS_b","weapon_ptv_mg3KWS_t","weapon_ptv_negev","weapon_ptv_negev_b","weapon_ptv_ng5","weapon_ptv_ng5_b","weapon_ptv_ng5_sf","weapon_ptv_ng5_sf_b","weapon_ptv_ng5_sf_des","ptv_m14TP","weapon_ptv_m14TP_des","weapon_ptv_m14TP_wdl","weapon_ptv_M14TP2","weapon_ptv_M14TP2_des","weapon_ptv_M14TP2_wdl","weapon_ptv_m249","weapon_ptv_m249_b","weapon_ptv_m249_t","weapon_ptv_m249p","weapon_ptv_m249p_b","weapon_ptv_m249p_t","weapon_ptv_TRG42","weapon_ptv_TRG42f","weapon_ptv_M82a1","item_ptv_cbj_sd","item_ptv_rotex","item_ptv_rotex2","item_ptv_rotex308","item_ptv_rotexs","item_ptv_trant45","item_ptv_trant9","item_ptv_impuls","item_ptv_dbala2","item_ptv_x300","item_ptv_x300_des","item_ptv_M6X","item_ptv_SFM952V","item_ptv_SFM952V_des","item_ptv_flash","item_ptv_llm","item_ptv_llm_des","item_ptv_peq2","item_ptv_peq2sf","item_ptv_peq2sf_des","item_ptv_HBRS","item_ptv_versapod","item_ptv_versapod_des","item_ptv_versapod_wdl","item_ptv_acc_grip1","item_ptv_acc_grip1_t","item_ptv_acc_grip2","item_ptv_acc_grip2_t","item_ptv_acc_grip3","item_ptv_acc_grip3_t","item_ptv_acc_grip4","item_ptv_acc_grip4_t","item_ptv_aim3xmag","item_ptv_cm4s3xmag","item_ptv_t13xmag","item_ptv_t1s3xmag","item_ptv_aim3xmag_f","item_ptv_aimcs","item_ptv_aimcs2","item_ptv_compm4s","item_ptv_rmr","item_ptv_rmr_des","item_ptv_rmr_wdl","item_ptv_t1","item_ptv_t1s","item_ptv_ta11","item_ptv_ta11rmr","item_ptv_zo","item_ptv_zo_rmr","item_ptv_zos","item_ptv_zos_rmr","item_ptv_m145","item_ptv_c79","item_ptv_specterdr","item_ptv_specterdr_des","item_ptv_specterdr_rmr","item_ptv_specterdr_rmr_des","item_ptv_shortdot","item_ptv_shortdot_des","item_ptv_shortdot_wdl","item_ptv_shortdot_dcc","item_ptv_shortdot_dcc_des","item_ptv_shortdot_dcc_wdl","item_ptv_PMII","item_ptv_PMII_sunshade","item_ptv_PMII_des","item_ptv_PMII_des_sunshade","item_ptv_PMII_wdl","item_ptv_PMII_wdl_sunshade","item_ptv_PMII_rmr","item_ptv_PMII_rmr_sunshade","item_ptv_PMII_rmr_des","item_ptv_PMII_rmr_des_sunshade","item_ptv_PMII_rmr_wdl","item_ptv_PMII_rmr_wdl_sunshade","item_ptv_PMII_525","item_ptv_PMII_525_des","item_ptv_PMII_525_wdl","item_ptv_CWS","item_ptv_vipir2","item_ptv_vipir2p"};
		weapons[] = {"ptv_m72a7","ptv_m72a7_used","ptv_AG","ptv_AG_k","ptv_AG_c","ptv_AG_b","ptv_AG_k_b","ptv_AG_c_b","ptv_AG_r","ptv_AG_k_r","ptv_AG_GL_k_r","ptv_AG_c_r","ptv_AG_r_b","ptv_AG_k_r_b","ptv_AG_GL_k_r_b","ptv_AG_c_r_b","ptv_AG_r2","ptv_AG_k_r2","ptv_AG_r2_b","ptv_AG_k_r2_b","ptv_AGM","ptv_AGM_gl","ptv_AGMR","ptv_AG_C2","ptv_AGM_b","ptv_AGMR_b","ptv_AGM_gl_b","ptv_AG_C2_b","ptv_M14","ptv_M14tp","ptv_M14tp2","ptv_M14_socom","ptv_M14tp_des","ptv_M14tp2_des","ptv_M14_socom_wdl","ptv_M14tp_wdl","ptv_M14tp2_wdl","ptv_Negev","ptv_Negev_b","ptv_NG5","ptv_NG5_b","ptv_NG5_sf","ptv_NG5_sf_b","ptv_NG5_sf_des","ptv_m249","ptv_m249_b","ptv_m249_t","ptv_m249p","ptv_m249p_b","ptv_m249p_t","ptv_MG3","ptv_MG3r","ptv_MG3KWS","ptv_trg42","ptv_trg42f","ptv_M82a1","ptv_M82a1_des","ptv_M82a1_wdl","ptv_bm4","ptv_bm4e","ptv_cbj_ms","ptv_cbj_ms2","ptv_cbj_ms_b","ptv_cbj_ms2_b","ptv_hk69","ptv_p80","ptv_p80t","ptv_g19","ptv_p320","ptv_p320t","ptv_g19t","ptv_usp45t"};
		requiredversion = 2.0;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Acc","cba_jr","ptv_weapons"};
		version = 1;
		author = "Project True Viking";
		authorUrl = "http://www.PTV.com//";
	};
};
class CfgMods
{
	class Mod_Base;
	class PTV_Weapons: Mod_Base
	{
		name = "Project True Viking Weapons";
		dir = "@PTV";
		hideName = 1;
		hidePicture = 0;
		action = "http://www.PTV.com/";
		author = "Project True Viking";
	};
	author = "PTV";
	timepacked = "1736952437";
};
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;
class RscDisplayArsenal;
class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing;
	class ptv_rscOptics_m72a7: RscWeaponZeroing
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call ptv_fnc_m72_load";
	};
	class ptv_acog_pip_handler: RscWeaponZeroing
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,4,'acog']  call ptv_fnc_pip_handler;[] call ptv_fnc_preferedOptic";
	};
	class ptv_acog_6x_pip_handler: ptv_acog_pip_handler
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,4,'acog']  call ptv_fnc_acog_6x_pip_handler;[] call ptv_fnc_preferedOptic";
	};
	class ptv_acog_4x_pip_handler: ptv_acog_pip_handler
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,4,'acog']  call ptv_fnc_acog_4x_pip_handler;[] call ptv_fnc_preferedOptic";
	};
	class ptv_acog_3x_pip_handler: ptv_acog_pip_handler
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,4,'acog']  call ptv_fnc_acog_3x_pip_handler;[] call ptv_fnc_preferedOptic";
	};
	class ptv_c79_3x_pip_handler: ptv_acog_pip_handler
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,4,'acog']  call ptv_fnc_c79_3x_pip_handler;[] call ptv_fnc_preferedOptic";
	};
	class ptv_aimpoint_3x_pip_handler: ptv_acog_pip_handler
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,4,'acog']  call ptv_fnc_aimpoint_3x_pip_handler;[] call ptv_fnc_preferedOptic";
	};
	class PTV_Gripod1
	{
		idd = 3056;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call ptv_fnc_accGripod";
	};
};
class CfgFunctions
{
	class ptv
	{
		tag = "ptv";
		class functions
		{
			file = "\ptv_weapons\functions";
			class accGripod{};
			class accGripod_change{};
			class disposable
			{
				file = "\ptv_weapons\scripts\ptv_disposable.sqf";
				description = "Disposable weapons";
			};
			class m72_load
			{
				file = "\ptv_weapons\scripts\ptv_disposable_load.sqf";
			};
			class findPlayer
			{
				file = "\ptv_weapons\scripts\ptv_findPlayer.sqf";
				description = "Find player controled unit";
			};
			class isPlayer
			{
				file = "\ptv_weapons\scripts\ptv_isPlayer.sqf";
				description = "Find player controled unit";
			};
			class pip_handler
			{
				file = "\ptv_weapons\scripts\ptv_pip_handler.sqf";
			};
			class aimpoint_3x_pip_handler
			{
				file = "\ptv_weapons\scripts\aimpoint_3x.sqf";
				description = "Handling of AT4 Peephole";
			};
			class acog_6x_pip_handler
			{
				file = "\ptv_weapons\scripts\acog_6x.sqf";
				description = "Handling of AT4 Peephole";
			};
			class acog_4x_pip_handler
			{
				file = "\ptv_weapons\scripts\acog_4x.sqf";
				description = "Handling of AT4 Peephole";
			};
			class acog_3x_pip_handler
			{
				file = "\ptv_weapons\scripts\acog_3x.sqf";
				description = "Handling of AT4 Peephole";
			};
			class c79_3x_pip_handler
			{
				file = "\ptv_weapons\scripts\c79_3x.sqf";
				description = "Handling of AT4 Peephole";
			};
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ptv_GestureReloadAGM = "ptv_GestureReloadAGM";
		ptv_GestureReloadMG3 = "ptv_GestureReloadMG3";
		ptv_GestureReloadNegev = "ptv_GestureReloadNegev";
		ptv_GestureReloadAX = "ptv_GestureReloadAX";
		ptv_GestureRechamberAX = "ptv_GestureRechamberAX";
		ptv_GestureReloadHK433 = "ptv_GestureReloadHK433";
		ptv_GestureReloadAG = "ptv_GestureReloadAG";
		ptv_GestureReloadAG_C = "ptv_GestureReloadAG_C";
		ptv_GestureReloadAG_GL = "ptv_GestureReloadAG_GL";
		ptv_GestureReloadAG_R2 = "ptv_GestureReloadAG_R2";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			ptv_GestureReloadAGM[] = {"ptv_GestureReloadAGM","Gesture"};
			ptv_GestureReloadMG3[] = {"ptv_GestureReloadMG3","Gesture"};
			ptv_GestureReloadnegev[] = {"ptv_GestureReloadnegev","Gesture"};
			ptv_GestureReloadAX[] = {"ptv_GestureReloadAX","Gesture"};
			ptv_GestureRechamberAX[] = {"ptv_GestureRechamberAX","Gesture"};
			ptv_GestureReloadHK433[] = {"ptv_GestureReloadHK433","Gesture"};
			ptv_GestureReloadAG[] = {"ptv_GestureReloadAG","Gesture"};
			ptv_GestureReloadAG_C[] = {"ptv_GestureReloadAG_C","Gesture"};
			ptv_GestureReloadAG_GL[] = {"ptv_GestureReloadAG_GL","Gesture"};
			ptv_GestureReloadAG_R2[] = {"ptv_GestureReloadAG_R2","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			ptv_GestureReloadAGM[] = {"ptv_GestureReloadAGM_Prone","Gesture"};
			ptv_GestureReloadMG3[] = {"ptv_GestureReloadMG3_Prone","Gesture"};
			ptv_GestureReloadnegev[] = {"ptv_GestureReloadnegev_Prone","Gesture"};
			ptv_GestureReloadAX[] = {"ptv_GestureReloadAX_Prone","Gesture"};
			ptv_GestureRechamberAX[] = {"ptv_GestureRechamberAX_Prone","Gesture"};
			ptv_GestureReloadHK433[] = {"ptv_GestureReloadHK433_Prone","Gesture"};
			ptv_GestureReloadAG[] = {"ptv_GestureReloadAG_Prone","Gesture"};
			ptv_GestureReloadAG_C[] = {"ptv_GestureReloadAG_C_Prone","Gesture"};
			ptv_GestureReloadAG_GL[] = {"ptv_GestureReloadAG_GL_Prone","Gesture"};
			ptv_GestureReloadAG_R2[] = {"ptv_GestureReloadAG_R2_Prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			ptv_GestureReloadAGM[] = {"ptv_GestureReloadAGM_Context","Gesture"};
			ptv_GestureReloadMG3[] = {"ptv_GestureReloadMG3_Context","Gesture"};
			ptv_GestureReloadnegev[] = {"ptv_GestureReloadnegev_Context","Gesture"};
			ptv_GestureReloadAX[] = {"ptv_GestureReloadAX_Context","Gesture"};
			ptv_GestureRechamberAX[] = {"ptv_GestureRechamberAX_Context","Gesture"};
			ptv_GestureReloadHK433[] = {"ptv_GestureReloadHK433_Context","Gesture"};
			ptv_GestureReloadAG[] = {"ptv_GestureReloadAG_Context","Gesture"};
			ptv_GestureReloadAG_C[] = {"ptv_GestureReloadAG_C_Context","Gesture"};
			ptv_GestureReloadAG_GL[] = {"ptv_GestureReloadAG_GL_Context","Gesture"};
			ptv_GestureReloadAG_R2[] = {"ptv_GestureReloadAG_R2_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			ptv_GestureReloadAGM[] = {"ptv_GestureReloadAGM_Context","Gesture"};
			ptv_GestureReloadMG3[] = {"ptv_GestureReloadMG3_Context","Gesture"};
			ptv_GestureReloadnegev[] = {"ptv_GestureReloadnegev_Context","Gesture"};
			ptv_GestureReloadAX[] = {"ptv_GestureReloadAX_Context","Gesture"};
			ptv_GestureRechamberAX[] = {"ptv_GestureRechamberAX_Context","Gesture"};
			ptv_GestureReloadHK433[] = {"ptv_GestureReloadHK433_Context","Gesture"};
			ptv_GestureReloadAG[] = {"ptv_GestureReloadAG_Context","Gesture"};
			ptv_GestureReloadAG_C[] = {"ptv_GestureReloadAG_C_Context","Gesture"};
			ptv_GestureReloadAG_GL[] = {"ptv_GestureReloadAG_GL_Context","Gesture"};
			ptv_GestureReloadAG_R2[] = {"ptv_GestureReloadAG_R2_Context","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			ptv_GestureReloadAGM[] = {"ptv_GestureReloadAGM_Context","Gesture"};
			ptv_GestureReloadMG3[] = {"ptv_GestureReloadMG3_Context","Gesture"};
			ptv_GestureReloadnegev[] = {"ptv_GestureReloadnegev_Context","Gesture"};
			ptv_GestureReloadAX[] = {"ptv_GestureReloadAX_Context","Gesture"};
			ptv_GestureRechamberAX[] = {"ptv_GestureRechamberAX_Context","Gesture"};
			ptv_GestureReloadHK433[] = {"ptv_GestureReloadHK433_Context","Gesture"};
			ptv_GestureReloadAG[] = {"ptv_GestureReloadAG_Context","Gesture"};
			ptv_GestureReloadAG_C[] = {"ptv_GestureReloadAG_C_Context","Gesture"};
			ptv_GestureReloadAG_GL[] = {"ptv_GestureReloadAG_GL_Context","Gesture"};
			ptv_GestureReloadAG_R2[] = {"ptv_GestureReloadAG_R2_Context","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class ptv_GestureReloadAGM: Default
		{
			file = "ptv_weapons\data\anim\reload_agm_stand.rtm";
			speed = 0.2;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0.6533,1,0.6666667,0,0.793333,0,0.88,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.03125,0,0.58666664,0,0.64,1};
		};
		class ptv_GestureReloadAGM_Prone: Default
		{
			file = "ptv_weapons\data\anim\reload_agm_prone.rtm";
			speed = 0.2;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.02;
			headBobMode = 2;
			rightHandIKCurve[] = {0.6533,1,0.6666667,0,0.793333,0,0.88,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.03125,0,0.586666,0,0.64,1};
		};
		class ptv_GestureReloadAGM_Context: ptv_GestureReloadAGM
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadAGM_Prone_Context: ptv_GestureReloadAGM_Prone
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadMG3: Default
		{
			file = "ptv_weapons\machineguns\mg3\anim\reload_mg3_standing.rtm";
			speed = -10.4;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.029315,0,0.120521,0,0.14006,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.146579,1,0.16612,0,0.94462,0,0.97068,1};
		};
		class ptv_GestureReloadMG3_Prone: Default
		{
			file = "ptv_weapons\machineguns\mg3\anim\reload_mg3_prone.rtm";
			speed = -10.5;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.029315,0,0.120521,0,0.14006,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.146579,1,0.16612,0,0.94462,0,0.97068,1};
		};
		class ptv_GestureReloadMG3_Context: ptv_GestureReloadMG3
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadnegev: Default
		{
			file = "ptv_weapons\machineguns\negev\anim\negev_reload_stand.rtm";
			speed = 0.098684214;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.016,0,0.288,0,0.3076,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.09868,1,0.1118421,0,0.92105,0,0.947368,1};
		};
		class ptv_GestureReloadnegev_Crouch: Default
		{
			file = "ptv_weapons\machineguns\negev\anim\negev_reload_crouch.rtm";
			speed = 0.098684214;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.45;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.00986,0,0.92105,0,0.947368,1};
		};
		class ptv_GestureReloadnegev_Prone: Default
		{
			file = "ptv_weapons\machineguns\negev\anim\negev_reload_prone.rtm";
			speed = 0.098684214;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.016,0,0.288,0,0.3076,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.09868,1,0.1118421,0,0.92105,0,0.947368,1};
		};
		class ptv_GestureReloadnegev_Context: ptv_GestureReloadnegev
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadAX: Default
		{
			file = "ptv_weapons\longrangerifles\ax\anim\ax_reload_stand.rtm";
			speed = 0.2189781;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.6569343,1,0.69343066,0,0.8759124,0,0.91240877,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.0729927,1,0.10218978,0,0.91240877,0,0.9489051,1};
		};
		class ptv_GestureReloadAX_Crouch: Default
		{
			file = "ptv_weapons\longrangerifles\ax\anim\ax_reload_stand.rtm";
			speed = 0.2189781;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.45;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.00986,0,0.92105,0,0.947368,1};
		};
		class ptv_GestureReloadAX_Prone: Default
		{
			file = "ptv_weapons\longrangerifles\ax\anim\ax_reload_prone.rtm";
			speed = 0.2189781;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.6569343,1,0.69343066,0,0.8759124,0,0.91240877,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.0729927,1,0.10218978,0,0.91240877,0,0.9489051,1};
		};
		class ptv_GestureReloadAX_Context: ptv_GestureReloadAX
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureRechamberAX: Default
		{
			file = "ptv_weapons\longrangerifles\ax\anim\ax_rechamber_stand.rtm";
			speed = 0.6;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = {0.08,1,0.18,0,0.7,0,0.82,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1};
		};
		class ptv_GestureRechamberAX_Prone: Default
		{
			file = "ptv_weapons\longrangerifles\ax\anim\ax_rechamber_prone.rtm";
			speed = 0.6;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = {0.08,1,0.18,0,0.7,0,0.82,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1};
		};
		class ptv_GestureRechamberAX_Context: ptv_GestureRechamberAX
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadHK433: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_hk433.rtm";
			speed = 0.4;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadHK433_Prone: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_hk433_prone.rtm";
			speed = 0.4;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadHK433_Context: ptv_GestureReloadHK433
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadAG: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_Prone: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag_prone.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_Context: ptv_GestureReloadAG
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadAG_C: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag_c.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_C_Prone: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag_c_prone.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_C_Context: ptv_GestureReloadAG_C
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadAG_GL: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag_gl.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_GL_Prone: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag_gl_prone.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_GL_Context: ptv_GestureReloadAG_GL
		{
			mask = "handsWeapon_context";
		};
		class ptv_GestureReloadAG_R2: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag_r2.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_R2_Prone: Default
		{
			file = "ptv_weapons\data\anim\reloadAnim_ptv_ag_r2_prone.rtm";
			speed = 0.3;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,1,1};
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.03,1,0.1,0,0.9,0,0.97,1};
			leftHandIKEnd = 1;
		};
		class ptv_GestureReloadAG_R2_Context: ptv_GestureReloadAG_R2
		{
			mask = "handsWeapon_context";
		};
	};
};
class cfgRecoils
{
	ptv_127x99_Rifle_Recoil[] = {0,0.015,0.02,0.025,0.014,0.02,0.6,0,0};
	ptv_127x99_Rifle_RecoilProne[] = {0,0.015,0.001,0.03,0.015,-0.002,0.05,0.01,0.005,0.06,0,0};
	ptv_338_Rifle_Recoil[] = {0,0.015,0.017,0.02,0.015,0.017,0.1,0.009,0.017,0.16,0,0};
	ptv_338_Rifle_RecoilProne[] = {0,0.012,0.001,0.03,0.012,-0.002,0.05,0.008,0.005,0.06,0,0};
	ptv_agm_Recoil[] = {0,0.008,0.006,0.01,0.008,0.006,0.04,0.004,0.012,0.12,0,0};
	ptv_agm_RecoilProne[] = {0,0.005,0.004,0.01,0.005,0.004,0.07,0.004,0.001,0.16,0,0};
	ptv_M320GLBase[] = {0,0.03,0.05,0.13,0.01,-0.001,0.26,0,0};
	ptv_9x19_PistolRecoil[] = {0,0.007,0.05,0.005,0.007,0.05,0.09,0,-0.01,0.1,0,0};
	ptv_45ACP_PistolRecoil[] = {0,0.007,0.06,0.005,0.007,0.06,0.09,0,-0.01,0.1,0,0};
	class ptv_recoil_ax
	{
		kickBack[] = {0.06,0.08};
		muzzleInner[] = {0,0,0.1,0.1};
		muzzleOuter[] = {0.5,2.5,0.6,0.5};
		permanent = 0.1;
		temporary = 0.01;
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_762x51_Ball;
	class B_127x99_Ball;
	class RocketBase;
	class GrenadeHand_stone;
	class F_40mm_White;
	class F_40mm_Green;
	class F_40mm_Red;
	class G_40mm_HE;
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class ammo_Penetrator_Base;
	class ptv_m72a7_rocket_base: RocketBase
	{
		model = "\ptv_weapons\launchers\m72a7\ptv_m72a7_rocket";
		hit = 145;
		indirectHit = 19;
		indirectHitRange = 6.1;
		cost = 200;
		explosive = 0.65;
		caliber = 0.8;
		airFriction = 0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 219;
		initTime = 0.1;
		thrustTime = 0;
		thrust = 10;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
	class ptv_m72_penetrator: ammo_Penetrator_Base
	{
		hit = 235;
		caliber = 10;
	};
	class ptv_m72a7_rocket: ptv_m72a7_rocket_base
	{
		submunitionAmmo = "ptv_m72_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1053;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 145;
		indirectHit = 19;
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
	class ptv_40mm_HE: G_40mm_HE
	{
		aiAmmoUsageFlags = "64 + 256";
		hit = 60;
		indirectHit = 5;
		indirectHitRange = 10.7;
	};
	class ptv_40mm_HEDP: ptv_40mm_HE
	{
		aiAmmoUsageFlags = "64 + 128 + 256";
		hit = 95;
		indirectHit = 5;
		indirectHitRange = 3.6;
		submunitionAmmo = "ptv_40mmHEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1053;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class ptv_40mmHEDP_penetrator: ammo_Penetrator_Base
	{
		hit = 90;
		caliber = 3.33333;
	};
	class ptv_B_127x99_Raufoss: B_127x99_Ball
	{
		hit = 36;
		indirectHit = 1.3;
		indirectHitRange = 0.01;
		explosive = 0.1;
		cartridge = "FxCartridge_127";
		deflecting = 5;
		caliber = 3.5;
		typicalSpeed = 880;
	};
	class ptv_B_127x99_Raufoss_Tracer_Red: ptv_B_127x99_Raufoss
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class ptv_762x51_ball: B_762x51_Ball
	{
		airFriction = -0.00100957;
		typicalSpeed = 833;
		hit = 12;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.073;
		tracerEndTime = 2.15957;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700,800,820,833,845};
		ACE_barrelLengths[] = {254,406.4,508,609.6,660.4};
	};
	class ptv_762x51_Barrier: ptv_762x51_ball
	{
		airFriction = -0.00102338;
		caliber = 1.5;
		hit = 14;
		typicalSpeed = 900;
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 8.424;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.377};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {838,892,910};
		ACE_barrelLengths[] = {330.2,406.4,508};
	};
	class ptv_B_86x70_Ball: BulletBase
	{
		hit = 20;
		indirectHit = 3;
		indirectHitRange = 0.01;
		cartridge = "";
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		typicalSpeed = 890;
		cost = 20;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = 2.07;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		tracerStartTime = -1;
		airFriction = -0.00061;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		ACE_caliber = 8.585;
		ACE_bulletLength = 39.573;
		ACE_bulletMass = 16.2;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.322};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {880,915,925};
		ACE_barrelLengths[] = {508,660.4,711.2};
		class CamShakeExplode
		{
			power = 3.16228;
			duration = 0.6;
			frequency = 20;
			distance = 9.48683;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class B_556x45_Ball;
	class ptv_B_556x45_M855_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 9;
		typicalSpeed = 920;
		airFriction = -0.00076;
		caliber = 0.44;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	class ptv_B_556x45_M855_Ball_red: ptv_B_556x45_M855_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class ptv_B_65x25_Ball: B_556x45_Ball
	{
		hit = 10.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		typicalSpeed = 830;
		airFriction = -0.0012744;
		cartridge = "FxCartridge_9mm";
		caliber = 1.5;
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-27.2,-26.44,-23.76,-21,-17.54,-13.1,-7.95,-1.62,6.24,15.48,27.75};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {200};
	};
	class ptv_B_762x39_Ball: BulletBase
	{
		cartridge = "FxCartridge_762x39";
		airLock = 1;
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 730;
		airFriction = -0.0016;
		caliber = 1.2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};
	class ptv_B_45ACP_Ball: BulletBase
	{
		airFriction = -0.001088;
		audiblefire = 18;
		caliber = 0.383;
		cost = 5;
		deflecting = 22;
		typicalSpeed = 292.7;
		hit = 8.43;
		indirecthit = 0;
		indirecthitrange = 0;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 1;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.06;
		visiblefire = 16;
		ACE_caliber = 11.481;
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.195};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {230,250,285};
		ACE_barrelLengths[] = {101.6,127,228.6};
		AB_caliber = 0.452;
		AB_bulletLength = 0.68;
		AB_bulletMass = 230;
		AB_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		AB_ballisticCoefficients[] = {0.195};
		AB_velocityBoundaries[] = {};
		AB_standardAtmosphere = "ASM";
		AB_dragModel = 1;
		AB_muzzleVelocities[] = {230,250,285};
		AB_barrelLengths[] = {4,5,9};
	};
	class B_12Gauge_Pellets;
	class B_12Gauge_Slug;
	class ptv_B_12Gauge_Pellets: B_12Gauge_Pellets
	{
		hit = 20;
		simulation = "shotSubmunitions";
		simulationStep = 0.0001;
		triggerTime = 0.0001;
		triggerSpeedCoef[] = {0.84,1};
		submunitionAmmo = "ptv_B_12Gauge_Pellet";
		submunitionConeType[] = {"poissondisccenter",9};
		submunitionConeAngle = 0.95;
		cartridge = "FxCartridge_slug";
		model = "\A3\weapons_f\empty";
	};
	class ptv_B_12Gauge_Pellet: BulletBase
	{
		hit = 4.75;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.24;
		typicalSpeed = 403.86;
		airFriction = -0.00634;
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class ptv_B_12Gauge_74Slug: B_12Gauge_Slug
	{
		hit = 34.51;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.3048;
		cartridge = "FxCartridge_slug";
		typicalSpeed = 475.49;
		airFriction = -0.002042;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 30Rnd_556x45_Stanag;
	class FakeMagazine;
	class ptv_m72a7_mag: CA_LauncherMagazine
	{
		author = "Project True Viking";
		allowedSlots[] = {801,701,901};
		scope = 1;
		displayName = "M72 HEDP";
		descriptionshort = "Type: High Explosive, Dual Purpose";
		ammo = "ptv_m72a7_rocket";
		picture = "\ptv_weapons\data\ui\m_m72_ca.paa";
		model = "\A3\weapons_f\empty";
		type = "6 * 		256";
		initSpeed = 290;
		mass = 0;
	};
	class ptv_dummy_mag: FakeMagazine
	{
		author = "Project True Viking";
		allowedSlots[] = {801,701,901};
		scope = 1;
		displayName = "M72 HEDP";
		descriptionshort = "Type: High Explosive Anti Tank";
		picture = "\ptv_weapons\data\ui\m_m72_ca.paa";
		model = "\A3\weapons_f\empty";
		ammo = "ptv_m72a7_rocket";
		type = "6 * 		256";
		initSpeed = 290;
		mass = 0;
	};
	class ptv_launcher_dummy_mag: ptv_dummy_mag
	{
		scope = 1;
		count = 0;
	};
	class ptv_50Rnd_762x51_B_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Ball) 50rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_drum.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_drum_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 20;
		displaynameshort = "7.62mm Ball";
	};
	class ptv_50Rnd_762x51_M_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Ball-Tracer Mix) 50rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_drum.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_drum_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 20;
		displaynameshort = "7.62mm Ball/Tracer";
	};
	class ptv_50Rnd_762x51_Barrier_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_Barrier";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Mk319-Tracer Mix) 50rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_drum.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_drum_gnd.p3d";
		initspeed = 815;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 20;
		displaynameshort = "7.62mm Mk.319/Tracer";
	};
	class ptv_50Rnd_762x51_T_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Tracer) 50rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_drum.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_drum_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3tracer_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 20;
		displaynameshort = "7.62mm Tracer";
	};
	class ptv_100Rnd_762x51_B_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Ball) 100rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "ptv_weapons\mags\ptv_mg3_mag_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 48;
		displaynameshort = "7.62mm Ball";
	};
	class ptv_100Rnd_762x51_M_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Ball-Tracer Mix) 100rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "ptv_weapons\mags\ptv_mg3_mag_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 48;
		displaynameshort = "7.62mm Ball/Tracer";
	};
	class ptv_100Rnd_762x51_Barrier_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_Barrier";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Mk319-Tracer Mix) 100rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "ptv_weapons\mags\ptv_mg3_mag_gnd.p3d";
		initspeed = 815;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 48;
		displaynameshort = "7.62mm Mk.319/Tracer";
	};
	class ptv_100Rnd_762x51_T_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Tracer) 100rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "ptv_weapons\mags\ptv_mg3_mag_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3tracer_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 48;
		displaynameshort = "7.62mm Tracer";
	};
	class ptv_250Rnd_762x51_B_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Ball) 250rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_belt.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_can_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 110;
		displaynameshort = "7.62mm Ball";
	};
	class ptv_250Rnd_762x51_M_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Ball-Tracer Mix) 250rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_belt.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_can_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 110;
		displaynameshort = "7.62mm Ball/Tracer";
	};
	class ptv_250Rnd_762x51_Barrier_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_Barrier";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Mk319-Tracer Mix) 250rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_belt.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_can_gnd.p3d";
		initspeed = 815;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 110;
		displaynameshort = "7.62mm Mk.319/Tracer";
	};
	class ptv_250Rnd_762x51_T_MG3: 30Rnd_556x45_Stanag
	{
		author = "Toadie , Project True Viking";
		ammo = "ptv_762x51_ball";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Tracer) 250rnd 7.62mm";
		modelSpecial = "\ptv_weapons\mags\ptv_mg3_belt.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mg3_can_gnd.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\ptv_weapons\data\ui\m_mg3tracer_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 110;
		displaynameshort = "7.62mm Tracer";
	};
	class ptv_1Rnd_HE_Grenade_shell: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		type = 16;
		displayName = "M441 HE Grenade Round";
		displaynameshort = "HE Grenade";
		descriptionshort = "Type: High Explosive Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, Hk69";
		picture = "\ptv_weapons\Data\UI\m_40mm_HE_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_40mm_HE.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_40mm_HE_gnd.p3d";
		ammo = "ptv_40mm_HE";
		initSpeed = 80;
		deleteIfEmpty = 0;
		count = 1;
		nameSound = "";
		mass = 4;
	};
	class ptv_1Rnd_HEDP_Grenade_shell: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		type = 16;
		displayName = "M433 HEDP Grenade Round";
		displaynameshort = "HEDP Grenade";
		descriptionshort = "Type: High Explosive Dual Purpose Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, Hk69";
		picture = "\ptv_weapons\Data\UI\m_40mm_HEDP_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_40mm_HEDP.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_40mm_HEDP_gnd.p3d";
		ammo = "ptv_40mm_HEDP";
		initSpeed = 80;
		deleteIfEmpty = 0;
		count = 1;
		nameSound = "";
		mass = 5;
	};
	class ptv_10Rnd_127x99_m82: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "10Rnd M82a1 Magazine";
		picture = "\ptv_weapons\Data\UI\m_m82a1_ca.paa";
		model = "\ptv_weapons\mags\ptv_m82_mag_gnd.p3d";
		ammo = "B_127x99_Ball";
		count = 10;
		initSpeed = 887;
		descriptionshort = "Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M82";
		mass = 14;
	};
	class ptv_10Rnd_127x99_m82_T_Red: ptv_10Rnd_127x99_m82
	{
		author = "Project True Viking";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "10Rnd M82a1 Red Tracer Magazine";
	};
	class ptv_10Rnd_127x99_m82_Raufoss: ptv_10Rnd_127x99_m82
	{
		author = "Project True Viking";
		ammo = "ptv_B_127x99_Raufoss";
		displayName = "10Rnd M82a1 Raufoss Magazine";
	};
	class ptv_10Rnd_127x99_m82_Raufoss_T_Red: ptv_10Rnd_127x99_m82_Raufoss
	{
		author = "Project True Viking";
		ammo = "ptv_B_127x99_Raufoss_Tracer_Red";
		displayName = "10Rnd M82a1 Raufoss Red Tracer Magazine";
	};
	class ptv_5Rnd_86x70_TRG42: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "5Rnd TRG42 Magazine";
		descriptionshort = "Caliber: .338 Lapua Magnum<br />Rounds: 5<br />Used in: TRG42";
		ammo = "ptv_B_86x70_Ball";
		model = "\ptv_weapons\mags\ptv_trg42_mag_gnd.p3d";
		count = 5;
		initSpeed = 936;
		picture = "\ptv_weapons\Data\UI\m_trg42_ca.paa";
		mass = 9;
	};
	class ptv_10Rnd_86x70_AX: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "10Rnd AX Magazine";
		descriptionshort = "Caliber: .338 Lapua Magnum<br />Rounds: 10<br />Used in: AX";
		ammo = "ptv_B_86x70_Ball";
		count = 10;
		initSpeed = 915;
		picture = "\ptv_weapons\Data\UI\m_ax_ca.paa";
		model = "\ptv_weapons\mags\ptv_ax_mag_gnd.p3d";
		mass = 12;
	};
	class ptv_200Rnd_556x45_M249: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "200Rnd M249 box magazine";
		picture = "\ptv_weapons\Data\UI\m_m249_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_m249_box_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_m249_box_mag_gnd.p3d";
		count = 200;
		type = "2*		256";
		initSpeed = 915;
		tracersEvery = 4;
		lastroundstracer = 10;
		nameSound = "mgun";
		mass = 60;
		descriptionshort = "Caliber: 5.56x45 mm<br />Rounds: 200<br />Used in: M249";
	};
	class ptv_200Rnd_556x45_M249_Tracer_Red: ptv_200Rnd_556x45_M249
	{
		author = "Project True Viking";
		displayName = "200Rnd M249 Red Tracer box magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		tracersEvery = 1;
	};
	class ptv_200Rnd_556x45_M249_b: ptv_200Rnd_556x45_M249
	{
		author = "Project True Viking";
		displayName = "200Rnd M249 Black box magazine";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
		model = "\ptv_weapons\mags\ptv_m249_box_b_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m249\data\ammobox_b_co.paa"};
	};
	class ptv_200Rnd_556x45_M249_b_Tracer_Red: ptv_200Rnd_556x45_M249_Tracer_Red
	{
		author = "Project True Viking";
		displayName = "200Rnd M249 Black Tracer Red box magazine";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
		model = "\ptv_weapons\mags\ptv_m249_box_b_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m249\data\ammobox_b_co.paa"};
	};
	class ptv_200Rnd_556x45_M249_P: ptv_200Rnd_556x45_M249
	{
		author = "Project True Viking";
		displayName = "200Rnd M249 Pouch magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		picture = "\ptv_weapons\Data\UI\m_m249_lpouch_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_m249_lpouch_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_m249_lpouch_mag_gnd.p3d";
	};
	class ptv_200Rnd_556x45_M249_P_Tracer_Red: ptv_200Rnd_556x45_M249_P
	{
		author = "Project True Viking";
		displayName = "200Rnd M249 Red Tracer Pouch magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		tracersEvery = 1;
	};
	class ptv_200Rnd_556x45_M249_P_t: ptv_200Rnd_556x45_M249_P
	{
		author = "Project True Viking";
		displayName = "200Rnd M249 Tan Pouch magazine";
		picture = "\ptv_weapons\Data\UI\m_m249_lpouch_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_m249_lpouch_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m249\data\pouch_t_co.paa"};
	};
	class ptv_200Rnd_556x45_M249_P_t_Tracer_Red: ptv_200Rnd_556x45_M249_P_Tracer_Red
	{
		author = "Project True Viking";
		displayName = "200Rnd M249 Tan Tracer Red box magazine";
		picture = "\ptv_weapons\Data\UI\m_m249_lpouch_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_m249_lpouch_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m249\data\pouch_t_co.paa"};
	};
	class ptv_100Rnd_556x45_M249_P: ptv_200Rnd_556x45_M249
	{
		author = "Project True Viking";
		displayName = "100Rnd M249 Pouch magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		descriptionshort = "Caliber: 5.56x45 mm<br />Rounds: 100<br />Used in: M249";
		picture = "\ptv_weapons\Data\UI\m_m249_pouch_ca.paa";
		count = 100;
		mass = 30;
		modelSpecial = "\ptv_weapons\mags\ptv_m249_pouch_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_m249_pouch_mag_gnd.p3d";
	};
	class ptv_100Rnd_556x45_M249_P_Tracer_Red: ptv_100Rnd_556x45_M249_P
	{
		author = "Project True Viking";
		displayName = "100Rnd M249 Red Tracer Pouch magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		tracersEvery = 1;
	};
	class ptv_100Rnd_556x45_M249_P_t: ptv_100Rnd_556x45_M249_P
	{
		author = "Project True Viking";
		displayName = "100Rnd M249 Tan Pouch magazine";
		picture = "\ptv_weapons\Data\UI\m_m249_pouch_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_m249_pouch_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m249\data\pouch_t_co.paa"};
	};
	class ptv_100Rnd_556x45_M249_P_t_Tracer_Red: ptv_100Rnd_556x45_M249_P_Tracer_Red
	{
		author = "Project True Viking";
		displayName = "100Rnd M249 Tan Tracer Red Pouch magazine";
		picture = "\ptv_weapons\Data\UI\m_m249_pouch_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_m249_pouch_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\m249\data\pouch_t_co.paa"};
	};
	class ptv_150Rnd_556x45_Negev: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "150Rnd Negev magazine";
		picture = "\ptv_weapons\Data\UI\m_negev_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_negev_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_negev_mag_gnd.p3d";
		count = 150;
		type = "2*		256";
		initSpeed = 915;
		tracersEvery = 4;
		lastroundstracer = 10;
		nameSound = "mgun";
		mass = 40;
		descriptionshort = "Caliber: 5.56x45 mm<br />Rounds: 150<br />Used in: Negev";
	};
	class ptv_150Rnd_556x45_Negev_Tracer_Red: ptv_150Rnd_556x45_Negev
	{
		author = "Project True Viking";
		displayName = "150Rnd Negev Red Tracer magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		tracersEvery = 1;
	};
	class ptv_150Rnd_556x45_Negev_b: ptv_150Rnd_556x45_Negev
	{
		author = "Project True Viking";
		displayName = "150Rnd Negev Black magazine";
		picture = "\ptv_weapons\Data\UI\m_negev_b_ca.paa";
		model = "\ptv_weapons\mags\ptv_negev_b_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\negev\data\mag_b_co.paa"};
	};
	class ptv_150Rnd_556x45_Negev_b_Tracer_Red: ptv_150Rnd_556x45_Negev_Tracer_Red
	{
		author = "Project True Viking";
		displayName = "150Rnd Negev Black Tracer Red magazine";
		picture = "\ptv_weapons\Data\UI\m_negev_b_ca.paa";
		model = "\ptv_weapons\mags\ptv_negev_b_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\negev\data\mag_b_co.paa"};
	};
	class ptv_50Rnd_556x45_AG: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "50Rnd Galil magazine";
		picture = "\ptv_weapons\Data\UI\m_ag_50_ca.paa";
		count = 50;
		ammo = "ptv_B_556x45_M855_Ball_Red";
		descriptionshort = "Caliber: 5.56x45 mm<br />Rounds: 50<br />Used in: Galil";
		modelSpecial = "\ptv_weapons\mags\ptv_ag_50_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_ag_50_mag_gnd.p3d";
	};
	class ptv_50Rnd_556x45_AG_Tracer_Red: ptv_50Rnd_556x45_AG
	{
		author = "Project True Viking";
		displayName = "50Rnd Galil Red Tracer magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		tracersEvery = 3;
	};
	class ptv_35Rnd_556x45_AG: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "35Rnd Galil magazine";
		picture = "\ptv_weapons\Data\UI\m_ag_ca.paa";
		count = 35;
		ammo = "ptv_B_556x45_M855_Ball_Red";
		descriptionshort = "Caliber: 5.56x45 mm<br />Rounds: 35<br />Used in: Galil";
		modelSpecial = "\ptv_weapons\mags\ptv_ag_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_ag_mag_gnd.p3d";
	};
	class ptv_35Rnd_556x45_AG_Tracer_Red: ptv_35Rnd_556x45_AG
	{
		author = "Project True Viking";
		displayName = "35Rnd Galil Red Tracer magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_35Rnd_556x45_AG_s: ptv_35Rnd_556x45_AG
	{
		author = "Project True Viking";
		displayName = "35Rnd Galil Silver magazine";
		picture = "\ptv_weapons\Data\UI\m_ag_s_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_ag_s_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_ag_s_mag_gnd.p3d";
	};
	class ptv_35Rnd_556x45_AG_s_Tracer_Red: ptv_35Rnd_556x45_AG_s
	{
		author = "Project True Viking";
		displayName = "35Rnd Galil Red Tracer Silver magazine";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_762x39_RK: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd RK magazine";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_762x39_Mag_F1";
		ammo = "ptv_B_762x39_Ball";
		count = 30;
		initSpeed = 715;
		picture = "\ptv_weapons\Data\UI\m_rk_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_rk_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_rk_mag_gnd.p3d";
		tracersEvery = 0;
		lastRoundsTracer = 4;
		mass = 10;
	};
	class ptv_30Rnd_762x39_RK_Tracer_Red: ptv_30Rnd_762x39_RK
	{
		author = "Project True Viking";
		displayName = "30Rnd RK Red Tracer magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Magazine";
		picture = "\ptv_weapons\Data\UI\m_stanag_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_stanag_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_stanag_mag_gnd.p3d";
	};
	class ptv_30Rnd_556x45_Stanag_g: ptv_30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Gray Magazine";
		picture = "\ptv_weapons\Data\UI\m_stanag_g_ca.paa";
		model = "\ptv_weapons\mags\ptv_stanag_g_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\stanag_g_co.paa"};
	};
	class ptv_30Rnd_556x45_Stanag_t: ptv_30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Tan Magazine";
		picture = "\ptv_weapons\Data\UI\m_stanag_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_stanag_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\stanag_t_co.paa"};
	};
	class ptv_30Rnd_556x45_Stanag_pull: ptv_30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Pull Magazine";
		picture = "\ptv_weapons\Data\UI\m_stanag_pull_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_stanag_pull_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_stanag_pull_mag_gnd.p3d";
	};
	class ptv_30Rnd_556x45_Stanag_pull_t: ptv_30Rnd_556x45_Stanag_pull
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Pull Tan Magazine";
		picture = "\ptv_weapons\Data\UI\m_stanag_pull_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_stanag_pull_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\magpull_t_co.paa"};
	};
	class ptv_30Rnd_556x45_Stanag_pull_g: ptv_30Rnd_556x45_Stanag_pull
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Pull Green Magazine";
		picture = "\ptv_weapons\Data\UI\m_stanag_pull_g_ca.paa";
		model = "\ptv_weapons\mags\ptv_stanag_pull_g_mag_gnd.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\magpull_g_co.paa"};
	};
	class ptv_30Rnd_556x45_Stanag_Red: ptv_30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Stanag_g_Red: ptv_30Rnd_556x45_Stanag_g
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Red Tracer Grey Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Stanag_t_Red: ptv_30Rnd_556x45_Stanag_t
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Red Tracer Tan Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Stanag_pull_Red: ptv_30Rnd_556x45_Stanag_pull
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Pull Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Stanag_pull_t_Red: ptv_30Rnd_556x45_Stanag_pull_t
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Pull Tan Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Stanag_pull_g_Red: ptv_30Rnd_556x45_Stanag_pull_g
	{
		author = "Project True Viking";
		displayName = "30rnd STANAG Pull Green Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_40Rnd_556x45_Pmag: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "40rnd PMAG Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmag_40_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		count = 40;
		mass = 10;
		modelSpecial = "\ptv_weapons\mags\ptv_pmag_40_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_pmag_40_mag_gnd.p3d";
	};
	class ptv_40Rnd_556x45_Pmag_g: ptv_40Rnd_556x45_Pmag
	{
		author = "Project True Viking";
		displayName = "40rnd PMAG Green Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmag_40_g_ca.paa";
		model = "\ptv_weapons\mags\ptv_pmag_40_g_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\pmag_40_g_co.paa"};
	};
	class ptv_40Rnd_556x45_Pmag_t: ptv_40Rnd_556x45_Pmag
	{
		author = "Project True Viking";
		displayName = "40rnd PMAG Tan Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmag_40_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_pmag_40_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\pmag_40_t_co.paa"};
	};
	class ptv_40Rnd_556x45_Pmag_Red: ptv_40Rnd_556x45_Pmag
	{
		author = "Project True Viking";
		displayName = "40rnd PMAG Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_40Rnd_556x45_Pmag_g_Red: ptv_40Rnd_556x45_Pmag_g
	{
		author = "Project True Viking";
		displayName = "40rnd PMAG Red Tracer Green Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_40Rnd_556x45_Pmag_t_Red: ptv_40Rnd_556x45_Pmag_t
	{
		author = "Project True Viking";
		displayName = "40rnd PMAG Red Tracer Tan Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Pmag: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd PMAG Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmag_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_pmag_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_pmag_mag_gnd.p3d";
	};
	class ptv_30Rnd_556x45_Pmag_g: ptv_30Rnd_556x45_Pmag
	{
		author = "Project True Viking";
		displayName = "30rnd PMAG Green Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmag_g_ca.paa";
		model = "\ptv_weapons\mags\ptv_pmag_g_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\pmag_30_g_co.paa"};
	};
	class ptv_30Rnd_556x45_Pmag_t: ptv_30Rnd_556x45_Pmag
	{
		author = "Project True Viking";
		displayName = "30rnd PMAG Tan Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmag_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_pmag_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\pmag_30_t_co.paa"};
	};
	class ptv_30Rnd_556x45_Pmag_Red: ptv_30Rnd_556x45_Pmag
	{
		author = "Project True Viking";
		displayName = "30rnd PMAG Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Pmag_g_Red: ptv_30Rnd_556x45_Pmag_g
	{
		author = "Project True Viking";
		displayName = "30rnd PMAG Red Tracer Green Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Pmag_t_Red: ptv_30Rnd_556x45_Pmag_t
	{
		author = "Project True Viking";
		displayName = "30rnd PMAG Red Tracer Tan Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Pmagw: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd PMAGW Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmagw_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_pmagw_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_pmagw_mag_gnd.p3d";
	};
	class ptv_30Rnd_556x45_Pmagw_g: ptv_30Rnd_556x45_Pmagw
	{
		author = "Project True Viking";
		displayName = "30rnd PMAGW Green Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmagw_g_ca.paa";
		model = "\ptv_weapons\mags\ptv_pmagw_g_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\pmag_30w_g_co.paa"};
	};
	class ptv_30Rnd_556x45_Pmagw_t: ptv_30Rnd_556x45_Pmagw
	{
		author = "Project True Viking";
		displayName = "30rnd PMAGW Tan Magazine";
		picture = "\ptv_weapons\Data\UI\m_pmagw_g_ca.paa";
		model = "\ptv_weapons\mags\ptv_pmagw_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\pmag_30w_t_co.paa"};
	};
	class ptv_30Rnd_556x45_Pmagw_Red: ptv_30Rnd_556x45_Pmagw
	{
		author = "Project True Viking";
		displayName = "30rnd PMAGW Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Pmagw_g_Red: ptv_30Rnd_556x45_Pmagw_g
	{
		author = "Project True Viking";
		displayName = "30rnd PMAGW Red Tracer Green Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_Pmagw_t_Red: ptv_30Rnd_556x45_Pmagw_t
	{
		author = "Project True Viking";
		displayName = "30rnd PMAGW Red Tracer Tan Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_L5awm: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Magazine";
		picture = "\ptv_weapons\Data\UI\m_l5awm_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_l5awm_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_l5awm_mag_gnd.p3d";
	};
	class ptv_30Rnd_556x45_L5awm_g: ptv_30Rnd_556x45_L5awm
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Green Magazine";
		picture = "\ptv_weapons\Data\UI\m_l5awm_g_ca.paa";
		model = "\ptv_weapons\mags\ptv_l5awm_g_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\l5awm_g_co.paa"};
	};
	class ptv_30Rnd_556x45_L5awm_t: ptv_30Rnd_556x45_L5awm
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Tan Magazine";
		picture = "\ptv_weapons\Data\UI\m_l5awm_t_ca.paa";
		model = "\ptv_weapons\mags\ptv_l5awm_t_mag_gnd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\mags\data\l5awm_t_co.paa"};
	};
	class ptv_30Rnd_556x45_L5awm_Red: ptv_30Rnd_556x45_L5awm
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_L5awm_g_Red: ptv_30Rnd_556x45_L5awm_g
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Red Tracer Green Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_L5awm_t_Red: ptv_30Rnd_556x45_L5awm_t
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Red Tracer Tan Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_L5awmc: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Clear Magazine";
		picture = "\ptv_weapons\Data\UI\m_l5awmc_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_l5awmc_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_l5awmc_mag_gnd.p3d";
	};
	class ptv_30Rnd_556x45_L5awmc_Red: ptv_30Rnd_556x45_L5awmc
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Clear Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_30Rnd_556x45_L5awmc_pull: 30Rnd_556x45_Stanag
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Clear Pull Magazine";
		picture = "\ptv_weapons\Data\UI\m_l5awmc_ca.paa";
		ammo = "ptv_B_556x45_M855_Ball_Red";
		modelSpecial = "\ptv_weapons\mags\ptv_l5awmc_pull_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_l5awmc_pull_mag_gnd.p3d";
	};
	class ptv_30Rnd_556x45_L5awmc_pull_Red: ptv_30Rnd_556x45_L5awmc_pull
	{
		author = "Project True Viking";
		displayName = "30rnd L5AWM Clear Pull Red Tracer Magazine";
		tracersEvery = 3;
		lastroundstracer = 2;
	};
	class ptv_8Rnd_B_Beneli_74Slug: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "8Rnd. M1014 Slug";
		model = "\ptv_weapons\mags\ptv_bm4_slugs_gnd.p3d";
		ammo = "ptv_B_12Gauge_74Slug";
		count = 8;
		initSpeed = 475;
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 8<br />Used in: M1014";
		mass = 8;
	};
	class ptv_8Rnd_B_Beneli_74Pellets: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "8Rnd. M1014 Pellets";
		model = "\ptv_weapons\mags\ptv_bm4_shells_gnd.p3d";
		ammo = "ptv_B_12Gauge_Pellets";
		count = 8;
		initSpeed = 403;
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 8<br />Used in: M1014";
		mass = 8;
	};
	class ptv_30Rnd_9x19_MP9_Mag: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd MP9 9mm magazine";
		picture = "\ptv_weapons\Data\UI\m_mp9_30_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_mp9_30_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mp9_30_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 30;
		mass = 10;
		initSpeed = 420;
		tracersEvery = 0;
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: MP9";
	};
	class ptv_30Rnd_9x19_Red_MP9_Mag: ptv_30Rnd_9x19_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd MP9 Tracer 9mm magazine";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class ptv_30Rnd_9x19_Sub_MP9_Mag: ptv_30Rnd_9x19_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd MP9 Subsonic 9mm magazine";
		initSpeed = 320;
	};
	class ptv_20Rnd_9x19_MP9_Mag: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "20Rnd MP9 9mm magazine";
		picture = "\ptv_weapons\Data\UI\m_mp9_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_mp9_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mp9_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 20;
		mass = 8;
		initSpeed = 420;
		tracersEvery = 0;
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 20<br />Used in: MP9";
	};
	class ptv_20Rnd_9x19_Red_MP9_Mag: ptv_20Rnd_9x19_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "20Rnd MP9 Tracer 9mm magazine";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};
	class ptv_20Rnd_9x19_Sub_MP9_Mag: ptv_20Rnd_9x19_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "20Rnd MP9 Subsonic 9mm magazine";
		initSpeed = 320;
	};
	class ptv_30Rnd_65x25_MP9_Mag: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd MP9 CBJ magazine";
		picture = "\ptv_weapons\Data\UI\m_mp9_30_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_mp9_30_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mp9_30_mag_gnd.p3d";
		ammo = "ptv_B_65x25_Ball";
		count = 30;
		mass = 10;
		initSpeed = 820;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionshort = "Caliber: 6.5x25 mm CBJ<br />Rounds: 30<br />Used in: MP9 CBJ";
	};
	class ptv_30Rnd_65x25_Red_MP9_Mag: ptv_30Rnd_65x25_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd MP9 Tracer CBJ magazine";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class ptv_30Rnd_65x25_Sub_MP9_Mag: ptv_30Rnd_65x25_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd MP9 Subsonic CBJ magazine";
		initSpeed = 320;
	};
	class ptv_20Rnd_65x25_MP9_Mag: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "20Rnd MP9 CBJ magazine";
		picture = "\ptv_weapons\Data\UI\m_mp9_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_mp9_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_mp9_mag_gnd.p3d";
		ammo = "ptv_B_65x25_Ball";
		count = 20;
		mass = 10;
		initSpeed = 820;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionshort = "Caliber: 6.5x25 mm CBJ<br />Rounds: 20<br />Used in: MP9 CBJ";
	};
	class ptv_20Rnd_65x25_Red_MP9_Mag: ptv_20Rnd_65x25_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "20Rnd MP9 Tracer CBJ magazine";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};
	class ptv_20Rnd_65x25_Sub_MP9_Mag: ptv_20Rnd_65x25_MP9_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "20Rnd MP9 Subsonic CBJ magazine";
		initSpeed = 320;
	};
	class ptv_30Rnd_9x19_CBJ_Mag: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd CBJ-MS 9mm magazine";
		picture = "\ptv_weapons\Data\UI\m_cbj_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_cbj_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_cbj_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 30;
		mass = 10;
		initSpeed = 420;
		tracersEvery = 0;
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 30<br />Used in: CBJ-MS";
	};
	class ptv_30Rnd_9x19_Red_CBJ_Mag: ptv_30Rnd_9x19_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd CBJ-MS Tracer 9mm magazine";
		modelSpecial = "\ptv_weapons\mags\ptv_cbj_mag.p3d";
		modelSpecialIsProxy = 1;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class ptv_100Rnd_9x19_CBJ_Mag: ptv_30Rnd_9x19_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "100Rnd CBJ-MS 9mm magazine";
		picture = "\ptv_weapons\Data\UI\m_cbj_drum_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_cbj_drum_mag.p3d";
		model = "\ptv_weapons\mags\ptv_cbj_drum_mag_gnd.p3d";
		count = 100;
		mass = 20;
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 100<br />Used in: CBJ-MS";
	};
	class ptv_100Rnd_9x19_Red_CBJ_Mag: ptv_100Rnd_9x19_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "100Rnd CBJ-MS Tracer 9mm magazine";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};
	class ptv_30Rnd_65x25_CBJ_Mag: CA_Magazine
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd CBJ-MS magazine";
		picture = "\ptv_weapons\Data\UI\m_cbj_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_cbj_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_cbj_mag_gnd.p3d";
		ammo = "ptv_B_65x25_Ball";
		count = 30;
		mass = 10;
		initSpeed = 820;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionshort = "Caliber: 6.5x25 mm CBJ<br />Rounds: 30<br />Used in: CBJ-MS";
	};
	class ptv_30Rnd_65x25_Red_CBJ_Mag: ptv_30Rnd_65x25_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd CBJ-MS Tracer magazine";
		modelSpecial = "\ptv_weapons\mags\ptv_cbj_mag.p3d";
		modelSpecialIsProxy = 1;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class ptv_100Rnd_65x25_CBJ_Mag: ptv_30Rnd_65x25_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "100Rnd CBJ-MS magazine";
		picture = "\ptv_weapons\Data\UI\m_cbj_drum_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_cbj_drum_mag.p3d";
		model = "\ptv_weapons\mags\ptv_cbj_drum_mag_gnd.p3d";
		count = 100;
		mass = 20;
		descriptionshort = "Caliber: 6.5x25 mm CBJ<br />Rounds: 100<br />Used in: CBJ-MS";
	};
	class ptv_100Rnd_65x25_Red_CBJ_Mag: ptv_100Rnd_65x25_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "100Rnd CBJ-MS Tracer magazine";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};
	class ptv_30Rnd_65x25_Sub_CBJ_Mag: ptv_30Rnd_65x25_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd CBJ-MS Subsonic magazine";
		initSpeed = 320;
	};
	class ptv_100Rnd_65x25_Sub_CBJ_Mag: ptv_100Rnd_65x25_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "100Rnd CBJ-MS Subsonic magazine";
		initSpeed = 320;
	};
	class ptv_30Rnd_9x19_Sub_CBJ_Mag: ptv_30Rnd_9x19_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "30Rnd CBJ-MS Subsonic 9mm magazine";
		initSpeed = 320;
	};
	class ptv_100Rnd_9x19_Sub_CBJ_Mag: ptv_100Rnd_9x19_CBJ_Mag
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "100Rnd CBJ-MS Subsonic 9mm magazine";
		initSpeed = 320;
	};
	class ptv_15Rnd_9mm_G19: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "15Rnd G19 magazine";
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 15<br />Used in: G19";
		picture = "\A3\weapons_f\data\ui\m_16rnd_9x21_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_g19_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_g19_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 15;
		mass = 6;
		initSpeed = 375;
	};
	class ptv_17Rnd_9mm_G17: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "17Rnd G17 magazine";
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 17<br />Used in: G17";
		picture = "\A3\weapons_f\data\ui\m_16rnd_9x21_ca.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_g17_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_g17_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 17;
		mass = 6;
		initSpeed = 375;
	};
	class ptv_33Rnd_9mm_G17: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "33Rnd G17 magazine";
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 33<br />Used in: G17";
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		modelSpecial = "\ptv_weapons\mags\ptv_g17_33_mag.p3d";
		modelSpecialIsProxy = 1;
		model = "\ptv_weapons\mags\ptv_g17_33_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 33;
		mass = 10;
		initSpeed = 375;
	};
	class ptv_17Rnd_9mm_L9A2: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "17Rnd L9A2 magazine";
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 17<br />Used in: L9A2";
		picture = "\ptv_weapons\Data\UI\m_l9a2_ca.paa";
		model = "\ptv_weapons\mags\ptv_l9a2_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 17;
		mass = 6;
		initSpeed = 375;
	};
	class ptv_15Rnd_9mm_P320: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "15Rnd P320 magazine";
		descriptionshort = "Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P320";
		picture = "\ptv_weapons\Data\UI\m_p320_ca.paa";
		model = "\ptv_weapons\mags\ptv_p320_mag_gnd.p3d";
		ammo = "B_9x21_Ball";
		count = 15;
		mass = 6;
		initSpeed = 375;
	};
	class ptv_12Rnd_45ACP_USP: CA_Magazine
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "12Rnd USP45 magazine";
		descriptionshort = "Caliber: .45 ACP<br />Rounds: 12<br />Used in: USP45";
		picture = "\ptv_weapons\Data\UI\m_usp45_ca.paa";
		ammo = "B_45ACP_Ball";
		count = 12;
		initSpeed = 300;
		mass = 7;
	};
};
class CfgMagazineWells
{
	class GALIL_556x45
	{
		PTV_Magazines[] = {"ptv_35Rnd_556x45_AG","ptv_35Rnd_556x45_AG_Tracer_Red","ptv_35Rnd_556x45_AG_s","ptv_35Rnd_556x45_AG_s_Tracer_Red","ptv_50Rnd_556x45_AG","ptv_50Rnd_556x45_AG_Tracer_Red"};
	};
	class STANAG_556x45
	{
		PTV_Magazines[] = {"ptv_30Rnd_556x45_Stanag","ptv_30Rnd_556x45_Stanag_g","ptv_30Rnd_556x45_Stanag_t","ptv_30Rnd_556x45_Stanag_pull","ptv_30Rnd_556x45_Stanag_pull_t","ptv_30Rnd_556x45_Stanag_pull_g","ptv_30Rnd_556x45_Stanag_Red","ptv_30Rnd_556x45_Stanag_g_Red","ptv_30Rnd_556x45_Stanag_t_Red","ptv_30Rnd_556x45_Stanag_pull_Red","ptv_30Rnd_556x45_Stanag_pull_t_Red","ptv_30Rnd_556x45_Stanag_pull_g_Red","ptv_40Rnd_556x45_Pmag","ptv_40Rnd_556x45_Pmag_g","ptv_40Rnd_556x45_Pmag_t","ptv_40Rnd_556x45_Pmag_Red","ptv_40Rnd_556x45_Pmag_g_Red","ptv_40Rnd_556x45_Pmag_t_Red","ptv_30Rnd_556x45_Pmag","ptv_30Rnd_556x45_Pmag_g","ptv_30Rnd_556x45_Pmag_t","ptv_30Rnd_556x45_Pmag_Red","ptv_30Rnd_556x45_Pmag_g_Red","ptv_30Rnd_556x45_Pmag_t_Red","ptv_30Rnd_556x45_Pmagw","ptv_30Rnd_556x45_Pmagw_g","ptv_30Rnd_556x45_Pmagw_t","ptv_30Rnd_556x45_Pmagw_Red","ptv_30Rnd_556x45_Pmagw_g_Red","ptv_30Rnd_556x45_Pmagw_t_Red","ptv_30Rnd_556x45_L5awm","ptv_30Rnd_556x45_L5awm_g","ptv_30Rnd_556x45_L5awm_t","ptv_30Rnd_556x45_L5awm_Red","ptv_30Rnd_556x45_L5awm_g_Red","ptv_30Rnd_556x45_L5awm_t_Red","ptv_30Rnd_556x45_L5awmc","ptv_30Rnd_556x45_L5awmc_Red","ptv_30Rnd_556x45_L5awmc_pull","ptv_30Rnd_556x45_L5awmc_pull_Red"};
	};
	class M249_556x49
	{
		PTV_Magazines[] = {"ptv_200Rnd_556x45_M249","ptv_200Rnd_556x45_M249_Tracer_Red","ptv_200Rnd_556x45_M249_b","ptv_200Rnd_556x45_M249_b_Tracer_Red","ptv_200Rnd_556x45_M249_P","ptv_200Rnd_556x45_M249_P_Tracer_Red","ptv_200Rnd_556x45_M249_P_t","ptv_200Rnd_556x45_M249_P_t_Tracer_Red","ptv_100Rnd_556x45_M249_P","ptv_100Rnd_556x45_M249_P_Tracer_Red","ptv_100Rnd_556x45_M249_P_t","ptv_100Rnd_556x45_M249_P_t_Tracer_Red"};
	};
	class M240_762x51
	{
		PTV_Magazines[] = {"ptv_100Rnd_762x51_B_M60","ptv_100Rnd_762x51_M_M60","ptv_100Rnd_762x51_Barrier_M60","ptv_100Rnd_762x51_T_M60"};
	};
	class CBA_338LM_AI
	{
		PTV_Magazines[] = {"ptv_10Rnd_86x70_AX"};
	};
	class CBA_50BMG_M107
	{
		PTV_Magazines[] = {"ptv_10Rnd_127x99_m82","ptv_10Rnd_127x99_m82_T_Red","ptv_10Rnd_127x99_m82_Raufoss","ptv_10Rnd_127x99_m82_Raufoss_T_Red"};
	};
	class UGL_40x36
	{
		PTV_Magazines[] = {"ptv_1Rnd_HE_Grenade_shell","ptv_1Rnd_HEDP_Grenade_shell"};
	};
};
class CfgOpticsEffect
{
	class ptv_ta11_Blur
	{
		type = "radialblur";
		priority = 100;
		params[] = {0.001,0,0,0};
	};
	class ptv_3xmag_Blur
	{
		type = "radialblur";
		priority = 100;
		params[] = {0.001,0,0,0};
	};
	class ptv_sdr_Blur
	{
		type = "radialblur";
		priority = 100;
		params[] = {0.001,0,0,0};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class asdg_SlotInfo;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_MuzzleSlot_338;
class PTV_gripod_slot: UnderBarrelSlot
{
	displayName = "Gripod slot";
	class compatibleItems
	{
		ptv_acc_grip1 = 1;
		ptv_acc_grip2 = 1;
		ptv_acc_grip3 = 1;
		ptv_acc_grip4 = 1;
		ptv_acc_grip1_t = 1;
		ptv_acc_grip2_t = 1;
		ptv_acc_grip3_t = 1;
		ptv_acc_grip4_t = 1;
	};
	linkProxy = "\ptv_weapons\acc\grips\PTV_grip_proxy";
};
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		ptv_SFM952V = 1;
		ptv_SFM952V_des = 1;
		ptv_dbala2 = 1;
		ptv_dbala2_vl = 1;
		ptv_dbalsf = 1;
		ptv_dbalsf_vl = 1;
		ptv_dbalsf_fl = 1;
		ptv_peq2 = 1;
		ptv_peq2sf = 1;
		ptv_peq2sf_l = 1;
		ptv_peq2sf_des = 1;
		ptv_peq2sf_des_l = 1;
		ptv_flash = 1;
		ptv_LLM = 1;
		ptv_LLM_light = 1;
		ptv_LLM_laser = 1;
		ptv_LLM_des = 1;
		ptv_LLM_des_light = 1;
		ptv_LLM_des_laser = 1;
		ptv_LLM01 = 1;
		ptv_LLM01_light = 1;
		ptv_LLM01_laser = 1;
	};
};
class asdg_PistolUnderRail: asdg_SlotInfo
{
	class compatibleItems
	{
		ptv_x300 = 1;
		ptv_x300_des = 1;
		ptv_M6X = 1;
		ptv_M6X_vl = 1;
		ptv_dbalpl = 1;
		ptv_dbalpl_vl = 1;
		ptv_dbalpl_fl = 1;
		ptv_dbalpl_t = 1;
		ptv_dbalpl_t_vl = 1;
		ptv_dbalpl_t_fl = 1;
	};
};
class asdg_OpticRail;
class asdg_PistolOpticMount: asdg_OpticRail
{
	class compatibleItems
	{
		ptv_romeo1pro = 1;
	};
};
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		ptv_rmr = 1;
		ptv_rmr_des = 1;
		ptv_rmr_wdl = 1;
		ptv_compm4s = 1;
		ptv_cm4s3xmag = 1;
		ptv_cm4s3xmag_f = 1;
		ptv_cm4s3xmag_pip = 1;
		ptv_cm4s3xmag_pf = 1;
		ptv_compm5 = 1;
		ptv_compm5s = 1;
		ptv_cm53xmag = 1;
		ptv_cm53xmag_f = 1;
		ptv_cm53xmag_pip = 1;
		ptv_cm53xmag_pf = 1;
		ptv_cm5s3xmag = 1;
		ptv_cm5s3xmag_f = 1;
		ptv_cm5s3xmag_pip = 1;
		ptv_cm5s3xmag_pf = 1;
		ptv_aimcs = 1;
		ptv_aimcs2 = 1;
		ptv_aim3xmag = 1;
		ptv_aim3xmag_f = 1;
		ptv_eot552 = 1;
		ptv_xps3 = 1;
		ptv_xps3_des = 1;
		ptv_xps3xmag = 1;
		ptv_xps3xmag_f = 1;
		ptv_xps3xmag_pip = 1;
		ptv_xps3xmag_pf = 1;
		ptv_xps3xmag_des = 1;
		ptv_xps3xmag_des_f = 1;
		ptv_xps3xmag_des_pip = 1;
		ptv_xps3xmag_des_pf = 1;
		ptv_c79 = 1;
		ptv_c79_2D = 1;
		ptv_c79_pip = 1;
		ptv_m145 = 1;
		ptv_m145_2D = 1;
		ptv_m145_pip = 1;
		ptv_PMII = 1;
		ptv_PMII_sunshade = 1;
		ptv_PMII_des = 1;
		ptv_PMII_des_sunshade = 1;
		ptv_PMII_wdl = 1;
		ptv_PMII_wdl_sunshade = 1;
		ptv_PMII_rmr = 1;
		ptv_PMII_rmr_sunshade = 1;
		ptv_PMII_rmr_des = 1;
		ptv_PMII_rmr_des_sunshade = 1;
		ptv_PMII_rmr_wdl = 1;
		ptv_PMII_rmr_wdl_sunshade = 1;
		ptv_PMII_525 = 1;
		ptv_PMII_525_des = 1;
		ptv_PMII_525_wdl = 1;
		ptv_t1 = 1;
		ptv_t1s = 1;
		ptv_t13xmag = 1;
		ptv_t13xmag_f = 1;
		ptv_t1s3xmag = 1;
		ptv_t1s3xmag_f = 1;
		ptv_t13xmag_pip = 1;
		ptv_t13xmag_pf = 1;
		ptv_t1s3xmag_pip = 1;
		ptv_t1s3xmag_pf = 1;
		ptv_ta11 = 1;
		ptv_ta11_2D = 1;
		ptv_ta11_2Dpip = 1;
		ptv_ta11_pip = 1;
		ptv_ta11rmr = 1;
		ptv_ta11rmr_2D = 1;
		ptv_ta11rmr_2Dpip = 1;
		ptv_ta11rmr_pip = 1;
		ptv_ta02led = 1;
		ptv_ta02led_2D = 1;
		ptv_ta02led_2Dpip = 1;
		ptv_ta02led_pip = 1;
		ptv_ta02led_rmr = 1;
		ptv_ta02led_rmr_2D = 1;
		ptv_ta02led_rmr_2Dpip = 1;
		ptv_ta02led_rmr_pip = 1;
		ptv_ta648 = 1;
		ptv_ta648_pip = 1;
		ptv_ta648_rmr = 1;
		ptv_zo = 1;
		ptv_zo_rmr = 1;
		ptv_zos = 1;
		ptv_zos_rmr = 1;
		ptv_specterdr = 1;
		ptv_specterdr_2D = 1;
		ptv_specterdr_pip = 1;
		ptv_specterdr_des = 1;
		ptv_specterdr_des_2D = 1;
		ptv_specterdr_des_pip = 1;
		ptv_specterdr_rmr = 1;
		ptv_specterdr_rmr_2D = 1;
		ptv_specterdr_rmr_pip = 1;
		ptv_specterdr_rmr_des = 1;
		ptv_specterdr_rmr_des_2D = 1;
		ptv_specterdr_rmr_des_pip = 1;
		ptv_specterdr6 = 1;
		ptv_specterdr6_2D = 1;
		ptv_specterdr6_pip = 1;
		ptv_specterdr6_des = 1;
		ptv_specterdr6_des_2D = 1;
		ptv_specterdr6_des_pip = 1;
		ptv_specterdr6_rmr = 1;
		ptv_specterdr6_rmr_2D = 1;
		ptv_specterdr6_rmr_pip = 1;
		ptv_specterdr6_rmr_des = 1;
		ptv_specterdr6_rmr_des_2D = 1;
		ptv_specterdr6_rmr_des_pip = 1;
		ptv_shortdot = 1;
		ptv_shortdot_wdl = 1;
		ptv_shortdot_des = 1;
		ptv_shortdot_pip = 1;
		ptv_shortdot_wdl_pip = 1;
		ptv_shortdot_des_pip = 1;
		ptv_shortdot_dcc = 1;
		ptv_shortdot_dcc_wdl = 1;
		ptv_shortdot_dcc_des = 1;
		ptv_shortdot_dcc_pip = 1;
		ptv_shortdot_dcc_wdl_pip = 1;
		ptv_shortdot_dcc_des_pip = 1;
		ptv_s3x = 1;
		ptv_s3x_des = 1;
		ptv_s3x_wdl = 1;
		ptv_CWS = 1;
		ptv_vipir2 = 1;
		ptv_vipir2p = 1;
	};
};
class CBA_PIPItems
{
	ptv_ta11_2d = "ptv_ta11_2Dpip";
	ptv_ta11rmr_2D = "ptv_ta11rmr_2DPiP";
	ptv_ta02led_2d = "ptv_ta02led_2Dpip";
	ptv_ta02led_rmr_2d = "ptv_ta02led_rmr_2Dpip";
	ptv_m145 = "ptv_m145_PiP";
	ptv_s3x = "ptv_s3x_PiP";
	ptv_s3x_des = "ptv_s3x_des_PiP";
	ptv_s3x_wdl = "ptv_s3x_wdl_PiP";
	ptv_specterdr_2d = "ptv_specterdr_PiP";
	ptv_specterdr_des_2d = "ptv_specterdr_des_PiP";
	ptv_specterdr_rmr_2d = "ptv_specterdr_rmr_PiP";
	ptv_specterdr_rmr_des_2d = "ptv_specterdr_rmr_des_PiP";
	ptv_specterdr6_2d = "ptv_specterdr6_PiP";
	ptv_specterdr6_des_2d = "ptv_specterdr6_des_PiP";
	ptv_specterdr6_rmr_2d = "ptv_specterdr6_rmr_PiP";
	ptv_specterdr6_rmr_des_2d = "ptv_specterdr6_rmr_des_PiP";
	ptv_shortdot = "ptv_shortdot_PiP";
	ptv_shortdot_wdl = "ptv_shortdot_wdl_PiP";
	ptv_shortdot_des = "ptv_shortdot_des_PiP";
	ptv_shortdot_dcc = "ptv_shortdot_dcc_PiP";
	ptv_shortdot_dcc_wdl = "ptv_shortdot_dcc_wdl_PiP";
	ptv_shortdot_dcc_des = "ptv_shortdot_dcc_des_PiP";
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ptv_rotex308 = 1;
	};
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ptv_rotex = 1;
		ptv_rotex2 = 1;
		ptv_rotexs = 1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ptv_trant9 = 1;
		ptv_impuls = 1;
	};
};
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ptv_trant9 = 1;
		ptv_impuls = 1;
	};
};
class asdg_MuzzleSlot_45ACP: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ptv_trant45 = 1;
	};
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		ptv_trant45 = 1;
	};
};
class asdg_UnderSlot: asdg_SlotInfo
{
	class compatibleItems
	{
		ptv_hbrs = 1;
		ptv_1a2 = 1;
	};
};
class CfgSounds
{
	class ptv_bolt_AX
	{
		name = "ptv_bolt_AX";
		Sound[] = {"ptv_weapons\sound\ax\ax_rechamber",1,1,15};
		titles[] = {};
	};
};
class CfgWeapons
{
	class Default;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryUnderItem_Base_F;
	class muzzle_snds_M;
	class muzzle_snds_H;
	class muzzle_snds_H_MG;
	class muzzle_snds_B;
	class acc_pointer_IR;
	class acc_flashlight;
	class acc_flashlight_pistol;
	class optic_Holosight;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class bipod_01_F_snd;
	class ptv_acc_grip1: bipod_01_F_snd
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_vg.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_vg_ca.paa";
		displayName = "Vertical Grip";
		descriptionShort = "VG";
		weaponInfoType = "PTV_Gripod1";
		class ItemInfo
		{
			deployedPivot = "bipod";
			hasBipod = 0;
			mass = 10;
			type = 302;
		};
		inertia = -0.2;
		type = 131072;
		ptv_grip_type = "ptv_grip1_change";
	};
	class ptv_acc_grip1_t: ptv_acc_grip1
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_vg_t.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_vg_t_ca.paa";
		displayName = "Vertical Grip (Tan)";
		descriptionShort = "VG Tan";
	};
	class ptv_acc_grip2: bipod_01_F_snd
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_vgs.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_vgs_ca.paa";
		displayName = "Vertical Grip Short";
		descriptionShort = "VGS";
		weaponInfoType = "PTV_Gripod1";
		class ItemInfo
		{
			deployedPivot = "bipod";
			hasBipod = 0;
			mass = 10;
			type = 302;
		};
		inertia = -0.2;
		type = 131072;
		ptv_grip_type = "ptv_grip1_change";
	};
	class ptv_acc_grip2_t: ptv_acc_grip2
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_vgs_t.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_vgs_t_ca.paa";
		displayName = "Vertical Grip Short (Tan)";
		descriptionShort = "VGS Tan";
	};
	class ptv_acc_grip3: bipod_01_F_snd
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_gp.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_gp_ca.paa";
		displayName = "Grip Pod";
		descriptionShort = "GP";
		weaponInfoType = "PTV_Gripod1";
		class ItemInfo
		{
			deployedPivot = "bipod";
			hasBipod = 0;
			mass = 10;
			type = 302;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.70794576,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.70794576,1,20};
		};
		inertia = -0.2;
		type = 131072;
		ptv_grip_type = "ptv_grip1_change";
	};
	class ptv_acc_grip3_t: ptv_acc_grip3
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_gp_t.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_gp_t_ca.paa";
		displayName = "Grip Pod (Tan)";
		descriptionShort = "GP Tan";
	};
	class ptv_acc_grip4: bipod_01_F_snd
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_afg.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_afg_ca.paa";
		displayName = "Angled Vertical Grip";
		descriptionShort = "AFG";
		weaponInfoType = "PTV_Gripod1";
		class ItemInfo
		{
			deployedPivot = "bipod";
			hasBipod = 0;
			mass = 10;
			type = 302;
		};
		inertia = -0.2;
		type = 131072;
		ptv_grip_type = "ptv_grip2_change";
	};
	class ptv_acc_grip4_t: ptv_acc_grip4
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\ptv_weapons\acc\grips\ptv_afg_t.p3d";
		picture = "\ptv_weapons\data\ui\gear_ptv_afg_t_ca.paa";
		displayName = "Angled Vertical Grip (Tan)";
		descriptionShort = "AFG Tan";
	};
	class ptv_versapod: ItemCore
	{
		scope = 2;
		author = "WR5 , Project True Viking";
		displayName = "Versa-Pod Bipod";
		picture = "\ptv_weapons\Data\UI\gear_ptv_versapod_ca.paa";
		model = "\ptv_weapons\acc\ptv_versapod.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.70794576,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.70794576,1,20};
		};
		inertia = 0.2;
	};
	class ptv_versapod_des: ptv_versapod
	{
		author = "WR5 , Project True Viking";
		displayName = "Versa-Pod Bipod (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_versapod_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_versapod_des.p3d";
	};
	class ptv_versapod_wdl: ptv_versapod
	{
		author = "WR5 , Project True Viking";
		displayName = "Versa-Pod Bipod (wdl)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_versapod_wdl_ca.paa";
		model = "\ptv_weapons\acc\ptv_versapod_wdl.p3d";
	};
	class ptv_hbrs: ItemCore
	{
		scope = 2;
		author = "Kiory , Project True Viking";
		displayName = "HBRS";
		picture = "\ptv_weapons\Data\UI\gear_ptv_hbrs_ca.paa";
		model = "\ptv_weapons\acc\ptv_hbrs.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.70794576,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.70794576,1,20};
		};
		inertia = 0.2;
	};
	class ptv_1a2: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "1A2";
		picture = "\ptv_weapons\Data\UI\gear_ptv_1a2_ca.paa";
		model = "\ptv_weapons\acc\ptv_1a2.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.70794576,1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.70794576,1,20};
		};
		inertia = 0.2;
	};
	class ptv_SFM952V: acc_flashlight
	{
		author = "RedRogueXIII, Project True Viking";
		displayName = "Surefire M952v";
		picture = "\ptv_weapons\Data\UI\gear_ptv_SFM952V_ca.paa";
		model = "\ptv_weapons\acc\ptv_SFM952V.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {25,22,20};
				ambient[] = {9,7.5,6};
				position = "flash dir";
				direction = "flash";
				size = 1;
				innerangle = 15;
				outerangle = 120;
				coneFadeCoef = 150;
				intensity = 100;
				useFlare = 1;
				dayLight = 1;
				FlareSize = 1;
				flareMaxDistance = 400;
				onlyInNvg = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardlimitend = 200;
					hardlimitstart = 100;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_SFM952V_des: ptv_SFM952V
	{
		author = "RedRogueXIII, Project True Viking";
		displayName = "Surefire M952v des";
		picture = "\ptv_weapons\Data\UI\gear_ptv_SFM952V_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_SFM952V_des.p3d";
	};
	class ptv_flash: acc_flashlight
	{
		author = "Hell, Project True Viking";
		displayName = "Tactical flashlight";
		picture = "\ptv_weapons\Data\UI\gear_ptv_flash_ca.paa";
		model = "\ptv_weapons\acc\ptv_flash.p3d";
	};
	class ptv_x300: acc_flashlight_pistol
	{
		author = "RedRogueXIII, Project True Viking";
		displayName = "Surefire X300";
		picture = "\ptv_weapons\Data\UI\gear_ptv_x300_ca.paa";
		model = "\ptv_weapons\acc\ptv_x300.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2;
			class FlashLight
			{
				color[] = {1200,1500,1800};
				ambient[] = {9,7.5,6};
				intensity = 100;
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 400;
				dayLight = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_x300_des: ptv_x300
	{
		author = "RedRogueXIII, Project True Viking";
		displayName = "Surefire X300 des";
		picture = "\ptv_weapons\Data\UI\gear_ptv_x300_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_x300_des.p3d";
	};
	class ptv_M6X: acc_flashlight_pistol
	{
		author = "Crash, Project True Viking";
		displayName = "Insight M6X";
		picture = "\ptv_weapons\Data\UI\gear_ptv_m6x_ca.paa";
		model = "\ptv_weapons\acc\ptv_M6X.p3d";
		MRT_SwitchItemNextClass = "ptv_M6X_vl";
		MRT_SwitchItemPrevClass = "ptv_M6X_vl";
		MRT_switchItemHintText = "Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 3;
			class FlashLight
			{
				color[] = {1200,1500,1800};
				ambient[] = {9,7.5,6};
				intensity = 100;
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 400;
				dayLight = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_M6X_vl: ItemCore
	{
		MRT_SwitchItemNextClass = "ptv_M6X";
		MRT_SwitchItemPrevClass = "ptv_M6X";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		scope = 1;
		author = "Crash, Project True Viking";
		displayName = "Insight M6X";
		picture = "\ptv_weapons\Data\UI\gear_ptv_m6x_ca.paa";
		model = "\ptv_weapons\acc\ptv_M6X.p3d";
		descriptionUse = "$STR_ace_laserpointer_useLaser";
		descriptionShort = "$STR_ace_laserpointer_Description";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 3;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 1;
				beamThickness = 0.01;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_dbalpl: acc_pointer_IR
	{
		author = "Hung Do, Project True Viking";
		displayName = "DBAL-PL";
		picture = "\ptv_weapons\Data\UI\gear_ptv_dbalpl_ca.paa";
		model = "\ptv_weapons\acc\ptv_dbalpl.p3d";
		MRT_SwitchItemNextClass = "ptv_dbalpl_vl";
		MRT_SwitchItemPrevClass = "ptv_dbalpl_fl";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
	};
	class ptv_dbalpl_vl: ItemCore
	{
		MRT_SwitchItemNextClass = "ptv_dbalpl_fl";
		MRT_SwitchItemPrevClass = "ptv_dbalpl";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		scope = 1;
		author = "Hung Do, Project True Viking";
		displayName = "DBAL-PL";
		picture = "\ptv_weapons\Data\UI\gear_ptv_dbalpl_ca.paa";
		model = "\ptv_weapons\acc\ptv_dbalpl.p3d";
		descriptionUse = "$STR_ace_laserpointer_useLaser";
		descriptionShort = "$STR_ace_laserpointer_Description";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 3;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 1;
				beamThickness = 0.01;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_dbalpl_fl: acc_flashlight_pistol
	{
		scope = 1;
		author = "Hung Do, Project True Viking";
		displayName = "DBAL-PL";
		picture = "\ptv_weapons\Data\UI\gear_ptv_dbalpl_ca.paa";
		model = "\ptv_weapons\acc\ptv_dbalpl.p3d";
		MRT_SwitchItemNextClass = "ptv_dbalpl";
		MRT_SwitchItemPrevClass = "ptv_dbalpl_vl";
		MRT_switchItemHintText = "Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 3;
			class FlashLight
			{
				color[] = {1200,1500,1800};
				ambient[] = {9,7.5,6};
				intensity = 100;
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 400;
				dayLight = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_dbalpl_t: acc_pointer_IR
	{
		author = "Hung Do, Project True Viking";
		displayName = "DBAL-PL (Tan)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_dbalpl_t_ca.paa";
		model = "\ptv_weapons\acc\ptv_dbalpl_t.p3d";
		MRT_SwitchItemNextClass = "ptv_dbalpl_t_vl";
		MRT_SwitchItemPrevClass = "ptv_dbalpl_t_fl";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
	};
	class ptv_dbalpl_t_vl: ItemCore
	{
		MRT_SwitchItemNextClass = "ptv_dbalpl_t_fl";
		MRT_SwitchItemPrevClass = "ptv_dbalpl_t";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		scope = 1;
		author = "Hung Do, Project True Viking";
		displayName = "DBAL-PL (Tan)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_dbalpl_t_ca.paa";
		model = "\ptv_weapons\acc\ptv_dbalpl_t.p3d";
		descriptionUse = "$STR_ace_laserpointer_useLaser";
		descriptionShort = "$STR_ace_laserpointer_Description";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 3;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 1;
				beamThickness = 0.01;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_dbalpl_t_fl: acc_flashlight_pistol
	{
		scope = 1;
		author = "Hung Do, Project True Viking";
		displayName = "DBAL-PL (Tan)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_dbalpl_t_ca.paa";
		model = "\ptv_weapons\acc\ptv_dbalpl_t.p3d";
		MRT_SwitchItemNextClass = "ptv_dbalpl_t";
		MRT_SwitchItemPrevClass = "ptv_dbalpl_t_vl";
		MRT_switchItemHintText = "Light";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 3;
			class FlashLight
			{
				color[] = {1200,1500,1800};
				ambient[] = {9,7.5,6};
				intensity = 100;
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 400;
				dayLight = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_peq2: acc_pointer_IR
	{
		author = "Hellspike, El Maestro De Graffiti, Project True Viking";
		displayName = "PEQ-2";
		picture = "\ptv_weapons\data\ui\gear_ptv_peq2_ca.paa";
		model = "\ptv_weapons\acc\ptv_peq2.p3d";
	};
	class ptv_peq2sf: acc_pointer_IR
	{
		author = "Hellspike, El Maestro De Graffiti, RedRogueXIII, Project True Viking";
		displayName = "PEQ-2 & Surefire M952v";
		picture = "\ptv_weapons\data\ui\gear_ptv_peq2sf_ca.paa";
		model = "\ptv_weapons\acc\ptv_peq2sf.p3d";
		MRT_SwitchItemNextClass = "ptv_peq2sf_l";
		MRT_SwitchItemPrevClass = "ptv_peq2sf_l";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 8;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_peq2sf_l: acc_flashlight
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_peq2sf";
		MRT_SwitchItemPrevClass = "ptv_peq2sf";
		MRT_switchItemHintText = "Light";
		author = "Hellspike, El Maestro De Graffiti, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_peq2sf_ca.paa";
		displayName = "PEQ-2 & Surefire M952v";
		model = "\ptv_weapons\acc\ptv_peq2sf.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 8;
			class FlashLight
			{
				color[] = {25,22,20};
				ambient[] = {9,7.5,6};
				position = "flash dir";
				direction = "flash";
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				intensity = 150;
				useFlare = 1;
				dayLight = 1;
				FlareSize = 1;
				flareMaxDistance = 600;
				onlyInNvg = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardlimitstart = 100;
					hardlimitend = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_peq2sf_des: ptv_peq2sf
	{
		MRT_SwitchItemNextClass = "ptv_peq2sf_des_l";
		MRT_SwitchItemPrevClass = "ptv_peq2sf_des_l";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
		author = "Hellspike, El Maestro De Graffiti, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_peq2sf_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_peq2sf_des.p3d";
		displayName = "PEQ-2 & Surefire M952v Des";
	};
	class ptv_peq2sf_des_l: ptv_peq2sf_l
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_peq2sf_des";
		MRT_SwitchItemPrevClass = "ptv_peq2sf_des";
		MRT_SwitchItemHintText = "Light";
		author = "Hellspike, El Maestro De Graffiti, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_peq2sf_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_peq2sf_des.p3d";
		displayName = "PEQ-2 & Surefire M952v Des";
	};
	class ptv_dbala2: acc_pointer_IR
	{
		author = "Tenoyl, Project True Viking";
		displayName = "DBAL-A2";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\ptv_weapons\acc\ptv_dbala2.p3d";
		MRT_SwitchItemNextClass = "ptv_dbala2_vl";
		MRT_SwitchItemPrevClass = "ptv_dbala2_vl";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
	};
	class ptv_dbala2_vl: ItemCore
	{
		MRT_SwitchItemNextClass = "ptv_dbala2";
		MRT_SwitchItemPrevClass = "ptv_dbala2";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		author = "Tenoyl, Project True Viking";
		scope = 1;
		displayName = "DBAL-A2";
		descriptionUse = "$STR_ace_laserpointer_useLaser";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\ptv_weapons\acc\ptv_dbala2.p3d";
		descriptionShort = "$STR_ace_laserpointer_Description";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 6;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {0,1,0};
				dotColor[] = {0,10000,0};
				dotSize = 1;
				beamThickness = 0.05;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_dbalsf: acc_pointer_IR
	{
		author = "Hung Do, Project True Viking";
		displayName = "DBAL Surefire combo";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\ptv_weapons\acc\ptv_dbalsf.p3d";
		MRT_SwitchItemNextClass = "ptv_dbalsf_vl";
		MRT_SwitchItemPrevClass = "ptv_dbalsf_fl";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
	};
	class ptv_dbalsf_vl: ItemCore
	{
		MRT_SwitchItemNextClass = "ptv_dbalsf_fl";
		MRT_SwitchItemPrevClass = "ptv_dbalsf";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		author = "Hung Do, Project True Viking";
		scope = 1;
		displayName = "DBAL Surefire combo";
		descriptionUse = "$STR_ace_laserpointer_useLaser";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\ptv_weapons\acc\ptv_dbalsf.p3d";
		descriptionShort = "$STR_ace_laserpointer_Description";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 6;
			class Pointer
			{
				irLaserPos = "vlaser pos";
				irLaserEnd = "vlaser dir";
				beamColor[] = {0,1,0};
				dotColor[] = {0,10000,0};
				dotSize = 1;
				beamThickness = 0.05;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_dbalsf_fl: acc_flashlight
	{
		MRT_SwitchItemNextClass = "ptv_dbalsf";
		MRT_SwitchItemPrevClass = "ptv_dbalsf_vl";
		MRT_switchItemHintText = "Light";
		author = "Hung Do, Project True Viking";
		scope = 1;
		displayName = "DBAL Surefire combo";
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\ptv_weapons\acc\ptv_dbalsf.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 6;
			class FlashLight
			{
				color[] = {1200,1500,1800};
				ambient[] = {9,7.5,6};
				intensity = 100;
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 400;
				dayLight = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_LLM: acc_pointer_IR
	{
		MRT_SwitchItemNextClass = "ptv_LLM_light";
		MRT_SwitchItemPrevClass = "ptv_LLM_laser";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
		author = "MikePhoeniX, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_llm_ca.paa";
		model = "\ptv_weapons\acc\ptv_llm.p3d";
		displayName = "LLM-VRC";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_LLM_light: acc_flashlight
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_LLM_laser";
		MRT_SwitchItemPrevClass = "ptv_LLM";
		MRT_SwitchItemHintText = "Light";
		author = "MikePhoeniX, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_llm_ca.paa";
		model = "\ptv_weapons\acc\ptv_llm.p3d";
		displayName = "LLM-VRC";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
			class FlashLight
			{
				color[] = {1200,1500,1800};
				ambient[] = {9,7.5,6};
				intensity = 100;
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 400;
				dayLight = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_LLM_laser: ptv_LLM
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_LLM";
		MRT_SwitchItemPrevClass = "ptv_LLM_light";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		author = "MikePhoeniX, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_llm_ca.paa";
		model = "\ptv_weapons\acc\ptv_llm.p3d";
		displayName = "LLM-VRC";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 1;
				beamThickness = 0.01;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_LLM_des: ptv_LLM
	{
		MRT_SwitchItemNextClass = "ptv_LLM_des_light";
		MRT_SwitchItemPrevClass = "ptv_LLM_des_laser";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
		author = "MikePhoeniX, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_llm_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_llm_des.p3d";
		displayName = "LLM-VRC Des";
	};
	class ptv_LLM_des_light: ptv_LLM_light
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_LLM_des_laser";
		MRT_SwitchItemPrevClass = "ptv_LLM_des";
		MRT_SwitchItemHintText = "Light";
		author = "MikePhoeniX, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_llm_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_llm_des.p3d";
		displayName = "LLM-VRC Des";
	};
	class ptv_LLM_des_laser: ptv_LLM_laser
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_LLM_des";
		MRT_SwitchItemPrevClass = "ptv_LLM_des_light";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		author = "MikePhoeniX, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_llm_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_llm_des.p3d";
		displayName = "LLM-VRC Des";
	};
	class ptv_LLM01: acc_pointer_IR
	{
		MRT_SwitchItemNextClass = "ptv_LLM01_light";
		MRT_SwitchItemPrevClass = "ptv_LLM01_laser";
		MRT_switchItemHintText = "$STR_ace_laserpointer_IRLaser";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_LLM01_ca.paa";
		model = "\ptv_weapons\acc\ptv_LLM01.p3d";
		displayName = "LLM01";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_LLM01_light: acc_flashlight
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_LLM01_laser";
		MRT_SwitchItemPrevClass = "ptv_LLM01";
		MRT_SwitchItemHintText = "Light";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_LLM01_ca.paa";
		model = "\ptv_weapons\acc\ptv_LLM01.p3d";
		displayName = "LLM01";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
			class FlashLight
			{
				color[] = {1200,1500,1800};
				ambient[] = {9,7.5,6};
				intensity = 100;
				size = 1;
				innerAngle = 15;
				outerAngle = 120;
				coneFadeCoef = 150;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 400;
				dayLight = 0;
				class Attenuation
				{
					start = 0.1;
					constant = 1;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
				scale[] = {0};
			};
		};
		inertia = 0.1;
	};
	class ptv_LLM01_laser: ptv_LLM01
	{
		scope = 1;
		MRT_SwitchItemNextClass = "ptv_LLM01";
		MRT_SwitchItemPrevClass = "ptv_LLM01_light";
		MRT_switchItemHintText = "$STR_ace_laserpointer_Laser";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_LLM01_ca.paa";
		model = "\ptv_weapons\acc\ptv_LLM01.p3d";
		displayName = "LLM01";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				beamColor[] = {1,0,0};
				dotColor[] = {10000,0,0};
				dotSize = 1;
				beamThickness = 0.01;
				beamMaxLength = 3000;
				isIR = 0;
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
	class ptv_romeo1pro: ItemCore
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "Romeo1 Pro";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rmr_ca.paa";
		model = "\ptv_weapons\acc\ptv_romeo1pro.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Yorris1";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class rmr
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class ptv_rmr: ItemCore
	{
		author = "RedRogueXIII, Project True Viking";
		scope = 2;
		displayName = "Trijicon RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rmr_ca.paa";
		model = "\ptv_weapons\acc\ptv_rmr.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Yorris1";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class rmr
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class ptv_rmr_des: ptv_rmr
	{
		author = "RedRogueXIII, Project True Viking";
		scope = 2;
		displayName = "Trijicon RMR (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rmr_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_rmr_des.p3d";
	};
	class ptv_rmr_wdl: ptv_rmr
	{
		author = "RedRogueXIII, Project True Viking";
		scope = 2;
		displayName = "Trijicon RMR (wdl)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rmr_wdl_ca.paa";
		model = "\ptv_weapons\acc\ptv_rmr_wdl.p3d";
	};
	class ptv_compm4s: optic_Holosight
	{
		scope = 2;
		author = "Christian Ã˜elund, Project True Viking";
		displayName = "Aimpoint CompM4s";
		picture = "\ptv_weapons\Data\UI\gear_ptv_compM4s_ca.paa";
		model = "\ptv_weapons\acc\ptv_compm4s.p3d";
		descriptionShort = "Aimpoint CompM4s";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class AIM
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.2;
					opticsZoomMax = 0.5;
					opticsZoomInit = 0.375;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
				class AIM2: AIM
				{
					opticsID = 2;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
				};
			};
		};
	};
	class ptv_compm5: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Aimpoint CompM5";
		picture = "\ptv_weapons\Data\UI\gear_ptv_compm5_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_compm5";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Holosight1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 3;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Dot
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class ptv_compm5s: ptv_compm5
	{
		author = "Project True Viking";
		displayName = "Aimpoint CompM5s";
		picture = "\ptv_weapons\Data\UI\gear_ptv_compm5s_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_compm5s";
	};
	class ptv_aimcs: ItemCore
	{
		scope = 2;
		author = "Stefan Engdahl, Project True Viking";
		displayName = "Aimpoint CS";
		picture = "\ptv_weapons\data\ui\gear_ptv_aimcs_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_aimcs.p3d";
		descriptionShort = "RDS <br/>Magnification: 1x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class aim
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticView";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
				class aimcqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_aimcs2: ptv_aimcs
	{
		scope = 2;
		author = "Stefan Engdahl, Project True Viking";
		displayName = "Aimpoint CS (folded KF)";
		picture = "\ptv_weapons\data\ui\gear_ptv_aimcs2_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_aimcs2.p3d";
		descriptionShort = "RDS <br/>Magnification: 1x";
		weaponInfoType = "RscWeaponZeroing";
	};
	class ptv_t1: ItemCore
	{
		scope = 2;
		author = "Iansky, Kouoaeha, Project True Viking";
		displayName = "Aimpoint T1";
		picture = "\ptv_weapons\Data\UI\gear_ptv_t1_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t1";
		descriptionShort = "$STR_A3_cfgWeapons_optic_Holosight1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 3;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class T1
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class ptv_t1s: ptv_t1
	{
		author = "Iansky, Kouoaeha, Project True Viking";
		displayName = "Aimpoint T1s";
		picture = "\ptv_weapons\Data\UI\gear_ptv_t1s_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t1s";
	};
	class ptv_eot552: ItemCore
	{
		author = "Sandi Sunday, Project True Viking";
		scope = 2;
		displayName = "Eotech 552";
		picture = "\ptv_weapons\data\ui\gear_ptv_eot552_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_eot552";
		descriptionShort = "";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class EOT
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class ptv_xps3: ItemCore
	{
		author = "Andrxasnjper, Project True Viking";
		scope = 2;
		displayName = "Eotech XPS3";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3";
		descriptionShort = "";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class EOT
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class ptv_xps3_des: ItemCore
	{
		author = "Andrxasnjper, Project True Viking";
		scope = 2;
		displayName = "Eotech XPS3 (des)";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3_des";
		descriptionShort = "";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class EOT
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class ptv_xps3xmag: ItemCore
	{
		scope = 2;
		displayName = "Eotech XPS3 + G33 Magnifier";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_xps3xmag_f";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag_f";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_xps3xmag_f: ptv_xps3xmag
	{
		scope = 1;
		displayName = "Eotech XPS3 + G33 Magnifier(Folded)";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag_f.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_xps3xmag";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_xps3xmag_pip: ItemCore
	{
		scope = 2;
		displayName = "Eotech XPS3 + G33 Magnifier PIP";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag_pip.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "ptv_aimpoint_3x_pip_handler";
		MRT_SwitchItemNextClass = "ptv_xps3xmag_pf";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag_pf";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_xps3xmag_pf: ptv_xps3xmag_f
	{
		scope = 1;
		displayName = "Eotech XPS3 + G33 Magnifier(Folded)";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag_f.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_xps3xmag_pip";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag_pip";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_xps3xmag_des: ItemCore
	{
		scope = 2;
		displayName = "Eotech XPS3 + G33 Magnifier (Des)";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag_des.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_xps3xmag_des_f";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag_des_f";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_xps3xmag_des_f: ptv_xps3xmag_des
	{
		scope = 1;
		displayName = "Eotech XPS3 + G33 Magnifier(Des Folded)";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag_des_f.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_xps3xmag_des";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag_des";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_xps3xmag_des_pip: ItemCore
	{
		scope = 2;
		displayName = "Eotech XPS3 + G33 Magnifier PIP(Des)";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag_des_pip.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "ptv_aimpoint_3x_pip_handler";
		MRT_SwitchItemNextClass = "ptv_xps3xmag_des_pf";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag_des_pf";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_xps3xmag_des_pf: ptv_xps3xmag_des_f
	{
		scope = 1;
		displayName = "Eotech XPS3 + G33 Magnifier(Des Folded)";
		author = "Andrxasnjper, Raimeiyonke, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_xps3xmag_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_xps3xmag_des_f.p3d";
		descriptionShort = "Eotech XPS3+G33";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_xps3xmag_des_pip";
		MRT_SwitchItemPrevClass = "ptv_xps3xmag_des_pip";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "XPS3+G33";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_aim3xmag: ItemCore
	{
		scope = 2;
		displayName = "Aimpoint CS + 3X Magnifier";
		author = "Stefan Engdahl, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_aim3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_aim3xmag.p3d";
		descriptionShort = "Aimpoint CS+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_aim3xmag_f";
		MRT_SwitchItemPrevClass = "ptv_aim3xmag_f";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "CS+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class aimcqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_aim3xmag_f: ptv_aim3xmag
	{
		scope = 1;
		displayName = "Aimpoint CS + 3X Magnifier(Folded)";
		author = "Stefan Engdahl, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_aim3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_aim3xmag_f.p3d";
		descriptionShort = "Aimpoint CS+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_aim3xmag";
		MRT_SwitchItemPrevClass = "ptv_aim3xmag";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "CS+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				class aimcqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm4s3xmag: ItemCore
	{
		scope = 2;
		displayName = "Aimpoint CompM4s + 3X Magnifier";
		author = "Christian Oelund, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm4s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm4s3xmag.p3d";
		descriptionShort = "Aimpoint CompM4s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm4s3xmag_f";
		MRT_SwitchItemPrevClass = "ptv_cm4s3xmag_f";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M4s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm4s3xmag_f: ptv_cm4s3xmag
	{
		scope = 1;
		displayName = "Aimpoint CompM4s + 3X Magnifier(Folded)";
		author = "Christian Ã˜elund, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm4s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm4s3xmag_f.p3d";
		descriptionShort = "Aimpoint CompM4s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm4s3xmag";
		MRT_SwitchItemPrevClass = "ptv_cm4s3xmag";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M4s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm4s3xmag_pip: ItemCore
	{
		weaponInfoType = "ptv_aimpoint_3x_pip_handler";
		scope = 2;
		author = "Christian Oelund, Project True Viking";
		displayName = "Aimpoint CompM4s + 3X Magnifier PIP";
		descriptionShort = "Aimpoint CompM4s+Magnifier";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm4s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm4s3xmag_pip.p3d";
		opticsDisablePeripherialVision = 0;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_cm4s3xmag_pf";
		MRT_SwitchItemPrevClass = "ptv_cm4s3xmag_pf";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "M4s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm4s3xmag_pf: ptv_cm4s3xmag_f
	{
		scope = 1;
		displayName = "Aimpoint CompM4s + 3X Magnifier(Folded)";
		author = "Christian Oelund, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm4s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm4s3xmag_f.p3d";
		descriptionShort = "Aimpoint CompM4s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm4s3xmag_pip";
		MRT_SwitchItemPrevClass = "ptv_cm4s3xmag_pip";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M4s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm53xmag: ItemCore
	{
		scope = 2;
		displayName = "Aimpoint CompM5 + 3X Magnifier";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm53xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm53xmag.p3d";
		descriptionShort = "M5+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm53xmag_f";
		MRT_SwitchItemPrevClass = "ptv_cm53xmag_f";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M5+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm53xmag_f: ptv_cm53xmag
	{
		scope = 1;
		displayName = "Aimpoint CompM5 + 3X Magnifier(Folded)";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm53xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm53xmag_f.p3d";
		descriptionShort = "M5+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm53xmag";
		MRT_SwitchItemPrevClass = "ptv_cm53xmag";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M5+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm53xmag_pip: ItemCore
	{
		weaponInfoType = "ptv_aimpoint_3x_pip_handler";
		scope = 2;
		author = "Project True Viking";
		displayName = "Aimpoint CompM5 + 3X Magnifier PIP";
		descriptionShort = "M5+Magnifier";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm53xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm53xmag_pip.p3d";
		opticsDisablePeripherialVision = 0;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_cm53xmag_pf";
		MRT_SwitchItemPrevClass = "ptv_cm53xmag_pf";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "M5+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm53xmag_pf: ptv_cm53xmag_f
	{
		scope = 1;
		displayName = "Aimpoint CompM5 + 3X Magnifier(Folded)";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm53xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm53xmag_f.p3d";
		descriptionShort = "M5+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm53xmag_pip";
		MRT_SwitchItemPrevClass = "ptv_cm53xmag_pip";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M5+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm5s3xmag: ItemCore
	{
		scope = 2;
		displayName = "Aimpoint CompM5s + 3X Magnifier";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm5s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm5s3xmag.p3d";
		descriptionShort = "M5s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm5s3xmag_f";
		MRT_SwitchItemPrevClass = "ptv_cm5s3xmag_f";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M5s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm5s3xmag_f: ptv_cm5s3xmag
	{
		scope = 1;
		displayName = "Aimpoint CompM5s + 3X Magnifier(Folded)";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm5s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm5s3xmag_f.p3d";
		descriptionShort = "M5s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm5s3xmag";
		MRT_SwitchItemPrevClass = "ptv_cm5s3xmag";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M5s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm5s3xmag_pip: ItemCore
	{
		weaponInfoType = "ptv_aimpoint_3x_pip_handler";
		scope = 2;
		author = "Project True Viking";
		displayName = "Aimpoint CompM5s + 3X Magnifier PIP";
		descriptionShort = "M5s+Magnifier";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm5s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm5s3xmag_pip.p3d";
		opticsDisablePeripherialVision = 0;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_cm5s3xmag_pf";
		MRT_SwitchItemPrevClass = "ptv_cm5s3xmag_pf";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "M5s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_cm5s3xmag_pf: ptv_cm5s3xmag_f
	{
		scope = 1;
		displayName = "Aimpoint CompM5s + 3X Magnifier(Folded)";
		author = "Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_cm5s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_cm5s3xmag_f.p3d";
		descriptionShort = "M5s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_cm5s3xmag_pip";
		MRT_SwitchItemPrevClass = "ptv_cm5s3xmag_pip";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "M5s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t13xmag: ItemCore
	{
		scope = 2;
		displayName = "Aimpoint T1 + 3X Magnifier";
		author = "Iansky, Kouoaeha, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_t13xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t13xmag.p3d";
		descriptionShort = "T1+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_t13xmag_f";
		MRT_SwitchItemPrevClass = "ptv_t13xmag_f";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "T1+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t13xmag_f: ptv_t13xmag
	{
		scope = 1;
		displayName = "Aimpoint T1 + 3X Magnifier(Folded)";
		author = "Iansky, Kouoaeha, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_t13xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t13xmag_f.p3d";
		descriptionShort = "T1+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_t13xmag";
		MRT_SwitchItemPrevClass = "ptv_t13xmag";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "T1+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t13xmag_pip: ItemCore
	{
		weaponInfoType = "ptv_aimpoint_3x_pip_handler";
		scope = 2;
		author = "Iansky, Kouoaeha, Project True Viking";
		displayName = "Aimpoint T1 + 3X Magnifier PIP";
		descriptionShort = "T1+Magnifier";
		picture = "\ptv_weapons\data\ui\gear_ptv_t13xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t13xmag_pip.p3d";
		opticsDisablePeripherialVision = 0;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_t13xmag_pf";
		MRT_SwitchItemPrevClass = "ptv_t13xmag_pf";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "T1+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t13xmag_pf: ptv_t13xmag_f
	{
		scope = 1;
		displayName = "Aimpoint T1 + 3X Magnifier(Folded)";
		author = "Iansky, Kouoaeha, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_t13xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t13xmag_f.p3d";
		descriptionShort = "T1+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_t13xmag_pip";
		MRT_SwitchItemPrevClass = "ptv_t13xmag_pip";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "T1+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t1s3xmag: ItemCore
	{
		scope = 2;
		displayName = "Aimpoint T1s + 3X Magnifier";
		author = "Iansky, Kouoaeha, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_t1s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t1s3xmag.p3d";
		descriptionShort = "T1s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_t1s3xmag_f";
		MRT_SwitchItemPrevClass = "ptv_t1s3xmag_f";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "T1s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t1s3xmag_f: ptv_t1s3xmag
	{
		scope = 1;
		displayName = "Aimpoint T1s + 3X Magnifier(Folded)";
		author = "Iansky, Kouoaeha, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_t1s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t1s3xmag_f.p3d";
		descriptionShort = "T1s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_t1s3xmag";
		MRT_SwitchItemPrevClass = "ptv_t1s3xmag";
		MRT_switchItemHintText = "";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "T1s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t1s3xmag_pip: ItemCore
	{
		weaponInfoType = "ptv_aimpoint_3x_pip_handler";
		scope = 2;
		author = "Iansky, Kouoaeha, Project True Viking";
		displayName = "Aimpoint T1s + 3X Magnifier PIP";
		descriptionShort = "T1s+Magnifier";
		picture = "\ptv_weapons\data\ui\gear_ptv_t1s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t1s3xmag_pip.p3d";
		opticsDisablePeripherialVision = 0;
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_t1s3xmag_pf";
		MRT_SwitchItemPrevClass = "ptv_t1s3xmag_pf";
		MRT_switchItemHintText = "3x Magnification up";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "T1s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Magnifier
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_3xmag_Blur"};
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_t1s3xmag_pf: ptv_t1s3xmag_f
	{
		scope = 1;
		displayName = "Aimpoint T1s + 3X Magnifier(Folded)";
		author = "Iansky, Kouoaeha, Project True Viking";
		picture = "\ptv_weapons\data\ui\gear_ptv_t1s3xmag_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_t1s3xmag_f.p3d";
		descriptionShort = "T1s+Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_t1s3xmag_pip";
		MRT_SwitchItemPrevClass = "ptv_t1s3xmag_pip";
		MRT_switchItemHintText = "Folded";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "T1s+Magnifier";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class CQB
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsBlur1"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview2";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta11: ItemCore
	{
		author = "Troska, Project True Viking";
		scope = 2;
		displayName = "TA11";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta11_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta11.p3d";
		descriptionShort = "RCO <br/>Magnification: 3.5x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_ta11_pip";
		MRT_SwitchItemPrevClass = "ptv_ta11_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.071;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta11_pip: ItemCore
	{
		scope = 2;
		author = "Troska, Project True Viking";
		displayName = "TA11 PIP";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta11_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta11_pip.p3d";
		descriptionShort = "RCO <br/>Magnification: 3.5x";
		weaponInfoType = "ptv_acog_3x_pip_handler";
		MRT_SwitchItemNextClass = "ptv_ta11_2D";
		MRT_SwitchItemPrevClass = "ptv_ta11";
		MRT_switchItemHintText = "PIP";
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Optical Sight";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					useModelOptics = 0;
					opticsZoomMin = 0.35;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
				class Cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta11_2d: ptv_ta11
	{
		scope = 2;
		author = "Troska, Project True Viking";
		displayName = "TA11 2D";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\acog\reticle556_ca.paa";
			reticleTextureSize = 0.6;
			bodyTexture = "\ptv_weapons\reticle\data\acog\body_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\acog\body_night_ca.paa";
			bodyTextureSize = 1.1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_ta11";
		MRT_SwitchItemPrevClass = "ptv_ta11_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_small_70.p3d";
			class OpticsModes
			{
				class scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = "3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discreteDistance[] = {100,300};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta11_2Dpip: ptv_ta11_2d
	{
		scope = 1;
		author = "Troska, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_ta11";
		MRT_SwitchItemPrevClass = "ptv_ta11_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class ptv_ta11rmr: ItemCore
	{
		author = "Troska, RedRogueXIII, Project True Viking";
		scope = 2;
		displayName = "TA11 RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta11rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta11rmr.p3d";
		descriptionShort = "RCO <br/>Magnification: 3.5x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_ta11rmr_pip";
		MRT_SwitchItemPrevClass = "ptv_ta11rmr_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.071;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class rmr
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta11rmr_2d: ptv_ta11rmr
	{
		scope = 2;
		author = "Troska, RedRogueXIII, Project True Viking";
		displayName = "TA11 RMR 2D";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\acog\reticle556_ca.paa";
			reticleTextureSize = 0.6;
			bodyTexture = "\ptv_weapons\reticle\data\acog\body2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\acog\body2_night_ca.paa";
			bodyTextureSize = 1.1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_ta11rmr";
		MRT_SwitchItemPrevClass = "ptv_ta11rmr_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_small_70.p3d";
			class OpticsModes: OpticsModes
			{
				class scope: scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = "3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
				class rmr
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta11rmr_2Dpip: ptv_ta11rmr_2d
	{
		scope = 1;
		author = "Troska, RedRogueXIII, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_ta11rmr";
		MRT_SwitchItemPrevClass = "ptv_ta11rmr_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class ptv_ta11rmr_pip: ItemCore
	{
		scope = 2;
		author = "Troska, RedRogueXIII, Project True Viking";
		displayName = "TA11 RMR PIP";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta11_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta11rmr_pip.p3d";
		descriptionShort = "RCO <br/>Magnification: 3.5x";
		weaponInfoType = "ptv_acog_3x_pip_handler";
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_ta11rmr_2D";
		MRT_SwitchItemPrevClass = "ptv_ta11rmr";
		MRT_switchItemHintText = "PIP";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Optical Sight";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					useModelOptics = 0;
					opticsZoomMin = 0.35;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
				class rmr
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta02led: ItemCore
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "TA02LED";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta02led_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta02led.p3d";
		descriptionShort = "RCO <br/>Magnification: 4.0x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_ta02led_pip";
		MRT_SwitchItemPrevClass = "ptv_ta02led_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta02led_2d: ptv_ta02led
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "TA02LED 2D";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\acog\reticle556w_ca.paa";
			reticleTextureSize = 0.6;
			bodyTexture = "\ptv_weapons\reticle\data\acog\body_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\acog\body_night_ca.paa";
			bodyTextureSize = 1.1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_ta02led";
		MRT_SwitchItemPrevClass = "ptv_ta02led_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_small_70.p3d";
			class OpticsModes: OpticsModes
			{
				class scope: scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = "4.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "4.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "4.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discretefov[] = {"(0.25/4)"};
				};
				class Cqb: Cqb{};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta02led_2Dpip: ptv_ta02led_2d
	{
		scope = 1;
		author = "Project True Viking";
		MRT_SwitchItemNextClass = "ptv_ta02led";
		MRT_SwitchItemPrevClass = "ptv_ta02led_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class ptv_ta02led_pip: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "TA02LED PIP";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta02led_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta02led_pip.p3d";
		descriptionShort = "RCO <br/>Magnification: 4.0x";
		weaponInfoType = "ptv_acog_4x_pip_handler";
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_ta02led_2D";
		MRT_SwitchItemPrevClass = "ptv_ta02led";
		MRT_switchItemHintText = "PIP";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Optical Sight";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					useModelOptics = 0;
					opticsZoomMin = 0.35;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
				class Cqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta02led_rmr: ItemCore
	{
		author = "RedRogueXIII, Project True Viking";
		scope = 2;
		displayName = "TA02LED RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta02led_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta02led_rmr.p3d";
		descriptionShort = "RCO <br/>Magnification: 4.0x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_ta02led_rmr_pip";
		MRT_SwitchItemPrevClass = "ptv_ta02led_rmr_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class rmr
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta02led_rmr_2d: ptv_ta02led_rmr
	{
		scope = 2;
		author = "RedRogueXIII, Project True Viking";
		displayName = "TA02LED RMR 2D";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\acog\reticle556w_ca.paa";
			reticleTextureSize = 0.6;
			bodyTexture = "\ptv_weapons\reticle\data\acog\body2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\acog\body2_night_ca.paa";
			bodyTextureSize = 1.1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_ta02led_rmr";
		MRT_SwitchItemPrevClass = "ptv_ta02led_rmr_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_small_70.p3d";
			class OpticsModes: OpticsModes
			{
				class scope: scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = "4.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "4.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "4.0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discretefov[] = {"(0.25/4)"};
				};
				class rmr: rmr{};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta02led_rmr_2Dpip: ptv_ta02led_rmr_2d
	{
		scope = 1;
		author = "RedRogueXIII, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_ta02led_rmr";
		MRT_SwitchItemPrevClass = "ptv_ta02led_rmr_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_small_pip.p3d";
		};
	};
	class ptv_ta02led_rmr_pip: ItemCore
	{
		scope = 2;
		author = "RedRogueXIII, Project True Viking";
		displayName = "TA02LED RMR PIP";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta02led_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta02led_rmr_pip.p3d";
		descriptionShort = "RCO <br/>Magnification: 4.0x";
		weaponInfoType = "ptv_acog_4x_pip_handler";
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_ta02led_rmr_2D";
		MRT_SwitchItemPrevClass = "ptv_ta02led_rmr";
		MRT_switchItemHintText = "PIP";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Optical Sight";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					useModelOptics = 0;
					opticsZoomMin = 0.35;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
				class rmr
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_ta648: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "TA648";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta648_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta648";
		descriptionShort = "MG Combat Sight<br/>Magnification: 6x";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\ta648_ret_ca.paa";
			reticleTextureSize = 0.8;
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1.35;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 11;
			opticType = 1;
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Ironsight
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.4;
	};
	class ptv_ta648_pip: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "TA648 PIP";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta648_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta648_pip";
		descriptionShort = "MG Combat Sight<br/>Magnification: 6x";
		weaponInfoType = "ptv_acog_6x_pip_handler";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 11;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					useModelOptics = 0;
					opticsZoomMin = 0.35;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
				class Ironsight
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.4;
	};
	class ptv_ta648_rmr: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "TA648 RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_ta648_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_ta648_rmr";
		descriptionShort = "MG Combat Sight<br/>Magnification: 6x";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\ta648_ret_ca.paa";
			reticleTextureSize = 0.8;
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1.35;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			opticType = 1;
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class rmr
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.4;
	};
	class ptv_zo: ItemCore
	{
		author = "Toadie, Project True Viking";
		scope = 2;
		displayName = "ZO 4x30";
		picture = "\ptv_weapons\Data\UI\gear_ptv_zo_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_zo.p3d";
		descriptionShort = "RCO <br/>Magnification: 4x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Cqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
				class scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discretefov[] = {0.125,0.06225};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {200,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_zos: ptv_zo
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		displayName = "ZOs 4x30";
		picture = "\ptv_weapons\Data\UI\gear_ptv_zos_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_zos.p3d";
	};
	class ptv_zo_rmr: ItemCore
	{
		author = "Toadie, RedRogueXIII, Project True Viking";
		scope = 2;
		displayName = "ZO 4x30 RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_zo_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_zo_rmr.p3d";
		descriptionShort = "RCO <br/>Magnification: 4x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class rmr
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
				class scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discretefov[] = {0.125,0.06225};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {200,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_zos_rmr: ptv_zo_rmr
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		displayName = "ZOs 4x30 RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_zos_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_zos_rmr.p3d";
	};
	class ptv_specterdr: ItemCore
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr";
		descriptionShort = "Dual Role Combat Sight<br/>Magnification: 1-4x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_specterdr_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "ptv_weapons\reticle\ptv_DR_optic.p3d";
			class OpticsModes
			{
				class DRscope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.237;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discretefov[] = {0.237,0.125};
					discreteInitIndex = 1;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Ironsight
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr_2d: ptv_specterdr
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR 2D";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\dr_ret_ca.paa";
			reticleTextureSize = 1;
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1.1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_specterdr";
		MRT_SwitchItemPrevClass = "ptv_specterdr";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes: OpticsModes
			{
				class DRscope: DRscope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discretefov[] = {"(0.25/1.05)","(0.25/4)"};
				};
				class Ironsight: Ironsight{};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr_pip: ptv_specterdr_2d
	{
		scope = 1;
		author = "Iansky, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr";
		MRT_SwitchItemPrevClass = "ptv_specterdr";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_specterdr_des: ptv_specterdr
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr_des";
		MRT_SwitchItemNextClass = "ptv_specterdr_des_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr_des_2D";
		MRT_switchItemHintText = "3D";
	};
	class ptv_specterdr_des_2d: ptv_specterdr_2d
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR 2D (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr_des";
		MRT_SwitchItemNextClass = "ptv_specterdr_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr_des";
		MRT_switchItemHintText = "2D";
	};
	class ptv_specterdr_des_pip: ptv_specterdr_des_2d
	{
		scope = 1;
		author = "Iansky, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr_des";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_specterdr_rmr: ptv_specterdr
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr_rmr";
		MRT_SwitchItemNextClass = "ptv_specterdr_rmr_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr_rmr_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class DRscope: DRscope{};
				class Ironsight: Ironsight
				{
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr_rmr_2D: ptv_specterdr_2d
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR RMR 2D";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr_rmr";
		MRT_SwitchItemNextClass = "ptv_specterdr_rmr";
		MRT_SwitchItemPrevClass = "ptv_specterdr_rmr";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class DRscope: DRscope{};
				class Ironsight: Ironsight
				{
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr_rmr_pip: ptv_specterdr_rmr_2D
	{
		scope = 1;
		author = "Iansky, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr_rmr";
		MRT_SwitchItemPrevClass = "ptv_specterdr_rmr";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_specterdr_rmr_des: ptv_specterdr_rmr
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR RMR (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr_rmr_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr_rmr_des";
		MRT_SwitchItemNextClass = "ptv_specterdr_rmr_des_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr_rmr_des_2D";
		MRT_switchItemHintText = "3D";
	};
	class ptv_specterdr_rmr_des_2D: ptv_specterdr_rmr_2D
	{
		scope = 2;
		author = "Iansky, Project True Viking";
		displayName = "Elcan SpecterDR RMR 2D (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr_rmr_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr_rmr_des";
		MRT_SwitchItemNextClass = "ptv_specterdr_rmr_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr_rmr_des";
		MRT_switchItemHintText = "2D";
	};
	class ptv_specterdr_rmr_des_pip: ptv_specterdr_rmr_des_2D
	{
		scope = 1;
		author = "Iansky, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr_rmr_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr_rmr_des";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_specterdr6: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr6_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr6";
		descriptionShort = "Dual Role Combat Sight<br/>Magnification: 1.5-6x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_specterdr6_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "ptv_weapons\reticle\ptv_DR_optic.p3d";
			class OpticsModes
			{
				class DRscope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.166;
					opticsZoomMax = 0.06225;
					opticsZoomInit = 0.06225;
					discretefov[] = {0.166,0.06225};
					discreteInitIndex = 1;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Ironsight
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr6_2d: ptv_specterdr6
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6 2D";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\dr_ret_ca.paa";
			reticleTextureSize = 1;
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1.1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_specterdr6";
		MRT_SwitchItemPrevClass = "ptv_specterdr6";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes: OpticsModes
			{
				class DRscope: DRscope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "1.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discretefov[] = {"(0.25/1.5)","(0.25/6)"};
				};
				class Ironsight: Ironsight{};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr6_pip: ptv_specterdr6_2d
	{
		scope = 1;
		author = "Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr6";
		MRT_SwitchItemPrevClass = "ptv_specterdr6";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_specterdr6_des: ptv_specterdr
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6 (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr6_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr6_des";
		MRT_SwitchItemNextClass = "ptv_specterdr6_des_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_des_2D";
		MRT_switchItemHintText = "3D";
	};
	class ptv_specterdr6_des_2d: ptv_specterdr6_2d
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6 2D (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr6_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr6_des";
		MRT_SwitchItemNextClass = "ptv_specterdr6_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_des";
		MRT_switchItemHintText = "2D";
	};
	class ptv_specterdr6_des_pip: ptv_specterdr6_des_2d
	{
		scope = 1;
		author = "Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr6_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_des";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_specterdr6_rmr: ptv_specterdr6
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6 RMR";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr6_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr6_rmr";
		MRT_SwitchItemNextClass = "ptv_specterdr6_rmr_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_rmr_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class DRscope: DRscope{};
				class Ironsight: Ironsight
				{
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr6_rmr_2D: ptv_specterdr6_2d
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6 RMR 2D";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr6_rmr_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr6_rmr";
		MRT_SwitchItemNextClass = "ptv_specterdr6_rmr";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_rmr";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class DRscope: DRscope{};
				class Ironsight: Ironsight
				{
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_specterdr6_rmr_pip: ptv_specterdr6_rmr_2D
	{
		scope = 1;
		author = "Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr6_rmr";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_rmr";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_specterdr6_rmr_des: ptv_specterdr6_rmr
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6 RMR (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr6_rmr_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr6_rmr_des";
		MRT_SwitchItemNextClass = "ptv_specterdr6_rmr_des_2D";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_rmr_des_2D";
		MRT_switchItemHintText = "3D";
	};
	class ptv_specterdr6_rmr_des_2D: ptv_specterdr6_rmr_2D
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Elcan SpecterDR6 RMR 2D (des)";
		picture = "\ptv_weapons\Data\UI\gear_ptv_specterdr6_rmr_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_specterdr6_rmr_des";
		MRT_SwitchItemNextClass = "ptv_specterdr6_rmr_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_rmr_des";
		MRT_switchItemHintText = "2D";
	};
	class ptv_specterdr6_rmr_des_pip: ptv_specterdr6_rmr_des_2D
	{
		scope = 1;
		author = "Project True Viking";
		MRT_SwitchItemNextClass = "ptv_specterdr6_rmr_des";
		MRT_SwitchItemPrevClass = "ptv_specterdr6_rmr_des";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_c79: ItemCore
	{
		scope = 2;
		author = "Christian Oelund, Project True Viking";
		displayName = "Elcan C79";
		picture = "\ptv_weapons\Data\UI\gear_ptv_c79_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_c79.p3d";
		descriptionShort = "Elcan C79 Optical sight<br/>Magnification: 3.4x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_c79_pip";
		MRT_SwitchItemPrevClass = "ptv_c79_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "c79";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class c79scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.0962;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteDistance[] = {200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 800;
				};
				class c79cqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_c79_2D: ptv_c79
	{
		scope = 2;
		author = "Christian Oelund, Project True Viking";
		displayName = "Elcan C79 2D";
		picture = "\ptv_weapons\Data\UI\gear_ptv_c79_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_c79.p3d";
		descriptionShort = "MG Scope<br/>Magnification: 3.4x";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\m145\c79-reticle_ca.paa";
			reticleTextureSize = 1;
			bodyTexture = "\ptv_weapons\reticle\data\m145\m145-body_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\m145\m145-bodyNight_ca.paa";
			bodyTextureSize = 2;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_c79";
		MRT_SwitchItemPrevClass = "ptv_c79_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Elcan C79";
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class C79
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = "3.4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "3.4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "3.4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_c79_2Dpip: ptv_c79_2D
	{
		scope = 1;
		author = "Christian Oelund, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_c79";
		MRT_SwitchItemPrevClass = "ptv_c79_pip";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_c79_pip: ItemCore
	{
		scope = 2;
		author = "Christian Oelund, Project True Viking";
		displayName = "Elcan C79 PIP";
		picture = "\ptv_weapons\Data\UI\gear_ptv_c79_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_c79_pip.p3d";
		descriptionShort = "MG Scope<br/>Magnification: 3.4x";
		weaponInfoType = "ptv_c79_3x_pip_handler";
		ACE_ScopeAdjust_Vertical[] = {-4,30};
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		MRT_SwitchItemNextClass = "ptv_c79_2D";
		MRT_SwitchItemPrevClass = "ptv_c79";
		MRT_switchItemHintText = "PIP";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Optical Sight";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class scope
				{
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticview";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					visionMode[] = {};
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
				class irons
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 0;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_M145: ItemCore
	{
		scope = 2;
		author = "Tom3dJay, Project True Viking";
		displayName = "Elcan M145";
		picture = "\ptv_weapons\Data\UI\gear_ptv_m145_ca.paa";
		model = "\ptv_weapons\acc\ptv_m145.p3d";
		descriptionShort = "MG Scope<br/>Magnification: 3.4x";
		weaponInfoType = "RscWeaponZeroing";
		MRT_SwitchItemNextClass = "ptv_m145_2D";
		MRT_SwitchItemPrevClass = "ptv_m145_2D";
		MRT_switchItemHintText = "3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			RMBhint = "Elcan M145";
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class M145
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = 0.0962;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					visionMode[] = {};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 1000;
					cameraDir = "";
				};
				class Kolimator
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_M145_2D: ptv_M145
	{
		scope = 2;
		author = "Tom3dJay, Project True Viking";
		displayName = "Elcan M145 2D";
		picture = "\ptv_weapons\Data\UI\gear_ptv_m145_ca.paa";
		model = "\ptv_weapons\acc\ptv_m145.p3d";
		descriptionShort = "MG Scope<br/>Magnification: 3.4x";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\m145\m145-reticle762_ca.paa";
			reticleTextureSize = 1;
			bodyTexture = "\ptv_weapons\reticle\data\m145\m145-body_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\m145\m145-bodyNight_ca.paa";
			bodyTextureSize = 2;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		MRT_SwitchItemNextClass = "ptv_m145";
		MRT_SwitchItemPrevClass = "ptv_m145";
		MRT_switchItemHintText = "2D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Elcan M145";
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class M145
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = "3.4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "3.4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "3.4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_M145_pip: ptv_M145_2D
	{
		scope = 1;
		author = "Tom3dJay, Project True Viking";
		MRT_SwitchItemNextClass = "ptv_m145";
		MRT_SwitchItemPrevClass = "ptv_m145";
		MRT_switchItemHintText = "2D";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_shortdot: ItemCore
	{
		scope = 2;
		author = "Kiory , Project True Viking";
		displayName = "S+B 1.1-4x20 PM II ShortDot";
		picture = "\ptv_weapons\data\ui\gear_ptv_shortdot_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_shortdot.p3d";
		descriptionShort = "Schmidt + Bender 1.1-4x20 PM II<br />Magnification: 1.1-4x";
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[] = {1.1,0.5};
			maxMagnificationReticleScale[] = {4,1};
			reticleDetailTextures[] = {{0,"\ptv_weapons\reticle\data\shortdot_cqb_ca.paa",1}};
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1.1;
			hideRedDotMagnification = 2.4;
			fadeReticleInterval[] = {2,0.9};
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 12;
			RMBhint = "ShortDot";
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class ShortDot
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "1.1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {50,100,200,300};
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 50;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsZoomMin = 0.2;
					opticsZoomMax = 0.5;
					opticsZoomInit = 0.375;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {50,100,200,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 50;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_shortdot_pip: ptv_shortdot
	{
		scope = 1;
		author = "Kiory , Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_shortdot_wdl: ptv_shortdot
	{
		scope = 2;
		author = "Kiory , Project True Viking";
		displayName = "S+B 1.1-4x20 PM II ShortDot (wdl)";
		picture = "\ptv_weapons\data\ui\gear_ptv_shortdot_wdl_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_shortdot_wdl.p3d";
	};
	class ptv_shortdot_wdl_pip: ptv_shortdot_wdl
	{
		scope = 1;
		author = "Kiory , Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_shortdot_des: ptv_shortdot
	{
		scope = 2;
		author = "Kiory , Project True Viking";
		displayName = "S+B 1.1-4x20 PM II ShortDot (des)";
		picture = "\ptv_weapons\data\ui\gear_ptv_shortdot_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_shortdot_des.p3d";
	};
	class ptv_shortdot_des_pip: ptv_shortdot_des
	{
		scope = 1;
		author = "Kiory , Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_shortdot_dcc: ItemCore
	{
		scope = 2;
		author = "SPS Team , Project True Viking";
		displayName = "S+B 1-8x24 PM II ShortDot Dual CC";
		picture = "\ptv_weapons\data\ui\gear_ptv_shortdot_dcc_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_shortdot_dcc.p3d";
		descriptionShort = "Schmidt + Bender 1-8x24 PM II<br />Magnification: 1-8x";
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[] = {1.03,1};
			maxMagnificationReticleScale[] = {8,"(7*1.0)"};
			reticleDetailTextures[] = {{0,"\ptv_weapons\reticle\data\mildotcc_2x_ca.paa",1},{2,"\ptv_weapons\reticle\data\mildotcc_4x_ca.paa","(1/2)"},{5,"\ptv_weapons\reticle\data\mildotcc_6x_ca.paa","(1/3)"},{7,"\ptv_weapons\reticle\data\mildotcc_8x_ca.paa","(1/4)"}};
			bodyTexture = "\ptv_weapons\reticle\data\scopering_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scopering_night_ca.paa";
			bodyTextureSize = 1.05;
			hideRedDotMagnification = 3.99;
			fadeReticleInterval[] = {2,0.75};
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 12;
			RMBhint = "ShortDot";
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class ShortDot
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "1.03 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "1.03 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {50,100,200,300};
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					discreteInitIndex = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.2;
					opticsZoomMax = 0.5;
					opticsZoomInit = 0.375;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {50,100,200,300};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 50;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_shortdot_dcc_wdl: ptv_shortdot_dcc
	{
		scope = 2;
		author = "SPS Team , Project True Viking";
		displayName = "S+B 1-8x24 PM II ShortDot Dual CC (wdl)";
		picture = "\ptv_weapons\data\ui\gear_ptv_shortdot_dcc_wdl_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_shortdot_dcc_wdl.p3d";
	};
	class ptv_shortdot_dcc_des: ptv_shortdot_dcc
	{
		scope = 2;
		author = "SPS Team , Project True Viking";
		displayName = "S+B 1-8x24 PM II ShortDot Dual CC (des)";
		picture = "\ptv_weapons\data\ui\gear_ptv_shortdot_dcc_des_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_shortdot_dcc_des.p3d";
	};
	class ptv_shortdot_dcc_pip: ptv_shortdot_dcc
	{
		scope = 1;
		author = "SPS Team , Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_shortdot_dcc_des_pip: ptv_shortdot_dcc_des
	{
		scope = 1;
		author = "SPS Team , Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_shortdot_dcc_wdl_pip: ptv_shortdot_dcc_wdl
	{
		scope = 1;
		author = "SPS Team , Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_PMII: ItemCore
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_pmII_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII.p3d";
		descriptionShort = "Schmidt + Bender 3-12x50 PM II<br />Magnification: 3-12x";
		inertia = 0.2;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[] = {3,0.9};
			maxMagnificationReticleScale[] = {12,"(4*0.9)"};
			reticleDetailTextures[] = {{0,"\ptv_weapons\reticle\data\mildot3_bar_ca.paa",1},{6,"\ptv_weapons\reticle\data\mildot6_bar_ca.paa","(1/2)"},{9,"\ptv_weapons\reticle\data\mildot9_bar_ca.paa","(1/3)"},{12,"\ptv_weapons\reticle\data\mildot12_bar_ca.paa","(1/4)"}};
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1.245;
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 15;
			RMBhint = "3-12x50 PM II";
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "12 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
					discreteDistanceInitIndex = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class ptv_PMII_sunshade: ptv_PMII
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II (sunshade)";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_PMII_sunshade_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_sunshade.p3d";
	};
	class ptv_PMII_des: ptv_PMII
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II (des)";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_pmII_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_des.p3d";
	};
	class ptv_PMII_des_sunshade: ptv_PMII_sunshade
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II (des) (sunshade)";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_PMII_des_sunshade_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_des_sunshade.p3d";
	};
	class ptv_PMII_wdl: ptv_PMII
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II (wdl)";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_pmII_wdl_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_wdl.p3d";
	};
	class ptv_PMII_wdl_sunshade: ptv_PMII_sunshade
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II (wdl) (sunshade)";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_PMII_wdl_sunshade_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_wdl_sunshade.p3d";
	};
	class ptv_PMII_rmr: ptv_PMII
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II RMR";
		author = "da12thMonkey, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_pmII_rmr_ca.paa";
		descriptionShort = "Schmidt + Bender 3-12x50 PM II<br />Magnification: 3-12x<br />Trijicon RMR<br />Magnification: 1x";
		model = "\ptv_weapons\acc\ptv_PMII_rmr.p3d";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class snip: Snip{};
				class rmr
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 50;
					distanceZoomMax = 100;
					discreteDistance[] = {50,100};
					discreteDistanceInitIndex = 1;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
	};
	class ptv_PMII_rmr_des: ptv_PMII_rmr
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II RMR (des)";
		author = "da12thMonkey, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_pmII_rmr_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_rmr_des.p3d";
	};
	class ptv_PMII_rmr_wdl: ptv_PMII_rmr
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II RMR (wdl)";
		author = "da12thMonkey, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_pmII_rmr_wdl_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_rmr_wdl.p3d";
	};
	class ptv_PMII_rmr_sunshade: ptv_PMII_rmr
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II RMR (sunshade)";
		author = "da12thMonkey, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_PMII_rmr_sunshade_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_rmr_shd.p3d";
	};
	class ptv_PMII_rmr_des_sunshade: ptv_PMII_rmr_sunshade
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II RMR (des) (sunshade)";
		author = "da12thMonkey, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_PMII_rmr_des_sunshade_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_rmr_des_shd.p3d";
	};
	class ptv_PMII_rmr_wdl_sunshade: ptv_PMII_rmr_sunshade
	{
		scope = 2;
		displayName = "S+B 3-12x50 PM II RMR (wdl) (sunshade)";
		author = "da12thMonkey, RedRogueXIII, Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_PMII_rmr_wdl_sunshade_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_rmr_wdl_shd.p3d";
	};
	class ptv_PMII_525: ItemCore
	{
		scope = 2;
		author = "da12thMonkey, Project True Viking";
		displayName = "S+B 5-25x56 PM II";
		picture = "\ptv_weapons\data\UI\gear_ptv_PMII_525_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_5-25.p3d";
		descriptionShort = "Schmidt + Bender 5-25x56 PM II<br />Magnification: 5-25x";
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[] = {5,0.9};
			maxMagnificationReticleScale[] = {25,"(5*0.9)"};
			reticleDetailTextures[] = {{0,"\ptv_weapons\reticle\data\mildot5_bar_ca.paa",1,"\ptv_weapons\reticle\data\mildot5_illum_ca.paa"},{10,"\ptv_weapons\reticle\data\mildot10_bar_ca.paa","(1/2)","\ptv_weapons\reticle\data\mildot10_illum_ca.paa"},{15,"\ptv_weapons\reticle\data\mildot15_bar_ca.paa","(1/3)","\ptv_weapons\reticle\data\mildot15_illum_ca.paa"},{20,"\ptv_weapons\reticle\data\mildot20_bar_ca.paa","(1/4)","\ptv_weapons\reticle\data\mildot20_illum_ca.paa"},{25,"\ptv_weapons\reticle\data\mildot25_bar_ca.paa","(1/5)","\ptv_weapons\reticle\data\mildot25_illum_ca.paa"}};
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1.245;
			manualReticleNightSwitch = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic_zooming";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 19;
			RMBhint = "5-25x56 PM II";
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "25 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500};
					discreteDistanceInitIndex = "2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class ptv_PMII_525_des: ptv_PMII_525
	{
		displayName = "S+B 5-25x56 PM II (D)";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\data\UI\gear_ptv_PMII_525_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_5-25_des.p3d";
		descriptionShort = "Schmidt + Bender 5-25x56 PM II<br />Magnification: 5-25x<br />Desert camouflage overpaint";
	};
	class ptv_PMII_525_wdl: ptv_PMII_525
	{
		displayName = "S+B 5-25x56 PM II (W)";
		author = "da12thMonkey, Project True Viking";
		picture = "\ptv_weapons\data\UI\gear_ptv_PMII_525_wdl_ca.paa";
		model = "\ptv_weapons\acc\ptv_PMII_5-25_wdl.p3d";
		descriptionShort = "Schmidt + Bender 5-25x56 PM II<br />Magnification: 5-25x<br />Woodland camouflage overpaint";
	};
	class ptv_s3x: ItemCore
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Steyr 3x scope";
		picture = "\ptv_weapons\Data\UI\gear_ptv_s3x_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_s3x.p3d";
		descriptionShort = "Rifle Scope<br/>Magnification: 3x";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\s3x_ret_ca.paa";
			reticleTextureSize = 0.6;
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Steyr 3x";
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_70.p3d";
			class OpticsModes
			{
				class S3X
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ptv_ta11_Blur"};
					opticsZoomMin = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
		inertia = 0.1;
	};
	class ptv_s3x_pip: ptv_s3x
	{
		scope = 1;
		author = "Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_s3x_des: ptv_s3x
	{
		scope = 2;
		displayName = "Steyr 3x scope (des)";
		author = "Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_s3x_des_ca.paa";
		model = "\ptv_weapons\acc\ptv_s3x_des.p3d";
	};
	class ptv_s3x_des_pip: ptv_s3x_des
	{
		scope = 1;
		author = "Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_s3x_wdl: ptv_s3x
	{
		scope = 2;
		displayName = "Steyr 3x scope (wdl)";
		author = "Project True Viking";
		picture = "\ptv_weapons\Data\UI\gear_ptv_s3x_wdl_ca.paa";
		model = "\ptv_weapons\acc\ptv_s3x_wdl.p3d";
	};
	class ptv_s3x_wdl_pip: ptv_s3x_wdl
	{
		scope = 1;
		author = "Project True Viking";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
		};
	};
	class ptv_CWS: ItemCore
	{
		scope = 2;
		author = "da12thMonkey, Project True Viking";
		displayName = "KITE";
		picture = "\ptv_weapons\Data\UI\gear_ptv_cws_ca.paa";
		model = "\ptv_weapons\acc\ptv_cws.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_optic_NVS1";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\cws_ca.paa";
			reticleTextureSize = 1;
			bodyTexture = "\ptv_weapons\reticle\data\scope_view2_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\scope_view2_night_ca.paa";
			bodyTextureSize = 1;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 12;
			optics = 1;
			modelOptics = "\x\cba\addons\optics\cba_optic_big_pip.p3d";
			class OpticsModes
			{
				class CWS
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					memoryPointCamera = "opticView";
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = "0 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					cameraDir = "";
				};
			};
		};
		inertia = 0.4;
	};
	class ptv_vipir2: ItemCore
	{
		scope = 2;
		author = "da12thMonkey, Project True Viking";
		displayName = "VIPIR-2";
		picture = "\ptv_weapons\Data\UI\gear_ptv_vipir2_ca.paa";
		model = "\ptv_weapons\acc\ptv_vipir2.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_optic_tws1";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\LWTI_IW_ca.paa";
			reticleTextureSize = 0.9;
			bodyTexture = "\ptv_weapons\reticle\data\optics_bg_square_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\optics_bg_square_ca.paa";
			bodyTextureSize = 0.8;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 14;
			opticType = 1;
			optics = 1;
			modelOptics = "\ptv_weapons\reticle\ptv_VIPIR_IW";
			class OpticsModes
			{
				class LWTI
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "5.4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "2.7 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "2.7 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discretefov[] = {"(0.25/2.7)","(0.25/5.4)"};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Ti"};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Ironsights
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
				};
			};
		};
		inertia = 0.4;
	};
	class ptv_vipir2p: ItemCore
	{
		scope = 2;
		author = "da12thMonkey, Project True Viking";
		displayName = "VIPIR-2+";
		picture = "\ptv_weapons\Data\UI\gear_ptv_vipir2+_ca.paa";
		model = "\ptv_weapons\acc\ptv_vipir2+.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_optic_tws1";
		class CBA_ScriptedOptic
		{
			reticleTexture = "\ptv_weapons\reticle\data\LWTI_IW_ca.paa";
			reticleTextureSize = 0.9;
			bodyTexture = "\ptv_weapons\reticle\data\optics_bg_square_ca.paa";
			bodyTextureNight = "\ptv_weapons\reticle\data\optics_bg_square_ca.paa";
			bodyTextureSize = 0.8;
		};
		weaponInfoType = "CBA_ScriptedOptic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 16;
			opticType = 1;
			optics = 1;
			modelOptics = "\ptv_weapons\reticle\ptv_VIPIR_IW";
			class OpticsModes
			{
				class VIPIR
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "7.2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "3.6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "3.6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000,1200,1400,1600};
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 1200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Ti"};
					thermalMode[] = {0,1};
					discretefov[] = {"(0.25/3.6)","(0.25/7.2)"};
					discreteInitIndex = 0;
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Ironsights
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
				};
			};
		};
		inertia = 0.4;
	};
	class ptv_cbj_sd: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "CBJ-MS PDW Suppressor";
		picture = "\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "\A3\Weapons_F\Acc\acca_snds_338_black_F";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.3;
				audibleFire = 0.03;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8";
				artilleryDispersionCoef = "1.0";
				fireLightCoef = "0.1";
				recoilCoef = "1.0";
				recoilProneCoef = "1.0";
				minRangeCoef = "1.0";
				minRangeProbabCoef = "1.0";
				midRangeCoef = "1.0";
				midRangeProbabCoef = "1.0";
				maxRangeCoef = "1.0";
				maxRangeProbabCoef = "1.0";
			};
		};
		inertia = 0.1;
	};
	class ptv_mp9qd: ItemCore
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9QD";
		picture = "\ptv_weapons\Data\UI\gear_ptv_mp9qd_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_mp9qd";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.3;
				audibleFire = 0.03;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8";
				artilleryDispersionCoef = "1.0";
				fireLightCoef = "0.1";
				recoilCoef = "1.0";
				recoilProneCoef = "1.0";
				minRangeCoef = "1.0";
				minRangeProbabCoef = "1.0";
				midRangeCoef = "1.0";
				midRangeProbabCoef = "1.0";
				maxRangeCoef = "1.0";
				maxRangeProbabCoef = "1.0";
			};
		};
		inertia = 0.1;
	};
	class ptv_mp9qd_t: ItemCore
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9QD Tan";
		picture = "\ptv_weapons\Data\UI\gear_ptv_mp9qd_t_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_mp9qd_t";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.3;
				audibleFire = 0.03;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8";
				artilleryDispersionCoef = "1.0";
				fireLightCoef = "0.1";
				recoilCoef = "1.0";
				recoilProneCoef = "1.0";
				minRangeCoef = "1.0";
				minRangeProbabCoef = "1.0";
				midRangeCoef = "1.0";
				midRangeProbabCoef = "1.0";
				maxRangeCoef = "1.0";
				maxRangeProbabCoef = "1.0";
			};
		};
		inertia = 0.1;
	};
	class ptv_trant9: muzzle_snds_H
	{
		author = "Project True Viking";
		displayName = "AAC Ti-Rant 9mm";
		picture = "\ptv_weapons\Data\UI\gear_ptv_tirant9_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_trant9";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 6;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.3;
				audibleFire = 0.03;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8";
				artilleryDispersionCoef = "1.0";
				fireLightCoef = "0.1";
				recoilCoef = "1.0";
				recoilProneCoef = "1.0";
				minRangeCoef = "1.0";
				minRangeProbabCoef = "1.0";
				midRangeCoef = "1.0";
				midRangeProbabCoef = "1.0";
				maxRangeCoef = "1.0";
				maxRangeProbabCoef = "1.0";
			};
		};
		inertia = 0.1;
	};
	class ptv_trant45: muzzle_snds_H
	{
		author = "Project True Viking";
		displayName = "AAC Ti-Rant .45ACP";
		picture = "\ptv_weapons\Data\UI\gear_ptv_tirant45_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_trant45";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 6;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.3;
				audibleFire = 0.04;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8";
				artilleryDispersionCoef = "1.0";
				fireLightCoef = "0.1";
				recoilCoef = "1.0";
				recoilProneCoef = "1.0";
				minRangeCoef = "1.0";
				minRangeProbabCoef = "1.0";
				midRangeCoef = "1.0";
				midRangeProbabCoef = "1.0";
				maxRangeCoef = "1.0";
				maxRangeProbabCoef = "1.0";
			};
		};
		inertia = 0.1;
	};
	class ptv_impuls: ptv_trant9
	{
		author = "Project True Viking";
		displayName = "B&T Impuls 9mm";
		picture = "\ptv_weapons\Data\UI\gear_ptv_impuls_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_impuls";
	};
	class ptv_rotex: muzzle_snds_H
	{
		author = "Project True Viking";
		displayName = "B&T Rotex V 5.56";
		model = "\ptv_weapons\acc\ptv_rotex";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rotex_ui_ca.paa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 8;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.3;
				audibleFire = 0.04;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8";
				artilleryDispersionCoef = "1.0";
				fireLightCoef = "0.1";
				recoilCoef = "1.0";
				recoilProneCoef = "1.0";
				minRangeCoef = "1.0";
				minRangeProbabCoef = "1.0";
				midRangeCoef = "1.0";
				midRangeProbabCoef = "1.0";
				maxRangeCoef = "1.0";
				maxRangeProbabCoef = "1.0";
			};
		};
		inertia = 0.1;
	};
	class ptv_rotex2: ptv_rotex
	{
		author = "Project True Viking";
		displayName = "B&T Rotex V Tan 5.56";
		model = "\ptv_weapons\acc\ptv_rotex2";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rotex_ui_ca.paa";
	};
	class ptv_rotexs: ptv_rotex
	{
		author = "Project True Viking";
		displayName = "B&T Rotex V Compact 5.56";
		model = "\ptv_weapons\acc\ptv_rotexs";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rotexs_ui_ca.paa";
	};
	class ptv_rotex308: muzzle_snds_H
	{
		author = "Project True Viking";
		displayName = "B&T Rotex V .308";
		picture = "\ptv_weapons\Data\UI\gear_ptv_rotex308_ui_ca.paa";
		model = "\ptv_weapons\acc\ptv_rotex308";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 12;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.3;
				audibleFire = 0.04;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8";
				artilleryDispersionCoef = "1.0";
				fireLightCoef = "0.1";
				recoilCoef = "1.0";
				recoilProneCoef = "1.0";
				minRangeCoef = "1.0";
				minRangeProbabCoef = "1.0";
				midRangeCoef = "1.0";
				midRangeProbabCoef = "1.0";
				maxRangeCoef = "1.0";
				maxRangeProbabCoef = "1.0";
			};
		};
		inertia = 0.2;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ptv_m72a7: Launcher_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "M72A7";
		descriptionShort = "Rocket launcher<br/>Caliber: 66mm<br/>Type: Single-shot Anti-Tank";
		picture = "\ptv_weapons\data\inv\m72a7_ca.paa";
		model = "\ptv_weapons\launchers\m72a7\ptv_m72a7";
		rhs_disposable = 1;
		magazineReloadTime = 1;
		modelOptics = "-";
		aimTransitionSpeed = 0.75;
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		magazines[] = {"ptv_m72a7_mag"};
		reloadAction = "ReloadRPG";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\launchers\m72a7\anim\ptv_m72a7.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
		reloadMagazineSound[] = {"\ptv_weapons\sound\at4prep.ogg",0.562341,1,50};
		soundFly[] = {"Launcher_NLAW_Shot_SoundSet","Launcher_NLAW_Tail_SoundSet"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.9952624,1,1500};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_law";
			dispersion = 0.2;
			minRange = 10;
			minRangeProbab = 0.9;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 300;
		};
		weaponInfoType = "ptv_rscOptics_m72a7";
		optics = 1;
		class OpticsModes
		{
			class ironsight
			{
				opticsID = 2;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				discreteDistanceInitIndex = 0;
				discreteDistance[] = {50,100,150,200,250,300,350,400};
				discreteDistanceCameraPoint[] = {"eye","eye_1","eye_2","eye_3","eye_4","eye_5","eye_6","eye_8","eye_8"};
				memorypointcamera = "eye";
				cameraDir = "look";
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
		class Library
		{
			libTextDesc = "M72A7 LAW is a portable one-shot 66 mm unguided anti-tank weapon";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 77;
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
		};
		class ItemInfo
		{
			priority = 3;
			RMBhint = "M72A7";
			onHoverText = "M72A7";
		};
		class VirtualArsenal
		{
			class Eventhandlers
			{
				itemSelected = "(_this # 0) call ptv_fnc_disposable_load";
			};
		};
		class Eventhandlers
		{
			class ptv_DisposableWeapon
			{
				fired = "_this call ptv_fnc_disposable;";
			};
		};
	};
	class ptv_m72a7_used: ptv_m72a7
	{
		scope = 1;
		author = "Project True Viking";
		model = "\ptv_weapons\launchers\m72a7\ptv_m72a7_used";
		descriptionShort = "Used rocket launcher<br/>Caliber: 66mm<br/>Type: Used launcher tube";
		displayName = "M72A7 (used)";
		magazines[] = {"ptv_launcher_dummy_mag"};
		weaponInfoType = "RscWeaponZeroing";
	};
	class ptv_p80: Pistol_Base_F
	{
		scope = 2;
		author = "Thanez, Project True Viking";
		model = "\ptv_weapons\pistols\p80\ptv_p80.p3d";
		picture = "\ptv_weapons\data\inv\p80_x_ca.paa";
		magazines[] = {"ptv_17Rnd_9mm_G17","ptv_33Rnd_9mm_G17"};
		magazineReloadSwitchPhase = 0.49;
		displayname = "P80";
		descriptionShort = "Service Pistol<br/>Caliber: 9mm";
		class Library
		{
			libTextDesc = "Askelandic P80 Service Pistol";
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.2238721,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.1622777,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.1622777,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.1622777,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.4125376,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 450;
		recoil = "recoil_pistol_rook40";
		class GunParticles: GunParticles
		{
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_PistolAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_SmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_p80t: ptv_p80
	{
		scope = 2;
		author = "Thanez, Project True Viking";
		model = "\ptv_weapons\pistols\p80\ptv_p80t.p3d";
		picture = "\ptv_weapons\data\inv\p80t_x_ca.paa";
		displayname = "P80 Tactical";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_g19: Pistol_Base_F
	{
		scope = 2;
		author = "Crash, Project True Viking";
		model = "\ptv_weapons\pistols\g19\ptv_g19.p3d";
		picture = "\ptv_weapons\data\inv\g19_x_ca.paa";
		magazines[] = {"ptv_15Rnd_9mm_G19","ptv_17Rnd_9mm_G17","ptv_33Rnd_9mm_G17"};
		magazineReloadSwitchPhase = 0.49;
		displayname = "Glock 19";
		descriptionShort = "Tactical Pistol<br/>Caliber: 9mm";
		class Library
		{
			libTextDesc = "Askelandic Glock 19 Tactical Pistol";
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.2238721,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.1622777,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.1622777,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.1622777,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.4125376,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 450;
		recoil = "recoil_pistol_rook40";
		class GunParticles: GunParticles
		{
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_PistolAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_SmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 18;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_g19t: ptv_g19
	{
		scope = 2;
		author = "Crash, Project True Viking";
		model = "\ptv_weapons\pistols\g19\ptv_g19t.p3d";
		picture = "\ptv_weapons\data\inv\g19t_x_ca.paa";
		displayname = "Glock 19 Tactical";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_l9a2: Pistol_Base_F
	{
		scope = 2;
		author = "Lunvr, Project True Viking";
		model = "\ptv_weapons\pistols\l9a2\ptv_l9a2.p3d";
		picture = "\ptv_weapons\data\inv\l9a2_x_ca.paa";
		magazines[] = {"ptv_17Rnd_9mm_L9A2"};
		magazineReloadSwitchPhase = 0.49;
		displayname = "L9A2";
		descriptionShort = "Service Pistol<br/>Caliber: 9mm";
		class Library
		{
			libTextDesc = "Askelandic Service Pistol";
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.2238721,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.1622777,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.1622777,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.1622777,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.4125376,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 450;
		recoil = "recoil_pistol_rook40";
		class GunParticles: GunParticles
		{
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_PistolAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_SmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 18;
			holsterScale = 0.97;
			class CowsSlot: asdg_PistolOpticMount
			{
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
			};
			class MuzzleSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_l9a2t: ptv_l9a2
	{
		scope = 2;
		author = "Lunvr, Project True Viking";
		model = "\ptv_weapons\pistols\l9a2\ptv_l9a2t.p3d";
		picture = "\ptv_weapons\data\inv\l9a2t_x_ca.paa";
		displayname = "L9A2 Tactical";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: asdg_PistolOpticMount
			{
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_l9a2_t: ptv_l9a2
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\l9a2_t_x_ca.paa";
		displayname = "L9A2 (Tan)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\l9a2\data\frame_t_co.paa"};
	};
	class ptv_l9a2_g: ptv_l9a2
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\l9a2_g_x_ca.paa";
		displayname = "L9A2 (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\l9a2\data\frame_g_co.paa"};
	};
	class ptv_l9a2t_t: ptv_l9a2t
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\l9a2t_t_x_ca.paa";
		displayname = "L9A2 Tactical (Tan)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\l9a2\data\frame_t_co.paa"};
	};
	class ptv_l9a2t_g: ptv_l9a2t
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\l9a2t_g_x_ca.paa";
		displayname = "L9A2 Tactical (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\l9a2\data\frame_g_co.paa"};
	};
	class ptv_p320: Pistol_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		model = "\ptv_weapons\pistols\p320\ptv_p320.p3d";
		picture = "\ptv_weapons\data\inv\p320_x_ca.paa";
		magazines[] = {"ptv_15Rnd_9mm_P320"};
		magazineReloadSwitchPhase = 0.49;
		displayname = "P320";
		descriptionShort = "Tactical Pistol<br/>Caliber: 9mm";
		class Library
		{
			libTextDesc = "Askelandic P320 Compact Pistol";
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.2238721,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",0.15848932,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",0.15848932,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_01",3.1622777,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_02",3.1622777,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_short_03",3.1622777,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",1.4125376,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 450;
		recoil = "recoil_pistol_rook40";
		class GunParticles: GunParticles
		{
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_PistolAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_SmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 18;
			holsterScale = 0.97;
			class CowsSlot: asdg_PistolOpticMount
			{
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
			};
			class MuzzleSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_p320t: ptv_p320
	{
		scope = 2;
		author = "Project True Viking";
		model = "\ptv_weapons\pistols\p320\ptv_p320t.p3d";
		picture = "\ptv_weapons\data\inv\p320t_x_ca.paa";
		displayname = "P320 Tactical";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot: asdg_PistolOpticMount
			{
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_p320_rb: ptv_p320
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\p320_x_ca.paa";
		displayname = "P320 (RB)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\p320\data\p320_rb_co.paa"};
	};
	class ptv_p320_b: ptv_p320
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\p320_b_x_ca.paa";
		displayname = "P320 (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\p320\data\p320_b_co.paa"};
	};
	class ptv_p320_g: ptv_p320
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\p320_g_x_ca.paa";
		displayname = "P320 (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\p320\data\p320_g_co.paa"};
	};
	class ptv_p320t_rb: ptv_p320t
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\p320t_x_ca.paa";
		displayname = "P320 Tactical (RB)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\p320\data\p320_rb_co.paa"};
	};
	class ptv_p320t_b: ptv_p320t
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\p320t_b_x_ca.paa";
		displayname = "P320 Tactical (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\p320\data\p320_b_co.paa"};
	};
	class ptv_p320t_g: ptv_p320t
	{
		scope = 2;
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\p320t_g_x_ca.paa";
		displayname = "P320 Tactical (Green)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\pistols\p320\data\p320_g_co.paa"};
	};
	class ptv_usp45t: Pistol_Base_F
	{
		scope = 2;
		author = "Crash, Project True Viking";
		model = "\ptv_weapons\pistols\usp\ptv_usp45t.p3d";
		picture = "\ptv_weapons\data\inv\usp_x_ca.paa";
		magazines[] = {"ptv_12Rnd_45ACP_USP"};
		displayname = "USP45 Tactical";
		descriptionShort = "Tactical Pistol<br/>Caliber: .45ACP";
		class Library
		{
			libTextDesc = "Askelandic USP45 Tactical Pistol";
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",0.56234133,1,30};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_01",0.31622776,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\closure_4_Five_02",0.31622776,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.13;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 300;
		recoil = "recoil_pistol_acpc2";
		class GunParticles: GunParticles
		{
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_PistolAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_SmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 19;
			class CowsSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_45ACP
			{
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
	};
	class ptv_hk69_Base_F: Pistol_Base_F
	{
		magazines[] = {"ptv_1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		magazineWell[] = {"UGL_40x36"};
		class Library
		{
			libTextDesc = "";
		};
		optics = 0;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		recoil = "recoil_mx";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RifleAssaultCloud";
			};
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {50,100,150,200,250,300,350};
		discreteDistanceInitIndex = 1;
		opticsZoomMin = 0.275;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			holsterScale = 1;
		};
		reloadAction = "GestureReloadFlaregun";
		descriptionShort = "Grenade Launcher<br />Caliber: 40mm";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\launchers\hk69\anim\ptv_hk69.rtm"};
		dexterity = 1.8;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"A3\sounds_f\weapons\Grenades\grenade_launcher_2",5.4125376,1,200};
				begin2[] = {"A3\sounds_f\weapons\Grenades\grenade_launcher_3",5.4125376,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.1;
			dispersion = 0.00093;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",1,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\flaregun_reload",2,1,10};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		muzzles[] = {"this"};
		magazineReloadSwitchPhase = 0.56;
	};
	class ptv_hk69: ptv_hk69_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "HK69";
		model = "\ptv_weapons\launchers\hk69\ptv_hk69.p3d";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\ptv_weapons\data\inv\hk69_x_ca.paa";
		cameraDir = "gl_look";
		discreteDistance[] = {50,100,150,200,250,300,350};
		discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
		discreteDistanceInitIndex = 0;
		maxZeroing = 350;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 57;
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "HK69";
			onHoverText = "HK69";
		};
	};
	class ptv_L2F_Base_F: Rifle_Base_F
	{
		author = "Project True Viking";
		model = "\ptv_weapons\launchers\m203\ptv_l2f.p3d";
		class Library
		{
			libTextDesc = "";
		};
		descriptionShort = "Grenade Launcher<br />Caliber: 40mm";
		weaponInfoType = "RscWeaponZeroing";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\ptv_l2f.rtm"};
		reloadAction = "GestureReloadMk20UGL";
		magazineReloadSwitchPhase = 0.49;
		cameraDir = "GL_look";
		discreteDistance[] = {50,100,150,200,250,300,350};
		discreteDistanceCameraPoint[] = {"GL_eye_50m","GL_eye_100m","GL_eye_150m","GL_eye_200m","GL_eye_250m","GL_eye_300m","GL_eye_350m"};
		discreteDistanceInitIndex = 1;
		maxZeroing = 350;
		magazines[] = {"ptv_1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.85,1,15};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.56234133,1,10};
		modes[] = {"single"};
		class single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
			};
			recoil = "M240Recoil";
			recoilProne = "M240Recoil";
			minRange = 30;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 47;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.45,0.27};
				iconScale = 0.2;
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "konec granatometu";
				effectName = "GrenadeLauncherCloud";
				positionName = "usti granatometu";
			};
		};
		aimTransitionSpeed = 0.7;
		recoil = "recoil_default";
		magazineReloadTime = 2;
		reloadTime = 0.1;
		optics = 1;
		modelOptics = "-";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		cartridgePos = "";
		cartridgeVel = "";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		cursorAim = "gl";
		cursor = "EmptyCursor";
	};
	class ptv_L2F: ptv_L2F_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "L2F (Black)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\ptv_weapons\data\inv\l2f_x_ca.paa";
		baseWeapon = "ptv_L2F";
		class ItemInfo
		{
			priority = 1;
			RMBhint = "L2F";
			onHoverText = "L2F";
		};
	};
	class ptv_L2F_g: ptv_L2F_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "L2F (Green)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\ptv_weapons\data\inv\l2f_g_x_ca.paa";
		baseWeapon = "ptv_L2F_g";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\launchers\m203\data\lmt_m203_g_co.paa","\ptv_weapons\launchers\m203\data\lmt_frame_g_co.paa","\ptv_weapons\launchers\m203\data\lmt_stock_g_co.paa"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "L2F";
			onHoverText = "L2F";
		};
	};
	class ptv_L2F_t: ptv_L2F_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "L2F (Tan)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\ptv_weapons\data\inv\l2f_t_x_ca.paa";
		baseWeapon = "ptv_L2F_t";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\launchers\m203\data\lmt_m203_t_co.paa","\ptv_weapons\launchers\m203\data\lmt_frame_t_co.paa","\ptv_weapons\launchers\m203\data\lmt_stock_t_co.paa"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "L2F";
			onHoverText = "L2F";
		};
	};
	class ptv_L2BPG_Base_F: Pistol_Base_F
	{
		magazines[] = {"ptv_1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
		class Library
		{
			libTextDesc = "";
		};
		model = "\ptv_weapons\launchers\m203\ptv_l2bpg.p3d";
		optics = 0;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		recoil = "recoil_mx";
		inertia = 0.2;
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "konec granatometu";
				effectName = "GrenadeLauncherCloud";
				positionName = "usti granatometu";
			};
		};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {50,100};
		discreteDistanceInitIndex = 0;
		opticsZoomMin = 0.275;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.6,0.27};
				iconScale = 0.15;
			};
			holsterScale = 0.9;
		};
		reloadAction = "GestureReloadPistolHeavy02";
		descriptionShort = "Grenade Launcher<br />Caliber: 40mm";
		dexterity = 1.8;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
			};
			recoil = "M240Recoil";
			recoilProne = "M240Recoil";
			reloadTime = 0.1;
			dispersion = 0.00093;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.56234133,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.85,1,15};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		magazineReloadSwitchPhase = 0.49;
	};
	class ptv_L2BPG: ptv_L2BPG_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "L2BPG (Black)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\ptv_weapons\data\inv\l2bpg_x_ca.paa";
		discreteDistance[] = {50,100};
		discreteDistanceInitIndex = 0;
		maxZeroing = 350;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "L2BPG";
			onHoverText = "L2BPG";
		};
	};
	class ptv_L2BPG_g: ptv_L2BPG_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "L2BPG (Green)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\ptv_weapons\data\inv\l2bpg_g_x_ca.paa";
		discreteDistance[] = {50,100};
		discreteDistanceInitIndex = 0;
		maxZeroing = 350;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\launchers\m203\data\lmt_m203_g_co.paa","\ptv_weapons\launchers\m203\data\lmt_frame_g_co.paa"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "L2BPG";
			onHoverText = "L2BPG";
		};
	};
	class ptv_L2BPG_t: ptv_L2BPG_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "L2BPG (Tan)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\ptv_weapons\data\inv\l2bpg_t_x_ca.paa";
		discreteDistance[] = {50,100};
		discreteDistanceInitIndex = 0;
		maxZeroing = 350;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\launchers\m203\data\lmt_m203_t_co.paa","\ptv_weapons\launchers\m203\data\lmt_frame_t_co.paa"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "L2BPG";
			onHoverText = "L2BPG";
		};
	};
	class ptv_cbj_ms: Rifle_Base_F
	{
		author = "Syn , Project True Viking";
		scope = 2;
		model = "\ptv_weapons\smgs\cbj-ms\ptv_cbj_ms.p3d";
		modelOptics = "-";
		displayName = "CBJ-MS (9mm)";
		picture = "\ptv_weapons\data\inv\cbj_ms_x_ca.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		inertia = 0.2;
		aimTransitionSpeed = 1.5;
		dexterity = 1.8;
		initSpeed = -1;
		magazines[] = {"ptv_30Rnd_9x19_CBJ_Mag","ptv_30Rnd_9x19_Red_CBJ_Mag","ptv_30Rnd_9x19_Sub_CBJ_Mag","ptv_100Rnd_9x19_CBJ_Mag","ptv_100Rnd_9x19_Red_CBJ_Mag","ptv_100Rnd_9x19_Sub_CBJ_Mag"};
		magazineReloadSwitchPhase = 0.49;
		maxZeroing = 400;
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		descriptionShort = "Personal defense weapon<br/>Caliber: 9mm";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\smgs\cbj-ms\Anim\ptv_cbj.rtm"};
		reloadAction = "GestureReloadSMG_01";
		recoil = "recoil_smg_02";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.5011872,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.25118864,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.2589254,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.8912509,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.8912509,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.8912509,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0857;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			dispersion = 0.00146;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.2589254,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.8912509,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.8912509,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.8912509,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0857;
			recoil = "recoil_auto_smg_02";
			recoilProne = "recoil_auto_prone_smg_02";
			dispersion = 0.00146;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"ptv_cbj_sd"};
				iconPosition[] = {0.1,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.4,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.28,0.4};
				iconScale = 0.25;
			};
		};
		class ItemInfo
		{
			priority = 2;
		};
		class Library
		{
			libTextDesc = "CBJ-MS is a personal defense weapon submachine gun manufactured by Saab Bofors Dynamics for Sweden. It is chambered for both 6.5x25 CBJ and 9x19mm Parabellum cartridges.";
		};
	};
	class ptv_cbj_ms2: ptv_cbj_ms
	{
		author = "Syn , Project True Viking";
		scope = 2;
		displayName = "CBJ-MS";
		magazines[] = {"ptv_30Rnd_65x25_CBJ_Mag","ptv_30Rnd_65x25_Red_CBJ_Mag","ptv_30Rnd_65x25_Sub_CBJ_Mag","ptv_100Rnd_65x25_CBJ_Mag","ptv_100Rnd_65x25_Red_CBJ_Mag","ptv_100Rnd_65x25_Sub_CBJ_Mag"};
		descriptionShort = "Personal defense weapon<br/>Caliber: 6.5x25 CBJ";
		initSpeed = -1;
		class Single: Single
		{
			dispersion = 0.00116;
			reloadTime = 0.0857;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00116;
			reloadTime = 0.0857;
		};
	};
	class ptv_cbj_ms_b: ptv_cbj_ms
	{
		author = "Syn , Project True Viking";
		scope = 2;
		displayName = "CBJ-MS Black (9mm)";
		picture = "\ptv_weapons\data\inv\cbj_ms_b_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\cbj-ms\data\CBJ_b_co.paa"};
	};
	class ptv_cbj_ms2_b: ptv_cbj_ms2
	{
		author = "Syn , Project True Viking";
		scope = 2;
		displayName = "CBJ-MS Black";
		picture = "\ptv_weapons\data\inv\cbj_ms_b_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\cbj-ms\data\CBJ_b_co.paa"};
	};
	class ptv_mp9: Rifle_Base_F
	{
		author = "Project True Viking";
		scope = 2;
		model = "\ptv_weapons\smgs\mp9\ptv_mp9.p3d";
		modelOptics = "-";
		displayName = "MP9 (9mm)";
		picture = "\ptv_weapons\data\inv\mp9_x_ca.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		inertia = 0.2;
		aimTransitionSpeed = 1.5;
		dexterity = 1.8;
		initSpeed = -1;
		magazines[] = {"ptv_30Rnd_9x19_MP9_Mag","ptv_30Rnd_9x19_Red_MP9_Mag","ptv_30Rnd_9x19_Sub_MP9_Mag","ptv_20Rnd_9x19_MP9_Mag","ptv_20Rnd_9x19_Red_NP9_Mag","ptv_100Rnd_9x19_Sub_MP9_Mag"};
		magazineReloadSwitchPhase = 0.49;
		maxZeroing = 400;
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		descriptionShort = "Personal defense weapon<br/>Caliber: 9mm";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\smgs\mp9\Anim\ptv_mp9.rtm"};
		reloadAction = "GestureReloadSMG_01";
		recoil = "recoil_smg_02";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.5011872,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.25118864,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.2589254,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.8912509,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.8912509,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.8912509,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0857;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			dispersion = 0.00146;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.2589254,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.8912509,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.8912509,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.8912509,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0857;
			recoil = "recoil_auto_smg_02";
			recoilProne = "recoil_auto_prone_smg_02";
			dispersion = 0.00146;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"ptv_mp9qd","ptv_mp9qd_t"};
				iconPosition[] = {0.1,0.45};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.52,0.4};
				iconScale = 0.15;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
		};
		class ItemInfo
		{
			priority = 2;
		};
		class Library
		{
			libTextDesc = "The Brugger & Thomet MP9 (Maschinenpistole 9mm, German for machine pistol) is a submachine gun chambered for the 9Ã—19mm Parabellum cartridge that is designed and manufactured by Brugger & Thomet.The MP9 is a selective-fire submachine gun. It uses 15, 20, 25, and 30 round transparent polymer detachable box magazines. It has three safeties: an ambidextrous safety/fire mode selector switch button (manual safety), a trigger safety, and a drop safety. The MP9 is a development of the Steyr TMP. The design of the TMP was purchased from Steyr in 2001. Differences from the TMP include a stock that folds to the right side of the weapon, an integrated Picatinny rail, and a new trigger safety.";
		};
	};
	class ptv_mp9_cbj: ptv_mp9
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9 (CBJ)";
		magazines[] = {"ptv_30Rnd_65x25_MP9_Mag","ptv_30Rnd_65x25_Red_MP9_Mag","ptv_30Rnd_65x25_Sub_MP9_Mag","ptv_20Rnd_65x25_MP9_Mag","ptv_20Rnd_65x25_Red_MP9_Mag","ptv_20Rnd_65x25_Sub_MP9_Mag"};
		descriptionShort = "Personal defense weapon<br/>Caliber: 6.5x25 CBJ";
		initSpeed = -1;
		class Single: Single
		{
			dispersion = 0.00116;
			reloadTime = 0.0857;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00116;
			reloadTime = 0.0857;
		};
	};
	class ptv_mp9_b: ptv_mp9
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9 Black (9mm)";
		picture = "\ptv_weapons\data\inv\mp9_b_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\mp9\data\mp9_co.paa"};
	};
	class ptv_mp9_t: ptv_mp9
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9 Tan (9mm)";
		picture = "\ptv_weapons\data\inv\mp9_t_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\mp9\data\mp9_t_co.paa"};
	};
	class ptv_mp9_cbj_b: ptv_mp9_cbj
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9 Black (CBJ)";
		picture = "\ptv_weapons\data\inv\mp9_b_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\mp9\data\mp9_co.paa"};
	};
	class ptv_mp9_cbj_t: ptv_mp9_cbj
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9 Tan (CBJ)";
		picture = "\ptv_weapons\data\inv\mp9_t_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\mp9\data\mp9_t_co.paa"};
	};
	class ptv_mp9p: ptv_mp9
	{
		author = "Project True Viking";
		picture = "\ptv_weapons\data\inv\mp9_b_x_ca.paa";
		displayName = "MP9";
		type = 2;
		reloadAction = "GestureReloadPistol";
		model = "\ptv_weapons\smgs\mp9\ptv_mp9p.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\smgs\mp9\Anim\ptv_mp9p.rtm"};
	};
	class ptv_mp9p_b: ptv_mp9p
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9 Black (9mm)";
		picture = "\ptv_weapons\data\inv\mp9_b_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\mp9\data\mp9_co.paa"};
	};
	class ptv_mp9p_t: ptv_mp9p
	{
		author = "Project True Viking";
		scope = 2;
		displayName = "MP9 Tan (9mm)";
		picture = "\ptv_weapons\data\inv\mp9_t_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\smgs\mp9\data\mp9_t_co.paa"};
	};
	class ptv_rs556: Rifle_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		magazines[] = {"ptv_30Rnd_556x45_Pmag","ptv_30Rnd_556x45_Pmag_Red","ptv_30Rnd_556x45_Stanag","ptv_30Rnd_556x45_Stanag_Red"};
		magazineWell[] = {"STANAG_556x45"};
		class Library
		{
			libTextDesc = "Askelandic RS556 Rifle";
		};
		reloadAction = "GestureReloadSMG_02";
		maxZeroing = 800;
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 78;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.03,0.44};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.39};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.37,0.44};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class GripodSlot: PTV_gripod_slot{};
		};
		ptv_grip1_change = "ptv_rs556_VG";
		ptv_grip2_change = "ptv_rs556_AFG";
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56 mm";
		displayName = "G-M/23";
		model = "\ptv_weapons\rifles\rs556\ptv_rs556.p3d";
		picture = "\ptv_weapons\data\inv\rs556_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\ptv_rs556.rtm"};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.4;
		initSpeed = -0.94;
		recoil = "recoil_spar_lsw";
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.75,1,10};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0005818;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0005818;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class M203: UGL_F
		{
			displayName = "M203";
			descriptionShort = "40mm Grenade Launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.7943282,1,10};
			magazines[] = {"ptv_1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			cameraDir = "GL_look";
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"GL_eye_50m","GL_eye_100m","GL_eye_150m","GL_eye_200m","GL_eye_250m","GL_eye_300m","GL_eye_350m"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadTrgUGL";
			magazineReloadSwitchPhase = 0.49;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Dry_TRG20",0.39810717,1,15};
		magazineReloadSwitchPhase = 0.3;
	};
	class ptv_rs556_b: ptv_rs556
	{
		author = "Project True Viking";
		displayName = "G-M/23 (Black)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\rs556\data\low_co.paa","\ptv_weapons\rifles\rs556\data\up_co.paa","\ptv_weapons\rifles\rs556\data\stock_co.paa"};
		picture = "\ptv_weapons\data\inv\rs556_b_x_ca.paa";
		ptv_grip1_change = "ptv_rs556_b_VG";
		ptv_grip2_change = "ptv_rs556_b_AFG";
	};
	class ptv_rs556_t: ptv_rs556
	{
		author = "Project True Viking";
		displayName = "G-M/23 (Tan)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\rs556\data\low_t_co.paa","\ptv_weapons\rifles\rs556\data\up_t_co.paa","\ptv_weapons\rifles\rs556\data\stock_t_co.paa"};
		picture = "\ptv_weapons\data\inv\rs556_t_x_ca.paa";
		ptv_grip1_change = "ptv_rs556_t_VG";
		ptv_grip2_change = "ptv_rs556_t_AFG";
	};
	class ptv_rs556_VG: ptv_rs556
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/23";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556";
	};
	class ptv_rs556_AFG: ptv_rs556
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/23";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556";
	};
	class ptv_rs556_b_VG: ptv_rs556_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/23 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556_b";
	};
	class ptv_rs556_b_AFG: ptv_rs556_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/23 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556_b";
	};
	class ptv_rs556_t_VG: ptv_rs556_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/23 (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556_t";
	};
	class ptv_rs556_t_AFG: ptv_rs556_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/23 (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556_t";
	};
	class ptv_rs556_gl: ptv_rs556
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "G-M/23 GL";
		picture = "\ptv_weapons\data\inv\rs556_gl_x_ca.paa";
		model = "\ptv_weapons\rifles\rs556\ptv_rs556_gl.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\ptv_rs556_gl.rtm"};
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 106;
			class UnderBarrelSlot{};
			class GripodSlot{};
		};
		inertia = 0.6;
		dexterity = 1.4;
	};
	class ptv_rs556_gl_b: ptv_rs556_gl
	{
		author = "Project True Viking";
		displayName = "G-M/23 GL (Black)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\rs556\data\low_co.paa","\ptv_weapons\rifles\rs556\data\up_co.paa","\ptv_weapons\rifles\rs556\data\stock_co.paa"};
		picture = "\ptv_weapons\data\inv\rs556_gl_b_x_ca.paa";
	};
	class ptv_rs556_gl_t: ptv_rs556_gl
	{
		author = "Project True Viking";
		displayName = "G-M/23 GL (Tan)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\rs556\data\low_t_co.paa","\ptv_weapons\rifles\rs556\data\up_t_co.paa","\ptv_weapons\rifles\rs556\data\stock_t_co.paa"};
		picture = "\ptv_weapons\data\inv\rs556_gl_t_x_ca.paa";
	};
	class ptv_rs556s: ptv_rs556
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "K-M/23";
		picture = "\ptv_weapons\data\inv\rs556s_x_ca.paa";
		model = "\ptv_weapons\rifles\rs556\ptv_rs556s.p3d";
		reloadTime = 0.07;
		recoil = "recoil_spar";
		inertia = 0.3;
		dexterity = 1.6;
		initSpeed = -0.8979;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75.82;
			allowedSlots[] = {901};
			class UnderBarrelSlot: UnderBarrelSlot{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.1,0.44};
			};
			class GripodSlot: GripodSlot{};
		};
		class Single: Single
		{
			reloadTime = 0.075;
			dispersion = 0.00072725;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			dispersion = 0.00072725;
		};
		ptv_grip1_change = "ptv_rs556s_VG";
		ptv_grip2_change = "ptv_rs556s_AFG";
	};
	class ptv_rs556s_b: ptv_rs556s
	{
		author = "Project True Viking";
		displayName = "K-M/23 (Black)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\rs556\data\low_co.paa","\ptv_weapons\rifles\rs556\data\up_co.paa","\ptv_weapons\rifles\rs556\data\stock_co.paa"};
		picture = "\ptv_weapons\data\inv\rs556s_b_x_ca.paa";
		ptv_grip1_change = "ptv_rs556s_b_VG";
		ptv_grip2_change = "ptv_rs556s_b_AFG";
	};
	class ptv_rs556s_t: ptv_rs556s
	{
		author = "Project True Viking";
		displayName = "K-M/23 (Tan)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\rs556\data\low_t_co.paa","\ptv_weapons\rifles\rs556\data\up_t_co.paa","\ptv_weapons\rifles\rs556\data\stock_t_co.paa"};
		picture = "\ptv_weapons\data\inv\rs556s_t_x_ca.paa";
		ptv_grip1_change = "ptv_rs556s_t_VG";
		ptv_grip2_change = "ptv_rs556s_t_AFG";
	};
	class ptv_rs556s_VG: ptv_rs556s
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/23";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556s";
	};
	class ptv_rs556s_AFG: ptv_rs556s
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/23";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556s";
	};
	class ptv_rs556s_b_VG: ptv_rs556s_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/23 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556s_b";
	};
	class ptv_rs556s_b_AFG: ptv_rs556s_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/23 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556s_b";
	};
	class ptv_rs556s_t_VG: ptv_rs556s_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/23 (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556s_t";
	};
	class ptv_rs556s_t_AFG: ptv_rs556s_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/23 (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_rs556_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rs556s_t";
	};
	class ptv_rk62m2: Rifle_Base_F
	{
		scope = 2;
		author = "Tuuttipingu";
		magazines[] = {"ptv_30Rnd_762x39_RK","ptv_30Rnd_762x39_RK_Tracer_Red"};
		magazineWell[] = {"AK_762x39","CBA_762x39_AK","CBA_762x39_RPK"};
		class Library
		{
			libTextDesc = "Finnish RK62 Modernized Rifle";
		};
		reloadAction = "ptv_GestureReloadAGM";
		maxZeroing = 1000;
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] = {0,0.42};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class GripodSlot: PTV_gripod_slot{};
		};
		ptv_grip1_change = "ptv_RK62M2_VG";
		ptv_grip2_change = "ptv_RK62M2_AFG";
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		discreteDistance[] = {200,300,400,500,600};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		descriptionShort = "Assault rifle<br/>Caliber: 7.62 mm";
		displayName = "RK-62M2";
		model = "\ptv_weapons\rifles\rk\ptv_rk62m2.p3d";
		picture = "\ptv_weapons\data\inv\rk62m2_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\ptv_ag.rtm"};
		aimTransitionSpeed = 0.9;
		inertia = 0.6;
		dexterity = 1.4;
		initSpeed = 730;
		recoil = "recoil_rpk12";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.75,1,10};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.5011872,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.5011872,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.0923;
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.5011872,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.5011872,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.0923;
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		reloadMagazineSound[] = {"\ptv_weapons\sound\ag_reload",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Dry_TRG20",0.39810717,1,15};
		magazineReloadSwitchPhase = 0.3;
	};
	class ptv_rk62m2_b: ptv_rk62m2
	{
		author = "Project True Viking";
		displayName = "RK-62M2 (Black)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\rk\data\rk_frame_b_co.paa","\ptv_weapons\rifles\rk\data\rk_grip_b_co.paa","\ptv_weapons\rifles\rk\data\rk_rails_b_co.paa","\ptv_weapons\rifles\rk\data\rk_stock_b_co.paa","\ptv_weapons\rifles\agm\data\agm_b_co.paa"};
		picture = "\ptv_weapons\data\inv\rk62m2_b_x_ca.paa";
		ptv_grip1_change = "ptv_rk62m2_b_VG";
		ptv_grip2_change = "ptv_rk62m2_b_AFG";
	};
	class ptv_rk95: ptv_rk62m2
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\rk\ptv_rk95.p3d";
		displayName = "RK-95TP";
		picture = "\ptv_weapons\data\inv\rk95_x_ca.paa";
		discreteDistance[] = {150,300};
		discreteDistanceInitIndex = 1;
		class Library
		{
			libTextDesc = "Finnish RK95TP Rifle";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 83;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class MuzzleSlot: MuzzleSlot{};
			class GripodSlot{};
		};
	};
	class ptv_RK62M2_VG: ptv_rk62m2
	{
		author = "Tuuttipingu";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "RK-62M2";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rk62m2";
	};
	class ptv_RK62M2_AFG: ptv_rk62m2
	{
		author = "Tuuttipingu";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "RK-62M2";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rk62m2";
	};
	class ptv_RK62M2_b_VG: ptv_rk62m2_b
	{
		author = "Tuuttipingu";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "RK-62M2 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rk62m2_b";
	};
	class ptv_RK62M2_b_AFG: ptv_rk62m2_b
	{
		author = "Tuuttipingu";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "RK-62M2 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_rk62m2_b";
	};
	class ptv_hk433: Rifle_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		magazines[] = {"ptv_30Rnd_556x45_Pmag","ptv_30Rnd_556x45_Pmag_Red","ptv_30Rnd_556x45_Stanag","ptv_30Rnd_556x45_Stanag_Red"};
		magazineWell[] = {"STANAG_556x45"};
		class Library
		{
			libTextDesc = "Askelandic Hk433 Rifle";
		};
		maxZeroing = 800;
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 77;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.03,0.44};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.39};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.37,0.44};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class GripodSlot: PTV_gripod_slot{};
		};
		ptv_grip1_change = "ptv_hk433_VG";
		ptv_grip2_change = "ptv_hk433_AFG";
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56 mm";
		displayName = "Hk433";
		model = "\ptv_weapons\rifles\hk433\ptv_hk433.p3d";
		picture = "\ptv_weapons\data\inv\hk433_x_ca.paa";
		reloadAction = "ptv_GestureReloadHK433";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\handAnim_ptv_hk433.rtm"};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.4;
		initSpeed = -0.94;
		recoil = "recoil_spar_lsw";
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		magazineReloadSwitchPhase = 0.3;
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Dry_TRG20",0.39810717,1,15};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.75,1,10};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0005818;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0005818;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class M203: UGL_F
		{
			displayName = "M203";
			descriptionShort = "40mm Grenade Launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.7943282,1,10};
			magazines[] = {"ptv_1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			cameraDir = "GL_look";
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"GL_eye_50m","GL_eye_100m","GL_eye_150m","GL_eye_200m","GL_eye_250m","GL_eye_300m","GL_eye_350m"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadTrgUGL";
			magazineReloadSwitchPhase = 0.49;
		};
	};
	class ptv_hk433_b: ptv_hk433
	{
		author = "Project True Viking";
		displayName = "Hk433 (Black)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\hk433\data\hk433_01_co.paa","\ptv_weapons\rifles\hk433\data\hk433_02_co.paa","\ptv_weapons\rifles\hk433\data\hk433_03_co.paa","\ptv_weapons\rifles\hk433\data\hk433_04_co.paa","\ptv_weapons\rifles\hk433\data\mlok_rail_co.paa"};
		picture = "\ptv_weapons\data\inv\hk433_b_x_ca.paa";
		ptv_grip1_change = "ptv_hk433_b_VG";
		ptv_grip2_change = "ptv_hk433_b_AFG";
	};
	class ptv_hk433_t: ptv_hk433
	{
		author = "Project True Viking";
		displayName = "Hk433 (Tan)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\hk433\data\hk433_01_t_co.paa","\ptv_weapons\rifles\hk433\data\hk433_02_t_co.paa","\ptv_weapons\rifles\hk433\data\hk433_03_t_co.paa","\ptv_weapons\rifles\hk433\data\hk433_04_t_co.paa","\ptv_weapons\rifles\hk433\data\mlok_rail_t_co.paa"};
		picture = "\ptv_weapons\data\inv\hk433_t_x_ca.paa";
		ptv_grip1_change = "ptv_hk433_t_VG";
		ptv_grip2_change = "ptv_hk433_t_AFG";
	};
	class ptv_hk433_VG: ptv_hk433
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433";
	};
	class ptv_hk433_AFG: ptv_hk433
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433";
	};
	class ptv_hk433_b_VG: ptv_hk433_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433_b";
	};
	class ptv_hk433_b_AFG: ptv_hk433_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433_b";
	};
	class ptv_hk433_t_VG: ptv_hk433_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433 (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433_t";
	};
	class ptv_hk433_t_AFG: ptv_hk433_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433 (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433_t";
	};
	class ptv_hk433s: ptv_hk433
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "Hk433s";
		picture = "\ptv_weapons\data\inv\hk433s_x_ca.paa";
		model = "\ptv_weapons\rifles\hk433\ptv_hk433s.p3d";
		reloadTime = 0.07;
		recoil = "recoil_spar";
		reloadAction = "ptv_GestureReloadHK433";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\handAnim_ptv_hk433.rtm"};
		inertia = 0.3;
		dexterity = 1.6;
		initSpeed = -0.8979;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72.82;
			allowedSlots[] = {901};
			class UnderBarrelSlot: UnderBarrelSlot{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.1,0.44};
			};
			class GripodSlot: GripodSlot{};
		};
		class Single: Single
		{
			reloadTime = 0.075;
			dispersion = 0.00072725;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.075;
			dispersion = 0.00072725;
		};
		ptv_grip1_change = "ptv_hk433s_VG";
		ptv_grip2_change = "ptv_hk433s_AFG";
	};
	class ptv_hk433s_b: ptv_hk433s
	{
		author = "Project True Viking";
		displayName = "Hk433s (Black)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\hk433\data\hk433_01_co.paa","\ptv_weapons\rifles\hk433\data\hk433_02_co.paa","\ptv_weapons\rifles\hk433\data\hk433_03_co.paa","\ptv_weapons\rifles\hk433\data\hk433_04_co.paa","\ptv_weapons\rifles\hk433\data\mlok_rail_co.paa"};
		picture = "\ptv_weapons\data\inv\hk433s_b_x_ca.paa";
		ptv_grip1_change = "ptv_hk433s_b_VG";
		ptv_grip2_change = "ptv_hk433s_b_AFG";
	};
	class ptv_hk433s_t: ptv_hk433s
	{
		author = "Project True Viking";
		displayName = "Hk433s (Tan)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\hk433\data\hk433_01_t_co.paa","\ptv_weapons\rifles\hk433\data\hk433_02_t_co.paa","\ptv_weapons\rifles\hk433\data\hk433_03_t_co.paa","\ptv_weapons\rifles\hk433\data\hk433_04_t_co.paa","\ptv_weapons\rifles\hk433\data\mlok_rail_t_co.paa"};
		picture = "\ptv_weapons\data\inv\hk433s_t_x_ca.paa";
		ptv_grip1_change = "ptv_hk433s_t_VG";
		ptv_grip2_change = "ptv_hk433s_t_AFG";
	};
	class ptv_hk433s_VG: ptv_hk433s
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433s";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433s";
	};
	class ptv_hk433s_AFG: ptv_hk433s
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433s";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433s";
	};
	class ptv_hk433s_b_VG: ptv_hk433s_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433s (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433s_b";
	};
	class ptv_hk433s_b_AFG: ptv_hk433s_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433s (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433s_b";
	};
	class ptv_hk433s_t_VG: ptv_hk433s_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433s (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433s_t";
	};
	class ptv_hk433s_t_AFG: ptv_hk433s_t
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Hk433s (Tan)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_hk433_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_hk433s_t";
	};
	class ptv_AG: Rifle_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		magazines[] = {"ptv_35Rnd_556x45_AG","ptv_35Rnd_556x45_AG_Tracer_Red"};
		magazineWell[] = {"GALIL_556x45"};
		class Library
		{
			libTextDesc = "Askelandic Galil Rifle";
		};
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0,0.42};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot{};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		descriptionShort = "Assault rifle<br/>Caliber: 5.56 mm";
		displayName = "G-M/90";
		model = "\ptv_weapons\rifles\ag\ptv_AG.p3d";
		picture = "\ptv_weapons\data\inv\AG_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\handAnim_ptv_ag.rtm"};
		reloadAction = "ptv_GestureReloadAG";
		maxZeroing = 1000;
		aimTransitionSpeed = 0.9;
		inertia = 0.6;
		dexterity = 1.4;
		initSpeed = 950;
		recoil = "recoil_rpk12";
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.75,1,10};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.5011872,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.5011872,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				Begin1[] = {"\ptv_weapons\sound\galil\Galil_s1",1,1,1200};
				Begin2[] = {"\ptv_weapons\sound\galil\Galil_s2",1,1,1200};
				Begin3[] = {"\ptv_weapons\sound\galil\Galil_s3",1,1,1200};
				Begin4[] = {"\ptv_weapons\sound\galil\Galil_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,240};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,240};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0923;
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.5011872,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.5011872,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				Begin1[] = {"\ptv_weapons\sound\galil\Galil_s1",1,1,1200};
				Begin2[] = {"\ptv_weapons\sound\galil\Galil_s2",1,1,1200};
				Begin3[] = {"\ptv_weapons\sound\galil\Galil_s3",1,1,1200};
				Begin4[] = {"\ptv_weapons\sound\galil\Galil_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,240};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,240};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.0923;
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class EGLM: UGL_F
		{
			displayName = "M203";
			descriptionShort = "40mm Grenade Launcher";
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.7943282,1,10};
			magazines[] = {"ptv_1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36"};
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadTrgUGL";
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
					soundClosure[] = {"closure1",1};
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
				};
			};
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		reloadMagazineSound[] = {"\ptv_weapons\sound\ag_reload",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Dry_TRG20",0.39810717,1,15};
		magazineReloadSwitchPhase = 0.3;
	};
	class ptv_AG_k: ptv_AG
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_k.p3d";
		displayName = "K-M/90";
		picture = "\ptv_weapons\data\inv\AG_k_x_ca.paa";
		inertia = 0.4;
		aimTransitionSpeed = 1;
		dexterity = 1.6;
		initSpeed = 900;
		maxZeroing = 800;
		recoil = "recoil_rpk12";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.42};
				iconScale = 0.2;
			};
		};
		class Single: Single
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
		class Library
		{
			libTextDesc = "Askelandic Galil Short Rifle";
		};
	};
	class ptv_AG_c: ptv_AG
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_c.p3d";
		displayName = "PDW-M/98";
		picture = "\ptv_weapons\data\inv\AG_c_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\Data\Anim\handAnim_ptv_ag_c.rtm"};
		reloadAction = "ptv_GestureReloadAG_C";
		inertia = 0.3;
		aimTransitionSpeed = 1.2;
		dexterity = 1.7;
		initSpeed = 825;
		maxZeroing = 600;
		recoil = "recoil_rpk12";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.42};
				iconScale = 0.2;
			};
		};
		class Single: Single
		{
			reloadTime = 0.0857;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0857;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class Library
		{
			libTextDesc = "Askelandic Galil Compact Rifle";
		};
	};
	class ptv_AG_b: ptv_AG
	{
		author = "Project True Viking";
		displayName = "G-M/90 (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_b_x_ca.paa";
	};
	class ptv_AG_k_b: ptv_AG_k
	{
		author = "Project True Viking";
		displayName = "K-M/90 (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_k_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_k_b_x_ca.paa";
	};
	class ptv_AG_c_b: ptv_AG_c
	{
		author = "Project True Viking";
		displayName = "PDW-M/98 (Black)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_c_b_co.paa","\ptv_weapons\rifles\ag\data\ag_c2_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_c_b_x_ca.paa";
	};
	class ptv_AG_r: ptv_AG
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_r.p3d";
		displayName = "G-M/90 R";
		picture = "\ptv_weapons\data\inv\AG_r_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 88;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class MuzzleSlot: MuzzleSlot{};
		};
	};
	class ptv_AG_k_r: ptv_AG_k
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_k_r.p3d";
		displayName = "K-M/90 R";
		picture = "\ptv_weapons\data\inv\AG_k_r_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 83;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class MuzzleSlot: MuzzleSlot{};
		};
	};
	class ptv_AG_GL_k_r: ptv_AG_k_r
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_GL_k_r.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\handAnim_ptv_ag_gl.rtm"};
		reloadAction = "ptv_GestureReloadAG_GL";
		muzzles[] = {"this","EGLM"};
		displayName = "K-M/90 R GL";
		descriptionShort = "Assault rifle with Grenade Launcher<br/>Caliber: 5.56 mm";
		picture = "\ptv_weapons\data\inv\AG_gl_k_r_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class Library
		{
			libTextDesc = "Askelandic Galil Short M203";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 112;
			class UnderBarrelSlot{};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "AG GL";
			onHoverText = "TODO AGM GL DSS";
		};
		aimTransitionSpeed = 0.9;
		inertia = 0.5;
		dexterity = 1.5;
	};
	class ptv_AG_c_r: ptv_AG_c
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_c_r.p3d";
		displayName = "PDW-M/98 R";
		picture = "\ptv_weapons\data\inv\AG_c_r_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 69;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class MuzzleSlot: MuzzleSlot{};
		};
	};
	class ptv_AG_r2: ptv_AG_r
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_r2.p3d";
		displayName = "G-M/90 R2";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\handAnim_ptv_ag_r2.rtm"};
		reloadAction = "ptv_GestureReloadAG_R2";
		picture = "\ptv_weapons\data\inv\AG_r2_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class GripodSlot: PTV_gripod_slot{};
			class MuzzleSlot: MuzzleSlot{};
		};
		ptv_grip1_change = "ptv_AG_r2_VG";
		ptv_grip2_change = "ptv_AG_r2_AFG";
	};
	class ptv_AG_k_r2: ptv_AG_k_r
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\ag\ptv_AG_k_r2.p3d";
		displayName = "K-M/90 R2";
		picture = "\ptv_weapons\data\inv\AG_k_r2_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\handAnim_ptv_ag_r2.rtm"};
		reloadAction = "ptv_GestureReloadAG_R2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class GripodSlot: PTV_gripod_slot{};
			class MuzzleSlot: MuzzleSlot{};
		};
		ptv_grip1_change = "ptv_AG_k_r2_VG";
		ptv_grip2_change = "ptv_AG_k_r2_AFG";
	};
	class ptv_AG_r_b: ptv_AG_r
	{
		author = "Project True Viking";
		displayName = "G-M/90 R (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_r_b_x_ca.paa";
	};
	class ptv_AG_k_r_b: ptv_AG_k_r
	{
		author = "Project True Viking";
		displayName = "K-M/90 R (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_k_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_k_r_b_x_ca.paa";
	};
	class ptv_AG_GL_k_r_b: ptv_AG_GL_k_r
	{
		author = "Project True Viking";
		displayName = "K-M/90 R GL (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_k_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_gl_k_r_b_x_ca.paa";
	};
	class ptv_AG_c_r_b: ptv_AG_c_r
	{
		author = "Project True Viking";
		displayName = "PDW-M/98 R (Black)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_c_b_co.paa","\ptv_weapons\rifles\ag\data\ag_c2_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_c_r_b_x_ca.paa";
	};
	class ptv_AG_r2_b: ptv_AG_r2
	{
		author = "Project True Viking";
		displayName = "G-M/90 R2 (Black)";
		hiddenSelections[] = {"camo","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_b_co.paa","\ptv_weapons\rifles\agm\data\agm_b_co.paa","ptv_weapons\rifles\ag\data\agr_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_r2_b_x_ca.paa";
		ptv_grip1_change = "ptv_AG_r2_b_VG";
		ptv_grip2_change = "ptv_AG_r2_b_AFG";
	};
	class ptv_AG_k_r2_b: ptv_AG_k_r2
	{
		author = "Project True Viking";
		displayName = "K-M/90 R2 (Black)";
		hiddenSelections[] = {"camo","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_k_b_co.paa","\ptv_weapons\rifles\agm\data\agm_b_co.paa","ptv_weapons\rifles\ag\data\agr_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_k_r2_b_x_ca.paa";
		ptv_grip1_change = "ptv_AG_k_r2_b_VG";
		ptv_grip2_change = "ptv_AG_k_r2_b_AFG";
	};
	class ptv_AGM: ptv_AG_k
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\agm\ptv_AGM.p3d";
		displayName = "G-M/90M";
		picture = "\ptv_weapons\data\inv\AGM_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm.rtm"};
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		magazines[] = {"ptv_30Rnd_556x45_Stanag","ptv_30Rnd_556x45_Stanag_Red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_green"};
		magazineWell[] = {"STANAG_556x45"};
		class Library
		{
			libTextDesc = "Askelandic Galil Modernized";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
			class MuzzleSlot: MuzzleSlot{};
			class GripodSlot: PTV_gripod_slot{};
		};
		class Single: Single
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
		ptv_grip1_change = "ptv_AGM_VG";
		ptv_grip2_change = "ptv_AGM_AFG";
	};
	class ptv_AGM_GL: ptv_AGM
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\agm\ptv_AGM_GL.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_gl.rtm"};
		muzzles[] = {"this","EGLM"};
		displayName = "G-M/90M GL";
		descriptionShort = "Assault rifle with Grenade Launcher<br/>Caliber: 5.56 mm";
		picture = "\ptv_weapons\data\inv\AGM_gl_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class Library
		{
			libTextDesc = "Askelandic Galil Modernized Short M203";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 112;
			class UnderBarrelSlot{};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "AGM GL";
			onHoverText = "TODO AGM GL DSS";
		};
		aimTransitionSpeed = 0.9;
		inertia = 0.5;
		dexterity = 1.5;
	};
	class ptv_AGMR: ptv_AGM
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\agm\ptv_AGMR.p3d";
		displayName = "G-M/90MR";
		picture = "\ptv_weapons\data\inv\AGMR_x_ca.paa";
		ptv_grip1_change = "ptv_AGMR_VG";
		ptv_grip2_change = "ptv_AGMR_AFG";
	};
	class ptv_AG_c2: ptv_AG_c
	{
		author = "Project True Viking";
		model = "\ptv_weapons\rifles\agm\ptv_AG_c2.p3d";
		displayName = "PDW-M/98M";
		picture = "\ptv_weapons\data\inv\AG_c2_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm.rtm"};
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		magazines[] = {"ptv_30Rnd_556x45_Stanag","ptv_30Rnd_556x45_Stanag_Red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_green"};
		magazineWell[] = {"STANAG_556x45"};
		class Library
		{
			libTextDesc = "Askelandic Galil Compact Modernized";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class MuzzleSlot: MuzzleSlot{};
			class UnderBarrelSlot{};
			class GripodSlot: PTV_gripod_slot{};
		};
		ptv_grip1_change = "ptv_AG_C2_VG";
		ptv_grip2_change = "ptv_AG_C2_AFG";
	};
	class ptv_AGM_b: ptv_AGM
	{
		author = "Project True Viking";
		displayName = "G-M/90M (Black)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_k_b_co.paa","\ptv_weapons\rifles\agm\data\agm_b_co.paa"};
		picture = "\ptv_weapons\data\inv\agm_b_x_ca.paa";
		ptv_grip1_change = "ptv_AGM_b_VG";
		ptv_grip2_change = "ptv_AGM_b_AFG";
	};
	class ptv_AGM_GL_b: ptv_AGM_GL
	{
		author = "Project True Viking";
		displayName = "G-M/90M GL (Black)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_k_b_co.paa","\ptv_weapons\rifles\agm\data\agm_b_co.paa"};
		picture = "\ptv_weapons\data\inv\agm_gl_b_x_ca.paa";
	};
	class ptv_AGMR_b: ptv_AGMR
	{
		author = "Project True Viking";
		displayName = "G-M/90MR (Black)";
		picture = "\ptv_weapons\data\inv\AGMR_b_x_ca.paa";
		hiddenSelections[] = {"camo","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_k_b_co.paa","\ptv_weapons\rifles\agm\data\agm_b_co.paa","ptv_weapons\rifles\ag\data\agr_b_co.paa"};
		ptv_grip1_change = "ptv_AGMR_b_VG";
		ptv_grip2_change = "ptv_AGMR_b_AFG";
	};
	class ptv_AG_c2_b: ptv_AG_c2
	{
		author = "Project True Viking";
		displayName = "PDW-M/98M (Black)";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\rifles\ag\data\ag_c_b_co.paa","\ptv_weapons\rifles\agm\data\ag_c2_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ag_c2_b_x_ca.paa";
		ptv_grip1_change = "ptv_AG_C2_b_VG";
		ptv_grip2_change = "ptv_AG_C2_b_AFG";
	};
	class ptv_AGM_VG: ptv_AGM
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90M";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGM";
	};
	class ptv_AGM_AFG: ptv_AGM
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90M";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGM";
	};
	class ptv_AGM_b_VG: ptv_AGM_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90M (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGM_b";
	};
	class ptv_AGM_b_AFG: ptv_AGM_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90M (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGM_b";
	};
	class ptv_AGMR_VG: ptv_AGMR
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90MR";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGMR";
	};
	class ptv_AGMR_AFG: ptv_AGMR
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90MR";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGMR";
	};
	class ptv_AGMR_b_VG: ptv_AGMR_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90MR (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGMR_b";
	};
	class ptv_AGMR_b_AFG: ptv_AGMR_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90MR (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AGMR_b";
	};
	class ptv_AG_c2_VG: ptv_AG_c2
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "PDW-M/98M";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_c2";
	};
	class ptv_AG_c2_AFG: ptv_AG_c2
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "PDW-M/98M";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_c2";
	};
	class ptv_AG_c2_b_VG: ptv_AG_c2_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "PDW-M/98M (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_c2_b";
	};
	class ptv_AG_c2_b_AFG: ptv_AG_c2_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "PDW-M/98M (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_c2_b";
	};
	class ptv_AG_r2_VG: ptv_AG_r2
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90 R2";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_r2";
	};
	class ptv_AG_r2_AFG: ptv_AG_r2
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90 R2";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_r2";
	};
	class ptv_AG_r2_b_VG: ptv_AG_r2_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90 R2 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_r2_b";
	};
	class ptv_AG_r2_b_AFG: ptv_AG_r2_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "G-M/90 R2 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agr2_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_r2_b";
	};
	class ptv_AG_k_r2_VG: ptv_AG_k_r2
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/90 R2";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_k_r2";
	};
	class ptv_AG_k_r2_AFG: ptv_AG_k_r2
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/90 R2";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_k_r2";
	};
	class ptv_AG_k_r2_b_VG: ptv_AG_k_r2_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/90 R2 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_vg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip1";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_k_r2_b";
	};
	class ptv_AG_k_r2_b_AFG: ptv_AG_k_r2_b
	{
		author = "Project True Viking";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "K-M/90 R2 (Black)";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_agm_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "ptv_acc_grip4";
				slot = "GripodSlot";
			};
		};
		baseWeapon = "ptv_AG_k_r2_b";
	};
	class ptv_m14: Rifle_Long_Base_F
	{
		scope = 2;
		author = "WR5 , Project True Viking";
		model = "\ptv_weapons\longrangerifles\m14\ptv_m14.p3d";
		dexterity = 1.68;
		picture = "\ptv_weapons\data\inv\m14_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "Marksman Rifle<br />Caliber: 7.62x51 mm";
		inertia = 0.8;
		displayName = "SSR-M/80";
		magazines[] = {"20Rnd_762x51_Mag"};
		magazineWell[] = {"M14_762x51"};
		reloadAction = "GestureReloadDMR06";
		recoil = "recoil_dmr_06";
		maxZeroing = 1000;
		initSpeed = 850;
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_m14.rtm"};
		cursor = "srifle";
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Safety",1.5,1,5};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_dry",0.5,1,20};
		reloadMagazineSound[] = {"ptv_weapons\sound\m14_reload",1,1,10};
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		class Library
		{
			libTextDesc = "The M14 is a classic battle rifle used in service since the sixties. It is a selective fire automatic rifle that fires the 7.62x51mm NATO ammunition. M14 was replaced by advanced modern variants but thanks to its low cost, simple construction, and reliability, it is still used in several countries.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 112;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0.06,0.4};
				iconScale = 0.15;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.52,0.36};
				iconScale = 0.15;
			};
			class PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"ptv_versapod","ptv_versapod_des","ptv_versapod_wdl"};
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.085;
			dispersion = 0.00058;
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.085;
			dispersion = 0.00058;
			recoil = "recoil_auto_dmr";
			recoilProne = "recoil_auto_prone_dmr";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_1",0.398107,1,30};
				closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_Closure_2",0.398107,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_01",2.81838,1,1200};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_02",2.81838,1,1200};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_short_03",2.81838,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_interior",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_interior",1,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_trees",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_forest",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_meadows",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\silencer_DMR_06_tail_houses",1,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
	};
	class ptv_m14tp: ptv_m14
	{
		author = "WR5 , Project True Viking";
		model = "\ptv_weapons\longrangerifles\m14\ptv_m14tp.p3d";
		displayName = "SSR-M/80 TP";
		picture = "\ptv_weapons\data\inv\m14tp_x_ca.paa";
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.52,0.36};
				iconScale = 0.15;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.32,0.8};
				iconScale = 0.3;
			};
		};
	};
	class ptv_m14tp2: ptv_m14
	{
		author = "WR5 , Project True Viking";
		model = "\ptv_weapons\longrangerifles\m14\ptv_m14tp2.p3d";
		displayName = "SSR-M/80 TP2";
		picture = "\ptv_weapons\data\inv\m14tp2_x_ca.paa";
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.52,0.36};
				iconScale = 0.15;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.37,0.42};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.3,0.8};
				iconScale = 0.3;
			};
		};
	};
	class ptv_m14_socom: Rifle_Long_Base_F
	{
		scope = 2;
		author = "WR5 , Project True Viking";
		model = "\ptv_weapons\longrangerifles\m14\ptv_m14_socom.p3d";
		displayName = "SOCOM 16";
		picture = "\ptv_weapons\data\inv\m14_socom_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "Battle rifle <br/>Caliber: 7.62x51 mm NATO";
		inertia = 0.7;
		dexterity = 1.3;
		magazines[] = {"20Rnd_762x51_Mag"};
		magazineWell[] = {"M14_762x51"};
		reloadAction = "GestureReloadDMR06";
		recoil = "recoil_ebr";
		maxZeroing = 800;
		initSpeed = 805;
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_m14.rtm"};
		cursor = "srifle";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_dry",0.630957,1,30};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_firemode",1,1,5};
		reloadMagazineSound[] = {"ptv_weapons\sound\m14_reload",1,1,10};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 104;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0.15,0.4};
				iconScale = 0.15;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.4,0.38};
				iconScale = 0.15;
			};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.085;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.00087;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.562341,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.562341,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.58489,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.085;
			recoil = "recoil_auto_ebr";
			recoilProne = "recoil_auto_prone_ebr";
			dispersion = 0.00087;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.562341,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.562341,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",3.98107,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",3.98107,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",3.98107,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.58489,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",1.99526,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",1,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
	};
	class ptv_m14tp_des: ptv_m14tp
	{
		author = "WR5 , Project True Viking";
		displayName = "SSR-M/80 TP (Desert)";
		picture = "\ptv_weapons\data\inv\m14tp_des_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\m14\data\m14_des_co.paa"};
	};
	class ptv_m14tp_wdl: ptv_m14tp
	{
		author = "WR5 , Project True Viking";
		displayName = "SSR-M/80 TP (Woodland)";
		picture = "\ptv_weapons\data\inv\m14tp_wdl_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\m14\data\m14_wdl_co.paa"};
	};
	class ptv_m14tp2_des: ptv_m14tp2
	{
		author = "WR5 , Project True Viking";
		displayName = "SSR-M/80 TP2 (Desert)";
		picture = "\ptv_weapons\data\inv\m14tp2_des_x_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\m14\data\m14_des_co.paa","\ptv_weapons\longrangerifles\m14\data\m14_acc_des_co.paa"};
	};
	class ptv_m14tp2_wdl: ptv_m14tp2
	{
		author = "WR5 , Project True Viking";
		displayName = "SSR-M/80 TP2 (Woodland)";
		picture = "\ptv_weapons\data\inv\m14tp2_wdl_x_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\m14\data\m14_wdl_co.paa","\ptv_weapons\longrangerifles\m14\data\m14_acc_wdl_co.paa"};
	};
	class ptv_m14_socom_wdl: ptv_m14_socom
	{
		author = "WR5 , Project True Viking";
		displayName = "SOCOM 16 (Woodland)";
		picture = "\ptv_weapons\data\inv\m14_socom_wdl_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\m14\data\m14_wdl_co.paa"};
	};
	class ptv_bm4: Rifle_Base_F
	{
		author = "Tigg , Project True Viking";
		scope = 2;
		model = "\ptv_weapons\rifles\bm4\ptv_bm4";
		picture = "\ptv_weapons\data\inv\bm4_x_ca.paa";
		magazines[] = {"ptv_8Rnd_B_Beneli_74Slug","ptv_8Rnd_B_Beneli_74Pellets"};
		magazineReloadSwitchPhase = 0.49;
		inertia = 0.5;
		dexterity = 1.5;
		bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.501187,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.501187,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.501187,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.501187,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.398107,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.398107,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.398107,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.398107,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.223872,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.223872,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.223872,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.223872,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadMagazineSound[] = {"\ptv_weapons\sound\M4\M4_reload",1,1,20};
		drySound[] = {"A3\Sounds_F\weapons\Other\dry6.wss",1,1,20};
		optics = 1;
		modelOptics = "-";
		maxZeroing = 400;
		recoil = "recoil_m320";
		displayname = "PH-M/01";
		selectionFireAnim = "zasleh";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\rifles\bm4\Anim\ptv_m1014.rtm"};
		reloadAction = "GestureReloadM4SSAS";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {50,100,200};
		discreteDistanceInitIndex = 1;
		fireSpreadAngle = 0.95;
		jsrs_soundeffect = "JSRS2_Distance_Effects_Shotgun";
		ACE_twistDirection = 0;
		ACE_barrelTwist = 0;
		ACE_barrelLength = 469.9;
		descriptionShort = "Semi-automatic Shotgun<br />Caliber: 12 gauge";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",1,1,200};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",1,1,200};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ptv_weapons\sound\M4\m4_st_1",1.2589254,1,1000};
				begin2[] = {"\ptv_weapons\sound\M4\m4_st_2",1.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 0.08;
			magazineReloadTime = 6;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 83;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.4,0.3};
				iconScale = 0.2;
			};
			class MuzzleSlot{};
			class PointerSlot{};
		};
		class Library
		{
			libTextDesc = "The M1014, also known as the Benelli M4 Super 90, is manufactured by Beneli Armi S.P.A. in Italy. It is a 12 gauge semi-automatic combat shotgun designed for US Armed Service. The M1014 fires 2.75 or 3 inch shells with about 50 m effective range.";
		};
	};
	class ptv_bm4e: ptv_bm4
	{
		author = "Tigg , Project True Viking";
		displayName = "PH-M/01 Entry";
		model = "\ptv_weapons\rifles\bm4\ptv_bm4e";
		picture = "\ptv_weapons\data\inv\bm4_x_ca.paa";
		dexterity = 1.8;
		inertia = 0.4;
		fireSpreadAngle = 0.95;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
		};
	};
	class ptv_m249: Rifle_Long_Base_F
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		ACE_barrelTwist = 305;
		ACE_barrelLength = 465;
		AB_barrelTwist = 12;
		AB_barrelLength = 18.3;
		reloadAction = "ptv_GestureReloadNegev";
		magazineReloadSwitchPhase = 0.5;
		maxZeroing = 1200;
		recoil = "recoil_lim";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		initSpeed = 0;
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				positionName = "linkeject_start";
				directionName = "linkeject_end";
				effectName = "MachineGunEject2";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 163;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.57,0.28};
				iconScale = 0.15;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.38,0.42};
				iconScale = 0.2;
			};
		};
		deployedPivot = "deploypoint";
		hasBipod = 1;
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"\ptv_weapons\sound\negev\negev_dry",1,1,10};
		reloadmagazinesound[] = {"\ptv_weapons\sound\negev\negev_reload",0.7,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\firemode_Zafir",0.7,1,5};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.70794576,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.70794576,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.70794576,1,20};
		model = "\ptv_weapons\machineguns\m249\ptv_m249.p3d";
		picture = "\ptv_weapons\data\inv\m249_x_ca.paa";
		displayName = "LMG-M/80M";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\machineguns\m249\Anim\ptv_m249.rtm"};
		magazines[] = {"ptv_200Rnd_556x45_M249","ptv_200Rnd_556x45_M249_Tracer_Red"};
		magazineWell[] = {"STANAG_556x45","M249_556x49"};
		inertia = 0.7;
		dexterity = 1.3;
		aimTransitionSpeed = 0.7;
		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 1;
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.067;
			dispersion = 0.00101;
			recoil = "recoil_auto_machinegun_3outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
	};
	class ptv_m249_b: ptv_m249
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		displayName = "LMG-M/80M (Black)";
		picture = "\ptv_weapons\data\inv\m249_b_x_ca.paa";
		hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight"};
		hiddenSelectionsTextures[] = {"ptv_weapons\machineguns\m249\data\reciever_minimi_co.paa","ptv_weapons\machineguns\m249\data\assemblycover_co.paa","ptv_weapons\machineguns\m249\data\barrel_co.paa","ptv_weapons\machineguns\m249\data\misc_co.paa","ptv_weapons\machineguns\m249\data\pipgrip_co.paa","ptv_weapons\machineguns\m249\data\stock_co.paa","ptv_weapons\machineguns\m249\data\rearsight_co.paa"};
	};
	class ptv_m249_t: ptv_m249
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		displayName = "LMG-M/80M (Tan)";
		picture = "\ptv_weapons\data\inv\m249_d_x_ca.paa";
		hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight"};
		hiddenSelectionsTextures[] = {"ptv_weapons\machineguns\m249\data\reciever_minimi_d_co.paa","ptv_weapons\machineguns\m249\data\assemblycover_d_co.paa","ptv_weapons\machineguns\m249\data\barrel_d_co.paa","ptv_weapons\machineguns\m249\data\misc_d_co.paa","ptv_weapons\machineguns\m249\data\pipgrip_d_co.paa","ptv_weapons\machineguns\m249\data\stock_d_co.paa","ptv_weapons\machineguns\m249\data\rearsight_co.paa"};
	};
	class ptv_m249p: ptv_m249
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		model = "\ptv_weapons\machineguns\m249\ptv_m249p.p3d";
		displayName = "LMG-M/80MS";
		picture = "\ptv_weapons\data\inv\m249p_x_ca.paa";
		inertia = 0.6;
		dexterity = 1.3;
		AB_barrelTwist = 7;
		AB_barrelLength = 13.7;
		ACE_barrelTwist = 178;
		ACE_barrelLength = 349;
		initSpeed = -0.93;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 154;
			class PointerSlot: PointerSlot{};
			class CowsSlot: CowsSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.1,0.4};
				iconScale = 0.2;
			};
		};
	};
	class ptv_m249p_b: ptv_m249p
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		displayName = "LMG-M/80MS (Black)";
		picture = "\ptv_weapons\data\inv\m249p_b_x_ca.paa";
		hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight"};
		hiddenSelectionsTextures[] = {"ptv_weapons\machineguns\m249\data\reciever_minimi_co.paa","ptv_weapons\machineguns\m249\data\assemblycover_co.paa","ptv_weapons\machineguns\m249\data\barrel_co.paa","ptv_weapons\machineguns\m249\data\misc_co.paa","ptv_weapons\machineguns\m249\data\pipgrip_co.paa","ptv_weapons\machineguns\m249\data\stock_co.paa","ptv_weapons\machineguns\m249\data\rearsight_co.paa"};
	};
	class ptv_m249p_t: ptv_m249p
	{
		scope = 2;
		author = "Toadie, Project True Viking";
		displayName = "LMG-M/80MS (Tan)";
		picture = "\ptv_weapons\data\inv\m249p_d_x_ca.paa";
		hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight"};
		hiddenSelectionsTextures[] = {"ptv_weapons\machineguns\m249\data\reciever_minimi_d_co.paa","ptv_weapons\machineguns\m249\data\assemblycover_d_co.paa","ptv_weapons\machineguns\m249\data\barrel_d_co.paa","ptv_weapons\machineguns\m249\data\misc_d_co.paa","ptv_weapons\machineguns\m249\data\pipgrip_d_co.paa","ptv_weapons\machineguns\m249\data\stock_d_co.paa","ptv_weapons\machineguns\m249\data\rearsight_co.paa"};
	};
	class ptv_negev: Rifle_Long_Base_F
	{
		scope = 2;
		author = "Project True Viking";
		reloadAction = "ptv_GestureReloadNegev";
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		ACE_barrelTwist = 305;
		ACE_barrelLength = 465;
		AB_barrelTwist = 12;
		AB_barrelLength = 18.3;
		magazineReloadSwitchPhase = 0.5;
		maxZeroing = 1200;
		recoil = "recoil_lim";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		initSpeed = 0;
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				positionName = "Nabojnicestart2";
				directionName = "Nabojniceend2";
				effectName = "MachineGunEject2";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "ptv_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 163;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot{};
		};
		deployedPivot = "bipod";
		hasBipod = 1;
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drysound[] = {"\ptv_weapons\sound\negev\negev_dry",1,1,10};
		reloadmagazinesound[] = {"\ptv_weapons\sound\negev\negev_reload",0.7,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\firemode_Zafir",0.7,1,5};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.70794576,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.70794576,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.70794576,1,20};
		model = "\ptv_weapons\machineguns\negev\ptv_Negev.p3d";
		picture = "\ptv_weapons\data\inv\negev_x_ca.paa";
		displayName = "LMG-M/99";
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\machineguns\negev\Anim\ptv_negev.rtm"};
		magazines[] = {"ptv_150Rnd_556x45_Negev","ptv_150Rnd_556x45_Negev_Tracer_Red","ptv_150Rnd_556x45_Negev_b","ptv_150Rnd_556x45_Negev_b_Tracer_Red","ptv_35Rnd_556x45_AG","ptv_35Rnd_556x45_AG_Tracer_Red"};
		magazineWell[] = {"GALIL_556x45"};
		inertia = 0.7;
		dexterity = 1.3;
		aimTransitionSpeed = 0.7;
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
		discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 1;
		class Single: Mode_SemiAuto
		{
			dispersion = 0.0013;
			reloadTime = 0.06;
			recoil = "recoil_auto_machinegun_3outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",1.1220185,1,10};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",1.1220185,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				Begin1[] = {"\ptv_weapons\sound\negev\Negev_s1",1,1,1200};
				Begin2[] = {"\ptv_weapons\sound\negev\Negev_s2",1,1,1200};
				Begin3[] = {"\ptv_weapons\sound\negev\Negev_s3",1,1,1200};
				Begin4[] = {"\ptv_weapons\sound\negev\Negev_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.9952624,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.9952624,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			autoFire = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion = 0.0035;
			reloadTime = 0.06;
			recoil = "recoil_auto_machinegun_3outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",1.1220185,1,10};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",1.1220185,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				Begin1[] = {"\ptv_weapons\sound\negev\Negev_s1",1,1,1200};
				Begin2[] = {"\ptv_weapons\sound\negev\Negev_s2",1,1,1200};
				Begin3[] = {"\ptv_weapons\sound\negev\Negev_s3",1,1,1200};
				Begin4[] = {"\ptv_weapons\sound\negev\Negev_s4",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.9952624,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.9952624,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
	};
	class ptv_negev_b: ptv_negev
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "LMG-M/99 (Black)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\negev\data\barrel_b_co.paa","\ptv_weapons\machineguns\negev\data\rec_b_co.paa","\ptv_weapons\machineguns\negev\data\mag_b_co.paa"};
		picture = "\ptv_weapons\data\inv\negev_b_x_ca.paa";
	};
	class ptv_ng5: ptv_negev
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "LMG-M/99 NG5";
		model = "\ptv_weapons\machineguns\negev\ptv_ng5.p3d";
		picture = "\ptv_weapons\data\inv\ng5_x_ca.paa";
		magazines[] = {"ptv_150Rnd_556x45_Negev","ptv_150Rnd_556x45_Negev_Tracer_Red","ptv_150Rnd_556x45_Negev_b","ptv_150Rnd_556x45_Negev_b_Tracer_Red"};
		magazineWell[] = {"STANAG_556x45"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.65,0.35};
				iconScale = 0.15;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.4,0.45};
				iconScale = 0.2;
			};
			class MuzzleSlot: MuzzleSlot{};
		};
		class Single: Single
		{
			dispersion = 0.0013;
			reloadTime = 0.06;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.0035;
			reloadTime = 0.06;
		};
	};
	class ptv_ng5_b: ptv_ng5
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "LMG-M/99 NG5 (Black)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\negev\data\barrel_b_co.paa","\ptv_weapons\machineguns\negev\data\rec_b_co.paa","\ptv_weapons\machineguns\negev\data\mag_b_co.paa","\ptv_weapons\machineguns\negev\data\sf_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ng5_b_x_ca.paa";
	};
	class ptv_ng5_sf: ptv_ng5
	{
		scope = 2;
		author = "Project True Viking";
		model = "\ptv_weapons\machineguns\negev\ptv_ng5_sf.p3d";
		displayName = "LMG-M/99 NG5 SF";
		picture = "\ptv_weapons\data\inv\ng5_sf_x_ca.paa";
		inertia = 0.6;
		dexterity = 1.3;
		initSpeed = -0.93;
		AB_barrelTwist = 7;
		AB_barrelLength = 13.7;
		ACE_barrelTwist = 178;
		ACE_barrelLength = 349;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 154;
			class PointerSlot: PointerSlot{};
			class CowsSlot: CowsSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.1,0.4};
				iconScale = 0.2;
			};
		};
	};
	class ptv_ng5_sf_b: ptv_ng5_sf
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "LMG-M/99 NG5 SF (Black)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\negev\data\barrel_b_co.paa","\ptv_weapons\machineguns\negev\data\rec_b_co.paa","\ptv_weapons\machineguns\negev\data\mag_b_co.paa","\ptv_weapons\machineguns\negev\data\sf_b_co.paa"};
		picture = "\ptv_weapons\data\inv\ng5_sf_b_x_ca.paa";
	};
	class ptv_ng5_sf_des: ptv_ng5_sf
	{
		scope = 2;
		author = "Project True Viking";
		displayName = "LMG-M/99 NG5 SF (Desert)";
		hiddenSelections[] = {"camo","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\negev\data\barrel_des_co.paa","\ptv_weapons\machineguns\negev\data\rec_des_co.paa","\ptv_weapons\machineguns\negev\data\mag_des_co.paa","\ptv_weapons\machineguns\negev\data\sf_des_co.paa"};
		picture = "\ptv_weapons\data\inv\ng5_sf_des_x_ca.paa";
	};
	class ptv_MG3_base: Rifle_Long_Base_F
	{
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		airateoffire = 0.5;
		airateoffiredistance = 500;
		scope = 0;
		cursor = "mg";
		cursoraim = "EmptyCursor";
		magazineReloadSwitchPhase = 0.5;
		aimTransitionSpeed = 0.5;
		deployedpivot = "deploypoint";
		maxRecoilSway = 0.015;
		swayDecaySpeed = 1.25;
		recoil = "recoil_zafir";
		opticsZoomMin = 0.275;
		opticsZoomMax = 1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		inertia = 1.16;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.105;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.000261799;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			airateoffire = 4;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 4;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = 6;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
	};
	class ptv_MG3: ptv_MG3_base
	{
		maxZeroing = 1400;
		scope = 2;
		author = "Toadie, Project True Viking";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		agm_bipod = 1;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_overheating_allowbarrelswap = 1;
		hasBipod = 1;
		recoil = "recoil_zafir";
		deployedpivot = "deploypoint";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",1,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",1,1,20};
		cursor = "mg";
		bg_bipod = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		model = "\ptv_weapons\machineguns\mg3\ptv_mg3.p3d";
		reloadaction = "ptv_GestureReloadMG3";
		descriptionShort = "General-Purpose Machine Gun<br/>Caliber: 7.62x51mm NATO";
		picture = "\ptv_weapons\data\inv\mg3_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = "MG-M/61";
		drysound[] = {"\ptv_weapons\sound\mg3\mg3_dryfire",1,1,10};
		reloadmagazinesound[] = {"\ptv_weapons\sound\mg3\mg3_reload",0.8,1,18};
		magazines[] = {"ptv_50Rnd_762x51_B_MG3","ptv_50Rnd_762x51_M_MG3","ptv_50Rnd_762x51_Barrier_MG3","ptv_50Rnd_762x51_T_MG3","ptv_100Rnd_762x51_B_MG3","ptv_100Rnd_762x51_M_MG3","ptv_100Rnd_762x51_Barrier_MG3","ptv_100Rnd_762x51_T_MG3","ptv_250Rnd_762x51_B_MG3","ptv_250Rnd_762x51_B_MG3","ptv_250Rnd_762x51_M_MG3","ptv_250Rnd_762x51_Barrier_MG3","ptv_250Rnd_762x51_T_MG3"};
		discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		handanim[] = {"OFP2_ManSkeleton","\ptv_weapons\machineguns\mg3\anim\handpose_mg3.rtm"};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 220;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.05,0.38};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		inertia = 1.25;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				closure2[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ptv_MG3_Shot_SoundSet","ptv_MG3_Tail_SoundSet"};
				begin1[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin2[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin3[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_meadow",1.1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_indoor",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			reloadTime = 0.05;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.0008;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			airateoffire = 4;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 4;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = 6;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class Library
		{
			libTextDesc = "Rheinmetall Mg3";
		};
	};
	class ptv_MG3r: ptv_MG3_base
	{
		maxZeroing = 1400;
		scope = 2;
		author = "Toadie, Project True Viking";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		agm_bipod = 1;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_overheating_allowbarrelswap = 1;
		hasBipod = 1;
		recoil = "recoil_zafir";
		deployedpivot = "deploypoint";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",1,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",1,1,20};
		cursor = "mg";
		bg_bipod = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		model = "\ptv_weapons\machineguns\mg3\ptv_mg3r.p3d";
		reloadaction = "ptv_GestureReloadMG3";
		descriptionShort = "General-Purpose Machine Gun<br/>Caliber: 7.62x51mm NATO";
		picture = "\ptv_weapons\data\inv\mg3r_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = "MG-M/61 R";
		drysound[] = {"\ptv_weapons\sound\mg3\mg3_dryfire",1,1,10};
		reloadmagazinesound[] = {"\ptv_weapons\sound\mg3\mg3_reload",0.8,1,18};
		magazines[] = {"ptv_50Rnd_762x51_B_MG3","ptv_50Rnd_762x51_M_MG3","ptv_50Rnd_762x51_Barrier_MG3","ptv_50Rnd_762x51_T_MG3","ptv_100Rnd_762x51_B_MG3","ptv_100Rnd_762x51_M_MG3","ptv_100Rnd_762x51_Barrier_MG3","ptv_100Rnd_762x51_T_MG3","ptv_250Rnd_762x51_B_MG3","ptv_250Rnd_762x51_B_MG3","ptv_250Rnd_762x51_M_MG3","ptv_250Rnd_762x51_Barrier_MG3","ptv_250Rnd_762x51_T_MG3"};
		discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		handanim[] = {"OFP2_ManSkeleton","\ptv_weapons\machineguns\mg3\anim\handpose_mg3.rtm"};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 220;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0.05,0.38};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				closure2[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ptv_MG3_Shot_SoundSet","ptv_MG3_Tail_SoundSet"};
				begin1[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin2[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin3[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_meadow",1.1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_indoor",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			reloadTime = 0.05;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.0008;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			airateoffire = 4;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 4;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = 6;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class Library
		{
			libTextDesc = "Rheinmetall Mg3 Rail";
		};
	};
	class ptv_MG3KWS: ptv_MG3_base
	{
		maxZeroing = 1400;
		scope = 2;
		author = "Toadie, Project True Viking";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		agm_bipod = 1;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_overheating_allowbarrelswap = 1;
		hasBipod = 1;
		recoil = "recoil_zafir";
		deployedpivot = "deploypoint";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",1,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",1,1,20};
		cursor = "mg";
		bg_bipod = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		model = "\ptv_weapons\machineguns\mg3\ptv_mg3kws.p3d";
		reloadaction = "ptv_GestureReloadMG3";
		descriptionShort = "General-Purpose Machine Gun<br/>Caliber: 7.62x51mm NATO";
		picture = "\ptv_weapons\data\inv\mg3kws_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = "MG-M/61 KWS";
		drysound[] = {"\ptv_weapons\sound\mg3\mg3_dryfire",1,1,10};
		reloadmagazinesound[] = {"\ptv_weapons\sound\mg3\mg3_reload",0.8,1,18};
		magazines[] = {"ptv_50Rnd_762x51_B_MG3","ptv_50Rnd_762x51_M_MG3","ptv_50Rnd_762x51_Barrier_MG3","ptv_50Rnd_762x51_T_MG3","ptv_100Rnd_762x51_B_MG3","ptv_100Rnd_762x51_M_MG3","ptv_100Rnd_762x51_Barrier_MG3","ptv_100Rnd_762x51_T_MG3","ptv_250Rnd_762x51_B_MG3","ptv_250Rnd_762x51_B_MG3","ptv_250Rnd_762x51_M_MG3","ptv_250Rnd_762x51_Barrier_MG3","ptv_250Rnd_762x51_T_MG3"};
		discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
		handanim[] = {"OFP2_ManSkeleton","\ptv_weapons\machineguns\mg3\anim\handpose_mg3kws.rtm"};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 230;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
		};
		inertia = 1.2;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				closure2[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ptv_MG3_Shot_SoundSet","ptv_MG3_Tail_SoundSet"};
				begin1[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin2[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin3[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_meadow",1.1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_indoor",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			reloadTime = 0.07;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.0008;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			airateoffire = 4;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				closure2[] = {"\ptv_weapons\sound\mg3\mg3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ptv_MG3_Shot_SoundSet","ptv_MG3_Tail_SoundSet"};
				begin1[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin2[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				begin3[] = {"\ptv_weapons\sound\mg3\mg3_fire_1p",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_meadow",1.1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"\ptv_weapons\sound\mg3\soundshaders\mg14z\mg14z_indoor",1,1,1200};
						frequency = 1;
						volume = "interior";
					};
				};
			};
			reloadTime = 0.07;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.0008;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			airateoffire = 4;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 4;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = 6;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class Library
		{
			libTextDesc = "Rheinmetall Mg3 KWS";
		};
	};
	class ptv_MG3KWS_b: ptv_MG3KWS
	{
		author = "Toadie, Project True Viking";
		displayName = "MG-M/61 KWS (Black)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\mg3\data\mg3recieverkws_black_co.paa","\ptv_weapons\machineguns\mg3\data\partsmap1kws_black_co.paa","\ptv_weapons\machineguns\mg3\data\partsmap2kws_black_co.paa","\ptv_weapons\machineguns\mg3\data\partsmap3_black_co.paa","\ptv_weapons\machineguns\mg3\data\MG3_drum_co.paa"};
	};
	class ptv_MG3KWS_t: ptv_MG3KWS
	{
		author = "Toadie, Project True Viking";
		displayName = "MG-M/61 KWS (Tan)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\machineguns\mg3\data\mg3recieverkws_co.paa","\ptv_weapons\machineguns\mg3\data\partsmap1kws_co.paa","\ptv_weapons\machineguns\mg3\data\partsmap2kws_co.paa","\ptv_weapons\machineguns\mg3\data\partsmap3_co.paa","\ptv_weapons\machineguns\mg3\data\MG3_drum_co.paa"};
	};
	class ptv_TRG42: Rifle_Long_Base_F
	{
		class EventHandlers
		{
			fired = "_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction = "ptv_GestureRechamberAX";
			sound = "ptv_bolt_AX";
			soundLocation = "RightHandMiddle1";
			delay = 0.02;
			onEmpty = 0;
			hasOptic = 0;
			cartridgeType = "FxCartridge_338_Ball";
			cartridgeEjectPosition[] = {-0.01,0.01,0.1};
			cartridgeEjectVelocity[] = {0,1.2,0.5};
			cartridgeEjectDelay = 0.54;
		};
		scope = 2;
		author = "Darkstorn,Thanez,Sylon, Project True Viking";
		model = "\ptv_weapons\longrangerifles\trg\ptv_trg42.p3d";
		displayName = "SSR-M/01";
		picture = "\ptv_weapons\data\inv\trg42_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		class Library
		{
			libTextDesc = "Sako TRG-42";
		};
		descriptionShort = "TRG-42";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 128;
			class PointerSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_338
			{
				iconPosition[] = {-0.05,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.6,0.4};
				iconScale = 0.15;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.4,0.8};
				iconScale = 0.3;
			};
		};
		inertia = 0.9;
		dexterity = 1.1;
		class ItemInfo
		{
			priority = 1;
		};
		magazines[] = {"ptv_5Rnd_86x70_TRG42"};
		reloadAction = "ptv_GestureReloadAX";
		recoil = "recoil_m320";
		maxZeroing = 2000;
		cursor = "srifle";
		initSpeed = 936;
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\Anim\ptv_trg42.rtm"};
		opticsPPEffects[] = {};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.8912509,1,25};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.8912509,1,25};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.8912509,1,25};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.8912509,1,25};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.7943282,1,25};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.7943282,1,25};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.7943282,1,25};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.7943282,1,25};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.70794576,1,25};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.70794576,1,25};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.70794576,1,25};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.70794576,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 1.5;
			recoil = "recoil_single_primary_8outof10";
			recoilProne = "recoil_single_primary_prone_6outof10";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",1.7782794,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",1.7782794,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\M320\M320_st_1",1,1,1200};
				begin2[] = {"A3\sounds_f\weapons\M320\M320_st_2",1,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
			};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 150;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 700;
			requiredOpticType = 1;
		};
		class medium_optic2: Single
		{
			showToPlayer = 0;
			minRange = 250;
			minRangeProbab = 0.1;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2: far_optic1
		{
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 1050;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 2000;
			requiredOpticType = 2;
		};
		reloadMagazineSound[] = {"ptv_weapons\sound\ax\ax_reload",2,1,15};
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.5011872,1,20};
	};
	class ptv_trg42f: ptv_TRG42
	{
		author = "Darkstorn,Thanez,Sylon, Project True Viking";
		displayName = "SSR-M/01 (Folding Stock)";
		model = "\ptv_weapons\longrangerifles\trg\ptv_trg42f.p3d";
		picture = "\ptv_weapons\data\inv\trg42f_x_ca.paa";
	};
	class ptv_AX_Base: Rifle_Long_Base_F
	{
		class EventHandlers
		{
			fired = "_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction = "ptv_GestureRechamberAX";
			sound = "ptv_bolt_AX";
			soundLocation = "RightHandMiddle1";
			delay = 0.02;
			onEmpty = 0;
			hasOptic = 0;
			cartridgeType = "FxCartridge_338_Ball";
			cartridgeEjectPosition[] = {-0.01,0.01,0.1};
			cartridgeEjectVelocity[] = {0,1.2,0.5};
			cartridgeEjectDelay = 0.54;
		};
		author = "Project True Viking";
		scope = 0;
		reloadMagazineSound[] = {"ptv_weapons\sound\ax\ax_reload",2,1,15};
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.5011872,1,20};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_1",0.25118864,1,10};
		dexterity = 1.7;
		inertia = 0.7;
		aimTransitionSpeed = 0.7;
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\longrangerifles\ax\anim\ax.rtm"};
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 2;
		selectionFireAnim = "zasleh";
		magazines[] = {"ptv_10Rnd_86x70_AX"};
		magazineWell[] = {"CBA_338LM_AI"};
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		reloadAction = "ptv_GestureReloadAX";
		maxZeroing = 2000;
		cursor = "srifle";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.891251,1,25};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.891251,1,25};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.891251,1,25};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.891251,1,25};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.794328,1,25};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.794328,1,25};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.794328,1,25};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.794328,1,25};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.707946,1,25};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.707946,1,25};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.707946,1,25};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.707946,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		jsrs_soundeffect = "JSRS2_Distance_Effects_M24";
		initSpeed = -1.00547;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 685.8;
		ace_railHeightAboveBore = 1.7;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\M320\M320_st_1",1,1,1200};
				begin2[] = {"A3\sounds_f\weapons\M320\M320_st_2",1,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
			};
			dispersion = 0.00048;
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			reloadTime = 1.6666666;
			backgroundReload = 1;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 152.1;
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
			};
			class MuzzleSlot: asdg_MuzzleSlot_338
			{
				iconPosition[] = {-0.05,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.6,0.4};
				iconScale = 0.15;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.4,0.8};
				iconScale = 0.3;
			};
		};
		class Library
		{
			libTextDesc = "AI AX Mk3";
		};
		descriptionShort = "AX Mk3";
		recoil = "ptv_recoil_ax";
	};
	class ptv_AX_t: ptv_AX_Base
	{
		author = "Project True Viking";
		scope = 2;
		model = "\ptv_weapons\longrangerifles\ax\ptv_ax.p3d";
		picture = "\ptv_weapons\data\inv\ax_t_x_ca.paa";
		displayName = "AI AX MK3 Tan";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\ax\data\ax_co.paa","\ptv_weapons\longrangerifles\ax\data\butt_co.paa"};
	};
	class ptv_AX_g: ptv_AX_Base
	{
		author = "Project True Viking";
		scope = 2;
		model = "\ptv_weapons\longrangerifles\ax\ptv_ax.p3d";
		picture = "\ptv_weapons\data\inv\ax_g_x_ca.paa";
		displayName = "AI AX MK3 Green";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\ax\data\ax_g_co.paa","\ptv_weapons\longrangerifles\ax\data\butt_g_co.paa"};
	};
	class ptv_AX_b: ptv_AX_Base
	{
		author = "Project True Viking";
		scope = 2;
		model = "\ptv_weapons\longrangerifles\ax\ptv_ax.p3d";
		picture = "\ptv_weapons\data\inv\ax_b_x_ca.paa";
		displayName = "AI AX MK3 Black";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\ax\data\ax_b_co.paa","\ptv_weapons\longrangerifles\ax\data\butt_b_co.paa"};
	};
	class ptv_M82a1: Rifle_Long_Base_F
	{
		scope = 2;
		author = "Zeealex, Reyhard, Project True Viking";
		model = "\ptv_weapons\longrangerifles\m82\ptv_M82a1.p3d";
		displayName = "AMR-M/91";
		picture = "\ptv_weapons\data\inv\m82a1_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		magazines[] = {"ptv_10Rnd_127x99_m82","ptv_10Rnd_127x99_m82_Raufoss","ptv_10Rnd_127x99_m82_T_Red","ptv_10Rnd_127x99_m82_Raufoss_T_Red"};
		reloadAction = "GestureReloadDMR05";
		recoil = "recoil_gm6";
		maxZeroing = 2200;
		cursor = "srifle";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		handAnim[] = {"OFP2_ManSkeleton","\ptv_weapons\data\anim\ptv_m82a1.rtm"};
		opticsPPEffects[] = {};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		descriptionShort = "M82A1";
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",0.70794576,1,20};
		magazineWell[] = {"CBA_50BMG_M107"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "ptv_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 283.8;
			class MuzzleSlot{};
			class PointerSlot{};
			class CowsSlot: asdg_OpticRail1913_long
			{
				iconPosition[] = {0.6,0.35};
				iconScale = 0.2;
			};
		};
		class ItemInfo
		{
			priority = 1;
		};
		discreteDistance[] = {100,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceCameraPoint[] = {"eye","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200","eye_1300","eye_1400","eye_1500"};
		discreteDistanceInitIndex = 0;
		cameraDir = "eye_look";
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1.8;
		opticsZoomMin = 0.275;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.70794576,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.70794576,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.70794576,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.70794576,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.0004363;
			soundContinuous = 0;
			reloadTime = 0.5;
			recoil = "LynxRecoil";
			recoilProne = "LynxRecoilprone";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\sfx_gm6a",0.39810717,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx_gm6b",0.39810717,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1c",1,1,1200};
				begin2[] = {"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1d",1,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			requiredOpticType = 1;
		};
		class medium_optic2: Single
		{
			showToPlayer = 0;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2: far_optic1
		{
			minRange = 500;
			minRangeProbab = 0.2;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 2100;
			maxRangeProbab = 0.3;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class Library
		{
			libTextDesc = "Barrett M-82A1";
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Safety",0.11220184,1,5};
		drySound[] = {"A3\Sounds_F\weapons\GM6Lynx\GM6_lynx_dry",0.56234133,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",1,1,10};
	};
	class ptv_M82a1_des: ptv_M82a1
	{
		author = "Zeealex, Reyhard, Project True Viking";
		displayName = "AMR-M/91 (Desert)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\m82\data\m107_camo_des_co.paa"};
		hiddenSelectionsMaterials[] = {"\ptv_weapons\longrangerifles\m82\data\m107_camo.rvmat"};
		picture = "\ptv_weapons\data\inv\m82a1_des_x_ca.paa";
	};
	class ptv_M82a1_wdl: ptv_M82a1
	{
		author = "Zeealex, Reyhard, Project True Viking";
		displayName = "AMR-M/91 (Woodland)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ptv_weapons\longrangerifles\m82\data\m107_camo_wdl_co.paa"};
		hiddenSelectionsMaterials[] = {"\ptv_weapons\longrangerifles\m82\data\m107_camo.rvmat"};
		picture = "\ptv_weapons\data\inv\m82a1_wdl_x_ca.paa";
	};
};
class cfgEditorSubcategories
{
	class EdSubcat_Shotguns
	{
		displayName = "Shotguns";
	};
};
class Extended_PostInit_EventHandlers
{
	class PTV
	{
		init = "call compile preprocessFileLineNumbers 'ptv_weapons\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class ReammoBox_F;
	class NATO_Box_Base;
	class Box_NATO_Wps_F;
	class Weapon_Base_F;
	class Launcher_Base_F;
	class Pistol_Base_F;
	class Item_Base_F;
	class WeaponHolder_Single_limited_item_F;
	class weapon_ptv_g19: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Glock 19";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_g19
			{
				weapon = "ptv_g19";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_G19
			{
				magazine = "ptv_15Rnd_9mm_G19";
				count = 1;
			};
		};
	};
	class weapon_ptv_g19t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Glock 19 Tactical";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_g19t
			{
				weapon = "ptv_g19t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_G19
			{
				magazine = "ptv_15Rnd_9mm_G19";
				count = 1;
			};
		};
	};
	class weapon_ptv_p80: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P80";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p80
			{
				weapon = "ptv_p80";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_G17
			{
				magazine = "ptv_17Rnd_9mm_G17";
				count = 1;
			};
		};
	};
	class weapon_ptv_p80t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P80 Tactical";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p80t
			{
				weapon = "ptv_p80t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_G17
			{
				magazine = "ptv_17Rnd_9mm_G17";
				count = 1;
			};
		};
	};
	class weapon_ptv_l9a2: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L9A2";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l9a2
			{
				weapon = "ptv_l9a2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_L9A2
			{
				magazine = "ptv_17Rnd_9mm_L9A2";
				count = 1;
			};
		};
	};
	class weapon_ptv_l9a2t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L9A2 Tactical";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l9a2t
			{
				weapon = "ptv_l9a2t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_L9A2
			{
				magazine = "ptv_17Rnd_9mm_L9A2";
				count = 1;
			};
		};
	};
	class weapon_ptv_l9a2_t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L9A2 Tan";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l9a2_t
			{
				weapon = "ptv_l9a2_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_L9A2
			{
				magazine = "ptv_17Rnd_9mm_L9A2";
				count = 1;
			};
		};
	};
	class weapon_ptv_l9a2_g: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L9A2 Green";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l9a2_g
			{
				weapon = "ptv_l9a2_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_L9A2
			{
				magazine = "ptv_17Rnd_9mm_L9A2";
				count = 1;
			};
		};
	};
	class weapon_ptv_l9a2t_t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L9A2 Tactical Tan";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l9a2t_t
			{
				weapon = "ptv_l9a2t_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_L9A2
			{
				magazine = "ptv_17Rnd_9mm_L9A2";
				count = 1;
			};
		};
	};
	class weapon_ptv_l9a2t_g: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L9A2 Tactical Green";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l9a2t_g
			{
				weapon = "ptv_l9a2t_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_L9A2
			{
				magazine = "ptv_17Rnd_9mm_L9A2";
				count = 1;
			};
		};
	};
	class weapon_ptv_p320: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p320
			{
				weapon = "ptv_p320";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_p30t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320 Tactical";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p30t
			{
				weapon = "ptv_p30t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_p320_b: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320 Black";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p320_b
			{
				weapon = "ptv_p320_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_p30t_b: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320 Black Tactical";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p30t_b
			{
				weapon = "ptv_p30t_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_p320_g: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320 Green";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p320_g
			{
				weapon = "ptv_p320_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_p30t_g: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320 Green Tactical";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p30t_g
			{
				weapon = "ptv_p30t_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_p320_rb: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320 RB";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p320_rb
			{
				weapon = "ptv_p320_rb";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_p30t_rb: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "P320 RB";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_p30t_rb
			{
				weapon = "ptv_p30t_rb";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class weapon_ptv_usp45t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "USP45 Tactical";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_usp45t
			{
				weapon = "ptv_usp45t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_12Rnd_45ACP_USP
			{
				magazine = "ptv_12Rnd_45ACP_USP";
				count = 1;
			};
		};
	};
	class weapon_ptv_hk69: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Hk69";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_hk69
			{
				weapon = "ptv_hk69";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class weapon_ptv_l2bpg: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L2BPG Black";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l2bpg
			{
				weapon = "ptv_l2bpg";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class weapon_ptv_l2bpg_g: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L2BPG Green";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l2bpg_g
			{
				weapon = "ptv_l2bpg_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class weapon_ptv_l2bpg_t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "L2BPG Tan";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_l2bpg_t
			{
				weapon = "ptv_l2bpg_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9p: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_mp9p
			{
				weapon = "ptv_mp9p";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_20Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_20Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9p_b: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 Black";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_mp9p_b
			{
				weapon = "ptv_mp9p_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_20Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_20Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9p_t: Pistol_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 Tan";
		author = "Project True Viking";
		vehicleClass = "WeaponsHandguns";
		editorCategory = "EdCat_weapons";
		editorSubCategory = "EdSubcat_Pistols";
		class TransportWeapons
		{
			class ptv_mp9p_t
			{
				weapon = "ptv_mp9p_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_20Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_20Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_cbj_ms: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CBJ-MS (9mm)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_cbj_ms
			{
				weapon = "ptv_cbj_ms";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_CBJ_Mag
			{
				magazine = "ptv_30Rnd_9x19_CBJ_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_cbj_ms2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CBJ-MS";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_cbj_ms2
			{
				weapon = "ptv_cbj_ms2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_CBJ_Mag
			{
				magazine = "ptv_30Rnd_65x25_CBJ_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_cbj_ms_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CBJ-MS Black (9mm)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_cbj_ms_b
			{
				weapon = "ptv_cbj_ms_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_CBJ_Mag
			{
				magazine = "ptv_30Rnd_9x19_CBJ_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_cbj_ms2_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CBJ-MS Black";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_cbj_ms2_b
			{
				weapon = "ptv_cbj_ms2_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_CBJ_Mag
			{
				magazine = "ptv_30Rnd_65x25_CBJ_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 (9mm)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_mp9
			{
				weapon = "ptv_mp9";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_30Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 Black (9mm)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_mp9_b
			{
				weapon = "ptv_mp9_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_30Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 Tan (9mm)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_mp9_t
			{
				weapon = "ptv_mp9_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_30Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9_cbj: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 (CBJ)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_mp9_cbj
			{
				weapon = "ptv_mp9_cbj";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_MP9_Mag
			{
				magazine = "ptv_30Rnd_65x25_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9_cbj_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 Black (CBJ)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_mp9_cbj_b
			{
				weapon = "ptv_mp9_cbj_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_MP9_Mag
			{
				magazine = "ptv_30Rnd_65x25_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_mp9_cbj_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MP9 Tan (CBJ)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SubMachineGuns";
		class TransportWeapons
		{
			class ptv_mp9_cbj_t
			{
				weapon = "ptv_mp9_cbj_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_MP9_Mag
			{
				magazine = "ptv_30Rnd_65x25_MP9_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_bm4: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "PH-M/01";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_Shotguns";
		class TransportWeapons
		{
			class ptv_bm4
			{
				weapon = "ptv_bm4";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_8Rnd_B_Beneli_74Slug
			{
				magazine = "ptv_8Rnd_B_Beneli_74Slug";
				count = 1;
			};
		};
	};
	class weapon_ptv_bm4e: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "PH-M/01 Entry";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_Shotguns";
		class TransportWeapons
		{
			class ptv_bm4e
			{
				weapon = "ptv_bm4e";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_8Rnd_B_Beneli_74Pellets
			{
				magazine = "ptv_8Rnd_B_Beneli_74Pellets";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG
			{
				weapon = "ptv_AG";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_b
			{
				weapon = "ptv_AG_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_c: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "PDW-M/98";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_c
			{
				weapon = "ptv_AG_c";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_c_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "PDW-M/98 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_c_b
			{
				weapon = "ptv_AG_c_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_k: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_k
			{
				weapon = "ptv_AG_k";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_k_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_k_b
			{
				weapon = "ptv_AG_k_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_r: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90 R";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_r
			{
				weapon = "ptv_AG_r";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_r_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90 R (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_r_b
			{
				weapon = "ptv_AG_r_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_c_r: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "PDW-M/98 R";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_c_r
			{
				weapon = "ptv_AG_c_r";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_c_r_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "PDW-M/98 R (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_c_r_b
			{
				weapon = "ptv_AG_c_r_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_k_r: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90 R";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_k_r
			{
				weapon = "ptv_AG_k_r";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_k_r_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90 R (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_k_r_b
			{
				weapon = "ptv_AG_k_r_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_gl_k_r: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90 R GL";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_gl_k_r
			{
				weapon = "ptv_AG_gl_k_r";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_gl_k_r_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90 R GL (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_gl_k_r_b
			{
				weapon = "ptv_AG_gl_k_r_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_r2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90 R2";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_r2
			{
				weapon = "ptv_AG_r2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_r2_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90 R2 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_r2_b
			{
				weapon = "ptv_AG_r2_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_k_r2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90 R2";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_k_r2
			{
				weapon = "ptv_AG_k_r2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_k_r2_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/90 R2 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_k_r2_b
			{
				weapon = "ptv_AG_k_r2_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class weapon_ptv_AGM: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90M";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AGM
			{
				weapon = "ptv_AGM";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_AGM_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90M (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AGM_b
			{
				weapon = "ptv_AGM_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_AGM_GL: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90M GL";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AGM_GL
			{
				weapon = "ptv_AGM_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_AGM_GL_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90M GL (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AGM_GL_b
			{
				weapon = "ptv_AGM_GL_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_AGMR: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90MR";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AGMR
			{
				weapon = "ptv_AGMR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_AGMR_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/90MR (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AGMR_b
			{
				weapon = "ptv_AGMR_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_c2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "PDW-M/98M";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_c2
			{
				weapon = "ptv_AG_c2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_AG_c2_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "PDW-M/98M (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_AG_c2_b
			{
				weapon = "ptv_AG_c2_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RK62m2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "RK-62M2";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RK62m2
			{
				weapon = "ptv_RK62m2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_762x39_RK
			{
				magazine = "ptv_30Rnd_762x39_RK";
				count = 1;
			};
		};
	};
	class weapon_ptv_RK62m2_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "RK-62M2 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RK62m2_b
			{
				weapon = "ptv_RK62m2_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_762x39_RK
			{
				magazine = "ptv_30Rnd_762x39_RK";
				count = 1;
			};
		};
	};
	class weapon_ptv_RK95: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "RK-95TP";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RK95
			{
				weapon = "ptv_RK95";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_30Rnd_762x39_RK
			{
				magazine = "ptv_30Rnd_762x39_RK";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/23";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556
			{
				weapon = "ptv_RS556";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/23 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556_b
			{
				weapon = "ptv_RS556_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/23 (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556_t
			{
				weapon = "ptv_RS556_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556_GL: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/23 GL";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556_GL
			{
				weapon = "ptv_RS556_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556_GL_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/23 GL (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556_GL_b
			{
				weapon = "ptv_RS556_GL_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556_GL_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "G-M/23 GL (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556_GL_t
			{
				weapon = "ptv_RS556_GL_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556s: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/23";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556s
			{
				weapon = "ptv_RS556s";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556s_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/23 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556s_b
			{
				weapon = "ptv_RS556s_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_RS556s_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "K-M/23 (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_RS556s_t
			{
				weapon = "ptv_RS556s_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "SSR-M/80";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_m14
			{
				weapon = "ptv_m14";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14_socom: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "SOCOM 16";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_m14_socom
			{
				weapon = "ptv_m14_socom";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14_socom_wdl: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "SOCOM 16 (Woodland)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_m14_socom_wdl
			{
				weapon = "ptv_m14_socom_wdl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_l2f: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "L2F Black";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_l2f
			{
				weapon = "ptv_l2f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class weapon_ptv_l2f_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "L2F Green";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_l2f_g
			{
				weapon = "ptv_l2f_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class weapon_ptv_l2f_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "L2F Tan";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_AssaultRifles";
		class TransportWeapons
		{
			class ptv_l2f_t
			{
				weapon = "ptv_l2f_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class weapon_ptv_MG3: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/61";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_MG3
			{
				weapon = "ptv_MG3";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_B_MG3
			{
				magazine = "ptv_50Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class weapon_ptv_MG3r: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/61 R";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_MG3r
			{
				weapon = "ptv_MG3r";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_B_MG3
			{
				magazine = "ptv_50Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class weapon_ptv_MG3KWS: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/61 KWS";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_MG3KWS
			{
				weapon = "ptv_MG3KWS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_B_MG3
			{
				magazine = "ptv_50Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class weapon_ptv_MG3KWS_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/61 KWS (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_MG3KWS_b
			{
				weapon = "ptv_MG3KWS_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_B_MG3
			{
				magazine = "ptv_50Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class weapon_ptv_MG3KWS_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/61 KWS (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_MG3KWS_t
			{
				weapon = "ptv_MG3KWS_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_B_MG3
			{
				magazine = "ptv_50Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4
			{
				weapon = "ptv_M60E4";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4s: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 S";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4s
			{
				weapon = "ptv_M60E4s";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4r: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 R";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4r
			{
				weapon = "ptv_M60E4r";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4rs: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 RS";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4rs
			{
				weapon = "ptv_M60E4rs";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4_t
			{
				weapon = "ptv_M60E4_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4s_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 S (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4s_t
			{
				weapon = "ptv_M60E4s_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4r_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 R (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4r_t
			{
				weapon = "ptv_M60E4r_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4rs_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 RS (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4rs_t
			{
				weapon = "ptv_M60E4rs_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 (Green)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4_g
			{
				weapon = "ptv_M60E4_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4s_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 S (Green)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4s_g
			{
				weapon = "ptv_M60E4s_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4r_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 R (Green)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4r_g
			{
				weapon = "ptv_M60E4r_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_M60E4rs_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MG-M/14 RS (Green)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_M60E4rs_g
			{
				weapon = "ptv_M60E4rs_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class weapon_ptv_m249: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/80M";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m249
			{
				weapon = "ptv_m249";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249
			{
				magazine = "ptv_200Rnd_556x45_M249";
				count = 1;
			};
		};
	};
	class weapon_ptv_m249_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/80M (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m249_b
			{
				weapon = "ptv_m249_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249
			{
				magazine = "ptv_200Rnd_556x45_M249";
				count = 1;
			};
		};
	};
	class weapon_ptv_m249_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/80M (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m249_t
			{
				weapon = "ptv_m249_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249
			{
				magazine = "ptv_200Rnd_556x45_M249";
				count = 1;
			};
		};
	};
	class weapon_ptv_m249p: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/80MS";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m249p
			{
				weapon = "ptv_m249p";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_P
			{
				magazine = "ptv_200Rnd_556x45_M249_P";
				count = 1;
			};
		};
	};
	class weapon_ptv_m249p_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/80MS (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m249p_b
			{
				weapon = "ptv_m249p_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_P
			{
				magazine = "ptv_200Rnd_556x45_M249_P";
				count = 1;
			};
		};
	};
	class weapon_ptv_m249p_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/80MS (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_m249p_t
			{
				weapon = "ptv_m249p_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_P
			{
				magazine = "ptv_200Rnd_556x45_M249_P";
				count = 1;
			};
		};
	};
	class weapon_ptv_negev: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/99";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_negev
			{
				weapon = "ptv_negev";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class weapon_ptv_negev_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/99 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_negev_b
			{
				weapon = "ptv_negev_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class weapon_ptv_ng5: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/99 NG5";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_ng5
			{
				weapon = "ptv_ng5";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class weapon_ptv_ng5_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/99 NG5 (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_ng5_b
			{
				weapon = "ptv_ng5_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class weapon_ptv_ng5_sf: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/99 NG5 SF";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_ng5_sf
			{
				weapon = "ptv_ng5_sf";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class weapon_ptv_ng5_sf_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/99 NG5 SF (Black)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_ng5_sf_b
			{
				weapon = "ptv_ng5_sf_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class weapon_ptv_ng5_sf_des: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG-M/99 NG5 SF (Desert)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_MachineGuns";
		class TransportWeapons
		{
			class ptv_ng5_sf_des
			{
				weapon = "ptv_ng5_sf_des";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14TP: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/80 TP";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_m14TP
			{
				weapon = "ptv_m14TP";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14TP_des: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/80 TP (Desert)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_m14TP_des
			{
				weapon = "ptv_m14TP_des";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14TP_wdl: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/80 TP(Woodland)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_m14TP_wdl
			{
				weapon = "ptv_m14TP_wdl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14TP2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/80 TP2";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_m14TP2
			{
				weapon = "ptv_m14TP2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14TP2_des: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/80 TP2 (Desert)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_m14TP2_des
			{
				weapon = "ptv_m14TP2_des";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_m14TP2_wdl: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/80 TP2 (Woodland)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_m14TP2_wdl
			{
				weapon = "ptv_m14TP2_wdl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class weapon_ptv_TRG42: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/01";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_TRG42
			{
				weapon = "ptv_TRG42";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_5Rnd_86x70_TRG42
			{
				magazine = "ptv_5Rnd_86x70_TRG42";
				count = 1;
			};
		};
	};
	class weapon_ptv_TRG42f: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SSR-M/01 (Folding Stock)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_TRG42f
			{
				weapon = "ptv_TRG42f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_5Rnd_86x70_TRG42
			{
				magazine = "ptv_5Rnd_86x70_TRG42";
				count = 1;
			};
		};
	};
	class weapon_ptv_AX_b: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AI AX";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_AX_b
			{
				weapon = "ptv_AX_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_10Rnd_86x70_AX
			{
				magazine = "ptv_10Rnd_86x70_AX";
				count = 1;
			};
		};
	};
	class weapon_ptv_AX_t: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AI AX (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_AX_t
			{
				weapon = "ptv_AX_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_10Rnd_86x70_AX
			{
				magazine = "ptv_10Rnd_86x70_AX";
				count = 1;
			};
		};
	};
	class weapon_ptv_AX_g: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AI AX (Green)";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_AX_g
			{
				weapon = "ptv_AX_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_10Rnd_86x70_AX
			{
				magazine = "ptv_10Rnd_86x70_AX";
				count = 1;
			};
		};
	};
	class weapon_ptv_M82a1: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AMR-M/91";
		author = "Project True Viking";
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubCategory = "EdSubcat_SniperRifles";
		class TransportWeapons
		{
			class ptv_M82a1
			{
				weapon = "ptv_M82a1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class ptv_10Rnd_127x99_m82
			{
				magazine = "ptv_10Rnd_127x99_m82";
				count = 1;
			};
		};
	};
	class mag_ptv_1Rnd_HE_Grenade_shell: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "40mm HE Grenade Round";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 1;
			};
		};
	};
	class mag_ptv_10Rnd_127x99_m82: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "10Rnd M82a1 Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_10Rnd_127x99_m82
			{
				magazine = "ptv_10Rnd_127x99_m82";
				count = 1;
			};
		};
	};
	class mag_ptv_10Rnd_127x99_m82_T_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "10Rnd M82a1 Red Tracer Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_10Rnd_127x99_m82_T_Red
			{
				magazine = "ptv_10Rnd_127x99_m82_T_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_10Rnd_127x99_m82_Raufoss: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "10Rnd M82a1 Raufoss Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_10Rnd_127x99_m82_Raufoss
			{
				magazine = "ptv_10Rnd_127x99_m82_Raufoss";
				count = 1;
			};
		};
	};
	class mag_ptv_10Rnd_127x99_m82_Raufoss_T_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "10Rnd M82a1 Raufoss Red Tracer Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_10Rnd_127x99_m82_Raufoss_T_Red
			{
				magazine = "ptv_10Rnd_127x99_m82_Raufoss_T_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_5Rnd_86x70_TRG42: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "5Rnd TRG42 Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_5Rnd_86x70_TRG42
			{
				magazine = "ptv_5Rnd_86x70_TRG42";
				count = 1;
			};
		};
	};
	class mag_ptv_10Rnd_86x70_AX: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "10Rnd AX Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_10Rnd_86x70_AX
			{
				magazine = "ptv_10Rnd_86x70_AX";
				count = 1;
			};
		};
	};
	class mag_ptv_50Rnd_762x51_B_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "50Rnd MG3 (Ball) drum magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_B_MG3
			{
				magazine = "ptv_50Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_50Rnd_762x51_M_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "50Rnd MG3 (Ball-Tracer Mix) drum magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_M_MG3
			{
				magazine = "ptv_50Rnd_762x51_M_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_50Rnd_762x51_Barrier_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "50Rnd MG3 (Mk319-Tracer Mix) drum magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_Barrier_MG3
			{
				magazine = "ptv_50Rnd_762x51_Barrier_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_50Rnd_762x51_T_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "50Rnd MG3 (Tracer) drum magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_50Rnd_762x51_T_MG3
			{
				magazine = "ptv_50Rnd_762x51_T_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_B_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd MG3 (Ball) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_MG3
			{
				magazine = "ptv_100Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_M_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd MG3 (Ball-Tracer Mix) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_M_MG3
			{
				magazine = "ptv_100Rnd_762x51_M_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_Barrier_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd MG3 (Mk319-Tracer Mix) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_Barrier_MG3
			{
				magazine = "ptv_100Rnd_762x51_Barrier_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_T_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd MG3 (Tracer) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_T_MG3
			{
				magazine = "ptv_100Rnd_762x51_T_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_250Rnd_762x51_B_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "250Rnd MG3 (Ball) belt";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_250Rnd_762x51_B_MG3
			{
				magazine = "ptv_250Rnd_762x51_B_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_250Rnd_762x51_M_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "250Rnd MG3 (Ball-Tracer Mix) belt";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_250Rnd_762x51_M_MG3
			{
				magazine = "ptv_250Rnd_762x51_M_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_250Rnd_762x51_Barrier_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "250Rnd MG3 (Mk319-Tracer Mix) belt";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_250Rnd_762x51_Barrier_MG3
			{
				magazine = "ptv_250Rnd_762x51_Barrier_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_250Rnd_762x51_T_MG3: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "250Rnd MG3 (Tracer) belt";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_250Rnd_762x51_T_MG3
			{
				magazine = "ptv_250Rnd_762x51_T_MG3";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_B_M60: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M60 (Ball) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_B_M60
			{
				magazine = "ptv_100Rnd_762x51_B_M60";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_M_M60: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M60 (Ball-Tracer Mix) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_M_M60
			{
				magazine = "ptv_100Rnd_762x51_M_M60";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_Barrier_M60: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M60 (Mk319-Tracer Mix) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_Barrier_M60
			{
				magazine = "ptv_100Rnd_762x51_Barrier_M60";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_762x51_T_M60: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M60 (Tracer) magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_762x51_T_M60
			{
				magazine = "ptv_100Rnd_762x51_T_M60";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_762x39_RK: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd RK magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_762x39_RK
			{
				magazine = "ptv_30Rnd_762x39_RK";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_762x39_RK_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd RK Tracer magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_762x39_RK_Tracer_Red
			{
				magazine = "ptv_30Rnd_762x39_RK_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 box magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249
			{
				magazine = "ptv_200Rnd_556x45_M249";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 Red Tracer box magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249_b: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 Black box magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_b
			{
				magazine = "ptv_200Rnd_556x45_M249_b";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249_b_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 Black Red Tracer box magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_b_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_b_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249_P: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_P
			{
				magazine = "ptv_200Rnd_556x45_M249_P";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249_P_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 Red Tracer pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_P_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_P_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249_P_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 Tan pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_P_t
			{
				magazine = "ptv_200Rnd_556x45_M249_P_t";
				count = 1;
			};
		};
	};
	class mag_ptv_200Rnd_556x45_M249_P_t_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "200Rnd M249 Tan Red Tracer pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_200Rnd_556x45_M249_P_t_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_P_t_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_556x45_M249_P: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M249 pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_556x45_M249_P
			{
				magazine = "ptv_100Rnd_556x45_M249_P";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_556x45_M249_P_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M249 Red Tracer pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_556x45_M249_P_Tracer_Red
			{
				magazine = "ptv_100Rnd_556x45_M249_P_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_556x45_M249_P_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M249 Tan pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_556x45_M249_P_t
			{
				magazine = "ptv_100Rnd_556x45_M249_P_t";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_556x45_M249_P_t_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd M249 Tan Red Tracer pouch magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_556x45_M249_P_t_Tracer_Red
			{
				magazine = "ptv_100Rnd_556x45_M249_P_t_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_150Rnd_556x45_Negev: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "150Rnd Negev magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 1;
			};
		};
	};
	class mag_ptv_150Rnd_556x45_Negev_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "150Rnd Negev Red Tracer magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev_Tracer_Red
			{
				magazine = "ptv_150Rnd_556x45_Negev_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_150Rnd_556x45_Negev_b: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "150Rnd Negev Black magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev_b
			{
				magazine = "ptv_150Rnd_556x45_Negev_b";
				count = 1;
			};
		};
	};
	class mag_ptv_150Rnd_556x45_Negev_b_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "150Rnd Negev Black Red Tracer magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_150Rnd_556x45_Negev_b_Tracer_Red
			{
				magazine = "ptv_150Rnd_556x45_Negev_b_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_35Rnd_556x45_AG: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "35Rnd Galil magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 1;
			};
		};
	};
	class mag_ptv_35Rnd_556x45_AG_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "35Rnd Galil Red Tracer magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG_Tracer_Red
			{
				magazine = "ptv_35Rnd_556x45_AG_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_35Rnd_556x45_AG_s: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "35Rnd Galil Silver magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG_s
			{
				magazine = "ptv_35Rnd_556x45_AG_s";
				count = 1;
			};
		};
	};
	class mag_ptv_35Rnd_556x45_AG_s_Tracer_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "35Rnd Galil Red Tracer Silver magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_35Rnd_556x45_AG_s_Tracer_Red
			{
				magazine = "ptv_35Rnd_556x45_AG_s_Tracer_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag
			{
				magazine = "ptv_30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_g: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Grey Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_g
			{
				magazine = "ptv_30Rnd_556x45_Stanag_g";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Tan Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_t
			{
				magazine = "ptv_30Rnd_556x45_Stanag_t";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_Red
			{
				magazine = "ptv_30Rnd_556x45_Stanag_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_g_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Red Tracer Grey Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_g_Red
			{
				magazine = "ptv_30Rnd_556x45_Stanag_g_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_t_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Red Tracer Tan Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_t_Red
			{
				magazine = "ptv_30Rnd_556x45_Stanag_t_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_pull: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Pull Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_pull
			{
				magazine = "ptv_30Rnd_556x45_Stanag_pull";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_pull_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Pull Tan Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_pull_t
			{
				magazine = "ptv_30Rnd_556x45_Stanag_pull_t";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_pull_g: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Pull Green Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_pull_g
			{
				magazine = "ptv_30Rnd_556x45_Stanag_pull_g";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_pull_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Pull Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_pull_Red
			{
				magazine = "ptv_30Rnd_556x45_Stanag_pull_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_pull_t_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Pull Tan Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_pull_t_Red
			{
				magazine = "ptv_30Rnd_556x45_Stanag_pull_t_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Stanag_pull_g_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd STANAG Pull Green Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Stanag_pull_g_Red
			{
				magazine = "ptv_30Rnd_556x45_Stanag_pull_g_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_40Rnd_556x45_Pmag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "40rnd PMAG Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_40Rnd_556x45_Pmag
			{
				magazine = "ptv_40Rnd_556x45_Pmag";
				count = 1;
			};
		};
	};
	class mag_ptv_40Rnd_556x45_Pmag_g: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "40rnd PMAG Green Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_40Rnd_556x45_Pmag_g
			{
				magazine = "ptv_40Rnd_556x45_Pmag_g";
				count = 1;
			};
		};
	};
	class mag_ptv_40Rnd_556x45_Pmag_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "40rnd PMAG Tan Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_40Rnd_556x45_Pmag_t
			{
				magazine = "ptv_40Rnd_556x45_Pmag_t";
				count = 1;
			};
		};
	};
	class mag_ptv_40Rnd_556x45_Pmag_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "40rnd PMAG Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_40Rnd_556x45_Pmag_Red
			{
				magazine = "ptv_40Rnd_556x45_Pmag_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_40Rnd_556x45_Pmag_g_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "40rnd PMAG Red Tracer Green Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_40Rnd_556x45_Pmag_g_Red
			{
				magazine = "ptv_40Rnd_556x45_Pmag_g_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_40Rnd_556x45_Pmag_t_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "40rnd PMAG Red Tracer Tan Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_40Rnd_556x45_Pmag_t_Red
			{
				magazine = "ptv_40Rnd_556x45_Pmag_t_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAG Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmag
			{
				magazine = "ptv_30Rnd_556x45_Pmag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmag_g: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAG Green Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmag_g
			{
				magazine = "ptv_30Rnd_556x45_Pmag_g";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmag_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAG Tan Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmag_t
			{
				magazine = "ptv_30Rnd_556x45_Pmag_t";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmag_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAG Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmag_Red
			{
				magazine = "ptv_30Rnd_556x45_Pmag_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmag_g_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAG Red Tracer Green Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmag_g_Red
			{
				magazine = "ptv_30Rnd_556x45_Pmag_g_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmag_t_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAG Red Tracer Tan Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmag_t_Red
			{
				magazine = "ptv_30Rnd_556x45_Pmag_t_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmagw: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAGW Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmagw
			{
				magazine = "ptv_30Rnd_556x45_Pmagw";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmagw_g: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAGW Green Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmagw_g
			{
				magazine = "ptv_30Rnd_556x45_Pmagw_g";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmagw_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAGW Tan Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmagw_t
			{
				magazine = "ptv_30Rnd_556x45_Pmagw_t";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmagw_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAGW Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmagw_Red
			{
				magazine = "ptv_30Rnd_556x45_Pmagw_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmagw_g_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAGW Red Tracer Green Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmagw_g_Red
			{
				magazine = "ptv_30Rnd_556x45_Pmagw_g_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_Pmagw_t_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd PMAGW Red Tracer Tan Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_Pmagw_t_Red
			{
				magazine = "ptv_30Rnd_556x45_Pmagw_t_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awm: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awm
			{
				magazine = "ptv_30Rnd_556x45_L5awm";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awm_g: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Green Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awm_g
			{
				magazine = "ptv_30Rnd_556x45_L5awm_g";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awm_t: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Tan Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awm_t
			{
				magazine = "ptv_30Rnd_556x45_L5awm_t";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awm_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awm_Red
			{
				magazine = "ptv_30Rnd_556x45_L5awm_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awm_g_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Red Tracer Green Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awm_g_Red
			{
				magazine = "ptv_30Rnd_556x45_L5awm_g_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awm_t_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Red Tracer Tan Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awm_t_Red
			{
				magazine = "ptv_30Rnd_556x45_L5awm_t_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awmc: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Clear Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awmc
			{
				magazine = "ptv_30Rnd_556x45_L5awmc";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awmc_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Clear Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awmc_Red
			{
				magazine = "ptv_30Rnd_556x45_L5awmc_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awmc_pull: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Clear Pull Magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awmc_pull
			{
				magazine = "ptv_30Rnd_556x45_L5awmc_pull";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_556x45_L5awmc_pull_Red: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30rnd L5AWM Clear Pull Red Tracer Mag";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_556x45_L5awmc_pull_Red
			{
				magazine = "ptv_30Rnd_556x45_L5awmc_pull_Red";
				count = 1;
			};
		};
	};
	class mag_ptv_8Rnd_B_Beneli_74Slug: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "8Rnd. M1014 Slug";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_8Rnd_B_Beneli_74Slug
			{
				magazine = "ptv_8Rnd_B_Beneli_74Slug";
				count = 1;
			};
		};
	};
	class mag_ptv_8Rnd_B_Beneli_74Pellets: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "8Rnd. M1014 Pellets";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_8Rnd_B_Beneli_74Pellets
			{
				magazine = "ptv_8Rnd_B_Beneli_74Pellets";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_9x19_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd CBJ-MS 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_CBJ_Mag
			{
				magazine = "ptv_30Rnd_9x19_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_9x19_Red_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd CBJ-MS Tracer 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_Red_CBJ_Mag
			{
				magazine = "ptv_30Rnd_9x19_Red_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_9x19_Sub_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd CBJ-MS Subsonic 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_Sub_CBJ_Mag
			{
				magazine = "ptv_30Rnd_9x19_Sub_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_9x19_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd CBJ-MS 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_9x19_CBJ_Mag
			{
				magazine = "ptv_100Rnd_9x19_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_9x19_Red_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd CBJ-MS Tracer 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_9x19_Red_CBJ_Mag
			{
				magazine = "ptv_100Rnd_9x19_Red_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_9x19_Sub_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd CBJ-MS Subsonic 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_9x19_Sub_CBJ_Mag
			{
				magazine = "ptv_100Rnd_9x19_Sub_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_65x25_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd CBJ-MS magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_CBJ_Mag
			{
				magazine = "ptv_30Rnd_65x25_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_65x25_Red_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd CBJ-MS Tracer magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_Red_CBJ_Mag
			{
				magazine = "ptv_30Rnd_65x25_Red_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_65x25_Sub_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd CBJ-MS Subsonic magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_Sub_CBJ_Mag
			{
				magazine = "ptv_30Rnd_65x25_Sub_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_65x25_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd CBJ-MS magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_65x25_CBJ_Mag
			{
				magazine = "ptv_100Rnd_65x25_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_65x25_Red_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd CBJ-MS Tracer magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_65x25_Red_CBJ_Mag
			{
				magazine = "ptv_100Rnd_65x25_Red_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_100Rnd_65x25_Sub_CBJ_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "100Rnd CBJ-MS Subsonic magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_100Rnd_65x25_Sub_CBJ_Mag
			{
				magazine = "ptv_100Rnd_65x25_Sub_CBJ_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_9x19_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd MP9 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_30Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_9x19_Red_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd MP9 Tracer 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_Red_MP9_Mag
			{
				magazine = "ptv_30Rnd_9x19_Red_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_9x19_Sub_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd MP9 Subsonic 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_9x19_Sub_MP9_Mag
			{
				magazine = "ptv_30Rnd_9x19_Sub_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_20Rnd_9x19_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "20Rnd MP9 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_20Rnd_9x19_MP9_Mag
			{
				magazine = "ptv_20Rnd_9x19_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_20Rnd_9x19_Red_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "20Rnd MP9 Tracer 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_20Rnd_9x19_Red_MP9_Mag
			{
				magazine = "ptv_20Rnd_9x19_Red_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_20Rnd_9x19_Sub_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "20Rnd MP9 Subsonic 9mm magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_20Rnd_9x19_Sub_MP9_Mag
			{
				magazine = "ptv_20Rnd_9x19_Sub_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_65x25_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd MP9 cbj magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_MP9_Mag
			{
				magazine = "ptv_30Rnd_65x25_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_65x25_Red_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd MP9 Tracer CBJ magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_Red_MP9_Mag
			{
				magazine = "ptv_30Rnd_65x25_Red_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_30Rnd_65x25_Sub_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "30Rnd MP9 Subsonic CBJ magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_30Rnd_65x25_Sub_MP9_Mag
			{
				magazine = "ptv_30Rnd_65x25_Sub_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_20Rnd_65x25_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "20Rnd MP9 CBJ magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_20Rnd_65x25_MP9_Mag
			{
				magazine = "ptv_20Rnd_65x25_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_20Rnd_65x25_Red_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "20Rnd MP9 Tracer CBJ magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_20Rnd_65x25_Red_MP9_Mag
			{
				magazine = "ptv_20Rnd_65x25_Red_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_20Rnd_65x25_Sub_MP9_Mag: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "20Rnd MP9 Subsonic CBJ magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_20Rnd_65x25_Sub_MP9_Mag
			{
				magazine = "ptv_20Rnd_65x25_Sub_MP9_Mag";
				count = 1;
			};
		};
	};
	class mag_ptv_15Rnd_9mm_G19: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "15Rnd G19 magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_G19
			{
				magazine = "ptv_15Rnd_9mm_G19";
				count = 1;
			};
		};
	};
	class mag_ptv_17Rnd_9mm_G17: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "17Rnd G17 magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_17Rnd_9mm_G17
			{
				magazine = "ptv_17Rnd_9mm_G17";
				count = 1;
			};
		};
	};
	class mag_ptv_33Rnd_9mm_G17: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "33Rnd G17 magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_33Rnd_9mm_G17
			{
				magazine = "ptv_33Rnd_9mm_G17";
				count = 1;
			};
		};
	};
	class mag_ptv_15Rnd_9mm_P320: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "15Rnd P320 magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_15Rnd_9mm_P320
			{
				magazine = "ptv_15Rnd_9mm_P320";
				count = 1;
			};
		};
	};
	class mag_ptv_12Rnd_45ACP_USP: WeaponHolder_Single_limited_item_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "12Rnd USP45 magazine";
		author = "Project True Viking";
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
		class TransportMagazines
		{
			class ptv_12Rnd_45ACP_USP
			{
				magazine = "ptv_12Rnd_45ACP_USP";
				count = 1;
			};
		};
	};
	class Item_ptv_cbj_sd: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CBJ-MS PDW suppressor";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_cbj_sd
			{
				name = "ptv_cbj_sd";
				count = 1;
			};
		};
	};
	class Item_ptv_rotex: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B&T Rotex V 5.56";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_rotex
			{
				name = "ptv_rotex";
				count = 1;
			};
		};
	};
	class Item_ptv_rotex2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B&T Rotex V Tan 5.56";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_rotex2
			{
				name = "ptv_rotex2";
				count = 1;
			};
		};
	};
	class Item_ptv_rotex308: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B&T Rotex V .308";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_rotex308
			{
				name = "ptv_rotex308";
				count = 1;
			};
		};
	};
	class Item_ptv_rotexs: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B&T Rotex V Compact 5.56";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_rotexs
			{
				name = "ptv_rotexs";
				count = 1;
			};
		};
	};
	class Item_ptv_trant45: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AAC Ti-Rant .45ACP";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_trant45
			{
				name = "ptv_trant45";
				count = 1;
			};
		};
	};
	class Item_ptv_trant9: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AAC Ti-Rant 9mm";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_trant9
			{
				name = "ptv_trant9";
				count = 1;
			};
		};
	};
	class Item_ptv_impuls: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B&T Impuls 9mm";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_impuls
			{
				name = "ptv_impuls";
				count = 1;
			};
		};
	};
	class Item_ptv_mp9qd: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B&T MP9QD";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_mp9qd
			{
				name = "ptv_mp9qd";
				count = 1;
			};
		};
	};
	class Item_ptv_mp9qd_t: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "B&T MP9QD Tan";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_FrontSlot";
		class TransportItems
		{
			class ptv_mp9qd_t
			{
				name = "ptv_mp9qd_t";
				count = 1;
			};
		};
	};
	class Item_ptv_x300: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Surefire X300";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ptv_x300
			{
				name = "ptv_x300";
				count = 1;
			};
		};
	};
	class Item_ptv_x300_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Surefire X300 des";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ptv_x300_des
			{
				name = "ptv_x300_des";
				count = 1;
			};
		};
	};
	class Item_ptv_M6X: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Insight M6X";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		model = "\A3\Weapons_F\DummyItemHorizontal.p3d";
		class TransportItems
		{
			class ptv_M6X
			{
				name = "ptv_M6X";
				count = 1;
			};
		};
	};
	class Item_ptv_dbala2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "DBAL-A2";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_dbala2
			{
				name = "ptv_dbala2";
				count = 1;
			};
		};
	};
	class Item_ptv_dbalpl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "DBAL-PL";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_dbalpl
			{
				name = "ptv_dbalpl";
				count = 1;
			};
		};
	};
	class Item_ptv_dbalpl_t: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "DBAL-PL des";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_dbalpl_t
			{
				name = "ptv_dbalpl_t";
				count = 1;
			};
		};
	};
	class Item_ptv_SFM952V: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Surefire M952v";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_SFM952V
			{
				name = "ptv_SFM952V";
				count = 1;
			};
		};
	};
	class Item_ptv_SFM952V_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Surefire M952v des";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_SFM952V_des
			{
				name = "ptv_SFM952V_des";
				count = 1;
			};
		};
	};
	class Item_ptv_flash: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Tactical flashlight";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_flash
			{
				name = "ptv_flash";
				count = 1;
			};
		};
	};
	class Item_ptv_LLM: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LLM VRC";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_LLM
			{
				name = "ptv_LLM";
				count = 1;
			};
		};
	};
	class Item_ptv_LLM_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LLM VRC des";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_LLM_des
			{
				name = "ptv_LLM_des";
				count = 1;
			};
		};
	};
	class Item_ptv_LLM01: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "LLM01";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_LLM01
			{
				name = "ptv_LLM01";
				count = 1;
			};
		};
	};
	class Item_ptv_peq2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "PEQ-2";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_peq2
			{
				name = "ptv_peq2";
				count = 1;
			};
		};
	};
	class Item_ptv_peq2sf: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "PEQ-2 & Surefire M952v";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_peq2sf
			{
				name = "ptv_peq2sf";
				count = 1;
			};
		};
	};
	class Item_ptv_peq2sf_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "PEQ-2 & Surefire M952v Des";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_SideSlot";
		class TransportItems
		{
			class ptv_peq2sf_des
			{
				name = "ptv_peq2sf_des";
				count = 1;
			};
		};
	};
	class Item_ptv_HBRS: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "HBRS";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_HBRS
			{
				name = "ptv_HBRS";
				count = 1;
			};
		};
	};
	class Item_ptv_1A2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "1A2";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_1A2
			{
				name = "ptv_1A2";
				count = 1;
			};
		};
	};
	class Item_ptv_versapod: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Versa-Pod Bipod";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_versapod
			{
				name = "ptv_versapod";
				count = 1;
			};
		};
	};
	class Item_ptv_versapod_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Versa-Pod Bipod (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_versapod_des
			{
				name = "ptv_versapod_des";
				count = 1;
			};
		};
	};
	class Item_ptv_versapod_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Versa-Pod Bipod (wdl)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_versapod_wdl
			{
				name = "ptv_versapod_wdl";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Vertical Grip";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip1
			{
				name = "ptv_acc_grip1";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip1_t: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Vertical Grip (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip1_t
			{
				name = "ptv_acc_grip1_t";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Vertical Grip Short";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip2
			{
				name = "ptv_acc_grip2";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip2_t: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Vertical Grip Short (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip2_t
			{
				name = "ptv_acc_grip2_t";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip3: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Grip Pod";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip3
			{
				name = "ptv_acc_grip3";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip3_t: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Grip Pod (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip3_t
			{
				name = "ptv_acc_grip3_t";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip4: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Angled Vertical Grip";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip4
			{
				name = "ptv_acc_grip4";
				count = 1;
			};
		};
	};
	class Item_ptv_acc_grip4_t: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Angled Vertical Grip (Tan)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_BottomSlot";
		class TransportItems
		{
			class ptv_acc_grip4_t
			{
				name = "ptv_acc_grip4_t";
				count = 1;
			};
		};
	};
	class Item_ptv_aim3xmag: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CS + 3X Magnifier";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_aim3xmag
			{
				name = "ptv_aim3xmag";
				count = 1;
			};
		};
	};
	class Item_ptv_aimcs: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CS";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_aimcs
			{
				name = "ptv_aimcs";
				count = 1;
			};
		};
	};
	class Item_ptv_aimcs2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CS (Folded KF)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_aimcs2
			{
				name = "ptv_aimcs2";
				count = 1;
			};
		};
	};
	class Item_ptv_compm4s: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CompM4s";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_compm4s
			{
				name = "ptv_compm4s";
				count = 1;
			};
		};
	};
	class Item_ptv_cm4s3xmag: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CompM4s + 3X Magnifier";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_cm4s3xmag
			{
				name = "ptv_cm4s3xmag";
				count = 1;
			};
		};
	};
	class Item_ptv_compm5: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CompM5";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_compm5
			{
				name = "ptv_compm5";
				count = 1;
			};
		};
	};
	class Item_ptv_cm53xmag: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CompM5 + 3X Magnifier";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_cm53xmag
			{
				name = "ptv_cm53xmag";
				count = 1;
			};
		};
	};
	class Item_ptv_compm5s: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CompM5s";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_compm5s
			{
				name = "ptv_compm5s";
				count = 1;
			};
		};
	};
	class Item_ptv_cm5s3xmag: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint CompM5s + 3X Magnifier";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_cm5s3xmag
			{
				name = "ptv_cm5s3xmag";
				count = 1;
			};
		};
	};
	class Item_ptv_t1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint T1";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_t1
			{
				name = "ptv_t1";
				count = 1;
			};
		};
	};
	class Item_ptv_t13xmag: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint T1 + 3X Magnifier";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_t13xmag
			{
				name = "ptv_t13xmag";
				count = 1;
			};
		};
	};
	class Item_ptv_t1s: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint T1s";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_t1s
			{
				name = "ptv_t1s";
				count = 1;
			};
		};
	};
	class Item_ptv_t1s3xmag: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Aimpoint T1s + 3X Magnifier";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_t1s3xmag
			{
				name = "ptv_t1s3xmag";
				count = 1;
			};
		};
	};
	class Item_ptv_eot552: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Eotech 552";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_eot552
			{
				name = "ptv_eot552";
				count = 1;
			};
		};
	};
	class Item_ptv_xps3: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Eotech XPS3";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_xps3
			{
				name = "ptv_xps3";
				count = 1;
			};
		};
	};
	class Item_ptv_xps3_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Eotech XPS3 (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_xps3_des
			{
				name = "ptv_xps3_des";
				count = 1;
			};
		};
	};
	class Item_ptv_xps3xmag: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Eotech XPS3 + 3X Magnifier";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_xps3xmag
			{
				name = "ptv_xps3xmag";
				count = 1;
			};
		};
	};
	class Item_ptv_xps3xmag_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Eotech XPS3 + 3X Magnifier (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_xps3xmag_des
			{
				name = "ptv_xps3xmag_des";
				count = 1;
			};
		};
	};
	class Item_ptv_rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Trijicon RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_rmr
			{
				name = "ptv_rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_rmr_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Trijicon RMR (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_rmr_des
			{
				name = "ptv_rmr_des";
				count = 1;
			};
		};
	};
	class Item_ptv_rmr_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Trijicon RMR (wdl)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Collimators";
		class TransportItems
		{
			class ptv_rmr_wdl
			{
				name = "ptv_rmr_wdl";
				count = 1;
			};
		};
	};
	class Item_ptv_CWS: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "KITE";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_CWS
			{
				name = "ptv_CWS";
				count = 1;
			};
		};
	};
	class Item_ptv_vipir2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "VIPIR-2";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_vipir2
			{
				name = "ptv_vipir2";
				count = 1;
			};
		};
	};
	class Item_ptv_vipir2p: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "VIPIR-2+";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_vipir2p
			{
				name = "ptv_vipir2p";
				count = 1;
			};
		};
	};
	class Item_ptv_ta11: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "TA11";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_ta11
			{
				name = "ptv_ta11";
				count = 1;
			};
		};
	};
	class Item_ptv_ta11rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "TA11 RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_ta11rmr
			{
				name = "ptv_ta11rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_ta02led: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "TA02LED";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_ta02led
			{
				name = "ptv_ta02led";
				count = 1;
			};
		};
	};
	class Item_ptv_ta02led_rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "TA02LED RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_ta02led_rmr
			{
				name = "ptv_ta02led_rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_zo: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "ZO 4x30";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_zo
			{
				name = "ptv_zo";
				count = 1;
			};
		};
	};
	class Item_ptv_zo_rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "ZO 4x30 RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_zo_rmr
			{
				name = "ptv_zo_rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_zos: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "ZOs 4x30";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_zos
			{
				name = "ptv_zos";
				count = 1;
			};
		};
	};
	class Item_ptv_zos_rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "ZOs 4x30 RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_zos_rmr
			{
				name = "ptv_zos_rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_c79: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan C79";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_c79
			{
				name = "ptv_c79";
				count = 1;
			};
		};
	};
	class Item_ptv_m145: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan M145";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_m145
			{
				name = "ptv_m145";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr
			{
				name = "ptv_specterdr";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr_des
			{
				name = "ptv_specterdr_des";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr_rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr_rmr
			{
				name = "ptv_specterdr_rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr_rmr_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR RMR (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr_rmr_des
			{
				name = "ptv_specterdr_rmr_des";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr6: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR6";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr6
			{
				name = "ptv_specterdr6";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr6_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR6 (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr6_des
			{
				name = "ptv_specterdr6_des";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr6_rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR6 RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr6_rmr
			{
				name = "ptv_specterdr6_rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_specterdr6_rmr_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan SpecterDR6 RMR (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_specterdr6_rmr_des
			{
				name = "ptv_specterdr6_rmr_des";
				count = 1;
			};
		};
	};
	class Item_ptv_shortdot: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 1.1-4x20 PMII ShortDot";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_shortdot
			{
				name = "ptv_shortdot";
				count = 1;
			};
		};
	};
	class Item_ptv_shortdot_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 1.1-4x20 PMII ShortDot (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_shortdot_des
			{
				name = "ptv_shortdot_des";
				count = 1;
			};
		};
	};
	class Item_ptv_shortdot_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 1.1-4x20 PMII ShortDot (wdl)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_shortdot_wdl
			{
				name = "ptv_shortdot_wdl";
				count = 1;
			};
		};
	};
	class Item_ptv_shortdot_dcc: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 1-8x24 PM II ShortDot Dual CC";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_shortdot_dcc
			{
				name = "ptv_shortdot_dcc";
				count = 1;
			};
		};
	};
	class Item_ptv_shortdot_dcc_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 1-8x24 PM II ShortDot Dual CC (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_shortdot_dcc_des
			{
				name = "ptv_shortdot_dcc_des";
				count = 1;
			};
		};
	};
	class Item_ptv_shortdot_dcc_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 1-8x24 PM II ShortDot Dual CC (wdl)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_shortdot_dcc_wdl
			{
				name = "ptv_shortdot_dcc_wdl";
				count = 1;
			};
		};
	};
	class Item_ptv_s3x: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Steyr 3x scope";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_s3x
			{
				name = "ptv_s3x";
				count = 1;
			};
		};
	};
	class Item_ptv_s3x_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Steyr 3x scope (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_s3x_des
			{
				name = "ptv_s3x_des";
				count = 1;
			};
		};
	};
	class Item_ptv_s3x_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Steyr 3x scope (wdl)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_s3x_wdl
			{
				name = "ptv_s3x_wdl";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII
			{
				name = "ptv_PMII";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_sunshade: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII (Sunshade)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_sunshade
			{
				name = "ptv_PMII_sunshade";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_des
			{
				name = "ptv_PMII_des";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_des_sunshade: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII (des) (sunshade)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_des_sunshade
			{
				name = "ptv_PMII_des_sunshade";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII (wdl)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_wdl
			{
				name = "ptv_PMII_wdl";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_wdl_sunshade: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII (wdl) (sunshade)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_wdl_sunshade
			{
				name = "ptv_PMII_wdl_sunshade";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_rmr: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII RMR";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_rmr
			{
				name = "ptv_PMII_rmr";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_rmr_sunshade: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII RMR (Sunshade)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_rmr_sunshade
			{
				name = "ptv_PMII_rmr_sunshade";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_rmr_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII RMR (des)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_rmr_des
			{
				name = "ptv_PMII_rmr_des";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_rmr_des_sunshade: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII RMR (des) (sunshade)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_rmr_des_sunshade
			{
				name = "ptv_PMII_rmr_des_sunshade";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_rmr_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII RMR (wdl)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_rmr_wdl
			{
				name = "ptv_PMII_rmr_wdl";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_rmr_wdl_sunshade: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 3-12x50 PMII RMR (wdl) (sunshade)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_rmr_wdl_sunshade
			{
				name = "ptv_PMII_rmr_wdl_sunshade";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_525: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 5-25x56 PMII";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_525
			{
				name = "ptv_PMII_525";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_525_des: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 5-25x56 PMII (D)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_525_des
			{
				name = "ptv_PMII_525_des";
				count = 1;
			};
		};
	};
	class Item_ptv_PMII_525_wdl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "S+B 5-25x56 PMII (W)";
		author = "Project True Viking";
		vehicleClass = "WeaponAccessories";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubCategory = "EdSubcat_TopSlot_Optics";
		class TransportItems
		{
			class ptv_PMII_525_wdl
			{
				name = "ptv_PMII_525_wdl";
				count = 1;
			};
		};
	};
	class ptv_weapbox: Box_NATO_Wps_F
	{
		displayName = "weapon box";
		transportMaxWeapons = 10000000;
		transportMaxMagazines = 1000000;
		maximumLoad = 100000000000000;
		class TransportMagazines
		{
			class _xx_ptv_30Rnd_556x45_Stanag
			{
				magazine = "ptv_30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_ptv_30Rnd_556x45_Stanag_Red
			{
				magazine = "ptv_30Rnd_556x45_Stanag_Red";
				count = 30;
			};
			class _xx_ptv_35Rnd_556x45_AG
			{
				magazine = "ptv_35Rnd_556x45_AG";
				count = 30;
			};
			class _xx_ptv_35Rnd_556x45_AG_Tracer_Red
			{
				magazine = "ptv_35Rnd_556x45_AG_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_150Rnd_556x45_Negev
			{
				magazine = "ptv_150Rnd_556x45_Negev";
				count = 30;
			};
			class _xx_ptv_150Rnd_556x45_Negev_Tracer_Red
			{
				magazine = "ptv_150Rnd_556x45_Negev_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_150Rnd_556x45_Negev_b
			{
				magazine = "ptv_150Rnd_556x45_Negev_b";
				count = 30;
			};
			class _xx_ptv_150Rnd_556x45_Negev_b_Tracer_Red
			{
				magazine = "ptv_150Rnd_556x45_Negev_b_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249
			{
				magazine = "ptv_200Rnd_556x45_M249";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249_b
			{
				magazine = "ptv_200Rnd_556x45_M249_b";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249_b_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_b_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249_P
			{
				magazine = "ptv_200Rnd_556x45_M249_P";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249_P_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_P_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249_P_t
			{
				magazine = "ptv_200Rnd_556x45_M249_P_t";
				count = 30;
			};
			class _xx_ptv_200Rnd_556x45_M249_P_t_Tracer_Red
			{
				magazine = "ptv_200Rnd_556x45_M249_P_t_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_100Rnd_556x45_M249_P
			{
				magazine = "ptv_100Rnd_556x45_M249_P";
				count = 30;
			};
			class _xx_ptv_100Rnd_556x45_M249_P_Tracer_Red
			{
				magazine = "ptv_100Rnd_556x45_M249_P_Tracer_Red";
				count = 30;
			};
			class _xx_ptv_100Rnd_556x45_M249_P_t
			{
				magazine = "ptv_100Rnd_556x45_M249_P_t";
				count = 30;
			};
			class _xx_ptv_100Rnd_556x45_M249_P_t_Tracer_Red
			{
				magazine = "ptv_100Rnd_556x45_M249_P_t_Tracer_Red";
				count = 30;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 30;
			};
			class _xx_ptv_100Rnd_762x51_B_MG3
			{
				magazine = "ptv_100Rnd_762x51_B_MG3";
				count = 30;
			};
			class _xx_ptv_100Rnd_762x51_T_MG3
			{
				magazine = "ptv_100Rnd_762x51_T_MG3";
				count = 30;
			};
			class _xx_ptv_10Rnd_127x99_m82
			{
				magazine = "ptv_10Rnd_127x99_m82";
				count = 30;
			};
			class _xx_ptv_10Rnd_127x99_m82_T_Red
			{
				magazine = "ptv_10Rnd_127x99_m82_T_Red";
				count = 30;
			};
			class _xx_ptv_10Rnd_127x99_m82_Raufoss
			{
				magazine = "ptv_10Rnd_127x99_m82_Raufoss";
				count = 30;
			};
			class _xx_ptv_10Rnd_127x99_m82_Raufoss_T_Red
			{
				magazine = "ptv_10Rnd_127x99_m82_Raufoss_T_Red";
				count = 30;
			};
			class _xx_ptv_5Rnd_86x70_TRG42
			{
				magazine = "ptv_5Rnd_86x70_TRG42";
				count = 30;
			};
			class _xx_ptv_8Rnd_B_Beneli_74Slug
			{
				magazine = "ptv_8Rnd_B_Beneli_74Slug";
				count = 30;
			};
			class _xx_ptv_8Rnd_B_Beneli_74Pellets
			{
				magazine = "ptv_8Rnd_B_Beneli_74Pellets";
				count = 30;
			};
			class _xx_ptv_30Rnd_9x19_CBJ_Mag
			{
				magazine = "ptv_30Rnd_9x19_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_30Rnd_9x19_Red_CBJ_Mag
			{
				magazine = "ptv_30Rnd_9x19_Red_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_100Rnd_9x19_CBJ_Mag
			{
				magazine = "ptv_100Rnd_9x19_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_100Rnd_9x19_Red_CBJ_Mag
			{
				magazine = "ptv_100Rnd_9x19_Red_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_30Rnd_65x25_CBJ_Mag
			{
				magazine = "ptv_30Rnd_65x25_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_30Rnd_65x25_Red_CBJ_Mag
			{
				magazine = "ptv_30Rnd_65x25_Red_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_100Rnd_65x25_CBJ_Mag
			{
				magazine = "ptv_100Rnd_65x25_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_100Rnd_65x25_Red_CBJ_Mag
			{
				magazine = "ptv_100Rnd_65x25_Red_CBJ_Mag";
				count = 30;
			};
			class _xx_ptv_12Rnd_45ACP_USP
			{
				magazine = "ptv_12Rnd_45ACP_USP";
				count = 30;
			};
			class _xx_ptv_15Rnd_9mm_G19
			{
				magazine = "ptv_15Rnd_9mm_G19";
				count = 30;
			};
			class _xx_ptv_17Rnd_9mm_G17
			{
				magazine = "ptv_17Rnd_9mm_G17";
				count = 30;
			};
			class _xx_ptv_33Rnd_9mm_G17
			{
				magazine = "ptv_33Rnd_9mm_G17";
				count = 30;
			};
			class _xx_ptv_1Rnd_HE_Grenade_shell
			{
				magazine = "ptv_1Rnd_HE_Grenade_shell";
				count = 30;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 2;
			};
			class _xx_ptv_mag_frag01
			{
				magazine = "ptv_mag_frag01";
				count = 12;
			};
			class _xx_ptv_mag_frag02
			{
				magazine = "ptv_mag_frag02";
				count = 12;
			};
			class _xx_ptv_mag_frag03
			{
				magazine = "ptv_mag_frag03";
				count = 12;
			};
			class _xx_ptv_mag_smoke01
			{
				magazine = "ptv_mag_smoke01";
				count = 2;
			};
			class _xx_ptv_mag_smoke02
			{
				magazine = "ptv_mag_smoke02";
				count = 2;
			};
			class _xx_ptv_mag_flash01
			{
				magazine = "ptv_mag_flash01";
				count = 2;
			};
			class _xx_ptv_mag_smoke01_Blue
			{
				magazine = "ptv_mag_smoke01_Blue";
				count = 2;
			};
			class _xx_ptv_mag_smoke01_Green
			{
				magazine = "ptv_mag_smoke01_Green";
				count = 2;
			};
			class _xx_ptv_mag_smoke01_Orange
			{
				magazine = "ptv_mag_smoke01_Orange";
				count = 2;
			};
			class _xx_ptv_mag_smoke01_Purple
			{
				magazine = "ptv_mag_smoke01_Purple";
				count = 2;
			};
			class _xx_ptv_mag_smoke01_Red
			{
				magazine = "ptv_mag_smoke01_Red";
				count = 2;
			};
			class _xx_ptv_mag_smoke01_Yellow
			{
				magazine = "ptv_mag_smoke01_Yellow";
				count = 2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 2;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_ptv_aimcs
			{
				name = "ptv_aimcs";
				count = 5;
			};
			class _xx_ptv_aimcs2
			{
				name = "ptv_aimcs2";
				count = 5;
			};
			class _xx_ptv_compm4s
			{
				name = "ptv_compm4s";
				count = 5;
			};
			class _xx_ptv_t1
			{
				name = "ptv_t1";
				count = 5;
			};
			class _xx_ptv_t1s
			{
				name = "ptv_t1s";
				count = 5;
			};
			class _xx_ptv_rmr
			{
				name = "ptv_rmr";
				count = 5;
			};
			class _xx_ptv_rmr_des
			{
				name = "ptv_rmr_des";
				count = 5;
			};
			class _xx_ptv_rmr_wdl
			{
				name = "ptv_rmr_wdl";
				count = 5;
			};
			class _xx_ptv_aim3xmag
			{
				name = "ptv_aim3xmag";
				count = 5;
			};
			class _xx_ptv_ta11
			{
				name = "ptv_ta11";
				count = 5;
			};
			class _xx_ptv_ta11rmr
			{
				name = "ptv_ta11rmr";
				count = 5;
			};
			class _xx_ptv_zo
			{
				name = "ptv_zo";
				count = 5;
			};
			class _xx_ptv_zo_rmr
			{
				name = "ptv_zo_rmr";
				count = 5;
			};
			class _xx_ptv_zos
			{
				name = "ptv_zos";
				count = 5;
			};
			class _xx_ptv_zos_rmr
			{
				name = "ptv_zos_rmr";
				count = 5;
			};
			class _xx_ptv_specterdr
			{
				name = "ptv_specterdr";
				count = 5;
			};
			class _xx_ptv_specterdr_des
			{
				name = "ptv_specterdr_des";
				count = 5;
			};
			class _xx_ptv_specterdr_rmr
			{
				name = "ptv_specterdr_rmr";
				count = 5;
			};
			class _xx_ptv_specterdr_rmrr_des
			{
				name = "ptv_specterdr_rmr_des";
				count = 5;
			};
			class _xx_ptv_m145
			{
				name = "ptv_m145";
				count = 5;
			};
			class _xx_ptv_shortdot
			{
				name = "ptv_shortdot";
				count = 5;
			};
			class _xx_ptv_shortdot_des
			{
				name = "ptv_shortdot_des";
				count = 5;
			};
			class _xx_ptv_shortdot_wdl
			{
				name = "ptv_shortdot_wdl";
				count = 5;
			};
			class _xx_ptv_shortdot_dcc
			{
				name = "ptv_shortdot_dcc";
				count = 5;
			};
			class _xx_ptv_shortdot_dcc_des
			{
				name = "ptv_shortdot_dcc_des";
				count = 5;
			};
			class _xx_ptv_shortdot_dcc_wdl
			{
				name = "ptv_shortdot_dcc_wdl";
				count = 5;
			};
			class _xx_ptv_PMII
			{
				name = "ptv_PMII";
				count = 5;
			};
			class _xx_ptv_PMII_sunshade
			{
				name = "ptv_PMII_sunshade";
				count = 5;
			};
			class _xx_ptv_PMII_wdl
			{
				name = "ptv_PMII_wdl";
				count = 5;
			};
			class _xx_ptv_PMII_wdl_sunshade
			{
				name = "ptv_PMII_wdl_sunshade";
				count = 5;
			};
			class _xx_ptv_PMII_rmr
			{
				name = "ptv_PMII_rmr";
				count = 5;
			};
			class _xx_ptv_PMII_rmr_sunshade
			{
				name = "ptv_PMII_rmr_sunshade";
				count = 5;
			};
			class _xx_ptv_PMII_rmr_des
			{
				name = "ptv_PMII_rmr_des";
				count = 5;
			};
			class _xx_ptv_PMII_rmr_des_sunshade
			{
				name = "ptv_PMII_rmr_des_sunshade";
				count = 5;
			};
			class _xx_ptv_PMII_rmr_wdl
			{
				name = "ptv_PMII_rmr_wdl";
				count = 5;
			};
			class _xx_ptv_PMII_rmr_wdl_sunshade
			{
				name = "ptv_PMII_rmr_wdl_sunshade";
				count = 5;
			};
			class _xx_ptv_PMII_525
			{
				name = "ptv_ptv_PMII_525";
				count = 5;
			};
			class _xx_ptv_PMII_525_des
			{
				name = "ptv_PMII_525_des";
				count = 5;
			};
			class _xx_ptv_PMII_525_wdl
			{
				name = "ptv_PMII_525_wdl";
				count = 5;
			};
			class _xx_ptv_CWS
			{
				name = "ptv_CWS";
				count = 5;
			};
			class _xx_ptv_vipir2
			{
				name = "ptv_vipir2";
				count = 5;
			};
			class _xx_ptv_vipir2p
			{
				name = "ptv_vipir2p";
				count = 5;
			};
			class _xx_ptv_SFM952V
			{
				name = "ptv_SFM952V";
				count = 5;
			};
			class _xx_ptv_SFM952V_des
			{
				name = "ptv_SFM952V_des";
				count = 5;
			};
			class _xx_ptv_x300
			{
				name = "ptv_x300";
				count = 5;
			};
			class _xx_ptv_x300_des
			{
				name = "ptv_x300_des";
				count = 5;
			};
			class _xx_ptv_flash
			{
				name = "ptv_flash";
				count = 5;
			};
			class _xx_ptv_M6X
			{
				name = "ptv_M6X";
				count = 5;
			};
			class _xx_ptv_dbala2
			{
				name = "ptv_dbala2";
				count = 5;
			};
			class _xx_ptv_LLM
			{
				name = "ptv_LLM";
				count = 5;
			};
			class _xx_ptv_LLM_des
			{
				name = "ptv_LLM_des";
				count = 5;
			};
			class _xx_ptv_versapod
			{
				name = "ptv_versapod";
				count = 5;
			};
			class _xx_ptv_versapod_des
			{
				name = "ptv_versapod_des";
				count = 5;
			};
			class _xx_ptv_versapod_wdl
			{
				name = "ptv_versapod_wdl";
				count = 5;
			};
			class _xx_ptv_hbrs
			{
				name = "ptv_hbrs";
				count = 5;
			};
			class _xx_ptv_cbj_sd
			{
				name = "ptv_cbj_sd";
				count = 5;
			};
			class _xx_ptv_trant9
			{
				name = "ptv_trant9";
				count = 5;
			};
			class _xx_ptv_trant45
			{
				name = "ptv_trant45";
				count = 5;
			};
			class _xx_ptv_impuls
			{
				name = "ptv_impuls";
				count = 5;
			};
			class _xx_ptv_rotex
			{
				name = "ptv_rotex";
				count = 5;
			};
			class _xx_ptv_rotex2
			{
				name = "ptv_rotex2";
				count = 5;
			};
			class _xx_ptv_rotexs
			{
				name = "ptv_rotexs";
				count = 5;
			};
			class _xx_ptv_rotex308
			{
				name = "ptv_rotex308";
				count = 5;
			};
			class _xx_optic_Arco
			{
				name = "optic_Arco";
				count = 5;
			};
			class _xx_optic_MRCO
			{
				name = "optic_MRCO";
				count = 1;
			};
			class _xx_optic_LRPS
			{
				name = "optic_LRPS";
				count = 1;
			};
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 5;
			};
			class _xx_optic_aco
			{
				name = "optic_aco";
				count = 5;
			};
			class _xx_optic_ACO_grn
			{
				name = "optic_ACO_grn";
				count = 5;
			};
			class _xx_optic_hamr
			{
				name = "optic_hamr";
				count = 5;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 5;
			};
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 5;
			};
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class ptv_AG
			{
				weapon = "ptv_AG";
				count = 20;
			};
			class ptv_AG_k
			{
				weapon = "ptv_AG_k";
				count = 20;
			};
			class ptv_AG_c
			{
				weapon = "ptv_AG_c";
				count = 20;
			};
			class ptv_AG_b
			{
				weapon = "ptv_AG_b";
				count = 20;
			};
			class ptv_AG_k_b
			{
				weapon = "ptv_AG_k_b";
				count = 20;
			};
			class ptv_AG_c_b
			{
				weapon = "ptv_AG_c_b";
				count = 20;
			};
			class ptv_AGM
			{
				weapon = "ptv_AGM";
				count = 20;
			};
			class ptv_AGM_GL
			{
				weapon = "ptv_AGM_GL";
				count = 20;
			};
			class ptv_AG_c2
			{
				weapon = "ptv_AG_c2";
				count = 20;
			};
			class ptv_AGM_b
			{
				weapon = "ptv_AGM_b";
				count = 20;
			};
			class ptv_AGM_GL_b
			{
				weapon = "ptv_AGM_GL_b";
				count = 20;
			};
			class ptv_AG_c2_b
			{
				weapon = "ptv_AG_c2_b";
				count = 20;
			};
			class ptv_AG_r
			{
				weapon = "ptv_AG_r";
				count = 20;
			};
			class ptv_AG_k_r
			{
				weapon = "ptv_AG_k_r";
				count = 20;
			};
			class ptv_AG_GL_k_r
			{
				weapon = "ptv_AG_GL_k_r";
				count = 20;
			};
			class ptv_AG_c_r
			{
				weapon = "ptv_AG_c_r";
				count = 20;
			};
			class ptv_AG_r_b
			{
				weapon = "ptv_AG_r_b";
				count = 20;
			};
			class ptv_AG_k_r_b
			{
				weapon = "ptv_AG_k_r_b";
				count = 20;
			};
			class ptv_AG_GL_k_r_b
			{
				weapon = "ptv_AG_GL_k_r_b";
				count = 20;
			};
			class ptv_AG_c_r_b
			{
				weapon = "ptv_AG_c_r_b";
				count = 20;
			};
			class ptv_m249
			{
				weapon = "ptv_m249";
				count = 20;
			};
			class ptv_m249_b
			{
				weapon = "ptv_m249_b";
				count = 20;
			};
			class ptv_m249_t
			{
				weapon = "ptv_m249_t";
				count = 20;
			};
			class ptv_m249p
			{
				weapon = "ptv_m249p";
				count = 20;
			};
			class ptv_m249p_b
			{
				weapon = "ptv_m249p_b";
				count = 20;
			};
			class ptv_m249p_t
			{
				weapon = "ptv_m249p_t";
				count = 20;
			};
			class ptv_negev
			{
				weapon = "ptv_negev";
				count = 20;
			};
			class ptv_negev_b
			{
				weapon = "ptv_negev_b";
				count = 20;
			};
			class ptv_ng5
			{
				weapon = "ptv_ng5";
				count = 20;
			};
			class ptv_ng5_b
			{
				weapon = "ptv_ng5_b";
				count = 20;
			};
			class ptv_ng5_sf
			{
				weapon = "ptv_ng5_sf";
				count = 20;
			};
			class ptv_ng5_sf_b
			{
				weapon = "ptv_ng5_sf_b";
				count = 20;
			};
			class ptv_ng5_sf_des
			{
				weapon = "ptv_ng5_sf_des";
				count = 20;
			};
			class ptv_MG3
			{
				weapon = "ptv_MG3";
				count = 20;
			};
			class ptv_MG3r
			{
				weapon = "ptv_MG3r";
				count = 20;
			};
			class ptv_MG3KWS
			{
				weapon = "ptv_MG3KWS";
				count = 20;
			};
			class ptv_MG3KWS_b
			{
				weapon = "ptv_MG3KWS_b";
				count = 20;
			};
			class ptv_MG3KWS_t
			{
				weapon = "ptv_MG3KWS_t";
				count = 20;
			};
			class ptv_m14
			{
				weapon = "ptv_m14";
				count = 20;
			};
			class ptv_m14tp
			{
				weapon = "ptv_m14tp";
				count = 20;
			};
			class ptv_m14tp2
			{
				weapon = "ptv_m14tp2";
				count = 20;
			};
			class ptv_m14_socom
			{
				weapon = "ptv_m14_socom";
				count = 20;
			};
			class ptv_m14tp_des
			{
				weapon = "ptv_m14tp_des";
				count = 20;
			};
			class ptv_m14tp_wdl
			{
				weapon = "ptv_m14tp_wdl";
				count = 20;
			};
			class ptv_m14tp2_des
			{
				weapon = "ptv_m14tp2_des";
				count = 20;
			};
			class ptv_m14tp2_wdl
			{
				weapon = "ptv_m14tp2_wdl";
				count = 20;
			};
			class ptv_m14_socom_wdl
			{
				weapon = "ptv_m14_socom_wdl";
				count = 20;
			};
			class ptv_bm4
			{
				weapon = "ptv_bm4";
				count = 20;
			};
			class ptv_bm4e
			{
				weapon = "ptv_bm4e";
				count = 20;
			};
			class ptv_TRG42
			{
				weapon = "ptv_TRG42";
				count = 20;
			};
			class ptv_TRG42f
			{
				weapon = "ptv_TRG42f";
				count = 20;
			};
			class ptv_M82a1
			{
				weapon = "ptv_M82a1";
				count = 20;
			};
			class ptv_M82a1_des
			{
				weapon = "ptv_M82a1_des";
				count = 20;
			};
			class ptv_M82a1_wdl
			{
				weapon = "ptv_M82a1_wdl";
				count = 20;
			};
			class ptv_cbj_ms
			{
				weapon = "ptv_cbj_ms";
				count = 20;
			};
			class ptv_cbj_ms2
			{
				weapon = "ptv_cbj_ms2";
				count = 20;
			};
			class ptv_cbj_ms_b
			{
				weapon = "ptv_cbj_ms_b";
				count = 20;
			};
			class ptv_cbj_ms2_b
			{
				weapon = "ptv_cbj_ms2_b";
				count = 20;
			};
			class ptv_hk69
			{
				weapon = "ptv_hk69";
				count = 20;
			};
			class ptv_usp45t
			{
				weapon = "ptv_usp45t";
				count = 20;
			};
			class ptv_p80
			{
				weapon = "ptv_p80";
				count = 20;
			};
			class ptv_p80t
			{
				weapon = "ptv_p80t";
				count = 20;
			};
			class ptv_g19
			{
				weapon = "ptv_g19";
				count = 20;
			};
		};
	};
};
class CfgCloudlets
{
	class Default;
	class ptv_RifleAmmoCloud: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.45;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {0.25,0.5};
		color[] = {{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.15},{0.1,0.1,0.1,0.06},{0.1,0.1,0.1,0.01}};
		animationSpeed[] = {1.2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.08;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.2;
		colorCoef[] = {1,1,1,0.6};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.03,0.03,0.03};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ptv_RifleSmokeTrail: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 3;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.1,0.15};
		color[] = {{0.06,0.06,0.06,0.32},{0.3,0.3,0.3,0.28},{0.3,0.3,0.3,0.25},{0.3,0.3,0.3,0.22},{0.3,0.3,0.3,0.1}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0.05;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ptv_PistolAmmoCloud1: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.45;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {0.25,0.5};
		color[] = {{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.15},{0.1,0.1,0.1,0.06},{0.1,0.1,0.1,0.01}};
		animationSpeed[] = {1.2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.08;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.2;
		colorCoef[] = {1,1,1,0.6};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.03,0.03,0.03};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ptv_SmokeTrail1: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 3;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.1,0.15};
		color[] = {{0.06,0.06,0.06,0.32},{0.3,0.3,0.3,0.28},{0.3,0.3,0.3,0.25},{0.3,0.3,0.3,0.22},{0.3,0.3,0.3,0.1}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0.05;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class ptv_PistolAmmoCloud
{
	class ptv_PistolAmmoCloud
	{
		simulation = "particles";
		type = "ptv_PistolAmmoCloud1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ptv_SmokeTrail
{
	class ptv_SmokeTrail
	{
		simulation = "particles";
		type = "ptv_SmokeTrail1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ptv_RifleAmmoCloud
{
	class ptv_RifleAmmoCloud
	{
		simulation = "particles";
		type = "ptv_RifleAmmoCloud";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ptv_RifleSmokeTrail
{
	class ptv_RifleSmokeTrail
	{
		simulation = "particles";
		type = "ptv_RifleSmokeTrail";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
