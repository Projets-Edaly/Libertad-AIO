class CfgMovesBasic{
	class Default;
	class States;
	class Actions{
		class NoActions;
	};
	class BlendAnims;
};
class CfgMoves_Boar_Edaly: CfgMovesBasic
{
	enableDirectControl = 0;
	skeletonName = "Boar_Skeleton";
	gestures = "CfgGestures_Boar_Edaly";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
	{
		actions = "NoActions";
		adjstance = "m";
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		aimPrecision = 1;
		boundingSphere = 1;
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
		ignoreMinPlayTime[] = {"BoarDie"};
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
		collisionShape = "Edaly_Boar\CollShape.p3d";
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
		class BoarStandIdle: StandBase
		{
			enableDirectControl = 1;
			actions = "Edaly_Boar_Actions";
			duty = -1;
			file = "Edaly_Boar\anims\idle.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			variantsAI[] = {"BoarStandIdle",0.5};
			variantsPlayer[] = {};
			speed = -9;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			connectTo[] = {"BoarWalkFront",0.02,"BoarRunFront",0.02};
			interpolateTo[] = {"BoarWalkFront",0.02,"BoarRunFront",0.02,"BoarDie",0.02};
			interpolateFrom[] = {"BoarWalkFront",0.02,"BoarRunFront",0.02,"BoarDie",0.02};
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			interpolationSpeed = 1;
			preload = 1;
		};
		class BoarWalkFront: BoarStandIdle
		{
			actions = "Edaly_Boar_Actions";
			duty = -0.7;
			file = "Edaly_Boar\anims\Walk.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class BoarRunFront: BoarStandIdle
		{
			actions = "Edaly_Boar_Actions";
			file = "Edaly_Boar\anims\run.rtm";
			duty = -0.5;
			speed = 2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class Boar_attack: BoarStandIdle
		{
			actions = "Edaly_Boar_Actions";
			duty = -0.7;
			file = "Edaly_Boar\anims\attack.rtm";
			speed = -1;
			looped = 0;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class Boar_eat: BoarStandIdle
		{
			actions = "Edaly_Boar_Actions";
			duty = -0.7;
			file = "Edaly_Boar\anims\eat.rtm";
			speed = -9;
			looped = 0;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class BoarDie: DefaultDie
		{
			actions = "NoActions";
			file = "\Edaly_Boar\anims\die.rtm";
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
		};
		class Edaly_Boar_Actions: NoActions
		{
	        WalkF = "BoarWalkFront";
	        WalkLF = "";
	        WalkRF = "";
	        WalkLB = "";
	        WalkRB = "";
	        WalkB = "";

	        PlayerWalkF = "BoarWalkFront";
	        PlayerWalkLF = "";
	        PlayerWalkRF = "";
	        PlayerWalkLB = "";
	        PlayerWalkRB = "";
	        PlayerWalkB = "";   

	        SlowF = "BoarRunFront";

	        PlayerSlowF = "BoarRunFront";
	        PlayerSlowLF = "";
	        PlayerSlowRF = "";
	        PlayerSlowLB = "";
	        PlayerSlowRB = "";

	        FastF = "BoarRunFront";

			Stop = "BoarStandIdle";
			StopRelaxed = "BoarStandIdle";

			TurnL = "";
			TurnR = "";

			TurnLRelaxed = "";
			TurnRRelaxed = "";

			Default = "BoarStandIdle";
			JumpOff = "BoarStandIdle";

			EvasiveForward = "BoarRunFront";

			SitDown = "BoarStandIdle";

			saluteOff = "BoarStandIdle";

			Stand = "BoarStandIdle";
			PlayerStand = "BoarStandIdle";

			Combat = "BoarStandIdle";
			CanNotMove = "BoarStandIdle";
			Civil = "BoarStandIdle";
			CivilLying = "BoarStandIdle";
			FireNotPossible = "BoarStandIdle";
			GetOver = "BoarStandIdle";
			Die = "BoarDie";

			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
		};
		class Edaly_Boar_fastactions: Edaly_Boar_Actions
		{
			FastF = "BoarRunFront";
			EvasiveForward = "BoarRunFront";
			Die = "BoarDie";
			TurnL = "";
			TurnR = "";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 1;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"Head",1,"Neck",1,"Neck1",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"Head",1,"Neck",1,"Neck1",1};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
