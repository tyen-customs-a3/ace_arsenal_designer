class CfgPatches
{
	class CUP_Weapons_Grenades
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
		magazines[]=
		{
			"CUP_HandGrenade_M67",
			"CUP_HandGrenade_L109A1_HE",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGO"
		};
		ammo[]=
		{
			"Grenade",
			"GrenadeHand",
			"CUP_GrenadeHand_RGD5",
			"CUP_GrenadeHand_RGO",
			"CUP_GrenadeHand_M67",
			"CUP_GrenadeHand_L109A1_HE",
			"CUP_GrenadeHand_L109A2_HE"
		};
	};
};
class CfgAmmo
{
	class Default;
	class Grenade: Default
	{
	};
	class GrenadeHand: Grenade
	{
	};
	class CUP_GrenadeHand_RGD5: GrenadeHand
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_frag_rgd5.p3d";
	};
	class CUP_GrenadeHand_RGO: GrenadeHand
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_frag_rgd5.p3d";
	};
	class CUP_GrenadeHand_M67: GrenadeHand
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_GrenadeHand_L109A1_HE: GrenadeHand
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_GrenadeHand_L109A2_HE: GrenadeHand
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
	};
	class HandGrenade: CA_Magazine
	{
	};
	class CUP_HandGrenade_M67: HandGrenade
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_DN_hand_grenade_m67";
		displayNameShort="$STR_CUP_DNS_hand_grenade_m67";
		picture="\CUP\Weapons\CUP_Weapons_Grenades\data\ui\m_m67_ca.paa";
		ammo="CUP_GrenadeHand_M67";
		descriptionShort="$STR_CUP_DSS_Hand_Grenade_m67";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_HandGrenade_L109A1_HE: HandGrenade
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_Grenades\data\ui\m_m67_ca.paa";
		ammo="CUP_GrenadeHand_L109A1_HE";
		displayName="$STR_CUP_DN_hand_grenade_l109a1_he0";
		displayNameShort="$STR_CUP_DNS_hand_grenade_l109a1_he0";
		descriptionShort="$STR_CUP_DSS_hand_grenade_l109a1_he0";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_HandGrenade_L109A2_HE: HandGrenade
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_Grenades\data\ui\m_m67_ca.paa";
		ammo="CUP_GrenadeHand_L109A2_HE";
		displayName="$STR_CUP_DN_hand_grenade_l109a2_he0";
		displayNameShort="$STR_CUP_DNS_hand_grenade_l109a2_he0";
		descriptionShort="$STR_CUP_DSS_hand_grenade_l109a2_he0";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_M67.p3d";
	};
	class CUP_HandGrenade_RGD5: HandGrenade
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_DN_hand_grenade_rgd5";
		displayNameShort="$STR_CUP_DNS_hand_grenade_rgd5";
		picture="\CUP\Weapons\CUP_Weapons_Grenades\data\ui\m_rgd5_ca.paa";
		descriptionShort="$STR_CUP_DSS_hand_grenade_rgd5";
		ammo="CUP_GrenadeHand_RGD5";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_frag_rgd5.p3d";
	};
	class CUP_HandGrenade_RGO: HandGrenade
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_DN_hand_grenade_rgo";
		displayNameShort="$STR_CUP_DNS_hand_grenade_rgo";
		picture="\CUP\Weapons\CUP_Weapons_Grenades\data\ui\m_rgd5_ca.paa";
		descriptionShort="$STR_CUP_DSS_hand_grenade_rgo";
		ammo="CUP_GrenadeHand_RGD5";
		model="CUP\Weapons\CUP_Weapons_Grenades\CUP_frag_rgd5.p3d";
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
		};
		class CUP_HandGrenade_M67Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"CUP_HandGrenade_M67"
			};
		};
		class CUP_HandGrenade_L109A1_HEMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"CUP_HandGrenade_L109A1_HE"
			};
		};
		class CUP_HandGrenade_L109A2_HEMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"CUP_HandGrenade_L109A2_HE"
			};
		};
		class CUP_HandGrenade_RGD5Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"CUP_HandGrenade_RGD5"
			};
		};
		class CUP_HandGrenade_RGOMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"CUP_HandGrenade_RGO"
			};
		};
		muzzles[]+=
		{
			"CUP_HandGrenade_M67Muzzle",
			"CUP_HandGrenade_L109A1_HEMuzzle",
			"CUP_HandGrenade_L109A2_HEMuzzle",
			"CUP_HandGrenade_RGD5Muzzle",
			"CUP_HandGrenade_RGOMuzzle"
		};
	};
};
