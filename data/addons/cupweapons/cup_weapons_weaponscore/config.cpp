class CfgPatches
{
	class CUP_Weapons_WeaponsCore
	{
		units[]={};
		weapons[]=
		{
			"CUP_muzzleFlash_suppressed",
			"CUP_muzzleFlash_suppressed2",
			"CUP_muzzleFlash_muzzleBreak"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder",
			"A3_Data_F_Mod_Loadorder",
			"CBA_main",
			"CUP_BaseConfigs"
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class CUP_Weapons: Mod_Base
	{
		picture="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_ca.paa";
		logo="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_small_ca.paa";
		logoOver="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_small_ca.paa";
		logoSmall="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_small_ca.paa";
		tooltipOwned="Community Uprade Project";
		action="http://cup-arma3.org";
		dlcColor[]={0.31,0.77999997,0.77999997,1};
		overview="The Community Upgrade Project aims at importing all released assets from previous Arma games into Arma 3, upgraded to fit closely with the quality and standards of the Arma 3 assets. They're not a straight port, but individual items taken and upgraded to a new level. At the same time, CUP provides these assets as a resource for modders.";
		hideName=1;
		hidePicture=0;
		name="Community Upgrade Project";
		dir="Cup";
	};
};
class CfgFunctions
{
	class CUP
	{
		class WeaponsCore
		{
			tag="CUP_WeaponsCore";
			class checkCfgPatches
			{
				file="\CUP\Weapons\CUP_Weapons_WeaponsCore\functions\fnc_checkCfgPatches.sqf";
				headerType=-1;
				recompile=0;
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class CUP_Weapons_WeaponsCore
	{
		init="call compile preprocessFileLineNumbers '\CUP\Weapons\CUP_Weapons_WeaponsCore\XEH_preInit.sqf'";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_GestureReloadM249="CUP_GestureReloadM249";
		CUP_GestureReloadM249STANAG="CUP_GestureReloadM249STANAG";
		CUP_GestureReloadM60="CUP_GestureReloadM60";
		CUP_GestureReloadM14="CUP_GestureReloadM14";
		CUP_GestureReloadG36A1="CUP_GestureReloadG36A1";
		CUP_GestureReloadAG36="CUP_GestureReloadAG36";
		CUP_GestureReloadSA80="CUP_GestureReloadSA80";
		CUP_GestureReloadFAL="CUP_GestureReloadFAL";
		CUP_GestureReloadVSS="CUP_GestureReloadVSS";
		CUP_GestureReloadAK="CUP_GestureReloadAK";
		CUP_GestureBoltActionFire="CUP_BoltCycle";
		CUP_GestureReloadSA61="CUP_GestureReloadSA61";
		CUP_GestureReloadSA61SMG="CUP_GestureReloadSA61SMG";
		CUP_GestureReloadPDW="CUP_GestureReloadPDW";
		CUP_smaw_spottingReload="CUP_smaw_spottingReload";
		CUP_GestureReloadG3="CUP_GestureReloadG3";
		CUP_GestureReloadAUG="CUP_GestureReloadAUG";
		CUP_GestureReloadM4="CUP_GestureReloadM4";
		CUP_GestureReloadM1014_8Rnd="CUP_GestureReloadM1014_8Rnd";
		CUP_GestureReloadM1014_6Rnd="CUP_GestureReloadM1014_6Rnd";
		CUP_GestureReloadM1014_2Rnd="CUP_GestureReloadM1014_2Rnd";
		CUP_GestureReloadM1014_1Rnd="CUP_GestureReloadM1014_1Rnd";
		CUP_GestureReloadAWM="CUP_GestureReloadAWM";
		CUP_GestureRechamberAWM="CUP_GestureRechamberAWM";
		CUP_GestureReloadBolt1="CUP_GestureReloadBolt1";
		CUP_GestureRechamberKSVK="CUP_GestureRechamberKSVK";
		CUP_GestureReloadDSAOSW="CUP_GestureReloadDSAOSW";
		CUP_GestureRechamberMosin="CUP_GestureRechamberMosin";
		CUP_GestureReloadMosin="CUP_GestureReloadMosin";
		CUP_GestureReloadSKS="CUP_GestureReloadSKS";
		CUP_GestureReloadSlamfire="CUP_GestureReloadSlamfire";
		CUP_GestureReloadDSAGL="CUP_GestureReloadDSAGL";
		CUP_GestureReloadACR="CUP_GestureReloadACR";
		CUP_GestureReloadMG3="CUP_GestureReloadMG3";
		CUP_GestureReloadXM8="CUP_GestureReloadXM8";
		CUP_GestureReloadXM320="CUP_GestureReloadXM320";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL",
				"Gesture"
			};
			CUP_GestureReloadVSS[]=
			{
				"CUP_GestureReloadVSS",
				"Gesture"
			};
			CUP_GestureReloadAK[]=
			{
				"CUP_GestureReloadAK",
				"Gesture"
			};
			CUP_GestureReloadSA61[]=
			{
				"CUP_GestureReloadSA61",
				"Gesture"
			};
			CUP_GestureReloadSA61SMG[]=
			{
				"CUP_GestureReloadSA61SMG",
				"Gesture"
			};
			CUP_GestureReloadPDW[]=
			{
				"CUP_GestureReloadPDW",
				"Gesture"
			};
			CUP_smaw_spottingReload[]=
			{
				"CUP_smaw_spottingReload",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle",
				"Gesture"
			};
			CUP_GestureReloadG3[]=
			{
				"CUP_GestureReloadG3",
				"Gesture"
			};
			CUP_GestureReloadAUG[]=
			{
				"CUP_GestureReloadAUG",
				"Gesture"
			};
			CUP_GestureReloadM4[]=
			{
				"CUP_GestureReloadM4",
				"Gesture"
			};
			CUP_GestureReloadM1014_8Rnd[]=
			{
				"CUP_GestureReloadM1014_8Rnd",
				"Gesture"
			};
			CUP_GestureReloadM1014_6Rnd[]=
			{
				"CUP_GestureReloadM1014_6Rnd",
				"Gesture"
			};
			CUP_GestureReloadM1014_2Rnd[]=
			{
				"CUP_GestureReloadM1014_2Rnd",
				"Gesture"
			};
			CUP_GestureReloadM1014_1Rnd[]=
			{
				"CUP_GestureReloadM1014_1Rnd",
				"Gesture"
			};
			CUP_GestureReloadAWM[]=
			{
				"CUP_GestureReloadAWM",
				"Gesture"
			};
			CUP_GestureRechamberAWM[]=
			{
				"CUP_GestureRechamberAWM",
				"Gesture"
			};
			CUP_GestureReloadBolt1[]=
			{
				"CUP_GestureReloadBolt1",
				"Gesture"
			};
			CUP_GestureRechamberKSVK[]=
			{
				"CUP_GestureRechamberKSVK",
				"Gesture"
			};
			CUP_GestureReloadDSAOSW[]=
			{
				"CUP_GestureReloadDSAOSW",
				"Gesture"
			};
			CUP_GestureRechamberMosin[]=
			{
				"CUP_GestureRechamberMosin",
				"Gesture"
			};
			CUP_GestureReloadMosin[]=
			{
				"CUP_GestureReloadMosin",
				"Gesture"
			};
			CUP_GestureReloadSKS[]=
			{
				"CUP_GestureReloadSKS",
				"Gesture"
			};
			CUP_GestureReloadSlamfire[]=
			{
				"CUP_GestureReloadSlamfire",
				"Gesture"
			};
			CUP_GestureReloadDSAGL[]=
			{
				"CUP_GestureReloadDSAGL",
				"Gesture"
			};
			CUP_GestureReloadACR[]=
			{
				"CUP_GestureReloadACR",
				"Gesture"
			};
			CUP_GestureReloadMG3[]=
			{
				"CUP_GestureReloadMG3",
				"Gesture"
			};
			CUP_GestureReloadXM8[]=
			{
				"CUP_GestureReloadXM8",
				"Gesture"
			};
			CUP_GestureReloadXM320[]=
			{
				"CUP_GestureReloadXM320",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249_Prone",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG_Prone",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60_Prone",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14_prone",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1_Prone",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36_Prone",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80_prone",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL_prone",
				"Gesture"
			};
			CUP_GestureReloadVSS[]=
			{
				"CUP_GestureReloadVSS_prone",
				"Gesture"
			};
			CUP_GestureReloadAK[]=
			{
				"CUP_GestureReloadAK_prone",
				"Gesture"
			};
			CUP_GestureReloadSA61[]=
			{
				"CUP_GestureReloadSA61_prone",
				"Gesture"
			};
			CUP_GestureReloadSA61SMG[]=
			{
				"CUP_GestureReloadSA61SMG_prone",
				"Gesture"
			};
			CUP_GestureReloadPDW[]=
			{
				"CUP_GestureReloadPDW_prone",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle_prone",
				"Gesture"
			};
			CUP_GestureReloadG3[]=
			{
				"CUP_GestureReloadG3_prone",
				"Gesture"
			};
			CUP_GestureReloadAUG[]=
			{
				"CUP_GestureReloadAUG_prone",
				"Gesture"
			};
			CUP_GestureReloadM4[]=
			{
				"CUP_GestureReloadM4_prone",
				"Gesture"
			};
			CUP_GestureReloadM1014_8Rnd[]=
			{
				"CUP_GestureReloadM1014_8Rnd_prone",
				"Gesture"
			};
			CUP_GestureReloadM1014_6Rnd[]=
			{
				"CUP_GestureReloadM1014_6Rnd_prone",
				"Gesture"
			};
			CUP_GestureReloadM1014_2Rnd[]=
			{
				"CUP_GestureReloadM1014_2Rnd_prone",
				"Gesture"
			};
			CUP_GestureReloadM1014_1Rnd[]=
			{
				"CUP_GestureReloadM1014_1Rnd_prone",
				"Gesture"
			};
			CUP_GestureReloadAWM[]=
			{
				"CUP_GestureReloadAWM_prone",
				"Gesture"
			};
			CUP_GestureRechamberAWM[]=
			{
				"CUP_GestureRechamberAWM_prone",
				"Gesture"
			};
			CUP_GestureReloadBolt1[]=
			{
				"CUP_GestureReloadBolt1_prone",
				"Gesture"
			};
			CUP_GestureRechamberKSVK[]=
			{
				"CUP_GestureRechamberKSVK_prone",
				"Gesture"
			};
			CUP_GestureReloadDSAOSW[]=
			{
				"CUP_GestureReloadDSAOSW_prone",
				"Gesture"
			};
			CUP_GestureRechamberMosin[]=
			{
				"CUP_GestureRechamberMosin_prone",
				"Gesture"
			};
			CUP_GestureReloadMosin[]=
			{
				"CUP_GestureReloadMosin_prone",
				"Gesture"
			};
			CUP_GestureReloadSKS[]=
			{
				"CUP_GestureReloadSKS_Prone",
				"Gesture"
			};
			CUP_GestureReloadSlamfire[]=
			{
				"CUP_GestureReloadSlamfire_Prone",
				"Gesture"
			};
			CUP_GestureReloadDSAGL[]=
			{
				"CUP_GestureReloadDSAGL_prone",
				"Gesture"
			};
			CUP_GestureReloadACR[]=
			{
				"CUP_GestureReloadACR_Prone",
				"Gesture"
			};
			CUP_GestureReloadMG3[]=
			{
				"CUP_GestureReloadMG3_Prone",
				"Gesture"
			};
			CUP_GestureReloadXM8[]=
			{
				"CUP_GestureReloadXM8_Prone",
				"Gesture"
			};
			CUP_GestureReloadXM320[]=
			{
				"CUP_GestureReloadXM320_Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249_Context",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG_Context",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60_Context",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14_Context",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1_Context",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36_Context",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80_Context",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL_Context",
				"Gesture"
			};
			CUP_GestureReloadVSS[]=
			{
				"CUP_GestureReloadVSS_Context",
				"Gesture"
			};
			CUP_GestureReloadAK[]=
			{
				"CUP_GestureReloadAK_Context",
				"Gesture"
			};
			CUP_GestureReloadSA61[]=
			{
				"CUP_GestureReloadSA61_Context",
				"Gesture"
			};
			CUP_GestureReloadSA61SMG[]=
			{
				"CUP_GestureReloadSA61SMG_Context",
				"Gesture"
			};
			CUP_GestureReloadPDW[]=
			{
				"CUP_GestureReloadPDW_Context",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle_Context",
				"Gesture"
			};
			CUP_GestureReloadG3[]=
			{
				"CUP_GestureReloadG3_Context",
				"Gesture"
			};
			CUP_GestureReloadAUG[]=
			{
				"CUP_GestureReloadAUG_Context",
				"Gesture"
			};
			CUP_GestureReloadM4[]=
			{
				"CUP_GestureReloadM4_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_8Rnd[]=
			{
				"CUP_GestureReloadM1014_8Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_6Rnd[]=
			{
				"CUP_GestureReloadM1014_6Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_2Rnd[]=
			{
				"CUP_GestureReloadM1014_2Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_1Rnd[]=
			{
				"CUP_GestureReloadM1014_1Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadAWM[]=
			{
				"CUP_GestureReloadAWM_Context",
				"Gesture"
			};
			CUP_GestureRechamberAWM[]=
			{
				"CUP_GestureRechamberAWM_Context",
				"Gesture"
			};
			CUP_GestureReloadBolt1[]=
			{
				"CUP_GestureReloadBolt1_Context",
				"Gesture"
			};
			CUP_GestureRechamberKSVK[]=
			{
				"CUP_GestureRechamberKSVK_Context",
				"Gesture"
			};
			CUP_GestureReloadDSAOSW[]=
			{
				"CUP_GestureReloadDSAOSW_Context",
				"Gesture"
			};
			CUP_GestureRechamberMosin[]=
			{
				"CUP_GestureRechamberMosin_Context",
				"Gesture"
			};
			CUP_GestureReloadMosin[]=
			{
				"CUP_GestureReloadMosin_Context",
				"Gesture"
			};
			CUP_GestureReloadSlamfire[]=
			{
				"CUP_GestureReloadSlamfire_Context",
				"Gesture"
			};
			CUP_GestureReloadDSAGL[]=
			{
				"CUP_GestureReloadDSAGL_Context",
				"Gesture"
			};
			CUP_GestureReloadACR[]=
			{
				"CUP_GestureReloadACR_Context",
				"Gesture"
			};
			CUP_GestureReloadMG3[]=
			{
				"CUP_GestureReloadMG3_Context",
				"Gesture"
			};
			CUP_GestureReloadXM8[]=
			{
				"CUP_GestureReloadXM8_Context",
				"Gesture"
			};
			CUP_GestureReloadXM320[]=
			{
				"CUP_GestureReloadXM320_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249_Context",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG_Context",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60_Context",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14_Context",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1_Context",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36_Context",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80_Context",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL_Context",
				"Gesture"
			};
			CUP_GestureReloadVSS[]=
			{
				"CUP_GestureReloadVSS_Context",
				"Gesture"
			};
			CUP_GestureReloadAK[]=
			{
				"CUP_GestureReloadAK_Context",
				"Gesture"
			};
			CUP_GestureReloadSA61[]=
			{
				"CUP_GestureReloadSA61_Context",
				"Gesture"
			};
			CUP_GestureReloadSA61SMG[]=
			{
				"CUP_GestureReloadSA61SMG_Context",
				"Gesture"
			};
			CUP_GestureReloadPDW[]=
			{
				"CUP_GestureReloadPDW_Context",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle_Context",
				"Gesture"
			};
			CUP_GestureReloadG3[]=
			{
				"CUP_GestureReloadG3_Context",
				"Gesture"
			};
			CUP_GestureReloadAUG[]=
			{
				"CUP_GestureReloadAUG_Context",
				"Gesture"
			};
			CUP_GestureReloadM4[]=
			{
				"CUP_GestureReloadM4_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_8Rnd[]=
			{
				"CUP_GestureReloadM1014_8Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_6Rnd[]=
			{
				"CUP_GestureReloadM1014_6Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_2Rnd[]=
			{
				"CUP_GestureReloadM1014_2Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadM1014_1Rnd[]=
			{
				"CUP_GestureReloadM1014_1Rnd_Context",
				"Gesture"
			};
			CUP_GestureReloadAWM[]=
			{
				"CUP_GestureReloadAWM_Context",
				"Gesture"
			};
			CUP_GestureRechamberAWM[]=
			{
				"CUP_GestureRechamberAWM_Context",
				"Gesture"
			};
			CUP_GestureReloadBolt1[]=
			{
				"CUP_GestureReloadBolt1_Context",
				"Gesture"
			};
			CUP_GestureRechamberKSVK[]=
			{
				"CUP_GestureRechamberKSVK_Context",
				"Gesture"
			};
			CUP_GestureReloadDSAOSW[]=
			{
				"CUP_GestureReloadDSAOSW_Context",
				"Gesture"
			};
			CUP_GestureRechamberMosin[]=
			{
				"CUP_GestureRechamberMosin_Context",
				"Gesture"
			};
			CUP_GestureReloadMosin[]=
			{
				"CUP_GestureReloadMosin_Context",
				"Gesture"
			};
			CUP_GestureReloadSKS[]=
			{
				"CUP_GestureReloadSKS_Context",
				"Gesture"
			};
			CUP_GestureReloadSlamfire[]=
			{
				"CUP_GestureReloadSlamfire_Context",
				"Gesture"
			};
			CUP_GestureReloadDSAGL[]=
			{
				"CUP_GestureReloadDSAGL_Context",
				"Gesture"
			};
			CUP_GestureReloadACR[]=
			{
				"CUP_GestureReloadACR_Context",
				"Gesture"
			};
			CUP_GestureReloadMG3[]=
			{
				"CUP_GestureReloadMG3_Context",
				"Gesture"
			};
			CUP_GestureReloadXM8[]=
			{
				"CUP_GestureReloadXM8_Context",
				"Gesture"
			};
			CUP_GestureReloadXM320[]=
			{
				"CUP_GestureReloadXM320_Context",
				"Gesture"
			};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				CUP_GestureReloadM249[]=
				{
					"CUP_GestureReloadM249_Context",
					"Gesture"
				};
				CUP_GestureReloadM249STANAG[]=
				{
					"CUP_GestureReloadM249STANAG_Context",
					"Gesture"
				};
				CUP_GestureReloadM60[]=
				{
					"CUP_GestureReloadM60",
					"Gesture"
				};
				CUP_GestureReloadM14[]=
				{
					"CUP_GestureReloadM14_Prone",
					"Gesture"
				};
				CUP_GestureReloadG36A1[]=
				{
					"CUP_GestureReloadG36A1_Context",
					"Gesture"
				};
				CUP_GestureReloadAG36[]=
				{
					"CUP_GestureReloadAG36_Context",
					"Gesture"
				};
				CUP_GestureReloadSA80[]=
				{
					"CUP_GestureReloadSA80",
					"Gesture"
				};
				CUP_GestureReloadFAL[]=
				{
					"CUP_GestureReloadFAL_Context",
					"Gesture"
				};
				CUP_GestureReloadVSS[]=
				{
					"CUP_GestureReloadVSS_Context",
					"Gesture"
				};
				CUP_GestureReloadAK[]=
				{
					"CUP_GestureReloadAK_Context",
					"Gesture"
				};
				CUP_GestureReloadSA61[]=
				{
					"CUP_GestureReloadSA61_Context",
					"Gesture"
				};
				CUP_GestureReloadSA61SMG[]=
				{
					"CUP_GestureReloadSA61SMG_Context",
					"Gesture"
				};
				CUP_GestureReloadPDW[]=
				{
					"CUP_GestureReloadPDW_Context",
					"Gesture"
				};
				CUP_GestureBoltActionFire[]=
				{
					"CUP_BoltCycle_Context",
					"Gesture"
				};
				CUP_GestureReloadG3[]=
				{
					"CUP_GestureReloadG3_Context",
					"Gesture"
				};
				CUP_GestureReloadAUG[]=
				{
					"CUP_GestureReloadAUG_Context",
					"Gesture"
				};
				CUP_GestureReloadM4[]=
				{
					"CUP_GestureReloadM4_Context",
					"Gesture"
				};
				CUP_GestureReloadM1014_8Rnd[]=
				{
					"CUP_GestureReloadM1014_8Rnd_Context",
					"Gesture"
				};
				CUP_GestureReloadM1014_6Rnd[]=
				{
					"CUP_GestureReloadM1014_6Rnd_Context",
					"Gesture"
				};
				CUP_GestureReloadM1014_2Rnd[]=
				{
					"CUP_GestureReloadM1014_2Rnd_Context",
					"Gesture"
				};
				CUP_GestureReloadM1014_1Rnd[]=
				{
					"CUP_GestureReloadM1014_1Rnd_Context",
					"Gesture"
				};
				CUP_GestureReloadAWM[]=
				{
					"CUP_GestureReloadAWM_Context",
					"Gesture"
				};
				CUP_GestureRechamberAWM[]=
				{
					"CUP_GestureRechamberAWM_Context",
					"Gesture"
				};
				CUP_GestureReloadBolt1[]=
				{
					"CUP_GestureReloadBolt1_Context",
					"Gesture"
				};
				CUP_GestureRechamberKSVK[]=
				{
					"CUP_GestureRechamberKSVK_Context",
					"Gesture"
				};
				CUP_GestureReloadDSAOSW[]=
				{
					"CUP_GestureReloadDSAOSW_Context",
					"Gesture"
				};
				CUP_GestureRechamberMosin[]=
				{
					"CUP_GestureRechamberMosin_Context",
					"Gesture"
				};
				CUP_GestureReloadMosin[]=
				{
					"CUP_GestureReloadMosin_Context",
					"Gesture"
				};
				CUP_GestureReloadSKS[]=
				{
					"CUP_GestureReloadSKS_Context",
					"Gesture"
				};
				CUP_GestureReloadSlamfire[]=
				{
					"CUP_GestureReloadSlamfire_Context",
					"Gesture"
				};
				CUP_GestureReloadDSAGL[]=
				{
					"CUP_GestureReloadDSAGL_Context",
					"Gesture"
				};
				CUP_GestureReloadACR[]=
				{
					"CUP_GestureReloadACR_Context",
					"Gesture"
				};
				CUP_GestureReloadMG3[]=
				{
					"CUP_GestureReloadMG3_Context",
					"Gesture"
				};
				CUP_GestureReloadXM8[]=
				{
					"CUP_GestureReloadXM8_Context",
					"Gesture"
				};
				CUP_GestureReloadXM320[]=
				{
					"CUP_GestureReloadXM320_Context",
					"Gesture"
				};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class CUP_GestureReloadM14: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M14\gesture\reload_m14_standing.rtm";
			speed=0.23;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.58999997,1,0.61538398,0,0.75379997,0,0.84614998,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.58415997,0,0.61538398,1};
		};
		class CUP_GestureReloadM14_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M14\gesture\reload_m14_prone.rtm";
			speed=0.23;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.86666,0,0.89999998,1};
		};
		class CUP_GestureReloadM14_Context: CUP_GestureReloadM14
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM249: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_reload_stand.rtm";
			speed=0.098684214;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.016000001,0,0.28799999,0,0.30759999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.098679997,1,0.1118421,0,0.92105001,0,0.94736803,1};
		};
		class CUP_GestureReloadM249_Crouch: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_reload_crouch.rtm";
			speed=0.098684214;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.44999999;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.0098599996,0,0.92105001,0,0.94736803,1};
		};
		class CUP_GestureReloadM249_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_reload_prone.rtm";
			speed=0.098684214;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.016000001,0,0.28799999,0,0.30759999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.098679997,1,0.1118421,0,0.92105001,0,0.94736803,1};
		};
		class CUP_GestureReloadM249_Context: CUP_GestureReloadM249
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM249STANAG: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_STANAGreload_stand.rtm";
			speed=0.23999999;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.047619,0,0.84920633,0,0.87301499,1};
		};
		class CUP_GestureReloadM249STANAG_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_STANAGreload_prone.rtm";
			speed=0.23999999;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.047619,0,0.84920633,0,0.87301499,1};
		};
		class CUP_GestureReloadM249STANAF_Context: CUP_GestureReloadM249STANAG
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM60: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M60\gesture\reload_m60e4_standing.rtm";
			looped=0;
			speed=0.090909094;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0.30000001,1,0.34,0,0.94499999,0,0.98000002,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.045499999,0,0.30000001,0,0.33399999,1};
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadM60_Context: CUP_GestureReloadM60
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM60_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M60\gesture\reload_m60e4_prone.rtm";
			looped=0;
			speed=0.090909094;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0.30000001,1,0.34,0,0.94499999,0,0.98000002,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.045499999,0,0.30000001,0,0.33399999,1};
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadG36A1: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\G36A1\reload_G36_standing.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadG36A1_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\G36A1\reload_G36_prone.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadG36A1_Context: CUP_GestureReloadG36A1
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadAG36: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AG36\reload_aG36_standing.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadAG36_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AG36\reload_aG36_prone.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadAG36_Context: CUP_GestureReloadAG36
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadSA80: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\L85\L85_reload_standing.rtm";
			speed=0.2;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.89999998,0,0.94,1};
		};
		class CUP_GestureReloadSA80_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\L85\L85_reload_prone.rtm";
			speed=0.2;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.89999998,0,0.94,1};
		};
		class CUP_GestureReloadSA80_Context: CUP_GestureReloadSA80
		{
			mask="handsWeapon_context";
		};
		class CUP_BoltCycle: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\RechamberBolt1\RechamberBolt1_standing.rtm";
			looped=0;
			speed=-2;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.066670001,0,0.75,0,0.83333302,1};
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_BoltCycle_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\RechamberBolt1\RechamberBolt1_prone.rtm";
			looped=0;
			speed=-2;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.066670001,0,0.75,0,0.83333302,1};
			rightHandIKEnd=1;
		};
		class CUP_BoltCycle_Context: CUP_BoltCycle
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadFAL: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_fal_long.rtm";
			speed=0.18404908;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.03125,0,0.83099997,0,0.88700002,1};
		};
		class CUP_GestureReloadFAL_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_fal_long_prone.rtm";
			speed=0.18404908;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.03125,0,0.88999999,0,0.9375,1};
		};
		class CUP_GestureReloadFAL_Context: CUP_GestureReloadFAL
		{
			mask="handsWeapon_context";
		};
		class GestureReloadAKM;
		class CUP_GestureReloadAK: GestureReloadAKM
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AK\GestureReloadAK.rtm";
		};
		class CUP_GestureReloadAK_prone: GestureReloadAKM
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AK\GestureReloadAKProne.rtm";
		};
		class CUP_GestureReloadAK_Context: CUP_GestureReloadAK
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadVSS: GestureReloadAKM
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\VSS\GestureReloadVSS.rtm";
		};
		class CUP_GestureReloadVSS_prone: GestureReloadAKM
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\VSS\GestureReloadVSSProne.rtm";
		};
		class CUP_GestureReloadVSS_Context: CUP_GestureReloadVSS
		{
			mask="handsWeapon_context";
		};
		class GestureReloadSMG_02;
		class GestureReloadSMG_02Prone;
		class CUP_GestureReloadSA61: GestureReloadSMG_02
		{
			mask="handsWeapon_pst";
			leftHandIKCurve[]={0.046,1,0.11,0,0.76099998,0,0.778,1};
		};
		class CUP_GestureReloadSA61_prone: GestureReloadSMG_02Prone
		{
			mask="handsWeapon_pst";
			leftHandIKCurve[]={0.046,1,0.11,0,0.76099998,0,0.778,1};
		};
		class CUP_GestureReloadSA61_Context: CUP_GestureReloadSA61
		{
			mask="handsWeapon_pst_context";
		};
		class CUP_GestureReloadSA61SMG: GestureReloadSMG_02
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\SA61_SMG\GestureReloadSA61SMG.rtm";
			leftHandIKCurve[]={0.046,1,0.11,0,0.76099998,0,0.778,1};
		};
		class CUP_GestureReloadSA61SMG_prone: GestureReloadSMG_02Prone
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\SA61_SMG\GestureReloadSA61SMG_prone.rtm";
			leftHandIKCurve[]={0.046,1,0.11,0,0.76099998,0,0.778,1};
		};
		class CUP_GestureReloadSA61SMG_Context: CUP_GestureReloadSA61SMG
		{
			mask="handsWeapon_context";
		};
		class GestureReloadSMG_03;
		class CUP_GestureReloadPDW: GestureReloadSMG_03
		{
			mask="handsWeapon_pst";
		};
		class CUP_GestureReloadPDW_prone: CUP_GestureReloadPDW
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloadsmg_03prone.rtm";
			mask="handsWeapon_pst";
		};
		class CUP_GestureReloadPDW_Context: CUP_GestureReloadPDW
		{
			mask="handsWeapon_pst_context";
		};
		class CUP_smaw_spottingReload: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\SMAW\CUP_smaw_spottingReload.rtm";
			mask="launcher";
			speed=0.30000001;
			looped=0;
			headBobStrength=3;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadG3: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\G3\reload_g3_standing.rtm";
			speed=-5.77;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.033,0,0.93000001,0,0.97000003,1};
		};
		class CUP_GestureReloadG3_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\G3\reload_g3_prone.rtm";
			speed=-5.77;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.033,0,0.93000001,0,0.97000003,1};
		};
		class CUP_GestureReloadG3_Context: CUP_GestureReloadG3
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadAUG: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AUG\reload_aug_stand.rtm";
			speed=0.18181819;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.22;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.036363635,0,0.83636361,0,0.87272727,1};
		};
		class CUP_GestureReloadAUG_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AUG\reload_aug_prone.rtm";
			speed=0.18181819;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.22;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.036363635,0,0.83636361,0,0.87272727,1};
		};
		class CUP_GestureReloadAUG_Context: CUP_GestureReloadAUG
		{
			mask="handsWeapon_context";
		};
		class GestureReloadM4SSAS;
		class CUP_GestureReloadM4: GestureReloadM4SSAS
		{
		};
		class CUP_GestureReloadM4_Prone: CUP_GestureReloadM4
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloadebrprone.rtm";
			speed=0.11;
			rightHandIKCurve[]={0,1,0.067924999,0,0.14339601,0,0.177358,1,0.73207498,1,0.75471699,0,0.94717002,0,0.98867899,1};
			leftHandIKCurve[]={0.027000001,1,0.081,0,0.94599998,0,0.98400003,1};
		};
		class CUP_GestureReloadM4_Context: CUP_GestureReloadM4
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM1014_8Rnd: GestureReloadM4SSAS
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M1014\GestureReloadM1014_8Rnd.rtm";
			speed=0.105079;
		};
		class CUP_GestureReloadM1014_8Rnd_Prone: CUP_GestureReloadM1014_8Rnd
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloadebrprone.rtm";
			speed=0.11;
			rightHandIKCurve[]={0,1,0.067924999,0,0.14339601,0,0.177358,1,0.73207498,1,0.75471699,0,0.94717002,0,0.98867899,1};
			leftHandIKCurve[]={0.027000001,1,0.081,0,0.94599998,0,0.98400003,1};
		};
		class CUP_GestureReloadM1014_8Rnd_Context: CUP_GestureReloadM1014_8Rnd
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM1014_6Rnd: GestureReloadM4SSAS
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M1014\GestureReloadM1014_6Rnd.rtm";
			speed=0.1260948;
		};
		class CUP_GestureReloadM1014_6Rnd_Prone: CUP_GestureReloadM1014_6Rnd
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloadebrprone.rtm";
			speed=0.15289;
			rightHandIKCurve[]={0,1,0.067924999,0,0.14339601,0,0.177358,1,0.73207498,1,0.75471699,0,0.94717002,0,0.98867899,1};
			leftHandIKCurve[]={0.027000001,1,0.081,0,0.94599998,0,0.98400003,1};
		};
		class CUP_GestureReloadM1014_6Rnd_Context: CUP_GestureReloadM1014_8Rnd
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM1014_2Rnd: GestureReloadM4SSAS
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M1014\GestureReloadM1014_2Rnd.rtm";
			speed=0.25;
		};
		class CUP_GestureReloadM1014_2Rnd_Prone: CUP_GestureReloadM1014_2Rnd
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloadebrprone.rtm";
			speed=0.30000001;
			rightHandIKCurve[]={0,1,0.067924999,0,0.14339601,0,0.177358,1,0.73207498,1,0.75471699,0,0.94717002,0,0.98867899,1};
			leftHandIKCurve[]={0.027000001,1,0.081,0,0.94599998,0,0.98400003,1};
		};
		class CUP_GestureReloadM1014_2Rnd_Context: CUP_GestureReloadM1014_2Rnd
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM1014_1Rnd: GestureReloadM4SSAS
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M1014\GestureReloadM1014_1Rnd.rtm";
			speed=0.25;
		};
		class CUP_GestureReloadM1014_1Rnd_Prone: CUP_GestureReloadM1014_1Rnd
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloadebrprone.rtm";
			speed=0.30000001;
			rightHandIKCurve[]={0,1,0.067924999,0,0.14339601,0,0.177358,1,0.73207498,1,0.75471699,0,0.94717002,0,0.98867899,1};
			leftHandIKCurve[]={0.027000001,1,0.081,0,0.94599998,0,0.98400003,1};
		};
		class CUP_GestureReloadM1014_1Rnd_Context: CUP_GestureReloadM1014_1Rnd
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadAWM: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AWM\awc_reload_stand.rtm";
			speed=0.21897811;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.65693432,1,0.69343066,0,0.87591243,0,0.91240877,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.072992697,1,0.10218978,0,0.91240877,0,0.94890511,1};
		};
		class CUP_GestureReloadAWM_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AWM\awc_reload_prone.rtm";
			speed=0.21897811;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.65693432,1,0.69343066,0,0.87591243,0,0.91240877,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.072992697,1,0.10218978,0,0.91240877,0,0.94890511,1};
		};
		class CUP_GestureReloadAWM_Context: CUP_GestureReloadAWM
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureRechamberAWM: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AWM\awc_rechamber_stand.rtm";
			speed=0.60000002;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class CUP_GestureRechamberAWM_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AWM\awc_rechamber_prone.rtm";
			speed=0.60000002;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class CUP_GestureRechamberAWM_Context: CUP_GestureRechamberAWM
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadBolt1: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\ReloadBolt1\ReloadBolt1_standing.rtm";
			speed=0.133333;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
		};
		class CUP_GestureReloadBolt1_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\ReloadBolt1\ReloadBolt1_prone.rtm";
			speed=0.133333;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
		};
		class CUP_GestureReloadBolt1_Context: CUP_GestureReloadBolt1
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureRechamberKSVK: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\RechamberBoltKSVK\RechamberBoltKSVK_standing.rtm";
			looped=0;
			speed=-2;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.066670001,0,0.75,0,0.83333302,1};
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureRechamberKSVK_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\RechamberBoltKSVK\RechamberBoltKSVK_prone.rtm";
			looped=0;
			speed=-2;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.066670001,0,0.75,0,0.83333302,1};
			rightHandIKEnd=1;
		};
		class CUP_GestureRechamberKSVK_Context: CUP_GestureRechamberKSVK
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadDSAOSW: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_dsa_osw_standing.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.046154,0,0.93864202,0,0.97240001,1};
		};
		class CUP_GestureReloadDSAOSW_prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_dsa_osw_prone.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.0902,1,0.127,0,0.93984002,0,0.99239999,1};
		};
		class CUP_GestureReloadDSAOSW_Context: CUP_GestureReloadDSAOSW
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadDSAGL: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_dsa_gl_standing.rtm";
			looped=0;
			speed="-(107/30)";
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKCurve[]=
			{
				0,
				1,
				"(4/107)",
				0,
				"(90/107)",
				0,
				"(93/107)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadDSAGL_prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_dsa_gl_prone.rtm";
			speed="-(107/30)";
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,1,1};
			leftHandIKCurve[]=
			{
				0,
				1,
				"(4 / 107)",
				0,
				"(90 / 107)",
				0,
				"(93 / 107)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadDSAGL_context: CUP_GestureReloadDSAGL
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureRechamberMosin: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\Mosin\RechamberBoltMosin_standing.rtm";
			looped=0;
			speed=-2;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.066670001,0,0.75,0,0.83333302,1};
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureRechamberMosin_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\Mosin\RechamberBoltMosin_prone.rtm";
			looped=0;
			speed=-2;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.066670001,0,0.75,0,0.83333302,1};
			rightHandIKEnd=1;
		};
		class CUP_GestureRechamberMosin_Context: CUP_GestureRechamberMosin
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadMosin: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\Mosin\ReloadMosin_standing.rtm";
			speed=0.133333;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
		};
		class CUP_GestureReloadMosin_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\Mosin\ReloadMosin_prone.rtm";
			speed=0.133333;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
		};
		class CUP_GestureReloadMosin_Context: CUP_GestureReloadMosin
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadSKS: Default
		{
			file="\CUP\Weapons\CUP_Weapons_SKS\anim\CUP_sks_reload.rtm";
			speed=0.18000001;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
		};
		class CUP_GestureReloadSKS_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_SKS\anim\CUP_sks_reload_prone.rtm";
			speed=0.18000001;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,1,1};
			leftHandIKEnd=1;
		};
		class CUP_GestureReloadSKS_Context: CUP_GestureReloadSKS
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadSlamfire: Default
		{
			file="\CUP\Weapons\CUP_Weapons_Slamfire_Shotgun\anim\CUP_slamfire_shotgun_reload.rtm";
			speed=0.23;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.04166666,0,0.86666,0,0.89999998,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.86666,0,0.89999998,1};
		};
		class CUP_GestureReloadSlamfire_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_Slamfire_Shotgun\anim\CUP_slamfire_shotgun_reload_prone.rtm";
			speed=0.23;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.04166666,0,0.86666,0,0.89999998,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.86666,0,0.89999998,1};
		};
		class CUP_GestureReloadSlamfire_Context: CUP_GestureReloadSlamfire
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadACR: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\ACR\acr_reload.rtm";
			looped=0;
			speed=0.40000001;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadACR_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\ACR\acr_reload_prone.rtm";
			looped=0;
			speed=0.34999999;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadACR_Context: CUP_GestureReloadACR
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadMG3: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\MG3\reload_mg3_standing.rtm";
			speed=-10.233334;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.029315,0,0.120521,0,0.14005999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.146579,1,0.16611999,0,0.94462001,0,0.97068,1};
		};
		class CUP_GestureReloadMG3_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\MG3\reload_mg3_prone.rtm";
			speed=-10.233334;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.029315,0,0.120521,0,0.14005999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.146579,1,0.16611999,0,0.94462001,0,0.97068,1};
		};
		class CUP_GestureReloadMG3_Context: CUP_GestureReloadMG3
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadXM8: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\XM8\reload_XM8_Standing.rtm";
			canPullTrigger=0;
			speed=-3.5666659;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.34999999;
			headBodmode=2;
			leftHandIKCurve[]=
			{
				0,
				1,
				"(10/107)",
				0,
				"(90/107)",
				0,
				"(98/107)",
				1
			};
			rightHandIKCurve[]=
			{
				"(10/107)",
				1,
				"(13/107)",
				0,
				"(26/107)",
				0,
				"(30/107)",
				1,
				"(76/107)",
				1,
				"(81/107)",
				0,
				"(86/107)",
				0,
				"(93/107)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadXM8_Prone: Default
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\XM8\reload_XM8_prone.rtm";
			speed=-3.5666659;
			looped=0;
			mask="handsWeapon";
			leftHandIKCurve[]=
			{
				0,
				1,
				"(10/107)",
				0,
				"(90/107)",
				0,
				"(98/107)",
				1
			};
			rightHandIKCurve[]=
			{
				"(10/107)",
				1,
				"(13/107)",
				0,
				"(26/107)",
				0,
				"(30/107)",
				1,
				"(76/107)",
				1,
				"(81/107)",
				0,
				"(86/107)",
				0,
				"(93/107)",
				1
			};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadXM8_Context: CUP_GestureReloadXM8
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadXM320: CUP_GestureReloadAG36
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\XM320\reload_XM320_Standing.rtm";
		};
		class CUP_GestureReloadXM320_Prone: CUP_GestureReloadAG36_Prone
		{
			file="\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\XM320\reload_XM320_prone.rtm";
		};
		class CUP_GestureReloadXM320_Context: CUP_GestureReloadXM320
		{
			mask="handsWeapon_context";
		};
	};
};
class cfgRecoils
{
	class recoil_default;
	class CUP_AA12_recoil: recoil_default
	{
		muzzleOuter[]={0.141,0.56,0.56,0.02};
		kickBack[]={0.013,0.028000001};
		permanent=0.2;
	};
	class CUP_AK47_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,1.2,0.30000001,0.40000001};
		kickBack[]={0.046,0.086000003};
		temporary=0.015;
	};
	class CUP_AK47_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,1.2,0.30000001,0.40000001};
		kickBack[]={0.046,0.086000003};
		temporary=0.0099999998;
	};
	class CUP_AKM_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,1,0.30000001,0.40000001};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.0080000004;
	};
	class CUP_AK74_recoil: recoil_default
	{
		muzzleOuter[]={0.19,0.57999998,0.2,0.2};
		kickBack[]={0.017999999,0.037999999};
		temporary=0.015;
	};
	class CUP_AK74_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.185,0.57499999,0.2,0.2};
		kickBack[]={0.017999999,0.037999999};
		temporary=0.0099999998;
	};
	class CUP_AK101_recoil: recoil_default
	{
		muzzleOuter[]={0.19499999,0.59500003,0.2,0.2};
		kickBack[]={0.0195,0.039500002};
		temporary=0.015;
	};
	class CUP_AK101_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.19499999,0.59500003,0.2,0.2};
		kickBack[]={0.0195,0.039500002};
		temporary=0.015;
	};
	class CUP_AK102_recoil: recoil_default
	{
		muzzleOuter[]={0.255,0.875,0.2,0.2};
		kickBack[]={0.023499999,0.0535};
		temporary=0.015;
	};
	class CUP_AK102_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.255,0.875,0.2,0.2};
		kickBack[]={0.033500001,0.0535};
		temporary=0.0099999998;
	};
	class CUP_AK103_recoil: recoil_default
	{
		muzzleOuter[]={0.28,0.77999997,0.30000001,0.34999999};
		kickBack[]={0.037999999,0.078000002};
		temporary=0.015;
	};
	class CUP_AK103_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.28,0.77999997,0.30000001,0.34999999};
		kickBack[]={0.037999999,0.078000002};
		temporary=0.0099999998;
	};
	class CUP_AK104_recoil: recoil_default
	{
		muzzleOuter[]={0.28,1.1,0.30000001,0.34999999};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.015;
	};
	class CUP_AK104_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.28,1.1,0.30000001,0.34999999};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.0099999998;
	};
	class CUP_AK105_recoil: recoil_default
	{
		muzzleOuter[]={0.23999999,0.86000001,0.2,0.2};
		kickBack[]={0.022,0.052000001};
		temporary=0.015;
	};
	class CUP_AK105_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.23999999,0.86000001,0.2,0.2};
		kickBack[]={0.022,0.052000001};
		temporary=0.0099999998;
	};
	class CUP_AK107_recoil: recoil_default
	{
		muzzleOuter[]={0.19499999,0.56,0.2,0.2};
		kickBack[]={0.0197,0.039700001};
		temporary=0.0080000004;
	};
	class CUP_AK107_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.19499999,0.56,0.2,0.2};
		kickBack[]={0.0197,0.039700001};
		temporary=0.0049999999;
	};
	class CUP_AK108_recoil: recoil_default
	{
		muzzleOuter[]={0.197,0.57700002,0.2,0.2};
		kickBack[]={0.0198,0.03985};
		temporary=0.0080000004;
	};
	class CUP_AK108_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.197,0.57700002,0.2,0.2};
		kickBack[]={0.0198,0.03985};
		temporary=0.0049999999;
	};
	class CUP_AK109_recoil: recoil_default
	{
		muzzleOuter[]={0.27000001,0.75,0.28,0.30000001};
		kickBack[]={0.035500001,0.075499997};
		temporary=0.0080000004;
	};
	class CUP_AK109_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.27000001,0.75,0.28,0.30000001};
		kickBack[]={0.035500001,0.075499997};
		temporary=0.0049999999;
	};
	class CUP_RPK_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,1.1,0.30000001,0.40000001};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.0089999996;
	};
	class CUP_RPK74_recoil: recoil_default
	{
		muzzleOuter[]={0.19,0.68000001,0.2,0.2};
		kickBack[]={0.017999999,0.037999999};
		temporary=0.0089999996;
	};
	class CUP_AWM_recoil: recoil_default
	{
		kickBack[]={0.059999999,0.079999998};
		muzzleInner[]={0,0,0.1,0.1};
		muzzleOuter[]={0.5,2.5,0.60000002,0.5};
		permanent=0.1;
		temporary=0.0099999998;
	};
	class CUP_Shield_Pistol_recoil: recoil_default
	{
		muzzleOuter[]={0.2,1,0.2,0.30000001};
		kickBack[]={0.0049999999,0.0080000004};
		temporary=0.029999999;
		permanent=0.1;
	};
	class CUP_Shield_SMG_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,1.1,0.2,0.30000001};
		kickBack[]={0.0049999999,0.012};
		temporary=0.029999999;
		permanent=0.1;
	};
	class CUP_bren2_556_8_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.56,0.27000001,0.17};
		kickBack[]={0.0089999996,0.028999999};
		temporary=0.0099999998;
	};
	class CUP_bren2_556_11_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.36000001,0.37,0.17};
		kickBack[]={0.0089999996,0.028999999};
		temporary=0.0099999998;
	};
	class CUP_bren2_556_14_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.36000001,0.38999999,0.17};
		kickBack[]={0.0089999996,0.028999999};
		temporary=0.0094999997;
	};
	class CUP_bren2_762_8_recoil: recoil_default
	{
		muzzleOuter[]={0.245,0.94499999,0.27000001,0.27000001};
		kickBack[]={0.0165,0.046500001};
		temporary=0.0099999998;
	};
	class CUP_bren2_762_14_recoil: recoil_default
	{
		muzzleOuter[]={0.25999999,0.75999999,0.37,0.27000001};
		kickBack[]={0.016000001,0.046};
		temporary=0.0099999998;
	};
	class CUP_cz805_a2_recoil: recoil_default
	{
		muzzleOuter[]={0.15000001,0.64999998,0.23,0.23};
		kickBack[]={0.014,0.034000002};
		temporary=0.0099999998;
	};
	class CUP_cz805_a1_recoil: recoil_default
	{
		muzzleOuter[]={0.15000001,0.44999999,0.33000001,0.23};
		kickBack[]={0.014,0.034000002};
		temporary=0.0099999998;
	};
	class CUP_FNFAL_recoil: recoil_default
	{
		muzzleOuter[]={0.40000001,1.45,0.57999998,0.40000001};
		kickBack[]={0.034000002,0.068000004};
		temporary=0.0099999998;
	};
	class CUP_FNFAL_shorter_recoil: recoil_default
	{
		muzzleOuter[]={0.40000001,1.475,0.57999998,0.40000001};
		kickBack[]={0.035999998,0.07};
		temporary=0.0125;
	};
	class CUP_FNFAL_short_recoil: recoil_default
	{
		muzzleOuter[]={0.40000001,1.525,0.57999998,0.40000001};
		kickBack[]={0.037999999,0.071999997};
		temporary=0.015;
	};
	class CUP_FNFAL_osw_recoil: recoil_default
	{
		muzzleOuter[]={0.40000001,1.525,0.57999998,0.40000001};
		kickBack[]={0.039999999,0.075000003};
		temporary=0.0175;
	};
	class CUP_DSA58_recoil: recoil_default
	{
		muzzleOuter[]={0.34999999,1.4,0.5,0.30000001};
		kickBack[]={0.035,0.064999998};
		temporary=0.0099999998;
	};
	class CUP_DSA58_osw_recoil: recoil_default
	{
		muzzleOuter[]={0.40000001,1.525,0.5,0.30000001};
		kickBack[]={0.045000002,0.075000003};
		temporary=0.015;
	};
	class CUP_G3_recoil: recoil_default
	{
		muzzleOuter[]={0.34999999,1.425,0.55000001,0.40000001};
		kickBack[]={0.030999999,0.064999998};
		temporary=0.0135;
	};
	class CUP_G36A_recoil: recoil_default
	{
		muzzleOuter[]={0.2,0.60000002,0.2,0.30000001};
		kickBack[]={0.0099999998,0.029999999};
		temporary=0.0099999998;
	};
	class CUP_G36C_recoil: recoil_default
	{
		muzzleOuter[]={0.2,1,0.30000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.015;
	};
	class CUP_G36K_recoil: recoil_default
	{
		muzzleOuter[]={0.2,0.80000001,0.30000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.015;
	};
	class CUP_MG36_recoil: recoil_default
	{
		muzzleOuter[]={0.2,0.80000001,0.30000001,0.2};
		kickBack[]={0.0099999998,0.029999999};
		temporary=0.0085000005;
	};
	class CUP_L85_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.2,1,0.30000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.0099999998;
	};
	class CUP_L86_recoil: recoil_default
	{
		muzzleOuter[]={0.2,0.80000001,0.30000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.0099999998;
	};
	class CUP_Makarov_recoil: recoil_default
	{
		muzzleOuter[]={0.2,1,0.2,0.30000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.029999999;
		permanent=0.1;
	};
	class CUP_M14_DMR_recoil: recoil_default
	{
		muzzleOuter[]={0.40000001,1.5,0.60000002,0.40000001};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.0099999998;
	};
	class CUP_M16_recoil: recoil_default
	{
		muzzleOuter[]={0.2,0.55000001,0.30000001,0.2};
		kickBack[]={0.0099999998,0.029999999};
		temporary=0.0099999998;
	};
	class CUP_M4A1_recoil: recoil_default
	{
		muzzleOuter[]={0.25,0.69999999,0.30000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.015;
	};
	class CUP_M4A3_recoil: recoil_default
	{
		muzzleOuter[]={0.25,0.69999999,0.30000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.0049999999;
	};
	class CUP_Mk12SPR_recoil: recoil_default
	{
		muzzleOuter[]={0.2,0.64999998,0.30000001,0.2};
		kickBack[]={0.02,0.039999999};
		temporary=0.0099999998;
	};
	class CUP_M60_recoil: recoil_default
	{
		muzzleOuter[]={0.55000001,0.94999999,0.60000002,0.25};
		kickBack[]={0.02,0.050000001};
		temporary=0.0049999999;
		permanent=0.2;
	};
	class CUP_M60_recoil_prone: CUP_M60_recoil
	{
		permanent=0.039999999;
	};
	class CUP_M60E4_recoil: recoil_default
	{
		muzzleOuter[]={0.57999998,0.98000002,0.60000002,0.25};
		kickBack[]={0.02,0.055};
		temporary=0.0035000001;
		permanent=0.2;
	};
	class CUP_M60E4_recoil_prone: recoil_default
	{
		permanent=0.039999999;
	};
	class CUP_M240_recoil: recoil_default
	{
		muzzleOuter[]={0.49000001,0.83999997,0.52999997,0.22};
		kickBack[]={0.017999999,0.044};
		temporary=0.0049999999;
		permanent=0.2;
	};
	class CUP_M240_recoil_prone: CUP_M240_recoil
	{
		permanent=0.039999999;
	};
	class CUP_M240B_recoil: CUP_M240_recoil
	{
		muzzleOuter[]={0.44,0.76999998,0.47999999,0.2};
		kickBack[]={0.015,0.039999999};
	};
	class CUP_M240B_recoil_prone: CUP_M240B_recoil
	{
		permanent=0.039999999;
	};
	class CUP_FNMAG_recoil: recoil_default
	{
		muzzleOuter[]={0.46000001,0.79000002,0.5,0.20999999};
		kickBack[]={0.02,0.050000001};
		temporary=0.0049999999;
		permanent=0.2;
	};
	class CUP_FNMAG_recoil_prone: recoil_default
	{
		permanent=0.039999999;
	};
	class CUP_M110_recoil: recoil_default
	{
		muzzleOuter[]={0.44,1.54,0.5,0.60000002};
		kickBack[]={0.041999999,0.082000002};
		temporary=0.0099999998;
	};
	class CUP_SAW_recoil: recoil_default
	{
		muzzleOuter[]={0.2,0.60000002,0.2,0.2};
		kickBack[]={0.0049999999,0.02};
		temporary=0.0049999999;
	};
	class CUP_M1014_recoil: recoil_default
	{
		muzzleOuter[]={1,3,0.60000002,0.60000002};
		kickBack[]={0.07,0.11};
		temporary=0.02;
	};
	class CUP_MG3_recoil: recoil_default
	{
		muzzleOuter[]={0.49000001,0.83999997,0.52999997,0.22};
		kickBack[]={0.017999999,0.044};
		temporary=0.0049999999;
		permanent=0.2;
	};
	class CUP_MG3_recoil_prone: CUP_MG3_recoil
	{
		permanent=0.039999999;
	};
	class CUP_Mk48_recoil: recoil_default
	{
		muzzleOuter[]={0.69999999,1.22,0.76999998,0.31999999};
		kickBack[]={0.026000001,0.064000003};
		temporary=0.0049999999;
		permanent=0.2;
	};
	class CUP_Mk48_recoil_prone: CUP_Mk48_recoil
	{
		permanent=0.039999999;
	};
	class CUP_Groza_recoil: recoil_default
	{
		muzzleOuter[]={0.19499999,0.68000001,0.30000001,0.30000001};
		kickBack[]={0.0175,0.037500001};
		temporary=0.015;
	};
	class CUP_Groza_longer_recoil: recoil_default
	{
		muzzleOuter[]={0.19499999,0.63999999,0.30000001,0.30000001};
		kickBack[]={0.0175,0.037500001};
		temporary=0.0099999998;
	};
	class CUP_Groza_762_recoil: recoil_default
	{
		muzzleOuter[]={0.39500001,0.98000002,0.34999999,0.43000001};
		kickBack[]={0.0275,0.0495};
		temporary=0.015;
	};
	class CUP_Groza_longer_762_recoil: recoil_default
	{
		muzzleOuter[]={0.39500001,0.94,0.34999999,0.43000001};
		kickBack[]={0.0275,0.0495};
		temporary=0.0099999998;
	};
	class CUP_PK_recoil: recoil_default
	{
		muzzleOuter[]={0.55000001,0.94999999,0.60000002,0.25};
		kickBack[]={0.026000001,0.064000003};
		temporary=0.0049999999;
		permanent=0.2;
	};
	class CUP_PK_recoil_prone: CUP_PK_recoil
	{
		permanent=0.039999999;
	};
	class CUP_Saiga12K_recoil: recoil_default
	{
		muzzleOuter[]={0.29499999,1.1,0.34999999,0.34999999};
		kickBack[]={0.079999998,0.1};
		temporary=0.02;
	};
	class CUP_SCAR_Mk16_recoil: recoil_default
	{
		muzzleOuter[]={0.25,0.69999999,0.30000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.015;
	};
	class CUP_scarl_cqc_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.57499999,0.27500001,0.175};
		kickBack[]={0.0094999997,0.0295};
		temporary=0.0099999998;
	};
	class CUP_scarl_cqc_grip_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.57499999,0.27500001,0.175};
		kickBack[]={0.0094999997,0.0295};
		temporary=0.0060000001;
	};
	class CUP_scarl_std_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.375,0.375,0.175};
		kickBack[]={0.0094999997,0.0295};
		temporary=0.0099999998;
	};
	class CUP_scarl_std_grip_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.375,0.375,0.175};
		kickBack[]={0.0094999997,0.0295};
		temporary=0.0060000001;
	};
	class CUP_scarl_sv_recoil: recoil_default
	{
		muzzleOuter[]={0.1,0.35499999,0.39500001,0.175};
		kickBack[]={0.0094999997,0.0295};
		temporary=0.0085000005;
	};
	class CUP_scarh_cqc_recoil: recoil_default
	{
		muzzleOuter[]={0.25999999,0.97500002,0.27500001,0.27500001};
		kickBack[]={0.0165,0.046500001};
		temporary=0.011;
	};
	class CUP_scarh_cqc_grip_recoil: recoil_default
	{
		muzzleOuter[]={0.25999999,0.97500002,0.27500001,0.27500001};
		kickBack[]={0.0165,0.046500001};
		temporary=0.0074999998;
	};
	class CUP_scarh_std_recoil: recoil_default
	{
		muzzleOuter[]={0.25999999,0.77499998,0.375,0.27500001};
		kickBack[]={0.0165,0.043650001};
		temporary=0.011;
	};
	class CUP_scarh_std_grip_recoil: recoil_default
	{
		muzzleOuter[]={0.25999999,0.77499998,0.375,0.27500001};
		kickBack[]={0.0165,0.043650001};
		temporary=0.0074999998;
	};
	class CUP_scarh_sv_recoil: recoil_default
	{
		muzzleOuter[]={0.25999999,0.755,0.39500001,0.27500001};
		kickBack[]={0.0165,0.046500001};
		temporary=0.0094999997;
	};
	class CUP_SMAW_recoil: recoil_default
	{
		muzzleOuter[]={0.30000001,1.5,0.69999999,1.2};
		kickBack[]={0.02,0.039999999};
		temporary=0.015;
	};
	class CUP_SMAW_Spotting_recoil: recoil_default
	{
		muzzleOuter[]={0.15000001,1,0.34999999,0.80000001};
		kickBack[]={0.0099999998,0.02};
		temporary=0.0074999998;
	};
	class CUP_SVD_recoil: recoil_default
	{
		muzzleOuter[]={0.41999999,1.52,0.64999998,0.44999999};
		kickBack[]={0.045000002,0.075000003};
		temporary=0.015;
	};
	class CUP_UK59_recoil: recoil_default
	{
		muzzleOuter[]={0.70999998,1.22,0.76999998,0.31999999};
		kickBack[]={0.026000001,0.064000003};
		temporary=0.0049999999;
		permanent=0.2;
	};
	class CUP_UK59_recoil_prone: CUP_UK59_recoil
	{
		permanent=0.039999999;
	};
	class CUP_VSS_recoil: recoil_default
	{
		muzzleOuter[]={0.22499999,0.68000001,0.30000001,0.30000001};
		kickBack[]={0.0175,0.037500001};
		temporary=0.015;
	};
	class CUP_VSS_HG_recoil: recoil_default
	{
		muzzleOuter[]={0.22499999,0.68000001,0.30000001,0.30000001};
		kickBack[]={0.0175,0.037500001};
		temporary=0.0099999998;
	};
	class CUP_SR3M_recoil: recoil_default
	{
		muzzleOuter[]={0.228,0.68800002,0.30000001,0.30000001};
		kickBack[]={0.0175,0.037500001};
		temporary=0.0099999998;
	};
	class CUP_XM8_carbine_recoil: recoil_default
	{
		muzzleOuter[]={0.18000001,0.55000001,0.2,0.30000001};
		kickBack[]={0.0080000004,0.027000001};
		temporary=0.0099999998;
	};
	class CUP_XM8_carbine_pmc_recoil: recoil_default
	{
		muzzleOuter[]={0.175,0.54500002,0.2,0.30000001};
		kickBack[]={0.0070000002,0.026000001};
		temporary=0.0049999999;
	};
	class CUP_XM8_compact_recoil: recoil_default
	{
		muzzleOuter[]={0.18000001,0.94999999,0.30000001,0.30000001};
		kickBack[]={0.017000001,0.035999998};
		temporary=0.015;
	};
	class CUP_XM8_sharpshooter_recoil: recoil_default
	{
		muzzleOuter[]={0.18000001,0.75,0.30000001,0.2};
		kickBack[]={0.0080000004,0.027000001};
		temporary=0.0080000004;
	};
	class CUP_recoil_pistol_makarov: CUP_Makarov_recoil
	{
	};
	class CUP_recoil_shield_pistol: CUP_Shield_Pistol_recoil
	{
	};
	class CUP_recoil_shield_smg: CUP_Shield_SMG_recoil
	{
	};
	class Recoil_CUP_G36A: CUP_G36A_recoil
	{
	};
	class Recoil_CUP_G36C: CUP_G36C_recoil
	{
	};
	class Recoil_CUP_G36K: CUP_G36K_recoil
	{
	};
	class Recoil_CUP_MG36: CUP_MG36_recoil
	{
	};
	class Recoil_CUP_XM8_carbine: CUP_XM8_carbine_recoil
	{
	};
	class Recoil_CUP_XM8_carbine_pmc: CUP_XM8_carbine_pmc_recoil
	{
	};
	class Recoil_CUP_XM8_compact: CUP_XM8_compact_recoil
	{
	};
	class Recoil_CUP_XM8_sharpshooter: CUP_XM8_sharpshooter_recoil
	{
	};
	class Recoil_CUP_M14_DMR: CUP_M14_DMR_recoil
	{
	};
	class Recoil_CUP_M16: CUP_M16_recoil
	{
	};
	class Recoil_CUP_M4A1: CUP_M4A1_recoil
	{
	};
	class Recoil_CUP_M4A3: CUP_M4A3_recoil
	{
	};
	class Recoil_CUP_Mk12SPR: CUP_Mk12SPR_recoil
	{
	};
	class Recoil_CUP_AK47: CUP_AK47_recoil
	{
	};
	class Recoil_CUP_AK47_HG: CUP_AK47_HG_recoil
	{
	};
	class Recoil_CUP_AKM_HG: CUP_AKM_HG_recoil
	{
	};
	class Recoil_CUP_AK74: CUP_AK74_recoil
	{
	};
	class Recoil_CUP_AK74_HG: CUP_AK74_HG_recoil
	{
	};
	class Recoil_CUP_AK101: CUP_AK101_recoil
	{
	};
	class Recoil_CUP_AK101_HG: CUP_AK101_HG_recoil
	{
	};
	class Recoil_CUP_AK102: CUP_AK102_recoil
	{
	};
	class Recoil_CUP_AK102_HG: CUP_AK102_HG_recoil
	{
	};
	class Recoil_CUP_AK103: CUP_AK103_recoil
	{
	};
	class Recoil_CUP_AK103_HG: CUP_AK103_HG_recoil
	{
	};
	class Recoil_CUP_AK104: CUP_AK104_recoil
	{
	};
	class Recoil_CUP_AK104_HG: CUP_AK104_HG_recoil
	{
	};
	class Recoil_CUP_AK105: CUP_AK105_recoil
	{
	};
	class Recoil_CUP_AK105_HG: CUP_AK105_HG_recoil
	{
	};
	class Recoil_CUP_AK107: CUP_AK107_recoil
	{
	};
	class Recoil_CUP_AK107_HG: CUP_AK107_HG_recoil
	{
	};
	class Recoil_CUP_AK108: CUP_AK108_recoil
	{
	};
	class Recoil_CUP_AK108_HG: CUP_AK108_HG_recoil
	{
	};
	class Recoil_CUP_AK109: CUP_AK109_recoil
	{
	};
	class Recoil_CUP_AK109_HG: CUP_AK109_HG_recoil
	{
	};
	class Recoil_CUP_RPK: CUP_RPK_recoil
	{
	};
	class Recoil_CUP_RPK74: CUP_RPK74_recoil
	{
	};
	class Recoil_CUP_L85_HG: CUP_L85_HG_recoil
	{
	};
	class Recoil_CUP_L86: CUP_L86_recoil
	{
	};
	class Recoil_CUP_FNFAL: CUP_FNFAL_recoil
	{
	};
	class Recoil_CUP_FNFAL_shorter: CUP_FNFAL_shorter_recoil
	{
	};
	class Recoil_CUP_FNFAL_short: CUP_FNFAL_short_recoil
	{
	};
	class Recoil_CUP_FNFAL_osw: CUP_FNFAL_osw_recoil
	{
	};
	class Recoil_CUP_DSA58: CUP_DSA58_recoil
	{
	};
	class Recoil_CUP_DSA58_osw: CUP_DSA58_osw_recoil
	{
	};
	class Recoil_CUP_SVD: CUP_SVD_recoil
	{
	};
	class Recoil_CUP_VSS: CUP_VSS_recoil
	{
	};
	class Recoil_CUP_VSS_HG: CUP_VSS_HG_recoil
	{
	};
	class Recoil_CUP_SR3M: CUP_SR3M_recoil
	{
	};
	class Recoil_CUP_M110: CUP_M110_recoil
	{
	};
	class Recoil_CUP_Saiga12K: CUP_Saiga12K_recoil
	{
	};
	class Recoil_CUP_G3: CUP_G3_recoil
	{
	};
	class Recoil_CUP_Groza: CUP_Groza_recoil
	{
	};
	class Recoil_CUP_Groza_longer: CUP_Groza_longer_recoil
	{
	};
	class Recoil_CUP_Groza_762: CUP_Groza_762_recoil
	{
	};
	class Recoil_CUP_Groza_longer_762: CUP_Groza_longer_762_recoil
	{
	};
	class Recoil_M1014: CUP_M1014_recoil
	{
	};
	class Recoil_CUP_AA12: CUP_AA12_recoil
	{
	};
	class Recoil_CUP_cz805_a2: CUP_cz805_a2_recoil
	{
	};
	class Recoil_CUP_cz805_a1: CUP_cz805_a1_recoil
	{
	};
	class Recoil_CUP_SCAR_Mk16: CUP_SCAR_Mk16_recoil
	{
	};
	class Recoil_CUP_scarl_cqc: CUP_scarl_cqc_recoil
	{
	};
	class Recoil_CUP_scarl_cqc_grip: CUP_scarl_cqc_grip_recoil
	{
	};
	class Recoil_CUP_scarl_std: CUP_scarl_std_recoil
	{
	};
	class Recoil_CUP_scarl_std_grip: CUP_scarl_std_grip_recoil
	{
	};
	class Recoil_CUP_scarl_sv: CUP_scarl_sv_recoil
	{
	};
	class Recoil_CUP_scarh_cqc: CUP_scarh_cqc_recoil
	{
	};
	class Recoil_CUP_scarh_cqc_grip: CUP_scarh_cqc_grip_recoil
	{
	};
	class Recoil_CUP_scarh_std: CUP_scarh_std_recoil
	{
	};
	class Recoil_CUP_scarh_std_grip: CUP_scarh_std_grip_recoil
	{
	};
	class Recoil_CUP_scarh_sv: CUP_scarh_sv_recoil
	{
	};
	class Recoil_CUP_bren2_556_8: CUP_bren2_556_8_recoil
	{
	};
	class Recoil_CUP_bren2_556_11: CUP_bren2_556_11_recoil
	{
	};
	class Recoil_CUP_bren2_556_14: CUP_bren2_556_14_recoil
	{
	};
	class Recoil_CUP_bren2_762_8: CUP_bren2_762_8_recoil
	{
	};
	class Recoil_CUP_bren2_762_14: CUP_bren2_762_14_recoil
	{
	};
	class recoil_awm: CUP_AWM_recoil
	{
	};
	class recoil_saw: CUP_SAW_recoil
	{
	};
};
class CfgWeapons
{
	class ItemCore;
	class CUP_muzzleFlash_suppressed: ItemCore
	{
		displayName="-";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_suppressor.p3d";
	};
	class CUP_muzzleFlash_suppressed2: ItemCore
	{
		displayName="-";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d";
	};
	class CUP_muzzleFlash_muzzleBreak: ItemCore
	{
		displayName="-";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		model="\a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_mx25.p3d";
	};
};
