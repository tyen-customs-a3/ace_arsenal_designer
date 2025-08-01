class DefaultEventhandlers;
class CfgPatches
{
	class sns_nekaf
	{
		units[]=
		{
			"sns_nekaf_1",
			"sns_nekaf_2",
			"sns_m38a1",
			"sns_m38a1_2"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewPilot;
		class Sounds;
	};
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				disableSoundAttenuation=1;
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1
			{
			};
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class sns_nekafBase: Car_F
	{
		model="\sns_vehicles\m38a1\sns_nekaf.p3d";
		crewCrashProtection=0.07;
		crewExplosionProtection=0.1;
		crewVulnerable=0;
		explosionShielding=0.69999999;
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_vehicles\m38a1\data\sns_nekaf_co.paa",
			"\sns_vehicles\m38a1\data\sns_nekaf_onder_co.paa",
			"\sns_vehicles\m38a1\data\sns_wielen_co.paa",
			"\sns_vehicles\m38a1\data\sns_canvas_co.paa"
		};
		Picture="simc_uaf_67_preview\icons\sns_jeep_ca.paa";
		Icon="simc_uaf_67_preview\icons\sns_jeep_ca.paa";
		mapSize=4;
		side=1;
		faction="Simc_UA_65";
		crew="simc_og107_mk1";
		typicalCargo[]=
		{
			"simc_og107_mk1",
			"simc_og107_mk1",
			"simc_og107_mk1"
		};
		namesound="motorbike";
		unitInfoType="RscUnitInfoTank";
		driverAction="sns_nekafdriver";
		cargoAction[]=
		{
			"passenger_low01"
		};
		memoryPointsGetInGunner="pos driver";
		memoryPointsGetInGunnerDir="pos driver dir";
		getInAction="GetInQuadbike";
		getOutAction="GetOutQuadbike";
		cargoGetInAction[]=
		{
			"GetInQuadbike_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutQuadbike_cargo"
		};
		preciseGetInOut=1;
		cargoPreciseGetInOut[]={1};
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		selectionBackLights="zadni_svetlo";
		selectionBrakeLights="brzdove_svetlo";
		thrustDelay=0.1;
		engineBrakeCoef=0.1;
		overSpeedBrakeCoef=0.80000001;
		brakeIdleSpeed=1.78;
		maxSpeed=80;
		fuelCapacity=30;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		canfloat=0;
		WaterLeakiness=50;
		simulation="carx";
		wheelCircumference=2.8340001;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=70;
		damperSize=0.2;
		damperForce=1;
		damperDamping=1;
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=10;
		idleRpm=700;
		redRpm=4000;
		enginePower=276;
		maxOmega=471;
		peakTorque=400;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.1;
		torqueCurve[]=
		{
			
			{
				0,
				"0/500"
			},
			
			{
				0.2,
				"175/500"
			},
			
			{
				0.30000001,
				"300/500"
			},
			
			{
				0.40000001,
				"400/500"
			},
			
			{
				0.60000002,
				"450/500"
			},
			
			{
				0.69999999,
				"275/500"
			},
			
			{
				0.89999998,
				"125/500"
			},
			
			{
				1,
				"0/500"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		switchTime=0.2;
		latency=1;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4,
				"N",
				0,
				"D1",
				"4.1",
				"D2",
				"2.21",
				"D3",
				"1.1",
				"D4",
				"0.47",
				"D5",
				"0.35",
				"D6",
				"0.15"
			};
			TransmissionRatios[]=
			{
				"High",
				7
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=50;
				MOI=15;
				dampingRate=0.5;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.050000001;
				sprungMass=502;
				springStrength=13000;
				springDamperRate=10000;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
			};
		};
		class Exhausts
		{
			class Exhaust_left
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust_right
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
		};
		weapons[]={};
		magazines[]={};
		armor=50;
		cost=1;
		transportsoldier=1;
		transportMaxMagazines=10;
		transportMaxWeapons=1;
		driverForceOptics=0;
		hasDriver=1;
		driverIsCommander=1;
		hasGunner=0;
		viewGunnderInExternal=1;
		ejectDeadDriver=1;
		ejectDeadCargo=1;
		ejectDeadGunner=1;
		fuelExplosionPower=0;
		maximumLoad=400;
		threat[]={1,0.1,0.40000001};
		class AnimationSources: AnimationSources
		{
			class scope_rotation
			{
				source="user";
				animperiod=2;
				angle0=0;
				angle1="rad -4.02";
			};
			class scope_translation
			{
				source="user";
				animperiod=2;
			};
			class ReloadAnim
			{
				source="reload";
				weapon="";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="";
			};
			class muzzle_rot_HMG
			{
				source="ammorandom";
				weapon="";
			};
		};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGunCloud";
				positionName="zasleh";
				directionName="zasleh";
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				visual="zbytek";
				name="karoserie";
				minimalHit=0.0099999998;
				explosionShielding=1;
				armor=2;
				passThrough=0;
				radius=0.15000001;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.25;
				material=-1;
				visual="";
				passThrough=0.30000001;
				name="wheel_1_1_steering";
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.25;
				material=-1;
				visual="";
				passThrough=0.30000001;
				name="wheel_1_2_steering";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.25;
				material=-1;
				visual="";
				passThrough=0.30000001;
				name="wheel_2_1_steering";
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.25;
				material=-1;
				visual="";
				passThrough=0.30000001;
				name="wheel_2_2_steering";
			};
			class HitEngine
			{
				armor=0.69999999;
				material=-1;
				name="motor";
				visual="";
				passThrough=0.2;
			};
			class HitFuel
			{
				armor=0.69999999;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.2;
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				FlareSize=0.5;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				FlareSize=0.5;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left"
			}
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				selectionFireAnim="zasleh2";
				gunnerAction="passenger_inside_2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="Achterbank (Links)";
				gunnerCompartments="Compartment1";
				proxyIndex=2;
				maxElev=35;
				minElev=-5;
				maxTurn=75;
				minTurn=-75;
				isPersonTurret=1;
				gunnerDoor="";
				enabledByAnimationSource="";
				ejectDeadCargo=1;
				ejectDeadGunner=1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				selectionFireAnim="zasle3";
				gunnerAction="passenger_inside_2";
				gunnerName="Achterbank (Rechts)";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				maxElev=35;
				minElev=-5;
				maxTurn=75;
				minTurn=-75;
				proxyIndex=3;
				gunnerDoor="";
				ejectDeadCargo=1;
				ejectDeadGunner=1;
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			"db-5",
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			"db-5",
			1,
			40
		};
		soundDammage[]=
		{
			"",
			"db-5",
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start",
			"db-8",
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start",
			"db-7",
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",
			"db-8",
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop",
			"db-7",
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			"db0",
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			"db0",
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			"db0",
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			"db0",
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			"db0",
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			"db0",
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			"db0",
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			"db0",
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(400/6900),(700/6900)]) * ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(870/6900),(1100/6900)]) * ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(1250/6900),(2050/6900)]) * ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(2250/6900),(3050/6900)]) * ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(3250/6900),(4050/6900)]) * ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(4150/6900),(4800/6900)]) * ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.15";
				volume="engineOn*camPos*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust",
					"db-6",
					1,
					200
				};
				frequency="0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(400/6900),(700/6900)]) * ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust",
					"db-5",
					1,
					250
				};
				frequency="0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(870/6900),(1100/6900)]) * ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust",
					"db-4",
					1,
					280
				};
				frequency="0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(1250/6900),(2050/6900)]) * ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust",
					"db-3",
					1,
					320
				};
				frequency="0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(2250/6900),(3050/6900)]) * ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust",
					"db-2",
					1,
					360
				};
				frequency="0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(3250/6900),(4050/6900)]) * ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust",
					"db0",
					1,
					400
				};
				frequency="0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(4150/6900),(4800/6900)]) * ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust",
					"db2",
					1,
					450
				};
				frequency="0.9 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(400/6900),(700/6900)]) * ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(870/6900),(1100/6900)]) * ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(1250/6900),(2050/6900)]) * ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(2250/6900),(3050/6900)]) * ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(3250/6900),(4050/6900)]) * ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(4150/6900),(4800/6900)]) * ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust",
					"db-10",
					1
				};
				frequency="0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(400/6900),(700/6900)]) * ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(870/6900),(1100/6900)]) * ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust",
					"db-8",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(1250/6900),(2050/6900)]) * ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust",
					"db-7",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(2250/6900),(3050/6900)]) * ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust",
					"db-6",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(3250/6900),(4050/6900)]) * ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust",
					"db-5",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(4150/6900),(4800/6900)]) * ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust",
					"db-4",
					1
				};
				frequency="0.9 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					"db-8",
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					"db-12",
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				BBoxes[]=
				{
					"pip1",
					"pip2",
					"pip3",
					"pip4"
				};
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pip0_pos";
					pointDirection="pip0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=1;
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\glass_veh.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Set Alpha";
				shortName="A Set";
				componentName="ACRE_VRC64";
				allowedPositions[]=
				{
					"driver",
					"commander",
					"gunner"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=1;
				intercom[]=
				{
					"intercom_1"
				};
			};
			class Rack_2
			{
				displayName="Set Bravo";
				shortName="B set";
				componentName="ACRE_VRC64";
				allowedPositions[]=
				{
					"driver",
					"commander",
					"gunner"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=1;
				intercom[]=
				{
					"intercom_2"
				};
			};
		};
	};
	class sns_nekaf_1: sns_nekafBase
	{
		scope=2;
		displayName="[NLD] M38a1 Nekaf";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_vehicles\m38a1\data\sns_nekaf_co.paa",
			"\sns_vehicles\m38a1\data\sns_nekaf_onder_co.paa",
			"\sns_vehicles\m38a1\data\sns_wielen_co.paa",
			"\sns_vehicles\m38a1\data\sns_canvas_co.paa"
		};
	};
	class sns_nekaf_2: sns_nekafBase
	{
		scope=2;
		model="\sns_vehicles\m38a1\nekaf_roof\sns_nekaf_2.p3d";
		displayName="[NLD] M38a1 Nekaf (Roof)";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_vehicles\m38a1\data\sns_nekaf_co.paa",
			"\sns_vehicles\m38a1\data\sns_nekaf_onder_co.paa",
			"\sns_vehicles\m38a1\data\sns_wielen_co.paa",
			"\sns_vehicles\m38a1\data\sns_canvas_co.paa"
		};
	};
	class sns_m38a1: sns_nekafBase
	{
		scope=2;
		faction="Simc_UA_65";
		crew="simc_og107_mk1";
		model="\sns_vehicles\m38a1\us\sns_m38a1.p3d";
		displayName="[US] M38a1 Willys";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_vehicles\m38a1\data\sns_m38us_co.paa",
			"\sns_vehicles\m38a1\data\sns_nekaf_onder_co.paa",
			"\sns_vehicles\m38a1\data\sns_wielen_co.paa",
			"\sns_vehicles\m38a1\data\sns_canvas_co.paa"
		};
	};
	class sns_m38a1_2: sns_nekafBase
	{
		scope=2;
		model="\sns_vehicles\m38a1\us_roof\sns_m38a1_2.p3d";
		displayName="[US] M38a1 Willys (Roof)";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\sns_vehicles\m38a1\data\sns_m38us_co.paa",
			"\sns_vehicles\m38a1\data\sns_nekaf_onder_co.paa",
			"\sns_vehicles\m38a1\data\sns_wielen_co.paa",
			"\sns_vehicles\m38a1\data\sns_canvas_co.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyFlag;
	class ProxyWeapon;
	class ProxyFlag_Auto: ProxyFlag
	{
		model="\A3\data_f\proxies\Flags\FLAG_auto";
	};
	class ProxyFlag_Alone: ProxyFlag
	{
		model="\A3\data_f\proxies\Flags\FLAG_alone";
	};
};
class CfgCloudlets
{
	class ObjectDestructionFire1;
	class CarDestructionFire1: ObjectDestructionFire1
	{
		size[]=
		{
			"0.4 * intensity + 0.6",
			"0.1 * intensity + 0.1"
		};
		angleVar=0.1;
		lifeTime=1.3;
		rotationVelocityVar=0;
	};
	class ObjectDestructionFire2;
	class CarDestructionFire2: ObjectDestructionFire2
	{
		size[]=
		{
			"0.4 * intensity + 0.6",
			0.1
		};
		angleVar=0.1;
		lifeTime=1.3;
		rotationVelocityVar=0;
	};
};
