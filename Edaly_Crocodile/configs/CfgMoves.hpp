class CfgMovesBasic{
	class Default;
	class States;
	class Actions{
		class NoActions;
	};
	class BlendAnims;
};
class CfgMoves_Crocodile_Edaly: CfgMovesBasic
{
	enableDirectControl = 0;
	skeletonName = "Crocodile_Skeleton";
	gestures = "CfgGestures_Crocodile_Edaly";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
	{
		actions = "NoActions";
		adjstance = "m";
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		aimPrecision = 1;
		boundingSphere = 2;
		camShakeFire = 1;
		canBlendStep = 0;
		canPullTrigger = 1;
		canReload = 0;
		collisionShapeSafe = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		disableWeapons = 1;
		disableWeaponsLong = 1;
		duty = -0.5;
		enableAutoActions = 0;
		enableBinocular = 0;
		enableDirectControl = 1;
		enableMissile = 0;
		enableOptics = 0;
		equivalentTo = "";
		file = "";
		forceAim = 0;
		GetOutPara = "";
		hasCollShapeSafe = 0;
		head = "headDefault";
		headBobMode = 0;
		headBobStrength = 0;
		idle = "idleDefault";
		ignoreMinPlayTime[] = {"CrocodileDie"};
		interpolateFrom[] = {};
		interpolateTo[] = {};
		interpolateWith[] = {};
		interpolationRestart = 0;
		interpolationSpeed = 6;
		leaning = "leaningDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leftHandIKBeg = 0;
		leftHandIKCurve[] = {};
		leftHandIKEnd = 0;
		legs = "legsDefault";
		limitGunMovement = 1;
		looped = 1;
		minPlayTime = 0;
		onLadder = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		preload = 0;
		ragdoll = 0;
		relSpeedMax = 1;
		relSpeedMin = 1;
		rightHandIKBeg = 0;
		rightHandIKCurve[] = {};
		rightHandIKEnd = 0;
		showHandGun = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showWeaponAim = 1;
		soundEdge[] = {0.5,1};
		soundEnabled = 1;
		soundOverride = "";
		speed = 0.5;
		stamina = 1;
		static = 0;
		terminal = 0;
		useIdles = 1;
		variantsAI[] = {""};
		variantsPlayer[] = {};
		visibleSize = 0.6;
		Walkcycles = 1;
		weaponIK = 0;
		weaponLowered = 0;
		weaponObstructed = 0;
		collisionShape = "edaly_crocodile\CollShape.p3d";
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
    class DefaultDie: Default
    {
        aiming = "aimingNo";
        aimingBody = "aimingNo";
        legs = "legsNo";
        head = "headNo";
        disableWeapons = 1;
        interpolationRestart = 1;
        soundEdge[] = {0.45};
        boundingSphere = 2;
        enableDirectControl = 0;
        showWeaponAim = 0;
        canPullTrigger = 0;
        headBobMode = 1;
        headBobStrength = -1;
    };

	class States
	{
		class CrocodileStandIdle: StandBase
		{
			enableDirectControl = 1;
			actions = "Edaly_Crocodile_Actions";
			duty = -1;
			file = "edaly_crocodile\anims\classic_lie.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			variantsAI[] = {"CrocodileIdleStartBase",0.02,"CrocodileStandIdle",0.02,"CrocodileStandIdle",0.02};
			variantsPlayer[] = {};
			speed = -9;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			connectTo[] = {"CrocodileWalkFront",0.02,"CrocodileRunFront",0.02,"CrocodileSwimFront",0.02};
			interpolateTo[] = {"CrocodileWalkFront",0.02,"CrocodileRunFront",0.02,"CrocodileDie",0.02,"CrocodileSwimFront",0.02};
			interpolateFrom[] = {"CrocodileWalkFront",0.02,"CrocodileRunFront",0.02,"CrocodileSwimFront",0.02};
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			interpolationSpeed = 1;
			preload = 1;
		};
		class CrocodileIdleStartBase: CrocodileStandIdle
		{
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_lieStart.rtm";
			speed = -3.2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "";
			soundEnabled = 1;
			interpolateFrom[] = {"CrocodileStandIdle",0.01};
			interpolateTo[] = {"CrocodileIdleStart",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};

		class CrocodileIdleStart: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Lying";
			file = "edaly_crocodile\anims\classic_lieStart.rtm";
			speed = -2;
			disableWeapons = 1;
			canReload = 0;
			canBlendStep = 0;
			looped = 0;
			interpolationRestart = 2;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.1,1,0.2,0};
			rightHandIKEnd = 0;
			interpolateFrom[] = {"CrocodileIdleStartBase",0.01};
			ConnectTo[] = {"CrocodileIdle",0.1};
			InterpolateTo[] = {"CrocodileIdleEnd",0.02};
		};

		class CrocodileIdle: CrocodileIdleStart
		{
			file = "edaly_crocodile\anims\classic_lie.rtm";
			speed = -25;
			variantsAI[] = {"CrocodileIdle2",0.5,"CrocodileIdle3",0.2};
			ConnectTo[] = {"CrocodileIdleEnd",0.1};
			InterpolateTo[] = {};
		};

		class CrocodileIdleEnd: CrocodileIdleStart
		{
			actions = "Edaly_Crocodile_Actions";
			file = "edaly_crocodile\anims\classic_lieEnd.rtm";
			speed = -3;
			rightHandIKCurve[] = {0.8,0,0.9,1};
			ConnectTo[] = {"CrocodileStandIdle",0.1};
			InterpolateTo[] = {"CrocodileStandIdle",0.02};
		};
		class CrocodileWalkFront: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_Walk.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileWalkBack: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_Walkback.rtm";
			connectTo[] = {};
			interpolateFrom[] = {"CrocodileStandIdle",0.02,"CrocodileStandIdle2",0.02,"CrocodileStandIdle3",0.02,"CrocodileStandIdle4",0.02};
			interpolateTo[] = {"CrocodileStandIdle",0.02,"CrocodileDie",0.02};
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			variantsAI[] = {};
		};
		class CrocodileRunFront: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			file = "edaly_crocodile\anims\classic_run.rtm";
			duty = -0.5;
			speed = 2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimFront: CrocodileStandIdle
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\classic_swim.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			interpolateFrom[] = {"CrocodileWalkFront",0.02};
			interpolateTo[] = {"CrocodileSwimIdle",0.02,"CrocodileStandIdle",0.02,"CrocodileDieWater",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimFrontFast: CrocodileSwimFront
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\classic_swimfast.rtm";
			duty = -0.5;
			speed = 1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			interpolateFrom[] = {"CrocodileSwimFront",0.02,"CrocodileSwimIdle",0.02};
			interpolateTo[] = {"CrocodileSwimIdle",0.02,"CrocodileDieWater",0.02,"CrocodileSwimFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimUp: CrocodileSwimFront
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\classic_swimup.rtm";
			duty = -0.5;
			speed = -2;
			interpolateFrom[] = {"CrocodileSwimIdle",0.02,"CrocodileSwimFront",0.02};
			interpolateTo[] = {"CrocodileSwimIdle",0.02,"CrocodileDieWater",0.02,"CrocodileSwimFront",0.02};
			soundEdge[] = {0.25,0.5,0.75,1};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimDown: CrocodileSwimFront
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\classic_swimdown.rtm";
			duty = -0.5;
			speed = -2;
			interpolateFrom[] = {"CrocodileSwimIdle",0.02,"CrocodileSwimFront",0.02};
			interpolateTo[] = {"CrocodileSwimIdle",0.02,"CrocodileDieWater",0.02,"CrocodileSwimFront",0.02};
			soundEdge[] = {0.25,0.5,0.75,1};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimIdle: CrocodileSwimFront
		{
			actions = "SwimmingActions";
			file = "edaly_crocodile\anims\classic_swimidle.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {1};
			soundOverride = "";
			soundEnabled = 0;
			connectTo[] = {};
			interpolateFrom[] = {"CrocodileStandIdle",0.02,"CrocodileSwimDown",0.02,"CrocodileSwimUp",0.02,"CrocodileSwimFrontFast",0.02,"CrocodileSwimFront",0.02};
			interpolateTo[] = {"CrocodileDieWater",0.02,"CrocodileSwimDown",0.02,"CrocodileSwimUp",0.02,"CrocodileSwimFrontFast",0.02,"CrocodileSwimFront",0.02,"CrocodileStandIdle",0.02};
			variantsAI[] = {};
		};
		class CrocodileFreefall: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			file = "edaly_crocodile\anims\classic_fall.rtm";
			duty = -0.5;
			speed = -2;
			soundEdge[] = {1};
			interpolateFrom[] = {"CrocodileStandIdle",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileTurnLeft: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_TurnL.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileTurnRight: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_TurnR.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimTurnLeft: CrocodileSwimIdle
		{
			actions = "SwimmingActions";
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_swimTurnL.rtm";
			speed = -1.5;
			interpolateFrom[] = {"CrocodileStandIdle",0.02,"CrocodileSwimDown",0.02,"CrocodileSwimUp",0.02,"CrocodileSwimFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileSwimTurnRight: CrocodileSwimIdle
		{
			actions = "SwimmingActions";
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_swimTurnR.rtm";
			speed = -1.5;
			interpolateFrom[] = {"CrocodileStandIdle",0.02,"CrocodileSwimDown",0.02,"CrocodileSwimUp",0.02,"CrocodileSwimFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class Crocodile_Bite: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			duty = -0.7;
			file = "edaly_crocodile\anims\classic_bite.rtm";
			speed = -1;
			looped = 0;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class CrocodileTorpedo: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			file = "\edaly_crocodile\anims\classic_torpedo.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
		};
		class CrocodileKeyart: CrocodileStandIdle
		{
			actions = "Edaly_Crocodile_Actions";
			file = "\edaly_crocodile\anims\classic_keyart.rtm";
			speed = -2;
			looped = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
		};
		class CrocodileDie: DefaultDie
		{
			actions = "NoActions";
			file = "\edaly_crocodile\anims\classic_die.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class CrocodileDieWater: DefaultDie
		{
			actions = "NoActions";
			file = "\edaly_crocodile\anims\classic_diewater.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
	};
	class Actions: Actions
	{
		class NoActions: NoActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
			stance = "ManStanceUndefined";
		};
		class Edaly_Crocodile_Actions: NoActions
		{
	        WalkF = "CrocodileWalkFront";
	        WalkLF = "";
	        WalkRF = "";
	        WalkLB = "";
	        WalkRB = "";
	        WalkB = "CrocodileWalkBack";

	        StartFreefall = "CrocodileFreefall";
	        Para_Pilot = "CrocodileFreefall";

	        PlayerWalkF = "CrocodileWalkFront";
	        PlayerWalkLF = "";
	        PlayerWalkRF = "";
	        PlayerWalkLB = "";
	        PlayerWalkRB = "";
	        PlayerWalkB = "CrocodileWalkBack";

	        SlowF = "CrocodileRunFront";

	        PlayerSlowF = "CrocodileWalkFront";
	        PlayerSlowB = "CrocodileWalkBack";
	        PlayerSlowLF = "";
	        PlayerSlowRF = "";
	        PlayerSlowLB = "";
	        PlayerSlowRB = "";

	        FastF = "CrocodileRunFront";

			Stop = "CrocodileStandIdle";
			StopRelaxed = "CrocodileStandIdle";

			TurnL = "CrocodileTurnLeft";
			TurnR = "CrocodileTurnRight";

			TurnLRelaxed = "CrocodileTurnLeft";
			TurnRRelaxed = "CrocodileTurnRight";

			Default = "CrocodileStandIdle";
			JumpOff = "CrocodileStandIdle";

			EvasiveForward = "CrocodileRunFront";

			SitDown = "CrocodileStandIdle";

			saluteOff = "CrocodileStandIdle";

			Stand = "CrocodileStandIdle";
			PlayerStand = "CrocodileStandIdle";

			startSwim = "CrocodileSwimIdle";
			surfaceSwim = "CrocodileSwimFront";
			stopSwim = "CrocodileSwimIdle";
        	bottomSwim = "CrocodileSwimFront";
	        swimUp = "CrocodileSwimUp";
	        swimDown = "CrocodileSwimDown";
            startDive = "CrocodileSwimIdle";
            StopDive = "CrocodileSwimIdle";
	        SurfaceDive = "CrocodileSwimFront";
	        BottomDive = "CrocodileSwimFront";


			Combat = "CrocodileStandIdle";
			CanNotMove = "CrocodileStandIdle";
			Civil = "CrocodileStandIdle";
			CivilLying = "CrocodileStandIdle";
			FireNotPossible = "CrocodileStandIdle";
			GetOver = "CrocodileStandIdle";
			Die = "CrocodileDie";

			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
		};
		class Edaly_Crocodile_fastactions: Edaly_Crocodile_Actions
		{
			FastF = "CrocodileRunFront";
			EvasiveForward = "CrocodileRunFront";
			Die = "CrocodileDie";
			TurnL = "CrocodileTurnLeft";
			TurnR = "CrocodileTurnRight";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 1;
		};

		class SwimmingActions: NoActions
		{
			default = "CrocodileSwimIdle";
			Stop = "CrocodileSwimIdle";

			startSwim = "CrocodileSwimFront";
			stopSwim = "CrocodileStandIdle";

			surfaceSwim = "CrocodileSwimFront";
        	bottomSwim = "CrocodileSwimFront";

	        swimUp = "CrocodileSwimUp";
	        swimDown = "CrocodileSwimDown";

	        Die = "CrocodileDieWater";

	        WalkF = "CrocodileSwimFront";
	        FastF = "CrocodileSwimFrontFast";

	        PlayerSlowF = "CrocodileSwimFront";
	        PlayerSlowB = "";
	        PlayerSlowLF = "";
	        PlayerSlowRF = "";
	        PlayerSlowLB = "";
	        PlayerSlowRB = "";

			TurnL = "CrocodileSwimTurnLeft";
			TurnR = "CrocodileSwimTurnRight";

			TurnLRelaxed = "CrocodileSwimTurnLeft";
			TurnRRelaxed = "CrocodileSwimTurnRight";

			upDegree = "ManPosSwimming";
			limitFast = 2;
		};

		class Edaly_Crocodile_Lying: Edaly_Crocodile_Actions
		{
			stop = "CrocodileIdleStart";
			StopRelaxed = "CrocodileIdleStart";
			default = "CrocodileIdleStart";
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"Head",0.2,"Jaw01",0.2,"Jaw02",0.2,"Nose",0.2,"L_EyeSocket",0.2,"L_Eye",0.2,"L_Eyelid_Top",0.2,"L_Eyelid_Bottom",0.2,"R_EyeSocket",0.2,"R_Eye",0.2,"R_Eyelid_Top",0.2,"R_Eyelid_Bottom",0.2};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"Head",0.2,"Jaw01",0.2,"Jaw02",0.2,"Nose",0.2,"L_EyeSocket",0.2,"L_Eye",0.2,"L_Eyelid_Top",0.2,"L_Eyelid_Bottom",0.2,"R_EyeSocket",0.2,"R_Eye",0.2,"R_Eyelid_Top",0.2,"R_Eyelid_Bottom",0.2};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
