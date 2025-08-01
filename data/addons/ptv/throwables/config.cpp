
#define _ARMA_

class cfgPatches
{
	class ptv_Throwables
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 2.0;
		requiredAddons[] = {"A3_Weapons_F","ptv_weapons"};
		version = 1;
		author = "Project True Viking";
		authorUrl = "http://www.PTV.com//";
	};
};
class cfgFunctions
{
	class ptv
	{
		class Init
		{
			class initThrowables
			{
				description = "start all throwables functions";
				file = "\ptv_throwables\functions\fn_initThrowables.sqf";
				postInit = 1;
			};
		};
		class Throwables
		{
			class handleGrenadeSpecial
			{
				description = "bounding frag grenade";
				file = "\ptv_throwables\functions\fn_handleGrenadeSpecial.sqf";
			};
		};
	};
};
class cfgAmmo
{
	class GrenadeHand;
	class mini_Grenade;
	class APERSBoundingMine_Range_Ammo;
	class ptv_ammo_frag01: GrenadeHand
	{
		model = "\ptv_throwables\ammo\ptv_frag01";
		airFriction = -0.0005;
		allowAgainstInfantry = 1;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		artilleryLock = 0;
		audibleFire = 0.05;
		caliber = 1;
		cartridge = "";
		cmImmunity = 1;
		cost = 40;
		CraterEffects = "GrenadeCrater";
		craterShape = "";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		deflecting = 15;
		deflectionSlowDown = 0.8;
		directionalExplosion = 0;
		effectFlare = "FlareShell";
		effectFly = "";
		effectsFire = "CannonFire";
		effectsMissile = "ExplosionEffects";
		effectsMissileInit = "";
		effectsSmoke = "SmokeShellWhite";
		explosionAngle = 60;
		explosionDir = "explosionDir";
		explosionEffects = "GrenadeExplosion";
		explosionEffectsDir = "explosionDir";
		explosionEffectsRadius = 5;
		explosionForceCoef = "1.0f";
		explosionPos = "explosionPos";
		explosionSoundEffect = "DefaultExplosion";
		explosionTime = 3.8;
		explosionType = "explosive";
		explosive = 1;
		fuseDistance = 0;
		grenadeBurningSound[] = {};
		grenadeFireSound[] = {};
		hit = 10;
		shadow = 1;
		shootDistraction = 0.15;
		sideAirFriction = 1;
		simulation = "shotGrenade";
		simulationStep = 0.05;
		suppressionRadiusHit = 30;
		suppressionRadiusBulletClose = -1;
		typicalspeed = 18;
		thrust = 210;
		thrustTime = 1.5;
		timeToLive = 10;
		underwaterHitRangeCoef = "1.0f";
		visibleFire = 0.5;
		visibleFireTime = 1;
		indirectHit = 25;
		indirectHitRange = 8;
		waterEffectOffset = 0.45;
	};
	class ptv_ammo_frag02: mini_Grenade
	{
		model = "\ptv_throwables\ammo\ptv_frag02";
		airFriction = -0.0005;
		allowAgainstInfantry = 1;
		artilleryCharge = 1;
		artilleryDispersion = 1;
		artilleryLock = 0;
		audibleFire = 0.05;
		caliber = 1;
		cartridge = "";
		cmImmunity = 1;
		cost = 40;
		CraterEffects = "GrenadeCrater";
		craterShape = "";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		deflecting = 30;
		deflectionSlowDown = 0.8;
		directionalExplosion = 0;
		explosionAngle = 60;
		explosionDir = "explosionDir";
		explosionEffects = "GrenadeExplosion";
		explosionEffectsDir = "explosionDir";
		explosionEffectsRadius = 5;
		explosionForceCoef = "1.0f";
		explosionPos = "explosionPos";
		explosionSoundEffect = "DefaultExplosion";
		explosionTime = 3.8;
		explosionType = "explosive";
		explosive = 1;
		fuseDistance = 0;
		grenadeBurningSound[] = {};
		grenadeFireSound[] = {};
		hit = 7;
		shadow = 1;
		shootDistraction = 0.15;
		sideAirFriction = 1;
		simulation = "shotGrenade";
		simulationStep = 0.05;
		suppressionRadiusHit = 30;
		suppressionRadiusBulletClose = -1;
		typicalspeed = 18;
		thrust = 210;
		thrustTime = 1.5;
		timeToLive = 10;
		underwaterHitRangeCoef = "1.0f";
		visibleFire = 0.5;
		visibleFireTime = 1;
		indirectHit = 20;
		indirectHitRange = 5;
		waterEffectOffset = 0.45;
	};
	class ptv_ammo_flash01: GrenadeHand
	{
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 8;
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		explosive = 0;
		explosionTime = 1.5;
		timeToLive = 60;
		cost = 10;
		model = "\ptv_throwables\ammo\ptv_flash01";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",1,1,500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",1,1,500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",1,1,500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",1,1,500};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
	};
	class SmokeShellYellow;
	class SmokeShell;
	class SmokeShellGreen;
	class SmokeShellRed;
	class ptv_ammo_smoke01: SmokeShell
	{
		model = "\ptv_throwables\ammo\ptv_smoke01";
	};
	class ptv_ammo_smoke01_Blue: ptv_ammo_smoke01
	{
		model = "\ptv_throwables\ammo\ptv_smoke01_Blue";
		effectsSmoke = "SmokeShellBlueEffect";
		smokeColor[] = {0.1183,0.1867,1,1};
	};
	class ptv_ammo_smoke01_Green: ptv_ammo_smoke01
	{
		model = "\ptv_throwables\ammo\ptv_smoke01_Green";
		effectsSmoke = "SmokeShellGreenEffect";
		smokeColor[] = {0.2125,0.6258,0.4891,1};
	};
	class ptv_ammo_smoke01_Orange: ptv_ammo_smoke01
	{
		model = "\ptv_throwables\ammo\ptv_smoke01_Orange";
		effectsSmoke = "SmokeShellOrangeEffect";
		smokeColor[] = {0.6697,0.2275,0.10053,1};
	};
	class ptv_ammo_smoke01_Purple: ptv_ammo_smoke01
	{
		model = "\ptv_throwables\ammo\ptv_smoke01_Purple";
		effectsSmoke = "SmokeShellPurpleEffect";
		smokeColor[] = {0.4341,0.1388,0.4144,1};
	};
	class ptv_ammo_smoke01_Red: ptv_ammo_smoke01
	{
		model = "\ptv_throwables\ammo\ptv_smoke01_Red";
		effectsSmoke = "SmokeShellRedEffect";
		smokeColor[] = {0.8438,0.1383,0.1353,1};
	};
	class ptv_ammo_smoke01_Yellow: ptv_ammo_smoke01
	{
		model = "\ptv_throwables\ammo\ptv_smoke01_Yellow";
		effectsSmoke = "SmokeShellYellowEffect";
		smokeColor[] = {0.9883,0.8606,0.0719,1};
	};
	class ptv_ammo_smoke02: SmokeShell
	{
		model = "\ptv_throwables\ammo\ptv_smoke02";
	};
	class ptv_ammo_frag03: GrenadeHand
	{
		model = "\ptv_throwables\ammo\ptv_frag03";
		submunitionAmmo[] = {"ptv_ammo_frag03_bounding","ptv_ammo_frag_03_bounding_bottom"};
		explosionTime = 1e+10;
		timeToLive = 1e+10;
	};
	class ptv_ammo_frag03_bounding: APERSBoundingMine_Range_Ammo
	{
		scope = 2;
		cost = 40;
		hit = 10;
		indirecthit = 25;
		indirecthitrange = 8;
		explosionEffectsRadius = 5;
		explostionForeceCoef = 1;
		craterEffects = "GrenadeCrater";
		model = "\ptv_throwables\ammo\ptv_frag03_top";
		mineModelDisabled = "\ptv_throwables\ammo\ptv_frag03_top";
		soundActivation[] = {};
		soundDeactivation[] = {};
		soundTrigger[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",3.16228,1,1300};
	};
	class ptv_ammo_frag_03_bounding_bottom: ptv_ammo_frag03
	{
		timeToLive = 20;
		model = "\ptv_throwables\ammo\ptv_frag03_bottom";
	};
};
class cfgMagazines
{
	class HandGrenade;
	class ptv_mag_flash01: HandGrenade
	{
		scope = 1;
		author = "Project True Viking";
		ammo = "ptv_ammo_flash01";
		displayName = "BG-M/86 Flashbang";
		displayNameShort = "M/86 Flash";
		descriptionshort = "Type: Stun Grenade<br />Rounds: 1<br />Used in: Hand";
		picture = "\ptv_throwables\Data\UI\m_flash01_ca.paa";
		model = "\ptv_throwables\ammo\ptv_flash01";
		mass = 8.25;
	};
	class ptv_mag_frag01: HandGrenade
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_frag01";
		displayName = "FG-M/56 Offensive Frag";
		displayNameShort = "M/56 Offensive";
		descriptionshort = "Type: Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
		mass = 12.76;
		model = "\ptv_throwables\ammo\ptv_frag01";
		picture = "\ptv_throwables\Data\UI\m_frag01_ca.paa";
	};
	class ptv_mag_frag02: HandGrenade
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_frag02";
		displayName = "FG-M/95 Defensive Frag";
		displayNameShort = "M/95 Defensive";
		descriptionshort = "Type: Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
		mass = 6.2;
		model = "\ptv_throwables\ammo\ptv_frag02";
		picture = "\ptv_throwables\Data\UI\m_frag02_ca.paa";
	};
	class ptv_mag_frag03: HandGrenade
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_frag03";
		displayName = "FG-M/17 Airburst Frag";
		displayNameShort = "M/17 Airburst";
		descriptionshort = "Type: Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
		mass = 13.2;
		model = "\ptv_throwables\ammo\ptv_frag03";
		picture = "\ptv_throwables\Data\UI\m_frag03_ca.paa";
	};
	class ptv_mag_smoke01: HandGrenade
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke01";
		displayName = "RG-M/60 Marker Smoke (White)";
		displayNameShort = "M/60 (White)";
		descriptionshort = "Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		picture = "\ptv_throwables\Data\UI\m_smoke01_ca.paa";
		model = "\ptv_throwables\ammo\ptv_smoke01";
		mass = 11.88;
	};
	class ptv_mag_smoke01_Blue: ptv_mag_smoke01
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke01_Blue";
		descriptionShort = "Type: Smoke Grenade - Blue<br /> Rounds: 1<br />Used in: Hand";
		displayName = "RG-M/60 Marker Smoke (Blue)";
		displayNameShort = "M/60 (Blue)";
		picture = "\ptv_throwables\Data\UI\m_smoke01_blue_ca.paa";
	};
	class ptv_mag_smoke01_Green: ptv_mag_smoke01
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke01_Green";
		descriptionShort = "Type: Smoke Grenade - Green<br /> Rounds: 1<br />Used in: Hand";
		displayName = "RG-M/60 Marker Smoke (Green)";
		displayNameShort = "M/60 (Green)";
		picture = "\ptv_throwables\Data\UI\m_smoke01_green_ca.paa";
	};
	class ptv_mag_smoke01_Orange: ptv_mag_smoke01
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke01_Orange";
		descriptionShort = "Type: Smoke Grenade - Orange<br /> Rounds: 1<br />Used in: Hand";
		displayName = "RG-M/60 Marker Smoke (Orange)";
		displayNameShort = "M/60 (Orange)";
		picture = "\ptv_throwables\Data\UI\m_smoke01_orange_ca.paa";
	};
	class ptv_mag_smoke01_Purple: ptv_mag_smoke01
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke01_Purple";
		descriptionShort = "Type: Smoke Grenade - Purple<br /> Rounds: 1<br />Used in: Hand";
		displayName = "RG-M/60 Marker Smoke (Purple)";
		displayNameShort = "M/60 (Purple)";
		picture = "\ptv_throwables\Data\UI\m_smoke01_purple_ca.paa";
	};
	class ptv_mag_smoke01_Red: ptv_mag_smoke01
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke01_Red";
		descriptionShort = "Type: Smoke Grenade - Red<br /> Rounds: 1<br />Used in: Hand";
		displayName = "RG-M/60 Marker Smoke (Red)";
		displayNameShort = "M/60 (Red)";
		picture = "\ptv_throwables\Data\UI\m_smoke01_red_ca.paa";
	};
	class ptv_mag_smoke01_Yellow: ptv_mag_smoke01
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke01_Yellow";
		descriptionShort = "Type: Smoke Grenade - Yellow<br /> Rounds: 1<br />Used in: Hand";
		displayName = "RG-M/60 Marker Smoke (Yellow)";
		displayNameShort = "M/60 (Yellow)";
		picture = "\ptv_throwables\Data\UI\m_smoke01_yellow_ca.paa";
	};
	class ptv_mag_smoke02: HandGrenade
	{
		scope = 2;
		author = "Project True Viking";
		ammo = "ptv_ammo_smoke02";
		displayName = "RG-M/05 Red Phosphorus";
		displayNameShort = "M/05 Burst";
		descriptionshort = "Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		picture = "\ptv_throwables\Data\UI\m_smoke02_ca.paa";
		model = "\ptv_throwables\ammo\ptv_smoke02";
		mass = 9.68;
	};
};
class CfgVehicles
{
	class WeaponHolder_Single_limited_item_F;
	class ptv_magazine_base: WeaponHolder_Single_limited_item_F
	{
		vehicleClass = "Magazines";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Magazines";
	};
	class ptv_magazine_flash01: ptv_magazine_base
	{
		scope = 2;
		displayName = "BG-M/86 Flashbang";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_flash01
			{
				magazine = "ptv_mag_flash01";
				count = 1;
			};
		};
	};
	class ptv_magazine_frag01: ptv_magazine_base
	{
		scope = 2;
		displayName = "FG-M/56 Offensive Frag";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_frag01
			{
				magazine = "ptv_mag_frag01";
				count = 1;
			};
		};
	};
	class ptv_magazine_frag02: ptv_magazine_base
	{
		scope = 2;
		displayName = "FG-M/95 Defensive Frag";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_frag02
			{
				magazine = "ptv_mag_frag02";
				count = 1;
			};
		};
	};
	class ptv_magazine_frag03: ptv_magazine_base
	{
		scope = 2;
		displayName = "FG-M/17 Airburst Frag";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_frag03
			{
				magazine = "ptv_mag_frag03";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke01: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/60 Marker Smoke (White)";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke01
			{
				magazine = "ptv_mag_smoke01";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke01_Blue: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/60 Marker Smoke (Blue)";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke01_Blue
			{
				magazine = "ptv_mag_smoke01_Blue";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke01_Green: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/60 Marker Smoke (Green)";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke01_Green
			{
				magazine = "ptv_mag_smoke01_Green";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke01_Orange: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/60 Marker Smoke (Orange)";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke01_Orange
			{
				magazine = "ptv_mag_smoke01_Orange";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke01_Purple: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/60 Marker Smoke (Purple)";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke01_Purple
			{
				magazine = "ptv_mag_smoke01_Purple";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke01_Yellow: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/60 Marker Smoke (Yellow)";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke01_Yellow
			{
				magazine = "ptv_mag_smoke01_Yellow";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke01_Red: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/60 Marker Smoke (Red)";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke01_Red
			{
				magazine = "ptv_mag_smoke01_Red";
				count = 1;
			};
		};
	};
	class ptv_magazine_smoke02: ptv_magazine_base
	{
		scope = 2;
		displayName = "RG-M/05 Red Phosphorus";
		author = "Project True Viking";
		class TransportMagazines
		{
			class ptv_mag_smoke02
			{
				magazine = "ptv_mag_smoke02";
				count = 1;
			};
		};
	};
};
class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"ptv_flash01Muzzle","ptv_frag01Muzzle","ptv_frag02Muzzle","ptv_frag03Muzzle","ptv_smoke01Muzzle","ptv_smoke01_BlueMuzzle","ptv_smoke01_GreenMuzzle","ptv_smoke01_OrangeMuzzle","ptv_smoke01_PurpleMuzzle","ptv_smoke01_RedMuzzle","ptv_smoke01_YellowMuzzle","ptv_smoke02Muzzle"};
		class ThrowMuzzle: GrenadeLauncher{};
		class ptv_Throw_CS: ThrowMuzzle
		{
			magazines[] = {};
		};
		class ptv_Throw_Flash: ThrowMuzzle
		{
			magazines[] = {};
		};
		class ptv_Throw_Grenade: ThrowMuzzle
		{
			magazines[] = {};
		};
		class ptv_Throw_Smoke_white: ThrowMuzzle
		{
			magazines[] = {};
		};
		class ptv_flash01Muzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_flash01"};
		};
		class ptv_frag01Muzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_frag01"};
		};
		class ptv_frag02Muzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_frag02"};
		};
		class ptv_frag03Muzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_frag03"};
		};
		class ptv_smoke01Muzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke01"};
		};
		class ptv_smoke01_BlueMuzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke01_Blue"};
		};
		class ptv_smoke01_GreenMuzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke01_Green"};
		};
		class ptv_smoke01_OrangeMuzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke01_Orange"};
		};
		class ptv_smoke01_PurpleMuzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke01_Purple"};
		};
		class ptv_smoke01_RedMuzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke01_Red"};
		};
		class ptv_smoke01_YellowMuzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke01_Yellow"};
		};
		class ptv_smoke02Muzzle: ThrowMuzzle
		{
			magazines[] += {"ptv_mag_smoke02"};
		};
	};
};
class cfgMods
{
	author = "PTV";
	timepacked = "1713959691";
};
