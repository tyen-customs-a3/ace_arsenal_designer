class CfgPatches
{
	class CUP_Weapons_Pods
	{
		units[]={};
		weapons[]={};
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
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyCUP_AT9_rackcomplete: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\AT9\CUP_AT9_rackcomplete";
		simulation="maverickweapon";
	};
	class ProxyCUP_AT9_tube: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\AT9\CUP_AT9_tube";
		simulation="maverickweapon";
	};
	class ProxyCUP_S8_Launcher: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher";
		simulation="maverickweapon";
	};
	class ProxyCUP_S8_Launcher_Aircraft: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\S8\CUP_S8_Launcher_Aircraft";
		simulation="maverickweapon";
	};
	class ProxyCUP_UB16: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\UB16\CUP_UB16";
		simulation="maverickweapon";
	};
	class ProxyCUP_UB32: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\UB32\CUP_UB32";
		simulation="maverickweapon";
	};
	class ProxyCUP_Igla_Rack_Twin: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\Igla_pod\CUP_igla_rack_twin";
		simulation="maverickweapon";
	};
	class ProxyCUP_vikhr_6rnd_rack: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\vikhr_pod\CUP_vikhr_6rnd_rack";
		simulation="maverickweapon";
	};
	class ProxyCUP_gsh23_gunpod: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\GSH23\CUP_GSH23_gunpod";
		simulation="maverickweapon";
	};
	class ProxyCUP_S13_Launcher: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\S13\CUP_S13_Launcher";
		simulation="maverickweapon";
	};
	class ProxyCUP_M621_gunpod: ProxyWeapon
	{
		author="$STR_CUP_AUTHOR_STRING";
		model="\CUP\Weapons\CUP_Weapons_Pods\M621\CUP_M621";
		simulation="maverickweapon";
	};
};
