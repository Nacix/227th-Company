class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit); call FUNC(init));
    };
};

#define SET_TRAITS(className,grade,rank,skill) \
	class TAG_CLASS(className) { \
		initServer = QUOTE([ARR_4(_this select 0,'##grade##','##rank##','##skill##')] call FUNC(initUnit)); \
	}

class Extended_InitPost_EventHandlers {
	SET_TRAITS(B_Krayt_P2_DC15A_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_P2_DC15S_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_P2_AT_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P2_DC15A_UGL_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P2_CP_F,SPC,CP,leader);
	SET_TRAITS(B_Krayt_P2_CS_F,NCO,CS,leader);
	SET_TRAITS(B_Krayt_P2_CSM_F,NCO,CSM,leader);
	SET_TRAITS(B_Krayt_P2_CLT_F,JCO,CLT,leader);
	SET_TRAITS(B_Krayt_P2_CPT_F,SCO,CPT,leader);
	SET_TRAITS(B_Krayt_P2_CC_F,CC,CC,leader);
	SET_TRAITS(B_Krayt_P2_Engineer_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P2_Engineer_NCO_F,NCO,CS,leader);
	SET_TRAITS(B_Krayt_P2_Medic_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P2_RTO_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P2_Support_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P2_Marksman_F,SPC,VCT,scout);
	SET_TRAITS(B_Krayt_P2_Pilot_F,SPC,CX,basic);
	SET_TRAITS(B_Krayt_P1_DC15A_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_P1_DC15S_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_P1_AT_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P1_DC15A_UGL_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P1_CP_F,SPC,CP,leader);
	SET_TRAITS(B_Krayt_P1_CS_F,NCO,CS,leader);
	SET_TRAITS(B_Krayt_P1_CSM_F,NCO,CSM,leader);
	SET_TRAITS(B_Krayt_P1_CLT_F,JCO,CLT,leader);
	SET_TRAITS(B_Krayt_P1_CPT_F,SCO,CPT,leader);
	SET_TRAITS(B_Krayt_P1_CC_F,CC,CC,leader);
	SET_TRAITS(B_Krayt_P1_Engineer_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P1_Engineer_NCO_F,NCO,CS,leader);
	SET_TRAITS(B_Krayt_P1_Medic_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P1_RTO_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P1_Support_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_P1_Marksman_F,SPC,VCT,scout);
	SET_TRAITS(B_Krayt_P1_Pilot_F,SPC,CX,basic);
	SET_TRAITS(B_Krayt_ARC_DC15A_UGL_F,SPC,CLC,elite);
	SET_TRAITS(B_Krayt_ARC_Medic_F,SPC,CLC,elite);
	SET_TRAITS(B_Krayt_ARC_NCO_F,NCO,CSS,elite);
	SET_TRAITS(B_Krayt_Jet_DC15LE_F,SPC,CSP,leader);
	SET_TRAITS(B_Krayt_Jet_DC15A_UGL_F,SPC,CSP,scout);
	SET_TRAITS(B_Krayt_Jet_Medic_F,SPC,CSP,leader);
	SET_TRAITS(B_Krayt_Jet_AT_F,SPC,CSP,leader);
	SET_TRAITS(B_Krayt_Jet_NCO_F,NCO,CSS,scout);
	SET_TRAITS(B_Krayt_Geonosis_DC15A_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_Geonosis_DC15S_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_Geonosis_AT_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Geonosis_DC15A_UGL_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Geonosis_CP_F,SPC,CP,leader);
	SET_TRAITS(B_Krayt_Geonosis_CS_F,NCO,CS,leader);
	SET_TRAITS(B_Krayt_Geonosis_Engineer_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Geonosis_Medic_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Geonosis_RTO_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Geonosis_Support_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Geonosis_Marksman_F,SPC,VCT,scout);
	SET_TRAITS(B_Krayt_Insulated_DC15A_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_Insulated_DC15S_F,CT,CT,basic);
	SET_TRAITS(B_Krayt_Insulated_AT_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Insulated_DC15A_UGL_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Insulated_CP_F,SPC,CP,leader);
	SET_TRAITS(B_Krayt_Insulated_CS_F,NCO,CS,leader);
	SET_TRAITS(B_Krayt_Insulated_Engineer_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Insulated_Medic_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Insulated_RTO_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Insulated_Support_F,SPC,SCT,basic);
	SET_TRAITS(B_Krayt_Insulated_Marksman_F,SPC,VCT,scout);
};