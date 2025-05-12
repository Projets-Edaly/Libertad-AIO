// LOGS
#define LOG_MSG(MSG) [__FILE__, MSG, _this] call EdalyBase_fnc_log;

// NAMESPACES GETTERS
#define GVAR_UI(variable,defaut) (uiNamespace getVariable [variable,defaut])
#define GVAR_MIS(variable,defaut) (missionNamespace getVariable [variable,defaut])
#define GVAR_PRO(variable,defaut) (profileNamespace getVariable [variable,defaut])
#define GVAR_OBJ(object,variable,defaut) (object getVariable [variable,defaut])

// NAMESPACES SETTERS
#define SVAR_UI(variable,value) (uiNamespace setVariable [variable,value])
#define SVAR_MIS(variable,value) (missionNamespace setVariable [variable,value])
#define SVAR_PRO(variable,value) (profileNamespace setVariable [variable,value])
#define SVAR_OBJ(object,variable,value,global) (object setVariable [variable,value,global])

#define ALPHABET ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
#define FIGURES ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]
