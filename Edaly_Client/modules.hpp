class CfgFactionClasses
{
    class NO_CATEGORY;
    class animals: NO_CATEGORY
    {
        displayName = "Animals";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class AttributesBase
        {
            class Default;
            class Edit;                 // Default edit box (i.e., text input field)
            class Combo;                // Default combo box (i.e., drop-down menu)
            class Checkbox;             // Default checkbox (returned value is Boolean)
            class CheckboxNumber;       // Default checkbox (returned value is Number)
            class ModuleDescription;    // Module description
            class Units;                // Selection of units on which the module is applied
        };
        // Description base classes, for more information see below
        class ModuleDescription
        {
            class AnyBrain;
        };
    };
    class WildlifeModule: Module_F
    {
        // Standard object definitions
        scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = "Wildlife"; // Name displayed in the menu
        // icon = "\myTag_addonName\data\iconNuke_ca.paa"; // Map icon. Delete this entry to use the default icon
        category = "animals";

        // Name of function triggered once conditions are met
        function = "EdalyBase_fnc_wildLifeModuleInit";
        // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        functionPriority = 1;
        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isGlobal = 0;
        // 1 for module waiting until all synced triggers are activated
        isTriggerActivated = 0;
        // 1 if modules is to be disabled once it is activated (i.e., repeated trigger activation won't work)
        isDisposable = 0;
        // 1 to run init function in Eden Editor as well
        is3DEN = 0;

        // Menu displayed when the module is placed or double-clicked on by Zeus
        // curatorInfoType = "RscDisplayAttributeModuleNuke";

        // Module attributes, uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific
        class Attributes: AttributesBase
        {
            // Arguments shared by specific module type (have to be mentioned in order to be present)
            class Units: Units
            {
                property = "wildLifeModulesUnits";
            };
            class ModuleDescription: ModuleDescription {}; // Module description should be shown last
        };

        // Module description. Must inherit from base class, otherwise pre-defined entities won't be available
        class ModuleDescription: ModuleDescription
        {
            description = "Activate animals behavior"; // Short description, will be formatted as structured text
            sync[] = {"EmptyDetector"}; // Array of synced entities (can contain base classes)

            /*class Anything {
                description = "Enable spawn and home features by linking areas to the module.";
                displayName = "Species area(s)"; // Custom name
                //icon = "iconMan"; // Custom icon (can be file path or CfgVehicleIcons entry)
                duplicate = 1; // Custom side (will determine icon color)
                synced[] = {"Anything"};
            }*/
        };
    };
};
