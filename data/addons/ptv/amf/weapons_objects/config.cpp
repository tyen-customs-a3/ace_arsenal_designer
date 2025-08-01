
#define _ARMA_

class CfgPatches
{
	class amf_weapon_objects
	{
		units[] = {
			// "AMF_Weapon_714_Long",
			// "AMF_Weapon_714_Long_tan",
			// "AMF_Weapon_714_Short",
			// "AMF_Weapon_714_Short_tan",
			// "AMF_Weapon_614_long",
			// "AMF_Weapon_614_short",
			// "AMF_Weapon_614_long_40mm",
			// "AMF_Weapon_614_A4_MOE",
			// "AMF_Weapon_614_A4_MOE_TAN",
			// "AMF_Weapon_Perseis_II",
			// "AMF_Weapon_Perseis_II_01",
			// "AMF_Weapon_famas_f1",
			// "AMF_Weapon_famas_g2",
			// "AMF_Weapon_famas_felin",
			// "AMF_Weapon_famas_valo",
			// "AMF_Weapon_glock17",
			// "amf_Weapon_hk_mp5",
			// "amf_Weapon_mag58",
			// "amf_Weapon_mini_mg",
			// "AMF_Weapon_Pamas",
			// "AMF_Weapon_PGM_ULTIMA_RATIO",
			// "AMF_Weapon_RFF2",
			// "AMF_Weapon_SCAR_H_01_F",
			// "AMF_Weapon_SCAR_H_painted",
			// "AMF_Weapon_SCAR_H_02_F",
			// "AMF_Weapon_SCAR_H_03_F",
			// "AMF_Weapon_SCAR_H_02_F_BLK",
			// "AMF_Weapon_SCAR_H_03_F_BLK",
			// "AMF_Weapon_SCAR_L_01_F",
			// "AMF_Weapon_SCAR_L_01_F_TAN",
			// "AMF_Weapon_SCAR_L_02_F",
			// "AMF_Weapon_SCAR_L_02_F_TAN",
			// "AMF_Weapon_AT4CS_Loaded"
		};
		weapons[] = {};
		requiredVersion = 2.0;
		requiredAddons[] = {
			// "AMF_weapon_F",
			// "AMF_weapon_F_S",
			// "AMF_PERSEIS_II",
			// "AMF_PERSEIS_II_POLY",
			// "AMF_FAMAS",
			// "AMF_Glock_17",
			// "AMF_Weapons_HK_MP5_01",
			// "amf_mag58_mg",
			// "amf_mini_mg",
			// "AMF_Pamas",
			// "AMF_PGM_ULTIMA_RATIO",
			// "AMF_RFF2",
			// "AMF_weapon_F_scar",
			// "AMF_Launchers_AT4CS"
		};
	};
};
class CfgEditorCategories
{
	class AMF_weapons
	{
		displayName = "AMF weapons";
	};
};
class CfgEditorSubcategories
{
	class AMF_Weapons_long
	{
		displayName = "Long distance";
	};
	class AMF_Weapons_smg
	{
		displayName = "Short distance";
	};
	class AMF_Weapons_AP
	{
		displayName = "Pistols";
	};
	class AMF_Weapons_MG
	{
		displayName = "Machine Gun";
	};
	class AMF_Weapons_LA
	{
		displayName = "Launcher";
	};
};
class Item_Base_F;
class Cfgvehicles
{
	class Weapon_Base_F;
	/*
	class AMF_Weapon_714_Long: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "HK 417 A2 (16 pouces)";
		author = "Haxxerd & AMF TEAM";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_714_Long_01_F
			{
				weapon = "AMF_714_Long_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_HK417_mag
			{
				magazine = "20Rnd_762x51_HK417_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_714_Long_tan: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "HK 417 A2 Tan (16 pouces)";
		author = "Haxxerd & AMF TEAM";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_714_long_tan_f
			{
				weapon = "AMF_714_long_tan_f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_HK417_mag
			{
				magazine = "20Rnd_762x51_HK417_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_714_Short: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "HK 417 A2 (13 pouces)";
		author = "Haxxerd & AMF TEAM";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_714_short_01_F
			{
				weapon = "AMF_714_short_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_HK417_mag
			{
				magazine = "20Rnd_762x51_HK417_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_714_Short_tan: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "HK 417 A2 (13 pouces - RAL8000)";
		author = "Haxxerd & AMF TEAM";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_714_short_tan_f
			{
				weapon = "AMF_714_short_tan_f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_HK417_mag
			{
				magazine = "20Rnd_762x51_HK417_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_614_long: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ARNIE & AMF TEAM";
		displayName = "HK 416 F-S";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_614_long_01_F
			{
				weapon = "AMF_614_long_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_614_short: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ARNIE & AMF TEAM";
		displayName = "HK 416 F-C";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_614_short_01_F
			{
				weapon = "AMF_614_short_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_614_long_40mm: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ARNIE/LKDSG & AMF TEAM";
		displayName = "HK 416 F-S/HK269";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_614_long_HK269_01_F
			{
				weapon = "AMF_614_long_HK269_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_614_A4_MOE: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ARNIE/MetalTryHard & AMF TEAM";
		displayName = "HK 416A5 MOE (13 pouces)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_614_long_FS_BLK
			{
				weapon = "AMF_614_long_FS_BLK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_614_A4_MOE_TAN: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ARNIE/MetalTryHard & AMF TEAM";
		displayName = "HK 416A5 MOE (13 pouces/RAL8000)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_614_long_FS_TAN
			{
				weapon = "AMF_614_long_FS_TAN";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_Perseis_II: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Armada, Krogar & AMF Team";
		displayName = "PGM Hecate II (bois)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Perseis_II_01_F
			{
				weapon = "AMF_Perseis_II_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 7Rnd_Perseis_II_mag
			{
				magazine = "7Rnd_Perseis_II_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_Perseis_II_01: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Armada, Krogar & AMF Team";
		displayName = "PGM Hecate II (Polymere)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Perseis_II_02_F
			{
				weapon = "AMF_Perseis_II_poly_02_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 7Rnd_Perseis_II_mag
			{
				magazine = "7Rnd_Perseis_II_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_famas_f1: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "KROGAR & AMF TEAM";
		displayName = "FAMAS F1";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Samas_F1_01_F
			{
				weapon = "AMF_Samas_F1_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 25Rnd_samas_f1_mag
			{
				magazine = "25Rnd_samas_f1_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_famas_g2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "KROGAR & AMF TEAM";
		displayName = "FAMAS G2";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Samas_G2_01_F
			{
				weapon = "AMF_Samas_G2_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_famas_felin: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "KROGAR & AMF TEAM";
		displayName = "FAMAS FELIN";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Samas_FELIN_01_F
			{
				weapon = "AMF_Samas_FELIN_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_famas_valo: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "KROGAR & AMF TEAM";
		displayName = "FAMAS VALO Paint TAN";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Samas_VALO_painted
			{
				weapon = "AMF_Samas_VALO_painted";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_glock17: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Haxxerd & AMF Team";
		displayname = "GLOCK 17";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_AP";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Glock_17
			{
				weapon = "AMF_Glock_17";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 1;
			};
		};
	};
	class amf_Weapon_hk_mp5: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Haxxerd & AMF Team";
		displayName = "HK MP5-A2";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class amf_hk_mp5_01_f
			{
				weapon = "amf_hk_mp5_01_f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_9x19_mag
			{
				magazine = "30Rnd_9x19_mag";
				count = 1;
			};
		};
	};
	/*
	class amf_Weapon_mag58: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Sztigran & AMF TEAM";
		displayName = "FN Mag 58 7.62mm";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_MG";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class amf_mag58_01_f
			{
				weapon = "amf_mag58_01_f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 50Rnd_mag58_mag
			{
				magazine = "50Rnd_mag58_mag";
				count = 1;
			};
		};
	};
	class amf_Weapon_mini_mg: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Sztigran & AMF TEAM";
		displayName = "MINIMI 5.56 mm (PARA)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_MG";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class amf_mini_mg_01_f
			{
				weapon = "amf_mini_mg_01_f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 150Rnd_MINI_MG_mag
			{
				magazine = "150Rnd_MINI_MG_mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_Pamas: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Fainter & AMF Team";
		displayname = "PAMAS G1";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_AP";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_Pamas
			{
				weapon = "AMF_Pamas";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 15Rnd_9x21_Mag
			{
				magazine = "15Rnd_9x21_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_PGM_ULTIMA_RATIO: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Wisexe & AMF Team";
		displayName = "PGM Ultima Ratio";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_PGM_ULTIMA_RATIO_01_F
			{
				weapon = "AMF_PGM_ULTIMA_RATIO_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_RFF2: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Mikhail Antipin & AMF Team";
		displayName = "FR-F2";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_RFF2_01_F
			{
				weapon = "AMF_RFF2_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_H_01_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Hrestonosez & AMF TEAM";
		displayName = "FN SCAR H PR";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_H_01_F
			{
				weapon = "AMF_SCAR_H_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_H_painted: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Hrestonosez & AMF TEAM";
		displayName = "FN SCAR H PR (Tan)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_H_painted
			{
				weapon = "AMF_SCAR_H_painted";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_H_02_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Hrestonosez & AMF TEAM";
		displayName = "FN SCAR H STD (Tan)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_H_02_F
			{
				weapon = "AMF_SCAR_H_02_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_H_03_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Hrestonosez & AMF TEAM";
		displayName = "FN SCAR H CQC (Tan)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_H_03_F
			{
				weapon = "AMF_SCAR_H_03_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_H_02_F_BLK: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Hrestonosez & AMF TEAM";
		displayName = "FN SCAR H STD (BLK)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_H_02_F_BLK
			{
				weapon = "AMF_SCAR_H_02_F_BLK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_H_03_F_BLK: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Hrestonosez & AMF TEAM";
		displayName = "FN SCAR H CQC (BLK)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_long";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_H_03_F_BLK
			{
				weapon = "AMF_SCAR_H_03_F_BLK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_762x51_Mag
			{
				magazine = "10Rnd_762x51_Mag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_L_01_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "POLYMAN & AMF TEAM";
		displayName = "FN SCAR L CQC (BLK)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_L_01_F
			{
				weapon = "AMF_SCAR_L_01_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_L_01_F_TAN: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "POLYMAN & AMF TEAM";
		displayName = "FN SCAR L CQC (TAN)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_L_01_F_TAN
			{
				weapon = "AMF_SCAR_L_01_F_TAN";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_L_02_F: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "POLYMAN & AMF TEAM";
		displayName = "FN SCAR L STD (BLK)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_L_02_F
			{
				weapon = "AMF_SCAR_L_02_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_SCAR_L_02_F_TAN: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "POLYMAN & AMF TEAM";
		displayName = "FN SCAR L STD (TAN)";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_SCAR_L_02_F_TAN
			{
				weapon = "AMF_SCAR_L_02_F_TAN";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
	class AMF_Weapon_AT4CS_Loaded: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "AceAlex73 & AMF";
		displayName = "BOFORS AT4-CS";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_LA";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class AMF_AT4CS_Loaded
			{
				weapon = "AMF_AT4CS_Loaded";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class CBA_FakeLauncherMagazine
			{
				magazine = "CBA_FakeLauncherMagazine";
				count = 1;
			};
		};
	};
	*/
	class amf_Weapon_sig552: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Samuel Janech & AMF TEAM";
		displayName = "SIG 552";
		editorCategory = "AMF_weapons";
		editorSubcategory = "AMF_Weapons_smg";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class amf_sig552
			{
				weapon = "amf_sig552";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
		};
	};
};
class cfgMods
{
	author = "armamodfrance";
	timepacked = "1688413476";
};
