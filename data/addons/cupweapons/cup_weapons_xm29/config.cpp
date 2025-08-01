class CfgPatches
{
	class CUP_Weapons_XM29
	{
		units[]={};
		weapons[]=
		{
			"CUP_arifle_xm29_ke_blk",
			"CUP_arifle_xm29_ke_tan",
			"CUP_arifle_xm29_ke_olive",
			"CUP_arifle_xm29_ke_arid",
			"CUP_arifle_xm29_ke_ctrg",
			"CUP_arifle_xm29_ke_tctrg",
			"CUP_arifle_xm29_ke_uctrg",
			"CUP_arifle_xm29_ke_lush",
			"CUP_arifle_xm29_ke_stiger",
			"CUP_arifle_xm29_ke_splinter",
			"CUP_arifle_xm29_ke_tiger",
			"CUP_arifle_xm29_ke_hexa",
			"CUP_arifle_xm29_ke_hexu",
			"CUP_arifle_xm29_ke_hexg",
			"CUP_arifle_xm29_ke_winter",
			"CUP_arifle_xm29_ke_woodland",
			"CUP_arifle_xm29_ke_rail_blk",
			"CUP_arifle_xm29_ke_rail_tan",
			"CUP_arifle_xm29_ke_rail_olive",
			"CUP_arifle_xm29_ke_rail_arid",
			"CUP_arifle_xm29_ke_rail_ctrg",
			"CUP_arifle_xm29_ke_rail_tctrg",
			"CUP_arifle_xm29_ke_rail_uctrg",
			"CUP_arifle_xm29_ke_rail_lush",
			"CUP_arifle_xm29_ke_rail_stiger",
			"CUP_arifle_xm29_ke_rail_splinter",
			"CUP_arifle_xm29_ke_rail_tiger",
			"CUP_arifle_xm29_ke_rail_hexa",
			"CUP_arifle_xm29_ke_rail_hexu",
			"CUP_arifle_xm29_ke_rail_hexg",
			"CUP_arifle_xm29_ke_rail_winter",
			"CUP_arifle_xm29_ke_rail_woodland",
			"CUP_arifle_m29_ke_caseless_blk",
			"CUP_arifle_m29_ke_caseless_tan",
			"CUP_arifle_m29_ke_caseless_olive",
			"CUP_arifle_m29_ke_caseless_arid",
			"CUP_arifle_m29_ke_caseless_ctrg",
			"CUP_arifle_m29_ke_caseless_tctrg",
			"CUP_arifle_m29_ke_caseless_uctrg",
			"CUP_arifle_m29_ke_caseless_lush",
			"CUP_arifle_m29_ke_caseless_stiger",
			"CUP_arifle_m29_ke_caseless_splinter",
			"CUP_arifle_m29_ke_caseless_tiger",
			"CUP_arifle_m29_ke_caseless_hexa",
			"CUP_arifle_m29_ke_caseless_hexu",
			"CUP_arifle_m29_ke_caseless_hexg",
			"CUP_arifle_m29_ke_caseless_winter",
			"CUP_arifle_m29_ke_caseless_woodland",
			"CUP_arifle_xm29_blk",
			"CUP_arifle_xm29_tan",
			"CUP_arifle_xm29_olive",
			"CUP_arifle_xm29_arid",
			"CUP_arifle_xm29_ctrg",
			"CUP_arifle_xm29_tctrg",
			"CUP_arifle_xm29_uctrg",
			"CUP_arifle_xm29_lush",
			"CUP_arifle_xm29_stiger",
			"CUP_arifle_xm29_splinter",
			"CUP_arifle_xm29_tiger",
			"CUP_arifle_xm29_hexa",
			"CUP_arifle_xm29_hexu",
			"CUP_arifle_xm29_hexg",
			"CUP_arifle_xm29_winter",
			"CUP_arifle_xm29_woodland",
			"CUP_arifle_m29_caseless_blk",
			"CUP_arifle_m29_caseless_tan",
			"CUP_arifle_m29_caseless_olive",
			"CUP_arifle_m29_caseless_arid",
			"CUP_arifle_m29_caseless_ctrg",
			"CUP_arifle_m29_caseless_tctrg",
			"CUP_arifle_m29_caseless_uctrg",
			"CUP_arifle_m29_caseless_lush",
			"CUP_arifle_m29_caseless_stiger",
			"CUP_arifle_m29_caseless_splinter",
			"CUP_arifle_m29_caseless_tiger",
			"CUP_arifle_m29_caseless_hexa",
			"CUP_arifle_m29_caseless_hexu",
			"CUP_arifle_m29_caseless_hexg",
			"CUP_arifle_m29_caseless_winter",
			"CUP_arifle_m29_caseless_woodland"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_G36"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
		magazines[]=
		{
			"CUP_6Rnd_HE_Grenade_M"
		};
		ammo[]=
		{
			"CUP_G_20mm_HE_Detonator",
			"CUP_G_20mm_HE_Bullet"
		};
	};
};
class RscUnitInfo;
class RscControlsGroup;
class VScrollbar;
class HScrollbar;
class RscPicture;
class RscPictureKeepAspect;
class RscText;
class RscControlsGroupNoScrollbars;
class CfgScriptPaths
{
	CUP_OICW="\CUP\Weapons\CUP_Weapons_XM29\scripts\";
};
class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class CA_Zeroing;
	};
	class CUP_RscOptics_XM29: RscWeaponZeroing
	{
		scriptPath="CUP_OICW";
		scriptName="CUP_RscOptics_XM29";
		onLoad="['onLoad',_this,'CUP_RscOptics_XM29','CUP_OICW', true] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload="['onUnload',_this,'CUP_RscOptics_XM29','CUP_OICW'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
		controls[]=
		{
			"CA_IGUI_elements_group",
			"CA_Zeroing"
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
			x="0 * (0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * (0.025 * SafezoneH) + (SafezoneY)";
			w="53.5 * (0.01875 * SafezoneH)";
			h="40 * (0.025 * SafezoneH)";
			class controls
			{
				class Horizontal: RscText
				{
					idc=40401;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,1};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.447 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="----";
				};
				class MILS_DEG: RscText
				{
					idc=40402;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,1};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.472 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="MILS";
				};
				class Vertical: RscText
				{
					idc=40403;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,1};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.497 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="----";
				};
				class LaserDistance: RscText
				{
					idc=40400;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,0.89999998};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.652 * safezoneW + safezoneX";
					y="0.68 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="----";
				};
				class LaserDistanceAddend: RscText
				{
					idc=40409;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={0,1,0,0.89999998};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.652 * safezoneW + safezoneX + (0.0465 * safezoneW)";
					y="0.68 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="";
				};
				class History1: RscText
				{
					idc=40404;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,0.5};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.750 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="";
					type=0;
				};
				class History2: RscText
				{
					idc=40405;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,0.5};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.775 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="";
					type=0;
				};
				class History3: RscText
				{
					idc=40406;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,0.5};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.8 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="";
					type=0;
				};
				class History4: RscText
				{
					idc=40407;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,0.5};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.825 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="";
					type=0;
				};
				class History5: RscText
				{
					idc=40408;
					style=0;
					sizeEx="0.025*SafezoneH";
					colorText[]={1,0,0,0.5};
					shadow=0;
					font="EtelkaMonospacePro";
					x="0.84 * safezoneW + safezoneX";
					y="0.85 * safezoneH + safezoneY";
					w="0.0464063 * safezoneW";
					h="0.033 * safezoneH";
					text="";
					type=0;
				};
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class muzzle_snds_H;
class asdg_OpticRail;
class MuzzleSlot_65;
class CUP_MuzzleSlotXM29: asdg_MuzzleSlot_556
{
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
	iconPinPoint="Center";
};
class CUP_CarryhandleOpticsMountG36XM29: asdg_OpticRail
{
	iconPinPoint="center";
	iconPosition[]={0.486,0.37900001};
	iconScale=0.25;
	iconPicture="\CUP\Weapons\CUP_Weapons_G36\data\ui\attachment_g36top.paa";
	class compatibleItems
	{
		CUP_optic_G36DualOptics=1;
		CUP_optic_G36DualOptics_PIP=1;
		CUP_optic_G36DualOptics_3D=1;
		CUP_optic_G36DualOptics_desert=1;
		CUP_optic_G36DualOptics_desert_PIP=1;
		CUP_optic_G36DualOptics_desert_3D=1;
		CUP_optic_G36DualOptics_wood=1;
		CUP_optic_G36DualOptics_wood_PIP=1;
		CUP_optic_G36DualOptics_wood_3D=1;
		CUP_optic_G36Optics=1;
		CUP_optic_G36Optics_PIP=1;
		CUP_optic_G36Optics_3D=1;
		CUP_optic_G36Optics_desert=1;
		CUP_optic_G36Optics_desert_PIP=1;
		CUP_optic_G36Optics_desert_3D=1;
		CUP_optic_G36Optics_wood=1;
		CUP_optic_G36Optics_wood_PIP=1;
		CUP_optic_G36Optics_wood_3D=1;
		CUP_optic_G36Optics15x=1;
		CUP_optic_G36Optics15x_PIP=1;
		CUP_optic_G36Optics15x_3D=1;
		CUP_optic_G36Optics15x_desert=1;
		CUP_optic_G36Optics15x_desert_PIP=1;
		CUP_optic_G36Optics15x_desert_3D=1;
		CUP_optic_G36Optics15x_wood=1;
		CUP_optic_G36Optics15x_wood_PIP=1;
		CUP_optic_G36Optics15x_wood_3D=1;
		CUP_optic_G36Optics_Holo=1;
		CUP_optic_G36Optics_Holo_PIP=1;
		CUP_optic_G36Optics_Holo_3D=1;
		CUP_optic_G36Optics_Holo_desert=1;
		CUP_optic_G36Optics_Holo_desert_PIP=1;
		CUP_optic_G36Optics_Holo_desert_3D=1;
		CUP_optic_G36Optics_Holo_wood=1;
		CUP_optic_G36Optics_Holo_wood_PIP=1;
		CUP_optic_G36Optics_Holo_wood_3D=1;
		CUP_optic_G36Optics_RDS=1;
		CUP_optic_G36Optics_RDS_PIP=1;
		CUP_optic_G36Optics_RDS_3D=1;
		CUP_optic_G36Optics_RDS_desert=1;
		CUP_optic_G36Optics_RDS_desert_PIP=1;
		CUP_optic_G36Optics_RDS_desert_3D=1;
		CUP_optic_G36Optics_RDS_wood=1;
		CUP_optic_G36Optics_RDS_wood_PIP=1;
		CUP_optic_G36Optics_RDS_wood_3D=1;
	};
};
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnyUnderMount;
class CUP_PicatinnySideMount;
class CfgAmmo
{
	class G_20mm_HE;
	class SubmunitionBullet;
	class Grenade;
	class CUP_G_20mm_HE_Detonator: Grenade
	{
		simulation="shotShell";
		hit=40;
		indirectHit=6;
		indirectHitRange=4;
		explosionTime=9.9999997e-006;
		warheadName="HE";
	};
	class CUP_G_20mm_HE_Bullet: SubmunitionBullet
	{
		simulation="shotBullet";
		model="\CUP\Weapons\CUP_Weapons_XM29\CUP_airburst_grenade";
		triggerOnImpact=1;
		submunitionConeAngle=0;
		submunitionCount=1;
		submunitionAmmo="CUP_G_20mm_HE_Detonator";
		explosionSoundEffect="DefaultExplosion";
		warheadName="HE";
		visibleFire=1;
		audibleFire=30;
		visibleFireTime=3;
		dangerRadiusHit=60;
		suppressionRadiusHit=24;
		explosive=1;
		cost=10;
		deflecting=5;
		airFriction=-0.001;
		fuseDistance=15;
		typicalSpeed=185;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
			3.1622801,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
			3.1622801,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
			3.1622801,
			1,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
			3.1622801,
			1,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeFire
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		SoundSetExplosion[]=
		{
			"GrenadeHe_Exp_SoundSet",
			"GrenadeHe_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		hit=40;
		indirectHit=6;
		indirectHitRange=4;
		whistleDist=20;
		caliber=1;
		class CamShakeExplode
		{
			power=4;
			duration=0.80000001;
			frequency=20;
			distance=75.7771;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		cartridge="FxCartridge_abgrenade";
		timeToLive=59;
		triggerTime=60;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CUP_6Rnd_HE_Grenade_M: CA_Magazine
	{
		author="Community Upgrade Project";
		scope=2;
		type=16;
		displayName="20 mm 6 Round HE Grenade";
		displayNameShort="20 mm HE";
		picture="\cup\weapons\cup_weapons_xm29\data\ui\m_xm29_he_ca.paa";
		ammo="CUP_G_20mm_HE_Bullet";
		initSpeed=210;
		count=6;
		nameSound="";
		descriptionShort="Type: High Explosive Grenade with AirBurst capability<br />Caliber: 20 mm<br />Rounds: 6<br />Used in: XM29 OICW";
		mass=15;
		modelSpecial="\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		modelSpecialIsProxy=0;
		deleteIfEmpty=0;
		reloadAction="CUP_GestureReloadxm29HE";
	};
};
class CfgVehicles
{
	class FxCartridge;
	class FxCartridge_abgrenade: FxCartridge
	{
		author="$STR_CUP_AUTHOR_STRING";
		mapSize=0.07;
		model="\CUP\Weapons\CUP_Weapons_XM29\CUP_he_cartridge.p3d";
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_arifle_xm29_ke_base: Rifle_Base_F
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		model="\CUP\Weapons\CUP_Weapons_xm29\CUP_xm29_ke";
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_blk_ca.paa";
		magazineReloadSwitchPhase=0.30000001;
		magazineWell[]=
		{
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL",
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_60Rnd_556x45_SureFire",
			"CUP_20Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green",
			"CUP_100Rnd_556x45_BetaCMag_ar15",
			"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15",
			"CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15",
			"CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15"
		};
		displayName="XM29 OICW";
		descriptionShort="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_XM29\data\Anim\xm29_ke_anim.rtm"
		};
		fireLightDuration=0;
		fireLightIntensity=0;
		dexterity=1.66;
		inertia=0.40000001;
		aimTransitionSpeed=0.80000001;
		selectionFireAnim="zasleh";
		reloadAction="CUP_GestureReloadXM29";
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_xm29\data\sfx\Reload",
			1,
			1,
			35
		};
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_xm29\data\sfx\Dry",
			1,
			1,
			35
		};
		distanceZoomMin=50;
		distanceZoomMax=50;
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_xm29\data\oicw_co.paa"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto",
			"fullauto_medium"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_MP";
		initSpeed=-1;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=241.3;
		recoil="CUP_G36A_recoil";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					0.80000001,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					0.80000001,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_akm_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s1",
					1,
					1,
					1000
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s2",
					1,
					1,
					1000
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s3",
					1,
					1,
					1000
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s4",
					1,
					1,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s1",
					1,
					1,
					400
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s2",
					1,
					1,
					400
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s3",
					1,
					1,
					400
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s4",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\silencer_sdar_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\silencer_sdar_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\silencer_sdar_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\silencer_sdar_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\silencer_sdar_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.079999998;
			dispersion=0.0011;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					0.80000001,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					0.80000001,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_akm_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s1",
					1,
					1,
					1000
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s2",
					1,
					1,
					1000
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s3",
					1,
					1,
					1000
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s4",
					1,
					1,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s1",
					1,
					1,
					400
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s2",
					1,
					1,
					400
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s3",
					1,
					1,
					400
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s4",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst=0;
			reloadTime=0.079999998;
			ffCount=2;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			dispersion=0.0011;
			burst=2;
			showToPlayer=1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					0.80000001,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					0.80000001,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_akm_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s1",
					1,
					1,
					1000
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s2",
					1,
					1,
					1000
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s3",
					1,
					1,
					1000
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_s4",
					1,
					1,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M16_Closure_SoundSet",
					"CUP_akm_ShotSD_SoundSet",
					"CUP_rifle1_SD_Tail_SoundSet"
				};
				begin1[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s1",
					1,
					1,
					400
				};
				begin2[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s2",
					1,
					1,
					400
				};
				begin3[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s3",
					1,
					1,
					400
				};
				begin4[]=
				{
					"CUP\Weapons\CUP_Weapons_xm29\data\sfx\XM29_silence_s4",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			soundContinuous=0;
			reloadTime=0.079999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			dispersion=0.0011;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		class WeaponSlotsInfo
		{
			mass=61.728802;
			class CUP_CarryHandleXM29: CUP_CarryhandleOpticsMountG36XM29
			{
			};
			class SidePointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.27000001,0.51599997};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class CUP_MuzzleSlot: CUP_MuzzleSlotXM29
			{
				iconPinPoint="center";
				iconPosition[]={0.083999999,0.523};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
		};
	};
	class CUP_arifle_xm29_ke_rail_base: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		model="\CUP\Weapons\CUP_Weapons_xm29\CUP_xm29_ke_rail";
		class WeaponSlotsInfo
		{
			mass=61.728802;
			class CUP_PicatinnyTopRail: CUP_PicatinnyTopMount
			{
				iconPinPoint="center";
				iconPosition[]={0.47499999,0.33199999};
				iconScale=0.17;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class SidePointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.27000001,0.51599997};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class CUP_MuzzleSlot: CUP_MuzzleSlotXM29
			{
				iconPinPoint="center";
				iconPosition[]={0.083999999,0.523};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
		};
	};
	class CUP_arifle_m29_ke_caseless_base: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		model="\CUP\Weapons\CUP_Weapons_xm29\CUP_m29_ke";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		magazineWell[]=
		{
			"MX_65x39",
			"MX_65x39_Large",
			"CBA_65x39_MX",
			"CBA_65x39_MX_XL"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.0011;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
			soundBurst=0;
			reloadTime=0.079999998;
			ffCount=2;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			dispersion=0.0011;
			burst=2;
			showToPlayer=1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
			soundContinuous=0;
			reloadTime=0.079999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			dispersion=0.0011;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		class WeaponSlotsInfo
		{
			mass=61.728802;
			class CUP_PicatinnyTopRail: CUP_PicatinnyTopMount
			{
				iconPinPoint="center";
				iconPosition[]={0.47499999,0.33199999};
				iconScale=0.17;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class SidePointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.27000001,0.51599997};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_h"
				};
				iconPosition[]={0.083999999,0.523};
				iconScale=0.2;
			};
		};
	};
	class CUP_arifle_xm29_he_base: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		model="\CUP\Weapons\CUP_Weapons_xm29\CUP_xm29_he";
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_blk_ca.paa";
		inertia=0.69999999;
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_XM29\data\Anim\xm29_he_anim.rtm"
		};
		displayName="XM29 OICW";
		class WeaponSlotsInfo
		{
			mass=154.32201;
			class SidePointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.23,0.53100002};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class MuzzleSlot: CUP_MuzzleSlotXM29
			{
				iconPinPoint="center";
				iconPosition[]={0.027000001,0.53500003};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
		};
		opticsZoomMin="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
		opticsZoomMax="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
		opticsZoomInit="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
		modelOptics="\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
		class XMHEMuzzle: Rifle_Base_F
		{
			displayName="20 mm ";
			magazines[]=
			{
				"CUP_6Rnd_HE_Grenade_M"
			};
			magazineWell[]={};
			useModelOptics=1;
			useExternalOptic=0;
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_reload",
				1,
				1,
				10
			};
			magazineReloadSwitchPhase=0.30000001;
			muzzlePos="20mm_pos";
			muzzleEnd="20mm_end";
			opticsZoomMin="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			opticsZoomMax="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
			modelOptics="\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
			cartridgePos="he_cartridge_pos";
			cartridgeVel="he_cartridge_vel";
			modes[]=
			{
				"Impact",
				"Airburst"
			};
			class Impact: Mode_SemiAuto
			{
				displayName="Impact";
				textureType="semi";
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					closure1[]=
					{
						"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",
						1,
						1,
						10
					};
					soundClosure[]=
					{
						"closure1",
						1
					};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",
						0.707946,
						1,
						200
					};
					begin2[]=
					{
						"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",
						0.707946,
						1,
						200
					};
					soundBegin[]=
					{
						"begin1",
						0.5,
						"begin2",
						0.5
					};
					soundSetShot[]=
					{
						"UGL_shot_SoundSet",
						"UGL_Tail_SoundSet",
						"UGL_InteriorTail_SoundSet"
					};
				};
				recoil="M240Recoil";
				recoilProne="M240Recoil";
				dispersion=0;
				minRange=30;
				minRangeProbab=0.1;
				midRange=200;
				midRangeProbab=0.69999999;
				maxRange=400;
				maxRangeProbab=0.050000001;
			};
			class Airburst: Mode_SemiAuto
			{
				displayName="Airburst";
				textureType="topDown";
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					closure1[]=
					{
						"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",
						1,
						1,
						10
					};
					soundClosure[]=
					{
						"closure1",
						1
					};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",
						0.707946,
						1,
						200
					};
					begin2[]=
					{
						"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",
						0.707946,
						1,
						200
					};
					soundBegin[]=
					{
						"begin1",
						0.5,
						"begin2",
						0.5
					};
					soundSetShot[]=
					{
						"UGL_shot_SoundSet",
						"UGL_Tail_SoundSet",
						"UGL_InteriorTail_SoundSet"
					};
				};
				recoil="M240Recoil";
				recoilProne="M240Recoil";
				dispersion=0;
				minRange=30;
				minRangeProbab=0.1;
				midRange=200;
				midRangeProbab=0.69999999;
				maxRange=400;
				maxRangeProbab=0.050000001;
			};
			recoil="recoil_default";
			class OpticsModes
			{
				class optic
				{
					opticsID=2;
					useModelOptics=1;
					opticsZoomMin="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteFov[]=
					{
						"1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
						"2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
						"3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
						"4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"
					};
					discreteInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=300;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={2,3};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					modelOptics="\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
				};
			};
			class EventHandlers
			{
				fired="_this call CUP_fnc_abFired";
			};
		};
		muzzles[]=
		{
			"this",
			"XMHEMuzzle"
		};
		weaponInfoType="CUP_RscOptics_XM29";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				discreteFov[]=
				{
					"1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
					"2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
					"3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')",
					"4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"
				};
				discreteInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=800;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={2,3};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				discreteDistance[]={100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex=2;
				modelOptics="\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
			};
		};
	};
	class CUP_arifle_m29_he_caseless_base: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		model="\CUP\Weapons\CUP_Weapons_xm29\CUP_m29_he";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		magazineWell[]=
		{
			"MX_65x39",
			"MX_65x39_Large",
			"CBA_65x39_MX",
			"CBA_65x39_MX_XL"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.0011;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
			soundBurst=0;
			reloadTime=0.079999998;
			ffCount=2;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			dispersion=0.0011;
			burst=2;
			showToPlayer=1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
			soundContinuous=0;
			reloadTime=0.079999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			dispersion=0.0011;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		class WeaponSlotsInfo
		{
			mass=61.728802;
			class SidePointerSlot: CUP_PicatinnySideMount
			{
				iconPinPoint="center";
				iconPosition[]={0.23,0.53100002};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
			class MuzzleSlot: MuzzleSlot_65
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_h"
				};
				iconPosition[]={0.027000001,0.53500003};
				iconScale=0.2;
			};
		};
	};
	class CUP_arifle_xm29_ke_blk: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_blk_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Black)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_tan: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_tan_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Desert Tan)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\desert_tan\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_olive: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_olive_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Olive)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\olive\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_arid: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_arid_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_ctrg: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_ctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (CTRG)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_tctrg: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_tctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (CTRG Tropical)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_tropical\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_uctrg: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_uctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (CTRG Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_urban\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_lush: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_lush_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Lush)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\lush\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_stiger: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_stiger_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Snow Tiger)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\snow_tiger\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_splinter: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_splinter_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Splinter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\splinter\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_tiger: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_tiger_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Tigerstripes)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\tiger_stripes\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_hexa: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_hexa_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Hex Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_hexu: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_hexu_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Hex Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\urban_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_hexg: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_hexg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Hex Green)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\green_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_winter: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_winter_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Winter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\winter\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_woodland: CUP_arifle_xm29_ke_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_woodland_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE (Woodland)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\woodland\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_blk: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_blk_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Black)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_tan: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_tan_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Desert Tan)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\desert_tan\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_olive: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_olive_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Olive)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\olive\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_arid: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_arid_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_ctrg: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_ctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (CTRG)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_tctrg: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_tctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (CTRG Tropical)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_tropical\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_uctrg: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_uctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (CTRG Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_urban\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_lush: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_lush_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Lush)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\lush\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_stiger: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_stiger_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Snow Tiger)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\snow_tiger\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_splinter: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_splinter_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Splinter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\splinter\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_tiger: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_tiger_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Tigerstripes)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\tiger_stripes\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_hexa: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_hexa_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Hex Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_hexu: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_hexu_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Hex Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\urban_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_hexg: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_hexg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Hex Green)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\green_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_winter: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_winter_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Winter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\winter\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ke_rail_woodland: CUP_arifle_xm29_ke_rail_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ke_rail_woodland_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW KE Railed (Woodland)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\woodland\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_blk: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_blk_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Black)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_tan: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_tan_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Desert Tan)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\desert_tan\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_olive: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_olive_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Olive)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\olive\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_arid: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_arid_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_ctrg: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_ctrg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (CTRG)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_tctrg: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_tctrg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (CTRG Tropical)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_tropical\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_uctrg: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_uctrg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (CTRG Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_urban\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_lush: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_lush_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Lush)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\lush\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_stiger: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_stiger_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Snow Tiger)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\snow_tiger\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_splinter: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_splinter_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Splinter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\splinter\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_tiger: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_tiger_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Tigerstripes)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\tiger_stripes\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_hexa: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_hexa_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Hex Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_hexu: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_hexu_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Hex Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\urban_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_hexg: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_hexg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Hex Green)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\green_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_winter: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_winter_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Winter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\winter\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_ke_caseless_woodland: CUP_arifle_m29_ke_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_ke_caseless_woodland_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW KE 6.5mm (Woodland)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\woodland\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_blk: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_blk_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Black)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_tan: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_tan_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Desert Tan)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\desert_tan\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_olive: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_olive_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Olive)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\olive\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_arid: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_arid_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_ctrg: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_ctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (CTRG)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_tctrg: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_tctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (CTRG Tropical)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_tropical\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_uctrg: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_uctrg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (CTRG Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_urban\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_lush: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_lush_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Lush)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\lush\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_stiger: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_stiger_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Snow Tiger)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\snow_tiger\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_splinter: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_splinter_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Splinter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\splinter\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_tiger: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_tiger_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Tigerstripes)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\tiger_stripes\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_hexa: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_hexa_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Hex Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_hexu: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_hexu_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Hex Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\urban_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_hexg: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_hexg_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Hex Green)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\green_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_winter: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_winter_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Winter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\winter\oicw_co.paa"
		};
	};
	class CUP_arifle_xm29_woodland: CUP_arifle_xm29_he_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_xm29_woodland_ca.paa";
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag"
		};
		displayName="XM29 OICW (Woodland)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\woodland\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_blk: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_blk_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Black)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_tan: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_tan_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Desert Tan)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\desert_tan\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_olive: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_olive_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Olive)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\olive\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_arid: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_arid_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_ctrg: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_ctrg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (CTRG)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_tctrg: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_tctrg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (CTRG Tropical)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_tropical\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_uctrg: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_uctrg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (CTRG Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\ctrg_urban\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_lush: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_lush_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Lush)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\lush\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_stiger: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_stiger_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Snow Tiger)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\snow_tiger\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_splinter: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_splinter_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Splinter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\splinter\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_tiger: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_tiger_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Tigerstripes)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\tiger_stripes\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_hexa: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_hexa_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Hex Arid)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\arid_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_hexu: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_hexu_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Hex Urban)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\urban_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_hexg: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_hexg_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Hex Green)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\green_hex\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_winter: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_winter_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Winter)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\winter\oicw_co.paa"
		};
	};
	class CUP_arifle_m29_caseless_woodland: CUP_arifle_m29_he_caseless_base
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_woodland_ca.paa";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
		displayName="M29 OICW 6.5mm (Woodland)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_xm29\data\woodland\oicw_co.paa"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_GestureReloadXM29="CUP_GestureReloadXM29";
		CUP_GestureReloadXM29Prone="CUP_GestureReloadXM29Prone";
		CUP_GestureReloadXM29HE="CUP_GestureReloadXM29HE";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class NoActions: ManActions
		{
			CUP_GestureReloadXM29[]=
			{
				"CUP_GestureReloadXM29",
				"Gesture"
			};
			CUP_GestureReloadXM29HE[]=
			{
				"CUP_GestureReloadXM29HE",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			CUP_GestureReloadXM29[]=
			{
				"CUP_GestureReloadXM29Prone",
				"Gesture"
			};
			CUP_GestureReloadXM29HE[]=
			{
				"CUP_GestureReloadXM29HEProne",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadXM29[]=
			{
				"CUP_GestureReloadXM29_Context",
				"Gesture"
			};
			CUP_GestureReloadXM29HE[]=
			{
				"CUP_GestureReloadXM29HE_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadXM29[]=
			{
				"CUP_GestureReloadXM29_Context",
				"Gesture"
			};
			CUP_GestureReloadXM29HE[]=
			{
				"CUP_GestureReloadXM29HE_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadXM29[]=
			{
				"CUP_GestureReloadXM29",
				"Gesture"
			};
			CUP_GestureReloadXM29HE[]=
			{
				"CUP_GestureReloadXM29HE",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class CUP_GestureReloadxm29: Default
		{
			file="\CUP\Weapons\CUP_Weapons_XM29\data\anim\xm29_ke_reload_s";
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
		class CUP_GestureReloadxm29Prone: CUP_GestureReloadxm29
		{
			file="\CUP\Weapons\CUP_Weapons_XM29\data\anim\xm29_ke_reload_s";
			speed=0.34999999;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadxm29HE: CUP_GestureReloadxm29
		{
			file="\CUP\Weapons\CUP_Weapons_XM29\data\anim\xm29_he_reload_s";
			speed=0.40000001;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadxm29HEProne: CUP_GestureReloadxm29HE
		{
			file="\CUP\Weapons\CUP_Weapons_XM29\data\anim\xm29_he_reload_s";
			speed=0.40000001;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
		class CUP_GestureReloadxm29_Context: CUP_GestureReloadxm29
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadxm29HE_Context: CUP_GestureReloadxm29HE
		{
			mask="handsWeapon_context";
		};
	};
};
class CfgFunctions
{
	tag="CUP";
	class CUP
	{
		class Weapons
		{
			class abLaseDistance
			{
				description="Use the Laser Rangefinder";
				file="\CUP\Weapons\CUP_Weapons_Xm29\scripts\laseTarget.sqf";
			};
			class abAddDistance
			{
				description="Add the given amount to the airburst distance";
				file="\CUP\Weapons\CUP_Weapons_Xm29\scripts\adddistance.sqf";
			};
			class abIsOptic
			{
				description="Check if the player is currently using the correct optic";
				file="\CUP\Weapons\CUP_Weapons_Xm29\scripts\isoptic.sqf";
			};
			class abDrawDisplay
			{
				description="Draw the optics, called in Draw3D handler";
				file="\CUP\Weapons\CUP_Weapons_Xm29\scripts\drawdisplay.sqf";
			};
			class abToggleDisplay
			{
				description="Toggle between MILS and DEGREES";
				file="\CUP\Weapons\CUP_Weapons_Xm29\scripts\toggleDisplay.sqf";
			};
			class abFired
			{
				description="Fired event handler for aiburst Ggrenades";
				file="\CUP\Weapons\CUP_Weapons_Xm29\scripts\airburstFired.sqf";
			};
			class abDrawCrosshair
			{
				description="Draw the impact recticle";
				file="\CUP\Weapons\CUP_Weapons_Xm29\scripts\drawCrosshair.sqf";
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	CUP_Weapons_XM29_Init="call compile preprocessFileLineNumbers '\CUP\Weapons\CUP_Weapons_XM29\scripts\init.sqf'";
};
