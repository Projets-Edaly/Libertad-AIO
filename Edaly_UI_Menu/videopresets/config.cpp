
class CfgPatches
{
	class Edaly_VideoPresets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_UI_f"};
	};
};

class CfgVideoOptions
{
	class ObjectsVisibility
	{
		minValue = 1500;
		maxValue = 2500;
	};
	class ShadowsVisibility
	{
		minValue = 5;
		maxValue = 300;
	};

	class TextureQuality
	{
		class Optimal
		{
			mipBias = 1;
			text = "Edaly Optimal";
			vramNeeded = 384;
		};
		class CanItRunLibertad
		{
			mipBias = 1;
			text = "CIRL";
			vramNeeded = 4864;
		};
	};
	class TerrainQuality
	{
		class Optimal
		{
			terrainGrid = 12.5;
			text = "Edaly Optimal";
		};
		class CanItRunLibertad
		{
			terrainGrid = 2.5;
			text = "CIRL";
		};
	};
	class CloudQuality
	{
		class Optimal
		{
			text = "Edaly Optimal";
			value = 64;
		};
		class CanItRunLibertad
		{
			text = "CIRL";
			value = 128;
		};
	};
	class DynamicLights
	{
		class Optimal
		{
			text = "Edaly Optimal";
			value = 8;
		};
		class CanItRunLibertad
		{
			text = "CIRL";
			value = 32;
		};
	};
	class Particles
	{
		class Optimal
		{
			highQualityShader = 1;
			numFullSizeParticles = 40;
			particlesHardLimit = 12000;
			particlesSoftLimit = 10000;
			smokeGenMaxDist = 400;
			smokeGenMinDist = 100;
			smokeIntervalCoef = 4;
			smokeSizeCoef = 2;
			smokeZoomCoef = 1.42857;
			qualityLevel = 1;
			text = "Edaly Optimal";
		};
		class CanItRunLibertad
		{
			highQualityShader = 1;
			numFullSizeParticles = 60;
			particlesHardLimit = 20000;
			particlesSoftLimit = 15000;
			smokeGenMaxDist = 1000;
			smokeGenMinDist = 200;
			smokeIntervalCoef = 4;
			smokeSizeCoef = 2;
			smokeZoomCoef = 1.42857;
			qualityLevel = 2;
			text = "CIRL";
		};
	};	
	class ShadowQuality
	{
		class Optimal
		{
			cascadeLayers = 4;
			shaderQuality = 2;
			shadowType = 2;
			text = "Edaly Optimal";
			textureSize = 1024;
		};
		class CanItRunLibertad
		{
			cascadeLayers = 4;
			shaderQuality = 3;
			shadowType = 2;
			text = "CIRL";
			textureSize = 2048;
		};
	};
	class ObjectsQuality
	{
		class Optimal
		{
			text = "Edaly Optimal";
			value = 800000;
		};
	};

	class DefaultSettings;
	class OverallSettings
	{
		class Optimal: DefaultSettings
		{
			anisotropicFiltering = "Normal";
			atocQuality = "All";
			cloudQuality = "Optimal";
			dynamicLights = "Optimal";
			hdr = "Normal";
			multiSampleCount = 8;
			objectsQuality = "Optimal";
			objectVisibility = 2000;
			particles = "Optimal";
			pip = "Normal";
			postProcessQuality = 5;
			ppaa = "SMAAHigh";
			ppaaAlternative = "SMAAHigh";
			ppBloom = 0;
			ppCausticsQuality = "Enabled";
			ppDOF = 0;
			ppRadialBlur = 0;
			ppRotBlur = 0;
			ppSharpen = 1;
			ppSSAOQuality = "HBAOPlusMedium";
			ppSSAOQualityAlternative = "HDAOHigh";
			shadowQuality = "Optimal";
			shadowVisibility = 100;
			terrainQuality = "Optimal";
			text = "Edaly Optimal";
			textureQuality = "Optimal";
			visibility = 2500;
			waterSSReflectionsQuality = "Low";
		};
		class CanItRunLibertad: DefaultSettings
		{
			anisotropicFiltering = "VeryHigh";
			atocQuality = "All";
			cloudQuality = "CanItRunLibertad";
			dynamicLights = "CanItRunLibertad";
			hdr = "Normal";
			multiSampleCount = 8;
			objectsQuality = "VeryHigh";
			objectVisibility = 2300;
			particles = "CanItRunLibertad";
			pip = "Normal";
			postProcessQuality = 5;
			ppaa = "SMAAHigh";
			ppaaAlternative = "SMAAHigh";
			ppBloom = 1;
			ppCausticsQuality = "Enabled";
			ppDOF = 1;
			ppRadialBlur = 1;
			ppRotBlur = 1;
			ppSharpen = 0.5;
			ppSSAOQuality = "HBAOPlusStrong";
			ppSSAOQualityAlternative = "HDAOHigh";
			shadowQuality = "CanItRunLibertad";
			shadowVisibility = 100;
			terrainQuality = "CanItRunLibertad";
			text = "Ultra";
			textureQuality = "CanItRunLibertad";
			visibility = 3800;
			waterSSReflectionsQuality = "High";
		};
	};
}; 
