class CfgPatches
{
	class CUP_Weapons_StaticWeapons
	{
		units[]=
		{
			"CUP_I_ZU23_AAF",
			"CUP_I_DSHKM_AAF",
			"CUP_I_DSHKM_MiniTriPod_AAF",
			"CUP_I_KORD_AAF",
			"CUP_I_KORD_high_AAF",
			"CUP_I_M2StaticMG_AAF",
			"CUP_I_M2StaticMG_MiniTripod_AAF",
			"CUP_I_AGS_AAF",
			"CUP_I_MK19_TriPod_AAF",
			"CUP_I_Metis_AAF",
			"CUP_I_TOW_TriPod_AAF",
			"CUP_I_TOW2_TriPod_AAF",
			"CUP_I_SPG9_AAF",
			"CUP_I_Igla_AA_pod_AAF",
			"CUP_I_Stinger_AA_pod_AAF",
			"CUP_I_RBS70_AA_pod_AAF",
			"CUP_I_2b14_82mm_AAF",
			"CUP_I_M252_AAF",
			"CUP_I_L16A2_AAF",
			"CUP_I_D30_AAF",
			"CUP_I_D30_AT_AAF",
			"CUP_I_M119_AAF",
			"CUP_I_L111A1_AAF",
			"CUP_I_L111A1_MiniTripod_AAF",
			"CUP_I_L134A1_Tripod_AAF",
			"CUP_I_SearchLight_static_AAF",
			"CUP_I_Kornet_AAF",
			"CUP_AGS_base",
			"CUP_D30_base",
			"CUP_DSHKM_base",
			"CUP_DSHKM_MiniTripod_base",
			"CUP_Stinger_AA_pod_Base",
			"CUP_Igla_AA_pod_Base",
			"CUP_KORD_Base",
			"CUP_KORD_High_Base",
			"CUP_Kornet_Base",
			"CUP_M2StaticMG_base",
			"CUP_M2StaticMG_MiniTripod_base",
			"CUP_M119_base",
			"CUP_M252_base",
			"CUP_Metis_Base",
			"CUP_MK19_TriPod_base",
			"CUP_2b14_82mm_Base",
			"CUP_RBS70_Base",
			"CUP_SearchLight_static_base",
			"CUP_SPG9_base",
			"CUP_TOW_TriPod_base",
			"CUP_TOW2_TriPod_base",
			"CUP_ZU23_base",
			"CUP_L111A1_base",
			"CUP_L111A1_MiniTripod_base",
			"CUP_L16A2_base",
			"CUP_L134A1_TriPod_base",
			"CUP_B_M134_A_USMC",
			"CUP_B_M134_A_US_ARMY",
			"CUP_B_M134_A_GER",
			"CUP_B_M134_A_GB",
			"CUP_B_DShkM_Gun_Bag",
			"CUP_B_DShkM_TripodHigh_Bag",
			"CUP_B_DShkM_TripodLow_Bag",
			"CUP_B_Kord_Gun_Bag",
			"CUP_B_Kord_Tripod_Bag",
			"CUP_B_Kord_TripodHigh_Bag",
			"CUP_B_Metis_Gun_Bag",
			"CUP_B_Metis_Tripod_Bag",
			"CUP_B_AGS30_Gun_Bag",
			"CUP_B_AGS30_Tripod_Bag",
			"CUP_B_SPG9_Gun_Bag",
			"CUP_B_SPG9_Tripod_Bag",
			"CUP_B_Podnos_Gun_Bag",
			"CUP_B_Podnos_Bipod_Bag",
			"CUP_B_M2_Gun_Bag",
			"CUP_B_M2_Tripod_Bag",
			"CUP_B_M2_MiniTripod_Bag",
			"CUP_B_Mk19_Gun_Bag",
			"CUP_B_Mk19_Tripod_Bag",
			"CUP_B_Tow_Gun_Bag",
			"CUP_B_TOW_Tripod_Bag",
			"CUP_B_M252_Gun_Bag",
			"CUP_B_M252_Bipod_Bag",
			"CUP_B_SearchLight_Gun_Bag",
			"CUP_B_SearchLight_Tripod_Bag",
			"CUP_B_Kornet_Gun_Bag",
			"CUP_B_Kornet_Tripod_Bag",
			"CUP_B_L111A1_Gun_Bag",
			"CUP_B_L111A1_Tripod_Bag",
			"CUP_B_L111A1_MiniTripod_Bag",
			"CUP_B_L16A2_Gun_Bag",
			"CUP_B_L16A2_Bipod_Bag",
			"CUP_B_L134A1_Gun_Bag",
			"CUP_B_L134A1_Tripod_Bag",
			"CUP_B_TOW2_Tripod_Bag"
		};
		weapons[]=
		{
			"CUP_L111A1_ACOG_Optics"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class EventHandlers;
	};
	class StaticMGWeapon: StaticWeapon
	{
	};
	class StaticATWeapon: StaticWeapon
	{
	};
	class StaticAAWeapon: StaticWeapon
	{
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class StaticSEARCHLight: StaticWeapon
	{
	};
	class CUP_ZU23_base: StaticCannon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		mapSize=2.5;
		cargoAction[]=
		{
			"passenger_inside_2"
		};
		displayname="$STR_CUP_dn_ZU23";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\ZU23\CUP_zu23.p3d";
		class Library
		{
			libTextDesc="ZU-23";
		};
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\ZU23\data\ui\icomap_zu23_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\ZU23\data\ui\zu23_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\ZU23\data\ui\zu23_CA.paa";
		transportSoldier=0;
		hideWeaponsCargo=1;
		memoryPointsGetInCargo="pos_cargo_dir";
		memoryPointsGetInCargoDir="pos_cargo";
		memoryPointsGetInDriver="pos_driver_dir";
		memoryPointsGetInDriverDir="pos_driver";
		maximumLoad=100;
		transportMaxBackpacks=1;
		transportMaxWeapons=1;
		transportMaxMagazines=4;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				minElev=-10;
				maxElev=85;
				initElev=0;
				weapons[]=
				{
					"CUP_Vacannon_2A14_veh"
				};
				magazines[]=
				{
					"CUP_100Rnd_23mm_AZP23_M",
					"CUP_100Rnd_23mm_AZP23_M",
					"CUP_100Rnd_23mm_AZP23_M",
					"CUP_100Rnd_23mm_AZP23_M",
					"CUP_100Rnd_23mm_AZP23_M",
					"CUP_100Rnd_23mm_AZP23_M"
				};
				gunnerAction="CUP_ZU23_Gunner";
				selectionFireAnim="zasleh";
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\2Dscope_RUAA5.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				gunnerForceOptics=0;
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={200,400,600,800,1000,1200,1400,1600,1800,2000};
				discreteDistanceInitIndex=1;
				gunnerCompartments="Compartment1";
				LODOpticsIn=1201;
				LODOpticsOut=1201;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner="pos_cargo";
				memoryPointsGetInGunnerDir="pos_cargo_dir";
				gunnerName="$STR_POSITION_COMMANDER";
				gunnerCompartments="Compartment1";
				proxyIndex=1;
				maxElev=45;
				minElev=-15;
				maxTurn=64;
				minTurn=-65;
				isPersonTurret=1;
				gunnerUsesPilotView=1;
				memorypointgunneroptics="";
				selectionFireAnim="";
				playerPosition=2;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\zu23.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\zu23_damage.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\zu23_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\zu23_base.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\zu23_base_damage.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\zu23_base_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="CUP_Vacannon_2A14_veh";
			};
			class fire_anim
			{
				source="revolving";
				weapon="CUP_Vacannon_2A14_veh";
			};
		};
		ace_cargo_size=10;
		ace_cargo_canLoad=1;
		ace_dragging_canDrag=0;
		ace_dragging_canCarry=0;
	};
	class CUP_DSHKM_base: StaticMGWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		begin1[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\m2hb.wss",
			0.56234097,
			1,
			1100
		};
		begin2[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\m2hb.wss",
			0.56234097,
			1,
			1100
		};
		soundbegin[]=
		{
			"begin1",
			0.5,
			"begin2",
			0.5
		};
		sound[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\dshk_2.wss",
			"db25",
			1,
			1300
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\M60gun_reload.wss",
			"db-30",
			1,
			35
		};
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM\CUP_DShKM_mg.p3d";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM\data\ui\icomap_DShKM_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM\data\ui\dshkm_mg_ca.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM\data\ui\dshkm_mg_ca.paa";
		mapSize=2;
		displayName="$STR_CUP_dn_DShkM";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven_shake";
				gunnerRightHandAnimName="otochlaven_shake";
				gunnerLeftLegAnimName="leg_left";
				gunnerRightLegAnimName="leg_right";
				minElev=-17;
				maxelev=60;
				minturn=-180;
				maxturn=180;
				weapons[]=
				{
					"CUP_Vhmg_DSHKM_veh"
				};
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				magazines[]=
				{
					"CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M"
				};
				gunnerAction="CUP_DShKM_Gunner";
				selectionFireAnim="zasleh";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				ejectDeadGunner=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="CUP_Vhmg_DSHKM_veh";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vhmg_DSHKM_veh";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_DSHKM_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vhmg_DSHKM_veh";
			};
			class muzzle_rot_Dshkm
			{
				source="ammorandom";
				weapon="CUP_Vhmg_DSHKM_veh";
			};
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_DShkM";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\dshk.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\dshk_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_dshk.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_dshk_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_DShkM_Gun_Bag",
				"CUP_B_DShkM_TripodHigh_Bag"
			};
			displayName="";
		};
	};
	class CUP_DSHKM_MiniTripod_base: CUP_DSHKM_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="$STR_CUP_dn_DShkM_MiniTripod";
		model="CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM\CUP_DShKM_mg2.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM\data\ui\dshkm_mg2_ca.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM\data\ui\dshkm_mg2_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-20;
				maxelev=20;
				gunneraction="CUP_LowTripod_Gunner";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				initturn=0;
				maxturn=90;
				memorypointsgetingunner="pos_gunner";
				memorypointsgetingunnerdir="pos_gunner_dir";
				minturn=-90;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\dshk.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\dshk_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_dshk.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_dshk_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_ags.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_ags_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_DShkM_Gun_Bag",
				"CUP_B_DShkM_TripodLow_Bag"
			};
			displayName="";
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_KORD_Base: StaticMGWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\CUP_kord.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\data\ui\icomap_kord_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\data\ui\kord_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\data\ui\kord_CA.paa";
		mapSize=3;
		begin1[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\m2hb.wss",
			0.56234133,
			1,
			1100
		};
		begin2[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\m2hb.wss",
			0.56234133,
			1,
			1100
		};
		soundBegin[]=
		{
			"begin1",
			0.5,
			"begin2",
			0.5
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\M60gun_reload.wss",
			0.031622775,
			1,
			25
		};
		displayName="$STR_CUP_dn_KORD_LOW";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven_shake";
				gunnerRightHandAnimName="otochlaven_shake";
				gunnerLeftLegAnimName="leg_left";
				gunnerRightLegAnimName="leg_right";
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				minElev=-20;
				maxelev=15;
				weapons[]=
				{
					"CUP_Vhmg_KORD_veh"
				};
				magazines[]=
				{
					"CUP_50Rnd_127x108_KORD_M",
					"CUP_50Rnd_127x108_KORD_M",
					"CUP_50Rnd_127x108_KORD_M",
					"CUP_50Rnd_127x108_KORD_M"
				};
				gunnerAction="CUP_LowKORD_Gunner";
				minTurn=-60;
				maxTurn=60;
				initTurn=0;
				optics=1;
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				selectionFireAnim="zasleh";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				ejectDeadGunner=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vhmg_KORD_veh";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_KORD_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vhmg_KORD_veh";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="CUP_Vhmg_KORD_veh";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_body.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_body_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_tripod.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_tripod_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		armorStructural=1;
		armor=30;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Kord_Gun_Bag",
				"CUP_B_Kord_TripodHigh_Bag"
			};
			displayName="";
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_KORD";
		};
	};
	class CUP_KORD_High_Base: CUP_KORD_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_KORD";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\CUP_KORD_6u16sp.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\data\ui\icomap_kord6u16sp_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\data\ui\kord6u16sp_ca.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\KORD\data\ui\kord6u16sp_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-20;
				maxelev=39;
				gunnerAction="CUP_KORD_Gunner";
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_body.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_body_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_6u16sp.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\kord_6u16sp_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		ace_dragging_canCarry=0;
	};
	class CUP_KORD_MiniTripod_Base: CUP_KORD_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Kord_Gun_Bag",
				"CUP_B_Kord_Tripod_Bag"
			};
			displayName="";
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_M2StaticMG_base: StaticMGWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\CUP_m2_mg.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\m2_mg_CA.paa";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\icomap_M2_CA.paa";
		mapSize=3;
		displayName="$STR_CUP_dn_M2_mg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerLeftHandAnimName="otochlaven_shake";
				gunnerRightHandAnimName="otochlaven_shake";
				gunnerLeftLegAnimName="leg_left";
				gunnerRightLegAnimName="leg_right";
				selectionFireAnim="";
				minElev=-20;
				maxElev=46.5;
				minTurn=-180;
				maxTurn=180;
				weapons[]=
				{
					"CUP_Vhmg_M2_static"
				};
				magazines[]=
				{
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M",
					"CUP_100Rnd_TE4_Red_Tracer_127x99_M"
				};
				gunnerAction="CUP_M2_Gunner";
				ejectDeadGunner=1;
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vhmg_M2_static";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_M2_static";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vhmg_M2_static";
			};
			class muzzle_source
			{
				source="reload";
				weapon="CUP_Vhmg_M2_static";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="CUP_Vhmg_M2_static";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_M2_mg";
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_M2_Gun_Bag",
				"CUP_B_M2_Tripod_Bag"
			};
			displayName="";
		};
	};
	class CUP_L111A1_base: CUP_M2StaticMG_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_L111A1_Base";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\CUP_L111A1_mg.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\L111A1_mg_CA.paa";
		CBA_ScriptedOpticClass="CUP_L111A1_ACOG_Optics";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="CBA_ScriptedOptic_zooming";
				maxElev=43;
				weapons[]=
				{
					"CUP_Vhmg_L111A1_veh"
				};
				class OpticsIn
				{
					class ACOG
					{
						opticsDisplayName="ACOG";
						initAngleX=0;
						minAngleX=0;
						maxAngleX=0;
						initAngleY=0;
						minAngleY=0;
						maxAngleY=0;
						initFov=0.0625;
						minFov=0.0625;
						maxFov=0.0625;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\reticle_L111A1_empty.p3d";
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
						camPos="acogview";
					};
					class ADS: ACOG
					{
						opticsDisplayName="ADS";
						initFov=0.44999999;
						minFov=0.44999999;
						maxFov=0.44999999;
						gunnerOpticsModel="\A3\Weapons_F\empty";
						visionMode[]={};
						opticsPPEffects[]={};
						camPos="gunnerview";
					};
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class muzzle_source
			{
				source="reload";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="CUP_Vhmg_L111A1_veh";
			};
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
			speedZoomMaxSpeed=1e+010;
			speedZoomMaxFOV=0;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_baf.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_baf_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_L111A1_Gun_Bag",
				"CUP_B_L111A1_Tripod_Bag"
			};
			displayName="";
		};
	};
	class CUP_M2StaticMG_MiniTripod_base: CUP_M2StaticMG_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_M2HD_MiniTripod";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\m2_mg2_CA.paa";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\CUP_m2_mg2.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven_shake";
				gunnerRightHandAnimName="otochlaven_shake";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				gunneraction="CUP_LowTripod_Gunner";
				initturn=0;
				minElev=-20;
				maxelev=20;
				maxturn=90;
				minturn=-90;
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_M2_Gun_Bag",
				"CUP_B_M2_MiniTripod_Bag"
			};
			displayName="";
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_L111A1_MiniTripod_base: CUP_M2StaticMG_MiniTripod_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_L111A1_MiniTripod_Base";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\CUP_L111A1_mg2.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\L111A1_mg2_CA.paa";
		CBA_ScriptedOpticClass="CUP_L111A1_ACOG_Optics";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="CBA_ScriptedOptic_zooming";
				weapons[]=
				{
					"CUP_Vhmg_L111A1_veh"
				};
				class OpticsIn
				{
					class ACOG
					{
						opticsDisplayName="ACOG";
						initAngleX=0;
						minAngleX=0;
						maxAngleX=0;
						initAngleY=0;
						minAngleY=0;
						maxAngleY=0;
						initFov=0.0625;
						minFov=0.0625;
						maxFov=0.0625;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\reticle_L111A1_empty.p3d";
						opticsPPEffects[]=
						{
							"OpticsCHAbera2",
							"OpticsBlur2"
						};
						camPos="acogview";
					};
					class ADS: ACOG
					{
						opticsDisplayName="ADS";
						initFov=0.44999999;
						minFov=0.44999999;
						maxFov=0.44999999;
						gunnerOpticsModel="\A3\Weapons_F\empty";
						visionMode[]={};
						opticsPPEffects[]={};
						camPos="gunnerview";
					};
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class muzzle_source
			{
				source="reload";
				weapon="CUP_Vhmg_L111A1_veh";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="CUP_Vhmg_L111A1_veh";
			};
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
			speedZoomMaxSpeed=1e+010;
			speedZoomMaxFOV=0;
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_baf.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_baf_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_L111A1_Gun_Bag",
				"CUP_B_L111A1_MiniTripod_Bag"
			};
			displayName="";
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_AGS_base: StaticGrenadeLauncher
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\AGS\CUP_AGS_static.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\AGS\data\ui\icomap_ags_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\AGS\data\ui\ags_static_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\AGS\data\ui\ags_static_CA.paa";
		mapSize=2;
		armor=150;
		sound[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\AGS30_shot1_a.wss",
			"db25",
			1,
			1200
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\M60gun_reload.wss",
			"db-30",
			1,
			35
		};
		displayName="$STR_CUP_dn_AGS30";
		gunnerHasFlares=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-10;
				maxelev=32;
				minTurn=-90;
				maxTurn="+90";
				initTurn=0;
				weapons[]=
				{
					"CUP_Vhmg_AGS30_veh"
				};
				magazines[]=
				{
					"CUP_29Rnd_30mm_AGS30_M",
					"CUP_29Rnd_30mm_AGS30_M",
					"CUP_29Rnd_30mm_AGS30_M",
					"CUP_29Rnd_30mm_AGS30_M",
					"CUP_29Rnd_30mm_AGS30_M",
					"CUP_29Rnd_30mm_AGS30_M"
				};
				gunnerAction="CUP_AGS_Gunner";
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\optika_AGS30.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={50,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=0;
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				ejectDeadGunner=1;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics: ViewOptics
				{
					initFov=0.25;
					minFov=0.25;
					maxFov=0.25;
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\ags30.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\ags30_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_ags.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_ags_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class muzzle_hide
			{
				source="reload";
				weapon="CUP_Vhmg_AGS30_veh";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="CUP_Vhmg_AGS30_veh";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vhmg_AGS30_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vhmg_AGS30_veh";
			};
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_AGS30";
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_AGS30_Gun_Bag",
				"CUP_B_AGS30_Tripod_Bag"
			};
			displayName="";
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_MK19_TriPod_base: StaticGrenadeLauncher
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_MK19_Tripod";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\Mk19\CUP_mk19_stat.p3d";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\Mk19\data\ui\icomap_mk19_stat_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Mk19\data\ui\mk19_stat_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Mk19\data\ui\mk19_stat_CA.paa";
		mapSize=2.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven";
				gunnerRightHandAnimName="otochlaven";
				animationSourceStickX="MainTurret_Inertia";
				animationSourceStickY="MainGun_Inertia";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				minElev=-10;
				maxElev=30;
				minTurn=-90;
				maxTurn=90;
				initTurn=0;
				weapons[]=
				{
					"CUP_Vgmg_MK19_veh"
				};
				magazines[]=
				{
					"CUP_48Rnd_40mm_MK19_M",
					"CUP_48Rnd_40mm_MK19_M",
					"CUP_48Rnd_40mm_MK19_M",
					"CUP_48Rnd_40mm_MK19_M"
				};
				gunnerAction="CUP_LowTripod_Gunner";
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=0;
				ejectDeadGunner=1;
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Mk19_Gun_Bag",
				"CUP_B_Mk19_Tripod_Bag"
			};
			displayName="";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\mk19.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\mk19_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\weaponmount_mk64_paint.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\weaponmount_mk64_paint_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class muzzle_hide
			{
				source="reload";
				weapon="CUP_Vgmg_MK19_veh";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="CUP_Vgmg_MK19_veh";
			};
			class belt_rotation
			{
				source="reload";
				weapon="CUP_Vgmg_MK19_veh";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vgmg_MK19_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vgmg_MK19_veh";
			};
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_L134A1_TriPod_base: CUP_MK19_TriPod_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="L134A1";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\Mk19\CUP_L134A1.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Mk19\data\ui\L134A1_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Mk19\data\ui\L134A1_CA.paa";
		CBA_ScriptedOpticClass="CUP_L111A1_ACOG_Optics";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="CBA_ScriptedOptic_zooming";
				weapons[]=
				{
					"CUP_Vgmg_L134A1_veh"
				};
				magazines[]=
				{
					"CUP_32Rnd_40mm_MK19_M",
					"CUP_32Rnd_40mm_MK19_M",
					"CUP_32Rnd_40mm_MK19_M",
					"CUP_32Rnd_40mm_MK19_M"
				};
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\reticle_L111A1_empty.p3d";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.0625;
					minFov=0.0625;
					maxFov=0.0625;
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\gmg_acog.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\gmg_acog_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_baf.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tripod_baf_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class muzzle_hide
			{
				source="reload";
				weapon="CUP_Vgmg_L134A1_veh";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="CUP_Vgmg_L134A1_veh";
			};
			class belt_rotation
			{
				source="reload";
				weapon="CUP_Vgmg_L134A1_veh";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="CUP_Vgmg_L134A1_veh";
			};
			class Revolving
			{
				source="revolving";
				weapon="CUP_Vgmg_L134A1_veh";
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_L134A1_Gun_Bag",
				"CUP_B_L134A1_Tripod_Bag"
			};
			displayName="";
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_Metis_Base: StaticATWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Metis_Gun_Bag",
				"CUP_B_Metis_Tripod_Bag"
			};
			displayName="";
		};
		scope=0;
		displayname="$STR_CUP_dn_AT13";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\Metis\CUP_metis.p3d";
		class Library
		{
			libTextDesc="$STR_CUP_lib_AT13";
		};
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\Metis\data\ui\icomap_metis_at13_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Metis\data\ui\metis_at13_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Metis\data\ui\metis_at13_CA.paa";
		mapSize=1.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"CUP_Vmlauncher_AT13_single_veh"
				};
				magazines[]=
				{
					"CUP_6Rnd_AT13_M"
				};
				gunnerAction="CUP_Metis_Gunner";
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\2Dscope_Metis.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				minTurn=-45;
				maxTurn="+45";
				initTurn=0;
				minElev=-10;
				maxElev="+40";
				initElev=0;
				ejectDeadGunner=1;
				gunnerForceOptics=0;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.078000002;
					minFov=0.078000002;
					maxFov=0.078000002;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={4,5};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\metis.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\metis_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vmlauncher_AT13_single_veh";
			};
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_TOW_TriPod_base: StaticATWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		mapSize=2.5;
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\TOW\data\ui\tow_static_CA.paa";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\TOW\data\ui\icomap_tow_static_CA.paa";
		displayname="$STR_CUP_dn_tow";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				minElev=-10;
				minturn=-180;
				maxturn=180;
				weapons[]=
				{
					"CUP_Vmlauncher_TOW_single_veh"
				};
				magazines[]=
				{
					"CUP_6Rnd_TOW_HMMWV_M"
				};
				gunnerAction="CUP_D30_Cargo";
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				ejectDeadGunner=1;
				gunnerForceOptics=0;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.2;
					minFov=0.025;
					maxFov=0.2;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={4,5};
				};
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\TOW_TI.p3d";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tow.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tow_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tow_tripod.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\tow_tripod_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\TOW\CUP_TOW_static.p3d";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Tow_Gun_Bag",
				"CUP_B_TOW_Tripod_Bag"
			};
			displayName="";
		};
		ace_dragging_canCarry=0;
	};
	class CUP_TOW2_TriPod_base: CUP_TOW_TriPod_base
	{
		displayname="$STR_CUP_dn_tow2";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"CUP_6Rnd_TOW2_M"
				};
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Tow_Gun_Bag",
				"CUP_B_TOW2_Tripod_Bag"
			};
			displayName="";
		};
	};
	class CUP_SPG9_base: StaticATWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_SPG9";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\SPG9\CUP_spg9.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\SPG9\data\ui\icon_spg9_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\SPG9\data\ui\spg9_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\SPG9\data\ui\spg9_CA.paa";
		mapSize=3;
		nameSound="cannon";
		transportSoldier=0;
		gunnerHasFlares=1;
		class AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="CUP_Vacannon_SPG9_veh";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"CUP_Vacannon_SPG9_veh"
				};
				magazines[]=
				{
					"CUP_16Rnd_PG9_AT_M",
					"CUP_16Rnd_OG9_HE_M"
				};
				gunnerAction="CUP_SPG_Gunner";
				gunnerOpticsModel="\a3\Weapons_F_Tank\acc\reticle_SPG9.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2",
					"TankGunnerOptics1"
				};
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				minTurn=-45;
				maxTurn="+45";
				initTurn=0;
				minElev=-10;
				maxElev="+40";
				initElev=0;
				ejectDeadGunner=1;
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Offroad_01";
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.0625;
					minFov=0.0625;
					maxFov=0.0625;
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\spg9.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\spg9_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\rpg7_rockets.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\rpg7_rockets_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_SPG9";
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_SPG9_Gun_Bag",
				"CUP_B_SPG9_Tripod_Bag"
			};
			displayName="";
		};
		CUP_isMovableStaticWeapon=1;
		CUP_isRotatableStaticWeapon=1;
	};
	class CUP_Igla_AA_pod_Base: StaticAAWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		gunnercansee="2+4+8+32";
		displayName="$STR_CUP_dn_Igla_AA_Pod_East";
		mapsize=2.8;
		model="CUP\Weapons\CUP_Weapons_StaticWeapons\IglaPod\CUP_igla_AA_pod.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\IglaPod\data\ui\icomap_igla_aa_pod_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\IglaPod\data\ui\igla_aa_pod_ca.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\IglaPod\data\ui\igla_aa_pod_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				gunneraction="CUP_AA_Static_Gunner";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				magazines[]=
				{
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M",
					"CUP_2Rnd_Igla_M"
				};
				maxelev=85;
				memorypointsgetingunner="pos_gunner";
				memorypointsgetingunnerdir="pos_gunner_dir";
				minelev=-10;
				weapons[]=
				{
					"CUP_Igla_twice_W"
				};
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.155;
					maxanglex=30;
					maxangley=100;
					maxfov=0.155;
					minanglex=-30;
					minangley=-100;
					minfov=0.046999998;
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="CUP_Igla_twice_W";
			};
			class Missiles_reloadMagazine
			{
				source="reloadMagazine";
				weapon="CUP_Igla_twice_W";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\igla_aa_pod.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\igla_aa_pod_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\igla_aa_pod_roof.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\igla_aa_pod_roof_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\igla_aa_pod_seats.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\igla_aa_pod_seats_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
	};
	class CUP_Stinger_AA_pod_Base: StaticAAWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		gunnercansee="2+4+8+32";
		displayName="$STR_CUP_dn_fim92_aa_pod";
		mapsize=2.8;
		model="CUP\Weapons\CUP_Weapons_StaticWeapons\FIM92Pod\CUP_FIM92_AA_Pod.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\FIM92Pod\data\ui\icomap_FIM92_aa_pod_ca.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\FIM92Pod\data\ui\FIM92_aa_pod_ca.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\FIM92Pod\data\ui\FIM92_aa_pod_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				gunneraction="CUP_AA_Static_Gunner";
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\FIM92Pod\2Dscope_FIM92_Pod.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				magazines[]=
				{
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M",
					"CUP_2Rnd_Stinger_M"
				};
				maxelev=80;
				gunnerReversedGetOut=1;
				memorypointsgetingunner="pos_gunner_dir";
				memorypointsgetingunnerdir="pos_gunner";
				minelev=-10;
				weapons[]=
				{
					"CUP_Vmlauncher_Stinger_twice_veh"
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.155;
					minFov=0.046999998;
					maxFov=0.155;
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="CUP_Vmlauncher_Stinger_twice_veh";
			};
			class Missiles_reloadMagazine
			{
				source="reloadMagazine";
				weapon="CUP_Vmlauncher_Stinger_twice_veh";
			};
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
			speedZoomMaxSpeed=1e+010;
			speedZoomMaxFOV=0;
		};
		class RenderTargets
		{
			class Scope
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="gunnerview_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.054000001;
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\stinger_tripod.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\stinger_tripod_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_Stinger\data\stinger.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\stinger_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
	};
	class CUP_RBS70_Base: StaticAAWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\RBS70\CUP_RBS70.p3d";
		displayName="RBS 70";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\RBS70\data\ui\rbs70_CA.paa";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\RBS70\data\ui\icon_rbs70_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				gunneraction="CUP_AA_Static_Gunner";
				gunneropticseffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				gunneropticsmodel="\CUP\Weapons\CUP_Weapons_StaticWeapons\2d_optics_rbs.p3d";
				magazines[]=
				{
					"CUP_1Rnd_RBS70_M",
					"CUP_1Rnd_RBS70_M",
					"CUP_1Rnd_RBS70_M",
					"CUP_1Rnd_RBS70_M",
					"CUP_1Rnd_RBS70_M",
					"CUP_1Rnd_RBS70_M"
				};
				maxelev=120;
				memorypointsgetingunner="pos_gunner";
				memorypointsgetingunnerdir="pos_gunner_dir";
				minelev=-10;
				weapons[]=
				{
					"CUP_Vmlauncher_RBS70_veh"
				};
				ejectDeadGunner=1;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.155;
					maxanglex=30;
					maxangley=100;
					maxfov=0.155;
					minanglex=-30;
					minangley=-100;
					minfov=0.041669998;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={4,5};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\RBS70.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\RBS70_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
	};
	class CUP_2b14_82mm_Base: StaticMortar
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		displayname="$STR_CUP_dn_2b14";
		class Library
		{
			libTextDesc="$STR_CUP_lib_2b14";
		};
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\CUP_podnos_2b14_82mm.p3d";
		transportSoldier=1;
		cargoAction[]=
		{
			"CUP_D30_Cargo"
		};
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\data\ui\icomap_podnos_2b14_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\data\ui\podnos_2b14_ca.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\data\ui\podnos_2b14_ca.paa";
		mapSize=1.5;
		ejectDeadCargo=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\CUP_MPM_44M_Reticle.p3d";
				class ViewOptics: ViewOptics
				{
					initFov=0.1;
					minFov=0.1;
					maxFov=0.1;
				};
				gunnerAction="CUP_D30_Cargo";
				weapons[]=
				{
					"mortar_82mm"
				};
				magazines[]=
				{
					"8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_Flare_white",
					"8Rnd_82mm_Mo_Smoke_white"
				};
				initElev=0;
				initTurn=0;
				minElev=-10;
				maxElev=30;
				minTurn=-180;
				maxTurn=180;
				elevationMode=1;
				turretInfoType="CUP_gui_optic_artillery";
				cameraDir="look";
				memoryPointGunnerOptics="gunnerview";
				minCamElev=-35;
				maxCamElev=35;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				LODOpticsIn=1200;
				LODOpticsOut=1200;
				ejectDeadGunner=1;
				class ViewGunner: ViewGunner
				{
					initAngleX=-55;
					minAngleX=-95;
					maxAngleX=65;
				};
			};
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		artilleryScanner=1;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\podnos_2b14_82mm.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\podnos_2b14_82mm_damage.rvmat",
				"A3\Static_f\Mortar_01\data\Mortar_01_destruct.rvmat"
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Podnos_Gun_Bag",
				"CUP_B_Podnos_Bipod_Bag"
			};
			displayName="";
		};
	};
	class CUP_M252_base: CUP_2b14_82mm_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayname="$STR_CUP_dn_M252";
		class Library
		{
			libTextDesc="$STR_CUP_lib_M252";
		};
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\M252\CUP_81Mortar.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\M252\data\ui\mortar_m251_CA.paa";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\M252\data\ui\icomap_mortar_m251_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\optika_M119.p3d";
				maxElev=30.200001;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m252_81mm.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m252_81mm_damage.rvmat",
				"A3\Static_f\Mortar_01\data\Mortar_01_destruct.rvmat"
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_M252_Gun_Bag",
				"CUP_B_M252_Bipod_Bag"
			};
			displayName="";
		};
	};
	class CUP_L16A2_base: CUP_M252_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_L16A2_Base";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_L16A2_Gun_Bag",
				"CUP_B_L16A2_Bipod_Bag"
			};
			displayName="";
		};
	};
	class CUP_D30_base: StaticCannon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		accuracy=0.12;
		cost=10000;
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		artilleryScanner=1;
		displayName="$STR_CUP_dn_D30";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\D30\CUP_D30.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\D30\data\ui\icomap_d30_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\D30\data\ui\d30_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\D30\data\ui\d30_CA.paa";
		mapSize=4.5;
		cargoAction[]=
		{
			"CUP_D30_Cargo",
			"CUP_D30_Commander"
		};
		typicalCargo[]=
		{
			"CUP_B_USMC_Soldier",
			"CUP_O_TK_Soldier",
			"CUP_I_TK_GUE_Soldier"
		};
		transportSoldier=2;
		gunnerHasFlares=1;
		memoryPointsGetInCargo="pos_cargo_dir";
		memoryPointsGetInCargoDir="pos_cargo";
		ejectDeadCargo=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				weapons[]=
				{
					"CUP_Vcannon_D30_veh"
				};
				magazines[]=
				{
					"CUP_30Rnd_122mmHE_D30_M",
					"CUP_30Rnd_122mmWP_D30_M",
					"CUP_30Rnd_122mmLASER_D30_M",
					"CUP_30Rnd_122mmSMOKE_D30_M",
					"CUP_30Rnd_122mmILLUM_D30_M"
				};
				gunnerAction="CUP_D30_Gunner";
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\2Dscope_D30.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				gunnerReversedGetOut=1;
				elevationMode=1;
				turretInfoType="CUP_gui_optic_artillery";
				minElev=-9;
				maxelev=80;
				minTurn=-180;
				maxTurn=180;
				maxHorizontalRotSpeed=0.44999999;
				maxVerticalRotSpeed=0.34999999;
				ejectDeadGunner=1;
				class ViewOptics: ViewOptics
				{
					initFov=0.096000001;
					minFov=0.096000001;
					maxFov=0.096000001;
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="CUP_Vcannon_D30_veh";
			};
			class leftT_source
			{
				source="user";
				animPeriod=1;
				initPhase=-2.3;
			};
			class rightT_source: leftT_source
			{
				initPhase=0;
			};
			class leftW_source: leftT_source
			{
				initPhase=-1.7;
			};
			class rightW_source: leftW_source
			{
			};
			class maingunT_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class mainTurretT_source: maingunT_source
			{
			};
			class szpilki_source
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\d30.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\d30_damage.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\d30_destruct.rvmat"
			};
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_D30";
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3"
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=450;
		ace_cargo_size=10;
		ace_cargo_canLoad=1;
		ace_dragging_canDrag=0;
		ace_dragging_canCarry=0;
	};
	class CUP_D30_AT_base: CUP_D30_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_D30_AT";
		availableForSupportTypes[]={};
		artilleryScanner=0;
		sensorPosition="gunnerView";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"CUP_Vcannon_D30AT_veh"
				};
				magazines[]=
				{
					"CUP_30Rnd_122mmAT_D30_M",
					"CUP_30Rnd_122mmHE_D30_M",
					"CUP_30Rnd_122mmWP_D30_M"
				};
				elevationMode=0;
				turretInfoType="RscOptics_Offroad_01";
				maxVerticalRotSpeed=0.15000001;
				memoryPointGunnerOptics="gunnerview2";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="CUP_Vcannon_D30AT_veh";
			};
			class leftT_source
			{
				source="user";
				animPeriod=1;
				initPhase=-2.3;
			};
			class rightT_source: leftT_source
			{
				initPhase=0;
			};
			class leftW_source: leftT_source
			{
				initPhase=-1.7;
			};
			class rightW_source: leftW_source
			{
			};
			class maingunT_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class mainTurretT_source: maingunT_source
			{
			};
			class szpilki_source
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
		};
	};
	class CUP_M119_base: CUP_D30_base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_M119";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\M119\CUP_M119.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\M119\data\ui\M119_CA.paa";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\M119\data\ui\icomap_m119_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\M119\data\ui\M119_CA.paa";
		cargoAction[]=
		{
			"CUP_M119_Cargo",
			"CUP_M119_Commander"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"CUP_Vcannon_M119_veh"
				};
				magazines[]=
				{
					"CUP_30Rnd_105mmHE_M119_M",
					"CUP_30Rnd_105mmWP_M119_M",
					"CUP_30Rnd_105mmLASER_M119_M",
					"CUP_30Rnd_105mmSMOKE_M119_M",
					"CUP_30Rnd_105mmILLUM_M119_M"
				};
				gunnerAction="CUP_M119_Gunner";
				elevationMode=1;
				turretInfoType="CUP_gui_optic_artillery";
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\optika_M119.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				gunnerReversedGetOut=1;
				ejectDeadGunner=1;
				class ViewOptics: ViewOptics
				{
					initFov=0.155;
					minFov=0.155;
					maxFov=0.155;
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="CUP_Vcannon_M119_veh";
			};
			class maingunT_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class mainTurretT_source: maingunT_source
			{
			};
		};
		class Library
		{
			libTextDesc="$STR_CUP_lib_M119";
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m119.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m119_damage.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m119_destruct.rvmat"
			};
		};
	};
	class CUP_SearchLight_static_base: StaticSEARCHLight
	{
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\Searchlight\CUP_searchlight";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Searchlight\data\ui\SearchLight_static_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Searchlight\data\ui\SearchLight_static_CA.paa";
		gunnerHasFlares=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"SEARCHLIGHT"
				};
				minElev=-20;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				gunnerAction="CUP_Searchlight_Gunner";
				armorLights=0.1;
				ejectDeadGunner=1;
				gunnerLeftLegAnimName="leg_left";
				gunnerRightLegAnimName="leg_right";
				class Reflectors
				{
					class main_reflector
					{
						color[]={1000,1000,1000};
						ambient[]={70,75,100};
						position="light";
						direction="lightEnd";
						hitpoint="light";
						selection="light";
						size=1;
						innerAngle=10;
						outerAngle=45;
						coneFadeCoef=10;
						intensity=600;
						useFlare=1;
						daylight=1;
						flareSize=4;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=0;
							quadratic=0.050000001;
							hardLimitStart=400;
							hardLimitEnd=450;
						};
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\searchlight_manual.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\searchlight_manual_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_SearchLight_Gun_Bag",
				"CUP_B_SearchLight_Tripod_Bag"
			};
			displayName="";
		};
		class Attributes
		{
			class EnableLight
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="$STR_action_searchlights_on";
				expression="[{gunner _this action ['SearchLightOn', _this]}, _this] call CBA_fnc_execNextFrame;";
				property="CUP_SearchLight_EnableLight";
			};
		};
	};
	class CUP_Kornet_Base: StaticATWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=0;
		displayname="$STR_CUP_dn_kornet_pod";
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\Kornet\CUP_Kornet.p3d";
		icon="CUP\Weapons\CUP_Weapons_StaticWeapons\Metis\data\ui\icomap_metis_at13_CA.paa";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Kornet\data\ui\Kornet_CA.paa";
		UiPicture="\CUP\Weapons\CUP_Weapons_StaticWeapons\Kornet\data\ui\Kornet_CA.paa";
		mapSize=1.5;
		CBA_ScriptedOpticClass="CUP_Kornet_1PN97_Optics";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="CBA_ScriptedOptic_zooming";
				weapons[]=
				{
					"CUP_Vmlauncher_AT14_single_veh"
				};
				magazines[]=
				{
					"CUP_1Rnd_AT14_HEAT_M",
					"CUP_1Rnd_AT14_HEAT_M",
					"CUP_1Rnd_AT14_HEAT_M",
					"CUP_1Rnd_AT14_HEAT_M",
					"CUP_1Rnd_AT14_HEAT_M",
					"CUP_1Rnd_AT14_HEAT_M"
				};
				gunnerAction="Mortar_Gunner";
				gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\reticle_1PN97_empty.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				minTurn=-180;
				maxTurn="+180";
				initTurn=0;
				minElev=-5;
				maxElev="+20";
				initElev=0;
				ejectDeadGunner=1;
				gunnerForceOptics=0;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX="+30";
						initAngleY=0;
						minAngleY=-100;
						maxAngleY="+100";
						initFov="0.25/12";
						minFov="0.25/12";
						maxFov="0.25/12";
						visionMode[]=
						{
							"Normal",
							"TI"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\reticle_1PN97_empty.p3d";
					};
					class Narrow: Wide
					{
						initFov="0.25/20";
						minFov="0.25/20";
						maxFov="0.25/20";
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\Kornet\data\Kornet.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\Kornet\data\Kornet_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class reloadcaps
			{
				source="reloadMagazine";
				weapon="CUP_Vmlauncher_AT14_single_veh";
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"CUP_B_Kornet_Gun_Bag",
				"CUP_B_Kornet_Tripod_Bag"
			};
			displayName="";
		};
	};
	class CUP_M134_Turret_base: StaticMGWeapon
	{
		features="Randomization: No<br/>Camo selections: 1 - the whole weapon with pod<br/>Script door sources: None<br />Script animations: None<br/>Executed scripts: None<br/>Firing from vehicles: Just the weapon<br/>Slingload: No<br/>Cargo proxy indexes: None";
		author="CUP";
		scope=0;
		displayName="M134 Turret (Base)";
		class Armory
		{
			description="The M134 (Remote) Turret is a static gatling gun used by infantry and support";
		};
		model="\CUP\Weapons\CUP_Weapons_StaticWeapons\M134\CUP_M134.p3d";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan.rvmat",
				"CUP\Weapons\CUP_Weapons_StaticWeapons\data\m2_stojan_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-55;
				maxElev=55;
				body="MainTurret";
				gun="MainGun";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				memoryPointGun="machinegun";
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				weapons[]=
				{
					"CUP_Vlmg_M134_turret"
				};
				magazines[]=
				{
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M",
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
				gunnerAction="CUP_LowTripod_Gunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-55;
					maxAngleX=55;
					initAngleY=0;
					minAngleY=-110;
					maxAngleY=110;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				ejectDeadGunner=1;
			};
		};
		class AnimationSources
		{
			class Gatling
			{
				source="revolving";
				weapon="CUP_Vlmg_M134_turret";
			};
		};
	};
	class CUP_M134_A_base: CUP_M134_Turret_base
	{
		author="CUP";
		displayName="M134A (Base)";
		isUav=1;
		getInRadius=0;
		uavCameraGunnerPos="PiP_pos";
		uavCameraGunnerDir="PiP_dir";
		explosionEffect="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics=1;
				class HitPoints
				{
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="gun";
						visual="zbytek";
						passThrough=0;
						radius=0.2;
					};
					class HitTurret: HitGun
					{
						armor=0.30000001;
						class DestructionEffects
						{
							class Smoke
							{
								simulation="particles";
								type="WeaponWreckSmoke";
								position="destructionEffect";
								intensity=1;
								interval=1;
								lifeTime=5;
							};
						};
					};
				};
			};
		};
	};
	class CUP_B_M134_A_USMC: CUP_M134_A_base
	{
		author="CUP";
		displayName="M134A";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_HMG_01_A_F.jpg";
		scope=2;
		side=1;
		faction="CUP_B_USMC";
		crew="B_UAV_AI";
		forceInGarage=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"CUP_Vlmg_M134_turret"
				};
				magazines[]=
				{
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M",
					"CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M"
				};
			};
		};
	};
	class CUP_B_M134_A_US_ARMY: CUP_B_M134_A_USMC
	{
		author="CUP";
		displayName="M134A";
		scope=2;
		side=1;
		faction="CUP_B_US_ARMY";
	};
	class CUP_B_M134_A_GER: CUP_B_M134_A_USMC
	{
		author="CUP";
		displayName="M134A";
		scope=2;
		side=1;
		faction="CUP_B_GER";
	};
	class CUP_B_M134_A_GB: CUP_B_M134_A_USMC
	{
		author="CUP";
		displayName="M134A";
		scope=2;
		side=1;
		faction="CUP_B_GB";
	};
	class CUP_I_ZU23_AAF: CUP_ZU23_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_DSHKM_AAF: CUP_DSHKM_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_DSHKM_MiniTriPod_AAF: CUP_DSHKM_MiniTripod_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_KORD_AAF: CUP_KORD_MiniTripod_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_KORD_high_AAF: CUP_KORD_High_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_M2StaticMG_AAF: CUP_M2StaticMG_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_M2StaticMG_MiniTripod_AAF: CUP_M2StaticMG_MiniTripod_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_AGS_AAF: CUP_AGS_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_MK19_TriPod_AAF: CUP_MK19_TriPod_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_Metis_AAF: CUP_Metis_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_TOW_TriPod_AAF: CUP_TOW_TriPod_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_TOW2_TriPod_AAF: CUP_TOW2_TriPod_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_SPG9_AAF: CUP_SPG9_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_Igla_AA_pod_AAF: CUP_Igla_AA_pod_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_Stinger_AA_pod_AAF: CUP_Stinger_AA_pod_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_RBS70_AA_pod_AAF: CUP_RBS70_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_2b14_82mm_AAF: CUP_2b14_82mm_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_M252_AAF: CUP_M252_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_L16A2_AAF: CUP_L16A2_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_D30_AAF: CUP_D30_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_D30_AT_AAF: CUP_D30_AT_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_M119_AAF: CUP_M119_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_L111A1_AAF: CUP_L111A1_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_L111A1_MiniTripod_AAF: CUP_L111A1_MiniTripod_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_L134A1_Tripod_AAF: CUP_L134A1_TriPod_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_SearchLight_static_AAF: CUP_SearchLight_static_base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class CUP_I_Kornet_AAF: CUP_Kornet_Base
	{
		scope=1;
		scopeCurator=0;
		side=2;
		faction="IND_F";
		crew="I_Soldier_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class CUP_B_DShkM_Gun_Bag: Weapon_Bag_Base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_DShkM_Gun_Bag";
		_generalMacro="DSHKM_Ins";
		mass=380;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\CUP\Weapons\CUP_Weapons_Backpacks\CUP_StaticX.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\data\staticX_CA.paa";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\data\mapIcon_backpack_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Backpacks\data\static_co.paa"
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
		faction="IND_F";
	};
	class CUP_B_DShkM_TripodHigh_Bag: Weapon_Bag_Base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=420;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_DShkM_TripodHigh_Bag";
		_generalMacro="DSHKM_AAF";
		model="\CUP\Weapons\CUP_Weapons_Backpacks\CUP_StaticY.p3d";
		picture="\CUP\Weapons\CUP_Weapons_StaticWeapons\data\staticY_CA.paa";
		icon="\CUP\Weapons\CUP_Weapons_StaticWeapons\data\mapIcon_backpack_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_Backpacks\data\static_co.paa"
		};
		faction="IND_F";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_DSHKM_AAF";
			base[]=
			{
				"CUP_B_DShkM_Gun_Bag"
			};
		};
	};
	class CUP_B_DShkM_TripodLow_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=300;
		displayName="$STR_CUP_dn_DShkM_TripodLow_Bag";
		class assembleInfo: assembleInfo
		{
			assembleTo="CUP_I_DSHKM_MiniTriPod_AAF";
		};
	};
	class CUP_B_Kord_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_KORD_Gun_Bag";
		_generalMacro="CUP_I_KORD_AAF";
		mass=250;
	};
	class CUP_B_Kord_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=300;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_KORD_TripodLow_Bag";
		_generalMacro="CUP_I_KORD_AAF";
		class assembleInfo: assembleInfo
		{
			assembleTo="CUP_I_KORD_AAF";
			base[]=
			{
				"CUP_B_Kord_Gun_Bag"
			};
		};
	};
	class CUP_B_Kord_TripodHigh_Bag: CUP_B_Kord_Tripod_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=450;
		displayName="$STR_CUP_dn_KORD_Tripod_Bag";
		class assembleInfo: assembleInfo
		{
			assembleTo="CUP_I_KORD_high_AAF";
		};
	};
	class CUP_B_Metis_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_dn_Metis_Gun_Bag";
		_generalMacro="CUP_I_Metis_AAF";
		mass=80;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class CUP_B_Metis_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=70;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_dn_Metis_Tripod_Bag";
		_generalMacro="CUP_I_Metis_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_Metis_AAF";
			base[]=
			{
				"CUP_B_Metis_Gun_Bag"
			};
		};
	};
	class CUP_B_AGS30_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_AGS30_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		_generalMacro="CUP_I_AGS_AAF";
		mass=100;
	};
	class CUP_B_AGS30_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=60;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_AGS30_Tripod_Bag";
		_generalMacro="CUP_I_AGS_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_AGS_AAF";
			base[]=
			{
				"CUP_B_AGS30_Gun_Bag"
			};
		};
	};
	class CUP_B_SPG9_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_SPG9_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		_generalMacro="CUP_I_SPG9_AAF";
		mass=470;
	};
	class CUP_B_SPG9_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=110;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_SPG9_Tripod_Bag";
		_generalMacro="CUP_I_SPG9_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_SPG9_AAF";
			base[]=
			{
				"CUP_B_SPG9_Gun_Bag"
			};
		};
	};
	class CUP_B_Podnos_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_Podnos_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		_generalMacro="CUP_I_2b14_82mm_AAF";
		mass=162;
	};
	class CUP_B_Podnos_Bipod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=139;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_Podnos_Bipod_Bag";
		_generalMacro="CUP_I_2b14_82mm_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_CUP_dn_2b14";
			assembleTo="CUP_I_2b14_82mm_AAF";
			base[]=
			{
				"CUP_B_Podnos_Gun_Bag"
			};
		};
	};
	class CUP_B_M2_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_M2_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		_generalMacro="CUP_I_M2StaticMG_AAF";
		mass=382;
	};
	class CUP_B_M2_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=250;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_M2_Tripod_Bag";
		_generalMacro="CUP_I_M2StaticMG_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_M2StaticMG_AAF";
			base[]=
			{
				"CUP_B_M2_Gun_Bag"
			};
		};
	};
	class CUP_B_M2_MiniTripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=200;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_M2_MiniTripod_Bag";
		_generalMacro="CUP_I_M2StaticMG_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_M2StaticMG_MiniTripod_AAF";
			base[]=
			{
				"CUP_B_M2_Gun_Bag"
			};
		};
	};
	class CUP_B_L111A1_Gun_Bag: CUP_B_M2_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_L111A1_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class CUP_B_L111A1_Tripod_Bag: CUP_B_M2_Tripod_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_L111A1_Tripod_Bag";
		class assembleInfo: assembleInfo
		{
			assembleTo="CUP_I_L111A1_AAF";
			base[]=
			{
				"CUP_B_L111A1_Gun_Bag"
			};
		};
	};
	class CUP_B_L111A1_MiniTripod_Bag: CUP_B_M2_MiniTripod_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_L111A1_MiniTripod_Bag";
		class assembleInfo: assembleInfo
		{
			assembleTo="CUP_I_L111A1_MiniTripod_AAF";
			base[]=
			{
				"CUP_B_L111A1_Gun_Bag"
			};
		};
	};
	class CUP_B_Mk19_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_Mk19_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		_generalMacro="CUP_I_MK19_TriPod_AAF";
		mass=302;
	};
	class CUP_B_Mk19_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=139;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_MK19_Tripod_Bag";
		_generalMacro="CUP_I_MK19_TriPod_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_MK19_TriPod_AAF";
			base[]=
			{
				"CUP_B_Mk19_Gun_Bag"
			};
		};
	};
	class CUP_B_Tow_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_TOW_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		_generalMacro="CUP_I_TOW_TriPod_AAF";
		mass=302;
	};
	class CUP_B_TOW_Tripod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=139;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_TOW_Tripod_Bag";
		_generalMacro="CUP_I_TOW_TriPod_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_TOW_TriPod_AAF";
			base[]=
			{
				"CUP_B_Tow_Gun_Bag"
			};
		};
	};
	class CUP_B_TOW2_Tripod_Bag: CUP_B_TOW_Tripod_Bag
	{
		displayName="$STR_CUP_dn_TOW2_Tripod_Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo="CUP_I_TOW2_TriPod_AAF";
			base[]=
			{
				"CUP_B_Tow_Gun_Bag"
			};
		};
	};
	class CUP_B_M252_Gun_Bag: CUP_B_DShkM_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_M252_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		_generalMacro="CUP_I_M252_AAF";
		mass=162;
	};
	class CUP_B_M252_Bipod_Bag: CUP_B_DShkM_TripodHigh_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=339;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_M252_Bipod_Bag";
		_generalMacro="CUP_I_M252_AAF";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_CUP_dn_M252";
			assembleTo="CUP_I_M252_AAF";
			base[]=
			{
				"CUP_B_M252_Gun_Bag"
			};
		};
	};
	class CUP_B_L16A2_Gun_Bag: CUP_B_M252_Gun_Bag
	{
		displayName="$STR_CUP_dn_L16A2_Gun_Bag";
	};
	class CUP_B_L16A2_Bipod_Bag: CUP_B_M252_Bipod_Bag
	{
		displayName="$STR_CUP_dn_L16A2_Bipod_Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_CUP_dn_L16A2_Base";
			assembleTo="CUP_I_L16A2_AAF";
			base[]=
			{
				"CUP_B_L16A2_Gun_Bag"
			};
		};
	};
	class CUP_B_L134A1_Gun_Bag: CUP_B_Mk19_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_L134A1_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class CUP_B_L134A1_Tripod_Bag: CUP_B_Mk19_Tripod_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_L134A1_Tripod_Bag";
		class assembleInfo: assembleInfo
		{
			assembleTo="CUP_I_L134A1_Tripod_AAF";
			base[]=
			{
				"CUP_B_L134A1_Gun_Bag"
			};
		};
	};
	class CUP_B_SearchLight_Gun_Bag: CUP_B_M2_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_SearchLight_Gun_Bag";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		mass=200;
	};
	class CUP_B_SearchLight_Tripod_Bag: CUP_B_M2_Tripod_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=180;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_SearchLight_Tripod_Bag";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_a3_cfgweapons_searchlight0";
			assembleTo="CUP_I_SearchLight_static_AAF";
			base[]=
			{
				"CUP_B_SearchLight_Gun_Bag"
			};
		};
	};
	class CUP_B_Kornet_Gun_Bag: CUP_B_Metis_Gun_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_Kornet_Gun_Bag";
		mass=100;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class CUP_B_Kornet_Tripod_Bag: CUP_B_Metis_Tripod_Bag
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		mass=80;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="$STR_CUP_dn_Kornet_Tripod_Bag";
		class assembleInfo: assembleInfo
		{
			assembleTo="CUP_I_Kornet_AAF";
			base[]=
			{
				"CUP_B_Kornet_Gun_Bag"
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class CUP_L111A1_ACOG_Optics: ItemCore
	{
		displayName="-";
		scope=1;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[]={3,1};
			maxMagnificationReticleScale[]={4,1};
			reticleDetailTextures[]=
			{
				
				{
					3,
					"\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_TA31\data\acog_ta31f_reticle_ca.paa",
					1
				}
			};
			reticleTextureSize=1;
			bodyTexture="";
			bodyTextureSize=1;
		};
	};
	class CUP_Kornet_1PN97_Optics: ItemCore
	{
		displayName="-";
		scope=1;
		class CBA_ScriptedOptic
		{
			minMagnificationReticleScale[]={11,1};
			maxMagnificationReticleScale[]={20,1};
			reticleDetailTextures[]=
			{
				
				{
					11,
					"\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\data\kornet_reticle_12x_ca.paa",
					1
				},
				
				{
					19,
					"\CUP\Weapons\CUP_Weapons_StaticWeapons\Reticles\data\kornet_reticle_20x_ca.paa",
					1
				}
			};
			reticleTextureSize=1;
			bodyTexture="";
			bodyTextureSize=1;
		};
	};
};
class CfgFunctions
{
	class CUP
	{
		tag="CUP";
		class functions
		{
			class CUP_D30_Pack
			{
				file="\CUP\Weapons\CUP_Weapons_StaticWeapons\Scripts\d30_pack.sqf";
				description="D30 Assembly/Disassembly Anim";
			};
			class staticWeapons_isMovable
			{
				file="\CUP\Weapons\CUP_Weapons_StaticWeapons\Scripts\fn_staticWeapons_isMovable.sqf";
				description="Checks that vehicle is movable static weapon";
			};
			class staticWeapons_isRotatable
			{
				file="\CUP\Weapons\CUP_Weapons_StaticWeapons\Scripts\fn_staticWeapons_isRotatable.sqf";
				description="Checks that vehicle is rotatable static weapon";
			};
			class staticWeapons_move
			{
				file="\CUP\Weapons\CUP_Weapons_StaticWeapons\Scripts\fn_staticWeapons_move.sqf";
				description="Moves static weapon a bit";
			};
			class staticWeapons_rotate
			{
				file="\CUP\Weapons\CUP_Weapons_StaticWeapons\Scripts\fn_staticWeapons_rotate.sqf";
				description="Rotates static weapon a bit";
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class CUP_Weapons_StaticWeapons
	{
		init="call compile preprocessFileLineNumbers '\CUP\Weapons\CUP_Weapons_StaticWeapons\Scripts\XEH_preInit.sqf'";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_ZU23_Gunner="CUP_ZU23_Gunner";
		CUP_DShKM_Gunner="CUP_DShKM_Gunner";
		CUP_LowTripod_Gunner="CUP_LowTripod_Gunner";
		CUP_LowKORD_Gunner="CUP_LowKORD_Gunner";
		CUP_KORD_Gunner="CUP_KORD_Gunner";
		CUP_AGS_Gunner="CUP_AGS_Gunner";
		CUP_SPG_Gunner="CUP_SPG_Gunner";
		CUP_Metis_Gunner="CUP_Metis_Gunner";
		CUP_D30_Commander="CUP_D30_Commander";
		CUP_D30_Gunner="CUP_D30_Gunner";
		CUP_D30_Cargo="CUP_D30_Cargo";
		CUP_AA_Static_Gunner="CUP_AA_Static_Gunner";
		CUP_M119_Commander="CUP_M119_Commander";
		CUP_M119_Gunner="CUP_M119_Gunner";
		CUP_M119_Cargo="CUP_M119_Cargo";
		CUP_M2_Gunner="CUP_M2_Gunner";
		CUP_Searchlight_Gunner="CUP_Searchlight_Gunner";
		CUP_NestMG_Gunner="CUP_NestMG_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_CUP_ZU23_Gunner: Crew
		{
			actions="DeadActions";
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\KIA_Hilux_Cargo01.rtm";
			speed=0.5;
			looped=0;
			terminal=1;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
			soundEnabled=0;
		};
		class CUP_ZU23_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\Hilux_Cargo01.rtm";
			interpolateTo[]=
			{
				"KIA_CUP_ZU23_Gunner",
				1
			};
		};
		class CUP_DShKM_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\DShKM_Gunner.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKCurve[]={1};
			righHandIKBeg=1;
			righHandIKEnd=1;
		};
		class CUP_LowTripod_Gunner: CUP_DShKM_Gunner
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\LowTripod_Gunner.rtm";
		};
		class CUP_LowKORD_Gunner: CUP_DShKM_Gunner
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\sittingGunner.rtm";
			interpolateTo[]=
			{
				"CUP_KIA_SPG_Gunner",
				1
			};
		};
		class CUP_KORD_Gunner: CUP_DShKM_Gunner
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\standingGunner.rtm";
		};
		class CUP_AGS_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\AGS_Gunner.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_KIA_SPG_Gunner: DefaultDie
		{
			actions="DeadActions";
			file="\A3\cargoposes_F\Anim\gunner_static_low01_KIA.rtm";
			speed=0.5;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class CUP_SPG_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\SPG9_gunner.rtm";
			interpolateTo[]=
			{
				"CUP_KIA_SPG_Gunner",
				1
			};
		};
		class CUP_Metis_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\Metis_Gunner.rtm";
			connectTo[]=
			{
				"CUP_KIA_SPG_Gunner",
				0.1
			};
		};
		class CUP_KIA_AA_Static_Gunner: DefaultDie
		{
			actions="DeadActions";
			file="\CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\CUP_KIA_AA_Static_Gunner.rtm";
			speed=1;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class CUP_AA_Static_Gunner: Crew
		{
			file="\CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\CUP_AA_Static_Gunner.rtm";
			speed=0.30000001;
			interpolateTo[]=
			{
				"CUP_KIA_AA_Static_Gunner",
				1
			};
		};
		class CUP_D30_Commander: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\D30_Commander.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_D30_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\D30_Gunner.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_D30_Cargo: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\D30_Cargo.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_M119_Commander: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\M119_Commander.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_M119_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\M119_Gunner.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_M119_Cargo: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\M119_Cargo.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_M2_Gunner: CUP_DShKM_Gunner
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\M2_Gunner.rtm";
		};
		class CUP_Searchlight_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\searchlight_Gunner.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class CUP_NestMG_Gunner: Crew
		{
			file="CUP\Weapons\CUP_Weapons_StaticWeapons\Anims\nestMG_Gunner.rtm";
			connectTo[]=
			{
				"Static_Dead",
				1
			};
		};
	};
};
class RscText;
class HScrollbar;
class VScrollbar;
class RscControlsGroup;
class RscInGameUI
{
	class RscUnitInfo;
	class CUP_gui_optic_artillery: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="((safezoneX + safezoneW) - (16.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW /safezoneH) min 1.2) / 40))";
			y="0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w="17 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h="17 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class CA_Elev: RscText
				{
					idc=175;
					style=1;
					sizeEx="0.032*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="PuristaBold";
					text="-80.5";
					x="-2 *   (0.01875 * SafezoneH)";
					y="-0.4 *   (0.025 * SafezoneH)";
					w="13 *   (0.01875 * SafezoneH)";
					h="13 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
};
