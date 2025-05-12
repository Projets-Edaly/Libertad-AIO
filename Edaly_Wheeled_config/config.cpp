#include "\Edaly_Client\version.hpp"
#include "basicdefines_A3.hpp"

class CfgPatches
{
	class Edaly_Wheeled_config
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client", "Edaly_Editor_Categories", "Edaly_Wheeled_1"};
		requiredVersion=ARMA3_VERSION;
		units[]={"Dodge_WC51_Militar","Dodge_WC51_Militar_noir","Dodge_WC51_Militar_grissombre","Dodge_WC51_Militar_gris","Dodge_WC51_Militar_grisclair","Dodge_WC51_Militar_blanc","Dodge_WC51_Militar_sable","Dodge_WC51_Militar_bordeau","Dodge_WC51_Militar_bleu","Dodge_WC51_Militar_bleunuit","Dodge_WC51_Militar_mauvenuit","Dodge_WC51_Militar_rouge","Dodge_WC51_Militar_jaune","Dodge_WC51_Militar_orange","Edaly_Coupe_01_F","Edaly_Coupe_02_F","Edaly_Coupe_03_F","Edaly_Coupe_04_F","Edaly_Coupe_05_F","Edaly_Coupe_06_F","Edaly_Coupe_07_F","Edaly_Coupe_08_F","Edaly_Coupe_09_F","Edaly_Coupe_10_F","Edaly_Coupe_11_F","Edaly_Coupe_12_F","Edaly_Coupe_13_F","Edaly_Coupe_14_F","Edaly_Coupe_15_F","Edaly_Apache_01_F","Edaly_Apache_02_F","Edaly_Apache_03_F","Edaly_Apache_04_F","Edaly_Apache_05_F","Edaly_Apache_06_F","Edaly_Apache_07_F","Edaly_Apache_08_F","Edaly_Apache_09_F","Edaly_Apache_10_F","Edaly_Apache_11_F","Edaly_Apache_12_F","Edaly_Apache_13_F","Edaly_Apache_14_F","Edaly_Apache_15_F"};
		weapons[]={};
	};
};

class CfgAnimationSourceSounds
{
    class doorcar
    {
            class opendoor
            {
                    loop = 0;
                    terminate = 1;
                    trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
                    sound0[] = {"Edaly_Sounds_Assets_1\data\doorcar.ogg",10,1,50};
                    sound[] = {"sound0",1};
            };
    };
};

class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle
    {
        class NewTurret;
    };
    class Car_F: Car
    {
        class HitPoints
        {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitFuel;
            class HitEngine;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };
        class EventHandlers;
    };

    class Quadbike_01_base_F: Car_F{};

    /* vespa */
        class vespa_125: Quadbike_01_base_F
        {

            model   = "\Edaly_Wheeled_1\Bikes\Bike01\vespa_125";  /// simple path to model
            author = $STR_EDALY_AUTHOR;
            bike = 1;

            scope   = 2;            /// makes the car visible in editor
            scopeCurator=2;
            crew    = "C_man_1";    /// we need someone to fit into the car
            side    = 3;            /// civilian car should be on civilian side
            faction = "CIV_F";      /// and with civilian faction

            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Vehicles";

            displayName = "Vespa 125"; /// displayed in Editor

            //weapons[] = {"vespa_125_Horn"};
            class seats {
                class getindriver {
                    door="";
                    isDriver=1;
                };
            };
            hiddenSelections[] = {"camo1"};
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\vespa_co.paa"};

            terrainCoef     = 1;    /// different surface affects this car more, stick to tarmac
            turnCoef        = 2.5;  /// should match the wheel turn radius
            precision       = 10;   /// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
            brakeDistance   = 3.0;  /// how many internal waypoints should the AI plan braking in advance
            acceleration    = 5;    /// how fast acceleration does the AI think the car has

            fireResistance = 5;
            armor = 30;

            cost            = 50000; /// how likely is the enemy going to target this vehicle

            transportMaxBackpacks   = 10; /// just some backpacks fit the trunk by default
            transportSoldier        = 1; /// number of cargo except driver

            wheelDamageRadiusCoef   = 0.9;          /// for precision tweaking of damaged wheel size
            wheelDestroyRadiusCoef  = 0.4;          /// for tweaking of rims size to fit ground
            maxFordingDepth         = 0.5;          /// how high water would damage the engine of the car
            waterResistance         = 1;            /// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
            driverLeftHandAnimName  = "drivewheel"; /// according to what bone in model of car does hand move
            driverRightHandAnimName = "drivewheel"; /// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

            class Turrets{};

            driverAction        = driver_quadbike; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
            cargoAction[]       = {"passenger_scooter_01"};
            //getInAction       = GetInLow;         /// how does driver look while getting in
            //getOutAction      = GetOutLow;        /// and out
            //cargoGetInAction[]    = {"GetInLow"};     /// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
            //cargoGetOutAction[] = {"GetOutLow"};  /// that means all use the same in this case

            /// memory points where do tracks of the wheel appear
            // front left track, left offset
            memoryPointTrackFLL = "TrackFLL";
            // front left track, right offset
            memoryPointTrackFLR = "TrackFLR";
            // back left track, left offset
            memoryPointTrackBLL = "TrackBLL";
            // back left track, right offset
            memoryPointTrackBLR = "TrackBLR";
            // front right track, left offset
            memoryPointTrackFRL = "TrackFRL";
            // front right track, right offset
            memoryPointTrackFRR = "TrackFRR";
            // back right track, left offset
            memoryPointTrackBRL = "TrackBRL";
            // back right track, right offset
            memoryPointTrackBRR = "TrackBRR";

            thrustDelay = 0.5;
            brakeIdleSpeed = 1.78;
            maxSpeed = 110; // max speed on level road, km/h
            fuelCapacity = 50;
            fueltype="Diesel";
            wheelCircumference = 2.505;
            antiRollbarForceCoef = 12.5;
            antiRollbarForceLimit = 10.5;
            antiRollbarSpeedMin = 5;
            antiRollbarSpeedMax = 150;
            idleRpm = 1000;
            redRpm = 4000;

            class complexGearbox
            {
                GearboxRatios[] = {"R1",-6.1,"N",0,"D1",3.03,"D2",2.59,"D3",1.88,"D4",1.44,"D5",1.15,"D6",0.88,"D7",0.79};
                TransmissionRatios[] = {"High",3.588};
                gearBoxMode = "auto";
                moveOffGear = 1;
                driveString = "D";
                neutralString = "N";
                reverseString = "R";
                gearUpMaxCoef = 0.65;
                gearDownMaxCoef = 0.35;
                gearUpMinCoef = 0.45;
                gearDownMinCoef = 0.55;
            };

            simulation = "carx";
            dampersBumpCoef = 4.0;
            differentialType = "all_limited";
            frontRearSplit = 0.5;
            frontBias = 1.5;
            rearBias = 1.5;
            centreBias = 1.3;
            clutchStrength = 20.0;
            enginePower = 180;
            maxOmega = 275;
            peakTorque = 300;
            dampingRateFullThrottle = 0.08;
            dampingRateZeroThrottleClutchEngaged = 0.5;
            dampingRateZeroThrottleClutchDisengaged = 0.35;
            torqueCurve[] = {{(0/3500), (0/425)}, {(500/3500), (200/425)}, {(1500/3500), (405/425)}, {(2000/3500), (425/425)}, {(2500/3500), (350/425)}, {(3000/3500), (300/425)}, {(6000/3500), (0/425)}};
            changeGearMinEffectivity[] = {1, 0.15, 1, 1, 1, 1, 1, 1};
            switchTime = 0.31;
            latency = 1.5;

            class Wheels {
                class LF {
                    boneName = "wheel_1_1_damper";
                    steering = 1;
                    side = "left";
                    center = "wheel_1_1_axis";
                    boundary = "wheel_1_1_bound";
                    width = 0.2;
                    mass = 50;
                    MOI = 5.3;
                    dampingRate = 0.5;
                    maxBrakeTorque = 1500;
                    maxHandBrakeTorque = 0;
                    suspTravelDirection[] = {0, -1, 0};
                    suspForceAppPointOffset = "wheel_1_1_axis";
                    tireForceAppPointOffset = "wheel_1_1_axis";
                    maxCompression = 0.1;
                    mMaxDroop = 0.05;
                    sprungMass = 272.5;
                    springStrength = 27250;
                    springDamperRate = 6725;
                    longitudinalStiffnessPerUnitGravity = 100000;
                    latStiffX = 25;
                    latStiffY = 18000;
                    frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
                };

                class LR : LF {
                    boneName = "wheel_1_2_damper";
                    steering = 0;
                    center = "wheel_1_2_axis";
                    boundary = "wheel_1_2_bound";
                    suspForceAppPointOffset = "wheel_1_2_axis";
                    tireForceAppPointOffset = "wheel_1_2_axis";
                    maxHandBrakeTorque = 1000;
                };

                class RF : LF {
                    boneName = "wheel_2_1_damper";
                    center = "wheel_2_1_axis";
                    boundary = "wheel_2_1_bound";
                    suspForceAppPointOffset = "wheel_2_1_axis";
                    tireForceAppPointOffset = "wheel_2_1_axis";
                    steering = 1;
                    side = "right";
                };

                class RR : RF {
                    boneName = "wheel_2_2_damper";
                    steering = 0;
                    center = "wheel_2_2_axis";
                    boundary = "wheel_2_2_bound";
                    suspForceAppPointOffset = "wheel_2_2_axis";
                    tireForceAppPointOffset = "wheel_2_2_axis";
                    maxHandBrakeTorque = 1000;
                };
            };

            class Exhausts /// specific exhaust effects for the car
            {
                class Exhaust1 /// the car has two exhausts - each on one side
                {
                    position    = "exhaust";        /// name of initial memory point
                    direction   = "exhaust_dir";    /// name of memory point for exhaust direction
                    effect      = "ExhaustEffectHTruck";    /// what particle effect is it going to use
                };
                class Exhaust2
                {
                    position    = "exhaust2_pos";
                    direction   = "exhaust2_dir";
                    effect      = "ExhaustEffectHTruck";
                };
            };

            class RenderTargets {
                class LeftMirror {
                    renderTarget = "rendertarget0";

                    class CameraView1 {
                        pointPosition = "PIP0_pos";
                        pointDirection = "PIP0_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };

                class RearCam {
                    renderTarget = "rendertarget1";

                    class CameraView1 {
                        pointPosition = "PIP1_pos";
                        pointDirection = "PIP1_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };

                class FrontCam {
                    renderTarget = "rendertarget2";

                    class CameraView1 {
                        pointPosition = "PIP2_pos";
                        pointDirection = "PIP2_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
            };

            class Damage
            {
                tex[] = {};
                mat[] =
                {
                    "Edaly_Wheeled_1\Common_data\carroserie.rvmat",
                    "Edaly_Wheeled_1\Common_data\car_damage.rvmat",
                    "Edaly_Wheeled_1\Common_data\car_destruct.rvmat",

                    "Edaly_Wheeled_1\Common_data\reflective_glass.rvmat",
                    "A3\data_f\Glass_veh_damage.rvmat",
                    "A3\data_f\Glass_veh_damage.rvmat"
                };
            };

            class AnimationSources
            {
                class Door1_source
                {
                    source = "user";
                    animPeriod = 0.7;
                    initPhase = 0;
                };
                class Door2_source: Door1_source
                {
                    animPeriod = 0.7;
                };
                class trunk_source: Door1_source
                {
                    animPeriod = 0.7;
                };
                class hood_source: Door1_source
                {
                    animPeriod = 0.7;
                };
                class HitLFWheel
                {
                    source = "Hit";
                    hitpoint = "HitLFWheel";
                    raw = 1;
                };
                class HitRFWheel: HitLFWheel
                {
                    hitpoint = "HitRFWheel";
                };
                class HitLBWheel: HitLFWheel
                {
                    hitpoint = "HitLF2Wheel";
                };
                class HitRBWheel: HitLFWheel
                {
                    hitpoint = "HitRF2Wheel";
                };
                class HitLF2Wheel: HitLFWheel
                {
                    hitpoint = "HitLBWheel";
                };
                class HitRF2Wheel: HitLFWheel
                {
                    hitpoint = "HitRBWheel";
                };
                class HitLMWheel: HitLFWheel
                {
                    hitpoint = "HitLMWheel";
                };
                class HitRMWheel: HitLFWheel
                {
                    hitpoint = "HitRMWheel";
                };
                class HitGlass1
                {
                    source = "Hit";
                    hitpoint = "HitGlass1";
                    raw = 1;
                };
                class HitGlass2: HitGlass1
                {
                    hitpoint = "HitGlass2";
                };
                class HitGlass3: HitGlass1
                {
                    hitpoint = "HitGlass3";
                };
                class HitGlass4: HitGlass1
                {
                    hitpoint = "HitGlass4";
                };
                class hideleftdoor
                {
                    source = "Hit";
                    hitpoint = "HitDoor1";
                    raw = 1;
                };
                class hiderightdoor: hideleftdoor
                {
                    hitpoint = "HitDoor2";
                };
            };

            class Reflectors    /// only front lights are considered to be reflectors to save CPU
            {
                class LightCarHeadL01   /// lights on each side consist of two bulbs with different flares
                {
                    color[]         = {1900, 1800, 1700};       /// approximate colour of standard lights
                    ambient[]       = {5, 5, 5};                /// nearly a white one
                    position        = "LightCarHeadL01";        /// memory point for start of the light and flare
                    direction       = "LightCarHeadL01_end";    /// memory point for the light direction
                    hitpoint        = "Light_L";                /// point(s) in hitpoint lod for the light (hitPoints are created by engine)
                    selection       = "Light_L";                /// selection for artificial glow around the bulb, not much used any more
                    size            = 1;                        /// size of the light point seen from distance
                    innerAngle      = 100;                      /// angle of full light
                    outerAngle      = 179;                      /// angle of some light
                    coneFadeCoef    = 10;                       /// attenuation of light between the above angles
                    intensity       = 1;                        /// strength of the light
                    useFlare        = true;                     /// does the light use flare?
                    dayLight        = false;                    /// switching light off during day saves CPU a lot
                    flareSize       = 1.0;                      /// how big is the flare
                    class Attenuation
                    {
                        start           = 1.0;
                        constant        = 0;
                        linear          = 0;
                        quadratic       = 0.25;
                        hardLimitStart  = 30;       /// it is good to have some limit otherwise the light would shine to infinite distance
                        hardLimitEnd    = 60;       /// this allows adding more lights into scene
                    };
                };
                class LightCarHeadL02:LightCarHeadL01
                {
                    position    = "LightCarHeadL02";
                    direction   = "LightCarHeadL02_end";
                    FlareSize   = 0.5;                      /// side bulbs aren't that strong
                };
                class LightCarHeadR01:LightCarHeadL01
                {
                    position    = "LightCarHeadR01";
                    direction   = "LightCarHeadR01_end";
                    hitpoint    = "Light_R";
                    selection   = "Light_R";
                };
                class LightCarHeadR02:LightCarHeadR01
                {
                    position    = "LightCarHeadR02";
                    direction   = "LightCarHeadR02_end";
                    FlareSize   = 0.5;
                };
            };
            aggregateReflectors[] = {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}}; /// aggregating reflectors helps the engine a lot
            /// it might be even good to aggregate all lights into one source as it is done for most of the cars
        };

        class vespa_125_bl: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Noir)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\black\vespa_co.paa"};
        };

        class vespa_125_wh: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Blanc)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\white\vespa_co.paa"};
        };

        class vespa_125_lb: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Bleu)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\lightblue\vespa_co.paa"};
        };

        class vespa_125_db: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Bleu Nuit)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\darkblue\vespa_co.paa"};
        };

        class vespa_125_tu: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Turquoise)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\turquoise\vespa_co.paa"};
        };

        class vespa_125_gr: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Vert)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\green\vespa_co.paa"};
        };

        class vespa_125_red: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Rouge)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\red\vespa_co.paa"};
        };

        class vespa_125_or: vespa_125
        {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Vespa 125 (Orange)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_1\Bikes\Bike01\data\orange\vespa_co.paa"};
        };
    /* vespa */

    /* gaz21 */
        class Van_01_base_F;
        class Edaly_Gaz21: Van_01_base_F
        {
            model = "\Edaly_Wheeled_1\Cars\Gaz21\Gaz21.p3d";
            author = $STR_EDALY_AUTHOR;
            scope = 0;
            crew = "C_man_1";
            side = 3;
            faction = "CIV_F";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Vehicles";
            //picture="\Edaly_Items_Assets_1\UI\Edaly_Wheeled_Gaz21_1.paa";
            displayName = "Gaz21 (Classique)";
            hiddenSelections[] = {};
            hiddenSelectionsTextures[] = {};
            terrainCoef = 3.5;
            turnCoef = 2.5;
            precision = 10;
            brakeDistance = 3;
            acceleration = 5;
            fireResistance = 5;
            armor = 20;
            cost = 50000;
            transportMaxBackpacks = 10;
            transportSoldier = 1;
            wheelDamageRadiusCoef = 0.9;
            wheelDestroyRadiusCoef = 0.4;
            maxFordingDepth = 0.5;
            waterResistance = 1;
            driverLeftHandAnimName = "drivewheel";
            driverRightHandAnimName = "drivewheel";
            class Turrets{};
            driverAction = "driver_low01";
            cargoAction[] = {"passenger_low01"};
            getInAction = "GetInLow";
            getOutAction = "GetOutLow";
            cargoGetInAction[] = {"GetInLow"};
            cargoGetOutAction[] = {"GetOutLow"};
            memoryPointTrackFLL = "TrackFLL";
            memoryPointTrackFLR = "TrackFLR";
            memoryPointTrackBLL = "TrackBLL";
            memoryPointTrackBLR = "TrackBLR";
            memoryPointTrackFRL = "TrackFRL";
            memoryPointTrackFRR = "TrackFRR";
            memoryPointTrackBRL = "TrackBRL";
            memoryPointTrackBRR = "TrackBRR";
            thrustDelay = 0.5;
            brakeIdleSpeed = 1.78;
            maxSpeed = 110;
            fuelCapacity = 50;
            fueltype="Diesel";
            wheelCircumference = 2.505;
            antiRollbarForceCoef = 12.5;
            antiRollbarForceLimit = 10.5;
            antiRollbarSpeedMin = 5;
            antiRollbarSpeedMax = 150;
            idleRpm = 1000;
            redRpm = 4000;

            class complexGearbox
            {
                GearboxRatios[] = {"R1",-3,"N",0,"D1",2.4,"D2",1.7,"D3",1.1,"D4",0.8};
                TransmissionRatios[] = {"High",4.111};
                gearBoxMode = "auto";
                moveOffGear = 1;
                driveString = "D";
                neutralString = "N";
                reverseString = "R";
            };
            simulation = "carx";
            dampersBumpCoef = 4;
            differentialType = "all_limited";
            frontRearSplit = 0.5;
            frontBias = 1.5;
            rearBias = 1.5;
            centreBias = 1.3;
            clutchStrength = 20;
            enginePower = 180;
            maxOmega = 275;
            peakTorque = 300;
            dampingRateFullThrottle = 0.08;
            dampingRateZeroThrottleClutchEngaged = 0.5;
            dampingRateZeroThrottleClutchDisengaged = 0.35;
            torqueCurve[] = {{"(0/3500)","(0/425)"},{"(500/3500)","(200/425)"},{"(1500/3500)","(405/425)"},{"(2000/3500)","(425/425)"},{"(2500/3500)","(350/425)"},{"(3000/3500)","(300/425)"},{"(6000/3500)","(0/425)"}};
            changeGearMinEffectivity[] = {0.9,0.15,0.9,0.9,0.9,0.9};
            switchTime = 0.5;
            latency = 1.5;
            class Wheels
            {
                class LF
                {
                    boneName = "wheel_1_1_damper";
                    steering = 1;
                    side = "left";
                    center = "wheel_1_1_axis";
                    boundary = "wheel_1_1_bound";
                    width = 0.2;
                    mass = 50;
                    MOI = 5.3;
                    dampingRate = 0.5;
                    maxBrakeTorque = 1500;
                    maxHandBrakeTorque = 0;
                    suspTravelDirection[] = {0,-1,0};
                    suspForceAppPointOffset = "wheel_1_1_axis";
                    tireForceAppPointOffset = "wheel_1_1_axis";
                    maxCompression = 0.1;
                    mMaxDroop = 0.05;
                    sprungMass = 272.5;
                    springStrength = 27250;
                    springDamperRate = 6725;
                    longitudinalStiffnessPerUnitGravity = 100000;
                    latStiffX = 25;
                    latStiffY = 18000;
                    frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
                };
                class LR: LF
                {
                    boneName = "wheel_1_2_damper";
                    steering = 0;
                    center = "wheel_1_2_axis";
                    boundary = "wheel_1_2_bound";
                    suspForceAppPointOffset = "wheel_1_2_axis";
                    tireForceAppPointOffset = "wheel_1_2_axis";
                    maxHandBrakeTorque = 1000;
                };
                class RF: LF
                {
                    boneName = "wheel_2_1_damper";
                    center = "wheel_2_1_axis";
                    boundary = "wheel_2_1_bound";
                    suspForceAppPointOffset = "wheel_2_1_axis";
                    tireForceAppPointOffset = "wheel_2_1_axis";
                    steering = 1;
                    side = "right";
                };
                class RR: RF
                {
                    boneName = "wheel_2_2_damper";
                    steering = 0;
                    center = "wheel_2_2_axis";
                    boundary = "wheel_2_2_bound";
                    suspForceAppPointOffset = "wheel_2_2_axis";
                    tireForceAppPointOffset = "wheel_2_2_axis";
                    maxHandBrakeTorque = 1000;
                };
            };
            class Exhausts
            {
                class Exhaust1
                {
                    position = "exhaust";
                    direction = "exhaust_dir";
                    effect = "ExhaustEffectHTruck";
                };
                class Exhaust2
                {
                    position = "exhaust2_pos";
                    direction = "exhaust2_dir";
                    effect = "ExhaustEffectHTruck";
                };
            };
            class RenderTargets
            {
                class LeftMirror
                {
                    renderTarget = "rendertarget0";
                    class CameraView1
                    {
                        pointPosition = "PIP0_pos";
                        pointDirection = "PIP0_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
                class RearCam
                {
                    renderTarget = "rendertarget1";
                    class CameraView1
                    {
                        pointPosition = "PIP1_pos";
                        pointDirection = "PIP1_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
                class FrontCam
                {
                    renderTarget = "rendertarget2";
                    class CameraView1
                    {
                        pointPosition = "PIP2_pos";
                        pointDirection = "PIP2_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
            };
            class Damage
            {
                tex[] = {};
                mat[] = {"Edaly_Wheeled_1\Common_data\carroserie.rvmat","Edaly_Wheeled_1\Common_data\car_damage.rvmat","Edaly_Wheeled_1\Common_data\car_destruct.rvmat","Edaly_Wheeled_1\Common_data\reflective_glass.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
            };

            class selections{
                vehicledoor_1 = "vehicleDoor_1_source";
                vehicledoor_2 = "vehicleDoor_2_source";
                trunk = "trunk_source";
                hood = "hood_source";
                windowhandle_1 = "windowHandle_1_source";
                windowhandle_2 = "windowHandle_2_source";

            };
            class AnimationSources
            {
                class vehicleDoor_1_source
                {
                    source = "user";
                    animPeriod = 0.7;
                    initPhase = 0;
                    sound = "doorcar";
                    soundPosition = "getin1";
                };
                class vehicleDoor_2_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                    sound = "doorcar";
                    soundPosition = "getin2";
                };
                class trunk_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                };
                class hood_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                };
                class windowHandle_1_source
                {
                    source = "user";
                    animPeriod = 2.5;
                    initPhase = 0;
                    soundPosition = "getin1";
                };
                class windowHandle_2_source: windowHandle_1_source
                {
                    animPeriod = 2.5;
                    soundPosition = "getin2";
                };
                class HitLFWheel
                {
                    source = "Hit";
                    hitpoint = "HitLFWheel";
                    raw = 1;
                };
                class HitRFWheel: HitLFWheel
                {
                    hitpoint = "HitRFWheel";
                };
                class HitLBWheel: HitLFWheel
                {
                    hitpoint = "HitLF2Wheel";
                };
                class HitRBWheel: HitLFWheel
                {
                    hitpoint = "HitRF2Wheel";
                };
                class HitLF2Wheel: HitLFWheel
                {
                    hitpoint = "HitLBWheel";
                };
                class HitRF2Wheel: HitLFWheel
                {
                    hitpoint = "HitRBWheel";
                };
                class HitLMWheel: HitLFWheel
                {
                    hitpoint = "HitLMWheel";
                };
                class HitRMWheel: HitLFWheel
                {
                    hitpoint = "HitRMWheel";
                };
                class HitGlass1
                {
                    source = "Hit";
                    hitpoint = "HitGlass1";
                    raw = 1;
                };
                class HitGlass2: HitGlass1
                {
                    hitpoint = "HitGlass2";
                };
                class HitGlass3: HitGlass1
                {
                    hitpoint = "HitGlass3";
                };
                class HitGlass4: HitGlass1
                {
                    hitpoint = "HitGlass4";
                };
            };
            class Reflectors
            {
                class LightCarHeadL01
                {
                    color[] = {1900,1800,1700};
                    ambient[] = {5,5,5};
                    position = "LightCarHeadL01";
                    direction = "LightCarHeadL01_end";
                    hitpoint = "Light_L";
                    selection = "Light_L";
                    size = 1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 1;
                    useFlare = 1;
                    dayLight = 0;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 30;
                        hardLimitEnd = 60;
                    };
                };
                class LightCarHeadL02: LightCarHeadL01
                {
                    position = "LightCarHeadL02";
                    direction = "LightCarHeadL02_end";
                    FlareSize = 0.5;
                };
                class LightCarHeadR01: LightCarHeadL01
                {
                    position = "LightCarHeadR01";
                    direction = "LightCarHeadR01_end";
                    hitpoint = "Light_R";
                    selection = "Light_R";
                };
                class LightCarHeadR02: LightCarHeadR01
                {
                    position = "LightCarHeadR02";
                    direction = "LightCarHeadR02_end";
                    FlareSize = 0.5;
                };
            };
            aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
        };
 	/* gaz21 */

    class Edaly_CerVi_1957_Base: Van_01_base_F
    {
            model = "\Edaly_Wheeled_2\CerVi_1957\CerVi_1957_EL.p3d";
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator=2;
            crew = "C_man_1";
            side = 3;
            faction = "CIV_F";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Vehicles";
            //picture="\Edaly_Items_Assets_1\UI\Edaly_Wheeled_Gaz21_1.paa";
            displayName = "CerVi 1957 (Classique)";
            hiddenSelections[] = {"body"};
            hiddenSelectionsTextures[] = {"Edaly_Wheeled_2\CerVi_1957\data\body_co.paa"};
            terrainCoef = 2.5;
            turnCoef = 2.5;
            precision = 10;
            brakeDistance = 5;
            acceleration = 3;
            fireResistance = 5;
            armor = 20;
            cost = 50000;
            transportMaxBackpacks = 10;
            transportSoldier = 1;
            wheelDamageRadiusCoef = 0.9;
            wheelDestroyRadiusCoef = 0.4;
            maxFordingDepth = 0.5;
            waterResistance = 1;
            driverLeftHandAnimName = "drivewheel";
            driverRightHandAnimName = "drivewheel";
            class Turrets{};
            driverAction = "driver_low01";
            cargoAction[] = {"passenger_low01"};
            getInAction = "GetInLow";
            getOutAction = "GetOutLow";
            cargoGetInAction[] = {"GetInLow"};
            cargoGetOutAction[] = {"GetOutLow"};
            memoryPointTrackFLL = "TrackFLL";
            memoryPointTrackFLR = "TrackFLR";
            memoryPointTrackBLL = "TrackBLL";
            memoryPointTrackBLR = "TrackBLR";
            memoryPointTrackFRL = "TrackFRL";
            memoryPointTrackFRR = "TrackFRR";
            memoryPointTrackBRL = "TrackBRL";
            memoryPointTrackBRR = "TrackBRR";
            thrustDelay = 0.5;
            brakeIdleSpeed = 0.5;
            maxSpeed = 80;
            fuelCapacity = 50;
            fueltype="Diesel";
            wheelCircumference = 2.505;
            antiRollbarForceCoef = 12.5;
            antiRollbarForceLimit = 10.5;
            antiRollbarSpeedMin = 5;
            antiRollbarSpeedMax = 150;
            idleRpm = 1000;
            redRpm = 4000;

            class complexGearbox
            {
                GearboxRatios[] = {"R1",-3,"N",0,"D1",2.4,"D2",1.7,"D3",1.1,"D4",0.8};
                TransmissionRatios[] = {"High",4.111};
                gearBoxMode = "auto";
                moveOffGear = 1;
                driveString = "D";
                neutralString = "N";
                reverseString = "R";
            };
            simulation = "carx";
            dampersBumpCoef = 4;
            differentialType = "all_limited";
            frontRearSplit = 0.5;
            frontBias = 1.5;
            rearBias = 1.5;
            centreBias = 1.3;
            clutchStrength = 20;
            enginePower = 180;
            maxOmega = 275;
            peakTorque = 300;
            dampingRateFullThrottle = 0.08;
            dampingRateZeroThrottleClutchEngaged = 0.5;
            dampingRateZeroThrottleClutchDisengaged = 0.35;
            torqueCurve[] = {{"(0/3500)","(0/425)"},{"(500/3500)","(200/425)"},{"(1500/3500)","(405/425)"},{"(2000/3500)","(425/425)"},{"(2500/3500)","(350/425)"},{"(3000/3500)","(300/425)"},{"(6000/3500)","(0/425)"}};
            changeGearMinEffectivity[] = {0.9,0.15,0.9,0.9,0.9,0.9};
            switchTime = 0.7;
            latency = 1.5;

            soundEngineOnInt[] = {"Edaly_Sounds_Assets_1\data\cervi_start.ogg", db-4, 1.0};
            soundEngineOnExt[] = {"Edaly_Sounds_Assets_1\data\cervi_start.ogg", db-2, 1.0, 200};
            soundEngineOffInt[] = {"Edaly_Sounds_Assets_1\data\cervi_stop.ogg", db-4, 1.0};
            soundEngineOffExt[] = {"Edaly_Sounds_Assets_1\data\cervi_stop.ogg", db-2, 1.0, 200};

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
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_idle.ogg", db-2, 1, 150};
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*camPos*VOLUME_IDLE;
                };
                class Engine
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_idle.ogg", db-3,1, 200};
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*camPos*VOLUME_RPM1;
                };
                class Engine1_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-3,1, 240};
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*camPos*VOLUME_RPM2;
                };
                class Engine2_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-2,1, 280};
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*camPos*VOLUME_RPM3;
                };
                class Engine3_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-2,1, 320};
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*camPos*VOLUME_RPM4;
                };
                class Engine4_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-1,1, 360};
                    frequency   =   0.8 +   HZ_RPM5*0.2;
                    volume = engineOn*camPos*VOLUME_RPM5;
                };
                class Engine5_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-1,1, 420};
                    frequency   =   0.95    +   HZ_RPM6*0.15;
                    volume = engineOn*camPos*VOLUME_RPM6;
                };

                    /*   hatchback external sounds with gas  */

                class IdleThrust
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_idle.ogg", db-2,1, 200};
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
                };
                class EngineThrust
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-2,1, 250};
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
                };
                class Engine1_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-1,1, 280};
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
                };
                class Engine2_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db1,1, 320};
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
                };
                class Engine3_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db2,1, 360};
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
                };
                class Engine4_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db3,1, 400};
                    frequency   =   0.8 +   HZ_RPM5*0.3;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
                };
                class Engine5_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db4,1, 450};
                    frequency   =   0.9 +   HZ_RPM6*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
                };

                /*  end external sounds with gas */

                /* hatchback internal sounds without gas */

                class Idle_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_idle_int.ogg", db-2, 1};
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_IDLE;
                };
                class Engine_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-5,1 };
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM1;
                };
                class Engine1_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-5,1 };
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM2;
                };
                class Engine2_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-4,1 };
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM3;
                };
                class Engine3_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM4;
                };
                class Engine4_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM5*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM5;
                };
                class Engine5_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-6,1 };
                    frequency   =   0.95    +   HZ_RPM6*0.15;
                    volume = engineOn*(1-camPos)*VOLUME_RPM6;
                };

                    /* hatchback internal sounds with gas */

                class IdleThrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_idle_int.ogg", db-2,1 };
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
                };
                class EngineThrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-5,1 };
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
                };
                class Engine1_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-4,1 };
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
                };
                class Engine2_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
                };
                class Engine3_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-4,1 };
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
                };
                class Engine4_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM5*0.3;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
                };
                class Engine5_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cervi_drive.ogg", db-2,1 };
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
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*rock*(speed factor[2, 20])";
                };
                class TiresSandOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*sand*(speed factor[2, 20])";
                };
                class TiresGrassOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*grass*(speed factor[2, 20])";
                };
                class TiresMudOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*mud*(speed factor[2, 20])";
                };
                class TiresGravelOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*gravel*(speed factor[2, 20])";
                };
                class TiresAsphaltOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-10, 1.0, 60};
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
            class Wheels
            {
                class LF
                {
                    boneName = "wheel_1_1_damper";
                    steering = 1;
                    side = "left";
                    center = "wheel_1_1_axis";
                    boundary = "wheel_1_1_bound";
                    width = 0.6;
                    mass = 50;
                    MOI = 5.3;
                    dampingRate = 0.5;
                    maxBrakeTorque = 1500;
                    maxHandBrakeTorque = 0;
                    suspTravelDirection[] = {0,-1,0};
                    suspForceAppPointOffset = "wheel_1_1_axis";
                    tireForceAppPointOffset = "wheel_1_1_axis";
                    maxCompression = 0.1;
                    mMaxDroop = 0.05;
                    sprungMass = -1;
                    springStrength = 27250;
                    springDamperRate = 6725;
                    longitudinalStiffnessPerUnitGravity = 100000;
                    latStiffX = 25;
                    latStiffY = 18000;
                    frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
                };
                class LR: LF
                {
                    boneName = "wheel_1_2_damper";
                    steering = 0;
                    center = "wheel_1_2_axis";
                    boundary = "wheel_1_2_bound";
                    suspForceAppPointOffset = "wheel_1_2_axis";
                    tireForceAppPointOffset = "wheel_1_2_axis";
                    maxHandBrakeTorque = 1000;
                };
                class RF: LF
                {
                    boneName = "wheel_2_1_damper";
                    center = "wheel_2_1_axis";
                    boundary = "wheel_2_1_bound";
                    suspForceAppPointOffset = "wheel_2_1_axis";
                    tireForceAppPointOffset = "wheel_2_1_axis";
                    steering = 1;
                    side = "right";
                };
                class RR: RF
                {
                    boneName = "wheel_2_2_damper";
                    steering = 0;
                    center = "wheel_2_2_axis";
                    boundary = "wheel_2_2_bound";
                    suspForceAppPointOffset = "wheel_2_2_axis";
                    tireForceAppPointOffset = "wheel_2_2_axis";
                    maxHandBrakeTorque = 1000;
                };
            };
            class Exhausts
            {
                class Exhaust1
                {
                    position = "exhaust";
                    direction = "exhaust_dir";
                    effect = "ExhaustEffectHTruck";
                };
                class Exhaust2
                {
                    position = "exhaust2_pos";
                    direction = "exhaust2_dir";
                    effect = "ExhaustEffectHTruck";
                };
            };
            class RenderTargets
            {
                class LeftMirror
                {
                    renderTarget = "rendertarget0";
                    class CameraView1
                    {
                        pointPosition = "PIP0_pos";
                        pointDirection = "PIP0_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
                class RearCam
                {
                    renderTarget = "rendertarget1";
                    class CameraView1
                    {
                        pointPosition = "PIP1_pos";
                        pointDirection = "PIP1_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
                class FrontCam
                {
                    renderTarget = "rendertarget2";
                    class CameraView1
                    {
                        pointPosition = "PIP2_pos";
                        pointDirection = "PIP2_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
            };
            class Damage
            {
                tex[] = {};
                mat[] = {"Edaly_Wheeled_1\Common_data\carroserie.rvmat","Edaly_Wheeled_1\Common_data\car_damage.rvmat","Edaly_Wheeled_1\Common_data\car_destruct.rvmat","Edaly_Wheeled_1\Common_data\reflective_glass.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
            };

            class selections{
                vehicledoor_1 = "vehicleDoor_1_source";
                vehicledoor_2 = "vehicleDoor_2_source";
                trunk = "trunk_source";
                hood = "hood_source";
                windowhandle_1 = "windowHandle_1_source";
                windowhandle_2 = "windowHandle_2_source";

            };
            class AnimationSources
            {
                class vehicleDoor_1_source
                {
                    source = "user";
                    animPeriod = 0.7;
                    initPhase = 0;
                    sound = "doorcar";
                    soundPosition = "getin1";
                };
                class vehicleDoor_2_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                    sound = "doorcar";
                    soundPosition = "getin2";
                };
                class trunk_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                };
                class hood_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                };
                class windowHandle_1_source
                {
                    source = "user";
                    animPeriod = 2.5;
                    initPhase = 0;
                    soundPosition = "getin1";
                };
                class windowHandle_2_source: windowHandle_1_source
                {
                    animPeriod = 2.5;
                    soundPosition = "getin2";
                };
                class HitLFWheel
                {
                    source = "Hit";
                    hitpoint = "HitLFWheel";
                    raw = 1;
                };
                class HitRFWheel: HitLFWheel
                {
                    hitpoint = "HitRFWheel";
                };
                class HitLBWheel: HitLFWheel
                {
                    hitpoint = "HitLF2Wheel";
                };
                class HitRBWheel: HitLFWheel
                {
                    hitpoint = "HitRF2Wheel";
                };
                class HitLF2Wheel: HitLFWheel
                {
                    hitpoint = "HitLBWheel";
                };
                class HitRF2Wheel: HitLFWheel
                {
                    hitpoint = "HitRBWheel";
                };
                class HitLMWheel: HitLFWheel
                {
                    hitpoint = "HitLMWheel";
                };
                class HitRMWheel: HitLFWheel
                {
                    hitpoint = "HitRMWheel";
                };
                class HitGlass1
                {
                    source = "Hit";
                    hitpoint = "HitGlass1";
                    raw = 1;
                };
                class HitGlass2: HitGlass1
                {
                    hitpoint = "HitGlass2";
                };
                class HitGlass3: HitGlass1
                {
                    hitpoint = "HitGlass3";
                };
                class HitGlass4: HitGlass1
                {
                    hitpoint = "HitGlass4";
                };
            };
            class Reflectors
            {
                class LightCarHeadL01
                {
                    color[] = {1200,600,300};
                    ambient[] = {5,5,5};
                    position = "LightCarHeadL01";
                    direction = "LightCarHeadL01_end";
                    hitpoint = "Light_L";
                    selection = "Light_L";
                    size = 1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 1;
                    useFlare = 1;
                    dayLight = 0;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 30;
                        hardLimitEnd = 60;
                    };
                };
                class LightCarHeadL02: LightCarHeadL01
                {
                    position = "LightCarHeadL02";
                    direction = "LightCarHeadL02_end";
                    FlareSize = 0.5;
                };
                class LightCarHeadR01: LightCarHeadL01
                {
                    position = "LightCarHeadR01";
                    direction = "LightCarHeadR01_end";
                    hitpoint = "Light_R";
                    selection = "Light_R";
                };
                class LightCarHeadR02: LightCarHeadR01
                {
                    position = "LightCarHeadR02";
                    direction = "LightCarHeadR02_end";
                    FlareSize = 0.5;
                };
            };
            aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
    };
    class Edaly_CerVi_1957_Yellow: Edaly_CerVi_1957_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "CerVi 1957 (Yellow)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\CerVi_1957\data\body_yellow_co.paa"};
    };
    class Edaly_CerVi_1957_Green: Edaly_CerVi_1957_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "CerVi 1957 (Green)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\CerVi_1957\data\body_green_co.paa"};
    };
    class Edaly_CerVi_1957_Pink: Edaly_CerVi_1957_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "CerVi 1957 (Pink)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\CerVi_1957\data\body_pink_co.paa"};
    };

    class Edaly_Ferdj_Cheyen_Base: Van_01_base_F
    {
            model = "\Edaly_Wheeled_2\Ferdj_Cheyen\Ferdj_Cheyen_EL.p3d";
            author = $STR_EDALY_AUTHOR;
            scope = 2;
            scopeCurator=2;
            crew = "C_man_1";
            side = 3;
            faction = "CIV_F";
            editorCategory = "EdCat_Edaly";
            editorSubcategory = "EdSubcat_Edaly_Vehicles";
            //picture="\Edaly_Items_Assets_1\UI\Edaly_Wheeled_Gaz21_1.paa";
            displayName = "Ferdj Cheyen (Classique)";
            hiddenSelections[] = {"body"};
            hiddenSelectionsTextures[] = {"Edaly_Wheeled_2\Ferdj_Cheyen\data\body_co.paa"};
            terrainCoef = 3.5;
            turnCoef = 2.5;
            precision = 10;
            brakeDistance = 3;
            acceleration = 5;
            fireResistance = 5;
            armor = 20;
            cost = 50000;
            transportMaxBackpacks = 10;
            transportSoldier = 1;
            wheelDamageRadiusCoef = 0.9;
            wheelDestroyRadiusCoef = 0.4;
            maxFordingDepth = 0.5;
            waterResistance = 1;
            driverLeftHandAnimName = "drivewheel";
            driverRightHandAnimName = "drivewheel";
            class Turrets{};
            driverAction = "driver_low01";
            cargoAction[] = {"passenger_low01"};
            getInAction = "GetInLow";
            getOutAction = "GetOutLow";
            cargoGetInAction[] = {"GetInLow"};
            cargoGetOutAction[] = {"GetOutLow"};
            memoryPointTrackFLL = "TrackFLL";
            memoryPointTrackFLR = "TrackFLR";
            memoryPointTrackBLL = "TrackBLL";
            memoryPointTrackBLR = "TrackBLR";
            memoryPointTrackFRL = "TrackFRL";
            memoryPointTrackFRR = "TrackFRR";
            memoryPointTrackBRL = "TrackBRL";
            memoryPointTrackBRR = "TrackBRR";
            thrustDelay = 0.5;
            brakeIdleSpeed = 1.78;
            maxSpeed = 100;
            fuelCapacity = 50;
            fueltype="Diesel";
            wheelCircumference = 2.505;
            antiRollbarForceCoef = 12.5;
            antiRollbarForceLimit = 10.5;
            antiRollbarSpeedMin = 5;
            antiRollbarSpeedMax = 150;
            idleRpm = 600;
            redRpm = 3000;

            class complexGearbox
            {
                GearboxRatios[] = {"R1",-3,"N",0,"D1",2.4,"D2",1.7,"D3",1.1,"D4",0.8};
                TransmissionRatios[] = {"High",4.111};
                gearBoxMode = "auto";
                moveOffGear = 1;
                driveString = "D";
                neutralString = "N";
                reverseString = "R";
            };
            simulation = "carx";
            dampersBumpCoef = 4;
            differentialType = "all_limited";
            frontRearSplit = 0.5;
            frontBias = 1.5;
            rearBias = 1.5;
            centreBias = 1.3;
            clutchStrength = 20;
            enginePower = 180;
            maxOmega = 275;
            peakTorque = 300;
            dampingRateFullThrottle = 0.08;
            dampingRateZeroThrottleClutchEngaged = 0.5;
            dampingRateZeroThrottleClutchDisengaged = 0.35;
            torqueCurve[] = {{"(0/3500)","(0/425)"},{"(500/3500)","(200/425)"},{"(1500/3500)","(405/425)"},{"(2000/3500)","(425/425)"},{"(2500/3500)","(350/425)"},{"(3000/3500)","(300/425)"},{"(6000/3500)","(0/425)"}};
            changeGearMinEffectivity[] = {0.9,0.15,0.9,0.9,0.9,0.9};
            switchTime = 0.5;
            latency = 1.5;
            soundEngineOnInt[] = {"Edaly_Sounds_Assets_1\data\cheyen_start.ogg", db-2, 1.0};
            soundEngineOnExt[] = {"Edaly_Sounds_Assets_1\data\cheyen_start.ogg", db-1, 1.0, 200};
            soundEngineOffInt[] = {"Edaly_Sounds_Assets_1\data\cheyen_stop.ogg", db-2, 1.0};
            soundEngineOffExt[] = {"Edaly_Sounds_Assets_1\data\cheyen_stop.ogg", db-1, 1.0, 200};

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
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_idle_ext.ogg", db-2, 1, 150};
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*camPos*VOLUME_IDLE;
                };
                class Engine
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db-3,1, 200};
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*camPos*VOLUME_RPM1;
                };
                class Engine1_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_1000_ext.ogg", db-3,1, 240};
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*camPos*VOLUME_RPM2;
                };
                class Engine2_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db-2,1, 280};
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*camPos*VOLUME_RPM3;
                };
                class Engine3_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db-2,1, 320};
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*camPos*VOLUME_RPM4;
                };
                class Engine4_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_2000_ext.ogg", db-1,1, 360};
                    frequency   =   0.8 +   HZ_RPM5*0.2;
                    volume = engineOn*camPos*VOLUME_RPM5;
                };
                class Engine5_ext
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db-1,1, 420};
                    frequency   =   0.95    +   HZ_RPM6*0.15;
                    volume = engineOn*camPos*VOLUME_RPM6;
                };

                    /*   hatchback external sounds with gas  */

                class IdleThrust
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_idle_ext.ogg", db-2,1, 200};
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
                };
                class EngineThrust
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db-2,1, 250};
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
                };
                class Engine1_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_1000_ext.ogg", db-1,1, 280};
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
                };
                class Engine2_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db1,1, 320};
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
                };
                class Engine3_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db2,1, 360};
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
                };
                class Engine4_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_2000_ext.ogg", db3,1, 400};
                    frequency   =   0.8 +   HZ_RPM5*0.3;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
                };
                class Engine5_Thrust_ext
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_ext.ogg", db4,1, 450};
                    frequency   =   0.9 +   HZ_RPM6*0.2;
                    volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
                };

                /*  end external sounds with gas */

                /* hatchback internal sounds without gas */

                class Idle_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_idle_int.ogg", db-2, 1};
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_IDLE;
                };
                class Engine_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_int.ogg", db-5,1 };
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM1;
                };
                class Engine1_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_1000_int.ogg", db-5,1 };
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM2;
                };
                class Engine2_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_2000_int.ogg", db-4,1 };
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM3;
                };
                class Engine3_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_int.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM4;
                };
                class Engine4_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_2000_int.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM5*0.2;
                    volume = engineOn*(1-camPos)*VOLUME_RPM5;
                };
                class Engine5_int
                {
                    sound[] =   {"Edaly_Sounds_Assets_1\data\cheyen_drive_int.ogg", db-6,1 };
                    frequency   =   0.95    +   HZ_RPM6*0.15;
                    volume = engineOn*(1-camPos)*VOLUME_RPM6;
                };

                    /* hatchback internal sounds with gas */

                class IdleThrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_idle_int.ogg", db-2,1 };
                    frequency   =   0.9 +   HZ_IDLE*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
                };
                class EngineThrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_int.ogg", db-5,1 };
                    frequency   =   0.8 +   HZ_RPM1*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
                };
                class Engine1_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_1000_int.ogg", db-4,1 };
                    frequency   =   0.8 +   HZ_RPM2*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
                };
                class Engine2_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_2000_int.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM3*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
                };
                class Engine3_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_int.ogg", db-4,1 };
                    frequency   =   0.8 +   HZ_RPM4*0.2;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
                };
                class Engine4_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_2000_int.ogg", db-3,1 };
                    frequency   =   0.8 +   HZ_RPM5*0.3;
                    volume = engineOn*(1-camPos)*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
                };
                class Engine5_Thrust_int
                {
                sound[] = {"Edaly_Sounds_Assets_1\data\cheyen_drive_int.ogg", db-2,1 };
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
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*rock*(speed factor[2, 20])";
                };
                class TiresSandOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*sand*(speed factor[2, 20])";
                };
                class TiresGrassOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*grass*(speed factor[2, 20])";
                };
                class TiresMudOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*mud*(speed factor[2, 20])";
                };
                class TiresGravelOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-10, 1.0, 60};
                    frequency = "1";
                    volume = "camPos*gravel*(speed factor[2, 20])";
                };
                class TiresAsphaltOut
                {
                    sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-10, 1.0, 60};
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
            class Wheels
            {
                class LF
                {
                    boneName = "wheel_1_1_damper";
                    steering = 1;
                    side = "left";
                    center = "wheel_1_1_axis";
                    boundary = "wheel_1_1_bound";
                    width = 0.6;
                    mass = 50;
                    MOI = 5.3;
                    dampingRate = 0.5;
                    maxBrakeTorque = 1500;
                    maxHandBrakeTorque = 0;
                    suspTravelDirection[] = {0,-1,0};
                    suspForceAppPointOffset = "wheel_1_1_axis";
                    tireForceAppPointOffset = "wheel_1_1_axis";
                    maxCompression = 0.1;
                    mMaxDroop = 0.05;
                    sprungMass = -1;
                    springStrength = 27250;
                    springDamperRate = 6725;
                    longitudinalStiffnessPerUnitGravity = 100000;
                    latStiffX = 25;
                    latStiffY = 18000;
                    frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
                };
                class LR: LF
                {
                    boneName = "wheel_1_2_damper";
                    steering = 0;
                    center = "wheel_1_2_axis";
                    boundary = "wheel_1_2_bound";
                    suspForceAppPointOffset = "wheel_1_2_axis";
                    tireForceAppPointOffset = "wheel_1_2_axis";
                    maxHandBrakeTorque = 1000;
                };
                class RF: LF
                {
                    boneName = "wheel_2_1_damper";
                    center = "wheel_2_1_axis";
                    boundary = "wheel_2_1_bound";
                    suspForceAppPointOffset = "wheel_2_1_axis";
                    tireForceAppPointOffset = "wheel_2_1_axis";
                    steering = 1;
                    side = "right";
                };
                class RR: RF
                {
                    boneName = "wheel_2_2_damper";
                    steering = 0;
                    center = "wheel_2_2_axis";
                    boundary = "wheel_2_2_bound";
                    suspForceAppPointOffset = "wheel_2_2_axis";
                    tireForceAppPointOffset = "wheel_2_2_axis";
                    maxHandBrakeTorque = 1000;
                };
            };
            class Exhausts
            {
                class Exhaust1
                {
                    position = "exhaust";
                    direction = "exhaust_dir";
                    effect = "ExhaustEffectHTruck";
                };
                class Exhaust2
                {
                    position = "exhaust2_pos";
                    direction = "exhaust2_dir";
                    effect = "ExhaustEffectHTruck";
                };
            };
            class RenderTargets
            {
                class LeftMirror
                {
                    renderTarget = "rendertarget0";
                    class CameraView1
                    {
                        pointPosition = "PIP0_pos";
                        pointDirection = "PIP0_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
                class RearCam
                {
                    renderTarget = "rendertarget1";
                    class CameraView1
                    {
                        pointPosition = "PIP1_pos";
                        pointDirection = "PIP1_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
                class FrontCam
                {
                    renderTarget = "rendertarget2";
                    class CameraView1
                    {
                        pointPosition = "PIP2_pos";
                        pointDirection = "PIP2_dir";
                        renderQuality = 5;
                        renderVisionMode = 3;
                        fov = 0.7;
                    };
                };
            };
            class Damage
            {
                tex[] = {};
                mat[] = {"Edaly_Wheeled_1\Common_data\carroserie.rvmat","Edaly_Wheeled_1\Common_data\car_damage.rvmat","Edaly_Wheeled_1\Common_data\car_destruct.rvmat","Edaly_Wheeled_1\Common_data\reflective_glass.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
            };

            class selections{
                vehicledoor_1 = "vehicleDoor_1_source";
                vehicledoor_2 = "vehicleDoor_2_source";
                trunk = "trunk_source";
                hood = "hood_source";
                windowhandle_1 = "windowHandle_1_source";
                windowhandle_2 = "windowHandle_2_source";

            };
            class AnimationSources
            {
                class vehicleDoor_1_source
                {
                    source = "user";
                    animPeriod = 0.7;
                    initPhase = 0;
                    sound = "doorcar";
                    soundPosition = "getin1";
                };
                class vehicleDoor_2_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                    sound = "doorcar";
                    soundPosition = "getin2";
                };
                class trunk_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                };
                class hood_source: vehicleDoor_1_source
                {
                    animPeriod = 0.7;
                };
                class windowHandle_1_source
                {
                    source = "user";
                    animPeriod = 2.5;
                    initPhase = 0;
                    soundPosition = "getin1";
                };
                class windowHandle_2_source: windowHandle_1_source
                {
                    animPeriod = 2.5;
                    soundPosition = "getin2";
                };
                class HitLFWheel
                {
                    source = "Hit";
                    hitpoint = "HitLFWheel";
                    raw = 1;
                };
                class HitRFWheel: HitLFWheel
                {
                    hitpoint = "HitRFWheel";
                };
                class HitLBWheel: HitLFWheel
                {
                    hitpoint = "HitLF2Wheel";
                };
                class HitRBWheel: HitLFWheel
                {
                    hitpoint = "HitRF2Wheel";
                };
                class HitLF2Wheel: HitLFWheel
                {
                    hitpoint = "HitLBWheel";
                };
                class HitRF2Wheel: HitLFWheel
                {
                    hitpoint = "HitRBWheel";
                };
                class HitLMWheel: HitLFWheel
                {
                    hitpoint = "HitLMWheel";
                };
                class HitRMWheel: HitLFWheel
                {
                    hitpoint = "HitRMWheel";
                };
                class HitGlass1
                {
                    source = "Hit";
                    hitpoint = "HitGlass1";
                    raw = 1;
                };
                class HitGlass2: HitGlass1
                {
                    hitpoint = "HitGlass2";
                };
                class HitGlass3: HitGlass1
                {
                    hitpoint = "HitGlass3";
                };
                class HitGlass4: HitGlass1
                {
                    hitpoint = "HitGlass4";
                };
            };
            class Reflectors
            {
                class LightCarHeadL01
                {
                    color[] = {1200,600,300};
                    ambient[] = {5,5,5};
                    position = "LightCarHeadL01";
                    direction = "LightCarHeadL01_end";
                    hitpoint = "Light_L";
                    selection = "Light_L";
                    size = 1;
                    innerAngle = 100;
                    outerAngle = 179;
                    coneFadeCoef = 10;
                    intensity = 1;
                    useFlare = 1;
                    dayLight = 0;
                    flareSize = 1;
                    class Attenuation
                    {
                        start = 1;
                        constant = 0;
                        linear = 0;
                        quadratic = 0.25;
                        hardLimitStart = 30;
                        hardLimitEnd = 60;
                    };
                };
                class LightCarHeadL02: LightCarHeadL01
                {
                    position = "LightCarHeadL02";
                    direction = "LightCarHeadL02_end";
                    FlareSize = 0.5;
                };
                class LightCarHeadR01: LightCarHeadL01
                {
                    position = "LightCarHeadR01";
                    direction = "LightCarHeadR01_end";
                    hitpoint = "Light_R";
                    selection = "Light_R";
                };
                class LightCarHeadR02: LightCarHeadR01
                {
                    position = "LightCarHeadR02";
                    direction = "LightCarHeadR02_end";
                    FlareSize = 0.5;
                };
            };
            aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
    };
    class Edaly_Ferdj_Cheyen_Green: Edaly_Ferdj_Cheyen_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Ferdj Cheyen (Green)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\Ferdj_Cheyen\data\body_green_co.paa"};
    };
    class Edaly_Ferdj_Cheyen_DrkBlue: Edaly_Ferdj_Cheyen_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Ferdj Cheyen (Dark Blue)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\Ferdj_Cheyen\data\Body_drkblue_co.paa"};
    };
    class Edaly_Ferdj_Cheyen_Blue: Edaly_Ferdj_Cheyen_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Ferdj Cheyen (Blue)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\Ferdj_Cheyen\data\Body_blue_co.paa"};
    };
    class Edaly_Ferdj_Cheyen_Beige: Edaly_Ferdj_Cheyen_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Ferdj Cheyen (Beige)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\Ferdj_Cheyen\data\Body_beige_co.paa"};
    };
    class Edaly_Ferdj_Cheyen_Pink: Edaly_Ferdj_Cheyen_Base
    {
            scope = 2;
            scopeCurator=2;
            forceInGarage = 1;
            displayName = "Ferdj Cheyen (Pink)";
            hiddenSelectionsTextures[] = {"\Edaly_Wheeled_2\Ferdj_Cheyen\data\Body_pink_co.paa"};
    };
};
