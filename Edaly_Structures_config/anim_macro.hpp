/* MODEL CFG MACROS */

#define LOCKED_ANIM(ID) \
            class door_##ID##_locked_step_1_rot \
            { \
                type            = "rotation"; \
                source          = door_##ID##_locked_source; \
                selection       = door_##ID; \
                axis            = door_##ID##_axis; \
                memory          = 1; \
                minValue        = 0; \
                maxValue        = 0.25; \
                angle0          = "(rad 0)"; \
                angle1          = "-(rad 1)"; \
            }; \
            class door_##ID##_locked_step_2_rot : door_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.25; \
                maxValue        = 0.5; \
                angle0          = "(rad 0)"; \
                angle1          = "(rad 1)"; \
            }; \
            class door_##ID##_locked_step_3_rot : door_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.5; \
                maxValue        = 0.75; \
                angle0          = "(rad 0)"; \
                angle1          = "-(rad 1)"; \
            }; \
            class door_##ID##_locked_step_4_rot : door_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.75; \
                maxValue        = 1; \
                angle0          = "(rad 0)"; \
                angle1          = "(rad 1)"; \
            };
#define LOCKED_ANIM_REVERSE(ID) \
            class door_##ID##_locked_step_1_rot \
            { \
                type            = "rotation"; \
                source          = door_##ID##_locked_source; \
                selection       = door_##ID; \
                axis            = door_##ID##_axis; \
                memory          = 1; \
                minValue        = 0; \
                maxValue        = 0.25; \
                angle0          = "(rad 0)"; \
                angle1          = "(rad 1)"; \
            }; \
            class door_##ID##_locked_step_2_rot : door_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.25; \
                maxValue        = 0.5; \
                angle0          = "(rad 0)"; \
                angle1          = "-(rad 1)"; \
            }; \
            class door_##ID##_locked_step_3_rot : door_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.5; \
                maxValue        = 0.75; \
                angle0          = "(rad 0)"; \
                angle1          = "(rad 1)"; \
            }; \
            class door_##ID##_locked_step_4_rot : door_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.75; \
                maxValue        = 1; \
                angle0          = "(rad 0)"; \
                angle1          = "-(rad 1)"; \
            };
#define LOCKED_HANDLE_ANIM(ID) \
            class door_handle_##ID##_locked_step_1_rot \
            { \
                type            = "rotation"; \
                source          = door_##ID##_locked_source; \
                selection       = door_handle_##ID; \
                axis            = door_handle_##ID##_axis; \
                memory          = 1; \
                minValue        = 0; \
                maxValue        = 0.25; \
                angle0          = 0; \
                angle1          = -(rad 45); \
            }; \
            class door_handle_##ID##_locked_step_2_rot : door_handle_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.25; \
                maxValue        = 0.5; \
                angle0          = 0; \
                angle1          = (rad 45); \
            }; \
            class door_handle_##ID##_locked_step_3_rot : door_handle_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.5; \
                maxValue        = 0.75; \
                angle0          = 0; \
                angle1          = -(rad 45); \
            }; \
            class door_handle_##ID##_locked_step_4_rot : door_handle_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.75; \
                maxValue        = 1; \
                angle0          = 0; \
                angle1          = (rad 45); \
            };
#define LOCKED_HANDLE_ANIM_REVERSE(ID) \
            class door_handle_##ID##_locked_step_1_rot \
            { \
                type            = "rotation"; \
                source          = door_##ID##_locked_source; \
                selection       = door_handle_##ID; \
                axis            = door_handle_##ID##_axis; \
                memory          = 1; \
                minValue        = 0; \
                maxValue        = 0.25; \
                angle0          = 0; \
                angle1          = (rad 45); \
            }; \
            class door_handle_##ID##_locked_step_2_rot : door_handle_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.25; \
                maxValue        = 0.5; \
                angle0          = 0; \
                angle1          = -(rad 45); \
            }; \
            class door_handle_##ID##_locked_step_3_rot : door_handle_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.5; \
                maxValue        = 0.75; \
                angle0          = 0; \
                angle1          = (rad 45); \
            }; \
            class door_handle_##ID##_locked_step_4_rot : door_handle_##ID##_locked_step_1_rot \
            { \
                minValue        = 0.75; \
                maxValue        = 1; \
                angle0          = 0; \
                angle1          = -(rad 45); \
            };

#define HANDLE_ANIM(ID) \
            class door_handle_##ID##_step_1_rot \
            { \
                type            = "rotation"; \
                source          = door_##ID##_source; \
                selection       = door_handle_##ID; \
                axis            = door_handle_##ID##_axis; \
                memory          = 1; \
                minValue        = 0; \
                maxValue        = 1; \
                angle0          = 0; \
                angle1          = -(rad 75); \
            }; \
            class door_handle_##ID##_step_2_rot : door_handle_##ID##_step_1_rot \
            { \
                minValue        = 0.5; \
                maxValue        = 1; \
                angle0          = 0; \
                angle1          = (rad 75); \
            };

#define HANDLE_ANIM_REVERSE(ID) \
            class door_handle_##ID##_step_1_rot \
            { \
                type            = "rotation"; \
                source          = door_##ID##_source; \
                selection       = door_handle_##ID; \
                axis            = door_handle_##ID##_axis; \
                memory          = 1; \
                minValue        = 0; \
                maxValue        = 1; \
                angle0          = 0; \
                angle1          = (rad 75); \
            }; \
            class door_handle_##ID##_step_2_rot : door_handle_##ID##_step_1_rot \
            { \
                minValue        = 0.5; \
                maxValue        = 1; \
                angle0          = 0; \
                angle1          = -(rad 75); \
            };

#define GLASS_HIDE(ID) \
            class glass_##ID##_hide \
            { \
                type=hide; \
                source=glass_##ID##_source; \
                selection=glass_##ID##_hide; \
                minValue=0; \
                maxValue=1; \
                hideValue=0.99998999; \
            };

#define WINDOW_ANIM(ID) \
            class window_##ID##_rot \
            { \
                type            = rotation; \
                source          = window_##ID##_source; \
                selection       = window_##ID##; \
                axis            = window_##ID##_axis; \
                memory          = 1; \
                minValue        = 0; \
                maxValue        = 1; \
                angle0          = (rad 0); \
                angle1          = (rad 85); \
            };

/* CONFIG CPP MACROS */

#define DOOR_SOURCE_LOCKED(ID) \
            class door_##ID##_locked_source \
            { \
                source = user; \
                initPhase = 0; \
                animPeriod = 1; \
            };

#define GLASS_SOURCE_HITPOINT(ID) \
            class glass_##ID##_source \
            { \
                source = Hit; \
                hitpoint = glass_##ID##_hitpoint; \
                raw = 1; \
            };

#define WINDOW_SOURCE(ID)\
            class window_##ID##_trigger \
            { \
                source = user; \
                initPhase = 0; \
                animPeriod = 1; \
                sound = "GenericDoorsSound"; \
                soundPosition = window_##ID##_trigger; \
            };

#define OpenDoorCondition(ID_SOURCE) ((this animationSourcePhase ID_SOURCE) < 0.5) && (cameraOn isKindOf 'CAManBase');
#define CloseDoorCondition(ID_SOURCE, BIS_DISABLED_DOOR_ID) ((this animationSourcePhase ID_SOURCE) >= 0.5) && ((this getVariable [BIS_DISABLED_DOOR_ID, 0]) != 1) && (cameraOn isKindOf 'CAManBase');
#define Statement(ID, TYPE, CLOSE) ([this, TYPE, ID, CLOSE] call EdalyBase_fnc_Door);
#define STRINGIFY(STRING) #STRING
#define CONCAT(FIRST, SECOND) FIRST##SECOND
#define CONCAT2(FIRST, SECOND, THIRD) FIRST##SECOND##THIRD

#define DOOR_USERACTION(ID, DISABLED_DOOR_ID)\
            class OpenDoor_##ID \
            { \
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
                displayName = "$STR_DN_OUT_O_DOOR"; \
                position = door_##ID##_trigger; \
                priority = 11; \
                actionNamedSel = door_##ID; \
                radius = 1.75; \
                aiMaxRange = 5.25; \
                onlyForPlayer = 0; \
                condition = OpenDoorCondition(STRINGIFY(CONCAT2(door_,ID,_source))) \
                statement = Statement(ID, 'door', 1) \
            }; \
            class CloseDoor_##ID: OpenDoor_##ID \
            { \
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
                displayName = "$STR_DN_OUT_C_DOOR"; \
                priority = 11; \
                condition = CloseDoorCondition(STRINGIFY(CONCAT2(door_,ID,_source)),STRINGIFY(CONCAT(bis_disabled_door_,DISABLED_DOOR_ID))) \
                statement = Statement(ID,'door',0) \
            };

#define DOOR_USERACTION_SELECTION(ID, DISABLED_DOOR_ID, ACTIONNAMEDSELECTION) \
            class OpenDoor_##ID \
            { \
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
                displayName = "$STR_DN_OUT_O_DOOR"; \
                position = door_##ID##_trigger; \
                priority = 11; \
                actionNamedSel = ACTIONNAMEDSELECTION; \
                radius = 1.75; \
                aiMaxRange = 5.25; \
                onlyForPlayer = 0; \
                condition = OpenDoorCondition(STRINGIFY(CONCAT2(door_,ID,_source))) \
                statement = Statement(ID, 'door', 1) \
            }; \
            class CloseDoor_##ID: OpenDoor_##ID \
            { \
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
                displayName = "$STR_DN_OUT_C_DOOR"; \
                priority = 11; \
                condition = CloseDoorCondition(STRINGIFY(CONCAT2(door_,ID,_source)),STRINGIFY(CONCAT(bis_disabled_door_,DISABLED_DOOR_ID))) \
                statement = Statement(ID,'door',0) \
            };

#define WINDOW_USERACTION(ID, DISABLED_DOOR_ID) \
            class OpenWindow_##ID \
            { \
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
                displayName = "$STR_EDALY_ALL_OPEN_WINDOW"; \
                position = window_##ID##_trigger; \
                priority = 11; \
                actionNamedSel = window_##ID; \
                radius = 1.75; \
                aiMaxRange = 5.25; \
                onlyForPlayer = 0; \
                condition = OpenDoorCondition(STRINGIFY(CONCAT2(window_,ID,_source))) \
                statement = Statement(ID,'window',1) \
            }; \
            class CloseWindow_##ID: OpenWindow_##ID \
            { \
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
                displayName = "$STR_EDALY_ALL_CLOSE_WINDOW"; \
                priority = 11; \
                condition = CloseDoorCondition(STRINGIFY(CONCAT2(window_,ID,_source)),STRINGIFY(CONCAT(bis_disabled_door_,DISABLED_DOOR_ID))) \
                statement = Statement(ID,'window',0) \
            };
