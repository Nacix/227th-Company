class CfgVehicles
{
    class B_Soldier_F;
	class B_Officer_F;
	class B_Soldier_LAT_F;
	class B_Soldier_SL_F;
	class B_Soldier_M_F;
	class B_Medic_F;
	class B_Soldier_exp_F;
	class B_soldier_AR_F;

    class 3AS_Clone_P2_Pilot;
    class JLTS_Clone_P2_RTO;

    class JLTS_Clone_P2_DC15A: B_Soldier_F {};
    class JLTS_Clone_P2_lieutenant: B_Officer_F {};
    class JLTS_Clone_P2_AT: B_Soldier_LAT_F {};
    class JLTS_Clone_P2_corporal: B_Soldier_SL_F {};
    class JLTS_Clone_P2_marksman: B_Soldier_M_F {};
    class JLTS_Clone_P2_medic: B_Medic_F {};
    class JLTS_Clone_P2_eod: B_Soldier_exp_F {};
    class JLTS_Clone_P2_AR: B_soldier_AR_F {};

    #define MAGS_MISC LIST_2(3AS_ThermalDetonator), LIST_2(442_SmokeShellwhite), 
    #define EQUIPMENT_BASE QUOTE(ItemMap), QUOTE(ItemGPS), QUOTE(ItemCompass), QUOTE(ItemWatch)
    #define WEAPONS_BASE QUOTE(Throw), QUOTE(Put)

    #define SET_INFO_KRAYT(className,subCategory) SET_INFO(className,1,BLU_Krayt_F,subCategory)

    // ############################################################ Phase 2 Troopers ############################################################

    SUBCLASS(B_Krayt_P2_DC15A_F,JLTS_Clone_P2_DC15A)
    {
        displayName = "Clone Trooper (DC-15A)";
        SET_INFO_KRAYT(B_Krayt_P2_DC15A_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_DC15S_F,TAG_CLASS(B_Krayt_P2_DC15A_F))
    {
        displayName = "Clone Trooper (DC-15S)";
        SET_INFO_KRAYT(B_Krayt_P2_DC15S_F,CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_AT_F,JLTS_Clone_P2_AT)
    {
        displayName = "Clone Trooper (Anti-Tank)";
        SET_INFO_KRAYT(B_Krayt_P2_AT_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_AT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_SCT), CLASS(V_AB_AT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15HX_F), CLASS(launch_RPS6X_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_5(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(TAG_CLASS(1Rnd_ECX130_Mag_F)), LIST_3(TAG_CLASS(RPS6X_THEAT_SACLOS_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_DC15A_UGL_F,TAG_CLASS(B_Krayt_P2_DC15A_F))
    {
        displayName = "Clone Trooper (DC-15A UGL)";
        SET_INFO_KRAYT(B_Krayt_P2_DC15A_UGL_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_SCT), CLASS(V_Suspenders_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_UGL_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_CP_F,JLTS_Clone_P2_corporal)
    {
        displayName = "Clone Trooper (Corporal)";
        SET_INFO_KRAYT(B_Krayt_P2_CP_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CP);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CP), CLASS(V_Kama_CP), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_UGL_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_CS_F,TAG_CLASS(B_Krayt_P2_CP_F))
    {
        displayName = "Clone Trooper (Sergeant)";
        SET_INFO_KRAYT(B_Krayt_P2_CS_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CS);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CS), CLASS(V_Kama_CS), CLASS(NV_Macro_Gray), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_CSM_F,TAG_CLASS(B_Krayt_P2_CS_F))
    {
        displayName = "Clone Trooper (Sergeant Major)";
        SET_INFO_KRAYT(B_Krayt_P2_CSM_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CSM);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CSM), CLASS(V_Kama_CS), CLASS(NV_Range_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_CLT_F,JLTS_Clone_P2_lieutenant)
    {
        displayName = "Clone Trooper (Lieutenant)";
        SET_INFO_KRAYT(B_Krayt_P2_CLT_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CP);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CP), CLASS(V_Kama_Officer), CLASS(NV_Range_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_CPT_F,TAG_CLASS(B_Krayt_P2_CLT_F))
    {
        displayName = "Clone Trooper (Captain)";
        SET_INFO_KRAYT(B_Krayt_P2_CPT_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CSS);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CFS), CLASS(V_Kama_Officer), CLASS(NV_Macro_Gray), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_CC_F,TAG_CLASS(B_Krayt_P2_CLT_F))
    {
        displayName = "Clone Trooper (Commander)";
        SET_INFO_KRAYT(B_Krayt_P2_CC_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CSM);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CSM), CLASS(V_Kama_Officer), CLASS(NV_Visor_Yellow), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_Engineer_F,JLTS_Clone_P2_eod)
    {
        displayName = "Clone Trooper (Engineer)";
        SET_INFO_KRAYT(B_Krayt_P2_Engineer_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_VCT);
        backpack = CLASS(B_Pack_EOD);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Engineer_CT), CLASS(V_AB_EOD), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(sgun_DP23_pointer_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_Engineer_NCO_F,TAG_CLASS(B_Krayt_P2_Engineer_F))
    {
        displayName = "Clone Trooper (Engineer NCO)";
        SET_INFO_KRAYT(B_Krayt_P2_Engineer_NCO_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CS);
        backpack = CLASS(B_Pack_EOD);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Engineer_NCO), CLASS(V_AB_EOD), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(sgun_DP23_pointer_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_Medic_F,JLTS_Clone_P2_medic)
    {
        displayName = "Clone Trooper (Medic)";
        SET_INFO_KRAYT(B_Krayt_P2_Medic_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_Medic);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_SCT), CLASS(V_AB_Medic), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;

        class EventHandlers
        {
            init = "[_this select 0,""KRT_Insignia_Medic""] call BIS_fnc_setUnitInsignia";
        };
    };

    SUBCLASS(B_Krayt_P2_RTO_F,JLTS_Clone_P2_RTO)
    {
        displayName = "Clone Trooper (RTO)";
        SET_INFO_KRAYT(B_Krayt_P2_RTO_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_RTO);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_SCT), CLASS(V_AB_RTO), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_Support_F,JLTS_Clone_P2_AR)
    {
        displayName = "Clone Trooper (Support)";
        SET_INFO_KRAYT(B_Krayt_P2_Support_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_SCT), CLASS(V_AB_Support), CLASS(NV_Macro_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(LMG_DC15LE_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(100Rnd_EC40_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_Marksman_F,JLTS_Clone_P2_marksman)
    {
        displayName = "Clone Trooper (Marksman)";
        SET_INFO_KRAYT(B_Krayt_P2_Marksman_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_VCT), CLASS(V_AB_Marksman), CLASS(NV_Macro_Brown_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DW32S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(21Rnd_EC60_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_Sniper_F,TAG_CLASS(B_Krayt_P2_Marksman_F))
    {
        displayName = "Clone Trooper (Sniper)";
        SET_INFO_KRAYT(B_Krayt_P2_Sniper_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_VCT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_VCT), CLASS(V_AB_Marksman), CLASS(NV_Macro_Yellow_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DC15X_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(12Rnd_EC90_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    // ############################################################ ARC Troopers ############################################################

    SUBCLASS(B_Krayt_ARC_WestarM5_F,TAG_CLASS(B_Krayt_P2_DC15A_UGL_F))
    {
        displayName = "ARC Trooper (Westar M5)";
        SET_INFO_KRAYT(B_Krayt_ARC_WestarM5_F,ARC);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_ARC_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CLC), CLASS(V_ARC_CT), CLASS(NV_Range_Gray), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_WestarM5_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_10(TAG_CLASS(60Rnd_EC40_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_ARC_AT_F,TAG_CLASS(B_Krayt_P2_AT_F))
    {
        displayName = "ARC Trooper (Anti-Tank)";
        SET_INFO_KRAYT(B_Krayt_ARC_AT_F,ARC);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_AT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CLC), CLASS(V_ARC_CT), CLASS(NV_Range_Gray), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15HX_F), CLASS(launch_RPS6X_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_5(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(TAG_CLASS(1Rnd_ECX130_Mag_F)), LIST_3(TAG_CLASS(RPS6X_THEAT_SACLOS_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_ARC_Engineer_F,TAG_CLASS(B_Krayt_P2_Engineer_F))
    {
        displayName = "ARC Trooper (Engineer)";
        SET_INFO_KRAYT(B_Krayt_ARC_Engineer_F,ARC);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_EOD_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CLC), CLASS(V_ARC_CT), CLASS(NV_Range_Gray), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(sgun_DP23_pointer_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_10(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }
    
        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_ARC_Medic_F,TAG_CLASS(B_Krayt_P2_Medic_F))
    {
        displayName = "ARC Trooper (Medic)";
        SET_INFO_KRAYT(B_Krayt_ARC_Medic_F,ARC);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_ARC_Medic);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CLC), CLASS(V_ARC_Medic), CLASS(NV_Range_Gray), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_westarM5_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC40_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_ARC_Sharpshooter_F,TAG_CLASS(B_Krayt_P2_Marksman_F))
    {
        displayName = "ARC Trooper (Sharpshooter)";
        SET_INFO_KRAYT(B_Krayt_ARC_Sharpshooter_F,ARC);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_ARC_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CLC), CLASS(V_ARC_CT), CLASS(NV_Macro_Yellow_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_Firepuncher_suppressor_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_10(TAG_CLASS(15Rnd_EC80_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_ARC_Sniper_F,TAG_CLASS(B_Krayt_P2_Sniper_F))
    {
        displayName = "ARC Trooper (Sniper)";
        SET_INFO_KRAYT(B_Krayt_ARC_Sniper_F,ARC);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_ARC_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CLC), CLASS(V_ARC_CT), CLASS(NV_Macro_Yellow_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DC15X_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_10(TAG_CLASS(12Rnd_EC90_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_ARC_NCO_F,TAG_CLASS(B_Krayt_P2_CP_F))
    {
        displayName = "ARC Trooper (NCO)";
        SET_INFO_KRAYT(B_Krayt_ARC_NCO_F,ARC);

        // Uniform
        uniformClass = CLASS(U_B_CS);
        backpack = CLASS(B_Pack_ARC_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_CSM), CLASS(V_ARC_Veteran), CLASS(NV_Range_Gray), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_WestarM5_UGL_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_10(TAG_CLASS(60Rnd_EC40_Mag_F)), LIST_5(3Rnd_HE_Grenade_shell), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P2_Pilot_F,3AS_Clone_P2_Pilot)
    {
        displayName = "Clone Pilot";
        SET_INFO_KRAYT(B_Krayt_P2_Pilot_F,CT);

        // Uniform
        uniformClass = CLASS(U_B_CT);
        backpack = CLASS(B_Pack_RTO_mini);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Pilot_CX), CLASS(V_Suspenders_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_5(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    // ############################################################ Phase 1 Troopers ############################################################

    SUBCLASS(B_Krayt_P1_DC15A_F,TAG_CLASS(B_Krayt_P2_DC15A_F))
    {
        displayName = "Clone Trooper (DC-15A)";
        SET_INFO_KRAYT(B_Krayt_P1_DC15A_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_DC15S_F,TAG_CLASS(B_Krayt_P2_DC15S_F))
    {
        displayName = "Clone Trooper (DC-15S)";
        SET_INFO_KRAYT(B_Krayt_P1_DC15S_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS {  CLASS(SMG_DC15S_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_AT_F,TAG_CLASS(B_Krayt_P2_AT_F))
    {
        displayName = "Clone Trooper (Anti-Tank)";
        SET_INFO_KRAYT(B_Krayt_P1_AT_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_AT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_SCT), CLASS(V_AB_AT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15HX_F), CLASS(hgun_DC17SA_pointer_F), CLASS(launch_RPS6X_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_8(TAG_CLASS(1Rnd_ECX130_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(RPS6X_THEAT_SACLOS_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_DC15A_UGL_F,TAG_CLASS(B_Krayt_P2_DC15A_UGL_F))
    {
        displayName = "Clone Trooper (DC-15A UGL)";
        SET_INFO_KRAYT(B_Krayt_P1_DC15A_UGL_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_SCT), CLASS(V_Suspenders_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_UGL_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_CP_F,TAG_CLASS(B_Krayt_P2_CP_F))
    {
        displayName = "Clone Trooper (Corporal)";
        SET_INFO_KRAYT(B_Krayt_P1_CP_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CSP), CLASS(V_Kama_CP), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_UGL_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_CS_F,TAG_CLASS(B_Krayt_P2_CS_F))
    {
        displayName = "Clone Trooper (Sergeant)";
        SET_INFO_KRAYT(B_Krayt_P1_CS_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CP);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CSS), CLASS(V_Kama_CS), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_CSM_F,TAG_CLASS(B_Krayt_P2_CSM_F))
    {
        displayName = "Clone Trooper (Sergeant Major)";
        SET_INFO_KRAYT(B_Krayt_P1_CSM_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CSS);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CSM), CLASS(V_Kama_CS), QUOTE(lsd_gar_p1SingleHeadlamp_nvg), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_CLT_F,TAG_CLASS(B_Krayt_P2_CLT_F))
    {
        displayName = "Clone Trooper (Lieutenant)";
        SET_INFO_KRAYT(B_Krayt_P1_CLT_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CP);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CSP), CLASS(V_Kama_Officer), QUOTE(lsd_gar_p1SingleHeadlamp_nvg), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_CPT_F,TAG_CLASS(B_Krayt_P2_CPT_F))
    {
        displayName = "Clone Trooper (Captain)";
        SET_INFO_KRAYT(B_Krayt_P1_CPT_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CSS);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CSS), CLASS(V_Kama_Officer), QUOTE(lsd_gar_p1SingleHeadlamp_nvg), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_CC_F,TAG_CLASS(B_Krayt_P2_CC_F))
    {
        displayName = "Clone Trooper (Commander)";
        SET_INFO_KRAYT(B_Krayt_P1_CC_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CSM);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CSM), CLASS(V_Kama_Officer), QUOTE(lsd_gar_p1SingleHeadlamp_nvg), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_Engineer_F,TAG_CLASS(B_Krayt_P2_Engineer_F))
    {
        displayName = "Clone Trooper (Engineer)";
        SET_INFO_KRAYT(B_Krayt_P1_Engineer_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_VCT);
        backpack = CLASS(B_Pack_EOD);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_SCT), CLASS(V_AB_EOD), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(sgun_DP23_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_Engineer_NCO_F,TAG_CLASS(B_Krayt_P2_Engineer_NCO_F))
    {
        displayName = "Clone Trooper (Engineer NCO)";
        SET_INFO_KRAYT(B_Krayt_P1_Engineer_NCO_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CLC);
        backpack = CLASS(B_Pack_EOD);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_CSP), CLASS(V_Kama_CP), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(sgun_DP23_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_Medic_F,TAG_CLASS(B_Krayt_P2_Medic_F))
    {
        displayName = "Clone Trooper (Medic)";
        SET_INFO_KRAYT(B_Krayt_P1_Medic_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_Medic);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_SCT), CLASS(V_AB_Medic), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(SMG_DC15S_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(60Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_RTO_F,TAG_CLASS(B_Krayt_P2_RTO_F))
    {
        displayName = "Clone Trooper (RTO)";
        SET_INFO_KRAYT(B_Krayt_P1_RTO_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_RTO);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_SCT), CLASS(V_AB_RTO), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(arifle_DC15A_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_Support_F,TAG_CLASS(B_Krayt_P2_Support_F))
    {
        displayName = "Clone Trooper (Support)";
        SET_INFO_KRAYT(B_Krayt_P1_Support_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_SCT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_SCT), CLASS(V_AB_Support), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(LMG_DC15LE_scope_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(100Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_Sniper_F,TAG_CLASS(B_Krayt_P2_Sniper_F))
    {
        displayName = "Clone Trooper (Sniper)";
        SET_INFO_KRAYT(B_Krayt_P1_Sniper_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_VCT);
        backpack = CLASS(B_Pack_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_VCT), CLASS(V_AB_Marksman), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS  { CLASS(srifle_DC15X_scope_F), CLASS(hgun_DC17SA_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(12Rnd_EC90_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_P1_Pilot_F,TAG_CLASS(B_Krayt_P2_Pilot_F))
    {
        displayName = "Clone Pilot";
        SET_INFO_KRAYT(B_Krayt_P1_Pilot_F,CT_P1);

        // Uniform
        uniformClass = CLASS(U_B_CT);
        backpack = CLASS(B_Pack_RTO_mini);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P1_Pilot_CXG1), CLASS(V_Suspenders_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_5(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    // ############################################################ Jet Troopers ############################################################

    SUBCLASS(B_Krayt_Jet_DC15LE_F,TAG_CLASS(B_Krayt_P2_Support_F))
    {
        displayName = "Jet Trooper (DC-15LE)";
        SET_INFO_KRAYT(B_Krayt_Jet_DC15LE_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_CT);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_Jet), CLASS(NV_Macro_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(LMG_DC15LE_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_8(TAG_CLASS(100Rnd_EC40_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_DC15A_UGL_F,TAG_CLASS(B_Krayt_P2_DC15A_UGL_F))
    {
        displayName = "Jet Trooper (DC-15A UGL)";
        SET_INFO_KRAYT(B_Krayt_Jet_DC15A_UGL_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_CT);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_Jet), CLASS(NV_Macro_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_UGL_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_8(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(3Rnd_HE_Grenade_shell), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_Medic_F,TAG_CLASS(B_Krayt_P2_Medic_F))
    {
        displayName = "Jet Trooper (Medic)";
        SET_INFO_KRAYT(B_Krayt_Jet_Medic_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_CT);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_Medic), CLASS(NV_Macro_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(LMG_DC15LE_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_8(TAG_CLASS(100Rnd_EC40_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_AT_F,TAG_CLASS(B_Krayt_P2_AT_F))
    {
        displayName = "Jet Trooper (Anti-Tank)";
        SET_INFO_KRAYT(B_Krayt_Jet_AT_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_CT);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_AT), CLASS(NV_Macro_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15HX_F), CLASS(launch_RPS6X_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_5(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(TAG_CLASS(1Rnd_ECX130_Mag_F)), LIST_3(TAG_CLASS(RPS6X_THEAT_SACLOS_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_Engineer_F,TAG_CLASS(B_Krayt_P2_Engineer_F))
    {
        displayName = "Jet Trooper (Anti-Tank)";
        SET_INFO_KRAYT(B_Krayt_Jet_AT_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_CT);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_EOD), CLASS(NV_Macro_Brown), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(sgun_DP23_pointer_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_Marksman_F,TAG_CLASS(B_Krayt_P2_Marksman_F))
    {
        displayName = "Jet Trooper (Marksman)";
        SET_INFO_KRAYT(B_Krayt_Jet_Marksman_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_CT);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_Marksman), CLASS(NV_Macro_Brown_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DW32S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(21Rnd_EC60_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_Sniper_F,TAG_CLASS(B_Krayt_P2_Sniper_F))
    {
        displayName = "Jet Trooper (Sniper)";
        SET_INFO_KRAYT(B_Krayt_Jet_Sniper_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_CT);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_Marksman), CLASS(NV_Macro_Yellow_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DC15X_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(12Rnd_EC90_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_NCO_F,TAG_CLASS(B_Krayt_P2_CS_F))
    {
        displayName = "Jet Trooper (NCO)";
        SET_INFO_KRAYT(B_Krayt_Jet_NCO_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_NCO);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_AB_Jet), CLASS(NV_Macro_Yellow), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_8(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Jet_Officer_F,TAG_CLASS(B_Krayt_P2_CPT_F))
    {
        displayName = "Jet Trooper (Officer)";
        SET_INFO_KRAYT(B_Krayt_Jet_Officer_F,Jet);

        // Uniform
        uniformClass = CLASS(U_B_Jet_NCO);
        backpack = CLASS(B_Pack_JP_MC_krayt);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_P2_Jet), CLASS(V_Kama_Officer_Geonosis), CLASS(NV_Macro_Yellow), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }
    
        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_8(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };
    
    SUBCLASS(B_Krayt_Jet_NCO_1_F,TAG_CLASS(B_Krayt_Jet_NCO_F)) { scope = 1; scopeCurator = 0; };
    SUBCLASS(B_Krayt_Jet_NCO_2_F,TAG_CLASS(B_Krayt_Jet_NCO_1_F)) {};
    SUBCLASS(B_Krayt_Jet_NCO_3_F,TAG_CLASS(B_Krayt_Jet_NCO_1_F)) {};
    SUBCLASS(B_Krayt_Jet_NCO_4_F,TAG_CLASS(B_Krayt_Jet_NCO_1_F)) {};

    // ############################################################ Geonosis Troopers ############################################################

    SUBCLASS(B_Krayt_Geonosis_DC15A_F,TAG_CLASS(B_Krayt_P2_DC15A_F))
    {
        displayName = "Desert Trooper (DC-15A)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_DC15A_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_DC15S_F,TAG_CLASS(B_Krayt_P2_DC15S_F))
    {
        displayName = "Desert Trooper (DC-15S)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_DC15S_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_AT_F,TAG_CLASS(B_Krayt_P2_AT_F))
    {
        displayName = "Desert Trooper (Anti-Tank)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_AT_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_AT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

       // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15HX_F), CLASS(launch_RPS6X_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_5(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(TAG_CLASS(1Rnd_ECX130_Mag_F)), LIST_3(TAG_CLASS(RPS6X_THEAT_SACLOS_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_DC15A_UGL_F,TAG_CLASS(B_Krayt_P2_DC15A_UGL_F))
    {
        displayName = "Desert Trooper (DC-15A UGL)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_DC15A_UGL_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_UGL_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_CP_F,TAG_CLASS(B_Krayt_P2_CP_F))
    {
        displayName = "Desert Trooper (Corporal)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_CP_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_UGL_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_CS_F,TAG_CLASS(B_Krayt_P2_CS_F))
    {
        displayName = "Desert Trooper (Sergeant)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_CS_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_Engineer_F,TAG_CLASS(B_Krayt_P2_Engineer_F))
    {
        displayName = "Desert Trooper (Engineer)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_Engineer_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_EOD_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(sgun_DP23_pointer_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_Medic_F,TAG_CLASS(B_Krayt_P2_Medic_F))
    {
        displayName = "Desert Trooper (Medic)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_Medic_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_Medic_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_RTO_F,TAG_CLASS(B_Krayt_P2_RTO_F))
    {
        displayName = "Desert Trooper (RTO)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_RTO_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_RTO_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_Support_F,TAG_CLASS(B_Krayt_P2_Support_F))
    {
        displayName = "Desert Trooper (Support)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_Support_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(LMG_DC15LE_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(100Rnd_EC40_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_Marksman_F,TAG_CLASS(B_Krayt_P2_Marksman_F))
    {
        displayName = "Desert Trooper (Marksman)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_Marksman_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Macro_Brown_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DW32S_pointer_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(21Rnd_EC60_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Geonosis_Sniper_F,TAG_CLASS(B_Krayt_P2_Sniper_F))
    {
        displayName = "Desert Trooper (Sniper)";
        SET_INFO_KRAYT(B_Krayt_Geonosis_Sniper_F,Geonosis);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_Geonosis_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_Geonosis), CLASS(V_Invisible_CT), CLASS(NV_Macro_Yellow_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DC15X_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(12Rnd_EC90_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    // ############################################################ Insulated Troopers ############################################################

    SUBCLASS(B_Krayt_Insulated_DC15A_F,TAG_CLASS(B_Krayt_P2_DC15A_F))
    {
        displayName = "Insulated Trooper (DC-15A)";
        SET_INFO_KRAYT(B_Krayt_Insulated_DC15A_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_DC15S_F,TAG_CLASS(B_Krayt_P2_DC15S_F))
    {
        displayName = "Insulated Trooper (DC-15S)";
        SET_INFO_KRAYT(B_Krayt_Insulated_DC15S_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_AT_F,TAG_CLASS(B_Krayt_P2_AT_F))
    {
        displayName = "Insulated Trooper (Anti-Tank)";
        SET_INFO_KRAYT(B_Krayt_Insulated_AT_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15HX_F), CLASS(launch_RPS6X_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_5(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(TAG_CLASS(1Rnd_ECX130_Mag_F)), LIST_3(TAG_CLASS(RPS6X_THEAT_SACLOS_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_DC15A_UGL_F,TAG_CLASS(B_Krayt_P2_DC15A_UGL_F))
    {
        displayName = "Insulated Trooper (DC-15A UGL)";
        SET_INFO_KRAYT(B_Krayt_Insulated_DC15A_UGL_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15A_UGL_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(45Rnd_EC40_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_CP_F,TAG_CLASS(B_Krayt_P2_CP_F))
    {
        displayName = "Insulated Trooper (Corporal)";
        SET_INFO_KRAYT(B_Krayt_Insulated_CP_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_UGL_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_5(1Rnd_HE_Grenade_shell), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_CS_F,TAG_CLASS(B_Krayt_P2_CS_F))
    {
        displayName = "Insulated Trooper (Sergeant)";
        SET_INFO_KRAYT(B_Krayt_Insulated_CS_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(arifle_DC15C_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(36Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_Engineer_F,TAG_CLASS(B_Krayt_P2_Engineer_F))
    {
        displayName = "Insulated Trooper (Engineer)";
        SET_INFO_KRAYT(B_Krayt_Insulated_Engineer_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(sgun_DP23_pointer_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(15Rnd_EC20_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC50_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_Medic_F,TAG_CLASS(B_Krayt_P2_Medic_F))
    {
        displayName = "Insulated Trooper (Medic)";
        SET_INFO_KRAYT(B_Krayt_Insulated_Medic_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_RTO_F,TAG_CLASS(B_Krayt_P2_RTO_F))
    {
        displayName = "Insulated Trooper (RTO)";
        SET_INFO_KRAYT(B_Krayt_Insulated_RTO_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(SMG_DC15S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_10(TAG_CLASS(60Rnd_EC30_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_Support_F,TAG_CLASS(B_Krayt_P2_Support_F))
    {
        displayName = "Insulated Trooper (Support)";
        SET_INFO_KRAYT(B_Krayt_Insulated_Support_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Internal), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(LMG_DC15LE_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES { LIST_8(TAG_CLASS(100Rnd_EC40_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_Marksman_F,TAG_CLASS(B_Krayt_P2_Marksman_F))
    {
        displayName = "Insulated Trooper (Marksman)";
        SET_INFO_KRAYT(B_Krayt_Insulated_Marksman_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_Snow_CT);
        
        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Macro_Brown_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DW32S_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(21Rnd_EC60_Mag_F)), LIST_2(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };

    SUBCLASS(B_Krayt_Insulated_Sniper_F,TAG_CLASS(B_Krayt_P2_Sniper_F))
    {
        displayName = "Insulated Trooper (Sniper)";
        SET_INFO_KRAYT(B_Krayt_Insulated_Sniper_F,Insulated);

        // Uniform
        uniformClass = CLASS(U_B_Insulated_CT);
        backpack = CLASS(B_Pack_CT_straps);

        // Equipment
        #undef EQUIPMENT
        #define EQUIPMENT { CLASS(H_Insulated_CT), CLASS(V_Invisible_CT), CLASS(NV_Macro_Brown_spec), QUOTE(JLTS_clone_comlink), EQUIPMENT_BASE }

        // Weapons
        #undef WEAPONS
        #define WEAPONS { CLASS(srifle_DC15X_scope_F), CLASS(hgun_DC17SA_pointer_F), QUOTE(71st_CloneBinocular), WEAPONS_BASE }

        // Magazines
        #undef MAGAZINES
        #define MAGAZINES  { LIST_8(TAG_CLASS(12Rnd_EC90_Mag_F)), LIST_5(TAG_CLASS(24Rnd_EC30_Mag_F)), MAGS_MISC }

        SET_LOADOUT;
    };
};