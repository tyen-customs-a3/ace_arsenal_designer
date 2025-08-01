class CfgPatches
{
	class CUP_Weapons_East_Attachments
	{
		units[]={};
		weapons[]=
		{
			"CUP_optic_PSO_1",
			"CUP_optic_PSO_1_open",
			"CUP_optic_PSO_1_open_pip",
			"CUP_optic_PSO_1_AK",
			"CUP_optic_PSO_1_AK_open",
			"CUP_optic_PSO_1_AK_open_pip",
			"CUP_optic_PSO_1_1",
			"CUP_optic_PSO_1_1_open",
			"CUP_optic_PSO_1_1_open_pip",
			"CUP_optic_PSO_3",
			"CUP_optic_PSO_3_open",
			"CUP_optic_PSO_3_open_pip",
			"CUP_optic_Kobra",
			"CUP_optic_Kobra_01",
			"CUP_optic_Kobra_02",
			"CUP_optic_Kobra_03",
			"CUP_optic_GOSHAWK",
			"CUP_optic_GOSHAWK_RIS",
			"CUP_optic_NSPU",
			"CUP_optic_PechenegScope",
			"CUP_optic_PechenegScope_pip",
			"CUP_optic_PechenegScope_3D",
			"CUP_optic_ekp_8_02",
			"CUP_optic_ekp_8_02_01",
			"CUP_optic_ekp_8_02_02",
			"CUP_optic_ekp_8_02_03",
			"CUP_optic_GrozaScope",
			"CUP_optic_GrozaScope_pip",
			"CUP_optic_1p63",
			"CUP_optic_1P87_RIS",
			"CUP_optic_1P87_RIS_desert",
			"CUP_optic_1P87_RIS_woodland",
			"CUP_optic_OKP_7",
			"CUP_muzzle_snds_groza",
			"CUP_muzzle_PB6P9",
			"CUP_muzzle_Bizon",
			"CUP_muzzle_PBS4",
			"CUP_muzzle_mfsup_Flashhider_East_Base",
			"CUP_muzzle_mfsup_Flashhider_East_PK_Base",
			"CUP_muzzle_mfsup_Flashhider_545x39_Black",
			"CUP_muzzle_mfsup_Flashhider_545x39_OD",
			"CUP_muzzle_mfsup_Flashhider_545x39_Tan",
			"CUP_muzzle_mfsup_Flashhider_762x39_Black",
			"CUP_muzzle_mfsup_Flashhider_762x39_OD",
			"CUP_muzzle_mfsup_Flashhider_762x39_Tan",
			"CUP_muzzle_mfsup_Flashhider_PK_Black",
			"CUP_muzzle_mfsup_Flashhider_PK_OD",
			"CUP_muzzle_mfsup_Flashhider_PK_Tan",
			"CUP_muzzle_TGPA",
			"CUP_muzzle_TGPA_desert",
			"CUP_muzzle_TGPA_woodland",
			"CUP_muzzle_snds_KZRZP_Base",
			"CUP_muzzle_snds_KZRZP_SVD",
			"CUP_muzzle_snds_KZRZP_AK762",
			"CUP_muzzle_snds_KZRZP_AK545",
			"CUP_muzzle_snds_KZRZP_PK",
			"CUP_muzzle_snds_KZRZP_SVD_desert",
			"CUP_muzzle_snds_KZRZP_AK762_desert",
			"CUP_muzzle_snds_KZRZP_AK545_desert",
			"CUP_muzzle_snds_KZRZP_PK_desert",
			"CUP_muzzle_snds_KZRZP_SVD_woodland",
			"CUP_muzzle_snds_KZRZP_AK762_woodland",
			"CUP_muzzle_snds_KZRZP_AK545_woodland",
			"CUP_muzzle_snds_KZRZP_PK_woodland",
			"CUP_optic_1P87_1P90_BLK",
			"CUP_optic_OKP_7_w",
			"CUP_optic_OKP_7_d",
			"CUP_optic_OKP_7_rail",
			"CUP_optic_OKP_7_w_rail",
			"CUP_optic_OKP_7_d_rail",
			"CUP_acc_Zenit_2DS"
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
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems
	{
		CUP_optic_PSO_1=1;
		CUP_optic_Kobra=1;
		CUP_optic_GOSHAWK=1;
		CUP_optic_NSPU=1;
		CUP_optic_PSO_3=1;
		CUP_optic_ekp_8_02=1;
		CUP_optic_PSO_1_AK=1;
		CUP_optic_PSO_1_open=1;
		CUP_optic_PSO_1_open_pip=1;
		CUP_optic_PSO_1_AK_open=1;
		CUP_optic_PSO_1_AK_open_pip=1;
		CUP_optic_PSO_3_open=1;
		CUP_optic_PSO_3_open_pip=1;
		CUP_optic_PSO_1_1=1;
		CUP_optic_PSO_1_1_open=1;
		CUP_optic_PSO_1_1_open_pip=1;
		CUP_optic_PechenegScope=1;
		CUP_optic_PechenegScope_pip=1;
		CUP_optic_PechenegScope_3D=1;
		CUP_optic_ekp_8_02_01=1;
		CUP_optic_ekp_8_02_02=1;
		CUP_optic_ekp_8_02_03=1;
		CUP_optic_Kobra_01=1;
		CUP_optic_Kobra_02=1;
		CUP_optic_Kobra_03=1;
		CUP_optic_1p63=1;
		CUP_optic_1p63_filter=1;
		CUP_optic_OKP_7=1;
		CUP_optic_OKP_7_w=1;
		CUP_optic_OKP_7_d=1;
	};
};
class CUP_DovetailMount: asdg_OpticSideMount
{
	scope=0;
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="East Dovetail Optics Mount";
};
class CUP_PerchenegMount: asdg_OpticRail
{
	class compatibleItems
	{
		CUP_optic_PechenegScope=1;
	};
};
class CUP_GrozaTopMount: asdg_OpticRail
{
	class compatibleItems
	{
		CUP_optic_GrozaScope=1;
		CUP_optic_GrozaScope_pip=1;
	};
};
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		CUP_optic_GOSHAWK_RIS=1;
		CUP_optic_1P87_RIS=1;
		CUP_optic_1P87_RIS_desert=1;
		CUP_optic_1P87_RIS_woodland=1;
		CUP_optic_OKP_7_rail=1;
		CUP_optic_OKP_7_w_rail=1;
		CUP_optic_OKP_7_d_rail=1;
		CUP_optic_1P87_1P90_BLK=1;
		CUP_optic_1P87_1P90_BLK_DWN=1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		CUP_muzzle_PBS4=1;
		CUP_muzzle_TGPA=1;
		CUP_muzzle_TGPA_desert=1;
		CUP_muzzle_TGPA_woodland=1;
		CUP_muzzle_snds_KZRZP_AK545=1;
		CUP_muzzle_snds_KZRZP_AK545_desert=1;
		CUP_muzzle_snds_KZRZP_AK545_woodland=1;
		CUP_muzzle_mfsup_Flashhider_545x39_Black=1;
		CUP_muzzle_mfsup_Flashhider_545x39_OD=1;
		CUP_muzzle_mfsup_Flashhider_545x39_Tan=1;
	};
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		CUP_muzzle_Bizon=1;
		CUP_muzzle_snds_KZRZP_AK762=1;
		CUP_muzzle_snds_KZRZP_AK762_desert=1;
		CUP_muzzle_snds_KZRZP_AK762_woodland=1;
		CUP_muzzle_mfsup_Flashhider_762x39_Black=1;
		CUP_muzzle_mfsup_Flashhider_762x39_OD=1;
		CUP_muzzle_mfsup_Flashhider_762x39_Tan=1;
	};
};
class asdg_MuzzleSlot_762R_SVD: asdg_MuzzleSlot
{
	class compatibleItems
	{
		CUP_muzzle_snds_KZRZP_SVD=1;
		CUP_muzzle_snds_KZRZP_SVD_desert=1;
		CUP_muzzle_snds_KZRZP_SVD_woodland=1;
	};
};
class asdg_MuzzleSlot_762R_PK: asdg_MuzzleSlot
{
	class compatibleItems
	{
		CUP_muzzle_mfsup_Flashhider_PK_Black=1;
		CUP_muzzle_mfsup_Flashhider_PK_OD=1;
		CUP_muzzle_mfsup_Flashhider_PK_Tan=1;
		CUP_muzzle_snds_KZRZP_PK=1;
		CUP_muzzle_snds_KZRZP_PK_desert=1;
		CUP_muzzle_snds_KZRZP_PK_woodland=1;
	};
};
class CUP_EastGrozaMuzzleSlot: asdg_MuzzleSlot
{
	class compatibleItems
	{
		CUP_muzzle_snds_groza=1;
	};
};
class CUP_EastMuzzleSlotPBS4: asdg_MuzzleSlot_545R
{
	scope=0;
	displayName="Suppressor Attachment";
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
};
class CUP_EastMuzzleSlot9mm: asdg_MuzzleSlot_762R
{
	scope=0;
	displayName="Suppressor Attachment";
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		CUP_acc_Zenit_2DS=1;
	};
};
class CBA_PIPItems
{
	CUP_optic_GrozaScope="CUP_optic_GrozaScope_pip";
	CUP_optic_PSO_1_open="CUP_optic_PSO_1_open_pip";
	CUP_optic_PSO_1_AK_open="CUP_optic_PSO_1_AK_open_pip";
	CUP_optic_PSO_3_open="CUP_optic_PSO_3_open_pip";
	CUP_optic_PSO_1_1_open="CUP_optic_PSO_1_1_open_pip";
	CUP_optic_PechenegScope="CUP_optic_PechenegScope_pip";
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_L;
	class CUP_optic_1P87_RIS: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_East_Attachments\1P87\CUP_PK120.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\1P87\data\ui\gear_acco_pk120_ca.paa";
		displayName="$STR_CUP_dn_1P87";
		descriptionShort="$STR_CUP_dss_CCO";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]={};
				};
			};
		};
	};
	class CUP_optic_1P87_RIS_desert: CUP_optic_1P87_RIS
	{
		displayName="$STR_CUP_dn_1P87_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\1P87\data\ui\gear_acco_pk120_desert_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\1P87\CUP_PK120_desert.p3d";
	};
	class CUP_optic_1P87_RIS_woodland: CUP_optic_1P87_RIS
	{
		displayName="$STR_CUP_dn_1P87_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\1P87\data\ui\gear_acco_pk120_woodland_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\1P87\CUP_PK120_woodland.p3d";
	};
	class CUP_optic_1P87_1P90_BLK: ItemCore
	{
		scope=2;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		inertia=0.2;
		displayName="1P87 w/1P90";
		descriptionShort="Magnified Combat Optic";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\1P90\data\ui\gear_acco_1P87_1P90_BLK_up_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\1P90\CUP_1P90_blk_up.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Advanced Rifle Combat Optics";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class G33
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.086300001;
					opticsZoomMax=0.086300001;
					opticsZoomInit=0.086300001;
					memoryPointCamera="opticView";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
			};
		};
		MRT_SwitchItemNextClass="CUP_optic_1P87_1P90_BLK_DWN";
		MRT_SwitchItemPrevClass="CUP_optic_1P87_1P90_BLK_DWN";
		MRT_switchItemHintText="";
	};
	class CUP_optic_1P87_1P90_BLK_DWN: ItemCore
	{
		scope=1;
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		inertia=0.2;
		arsenalScope=0;
		displayName="1P87 w/1P90";
		descriptionShort="Magnified Combat Optic";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\1P90\data\ui\gear_acco_1P87_1P90_BLK_dn_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\1P90\CUP_1P90_blk_dn.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Advanced Rifle Combat Optics";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Kolimator
				{
					opticsID=1;
					opticsPPEffects[]={};
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
		MRT_SwitchItemNextClass="CUP_optic_1P87_1P90_BLK";
		MRT_SwitchItemPrevClass="CUP_optic_1P87_1P90_BLK";
		MRT_switchItemHintText="";
	};
	class CUP_muzzle_Bizon: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		inertia=0.1;
		displayName="$STR_CUP_dn_snds_PBS1";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\bizon_Silencer\data\UI\gear_acca_bizon_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\bizon_silencer\CUP_bizon_silencer.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.07;
				audibleFire=0.07;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			muzzleEnd="muzzlePoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_optic_ekp_8_02: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_ekp8";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\ekp_8_02\data\UI\gear_acco_ekp8_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\ekp_8_02\CUP_ekp_8_02.p3d";
		descriptionShort="$STR_CUP_dss_kobra";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		MRT_SwitchItemPrevClass="CUP_optic_ekp_8_02_03";
		MRT_SwitchItemNextClass="CUP_optic_ekp_8_02_01";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			RMBhint="Advanced Collimator Optics";
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]={};
				};
			};
		};
	};
	class CUP_optic_ekp_8_02_01: CUP_optic_ekp_8_02
	{
		model="CUP\Weapons\CUP_Weapons_East_Attachments\ekp_8_02\CUP_ekp_8_02_01.p3d";
		MRT_SwitchItemPrevClass="CUP_optic_ekp_8_02";
		MRT_SwitchItemNextClass="CUP_optic_ekp_8_02_02";
		scope=1;
		scopeArsenal=0;
	};
	class CUP_optic_ekp_8_02_02: CUP_optic_ekp_8_02
	{
		model="CUP\Weapons\CUP_Weapons_East_Attachments\ekp_8_02\CUP_ekp_8_02_02.p3d";
		MRT_SwitchItemPrevClass="CUP_optic_ekp_8_02_01";
		MRT_SwitchItemNextClass="CUP_optic_ekp_8_02_03";
		scope=1;
		scopeArsenal=0;
	};
	class CUP_optic_ekp_8_02_03: CUP_optic_ekp_8_02
	{
		model="CUP\Weapons\CUP_Weapons_East_Attachments\ekp_8_02\CUP_ekp_8_02_03.p3d";
		MRT_SwitchItemPrevClass="CUP_optic_ekp_8_02_02";
		MRT_SwitchItemNextClass="CUP_optic_ekp_8_02";
		scope=1;
		scopeArsenal=0;
	};
	class CUP_muzzle_mfsup_Flashhider_East_Base: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=0;
		displayName="Flash hider";
		inertia=0.02;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class AmmoCoef
			{
				hit=1;
				visibleFire=0;
				audibleFire=1;
				visibleFireTime=0;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_muzzle_mfsup_Flashhider_545x39_Black: CUP_muzzle_mfsup_Flashhider_East_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_545x39_black";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_black.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_black_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_545x39_OD: CUP_muzzle_mfsup_Flashhider_East_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_545x39_od";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_green.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_green_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_545x39_Tan: CUP_muzzle_mfsup_Flashhider_East_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_545x39_tan";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_tan.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_tan_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_762x39_Black: CUP_muzzle_mfsup_Flashhider_East_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_762x39_black";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_black.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_black_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_762x39_OD: CUP_muzzle_mfsup_Flashhider_East_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_762x39_od";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_green.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_green_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_762x39_Tan: CUP_muzzle_mfsup_Flashhider_East_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_762x39_tan";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_tan.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_tan_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_East_PK_Base: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=0;
		displayName="Flash hider";
		inertia=0.039999999;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=6.5;
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.1;
				audibleFire=1;
				visibleFireTime=0.1;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_muzzle_mfsup_Flashhider_PK_Black: CUP_muzzle_mfsup_Flashhider_East_PK_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_PK_black";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_PK_black.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_black_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_PK_OD: CUP_muzzle_mfsup_Flashhider_East_PK_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_PK_od";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_PK_od.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_green_ca.paa";
	};
	class CUP_muzzle_mfsup_Flashhider_PK_Tan: CUP_muzzle_mfsup_Flashhider_East_PK_Base
	{
		scope=2;
		displayName="$STR_CUP_dn_mfsup_flashhider_PK_tan";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\Flashhider_PK_tan.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Flashhider\data\ui\gear_accm_flashhider_tan_ca.paa";
	};
	class CUP_optic_GOSHAWK: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_East_Attachments\goshawk\CUP_goshawk.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\goshawk\data\ui\gear_acco_goshawk_ca.paa";
		displayName="$STR_CUP_dn_goshawk";
		descriptionShort="$STR_CUP_dss_goshawk";
		weaponInfoType="CBA_ScriptedOptic";
		class CBA_ScriptedOptic
		{
			reticleTexture="\cup\weapons\cup_weapons_east_attachments\goshawk\data\goshawk_ca.paa";
			reticleTextureSize=0.80000001;
			reticleSafezoneSize=1;
			bodyTexture="\cup\weapons\cup_weapons_east_attachments\goshawk\data\goshawk_view_ca.paa";
			bodyTextureSize=2;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=35;
			optics=1;
			opticType=1;
			modelOptics="\A3\Weapons_F\empty";
			inertia=0.30000001;
			class OpticsModes
			{
				class TWS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin="3.6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="3.6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="3.6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Ti"
					};
					thermalMode[]={0};
					opticsDisablePeripherialVision=0;
					opticsFlare=1;
					cameraDir="";
					discreteDistance[]={100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
			};
		};
	};
	class CUP_optic_GOSHAWK_RIS: CUP_optic_GOSHAWK
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_East_Attachments\goshawk\CUP_goshawk_ris.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\goshawk\data\ui\gear_acco_goshawk_ris_ca.paa";
		displayName="$STR_CUP_dn_goshawk_ris";
	};
	class CUP_optic_GrozaScope: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_po4x34";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Groza_Scope\data\ui\gear_acco_groza_scope_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Groza_Scope\CUP_groza_scope.p3d";
		descriptionShort="$STR_CUP_dss_po4x34";
		weaponInfoType="CBA_ScriptedOptic";
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\Groza_Scope\data\po4x34_ca.paa";
			reticleTextureSize=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_bodyNight_ca.paa";
			bodyTextureSize=1.53;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7.9200001;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			inertia=0.2;
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,150,200,250,300,350,400};
					discreteDistanceInitIndex="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.4000001;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_GrozaScope_pip: CUP_optic_GrozaScope
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pip.p3d";
		};
	};
	class CUP_muzzle_snds_groza: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="$STR_CUP_dn_snds_groza";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Groza_Silencer\data\ui\gear_accm_groza_silencer_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Groza_Silencer\CUP_groza_suppressor.p3d";
		inertia=0.1;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10.56;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.07;
				audibleFire=0.07;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_optic_Kobra: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_kobra";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Kobra\data\UI\gear_acco_kobra_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Kobra\CUP_kobra.p3d";
		descriptionShort="$STR_CUP_dss_kobra";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		MRT_SwitchItemPrevClass="CUP_optic_Kobra_03";
		MRT_SwitchItemNextClass="CUP_optic_Kobra_01";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			RMBhint="Advanced Collimator Optics";
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]={};
				};
			};
		};
	};
	class CUP_optic_Kobra_01: CUP_optic_Kobra
	{
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Kobra\CUP_kobra1.p3d";
		MRT_SwitchItemPrevClass="CUP_optic_Kobra";
		MRT_SwitchItemNextClass="CUP_optic_Kobra_02";
		scope=1;
		scopeArsenal=0;
	};
	class CUP_optic_Kobra_02: CUP_optic_Kobra
	{
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Kobra\CUP_kobra2.p3d";
		MRT_SwitchItemPrevClass="CUP_optic_Kobra_01";
		MRT_SwitchItemNextClass="CUP_optic_Kobra_03";
		scope=1;
		scopeArsenal=0;
	};
	class CUP_optic_Kobra_03: CUP_optic_Kobra
	{
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Kobra\CUP_kobra3.p3d";
		MRT_SwitchItemPrevClass="CUP_optic_Kobra_02";
		MRT_SwitchItemNextClass="CUP_optic_Kobra";
		scope=1;
		scopeArsenal=0;
	};
	class CUP_muzzle_snds_KZRZP_Base: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=0;
		displayName="$STR_CUP_dn_snds_KZRZP_SVD";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_kzrzp_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP.p3d";
		inertia=0.2;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.5;
				audibleFire=0.5;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_muzzle_snds_KZRZP_SVD: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_SVD";
	};
	class CUP_muzzle_snds_KZRZP_AK762: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_AK762";
	};
	class CUP_muzzle_snds_KZRZP_AK545: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_AK545";
	};
	class CUP_muzzle_snds_KZRZP_PK: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_PK";
	};
	class CUP_muzzle_snds_KZRZP_SVD_desert: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_SVD_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_desert_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_desert.p3d";
	};
	class CUP_muzzle_snds_KZRZP_AK762_desert: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_AK762_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_desert_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_desert.p3d";
	};
	class CUP_muzzle_snds_KZRZP_AK545_desert: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_AK545_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_desert_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_desert.p3d";
	};
	class CUP_muzzle_snds_KZRZP_PK_desert: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_PK_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_desert_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_desert.p3d";
	};
	class CUP_muzzle_snds_KZRZP_SVD_woodland: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_SVD_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_woodland_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_woodland.p3d";
	};
	class CUP_muzzle_snds_KZRZP_AK762_woodland: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_AK762_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_woodland_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_woodland.p3d";
	};
	class CUP_muzzle_snds_KZRZP_AK545_woodland: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_AK545_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_woodland_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_woodland.p3d";
	};
	class CUP_muzzle_snds_KZRZP_PK_woodland: CUP_muzzle_snds_KZRZP_Base
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_KZRZP_PK_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\data\ui\gear_accm_KZRZP_woodland_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\KZRZP\CUP_KZRZP_woodland.p3d";
	};
	class CUP_optic_NSPU: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		model="CUP\Weapons\CUP_Weapons_East_Attachments\NSPU\CUP_nspu.p3d";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\NSPU\data\ui\gear_acco_nspu_ca.paa";
		displayName="$STR_CUP_dn_nspu";
		descriptionShort="$STR_CUP_dss_nspu";
		class Library
		{
			libTextDesc="Rifle Scope with built-in night vision.";
		};
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.30000001;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\NSPU\data\nspu_1pn34_ca.paa";
			reticleTextureSize=1.02;
			bodyTexture="\a3\weapons_f\acc\data\scope_view_ca.paa";
			bodyTextureSize=0.89999998;
			hidePeripheralVision=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=30;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class NSPU
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]={};
					opticsZoomMin="3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="3.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsDisablePeripherialVision=1;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				class Ironsights: NSPU
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
				};
			};
		};
	};
	class CUP_optic_OKP_7: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_okp7";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\data\ui\gear_acco_OKP_7_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\cup_okp-7.p3d";
		descriptionShort="Russian Reflex Sight";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			RMBhint="Advanced Collimator Optics";
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]={};
				};
			};
		};
	};
	class CUP_optic_OKP_7_w: CUP_optic_OKP_7
	{
		displayName="$STR_CUP_dn_okp7_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\data\ui\gear_acco_OKP_7_woodland_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\cup_okp-7_w.p3d";
		descriptionShort="Russian Reflex Sight";
	};
	class CUP_optic_OKP_7_d: CUP_optic_OKP_7
	{
		displayName="$STR_CUP_dn_okp7_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\data\ui\gear_acco_OKP_7_desert_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\cup_okp-7_d.p3d";
		descriptionShort="Russian Reflex Sight";
	};
	class CUP_optic_OKP_7_rail: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_okp7_rail";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\data\ui\gear_acco_OKP_7_rail_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\cup_okp-7_rail.p3d";
		descriptionShort="Russian Reflex Sight";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			RMBhint="Advanced Collimator Optics";
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]={};
				};
			};
		};
	};
	class CUP_optic_OKP_7_w_rail: CUP_optic_OKP_7_rail
	{
		displayName="$STR_CUP_dn_okp7_rail_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\data\ui\gear_acco_OKP_7_rail_woodland_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\cup_okp-7_rail_w.p3d";
		descriptionShort="Russian Reflex Sight";
	};
	class CUP_optic_OKP_7_d_rail: CUP_optic_OKP_7_rail
	{
		displayName="$STR_CUP_dn_okp7_rail_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\data\ui\gear_acco_OKP_7_rail_desert_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\OKP-7\cup_okp-7_rail_d.p3d";
		descriptionShort="Russian Reflex Sight";
	};
	class CUP_muzzle_PB6P9: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_snds_PB6P9";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PB_6P9_Silencer\Data\UI\gear_acca_pb_6p9_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PB_6P9_Silencer\CUP_pb_6p9_silencer.p3d";
		inertia=0;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_muzzle_PBS4: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="$STR_CUP_dn_snds_PBS4";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\pbs4_Silencer\data\UI\gear_acca_pbs4_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\pbs4_Silencer\CUP_pbs4.p3d";
		inertia=0.1;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.07;
				audibleFire=0.07;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			muzzleEnd="muzzlePoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
	};
	class CUP_optic_PechenegScope: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_PechenegScope";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\data\ui\gear_acco_pechenegscope_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\CUP_pkp_scope.p3d";
		descriptionShort="$STR_CUP_dss_PechenegScope";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.2;
		MRT_SwitchItemNextClass="CUP_optic_PechenegScope_3D";
		MRT_SwitchItemPrevClass="CUP_optic_PechenegScope_3D";
		MRT_switchItemHintText="$STR_CUP_dn_OpticsMode_2D";
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\data\1P78_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\data\1P78_reticle_night_ca.paa";
			reticleTextureSize=1;
			manualReticleNightSwitch=0;
			hidePeripheralVision=1;
			bodyTexture="\a3\weapons_f\acc\data\scope_view_ca.paa";
			bodyTextureSize=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_2d.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="2.8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="2.8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="2.8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=400;
					distanceZoomMax=400;
					discreteInitIndex=0;
					memoryPointCamera="opticsView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
				};
				class Iron: Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye_iron";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class CUP_optic_PechenegScope_pip: CUP_optic_PechenegScope
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		MRT_SwitchItemNextClass="CUP_optic_PechenegScope_3D";
		MRT_SwitchItemPrevClass="CUP_optic_PechenegScope_3D";
		MRT_switchItemHintText="$STR_CUP_dn_OpticsMode_2D";
		class ItemInfo: ItemInfo
		{
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_pip.p3d";
		};
	};
	class CUP_optic_PechenegScope_3D: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		displayName="$STR_CUP_dn_PechenegScope";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\data\ui\gear_acco_pechenegscope_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\CUP_pkp_scope.p3d";
		descriptionShort="$STR_CUP_dss_PechenegScope";
		inertia=0.2;
		MRT_SwitchItemNextClass="CUP_optic_PechenegScope";
		MRT_SwitchItemPrevClass="CUP_optic_PechenegScope";
		MRT_switchItemHintText="$STR_CUP_dn_OpticsMode_3D";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\CUP_2Dscope_Pecheneg.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomInit=0.34999999;
					opticsZoomMin=0.196429;
					opticsZoomMax=0.5;
					distanceZoomMin=400;
					distanceZoomMax=400;
					memoryPointCamera="eye";
					visionMode[]={};
					cameraDir="";
				};
				class Iron: Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye_iron";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
			};
		};
	};
	class CUP_optic_PSO_1: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso1";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_1_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_1.p3d";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.1;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_n_ca.paa";
			reticleTextureSize=0.57700002;
			manualReticleNightSwitch=1;
			hidePeripheralVision=1;
			bodyTexture="\a3\weapons_f\acc\data\scope_view_ca.paa";
			bodyTextureSize=1;
		};
		descriptionShort="$STR_CUP_dss_pso1";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_2d.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
				class Iron: PSO
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=2;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.1094501;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_1_open: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso1_open";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_1_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_1_open.p3d";
		descriptionShort="$STR_CUP_dss_pso1";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.1;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_n_ca.paa";
			reticleTextureSize=0.57700002;
			manualReticleNightSwitch=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_bodyNight_ca.paa";
			bodyTextureSize=1.95;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_2d.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
				class Iron: PSO
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=2;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.1094501;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_1_open_pip: CUP_optic_PSO_1_open
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_pip.p3d";
		};
	};
	class CUP_optic_PSO_1_AK: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso1_ak";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_1_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_1_ak.p3d";
		descriptionShort="$STR_CUP_dss_pso1";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.1;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_n_ca.paa";
			reticleTextureSize=0.57700002;
			manualReticleNightSwitch=1;
			hidePeripheralVision=1;
			bodyTexture="\a3\weapons_f\acc\data\scope_view_ca.paa";
			bodyTextureSize=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_2d.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
				class Iron: PSO
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=2;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.1094501;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_1_AK_open: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso1_ak_open";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_1_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_1_ak_open.p3d";
		descriptionShort="$STR_CUP_dss_pso1";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.1;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_reticle_n_ca.paa";
			reticleTextureSize=0.57700002;
			manualReticleNightSwitch=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_bodyNight_ca.paa";
			bodyTextureSize=1.95;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_2d.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
				class Iron: PSO
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=2;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.1094501;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_1_AK_open_pip: CUP_optic_PSO_1_AK_open
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pso_pip.p3d";
		};
	};
	class CUP_optic_PSO_1_1: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso1_1";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_1_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_1.p3d";
		descriptionShort="$STR_CUP_dn_pso1_1";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.1;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_1_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_1_reticle_n_ca.paa";
			reticleTextureSize=1.154;
			manualReticleNightSwitch=1;
			hidePeripheralVision=1;
			bodyTexture="\a3\weapons_f\acc\data\scope_view_ca.paa";
			bodyTextureSize=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={50,75,100,125,150,175,200,225,250,275,300,325,350,375,400};
					discreteDistanceInitIndex="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
				class Iron: PSO
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye_vss";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					discreteDistance[]={100,200,300,400};
					discreteDistanceInitIndex=0;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.1094501;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_1_1_open: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso1_1_open";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_1_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_1_open.p3d";
		descriptionShort="$STR_CUP_dss_pso1";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.1;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_1_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO1_1_reticle_n_ca.paa";
			reticleTextureSize=1.154;
			manualReticleNightSwitch=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_bodyNight_ca.paa";
			bodyTextureSize=1.95;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13;
			optics=1;
			opticType=1;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomInit="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMin="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={50,75,100,125,150,175,200,225,250,275,300,325,350,375,400};
					discreteDistanceInitIndex="2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
				class Iron: PSO
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye_vss";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discretefov[]={};
					discreteDistance[]={100,200,300,400};
					discreteDistanceInitIndex=0;
				};
			};
		};
		ACE_ScopeHeightAboveRail=2.1094501;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_1_1_open_pip: CUP_optic_PSO_1_1_open
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pip.p3d";
		};
	};
	class CUP_optic_PSO_3: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso3";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_3_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_3.p3d";
		descriptionShort="$STR_CUP_dss_pso3";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO3_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO3_reticle_n_ca.paa";
			reticleTextureSize=1.174;
			manualReticleNightSwitch=1;
			hidePeripheralVision=1;
			bodyTexture="\a3\weapons_f\acc\data\scope_view_ca.paa";
			bodyTextureSize=1;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=16;
			optics=1;
			opticType=2;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomInit="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMin="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
			};
		};
		ACE_ScopeHeightAboveRail=4.40554;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_3_open: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_pso3_open";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\UI\gear_acco_pso_3_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\CUP_pso_3_open.p3d";
		descriptionShort="$STR_CUP_dss_pso3";
		weaponInfoType="CBA_ScriptedOptic";
		inertia=0.2;
		class CBA_ScriptedOptic
		{
			reticleTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO3_reticle_ca.paa";
			reticleTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\PSO-1\data\PSO3_reticle_n_ca.paa";
			reticleTextureSize=1.174;
			manualReticleNightSwitch=1;
			bodyTexture="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_body_ca.paa";
			bodyTextureNight="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\scope_bodyNight_ca.paa";
			bodyTextureSize=1.95;
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=16;
			optics=1;
			opticType=2;
			modelOptics="\x\cba\addons\optics\cba_optic_big_90.p3d";
			class OpticsModes
			{
				class PSO
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomInit="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMin="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax="8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
					discreteDistance[]={100,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex="3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
				};
			};
		};
		ACE_ScopeHeightAboveRail=4.40554;
		ACE_ScopeAdjust_Vertical[]={0,0};
		ACE_ScopeAdjust_Horizontal[]={-10,10};
		ACE_ScopeAdjust_VerticalIncrement=0.5;
		ACE_ScopeAdjust_HorizontalIncrement=0.5;
	};
	class CUP_optic_PSO_3_open_pip: CUP_optic_PSO_3_open
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=1;
		class ItemInfo: ItemInfo
		{
			modelOptics="\CUP\Weapons\CUP_Weapons_East_Attachments\pip_body\optics_pip.p3d";
		};
	};
	class CUP_muzzle_TGPA: CUP_muzzle_PBS4
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_snds_TGPA";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\bizon_Silencer\data\UI\gear_acca_bizon_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\TGP-A\CUP_tgpa.p3d";
		inertia=0.2;
	};
	class CUP_muzzle_TGPA_desert: CUP_muzzle_TGPA
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_snds_TGPA_desert";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\TGP-A\data\ui\gear_accm_tgpa_desert_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\TGP-A\CUP_tgpa_desert.p3d";
	};
	class CUP_muzzle_TGPA_woodland: CUP_muzzle_TGPA
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		displayName="$STR_CUP_dn_snds_TGPA_woodland";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\TGP-A\data\ui\gear_accm_tgpa_woodland_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\TGP-A\CUP_tgpa_woodland.p3d";
	};
	class CUP_optic_1p63: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		displayName="$STR_CUP_dn_zapev";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Zapev\data\UI\gear_acco_1p63_ca.paa";
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Zapev\CUP_1p63.p3d";
		descriptionShort="$STR_CUP_dss_1p63";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		MRT_SwitchItemNextClass="CUP_optic_1p63_filter";
		MRT_SwitchItemPrevClass="CUP_optic_1p63_filter";
		MRT_switchItemHintText="$STR_CUP_dn_FilterOff";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=13.2276;
			RMBhint="Advanced Collimator Optics";
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]={};
				};
			};
		};
	};
	class CUP_optic_1p63_filter: CUP_optic_1p63
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		model="CUP\Weapons\CUP_Weapons_East_Attachments\Zapev\CUP_1p63_filter.p3d";
		MRT_SwitchItemNextClass="CUP_optic_1p63";
		MRT_SwitchItemPrevClass="CUP_optic_1p63";
		MRT_switchItemHintText="$STR_CUP_dn_FilterOn";
	};
	class CUP_acc_Zenit_2DS: ItemCore
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=2;
		inertia=0.1;
		displayName="$STR_CUP_dn_Zenit_2DS";
		descriptionUse="Flashlight attachment<br/>Provides a bright light in dark areas";
		picture="\CUP\Weapons\CUP_Weapons_East_Attachments\Zenit2DS\data\ui\gear_acc_Zenit_2DS_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_East_Attachments\Zenit2DS\CUP_Zenit_2DS.p3d";
		descriptionShort="$STR_CUP_dss_flashlight";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			RMBhint="Flashlight";
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=100;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=100;
				dayLight=0;
				volumeShape="a3\data_f\VolumeLightFlashlight.p3d";
				class Attenuation
				{
					start=0;
					constant=0.5;
					linear=0.1;
					quadratic=0.2;
					hardLimitStart=27;
					hardLimitEnd=34;
				};
				scale[]={1,1,1};
			};
		};
	};
};
