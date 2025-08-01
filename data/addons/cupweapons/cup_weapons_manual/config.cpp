class CfgPatches
{
	class CUP_Weapons_Manual
	{
		units[]={};
		weapons[]={};
		requiredVersion=2.1400001;
		requiredAddons[]=
		{
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_WeaponsData"
		};
		version=1.1799999;
		versionStr="1.18.1.0";
		versionAr[]={1,18,1,0};
	};
};
class CfgHintCategories
{
	class CUP_FieldManual
	{
		displayName="$STR_CUP_fm_dn_fieldmanual";
		logicalOrder=50;
	};
};
class CfgHints
{
	class CUP_Weapons
	{
		displayName="$STR_CUP_fm_dn_cupweapons";
		logicalOrder=99;
		category="CUP_FieldManual";
		class CUP_RPG7_Irons
		{
			displayName="$STR_CUP_fm_dn_rpg7_irons";
			description="$STR_CUP_fm_dsc_rpg7_irons";
			tip="$STR_CUP_fm_tp_rpg7_irons";
			arguments[]=
			{
				
				{
					
					{
						"zeroingUp"
					}
				},
				
				{
					
					{
						"zeroingDown"
					}
				}
			};
			image="\cup\Weapons\CUP_Weapons_WeaponsCore\ui\cup_logo_weapons_128.paa";
			logicalOrder=1;
		};
		class CUP_RPG7_Optics
		{
			displayName="$STR_CUP_fm_dn_rpg7_optics";
			description="$STR_CUP_fm_dsc_rpg7_optics";
			tip="$STR_CUP_fm_tp_rpg7_optics";
			arguments[]={};
			image="\cup\Weapons\CUP_Weapons_WeaponsCore\ui\cup_logo_weapons_128.paa";
			logicalOrder=2;
		};
		class CUP_RPG7_Rockets
		{
			displayName="$STR_CUP_fm_dn_rpg7_rockets";
			description="$STR_CUP_fm_dsc_rpg7_rockets";
			tip="$STR_CUP_fm_tp_rpg7_rockets";
			arguments[]={};
			image="\cup\Weapons\CUP_Weapons_WeaponsCore\ui\cup_logo_weapons_128.paa";
			logicalOrder=3;
		};
		class CUP_East_RDS
		{
			displayName="$STR_CUP_fm_dn_east_rds";
			description="$STR_CUP_fm_dsc_east_rds";
			tip="$STR_CUP_fm_tp_east_rds";
			arguments[]=
			{
				"with MissionNameSpace do {cba_keybinding_actions getVariable ""str_cba_common_weaponscategory$mrt_switchitemnextclass_o"" select 2 select 0 call CBA_fnc_localizeKey}",
				"with MissionNameSpace do {cba_keybinding_actions getVariable ""str_cba_common_weaponscategory$mrt_switchitemprevclass_o"" select 2 select 0 call CBA_fnc_localizeKey}"
			};
			image="\cup\Weapons\CUP_Weapons_WeaponsCore\ui\cup_logo_weapons_128.paa";
			logicalOrder=4;
		};
		class CUP_Dual_Attachments
		{
			displayName="$STR_CUP_fm_dn_dual_attachments";
			description="$STR_CUP_fm_dsc_dual_attachments";
			tip="$STR_CUP_fm_tp_dual_attachments";
			arguments[]=
			{
				"with MissionNameSpace do {cba_keybinding_actions getVariable ""str_cba_common_weaponscategory$mrt_switchitemnextclass_r"" select 2 select 0 call CBA_fnc_localizeKey}",
				"with MissionNameSpace do {cba_keybinding_actions getVariable ""str_cba_common_weaponscategory$mrt_switchitemprevclass_r"" select 2 select 0 call CBA_fnc_localizeKey}"
			};
			image="\cup\Weapons\CUP_Weapons_WeaponsCore\ui\cup_logo_weapons_128.paa";
			logicalOrder=5;
		};
		class CUP_Manual_Reticle_Illumination
		{
			displayName="$STR_CUP_fm_dn_manual_reticle_illumination";
			description="$STR_CUP_fm_dsc_manual_reticle_illumination";
			tip="$STR_CUP_fm_tp_manual_reticle_illumination";
			arguments[]=
			{
				"with MissionNameSpace do {cba_keybinding_actions getVariable ""str_cba_common_weaponscategory$cba_optics_manualreticlenightswitch"" select 2 select 0 call CBA_fnc_localizeKey}"
			};
			image="\cup\Weapons\CUP_Weapons_WeaponsCore\ui\cup_logo_weapons_128.paa";
			logicalOrder=6;
		};
		class CUP_Manual_Abrams_Ammo
		{
			image="\cup\Weapons\CUP_Weapons_WeaponsCore\ui\cup_logo_weapons_128.paa";
			logicalOrder=7;
			arguments[]={};
			displayName="M1 Abrams Shell Table";
			description="The M1 Abrams 120mm Smoothbore cannon has a wide variety of shells. This table lists all shells with some extra information. All ammunition for the M256 cannon is cased in a combustable shell casing that burns up during firing, leaving only the blast cap to be ejected from the cannon breach. A wide variety of shells is available. Dates are provided for historically accurate loadouts.<br/><br/>%3M829%4<br/>In service since: 1984 <br/>Type: Armour - Piercing Fin - Stabilized Discarding Sabot Tracer(APFSDS - T) <br/>Nominal Velocity: 1679 m/s%1Kinetic energy armour piercing anti - tank round intended for use with the M256 cannon. Uses a depleted uranium penetrator.<br/><br/><br/>%3M829A1%4<br/>In service since: 1991 <br/>Type: Armour - Piercing Fin - Stabilized Discarding Sabot Tracer(APFSDS - T) <br/>Nominal Velocity: 1569 m/s%1Kinetic energy round, an upgrade of the M829.Nicknamed %3Silver Bullet%4 during the Gulf War<br/><br/><br/>%3M829A2%4<br/>In service since: 1992<br/>Type: Armour - Piercing Fin - Stabilized Discarding Sabot Tracer(APFSDS - T) <br/>Nominal Velocity: 1680 m/s%1Another iteration on the M829, this round uses a new manufacturing process to improve the stability of the penetrator.<br/><br/><br/>%3M829A3%4<br/>In service since: 2003 <br/>Type: Armour - Piercing Fin - Stabilized Discarding Sabot Tracer(APFSDS - T) <br/>Nominal Velocity: 1555 m/s%1Little public knowledge is available on this round. The major upgrade to the A2 is an improved propellant charge and improved aerodynamics. In spite of weighing over 25 kg, the round still reaches 1555 m/s nominal speed.<br/><br/><br/>%3M830A1%4<br/>In service since: 1992<br/>Type: High Explosive Anti-Tank Multi Purpose Tracer (HEAT-MP-T or MPAT)<br/>Nominal Velocity: 1410 m/s%1A super-heated jet of molten copper ejects from the tip at impact, punching through light armour with no loss of penetration over range. The round is fired using a sabot and is fin-stabilized like APFSDS.<br/><br/><br/>%3M908%4<br/>In service since: 1984<br/>Type: High Explosive Obstacle Reduction (HE-OR-T or MPAT-OR)<br/>Nominal Velocity: 1140 m/s%1This round has a high-explosive warhead and is primarily used against buildings and unarmoured targets. Like most rounds fired from the M256, the warhead is fin-stabilized and fired using a sabot.<br/><br/><br/>%3M1028%4<br/>In service since: 2004/2005<br/>Type: Canister<br/>Nominal Velocity: -%1The M1028 is a canister attached to a charge that contains approximately 1100 tungsten ball projectiles and functions more or less like a tank-sized shotgun.";
			tip="";
		};
	};
};
