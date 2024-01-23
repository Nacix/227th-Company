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
        units[]=
        {
            CLASS(B_Krayt_P2_DC15A_F),
            CLASS(B_Krayt_P2_DC15S_F),
            CLASS(B_Krayt_P2_AT_F),
            CLASS(B_Krayt_P2_DC15A_UGL_F),
            CLASS(B_Krayt_P2_CP_F),
            CLASS(B_Krayt_P2_CS_F),
            CLASS(B_Krayt_P2_CSM_F),
            CLASS(B_Krayt_P2_CLT_F),
            CLASS(B_Krayt_P2_CPT_F),
            CLASS(B_Krayt_P2_CC_F),
            CLASS(B_Krayt_P2_Engineer_F),
            CLASS(B_Krayt_P2_Engineer_NCO_F),
            CLASS(B_Krayt_P2_Medic_F),
            CLASS(B_Krayt_P2_RTO_F),
            CLASS(B_Krayt_P2_Support_F),
            CLASS(B_Krayt_P2_Marksman_F),
            CLASS(B_Krayt_ARC_DC15A_UGL_F),
            CLASS(B_Krayt_ARC_Medic_F),
            CLASS(B_Krayt_ARC_NCO_F),
            CLASS(B_Krayt_P2_Pilot_F),
            CLASS(B_Krayt_P1_Pilot_F),
            CLASS(B_Krayt_Jet_DC15LE_F),
            CLASS(B_Krayt_Jet_DC15A_UGL_F),
            CLASS(B_Krayt_Jet_Medic_F),
            CLASS(B_Krayt_Jet_NCO_F),
            CLASS(B_Krayt_Jet_NCO_1_F),
            CLASS(B_Krayt_Jet_NCO_2_F),
            CLASS(B_Krayt_Jet_NCO_3_F),
            CLASS(B_Krayt_Jet_NCO_4_F),
            CLASS(B_Krayt_Geonosis_DC15A_F),
            CLASS(B_Krayt_Geonosis_DC15S_F),
            CLASS(B_Krayt_Geonosis_AT_F),
            CLASS(B_Krayt_Geonosis_DC15A_UGL_F),
            CLASS(B_Krayt_Geonosis_CP_F),
            CLASS(B_Krayt_Geonosis_CS_F),
            CLASS(B_Krayt_Geonosis_Engineer_F),
            CLASS(B_Krayt_Geonosis_Medic_F),
            CLASS(B_Krayt_Geonosis_RTO_F),
            CLASS(B_Krayt_Geonosis_Marksman_F),
            CLASS(B_Krayt_Insulated_DC15A_F),
            CLASS(B_Krayt_Insulated_DC15S_F),
            CLASS(B_Krayt_Insulated_AT_F),
            CLASS(B_Krayt_Insulated_DC15A_UGL_F),
            CLASS(B_Krayt_Insulated_CP_F),
            CLASS(B_Krayt_Insulated_CS_F),
            CLASS(B_Krayt_Insulated_Engineer_F),
            CLASS(B_Krayt_Insulated_Medic_F),
            CLASS(B_Krayt_Insulated_RTO_F),
            CLASS(B_Krayt_Insulated_Marksman_F)
        };
        magazines[] = {};
        ammo[] = {};
    };
};

#include <CfgEventHandlers.hpp>
#include <CfgVehicles.hpp>