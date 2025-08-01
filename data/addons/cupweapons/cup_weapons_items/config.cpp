class CfgPatches
{
	class CUP_Weapons_Items
	{
		units[]=
		{
			"CUP_item_Kostey_photos",
			"CUP_item_Kostey_map_case",
			"CUP_item_Kostey_notebook",
			"CUP_item_CDF_dogtags",
			"CUP_item_Moscow_Bombing_File",
			"CUP_item_Cobalt_File",
			"CUP_item_Money"
		};
		weapons[]=
		{
			"CUP_item_base",
			"CUP_item_Money",
			"CUP_item_Kostey_photos",
			"CUP_item_Kostey_map_case",
			"CUP_item_Kostey_notebook",
			"CUP_item_CDF_dogtags",
			"CUP_item_Moscow_Bombing_File",
			"CUP_item_Cobalt_File",
			"CUP_Vector21Nite",
			"CUP_SOFLAM",
			"CUP_LRTV"
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
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Binocular;
	class LaserDesignator;
	class CUP_item_base: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=0;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
			class Pointer
			{
			};
			class FlashLight
			{
			};
		};
	};
	class CUP_item_Money: CUP_item_base
	{
		scope=2;
		displayName="Money";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_money_ca.paa";
		descriptionShort="Money";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_SmallObj_Money.p3d";
	};
	class CUP_item_Kostey_photos: CUP_item_base
	{
		scope=2;
		displayName="Kostey's Photos";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_photo_folder_ca.paa";
		descriptionShort="Kostey's Photos";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_SmallObj_FilePhotos.p3d";
	};
	class CUP_item_Kostey_map_case: CUP_item_base
	{
		scope=2;
		displayName="Kostey's map case";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_maps_CA.paa";
		descriptionShort="Kostey's map case";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_SmallObj_FileMaps.p3d";
	};
	class CUP_item_Kostey_notebook: CUP_item_base
	{
		scope=2;
		displayName="Kostey's Notebook";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_notebook_ca.paa";
		descriptionShort="Kostey's Notebook";
	};
	class CUP_item_CDF_dogtags: CUP_item_base
	{
		scope=2;
		displayName="CDF Dogtags";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_dog_tags_CA.paa";
		descriptionShort="CDF Dogtags";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_SmallObj_DogTags.p3d";
	};
	class CUP_item_Moscow_Bombing_File: CUP_item_base
	{
		scope=2;
		displayName="Moscow Bombing File";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_moscow_docs_CA.paa";
		descriptionShort="Moscow Bombing File";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_SmallObj_MoscowDocs.p3d";
	};
	class CUP_item_Cobalt_File: CUP_item_base
	{
		scope=2;
		displayName="Cobalt File";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_spukayev_docs_ca.paa";
		descriptionShort="Cobalt File";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_SmallObj_SpukayevDocs.p3d";
	};
	class CUP_Vector21Nite: Binocular
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_DN_Vector";
		descriptionShort="$STR_CUP_DSS_Vector";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_Vector21.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\gear_item_vector21_ca.paa";
		modelOptics="\CUP\Weapons\CUP_Weapons_Items\CUP_Vector21_optic.p3d";
		opticsZoomInit=0.029300001;
		opticsZoomMin=0.029300001;
		opticsZoomMax=0.029300001;
		weaponInfoType="RscWeaponRangeFinder";
	};
	class CUP_SOFLAM: Binocular
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_DN_SOLFAM";
		descriptionShort="$STR_CUP_DSS_SOLFAM";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\gear_item_soflam_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_Soflam.p3d";
		modelOptics="\CUP\Weapons\CUP_Weapons_Items\CUP_optika_SOFLAM.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		simulation="weapon";
		forceOptics=0;
		Laser=1;
		magazines[]=
		{
			"Laserbatteries"
		};
		weaponInfoType="RscWeaponRangeFinder";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class WeaponSlotsInfo
		{
			mass=50;
		};
		cursor="LaserDesignator";
		cursorAim="EmptyCursor";
		cursorAimOn="EmptyCursor";
		showSwitchAction=1;
	};
	class CUP_LRTV: LaserDesignator
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_DN_LRTV";
		descriptionShort="$STR_CUP_DSS_LRT";
		model="\CUP\Weapons\CUP_Weapons_Items\CUP_LRTV.p3d";
		modelOptics="\CUP\Weapons\CUP_Weapons_Items\CUP_LRTV_optic.p3d";
		picture="\CUP\Weapons\CUP_Weapons_Items\data\ui\picture_LRTV_CA.paa";
		discretefov[]={0.079000004,0.026000001};
		discreteInitIndex=0;
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class CUP_item_Kostey_photos: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Kostey's Photos";
		vehicleClass="Items";
		class TransportItems
		{
			class Item
			{
				name="CUP_item_Kostey_photos";
				count=1;
			};
		};
	};
	class CUP_item_Kostey_map_case: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Kostey's map case";
		vehicleClass="Items";
		class TransportItems
		{
			class Item
			{
				name="CUP_item_Kostey_map_case";
				count=1;
			};
		};
	};
	class CUP_item_Kostey_notebook: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Kostey's Notebook";
		vehicleClass="Items";
		class TransportItems
		{
			class Item
			{
				name="CUP_item_Kostey_notebook";
				count=1;
			};
		};
	};
	class CUP_item_CDF_dogtags: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CDF Dogtags";
		vehicleClass="Items";
		class TransportItems
		{
			class Item
			{
				name="CUP_item_CDF_dogtags";
				count=1;
			};
		};
	};
	class CUP_item_Moscow_Bombing_File: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Moscow Bombing File";
		vehicleClass="Items";
		class TransportItems
		{
			class Item
			{
				name="CUP_item_Moscow_Bombing_File";
				count=1;
			};
		};
	};
	class CUP_item_Cobalt_File: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Cobalt File";
		vehicleClass="Items";
		class TransportItems
		{
			class Item
			{
				name="CUP_item_Cobalt_File";
				count=1;
			};
		};
	};
	class CUP_item_Money: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Money";
		vehicleClass="Items";
		class TransportItems
		{
			class Item
			{
				name="CUP_item_Money";
				count=1;
			};
		};
	};
};
class CfgUnitInsignia
{
	class CUP_modderzz
	{
		displayName="Modderzz";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_modderzz.paa";
		textureVehicle="";
	};
	class CUP_modderzz_2
	{
		displayName="All I Got";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_modderzz_2.paa";
		textureVehicle="";
	};
	class CUP_Logo_Plain
	{
		displayName="CUP Logo";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_plain.paa";
		textureVehicle="";
	};
	class CUP_Logo_Plain_black
	{
		displayName="CUP Logo Black";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_plain_b.paa";
		textureVehicle="";
	};
	class CUP_Logo_units
	{
		displayName="CUP Logo Units";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_units.paa";
		textureVehicle="";
	};
	class CUP_Logo_units_black
	{
		displayName="CUP Logo Units Black";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_units_b.paa";
		textureVehicle="";
	};
	class CUP_Logo_vehicles
	{
		displayName="CUP Logo Vehicles";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_vehicles.paa";
		textureVehicle="";
	};
	class CUP_Logo_vehicles_black
	{
		displayName="CUP Logo Vehicles Black";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_vehicles_b.paa";
		textureVehicle="";
	};
	class CUP_Logo_weapons
	{
		displayName="CUP Logo Weapons";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_weapons.paa";
		textureVehicle="";
	};
	class CUP_Logo_weapons_black
	{
		displayName="CUP Logo Weapons Black";
		author="$STR_CUP_AUTHOR_STRING";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_cup_weapons_b.paa";
		textureVehicle="";
	};
	class CUP_insignia_1st_cavalary
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="1st Cavalry Division";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_1st_cavalry.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_1st_infantry
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="1st Infantry Division";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_1st_infantry.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_1st_meu
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="1st Marine Expeditionary Unit";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_1st_meu.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_2nd_cavalry
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="2nd Cavalry Division";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_2nd_cavalry.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_2nd_infantry
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="2nd Infantry Division";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_2nd_infantry.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_10th_mountain
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="10th Mountain";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_10th_mountain.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_75th_ranger
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="75th Ranger Regiment";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_75th_ranger.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_101st_airborne
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="101st Airborne Division";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_101st_airborne.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_spc_airborne_ranger
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Special Forces (Ranger)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_spc_airborne_ranger.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_special_forces
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Special Forces";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_special_forces.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_3rd_ab
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="3rd Separate Assault Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_3rd_ab.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_3rd_ablowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="3rd Separate Assault Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_3rd_ablowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_5th_ab
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="5th Separate Assault Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_5th_ab.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_5th_ablowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="5th Separate Assault Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_5th_ablowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_10th_mountainua
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="10th Mountain Assault Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_10th_mountainua.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_10th_mountainualowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="10th Mountain Assault Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_10th_mountainualowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_112th_tdf
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="112th Territorial Defense Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_112th_tdf.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_112th_tdflowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="112th Territorial Defense Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_112th_tdflowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_47th_mech
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="47th Separate Mechanized Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_47th_mech.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_47th_mechlowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="47th Separate Mechanized Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_47th_mechlowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_93th_mech
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="93th Separate Mechanized Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_93th_mech_ca.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_93th_mechlowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="93th Separate Mechanized Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_93th_mechlowvis_ca.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_25th_airborne
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="25th Airborne Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_25th_airborne.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_25th_airbornelowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="25th Airborne Brigade (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_25th_airbornelowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_aaf
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Air Assault Forces (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_aaf.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_aaflowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Air Assault Forces (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_aaflowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_ildu
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="International Legion of Territorial Defense of Ukraine (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_ildu.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_ildulowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="International Legion of Territorial Defense of Ukraine (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_ildulowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_kraken
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Kraken Spetsnaz Regiment (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_kraken.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_krakenlowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Kraken Spetsnaz Regiment (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_krakenlowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_sso
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Special Operations Forces SSO (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_sso.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_ua_ssolowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="Special Operations Forces SSO (UA)";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_ua_ssolowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_phoenix_color
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="PHOENIX - Aid Work Project";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_phoenix_color.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class CUP_insignia_phoenix_lowvis
	{
		author="$STR_CUP_AUTHOR_STRING";
		displayName="PHOENIX - Aid Work Project";
		texture="\CUP\Weapons\CUP_Weapons_Items\data\insignia\insignia_phoenix_lowvis.paa";
		textureVehicle="";
		material="\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};
