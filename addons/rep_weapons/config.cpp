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
            "3AS_Main",
			"3AS_Weapons",
			"3AS_Weapons_RPS6",
			"3AS_ATRT",
			"442_weapons",
			"442_weapons_773",
			"442_weapons_explosives",
			"JLTS_core",
			"JLTS_weapons_Core",
			"JLTS_weapons_DC15X",
			"JLTS_weapons_DC17SA",
			"JLTS_weapons_DP23",
			"JLTS_weapons_DW32S",
			"JLTS_weapons_RPS6",
			"LF_Weapon_Unit_DC15X"
        };
        weapons[]=
        {
            CLASS(acc_pointer_Borange),
            CLASS(acc_pointer_Borange_IR),
            CLASS(acc_pointer_Short_Borange),
            CLASS(acc_pointer_Short_Borange_IR),
            CLASS(acc_pointer_Long_Borange),
            CLASS(acc_pointer_Long_Borange_IR),
			CLASS(acc_flashlight),
			CLASS(Optic_Holo),
            CLASS(hgun_DC17SA_F)
        };
        units[] = {};
        magazines[]=
		{
			CLASS(21Rnd_EC30_mag)
		};
        ammo[] = {};
    };
};

#include <CfgMagazines.hpp>
#include <CfgWeapons.hpp>