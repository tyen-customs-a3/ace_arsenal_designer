class CfgPatches
{
	class CUP_Weapons_DynamicLoadout
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Pods",
			"CUP_Weapons_VehicleWeapons"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
		magazines[]=
		{
			"CUP_PylonPod_20Rnd_S8_M",
			"CUP_PylonPod_20Rnd_S8_CCIP_M",
			"CUP_PylonPod_20Rnd_S8N_M",
			"CUP_PylonPod_20Rnd_S8N_CCIP_M",
			"CUP_PylonPod_7Rnd_S5_M",
			"CUP_PylonPod_16Rnd_S5_M",
			"CUP_PylonPod_32Rnd_S5_M",
			"CUP_PylonPod_2Rnd_Igla_M",
			"CUP_PylonPod_20Rnd_S8_plane_M",
			"CUP_PylonPod_16Rnd_S5_plane_M",
			"CUP_PylonPod_32Rnd_S5_plane_M"
		};
	};
};
class CfgFunctions
{
	class CUP
	{
		class DynamicLoadout
		{
			class dynamicLoadout
			{
				file="\CUP\Weapons\CUP_Weapons_DynamicLoadout\functions\fn_dynamicLoadout.sqf";
			};
		};
	};
};
class CfgMagazines
{
	class 120Rnd_CMFlareMagazine;
	class 168Rnd_CMFlare_Chaff_Magazine;
	class 2Rnd_LG_Scalpel;
	class 2Rnd_Missile_AA_03_F;
	class CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M;
	class CUP_1200Rnd_TE1_Red_Tracer_GAU19_M;
	class CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M;
	class CUP_14Rnd_FFAR_M;
	class CUP_14Rnd_S5_M;
	class CUP_19Rnd_CRV7_FAT_M;
	class CUP_1Rnd_AIM_9L_Sidewinder_External_M;
	class CUP_2000Rnd_TE5_Red_Tracer_762x51_M134_M;
	class CUP_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M;
	class CUP_2Rnd_AGM114K_Hellfire_II_M;
	class CUP_2Rnd_AGM65_Maverick_M;
	class CUP_2Rnd_FAB250_M;
	class CUP_2Rnd_Mk82_M;
	class CUP_40Rnd_S8_M;
	class CUP_4Rnd_AT2_M;
	class CUP_4Rnd_AT6_M;
	class CUP_4Rnd_Kh29L_M;
	class CUP_6Rnd_GBU12_M;
	class CUP_6Rnd_KAB250_M;
	class CUP_8Rnd_AGM114L_Hellfire_II_M;
	class CUP_8Rnd_AT9_M;
	class CUP_fake_weapon_mag;
	class CUP_Strela_2_M;
	class Laserbatteries;
	class PylonMissile_Missile_AMRAAM_D_INT_x1;
	class PylonRack_1Rnd_GAA_missiles;
	class PylonRack_Missile_AMRAAM_C_x2;
	class CUP_PylonPod_7Rnd_Rocket_FFAR_M: CUP_14Rnd_FFAR_M
	{
		displayName="7x Hydra LAU-68D/A";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_LAU_68D_A.p3d";
		count=7;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_7Rnd_FFAR"
		};
		pylonWeapon="CUP_Vmlauncher_FFAR_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_19Rnd_Rocket_FFAR_M: CUP_14Rnd_FFAR_M
	{
		displayName="19x Hydra LAU-130A";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_LAU_130A.p3d";
		count=19;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_19Rnd_FFAR"
		};
		pylonWeapon="CUP_Vmlauncher_FFAR_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_19Rnd_CRV7_FAT_M: CUP_19Rnd_CRV7_FAT_M
	{
		displayName="19x CRV7 FAT";
		displayNameShort="FAT";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_CRV7x19.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_19Rnd_CRV7_FAT"
		};
		pylonWeapon="CUP_Vmlauncher_CRV7_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_19Rnd_CRV7_HE_M: CUP_PylonPod_19Rnd_CRV7_FAT_M
	{
		ammo="CUP_R_CRV7_C18_HE";
		displayName="19x CRV7 HE";
		displayNameShort="HE";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_19Rnd_CRV7_HE"
		};
	};
	class CUP_PylonPod_19Rnd_CRV7_KEP_M: CUP_PylonPod_19Rnd_CRV7_FAT_M
	{
		ammo="CUP_R_CRV7_C18_KEP";
		displayName="19x CRV7 KEP";
		displayNameShort="KEP";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_19Rnd_CRV7_KEP"
		};
	};
	class CUP_PylonPod_12Rnd_CRV7_FAT_M: CUP_19Rnd_CRV7_FAT_M
	{
		count=12;
		displayName="12x CRV7 FAT";
		displayNameShort="FAT";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_CRV7x12.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_12Rnd_CRV7_FAT"
		};
		pylonWeapon="CUP_Vmlauncher_CRV7_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_12Rnd_CRV7_HE_M: CUP_PylonPod_12Rnd_CRV7_FAT_M
	{
		ammo="CUP_R_CRV7_C18_HE";
		displayName="12x CRV7 HE";
		displayNameShort="HE";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_12Rnd_CRV7_HE"
		};
	};
	class CUP_PylonPod_12Rnd_CRV7_KEP_M: CUP_PylonPod_12Rnd_CRV7_FAT_M
	{
		ammo="CUP_R_CRV7_C18_KEP";
		displayName="12x CRV7 KEP";
		displayNameShort="KEP";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_ROCKETS",
			"CUP_12Rnd_CRV7_KEP"
		};
	};
	class CUP_PylonPod_20Rnd_S8_M: CUP_40Rnd_S8_M
	{
		scope=2;
		displayName="20x S8 Rocket";
		displayNameShort="S8";
		count=20;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S8\CUP_S8_pod.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_KA50",
			"CUP_EAST_HELO_KA52",
			"CUP_20Rnd_S8"
		};
		pylonWeapon="CUP_Vmlauncher_S8_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_20Rnd_S8_CCIP_M: CUP_40Rnd_S8_M
	{
		scope=2;
		displayName="20x S8 Rocket (CCIP)";
		displayNameShort="S8";
		count=20;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S8\CUP_S8_pod.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_KA50",
			"CUP_EAST_HELO_KA52",
			"CUP_0Rnd_S8_CCIP"
		};
		pylonWeapon="CUP_Vmlauncher_S8_CCIP_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_20Rnd_S8N_M: CUP_PylonPod_20Rnd_S8_M
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S8\CUP_S8_n_pod.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_LARGE",
			"CUP_20Rnd_S8N"
		};
		pylonWeapon="CUP_Vmlauncher_S8_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_20Rnd_S8N_CCIP_M: CUP_PylonPod_20Rnd_S8_CCIP_M
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S8\CUP_S8_n_pod.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_LARGE",
			"CUP_20Rnd_S8N_CCIP"
		};
		pylonWeapon="CUP_Vmlauncher_S8_CCIP_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_7Rnd_S5_M: CUP_14Rnd_S5_M
	{
		scope=2;
		displayName="7x S5 Rocket";
		displayNameShort="S5";
		count=7;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_S5x7.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_SMALL",
			"CUP_EAST_HELO_LARGE",
			"CUP_7Rnd_S5"
		};
		pylonWeapon="CUP_Vmlauncher_S5_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_16Rnd_S5_M: CUP_PylonPod_7Rnd_S5_M
	{
		displayName="16x S5 UB16 Pod";
		displayNameShort="S5";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_SMALL",
			"CUP_EAST_HELO_LARGE",
			"CUP_16Rnd_S5"
		};
		count=16;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_UB16.p3d";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_32Rnd_S5_M: CUP_PylonPod_7Rnd_S5_M
	{
		displayName="32x S5 UB32 Pod";
		displayNameShort="S5";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_SMALL",
			"CUP_EAST_HELO_LARGE",
			"CUP_32Rnd_S5"
		};
		count=32;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_UB32.p3d";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M: CUP_2Rnd_AGM114K_Hellfire_II_M
	{
		displayName="2x AGM-114K";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_dual.p3d";
		count=2;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_2Rnd_AGM114K"
		};
		pylonWeapon="CUP_Vmlauncher_AGM114K_veh";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_M: CUP_8Rnd_AGM114L_Hellfire_II_M
	{
		displayName="2x AGM-114L";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_dual.p3d";
		count=2;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"DAR",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_2Rnd_AGM114L"
		};
		pylonWeapon="CUP_Vmlauncher_AGM114L_veh";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_4Rnd_AGM114K_Hellfire_II_M: CUP_2Rnd_AGM114K_Hellfire_II_M
	{
		displayName="4x AGM-114K";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_quad.p3d";
		count=4;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_LARGE",
			"CUP_4Rnd_AGM114K"
		};
		pylonWeapon="CUP_Vmlauncher_AGM114K_veh";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M: CUP_8Rnd_AGM114L_Hellfire_II_M
	{
		displayName="4x AGM-114L";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_quad.p3d";
		count=4;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_LARGE",
			"CUP_4Rnd_AGM114L"
		};
		pylonWeapon="CUP_Vmlauncher_AGM114L_veh";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M: CUP_1Rnd_AIM_9L_Sidewinder_External_M
	{
		displayName="1x AIM-9L Sidewinder";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AIM9\CUP_AIM9X.p3d";
		count=1;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_WINGTIP",
			"CUP_1Rnd_AIM_9L"
		};
		pylonWeapon="CUP_Vmlauncher_AIM9L_veh_1Rnd";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_4Rnd_Ataka_Empty_M: CUP_8Rnd_AT9_M
	{
		displayName="4x 9M120 Ataka";
		displayNameShort="Ataka";
		model="\a3\weapons_f\empty";
		count=4;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_SUPERHIND_ATAKA",
			"CUP_4Rnd_Ataka"
		};
		pylonWeapon="CUP_Vmlauncher_AT9_veh";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_2Rnd_Ataka_M: CUP_8Rnd_AT9_M
	{
		displayName="2x 9M120 Ataka";
		displayNameShort="Ataka";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AT9\CUP_AT9_pod.p3d";
		count=2;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_SMALL",
			"CUP_EAST_HELO_LARGE",
			"CUP_EAST_HELO_HIND_WINGTIP",
			"CUP_2Rnd_Ataka"
		};
		pylonWeapon="CUP_Vmlauncher_AT9_veh";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_2Rnd_Igla_M: CUP_Strela_2_M
	{
		scope=2;
		count=2;
		ammo="CUP_M_9K38_Igla_AA";
		displayName="2x 9K38 Igla";
		displayNameShort="Igla";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Igla\CUP_Twin_Igla.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_SMALL",
			"CUP_EAST_HELO_LARGE",
			"CUP_EAST_HELO_HIND_WINGTIP",
			"CUP_2Rnd_Igla"
		};
		pylonWeapon="CUP_Vmlauncher_Igla_twice_veh";
	};
	class CUP_PylonPod_6Rnd_Vikhr_M: 2Rnd_LG_Scalpel
	{
		displayName="6x 9K121 Vikhr";
		displayNameShort="Vikhr";
		count=6;
		ammo="CUP_M_9K121_Vikhr_AT16_Scallion_AT";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Vikhr\CUP_Vikhrx6_pod.p3d";
		pylonWeapon="CUP_Vmlauncher_AT16_veh";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_KA50",
			"CUP_EAST_HELO_KA52",
			"CUP_6Rnd_Vikhr"
		};
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_2Rnd_AT2_M: CUP_4Rnd_AT2_M
	{
		displayName="2x 9M17P Falanga-PV";
		displayNameShort="AT-2C";
		count=2;
		pylonWeapon="CUP_Vmlauncher_AT2_veh";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AT2\CUP_AT2_rack.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_HIND_WINGTIP",
			"CUP_2Rnd_AT2"
		};
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_2Rnd_AT6_M: CUP_4Rnd_AT6_M
	{
		displayName="2x 9M114 Shturm";
		displayNameShort="Shturm";
		count=2;
		pylonWeapon="CUP_Vmlauncher_AT6_veh";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AT6\CUP_AT6_pod.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_HIND_WINGTIP",
			"CUP_2Rnd_AT6"
		};
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19L_M: CUP_1200Rnd_TE1_Red_Tracer_GAU19_M
	{
		displayName="GAU-19/A";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU19A\CUP_Gau19_Left.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_AH6_LEFT",
			"CUP_GAU19L"
		};
		pylonWeapon="CUP_Vhmg_GAU10_L_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19R_M: CUP_1200Rnd_TE1_Red_Tracer_GAU19_M
	{
		displayName="GAU-19/A";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU19A\CUP_Gau19_Right.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_AH6_RIGHT",
			"CUP_GAU19R"
		};
		pylonWeapon="CUP_Vhmg_GAU10_R_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19A_M: CUP_1200Rnd_TE1_Red_Tracer_GAU19_M
	{
		displayName="GAU-19/A (Any)";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU19A\CUP_Gau19_Any.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_MINIGUN",
			"CUP_NATO_HELO_SMALL",
			"CUP_GAU19A"
		};
		pylonWeapon="CUP_Vhmg_GAU10_A_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_2000Rnd_TE5_Red_Tracer_762x51_M134A_M: CUP_2000Rnd_TE5_Red_Tracer_762x51_M134_M
	{
		displayName="M134";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\M134\CUP_M134_Any.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_MINIGUN",
			"CUP_M134A"
		};
		pylonWeapon="CUP_Vlmg_M134_A_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M: CUP_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M
	{
		displayName="M621 Cannon Pod";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\M621\CUP_M621.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_LARGE",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_GUNPOD",
			"CUP_M621"
		};
		pylonWeapon="CUP_Vacannon_M621_AW159_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M: CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M
	{
		displayName="M230 Chaingun Pod";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\m230\CUP_m230.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_HELO_UH60",
			"CUP_NATO_HELO_AH6_LEFT",
			"CUP_M789"
		};
		pylonWeapon="CUP_Vacannon_M230_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M: CUP_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M
	{
		count=250;
		displayName="GSh-23L";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Gsh23\CUP_Gsh23_pod.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_LARGE",
			"O_BOMB_PYLON",
			"CUP_GSh23"
		};
		pylonWeapon="CUP_Vacannon_GSh23L_pod_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_1Rnd_FAB250_M: CUP_2Rnd_FAB250_M
	{
		displayName="1x FAB250";
		displayNameShort="FAB250";
		count=1;
		mass=200;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\FAB250\CUP_FAB250_pod.p3d";
		pylonWeapon="CUP_Vblauncher_Fab250_veh";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_EAST_HELO_LARGE",
			"CUP_1Rnd_FAB250"
		};
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_19Rnd_Rocket_FFAR_plane_M: CUP_14Rnd_FFAR_M
	{
		displayName="19x Hydra LAU-130A";
		displayNameShort="Hydra";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_LAU_130A_plane.p3d";
		count=19;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_19Rnd_Rocket_FFAR_plane_M"
		};
		pylonWeapon="CUP_Vmlauncher_FFAR_veh";
		CUP_PilotControl=1;
		mass=155;
	};
	class CUP_PylonPod_19Rnd_CRV7_FAT_plane_M: CUP_19Rnd_CRV7_FAT_M
	{
		displayName="19x CRV7 FAT";
		displayNameShort="FAT";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_CRV7x19_plane.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_19Rnd_CRV7_FAT_plane_M"
		};
		pylonWeapon="CUP_Vmlauncher_CRV7_veh";
		CUP_PilotControl=1;
		mass=160;
	};
	class CUP_PylonPod_19Rnd_CRV7_HE_plane_M: CUP_PylonPod_19Rnd_CRV7_FAT_plane_M
	{
		ammo="CUP_R_CRV7_C15_HE";
		displayName="19x CRV7 HE";
		displayNameShort="HE";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_19Rnd_CRV7_HE_plane_M"
		};
	};
	class CUP_PylonPod_19Rnd_CRV7_KEP_plane_M: CUP_PylonPod_19Rnd_CRV7_FAT_plane_M
	{
		ammo="CUP_R_CRV7_C15_KEP";
		displayName="19x CRV7 KEP";
		displayNameShort="KEP";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_19Rnd_CRV7_KEP_plane_M"
		};
	};
	class CUP_PylonPod_20Rnd_S8_plane_M: CUP_40Rnd_S8_M
	{
		scope=2;
		displayName="20x S8 Rocket";
		displayNameShort="S8";
		count=20;
		mass=200;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"O_MISSILE_PYLON",
			"CUP_PylonPod_20Rnd_S8_plane_M"
		};
		pylonWeapon="CUP_Vmlauncher_S8_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_16Rnd_S5_plane_M: CUP_14Rnd_S5_M
	{
		scope=2;
		displayName="16x S5 Rocket";
		displayNameShort="S5";
		count=16;
		mass=138;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_UB16_plane.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"O_MISSILE_PYLON",
			"CUP_PylonPod_16Rnd_S5_plane_M"
		};
		pylonWeapon="CUP_Vmlauncher_S5_veh";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_32Rnd_S5_plane_M: CUP_PylonPod_16Rnd_S5_plane_M
	{
		displayName="32x S5 UB32 Pod";
		displayNameShort="S5";
		count=32;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_UB32_plane.p3d";
		CUP_PilotControl=1;
		mass=264;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"O_MISSILE_PYLON",
			"CUP_PylonPod_32Rnd_S5_plane_M"
		};
	};
	class CUP_PylonPod_1Rnd_AGM65_Maverick_M: CUP_2Rnd_AGM65_Maverick_M
	{
		ammo="CUP_AGM65pod_AT";
		displayName="1x AGM-65 Maverick";
		displayNameShort="AGM-65";
		mass=304;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_02_F.p3d";
		count=1;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"CUP_PylonPod_1Rnd_AGM65_Maverick_M"
		};
		pylonWeapon="CUP_Vmlauncher_AGM65pod_veh";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_3Rnd_AGM65_Maverick_M: CUP_PylonPod_1Rnd_AGM65_Maverick_M
	{
		displayName="3x AGM-65 Maverick";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.p3d";
		count=3;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"CUP_PylonPod_3Rnd_AGM65_Maverick_M"
		};
		mass=962;
		mirrorMissilesIndexes[]={2,1,3};
	};
	class CUP_PylonPod_1Rnd_AIM_9L_LAU_Sidewinder_M: CUP_1Rnd_AIM_9L_Sidewinder_External_M
	{
		displayName="1x AIM-9L Sidewinder";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AIM9\CUP_AMI9_LAU7_new.p3d";
		count=1;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"CUP_B_AA_MISSILE_PYLON",
			"CUP_PylonPod_1Rnd_AIM_9L_LAU_Sidewinder_M"
		};
		pylonWeapon="CUP_Vmlauncher_AIM9L_veh_1Rnd";
		CUP_PilotControl=0;
		mass=120;
	};
	class CUP_PylonPod_2Rnd_AIM_9L_LAU_Sidewinder_M: CUP_1Rnd_AIM_9L_Sidewinder_External_M
	{
		displayName="2x AIM-9L Sidewinder";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AIM9\CUP_AIM9_LAU2_plane.p3d";
		count=2;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"CUP_PylonPod_2Rnd_AIM_9L_LAU_Sidewinder_M"
		};
		pylonWeapon="CUP_Vmlauncher_AIM9L_veh_1Rnd";
		CUP_PilotControl=0;
		mass=220;
	};
	class CUP_PylonPod_1Rnd_AIM_120_AMRAAM_M: PylonRack_1Rnd_GAA_missiles
	{
		displayName="1x AIM-120 AMRAAM";
		displayNameShort="AIM-120";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"CUP_B_AA_MISSILE_PYLON",
			"CUP_PylonPod_1Rnd_AIM_120_AMRAAM_M"
		};
		pylonWeapon="CUP_Vmlauncher_AIM120_veh";
		mass=180;
	};
	class CUP_PylonPod_2Rnd_AIM_120_AMRAAM_M: PylonRack_Missile_AMRAAM_C_x2
	{
		displayName="2x AIM-120 AMRAAM";
		displayNameShort="AIM-120";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"B_AMRAAM_C_DUAL_RAIL",
			"I_AMRAAM_C_DUAL_RAIL",
			"CUP_PylonPod_2Rnd_AIM_120_AMRAAM_M"
		};
		pylonWeapon="CUP_Vmlauncher_AIM120_veh";
		mass=360;
	};
	class CUP_PylonPod_1Rnd_AIM_120_AMRAAM_INT_M: PylonMissile_Missile_AMRAAM_D_INT_x1
	{
		displayName="1x AIM-120 AMRAAM";
		displayNameShort="AIM-120";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_MISSILE_INTERNAL",
			"CUP_PylonPod_1Rnd_AIM_120_AMRAAM_INT_M"
		};
		mass=180;
		pylonWeapon="CUP_Vmlauncher_AIM120_veh";
	};
	class CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_Plane_M: CUP_2Rnd_AGM114K_Hellfire_II_M
	{
		displayName="2x AGM-114K";
		displayNameShort="AGM-114K";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_dual_drone.p3d";
		count=2;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_Plane_M"
		};
		pylonWeapon="CUP_Vmlauncher_AGM114K_veh";
		mass=110;
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_Plane_M: CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_Plane_M
	{
		displayName="2x AGM-114L";
		displayNameShort="AGM-114L";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_MISSILE_PYLON",
			"CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_Plane_M"
		};
		pylonWeapon="CUP_Vmlauncher_AGM114L_veh";
	};
	class CUP_PylonPod_1Rnd_Kh29_M: CUP_4Rnd_Kh29L_M
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Kh29\CUP_Kh_29L.p3d";
		displayName="1x Kh-29L";
		displayNameShort="KH-29L";
		count=1;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"O_MISSILE_PYLON",
			"CUP_PylonPod_1Rnd_Kh29_M"
		};
		pylonWeapon="CUP_Vmlauncher_Kh29L_veh";
		mass=660;
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_1Rnd_R73_Vympel: 2Rnd_Missile_AA_03_F
	{
		displayName="1x R-73 Vympel";
		displayNameShort="Vympel";
		count=1;
		mass=120;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"O_MISSILE_PYLON",
			"CUP_O_AA_MISSILE_PYLON",
			"CUP_PylonPod_1Rnd_R73_Vympel"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_03_F.p3d";
		pylonWeapon="CUP_Vmlauncher_R73_veh";
	};
	class CUP_220Rnd_TE1_Red_Tracer_25mm_GAU22_M;
	class CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M: CUP_220Rnd_TE1_Red_Tracer_25mm_GAU22_M
	{
		displayName="GAU-22/A";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU22A\CUP_Gau22.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_F35_CENTER_PYLON",
			"CUP_PylonWeapon_220Rnd_GAU22_M"
		};
		pylonWeapon="CUP_Vacannon_GAU22_veh";
		mass=1;
	};
	class CUP_PylonPod_ANAAQ_28: Laserbatteries
	{
		displayName="1x AN/AAQ-28";
		displayNameShort="Laser Designator";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\ANAAQ_28\CUP_ANAAQ_28.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_F35_CENTER_PYLON",
			"CUP_PylonPod_ANAAQ_28"
		};
		mass=208;
		pylonWeapon="CUP_Laserdesignator_mounted";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_ALQ_131: CUP_fake_weapon_mag
	{
		displayName="1x AN/ALQ 131 Jammer Pod";
		displayNameShort="AN/ALQ 131";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\ALQ_131\CUP_ALQ_131_pod.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_ALQ_131"
		};
		mass=300;
		pylonWeapon="CUP_ALQ_131_Pseudo";
		CUP_PilotControl=0;
	};
	class CUP_PylonPod_1Rnd_Mk82_M: CUP_2Rnd_Mk82_M
	{
		displayName="1x Mk82";
		displayNameShort="Mk82";
		count=1;
		mass=227;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_mk82_pod.p3d";
		pylonWeapon="CUP_Vblauncher_Mk82_veh";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_1Rnd_Mk82_M"
		};
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_2Rnd_Mk82_M: CUP_PylonPod_1Rnd_Mk82_M
	{
		count=2;
		mass=500;
		displayName="2x Mk82";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_mk82_2_rack.p3d";
		pylonWeapon="CUP_Vblauncher_Mk82_veh";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_2Rnd_Mk82_M"
		};
	};
	class CUP_PylonPod_3Rnd_Mk82_M: CUP_PylonPod_1Rnd_Mk82_M
	{
		count=3;
		mass=740;
		displayName="3x Mk82";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_TER_9A.p3d";
		pylonWeapon="CUP_Vblauncher_Mk82_veh";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_3Rnd_Mk82_M"
		};
	};
	class CUP_PylonPod_1Rnd_GBU12_M: CUP_6Rnd_GBU12_M
	{
		count=1;
		mass=230;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\PavewayII\CUP_gbu12_1_rack.p3d";
		displayName="1x GBU-12 Paveway II";
		displayNameShort="GBU-12";
		pylonWeapon="CUP_Vblauncher_GBU12_veh";
		CUP_PilotControl=1;
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_1Rnd_GBU12_M"
		};
	};
	class CUP_PylonPod_2Rnd_GBU12_M: CUP_PylonPod_1Rnd_GBU12_M
	{
		count=2;
		mass=480;
		displayName="2x GBU-12 Paveway II";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\PavewayII\CUP_gbu12_2_rack.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_2Rnd_GBU12_M"
		};
	};
	class CUP_PylonPod_3Rnd_GBU12_M: CUP_PylonPod_1Rnd_GBU12_M
	{
		count=3;
		mass=720;
		displayName="3x GBU-12 Paveway II";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\PavewayII\CUP_gbu12_3_rack.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"B_BOMB_PYLON",
			"CUP_PylonPod_3Rnd_GBU12_M"
		};
	};
	class CUP_PylonPod_1Rnd_FAB250_plane_M: CUP_2Rnd_FAB250_M
	{
		displayName="1x FAB-250";
		displayNameShort="FAB-250";
		count=1;
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\FAB250\CUP_FAB250_plane.p3d";
		pylonWeapon="CUP_Vblauncher_Fab250_veh";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"O_BOMB_PYLON",
			"CUP_PylonPod_1Rnd_FAB250_plane_M"
		};
		CUP_PilotControl=1;
		mass=200;
	};
	class CUP_PylonPod_1Rnd_KAB250_M: CUP_6Rnd_KAB250_M
	{
		displayName="1x KAB-250L";
		displayNameShort="KAB-250";
		count=1;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"O_BOMB_PYLON",
			"CUP_PylonPod_1Rnd_KAB250_M"
		};
		pylonWeapon="CUP_Vblauncher_KAB250_veh";
		CUP_PilotControl=1;
		mass=256;
	};
	class CUP_PylonPod_CMFlare_Chaff: 168Rnd_CMFlare_Chaff_Magazine
	{
		count=168;
		displayName="Flare-Chaff Launcher";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Flare_launcher\CUP_DL_flare_launcher.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_CM",
			"CUP_CMFlare_Chaff"
		};
		pylonWeapon="CUP_DL_CMFlareLauncher";
		CUP_PilotControl=1;
	};
	class CUP_PylonPod_CMFlare: 120Rnd_CMFlareMagazine
	{
		count=168;
		displayName="Flare Launcher";
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Flare_launcher\CUP_DL_flare_launcher.p3d";
		hardpoints[]=
		{
			"CUP_SUPER_PYLON",
			"CUP_NATO_CM",
			"CUP_CMFlare"
		};
		pylonWeapon="CUP_DL_CMFlareLauncher";
		CUP_PilotControl=1;
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class CUP_ProxyPylonPod_LAU_68D_A: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_LAU_68D_A.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AGM114_Dual: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_dual.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AGM114_Quad: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_quad.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_GAU19_L: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU19A\CUP_Gau19_Left.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_GAU19_R: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU19A\CUP_Gau19_Right.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_GAU19_A: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU19A\CUP_Gau19_Any.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_LAU130A: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_LAU_130A.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AIM9X: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AIM9\CUP_AIM9X.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_CRV7x19: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_CRV7x19.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_CRV7x12: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_CRV7x12.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_M621: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\M621\CUP_M621.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_Igla: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Igla\CUP_Twin_Igla.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_S8: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S8\CUP_S8_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_S8_N: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S8\CUP_S8_n_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_Vikhrx6: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Vikhr\CUP_Vikhrx6_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_S5x7: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_S5x7.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_S5x16: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_UB16.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_S5x32: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\S5\CUP_UB32.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_M230: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\M230\CUP_M230.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_M134: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\M134\CUP_M134_Any.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AT2x2: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AT2\CUP_AT2_rack.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_ATAKA_Empty: ProxyWeapon
	{
		model="\a3\weapons_f\empty";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AT9x2: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AT9\CUP_AT9_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AT6x2: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AT6\CUP_AT6_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_FAB250: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\FAB250\CUP_FAB250_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_Gsh23: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Gsh23\CUP_Gsh23_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_GAU22A: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\GAU22A\CUP_gau22.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_MK82: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_mk82_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_MK82x2: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_mk82_2_rack.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_MK82x3: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\mk82\CUP_TER_9A.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AIM9L_plane: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AIM9\CUP_AIM9_plane.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_ANAAQ_28: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\ANAAQ_28\CUP_ANAAQ_28.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_GBU12_1: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\PavewayII\CUP_gbu12_1_rack.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_GBU12_2: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\PavewayII\CUP_gbu12_2_rack.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_GBU12_3: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\PavewayII\CUP_gbu12_3_rack.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_LAU130A_plane: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_LAU_130A_plane.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_CRV7x19_plane: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Hydra\CUP_CRV7x19_plane.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_ALQ_131_pod: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\ALQ_131\CUP_ALQ_131_pod.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AGM114_drone: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AGM114\CUP_AGM114_dual_drone.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_AIM9_LAU2_Plane: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\AIM9\CUP_AIM9_LAU2_plane.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_KH29L: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Kh29\CUP_Kh_29L.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_FAB250_plane: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\FAB250\CUP_FAB250_plane.p3d";
		simulation="pylonpod";
	};
	class CUP_ProxyPylonPod_MeasurePod: ProxyWeapon
	{
		model="\CUP\Weapons\CUP_Weapons_DynamicLoadout\Test\measure_pod.p3d";
		simulation="pylonpod";
	};
};
class CfgWeapons
{
	class RocketPods;
	class MissileLauncher;
	class CannonCore;
	class CUP_Vmlauncher_FFAR_veh: RocketPods
	{
		magazines[]+=
		{
			"CUP_PylonPod_7Rnd_Rocket_FFAR_M",
			"CUP_PylonPod_19Rnd_Rocket_FFAR_M",
			"CUP_PylonPod_19Rnd_Rocket_FFAR_plane_M"
		};
	};
	class CUP_Vmlauncher_CRV7_veh: CUP_Vmlauncher_FFAR_veh
	{
		magazines[]=
		{
			"CUP_PylonPod_19Rnd_CRV7_FAT_M",
			"CUP_PylonPod_19Rnd_CRV7_HE_M",
			"CUP_PylonPod_19Rnd_CRV7_KEP_M",
			"CUP_PylonPod_12Rnd_CRV7_FAT_M",
			"CUP_PylonPod_12Rnd_CRV7_HE_M",
			"CUP_PylonPod_12Rnd_CRV7_KEP_M",
			"CUP_PylonPod_19Rnd_CRV7_FAT_plane_M",
			"CUP_PylonPod_19Rnd_CRV7_HE_plane_M",
			"CUP_PylonPod_19Rnd_CRV7_KEP_plane_M"
		};
	};
	class rockets_Skyfire;
	class CUP_Vmlauncher_S8_veh: rockets_Skyfire
	{
		magazines[]+=
		{
			"CUP_PylonPod_20Rnd_S8_M",
			"CUP_PylonPod_20Rnd_S8N_M",
			"CUP_PylonPod_20Rnd_S8_plane_M"
		};
	};
	class CUP_Vmlauncher_S8_CCIP_veh: CUP_Vmlauncher_S8_veh
	{
		magazines[]=
		{
			"CUP_40Rnd_S8_M",
			"CUP_80Rnd_S8_M",
			"CUP_PylonPod_20Rnd_S8_CCIP_M",
			"CUP_PylonPod_20Rnd_S8N_CCIP_M"
		};
	};
	class CUP_Vmlauncher_S5_veh: rockets_Skyfire
	{
		magazines[]+=
		{
			"CUP_PylonPod_7Rnd_S5_M",
			"CUP_PylonPod_16Rnd_S5_M",
			"CUP_PylonPod_32Rnd_S5_M",
			"CUP_PylonPod_16Rnd_S5_plane_M",
			"CUP_PylonPod_32Rnd_S5_plane_M"
		};
	};
	class CUP_Vmlauncher_AGM114K_veh: MissileLauncher
	{
		magazines[]+=
		{
			"CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M",
			"CUP_PylonPod_4Rnd_AGM114K_Hellfire_II_M",
			"CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_Plane_M"
		};
	};
	class CUP_Vmlauncher_AGM114L_veh: CUP_Vmlauncher_AGM114K_veh
	{
		magazines[]=
		{
			"CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_M",
			"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
			"CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_Plane_M"
		};
	};
	class CUP_Vmlauncher_AIM9L_veh_4Rnd;
	class CUP_Vmlauncher_AIM9L_veh_1Rnd: CUP_Vmlauncher_AIM9L_veh_4Rnd
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M",
			"CUP_PylonPod_1Rnd_AIM_9L_LAU_Sidewinder_M",
			"CUP_PylonPod_2Rnd_AIM_9L_LAU_Sidewinder_M"
		};
	};
	class CUP_Vmlauncher_AGM65_veh;
	class CUP_Vmlauncher_AGM65pod_veh: CUP_Vmlauncher_AGM65_veh
	{
		magazines[]=
		{
			"CUP_PylonPod_1Rnd_AGM65_Maverick_M",
			"CUP_PylonPod_3Rnd_AGM65_Maverick_M"
		};
	};
	class missiles_Zephyr;
	class CUP_Vmlauncher_AIM120_veh: missiles_Zephyr
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_AIM_120_AMRAAM_M",
			"CUP_PylonPod_1Rnd_AIM_120_AMRAAM_INT_M",
			"CUP_PylonPod_2Rnd_AIM_120_AMRAAM_M"
		};
	};
	class missiles_titan;
	class CUP_Vmlauncher_Igla_twice_veh: missiles_titan
	{
		magazines[]+=
		{
			"CUP_PylonPod_2Rnd_Igla_M"
		};
	};
	class Missiles_Scalpel;
	class CUP_Vmlauncher_AT16_veh: Missiles_Scalpel
	{
		magazines[]+=
		{
			"CUP_PylonPod_6Rnd_Vikhr_M"
		};
	};
	class CUP_Vmlauncher_AT9_veh: Missiles_Scalpel
	{
		magazines[]+=
		{
			"CUP_PylonPod_4Rnd_Ataka_Empty_M",
			"CUP_PylonPod_2Rnd_Ataka_M"
		};
	};
	class CUP_Vmlauncher_AT2_veh: Missiles_Scalpel
	{
		magazines[]+=
		{
			"CUP_PylonPod_2Rnd_AT2_M"
		};
	};
	class CUP_Vmlauncher_AT6_veh: Missiles_Scalpel
	{
		magazines[]+=
		{
			"CUP_PylonPod_2Rnd_AT6_M"
		};
	};
	class CUP_Vmlauncher_Kh29L_veh: Missiles_Scalpel
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_Kh29_M"
		};
	};
	class Missile_AA_03_Plane_CAS_02_F;
	class CUP_Vmlauncher_R73_veh: Missile_AA_03_Plane_CAS_02_F
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_R73_Vympel"
		};
	};
	class CUP_Vhmg_GAU19_veh;
	class CUP_Vhmg_GAU10_L_veh: CUP_Vhmg_GAU19_veh
	{
		magazines[]=
		{
			"CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19L_M"
		};
	};
	class CUP_Vhmg_GAU10_R_veh: CUP_Vhmg_GAU19_veh
	{
		magazines[]=
		{
			"CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19R_M"
		};
	};
	class CUP_Vhmg_GAU10_A_veh: CUP_Vhmg_GAU19_veh
	{
		magazines[]=
		{
			"CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19A_M"
		};
	};
	class CUP_Vlmg_M134_veh;
	class CUP_Vlmg_M134_A_veh: CUP_Vlmg_M134_veh
	{
		magazines[]=
		{
			"CUP_PylonPod_2000Rnd_TE5_Red_Tracer_762x51_M134A_M"
		};
	};
	class CUP_Vacannon_M621_AW159_veh: CannonCore
	{
		magazines[]+=
		{
			"CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M"
		};
	};
	class CUP_Vacannon_M230_veh: CannonCore
	{
		magazines[]+=
		{
			"CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M"
		};
	};
	class CUP_Vacannon_GAU12_veh;
	class CUP_Vacannon_GAU22_veh: CUP_Vacannon_GAU12_veh
	{
		magazines[]+=
		{
			"CUP_PylonWeapon_220Rnd_TE1_Red_Tracer_GAU22_M"
		};
	};
	class CUP_Vacannon_GSh23L_pod_veh: CannonCore
	{
		magazines[]=
		{
			"CUP_PylonPod_250Rnd_TE2_Green_Tracer_GSh23_23mm_APHE_M"
		};
		scope=1;
		displayName="$STR_CUP_DN_GSH23";
		soundContinuous=0;
		aiDispersionCoefY=21;
		aiDispersionCoefX=21;
		magazineReloadTime=5;
		ballisticsComputer=8;
		canLock=0;
		cursor="EmptyCursor";
		cursorAim="mg";
		cursorSize=1;
		initSpeed=820;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="machinegun1";
				positionName="muzzle01";
				directionName="chamber01";
			};
			class SecondEffect
			{
				effectName="machinegun1";
				positionName="muzzle02";
				directionName="chamber02";
			};
		};
		muzzlePos="machinegun_pos";
		muzzleEnd="machinegun_end";
		selectionFireAnim="zasleh";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class Manual: CannonCore
		{
			displayName="$STR_CUP_DN_GSH23";
			autoFire=1;
			class StandardSound
			{
				soundsetshot[]=
				{
					"HMG050_Shot_SoundSet",
					"HMG050_Tail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_01",
					1.5848932,
					1,
					2100
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_02",
					1.5848932,
					1,
					2100
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_03",
					1.5848932,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				closure1[]=
				{
					"A3\Sounds_F\weapons\Closure\sfx10",
					0.63095737,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx11",
					0.63095737,
					1.2,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.02;
			dispersion=0.012;
			initspeed=715;
			multiplier=1;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
		};
		class Close: Manual
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.57999998;
			maxRange=500;
			maxRangeProbab=0.039999999;
		};
		class Short: Close
		{
			burst=10;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.57999998;
			maxRange=800;
			maxRangeProbab=0.039999999;
		};
		class Medium: Close
		{
			burst=7;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.050000001;
			midRange=800;
			midRangeProbab=0.57999998;
			maxRange=1000;
			maxRangeProbab=0.039999999;
		};
		class Far: Close
		{
			burst=4;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=850;
			minRangeProbab=0.050000001;
			midRange=1050;
			midRangeProbab=0.40000001;
			maxRange=1250;
			maxRangeProbab=0.0099999998;
		};
	};
	class CUP_Vblauncher_Mk82_veh: RocketPods
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_Mk82_M",
			"CUP_PylonPod_2Rnd_Mk82_M",
			"CUP_PylonPod_3Rnd_Mk82_M"
		};
		salvo=1;
	};
	class CUP_Vblauncher_GBU12_veh: RocketPods
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_GBU12_M",
			"CUP_PylonPod_2Rnd_GBU12_M",
			"CUP_PylonPod_3Rnd_GBU12_M"
		};
		salvo=1;
	};
	class Mk82BombLauncher;
	class CUP_Vblauncher_Fab250_veh: Mk82BombLauncher
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_FAB250_M",
			"CUP_PylonPod_1Rnd_FAB250_plane_M"
		};
		salvo=1;
	};
	class CUP_Vblauncher_KAB250_veh: RocketPods
	{
		magazines[]+=
		{
			"CUP_PylonPod_1Rnd_KAB250_M"
		};
		salvo=1;
	};
	class Laserdesignator_mounted;
	class CUP_Laserdesignator_mounted: Laserdesignator_mounted
	{
		magazines[]+=
		{
			"CUP_PylonPod_ANAAQ_28",
			"Laserbatteries"
		};
	};
	class CUP_fake_weapon;
	class CUP_ALQ_131_Pseudo: CUP_fake_weapon
	{
		showToPlayer=0;
		magazines[]+=
		{
			"CUP_PylonPod_ALQ_131"
		};
	};
	class CMFlareLauncher;
	class CUP_DL_CMFlareLauncher: CMFlareLauncher
	{
		magazines[]+=
		{
			"CUP_PylonPod_CMFlare_Chaff",
			"CUP_PylonPod_CMFlare"
		};
	};
};
