#include "script_component.hpp"

class CfgPatches 
{
    class ADDON 
    {
        name = COMPONENT_NAME;
        author = ECSTRING(Common,AuxTeam);
        authors[] = {"Anorexican", "Valyrian"};
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
		url = ECSTRING(main,URL);
    };
};

class CfgMods 
{
    class PREFIX 
    {
        name = "227th Krayt Company Mod";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "Discord";
        action = CSTRING(URL);
        description = "Join the Discord!: https://discord.com/invite/Sn368hmD";
    };
};