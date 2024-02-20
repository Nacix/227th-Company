/*
 * Author: Anorexican
 *
 * Contains macro definitions that can be used to quickly define various types of equipment.
 * Naming convention is ADD_<TYPE (optional)>_<CATEGORY> (e.g. ADD_CT_HELMET || ADD_NVG).
 * Variants of existing macros will generally follow the convention ADD_<TYPE (optional)>_<CATEGORY>_<SUBCATEGORY> (e.g. ADD_NVG_MACRO || ADD_P1_CT_HELMET).
 *
*/

// ############################################################ CfgWeapons ############################################################

#define ADD_CT_HELMET(className,rawName) \
    class TAG##_H_P2_##className##: TAG##_H_P2_CT \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\p2\h_p2_##className##_co.paa) }; \
    }

#define ADD_ARC_HELMET(className,rawName) \
    class TAG##_H_ARC_##className##: TAG##_H_ARC_CT \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\helmets\arc\h_arc_##className##_co.paa),QPATHTOF(data\helmets\arc\h_arc_##className##_co.paa) }; \
    }

#define ADD_ARF_HELMET(className,rawName) \
    class TAG##_H_ARF_##className##: TAG##_H_ARF_CT \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\helmets\arf\##className##\h_arf_##className##_co.paa), \
            QPATHTOF(data\helmets\arf\##className##\h_arf_plates_##className##_co.paa), \
            QPATHTOF(data\helmets\arf\##className##\h_arf_visor_##className##_co.paa) \
        }; \
    }

#define ADD_ENGINEER_HELMET(className,rawName) \
    class TAG##_H_Engineer_##className##: TAG##_H_Engineer_CT \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\helmets\engineer\h_engineer_##className##_co.paa), \
            QPATHTOF(data\helmets\engineer\h_engineer_##className##_co.paa) \
        }; \
    }

#define ADD_P1_CT_HELMET(className,rawName) \
    class TAG##_H_P1_##className##: TAG##_H_P1_CT \
    { \
        displayName = TAG_NAME(rawName (P1)); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\helmets\p1\h_p1_##className##_co.paa), \
            QPATHTOF(data\helmets\p1\h_p1_##className##_co.paa), \
        }; \
    }
    
#define ADD_P1_PILOT_HELMET(className,rawName) \
    class TAG##_H_P1_Pilot_##className##: TAG##_H_P1_Pilot_CX \
    { \
        displayName = TAG_NAME(rawName (P1)); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_##className##_co.paa), \
            QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_tubes_co.paa), \
            QPATHTOF(data\helmets\p1\pilot\h_p1_pilot_##className##_co.paa) \
        }; \
    }

#define ADD_P2_PILOT_HELMET(className,rawName) \
    class TAG##_H_P2_Pilot_##className##: TAG##_H_P2_Pilot_CX \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_##className##_co.paa), \
            QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_##className##_co.paa), \
            "", \
            QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_tubes_co.paa), \
            QPATHTOF(data\helmets\p2\pilot\h_p2_pilot_##className##_co.paa), \
            "" \
        }; \
    }

#define ADD_INSULATED_HELMET(className,rawName) \
    class TAG##_H_Insulated_##className##: TAG##_H_Insulated_CT \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\helmets\insulated\h_insulated_##className##_co.paa), \
            QPATHTOF(data\helmets\insulated\h_insulated_##className##_co.paa), \
            QPATHTOF(data\helmets\insulated\h_insulated_##className##_co.paa) \
        }; \
    }

#define ADD_SPECOP_HELMET(className,rawName) \
    class TAG##_H_SpecOp_##className##: TAG##_H_SpecOp_CT \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\helmets\specops\h_specop_##className##_co.paa), \
            QUOTE(\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\SR_Antenna_co.paa), \
            QPATHTOF(data\helmets\specops\h_specop_##className##_co.paa) \
        }; \
    }

#define ADD_NVG(className,rawName,parentClass) \
    class TAG##_NV_##className##: parentClass \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_##className##_co.paa) }; \
        modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d); \
    }

#define ADD_NVG_MACRO(className) \
    class TAG##_NV_Macro_##className##: JLTS_CloneNVG \
    { \
        displayName = TAG_NAME(Macros (##className##)); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_macro_##className##_co.paa) }; \
        modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d); \
    }; \
    class TAG##_NV_Macro_##className##_spec: JLTS_CloneNVG_spec \
    { \
        displayName = TAG_NAME(Macros (##className##) [Specialist]); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_macro_##className##_co.paa) }; \
    }

#define ADD_NVG_RANGE(className) \
    class TAG##_NV_Range_##className##: JLTS_CloneNVGRange \
    { \
        displayName = TAG_NAME(Rangefinder (##className##)); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_range_##className##_co.paa) }; \
        modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d); \
    }

#define ADD_NVG_VISOR(className) \
    class TAG##_NV_Visor_##className##: JLTS_CloneNVGCC \
    { \
        displayName = TAG_NAME(Visor (##className##)); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\nvg\nv_visor_##className##_co.paa) }; \
        modelOptics = QUOTE(\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d); \
    }

#define ADD_UNIFORM(className,rawName,cargoSize,parentClass) \
    class TAG##_U_B_##className##: TAG##_U_B_##parentClass##_Base \
    { \
        displayName = TAG_NAME(rawName); \
        scope = 2; \
        class ItemInfo: ItemInfo \
        { \
            uniformClass = CLASS(B_##className##_Base); \
            containerClass = QUOTE(Supply##cargoSize); \
        }; \
    }

#define ADD_UNIFORM_TROOPER(className,rawName,cargoSize) ADD_UNIFORM(className,rawName,cargoSize,Trooper)
#define ADD_UNIFORM_INSULATED(className,rawName,cargoSize) ADD_UNIFORM(Insulated_##className,rawName,cargoSize,Insulated)

// ############################################################ CfgVehicles ############################################################

#define ADD_BACKPACK(className,rawName,parentClass,loadValue) \
    class TAG##_B_Pack_##className##: parentClass \
    { \
        displayName = TAG_NAME(rawName); \
        maximumLoad = QUOTE(loadValue); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\b_##className##_co.paa) }; \
    }
#define ADD_JETPACK(className,rawName,parentClass,loadValue) \
    class TAG##_B_Pack_JP_##className##: parentClass \
    { \
        displayName = TAG_NAME(rawName); \
        maximumLoad = QUOTE(loadValue); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\jetpacks\b_jp_##className##_co.paa) }; \
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog"; \
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;"; \
        tf_encryptionCode="tf_west_radio_code"; \
        tf_hasLRradio=1; \
        tf_range=16000; \
        tf_subtype="digital_lr"; \
    }
#define ADD_BACKPACK_STRAPS(className,rawName,parentClass,loadValue) \
    ADD_BACKPACK(className,rawName,parentClass,loadValue); \
    class TAG##_B_Pack_##className##_straps: parentClass##_s \
    { \
        displayName = TAG_NAME(rawName## (Straps)); \
        maximumLoad = QUOTE(loadValue); \
        hiddenSelectionsTextures[] = { QPATHTOF(data\backpacks\b_##className##_co.paa) }; \
    }

#define ADD_V_UNIFORM_TROOPER_BASE(className,rawName,groupDir,localDir) \
    SUBCLASS(B_##className##_Base,TAG##_B_Trooper_Base) \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\uniforms\##groupDir##\##localDir##\u_up_##className##_co.paa), \
            QPATHTOF(data\uniforms\##groupDir##\##localDir##\u_low_##className##_co.paa) \
        }; \
    }
#define ADD_V_UNIFORM_INSULATED(className,rawName) \
    SUBCLASS(B_Insulated_##className##_Base,TAG##_B_Insulated_Base) \
    { \
        displayName = TAG_NAME(rawName); \
        hiddenSelectionsTextures[]= \
        { \
            QPATHTOF(data\uniforms\insulated\u_insulated_##className##_co.paa), \
            QPATHTOF(data\uniforms\insulated\u_insulated_##className##_co.paa) \
        }; \
    }

#define ADD_V_UNIFORM_TROOPER(className,rawName) ADD_V_UNIFORM_TROOPER_BASE(className,rawName,trooper,className)
#define ADD_V_UNIFORM_TROOPER_JET(className,rawName) ADD_V_UNIFORM_TROOPER_BASE(Jet_##className,rawName,jet,className)
#define ADD_V_UNIFORM_TROOPER_CUSTOM(className,rawName) ADD_V_UNIFORM_TROOPER_BASE(className,rawName,custom,className)