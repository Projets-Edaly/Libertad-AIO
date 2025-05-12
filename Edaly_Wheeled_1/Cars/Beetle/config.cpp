#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_V_Beetle_01
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredVersion=ARMA3_VERSION;
		requiredAddons[] = {"A3_Soft_F_Exp", "Edaly_Client"};
		units[]={"Edaly_Beetle"};
		weapons[]={};
	};

};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Components;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Edaly_Beetle_Base: Car_F
	{
		author="Edaly";
		mapSize=5.6900001;
        class seats {
            class getindriver {
                door="vehicledoor_1";
                isDriver=1;
            };
            class getincargo_0 {
                door="vehicledoor_2";
                cargoIndex=0;
            };
            class getincargo_1 {
                door="vehicledoor_2";
                cargoIndex=1;
            };
            class getincargo_2 {
                door="vehicledoor_1";
                cargoIndex=2;
            };
        };
		//
		side = 3;
		_generalMacro="Edaly_Beetle";
		faction = "CIV_F";
		editorSubcategory="EdSubcat_Cars";
		scope=2;
		scopeCurator=2;
		displayName="Beetle";
		model="\Edaly_Wheeled_1\Cars\Beetle\Edaly_Beetle_F.p3d";
		//
		overviewPicture="\Edaly_Wheeled_1\Cars\Beetle\data\UI\Bettle.JPG";
		icon="\Edaly_Wheeled_1\Cars\Beetle\data\UI\Edaly-Beetle-Icon.paa";
		picture="\Edaly_Wheeled_1\Cars\Beetle\data\UI\Edaly-Beetle-Picture.paa";
		class Library
		{
			libTextDesc="Edaly Beetle";
		};
		WaterLeakiness = 10;
		accuracy=0.25;
		cost=50000;
		armor=30;
		armorLights=0.02;
		fuelExplosionPower=2;
		maxFordingDepth=-0.050000001;
		weapons[]=
		{
			"MiniCarHorn"
		};
		unitInfoType="RscUnitInfoNoWeapon";
		maximumLoad=1800;
		transportMaxBackpacks=0;
		class TransportItems
		{
		};
		showNVGCargo[]={1};
		soundAttenuationCargo[]={0};
		sensorPosition="sensorPos";
		memoryPointTaskMarker="TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[]={};
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]=	{"Edaly_Wheeled_1\Cars\Beetle\data\1001_co.paa"};
		extCameraPosition[]={0,2,-7};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";

		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				radius=0.2;
				visual="wheel_1_1_hide";
				armorComponent="wheel_1_1_hide";
				armor=-80;
				minimalHit=-0.00833333;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.2;
				visual="wheel_1_2_hide";
				armorComponent="wheel_1_2_hide";
				armor=-80;
				minimalHit=-0.00833333;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.2;
				visual="wheel_2_1_hide";
				armorComponent="wheel_2_1_hide";
				armor=-80;
				minimalHit=-0.00833333;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.2;
				visual="wheel_2_2_hide";
				armorComponent="wheel_2_2_hide";
				armor=-80;
				minimalHit=-0.00833333;
				explosionShielding=4;
				passThrough=0;
			};
			class HitFuel
			{
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				radius=0.25;
				armor=1.5;
				explosionShielding=1.5;
				material=-1;
				minimalHit=0.1;
				passThrough=0.5;
				visual="";
			};
			class HitEngine
			{
				armorComponent="hit_engine";
				name="hit_engine_point";
				radius=0.25;
				armor=0.5;
				explosionShielding=0.5;
				material=-1;
				passThrough=0.5;
				visual="";
			};
			class HitHull
			{
				armorComponent="hit_body";
				name="hit_body_point";
				radius=0.2;
				armor=2;
				explosionShielding=1.5;
				material=-1;
				passThrough=0.5;
				visual="";
			};
			class HitGlass1 : HitGlass1
			{
				armorComponent="glass1";
				name="glass1";
				radius=0.25;
				armor=0.1;
				explosionShielding=2;
				material=-1;
				passThrough=0;
				visual="";
			};
			class HitGlass2 : HitGlass2
			{
				armorComponent="glass2";
				name="glass2";
				radius=0.25;
				armor=0.1;
				explosionShielding=2;
				material=-1;
				passThrough=0;
				visual="";
			};
			class HitGlass3 : HitGlass1
			{
				armorComponent="glass3";
				name="glass3";
			};
			class HitGlass4 : HitGlass1
			{
				armorComponent="glass4";
				name="glass4";
			};
			class HitGlass5 : HitGlass1
			{
				armorComponent="glass5";
				name="glass5";
			};
			class HitGlass6 : HitGlass1
			{
				armorComponent="glass6";
				name="glass6";
			};
		};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start", db-8, 1.0};
        soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start", db-7, 1.0, 200};
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop", db-8, 1.0};
        soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop", db-7, 1.0, 200};
        class Sounds
        {

            // warp factor
            #define FACTOR(val,from,to) (val factor[from,to])
            // RANGE(val,   begin, band, end,   band)
            #define RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
            // FACTOR2(val, 0, 400, 1200,   2000)
            #define FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0) *   FACTOR(val,to1,from1))

            // redRpm
            #define MAX_RPM 6900
            // scaled   rpm to 0 - 1
            #define RPM(rpm) (rpm/MAX_RPM)

            // specialized FACTOR for rpm
            #define FACTOR_RPM(from,to) FACTOR(RPM(rpm),RPM(from),RPM(to))
            // specialized peak for rpm
            #define FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0) *   FACTOR_RPM(to1,from1))
            // specialized peak, different definition, version for rpm
            #define RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))


            #define HZ_IDLE FACTOR_RPM(400,1150)
            #define HZ_RPM1 FACTOR_RPM(900,2100)
            #define HZ_RPM2 FACTOR_RPM(1300,3100)
            #define HZ_RPM3 FACTOR_RPM(2200,4100)
            #define HZ_RPM4 FACTOR_RPM(3300,4900)
            #define HZ_RPM5 FACTOR_RPM(4200,6200)
            #define HZ_RPM6 FACTOR_RPM(5100,6900)

            #define VOLUME_IDLE FACTOR2_RPM(400,700,900,1100)
            #define VOLUME_RPM1 FACTOR2_RPM(870,1100,1300,2100)
            #define VOLUME_RPM2 FACTOR2_RPM(1250,2050,2300,3100)
            #define VOLUME_RPM3 FACTOR2_RPM(2250,3050,3300,4100)
            #define VOLUME_RPM4 FACTOR2_RPM(3250,4050,4200,4870)
            #define VOLUME_RPM5 FACTOR2_RPM(4150,4800,5150,6150)
            #define VOLUME_RPM6 FACTOR_RPM(5100,6100)

            /*      hatchback external sounds without gas    */

            class Idle_ext
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle", db-13, 1, 150};
                frequency   =   0.9 +   HZ_IDLE*0.2;
                volume = engineOn*camPos*VOLUME_IDLE;
            };
            class Engine
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm", db-11,1, 200};
                frequency   =   0.8 +   HZ_RPM1*0.2;
                volume = engineOn*camPos*VOLUME_RPM1;
            };
            class Engine1_ext
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm", db-9,1, 240};
                frequency   =   0.8 +   HZ_RPM2*0.2;
                volume = engineOn*camPos*VOLUME_RPM2;
            };
            class Engine2_ext
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm", db-8,1, 280};
                frequency   =   0.8 +   HZ_RPM3*0.2;
                volume = engineOn*camPos*VOLUME_RPM3;
            };
            class Engine3_ext
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm", db-7,1, 320};
                frequency   =   0.8 +   HZ_RPM4*0.2;
                volume = engineOn*camPos*VOLUME_RPM4;
            };
            class Engine4_ext
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm", db-6,1, 360};
                frequency   =   0.8 +   HZ_RPM5*0.2;
                volume = engineOn*camPos*VOLUME_RPM5;
            };
            class Engine5_ext
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm", db-5,1, 420};
                frequency   =   0.95    +   HZ_RPM6*0.15;
                volume = engineOn*camPos*VOLUME_RPM6;
            };

                /*   hatchback external sounds with gas  */

            class IdleThrust
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust", db-6,1, 200};
                frequency   =   0.9 +   HZ_IDLE*0.2;
                volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
            };
            class EngineThrust
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust", db-5,1, 250};
                frequency   =   0.8 +   HZ_RPM1*0.2;
                volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
            };
            class Engine1_Thrust_ext
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust", db-4,1, 280};
                frequency   =   0.8 +   HZ_RPM2*0.2;
                volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
            };
            class Engine2_Thrust_ext
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust", db-3,1, 320};
                frequency   =   0.8 +   HZ_RPM3*0.2;
                volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
            };
            class Engine3_Thrust_ext
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust", db-2,1, 360};
                frequency   =   0.8 +   HZ_RPM4*0.2;
                volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
            };
            class Engine4_Thrust_ext
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust", db0,1, 400};
                frequency   =   0.8 +   HZ_RPM5*0.3;
                volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
            };
            class Engine5_Thrust_ext
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust", db2,1, 450};
                frequency   =   0.9 +   HZ_RPM6*0.2;
                volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
            };

            /*  end external sounds with gas */

            /* hatchback internal sounds without gas */

            class Idle_int
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle", db-15, 1};
                frequency   =   0.9 +   HZ_IDLE*0.2;
                volume = engineOn*(1-camPos)*VOLUME_IDLE;
            };
            class Engine_int
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm", db-14,1 };
                frequency   =   0.8 +   HZ_RPM1*0.2;
                volume = engineOn*(1-camPos)*VOLUME_RPM1;
            };
            class Engine1_int
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm", db-12,1 };
                frequency   =   0.8 +   HZ_RPM2*0.2;
                volume = engineOn*(1-camPos)*VOLUME_RPM2;
            };
            class Engine2_int
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm", db-11,1 };
                frequency   =   0.8 +   HZ_RPM3*0.2;
                volume = engineOn*(1-camPos)*VOLUME_RPM3;
            };
            class Engine3_int
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm", db-10,1 };
                frequency   =   0.8 +   HZ_RPM4*0.2;
                volume = engineOn*(1-camPos)*VOLUME_RPM4;
            };
            class Engine4_int
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm", db-9,1 };
                frequency   =   0.8 +   HZ_RPM5*0.2;
                volume = engineOn*(1-camPos)*VOLUME_RPM5;
            };
            class Engine5_int
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm", db-6,1 };
                frequency   =   0.95    +   HZ_RPM6*0.15;
                volume = engineOn*(1-camPos)*VOLUME_RPM6;
            };

                /* hatchback internal sounds with gas */

            class IdleThrust_int
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust", db-10,1 };
                frequency   =   0.9 +   HZ_IDLE*0.2;
                volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
            };
            class EngineThrust_int
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust", db-9,1 };
                frequency   =   0.8 +   HZ_RPM1*0.2;
                volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
            };
            class Engine1_Thrust_int
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust", db-8,1 };
                frequency   =   0.8 +   HZ_RPM2*0.2;
                volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
            };
            class Engine2_Thrust_int
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust", db-7,1 };
                frequency   =   0.8 +   HZ_RPM3*0.2;
                volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
            };
            class Engine3_Thrust_int
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust", db-6,1 };
                frequency   =   0.8 +   HZ_RPM4*0.2;
                volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
            };
            class Engine4_Thrust_int
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust", db-5,1 };
                frequency   =   0.8 +   HZ_RPM5*0.3;
                volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
            };
            class Engine5_Thrust_int
            {
            sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust", db-4,1 };
                frequency   =   0.9 +   HZ_RPM6*0.2;
                volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
            };
            class Movement
            {
                sound   =   "soundEnviron";
                frequency   =   "1";
                volume = "0";
            };
                /*  end internal sounds with gas */


            /*----------------------------------*/
            /*-----------  TIRES EXT ---------*/
            /*----------------------------------*/

            class TiresRockOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-6, 1.0, 60};
                frequency = "1";
                volume = "camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-6, 1.0, 60};
                frequency = "1";
                volume = "camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-6, 1.0, 60};
                frequency = "1";
                volume = "camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-6, 1.0, 60};
                frequency = "1";
                volume = "camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-6, 1.0, 60};
                frequency = "1";
                volume = "camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-6, 1.0, 60};
                frequency = "1";
                volume = "camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db-8, 1.0, 90};
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };

            /*----------------------------------*/
            /*-----------  TIRES INT ---------*/
            /*----------------------------------*/

            class TiresRockIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-6, 1.0};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-6, 1.0};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-6, 1.0};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-6, 1.0};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-6, 1.0};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-6, 1.0};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-12, 1.0};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)"; //Definition of inside sounds
            };

            /*------------------------------------------------------------------*/
            /*-------------- external sounds for screeching tires on the road -------------*/
            /*------------------------------------------------------------------*/

            /* sounds on the road */

            class breaking_ext_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
                frequency   =   1;
                volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
            };

            class acceleration_ext_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
                frequency   =   1;
                volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
            };
            class turn_left_ext_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
                frequency   =   1;
                volume = engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
            };

            class turn_right_ext_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
                frequency   =   1;
                volume = engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
            };

            /*-----------------------------------------------------------------*/
            /* external sounds for screeching tires on other surfaces  */
            /*-----------------------------------------------------------------*/

            class breaking_ext_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
                frequency   =   1;
                volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
            };
            class acceleration_ext_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db-3,  1, 60};
                frequency   =   1;
                volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1]);
            };
            class turn_left_ext_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
                frequency   =   1;
                volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15]);
            };
            class turn_right_ext_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
                frequency   =   1;
                volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
            };


            /*---------------------------------------------------------------------------*/
            /*-------------- internal sounds for screeching tires on the road --------------*/
            /*---------------------------------------------------------------------------*/

            class breaking_int_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
                frequency   =   1;
                volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
            };
            class acceleration_int_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
                frequency   =   1;
                volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
            };
            class turn_left_int_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
                frequency   =   1;
                volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
            };
            class turn_right_int_road
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
                frequency   =   1;
                volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
            };

            /*--------------------------------------------------------------------------------------------*/
            /*-------------- internal sounds for screeching tires on other surfaces -------------*/
            /*--------------------------------------------------------------------------------------------*/
            class breaking_int_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
                frequency   =   1;
                volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15]);
            };
            class acceleration_int_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db-10, 1};
                frequency   =   1;
                volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
            };
            class turn_left_int_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,  1};
                frequency   =   1;
                volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
            };
            class turn_right_int_dirt
            {
                sound[] =   {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,  1};
                frequency   =   1;
                volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
            };
        };
		wheelDamageThreshold=0.041666701;
		wheelDamageRadiusCoef=0.69999999;
		turnCoef=2.5;
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=0.5;
			turnIncreaseLinear=2;
			turnIncreaseTime=0;
			turnDecreaseConst=5;
			turnDecreaseLinear=0;
			turnDecreaseTime=0;
			maxTurnHundred=1;
		};
		driverAction="Driver_mid01";
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo2",
			"pos cargo3"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo2 dir",
			"pos cargo3 dir"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_low01",
			"passenger_low01"
		};
		cargoIsCoDriver[]={1,0,0};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		typicalCargo[]=
		{
			"B_Soldier_lite_F"
		};
		transportSoldier=3;
		cargoProxyIndexes[]={1,2,3};
		getInProxyOrder[]={1,2,3};
		cargoGetInAction[]=
		{
			"GetInLow",
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
		};
		driverCompartments="Compartment2";
		cargoCompartments[]=
		{
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		fireResistance=5;
		wheelDestroyRadiusCoef=0.5;
		driverLeftHandAnimName="steeringwheel";
		driverRightHandAnimName="steeringwheel";
		thrustDelay=0.5;
		brakeIdleSpeed=1.78;
		maxSpeed=115;
		fuelCapacity=16;
		wheelCircumference=3.145;
		antiRollbarForceCoef=1.9;
		antiRollbarForceLimit=5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=150;
		idleRpm=600;
		redRpm=5500;
		accelAidForceCoef=3.0;
		accelAidForceYOffset=-1;
		//accelAidForceSpd=4;
		accelAidForceSpd=2;
		simulation="carx";
		//dampersBumpCoef=5;
		dampersBumpCoef=0.3;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=20;
		//engineMOI=0.89999998;
		engineMOI=1.5;
		//enginePower=209;
		enginePower=20;
		minOmega=50;
		//maxOmega=733;
		maxOmega=575;
		peakTorque=353;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=0.5;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.142857,0.46175599},
			{0.285714,0.79320103},
			{0.42857099,0.91501403},
			{0.50428599,0.96317297},
			{0.71428603,1},
			{0.85714298,0.93484402},
			{1,0}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4,
				"N",
				0,
				"D1",
				3.5880001,
				"D2",
				2.1860001,
				"D3",
				1.405,
				"D4",
				1,
				"D5",
				0.64999998
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
			gearUpMaxCoef=0.94999999;
			gearDownMaxCoef=0.85000002;
			gearUpMinCoef=0.64999998;
			gearDownMinCoef=0.55000001;
			transmissionDelay=2;
		};
		switchTime=0.1;
		latency=2;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width=0.5;
				mass=20;
				//MOI=6;
				MOI=6;
				dampingRate=1;
				dampingRateDamaged=25;
				dampingRateDestroyed=300;
				//maxBrakeTorque=4000;
				maxBrakeTorque=1900;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.03;
				sprungMass=-1;
				//springStrength=29792;
				springStrength=210000;
				springDamperRate=7448;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1.75},
					{0.5,1.35},
					{1,1.2}
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
				maxHandBrakeTorque=8000;
				frictionVsSlipGraph[]=
				{
					{0,2},
					{0.5,1.53},
					{1,1.36}
				};
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=8000;
				frictionVsSlipGraph[]=
				{
					{0,2.3},
					{0.5,2.0999999},
					{1,2}
				};
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class IntMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					// fov=0.69999999;
					fov=0.2;
				};
				BBoxes[]=
				{
					"PIP_0_TL",
					"PIP_0_TR",
					"PIP_0_BL",
					"PIP_0_BR"
				};
			};
		};
		class CargoTurret;
		class TextureSources{};
		textureList[]={};

		class selections {
			vehicledoor_1 = "vehicledoor_1_source";
			vehicledoor_2 = "vehicledoor_2_source";
			trunk = "trunk_source";
			hood = "hood_source";
			windowhandle_1 = "windowhandle_1_source";
			windowhandle_2 = "windowhandle_2_source";
		};

		class animationSources: AnimationSources
		{
			class vehicledoor_1_source
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="GateDoorsSound";

			};
			class vehicledoor_2_source: vehicledoor_1_source{};
			class trunk_source: vehicledoor_1_source
			{
				sound="";
			};
			class hood_source: trunk_source {};
			class windowhandle_1_source: trunk_source {};
			class windowhandle_2_source: trunk_source {};
		};
		animationList[]={};
		class MFD
		{
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustEffectOffroad";
			};
			class Exhaust_2
			{
				position="Exhaust_2_pos";
				direction="Exhaust_2_dir";
				effect="ExhaustEffectOffroad";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Soft_F_Exp\Offroad_02\Data\offroad_02_adds_metal.rvmat",
				"A3\Soft_F_Exp\Offroad_02\Data\offroad_02_adds_metal_damage.rvmat",
				"A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_destruct.rvmat",

				"edaly_wheeled_1\cars\beetle\data\alfa_ca.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat"

			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={1.9,1.8,1.7};
				ambient[]={5,5,5};
				intensity=80;
				size=1;
				innerAngle=60;
				outerAngle=160;
				coneFadeCoef=10;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.050000001;
					hardLimitStart=50;
					hardLimitEnd=80;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2_pos";
				direction="Light_2_dir";
				hitpoint="Light_2";
				selection="Light_2_hide";
			};
		};
		aggregateReflectors[]=
		{

			{
				"Light_1",
				"Light_2"
			}
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
    class Edaly_Beetle_01: Edaly_Beetle_Base
    {
        scope = 2;
        forceInGarage = 1;
        author = $STR_EDALY_AUTHOR;
        displayName = "Beetle Red";
		hiddenSelectionsTextures[]=	{"Edaly_Wheeled_1\Cars\Beetle\data\red_co.paa"};
    };
    class Edaly_Beetle_02: Edaly_Beetle_Base
    {
        scope = 2;
        forceInGarage = 1;
        author = $STR_EDALY_AUTHOR;
        displayName = "Beetle Green";
		hiddenSelectionsTextures[]=	{"Edaly_Wheeled_1\Cars\Beetle\data\green_co.paa"};
    };
    class Edaly_Beetle_03: Edaly_Beetle_Base
    {
        scope = 2;
        forceInGarage = 1;
        author = $STR_EDALY_AUTHOR;
        displayName = "Beetle Yellow";
		hiddenSelectionsTextures[]=	{"Edaly_Wheeled_1\Cars\Beetle\data\yellow_co.paa"};
    };
    class Edaly_Beetle_04: Edaly_Beetle_Base
    {
        scope = 2;
        forceInGarage = 1;
        author = $STR_EDALY_AUTHOR;
        displayName = "Beetle Dark blue";
		hiddenSelectionsTextures[]=	{"Edaly_Wheeled_1\Cars\Beetle\data\drkblue_co.paa"};
    };
};
