class CfgFunctions {
	class EdalyBase {
		tag="EdalyBase";
		class functions {
			file="\Edaly_Client\functions";
			class preStart {
				preStart=1;
			};
            class postInit {
                postInit=1;
            };
            class animate {};
            class animationPhase {};
			class onKeyDown {};
			class blockUserInput {};
			class noSpeedAction {};
			class getInDriver {};
			class getInCargo {};
			class getOut {};
			class fadeSound {};
			class charactersForbiden {};
			class isNumber {};
			class isInsideBoundingBox {};
            class hasDirTo {};
			class isUserInputBlocked {};
            class getBuildingLockDefaultValue {};
			class powerRemove {};
			class numberText {};
			class strTime {};
			class strDate {};
			class strDateNum {};
			class say3d {};
			class log {};
			class addVelocity {};
			class smokingEffectLocal {};
			class createFire {};
			class fireEffectLocal {};
			class getAge {};
			class getCursorSelections {};
			class fireworksEffectLocal {};
			class createFireworks {};
			class collideWith {};
			class getCollideData {};
			class hideAllMarkers {};
			class showAllMarkers {};
			class createTemporaryMarker {};
			class clearVehicleAmmo {};
			class previewModel {};
			class formatNewline {};
			class getAssetConfig {};
			class getColorFromPercentage {};
            class canGetIntoVehicleSeat {};
            class canGetOutVehicleSeat {};


            class Door {};
		};
		class animals {
			file="\Edaly_Client\functions\animals";
			class wildLifeModuleInit {};
            class animalBehave {};
            class animalAttack {};
            class animalCarry {};
            class createAnimal {};
            class createHabitatAnimal {};
            class onAnimalKilled {};
            class onAnimalFiredNear {};
            class onAnimalHit {};
            class getAnimalTarget {};
		};
	};
};
