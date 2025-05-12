
#include "\Edaly_Client\version.hpp"
class CfgPatches
{
	class Edaly_Particles {
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client", "A3_Soft_F"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

class CfgCloudlets{

	class Default;
	class MediumDestructionFireEdaly: Default
	{
		interval = 0.015;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 0.1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.6;
		moveVelocity[] = {0,0.7,0};
		rotationVelocity = 0;
		weight = 0.045;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.65,0.05};
		color[] = {{1,1,1,-1}};
		animationSpeed[] = {0.5,1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.15;
		positionVar[] = {0.3,0.1,0.3};
		moveVelocityVar[] = {0.05,0.15,0.05};
		rotationVelocityVar = 10;
		sizeVar = 0.03;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 1.0;
		coreDistance = 0.8;
		damageTime = 0.1;
		constantDistance = 0.8;
		damageType = "Fire";
	};
};
