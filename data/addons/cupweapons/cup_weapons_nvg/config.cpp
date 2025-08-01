class CfgPatches
{
	class CUP_Weapons_NVG
	{
		units[]={};
		weapons[]=
		{
			"CUP_NVG_PVS7",
			"CUP_NVG_PVS7_Hide",
			"CUP_NVG_HMNVS",
			"CUP_NVG_HMNVS_Hide",
			"CUP_NVG_PVS14",
			"CUP_NVG_PVS14_Hide",
			"CUP_NVG_GPNVG_black",
			"CUP_NVG_GPNVG_tan",
			"CUP_NVG_GPNVG_green",
			"CUP_NVG_GPNVG_winter",
			"CUP_NVG_GPNVG_Hide",
			"CUP_NVG_PVS15_black",
			"CUP_NVG_PVS15_tan",
			"CUP_NVG_PVS15_green",
			"CUP_NVG_PVS15_winter",
			"CUP_NVG_PVS15_Hide",
			"CUP_NVG_1PN138",
			"CUP_NVG_1PN138_Hide"
		};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class CfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class CUP_NVG_PVS7: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_anpvs7";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_PVS7_On";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs7_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_PVS7_On";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_PVS7_Off";
			mass=13.23;
		};
	};
	class CUP_NVG_PVS7_Hide: CUP_NVG_PVS7
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_anpvs7_hide";
		class ItemInfo: ItemInfo
		{
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_PVS7_Off_Hide";
		};
	};
	class CUP_NVG_HMNVS: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_hmnvs";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_PVS7_On";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs7_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_HMNVS_DOWN";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_HMNVS_UP";
			mass=6.6100001;
		};
	};
	class CUP_NVG_HMNVS_Hide: CUP_NVG_HMNVS
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="HMNVS (Hidden)";
		class ItemInfo: ItemInfo
		{
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_HMNVS_UP_Hide";
		};
	};
	class CUP_NVG_PVS14: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="AN/PVS14";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_ANPVS_14_On";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs7_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_ANPVS_14_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_ANPVS_14_off";
			mass=6.6100001;
		};
	};
	class CUP_NVG_PVS14_Hide: CUP_NVG_PVS14
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="AN/PVS14 (Hidden)";
		class ItemInfo: ItemInfo
		{
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_ANPVS_14_off_Hide";
		};
	};
	class CUP_NVG_GPNVG_black: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_gpnvg_black";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_black_On";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_gpnvg_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_black_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_black_off";
			mass=17.639999;
		};
	};
	class CUP_NVG_GPNVG_Hide: CUP_NVG_GPNVG_black
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="GPNVG (Hidden)";
		class ItemInfo: ItemInfo
		{
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_off_Hide";
		};
	};
	class CUP_NVG_GPNVG_tan: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_gpnvg_tan";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_sand_On";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_gpnvg_sand_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_sand_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_sand_off";
			mass=17.639999;
		};
	};
	class CUP_NVG_GPNVG_green: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_gpnvg_green";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_jungle_On";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_gpnvg_jungle_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_jungle_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_jungle_off";
			mass=17.639999;
		};
	};
	class CUP_NVG_GPNVG_winter: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_gpnvg_winter";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_Winter_On";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_gpnvg_winter_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_winter_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_GPNVG_winter_off";
			mass=17.639999;
		};
	};
	class CUP_NVG_PVS15_black: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_anpvs15_black";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_black_on";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_black_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_black_off";
			mass=13.23;
		};
	};
	class CUP_NVG_PVS15_Hide: CUP_NVG_PVS15_black
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="AN/PVS-15 (Hidden)";
		class ItemInfo: ItemInfo
		{
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_off_Hide";
		};
	};
	class CUP_NVG_PVS15_tan: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_anpvs15_tan";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_sand_on";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_sand_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_sand_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_sand_off";
			mass=13.23;
		};
	};
	class CUP_NVG_PVS15_green: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_anpvs15_green";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_jungle_on";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_jungle_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_jungle_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_jungle_off";
			mass=13.23;
		};
	};
	class CUP_NVG_PVS15_winter: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="$STR_CUP_dn_anpvs15_winter";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_winter_on";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_winter_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_winter_on";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_pvs_15_winter_off";
			mass=13.23;
		};
	};
	class CUP_NVG_1PN138: NVGoggles
	{
		dlc="CUP_Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		displayname="1PN138";
		descriptionShort="$STR_A3_ITEMTYPE_NVGOGGLES";
		model="CUP\Weapons\CUP_Weapons_NVG\model\CUP_1pn138_on.p3d";
		picture="\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_black_ca.paa";
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="CUP\Weapons\CUP_Weapons_NVG\model\CUP_1pn138_on.p3d";
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_1pn138_off.p3d";
			mass=13.23;
		};
	};
	class CUP_NVG_1PN138_Hide: CUP_NVG_1PN138
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayname="1PN138 (Hidden)";
		class ItemInfo: ItemInfo
		{
			modelOff="CUP\Weapons\CUP_Weapons_NVG\model\CUP_HMNVS_UP_Hide";
		};
	};
};
