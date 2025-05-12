#include "\Edaly_Client\version.hpp"

class CfgPatches
{
	class Edaly_Sounds_Config
	{
		author=$STR_EDALY_AUTHOR;
		url=$STR_EDALY_WEBSITE;
		requiredAddons[]={"Edaly_Client","Edaly_Sounds_Assets_1","Edaly_Sounds_Assets_2","Edaly_Sounds_Assets_3"};
		requiredVersion=ARMA3_VERSION;
		units[]={};
		weapons[]={};
	};
};

class CfgSounds {
    class baseSound {
        titles[]={};
        duration=-1;
    };
	#include "CfgSounds.hpp"
    #include "CfgSoundsVoices.hpp"
};
class CfgMusic {
	#include "CfgMusic.hpp"
};
class CfgSoundSets {
	#include "CfgSoundSets.hpp"
};
class CfgSoundShaders {
	#include "CfgSoundShaders.hpp"
};

class CfgSFX {
    #include "CfgSFX.hpp"
};
class CfgAnimationSourceSounds {
    #include "CfgAnimationSourceSounds.hpp"
};
