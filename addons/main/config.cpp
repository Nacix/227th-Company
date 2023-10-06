#include "script_component.hpp"

class CfgPatches 
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main"};
		author = ECSTRING(Common,AuxTeam);
		authors[] = {"Anorexican", "Valyrian"};
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