class CfgGroups
{
    class West
    {
        name = "$STR_A3_CfgGroups_West0";
        side = 1;
        
        NEW_CLASS(BLU_Krayt_F)
        {
            name = TAG_NAME(Republic Forces);
            
            class Infantry
            {
                name = "Clone Trooper Groups";

                NEW_CLASS(B_P2_InfSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_P2_CS_F,B_Krayt_P2_CP_F,B_Krayt_P2_DC15A_UGL_F,B_Krayt_P2_RTO_F,B_Krayt_P2_DC15S_F,B_Krayt_P2_Medic_F,B_Krayt_P2_Medic_F,B_Krayt_P2_Support_F,B_Krayt_P2_AT_F,1);
                };
                NEW_CLASS(B_P2_WepSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_P2_CS_F,B_Krayt_P2_CP_F,B_Krayt_P2_DC15A_UGL_F,B_Krayt_P2_Support_F,B_Krayt_P2_Support_F,B_Krayt_P2_AT_F,B_Krayt_P2_AT_F,B_Krayt_P2_Marksman_F,B_Krayt_P2_Engineer_F,1);
                };
                NEW_CLASS(B_P2_DemTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Demolitions Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P2_CP_F,B_Krayt_P2_AT_F,B_Krayt_P2_AT_F,B_Krayt_P2_AT_F,1);
                };
                NEW_CLASS(B_P2_MedTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
                    name = "Medical Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P2_CP_F,B_Krayt_P2_Medic_F,B_Krayt_P2_Medic_F,B_Krayt_P2_Medic_F,1);
                };
                NEW_CLASS(B_P2_WepTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P2_CP_F,B_Krayt_P2_DC15A_UGL_F,B_Krayt_P2_Support_F,B_Krayt_P2_AT_F,1);
                };
                NEW_CLASS(B_P2_SupTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Support Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P2_CP_F,B_Krayt_P2_RTO_F,B_Krayt_P2_Medic_F,B_Krayt_P2_Engineer_F,1);
                };
                NEW_CLASS(B_P2_EngTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
                    name = "Engineer Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P2_Engineer_NCO_F,B_Krayt_P2_Engineer_F,B_Krayt_P2_Engineer_F,B_Krayt_P2_Engineer_F,1);
                };
                NEW_CLASS(B_P2_InfTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P2_CP_F,B_Krayt_P2_DC15A_F,B_Krayt_P2_DC15S_F,B_Krayt_P2_DC15S_F,1);
                };
                NEW_CLASS(B_P2_RcnTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
                    name = "Recon Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P2_CP_F,B_Krayt_P2_RTO_F,B_Krayt_P2_Support_F,B_Krayt_P2_Marksman_F,1);
                };
            };

            class P1
            {
                name = "P1 Trooper Groups";

                NEW_CLASS(B_P1_InfSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_P1_CS_F,B_Krayt_P1_CP_F,B_Krayt_P1_DC15A_UGL_F,B_Krayt_P1_RTO_F,B_Krayt_P1_DC15A_F,B_Krayt_P1_Medic_F,B_Krayt_P1_Medic_F,B_Krayt_P1_Support_F,B_Krayt_P1_AT_F,1);
                };
                NEW_CLASS(B_P1_WepSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_P1_CS_F,B_Krayt_P1_CP_F,B_Krayt_P1_DC15A_UGL_F,B_Krayt_P1_Support_F,B_Krayt_P1_Support_F,B_Krayt_P1_AT_F,B_Krayt_P1_AT_F,B_Krayt_P1_Marksman_F,B_Krayt_P1_Engineer_F,1);
                };
                NEW_CLASS(B_P1_DemTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Demolitions Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P1_CP_F,B_Krayt_P1_AT_F,B_Krayt_P1_AT_F,B_Krayt_P1_AT_F,1);
                };
                NEW_CLASS(B_P1_MedTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
                    name = "Medical Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P1_CP_F,B_Krayt_P1_Medic_F,B_Krayt_P1_Medic_F,B_Krayt_P1_Medic_F,1);
                };
                NEW_CLASS(B_P1_WepTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P1_CP_F,B_Krayt_P1_DC15A_UGL_F,B_Krayt_P1_Support_F,B_Krayt_P1_AT_F,1);
                };
                NEW_CLASS(B_P1_SupTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Support Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P1_CP_F,B_Krayt_P1_RTO_F,B_Krayt_P1_Medic_F,B_Krayt_P1_Engineer_F,1);
                };
                NEW_CLASS(B_P1_EngTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
                    name = "Engineer Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P1_Engineer_NCO_F,B_Krayt_P1_Engineer_F,B_Krayt_P1_Engineer_F,B_Krayt_P1_Engineer_F,1);
                };
                NEW_CLASS(B_P1_InfTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P1_CP_F,B_Krayt_P1_DC15A_F,B_Krayt_P1_DC15A_F,B_Krayt_P1_DC15A_F,1);
                };
                NEW_CLASS(B_P1_RcnTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
                    name = "Recon Team";
                    side = 1;
                    SQUAD_4(B_Krayt_P1_CP_F,B_Krayt_P1_RTO_F,B_Krayt_P1_Support_F,B_Krayt_P1_Marksman_F,1);
                };
            };

            class Jet
            {
                name = "Jet Trooper Groups";
                
                NEW_CLASS(B_Jet_WepSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Jet Trooper Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_Jet_NCO_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_AT_F,B_Krayt_Jet_AT_F,1);
                };
                NEW_CLASS(B_Jet_WepTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Jet Trooper Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Jet_NCO_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_AT_F,1);
                };

                NEW_CLASS(B_Jet_WepSquad_1)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Dropper Squad A (250m)";
                    side = 1;
                    SQUAD_9(B_Krayt_Jet_NCO_1_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_AT_F,B_Krayt_Jet_AT_F,1);
                };
                NEW_CLASS(B_Jet_WepTeam_1)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Dropper Team A (250m)";
                    side = 1;
                    SQUAD_4(B_Krayt_Jet_NCO_1_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_AT_F,1);
                };

                NEW_CLASS(B_Jet_WepSquad_2)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Dropper Squad B (500m)";
                    side = 1;
                    SQUAD_9(B_Krayt_Jet_NCO_2_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_AT_F,B_Krayt_Jet_AT_F,1);
                };
                NEW_CLASS(B_Jet_WepTeam_2)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Dropper Team B (500m)";
                    side = 1;
                    SQUAD_4(B_Krayt_Jet_NCO_2_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_AT_F,1);
                };

                NEW_CLASS(B_Jet_WepSquad_3)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Dropper Squad C (750m)";
                    side = 1;
                    SQUAD_9(B_Krayt_Jet_NCO_3_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_AT_F,B_Krayt_Jet_AT_F,1);
                };
                NEW_CLASS(B_Jet_WepTeam_3)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Dropper Team C (750m)";
                    side = 1;
                    SQUAD_4(B_Krayt_Jet_NCO_3_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_AT_F,1);
                };

                NEW_CLASS(B_Jet_WepSquad_4)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
                    name = "Dropper Squad D (1000m)";
                    side = 1;
                    SQUAD_9(B_Krayt_Jet_NCO_4_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_Medic_F,B_Krayt_Jet_AT_F,B_Krayt_Jet_AT_F,1);
                };
                NEW_CLASS(B_Jet_WepTeam_4)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
                    name = "Dropper Team D (1000m)";
                    side = 1;
                    SQUAD_4(B_Krayt_Jet_NCO_4_F,B_Krayt_Jet_DC15A_UGL_F,B_Krayt_Jet_DC15LE_F,B_Krayt_Jet_AT_F,1);
                };
            };

            class ARC
            {
                name = "ARC Trooper Groups";

                NEW_CLASS(B_ARC_InfTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
                    name = "ARC Team";
                    side = 1;
                    SQUAD_4(B_Krayt_ARC_NCO_F,B_Krayt_ARC_DC15A_UGL_F,B_Krayt_ARC_DC15A_UGL_F,B_Krayt_ARC_Medic_F,1);
                };
            };

            class Geonosis
            {
                name = "Desert Trooper Groups";
                
                NEW_CLASS(B_Geonosis_InfSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_Geonosis_CS_F,B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_DC15A_UGL_F,B_Krayt_Geonosis_RTO_F,B_Krayt_Geonosis_DC15S_F,B_Krayt_Geonosis_Medic_F,B_Krayt_Geonosis_Medic_F,B_Krayt_Geonosis_Support_F,B_Krayt_Geonosis_AT_F,1);
                };
                NEW_CLASS(B_Geonosis_WepSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_Geonosis_CS_F,B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_DC15A_UGL_F,B_Krayt_Geonosis_Support_F,B_Krayt_Geonosis_Support_F,B_Krayt_Geonosis_AT_F,B_Krayt_Geonosis_AT_F,B_Krayt_Geonosis_Marksman_F,B_Krayt_Geonosis_Engineer_F,1);
                };
                NEW_CLASS(B_Geonosis_DemTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Demolitions Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_AT_F,B_Krayt_Geonosis_AT_F,B_Krayt_Geonosis_AT_F,1);
                };
                NEW_CLASS(B_Geonosis_MedTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
                    name = "Medical Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_Medic_F,B_Krayt_Geonosis_Medic_F,B_Krayt_Geonosis_Medic_F,1);
                };
                NEW_CLASS(B_Geonosis_WepTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_DC15A_UGL_F,B_Krayt_Geonosis_Support_F,B_Krayt_Geonosis_AT_F,1);
                };
                NEW_CLASS(B_Geonosis_SupTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Support Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_RTO_F,B_Krayt_Geonosis_Medic_F,B_Krayt_Geonosis_Engineer_F,1);
                };
                NEW_CLASS(B_Geonosis_EngTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
                    name = "Engineer Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_Engineer_F,B_Krayt_Geonosis_Engineer_F,B_Krayt_Geonosis_Engineer_F,1);
                };
                NEW_CLASS(B_Geonosis_InfTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_DC15A_F,B_Krayt_Geonosis_DC15S_F,B_Krayt_Geonosis_DC15S_F,1);
                };
                NEW_CLASS(B_Geonosis_RcnTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
                    name = "Recon Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Geonosis_CP_F,B_Krayt_Geonosis_RTO_F,B_Krayt_Geonosis_Support_F,B_Krayt_Geonosis_Marksman_F,1);
                };
            };

            class Insulated
            {
                name = "Insulated Trooper Groups";

                NEW_CLASS(B_Insulated_InfSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_Insulated_CS_F,B_Krayt_Insulated_CP_F,B_Krayt_Insulated_DC15A_UGL_F,B_Krayt_Insulated_RTO_F,B_Krayt_Insulated_DC15S_F,B_Krayt_Insulated_Medic_F,B_Krayt_Insulated_Medic_F,B_Krayt_Insulated_Support_F,B_Krayt_Insulated_AT_F,1);
                };
                NEW_CLASS(B_Insulated_WepSquad)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Squad";
                    side = 1;
                    SQUAD_9(B_Krayt_Insulated_CS_F,B_Krayt_Insulated_CP_F,B_Krayt_Insulated_DC15A_UGL_F,B_Krayt_Insulated_Support_F,B_Krayt_Insulated_Support_F,B_Krayt_Insulated_AT_F,B_Krayt_Insulated_AT_F,B_Krayt_Insulated_Marksman_F,B_Krayt_Insulated_Engineer_F,1);
                };
                NEW_CLASS(B_Insulated_DemTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Demolitions Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Insulated_CP_F,B_Krayt_Insulated_AT_F,B_Krayt_Insulated_AT_F,B_Krayt_Insulated_AT_F,1);
                };
                NEW_CLASS(B_Insulated_MedTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
                    name = "Medical Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Insulated_CP_F,B_Krayt_Insulated_Medic_F,B_Krayt_Insulated_Medic_F,B_Krayt_Insulated_Medic_F,1);
                };
                NEW_CLASS(B_Insulated_WepTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Weapons Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Insulated_CP_F,B_Krayt_Insulated_DC15A_UGL_F,B_Krayt_Insulated_Support_F,B_Krayt_Insulated_AT_F,1);
                };
                NEW_CLASS(B_Insulated_SupTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Support Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Insulated_CP_F,B_Krayt_Insulated_RTO_F,B_Krayt_Insulated_Medic_F,B_Krayt_Insulated_Engineer_F,1);
                };
                NEW_CLASS(B_Insulated_EngTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
                    name = "Engineer Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Insulated_CP_F,B_Krayt_Insulated_Engineer_F,B_Krayt_Insulated_Engineer_F,B_Krayt_Insulated_Engineer_F,1);
                };
                NEW_CLASS(B_Insulated_InfTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
                    name = "Infantry Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Insulated_CP_F,B_Krayt_Insulated_DC15A_F,B_Krayt_Insulated_DC15S_F,B_Krayt_Insulated_DC15S_F,1);
                };
                NEW_CLASS(B_Insulated_RcnTeam)
                {
                    faction = CLASS(BLU_Krayt_F);
                    icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
                    name = "Recon Team";
                    side = 1;
                    SQUAD_4(B_Krayt_Insulated_CP_F,B_Krayt_Insulated_RTO_F,B_Krayt_Insulated_Support_F,B_Krayt_Insulated_Marksman_F,1);
                };
            };
        };
    };
};