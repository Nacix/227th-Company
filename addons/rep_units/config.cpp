#include <script_component.hpp>

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = ECSTRING(Common,AuxTeam);
		authors[] = { "227th Krayt Company" };
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
            "JLTS_core",
            "JLTS_characters_CloneArmor",
			"3AS_Main",
            "3as_JLTS_Uniforms",
			"ls_vehicles_ground"
        };
        weapons[] = {};
        units[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

#include <CfgVehicles.hpp>