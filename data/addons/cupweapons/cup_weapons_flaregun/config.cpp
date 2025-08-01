class CfgPatches
{
	class CUP_Weapons_Flaregun
	{
		units[]={};
		weapons[]=
		{
			"CUP_hgun_FlareGun"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
		magazines[]=
		{
			"CUP_FlareWhite_265_M",
			"CUP_FlareRed_265_M",
			"CUP_FlareGreen_265_M",
			"CUP_FlareYellow_265_M",
			"CUP_IllumFlareWhite_265_M",
			"CUP_IllumFlareRed_265_M",
			"CUP_IllumFlareGreen_265_M",
			"CUP_IllumFlareYellow_265_M",
			"CUP_StarClusterWhite_265_M",
			"CUP_StarClusterRed_265_M",
			"CUP_StarClusterGreen_265_M",
			"CUP_StarClusterYellow_265_M"
		};
		ammo[]=
		{
			"CUP_F_265mm_Star_White",
			"CUP_F_265mm_Star_Green",
			"CUP_F_265mm_Star_Red",
			"CUP_F_265mm_Star_Yellow",
			"CUP_F_265mm_StarCluster_White",
			"CUP_F_265mm_StarCluster_Red",
			"CUP_F_265mm_StarCluster_Green",
			"CUP_F_265mm_StarCluster_Yellow",
			"CUP_Sub_F_265mm_StarCluster_White",
			"CUP_Sub_F_265mm_StarCluster_Red",
			"CUP_Sub_F_265mm_StarCluster_Green",
			"CUP_Sub_F_265mm_StarCluster_Yellow"
		};
	};
};
class Mode_SemiAuto;
class CfgAmmo
{
	class F_40mm_White;
	class CUP_F_265mm_Star_White: F_40mm_White
	{
		affectedByWind=1;
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[]={0.5,0.5,0.5,0.5};
		useFlare=1;
		deflecting=30;
		smokeColor[]={1,1,1,0.5};
		effectFlare="CounterMeasureFlare";
		brightness=50;
		intensity=4000000;
		size=1;
		triggerTime=3;
		triggerSpeedCoef=1;
		timeToLive=30;
	};
	class CUP_F_265mm_Star_Green: CUP_F_265mm_Star_White
	{
		lightColor[]={0.2,0.5,0.2,0.5};
		smokeColor[]={1,1,1,0.5};
	};
	class CUP_F_265mm_Star_Red: CUP_F_265mm_Star_White
	{
		lightColor[]={0.5,0.2,0.2,0.5};
		smokeColor[]={1,1,1,0.5};
	};
	class CUP_F_265mm_Star_Yellow: CUP_F_265mm_Star_White
	{
		lightColor[]={0.5,0.5,0.2,0.5};
		smokeColor[]={1,1,1,0.5};
	};
	class CUP_F_265mm_StarCluster_White: CUP_F_265mm_Star_White
	{
		affectedByWind=1;
		lightColor[]={0.5,0.5,0.5,0.5};
		smokeColor[]={1,1,1,0.5};
		size=1;
		triggerTime=0.5;
		triggerSpeedCoef=1;
		timeToLive=15;
	};
	class CUP_F_265mm_StarCluster_Red: CUP_F_265mm_Star_White
	{
		affectedByWind=1;
		lightColor[]={0.5,0.2,0.2,0.5};
		smokeColor[]={1,1,1,0.5};
		size=1;
		triggerTime=0.5;
		triggerSpeedCoef=1;
		timeToLive=15;
	};
	class CUP_F_265mm_StarCluster_Green: CUP_F_265mm_Star_White
	{
		affectedByWind=1;
		lightColor[]={0.2,0.5,0.2,0.5};
		smokeColor[]={1,1,1,0.5};
		size=1;
		triggerTime=0.5;
		triggerSpeedCoef=1;
		timeToLive=15;
	};
	class CUP_F_265mm_StarCluster_Yellow: CUP_F_265mm_Star_White
	{
		affectedByWind=1;
		lightColor[]={0.5,0.5,0.2,0.5};
		smokeColor[]={1,1,1,0.5};
		size=1;
		triggerTime=0.5;
		triggerSpeedCoef=1;
		timeToLive=15;
	};
	class CUP_Sub_F_265mm_StarCluster_White: F_40mm_White
	{
		affectedByWind=1;
		simulation="shotSubmunitions";
		hit=0;
		submunitionAmmo="CUP_F_265mm_StarCluster_White";
		triggerTime=3;
		submunitionConeType[]=
		{
			"poissondisccenter",
			3
		};
		submunitionConeAngle=35;
		airFriction=-0.021600001;
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		tracerStartTime=0.1;
		tracerScale=5;
	};
	class CUP_Sub_F_265mm_StarCluster_Red: F_40mm_White
	{
		affectedByWind=1;
		simulation="shotSubmunitions";
		hit=0;
		submunitionAmmo="CUP_F_265mm_StarCluster_Red";
		triggerTime=3;
		submunitionConeType[]=
		{
			"poissondisccenter",
			3
		};
		submunitionConeAngle=35;
		airFriction=-0.021600001;
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		tracerStartTime=0.1;
		tracerScale=5;
	};
	class CUP_Sub_F_265mm_StarCluster_Green: F_40mm_White
	{
		affectedByWind=1;
		simulation="shotSubmunitions";
		hit=0;
		submunitionAmmo="CUP_F_265mm_StarCluster_Green";
		triggerTime=3;
		submunitionConeType[]=
		{
			"poissondisccenter",
			3
		};
		submunitionConeAngle=35;
		airFriction=-0.021600001;
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		tracerStartTime=0.1;
		tracerScale=5;
	};
	class CUP_Sub_F_265mm_StarCluster_Yellow: F_40mm_White
	{
		affectedByWind=1;
		simulation="shotSubmunitions";
		hit=0;
		submunitionAmmo="CUP_F_265mm_StarCluster_Yellow";
		triggerTime=3;
		submunitionConeType[]=
		{
			"poissondisccenter",
			3
		};
		submunitionConeAngle=35;
		airFriction=-0.021600001;
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		tracerStartTime=0.1;
		tracerScale=5;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CUP_FlareWhite_265_M: CA_Magazine
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		type=16;
		displayName="26.5mm Flare White";
		descriptionShort="Type: Flare &lt;br/&gt;Rounds: 1 &lt;br/&gt;Used in: Flare Pistol";
		displayNameShort="Flare White";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_flare_white_ca.paa";
		ammo="F_40mm_White";
		initSpeed=160;
		count=1;
		nameSound="grenadelauncher";
		mass=4;
		model="\CUP\Weapons\CUP_Weapons_Flaregun\CUP_flare_mag.p3d";
	};
	class CUP_FlareRed_265_M: CUP_FlareWhite_265_M
	{
		displayName="26.5mm Flare Red";
		displayNameShort="Flare Red";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_flare_red_ca.paa";
		ammo="F_40mm_Red";
	};
	class CUP_FlareGreen_265_M: CUP_FlareWhite_265_M
	{
		displayName="26.5mm Flare Green";
		displayNameShort="Flare Green";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_flare_green_ca.paa";
		ammo="F_40mm_Green";
	};
	class CUP_FlareYellow_265_M: CUP_FlareWhite_265_M
	{
		displayName="26.5mm Flare Yellow";
		displayNameShort="Flare Yellow";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_flare_yellow_ca.paa";
		ammo="F_40mm_Yellow";
	};
	class CUP_IllumFlareWhite_265_M: CUP_FlareWhite_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Illumination White";
		displayNameShort="Illumination White";
		ammo="CUP_F_265mm_Star_White";
		mass=4;
	};
	class CUP_IllumFlareRed_265_M: CUP_FlareRed_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Illumination Red";
		displayNameShort="Illumination Red";
		ammo="CUP_F_265mm_Star_Red";
		mass=4;
	};
	class CUP_IllumFlareGreen_265_M: CUP_FlareGreen_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Illumination Green";
		displayNameShort="Illumination Green";
		ammo="CUP_F_265mm_Star_Green";
		mass=4;
	};
	class CUP_IllumFlareYellow_265_M: CUP_FlareYellow_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Illumination Yellow";
		displayNameShort="Illumination Yellow";
		ammo="CUP_F_265mm_Star_Yellow";
		mass=4;
	};
	class CUP_StarClusterWhite_265_M: CUP_FlareWhite_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Star Cluster White";
		descriptionShort="Star Cluster White";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_star_white_ca.paa";
		ammo="CUP_Sub_F_265mm_StarCluster_White";
	};
	class CUP_StarClusterRed_265_M: CUP_FlareRed_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Star Cluster Red";
		descriptionShort="Star Cluster Red";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_star_red_ca.paa";
		ammo="CUP_Sub_F_265mm_StarCluster_Red";
	};
	class CUP_StarClusterGreen_265_M: CUP_FlareGreen_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Star Cluster Green";
		descriptionShort="Star Cluster Green";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_star_Green_ca.paa";
		ammo="CUP_Sub_F_265mm_StarCluster_Green";
	};
	class CUP_StarClusterYellow_265_M: CUP_FlareYellow_265_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="26.5mm Star Cluster Yellow";
		descriptionShort="Star Cluster Yellow";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\mag_star_yellow_ca.paa";
		ammo="CUP_Sub_F_265mm_StarCluster_Yellow";
	};
};
class CfgWeapons
{
	class Pistol_Base_F;
	class CUP_hgun_FlareGun: Pistol_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_Flaregun\CUP_flaregun.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Flaregun\data\ui\gear_flaregun_x_ca.paa";
		magazines[]=
		{
			"CUP_FlareWhite_265_M",
			"CUP_FlareRed_265_M",
			"CUP_FlareGreen_265_M",
			"CUP_FlareYellow_265_M",
			"CUP_IllumFlareWhite_265_M",
			"CUP_IllumFlareRed_265_M",
			"CUP_IllumFlareGreen_265_M",
			"CUP_IllumFlareYellow_265_M",
			"CUP_StarClusterWhite_265_M",
			"CUP_StarClusterRed_265_M",
			"CUP_StarClusterGreen_265_M",
			"CUP_StarClusterYellow_265_M"
		};
		displayname="Flare Pistol";
		descriptionShort="Flare Gun";
		class Library
		{
			libTextDesc="The Heckler & Koch P2A1 is a German army flare gun";
		};
		dexterity=1.8;
		inertia=0.2;
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.25118864,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"CUP_GrenadeLaunchers_Shot_SoundSet",
					"UGL_Tail_SoundSet",
					"UGL_InteriorTail_SoundSet"
				};
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\sfx\g_launcher",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		class WeaponSlotsInfo
		{
			mass=20.799999;
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		autoReload=0;
		autoAimEnabled=0;
		reloadAction="GestureReloadPistol";
		reloadMagazineSound[]=
		{
			"A3\sounds_f\Weapons\grenades\ugl_reload2",
			1,
			1,
			10
		};
		drySound[]=
		{
			"A3\sounds_f\Weapons\other\sfx5",
			0.56234133,
			1,
			10
		};
		ffMagnitude=0.1;
		ffFrequency=1;
		ffCount=1;
		dispersion=0.0070000002;
		aiDispersionCoefY=6;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		cartridgePos="";
		cartridgeVel="";
		minRange=30;
		minRangeProbab=0.1;
		midRange=200;
		midRangeProbab=0.69999999;
		maxRange=400;
		maxRangeProbab=0.050000001;
		recoil="recoil_mmg_02";
	};
};
