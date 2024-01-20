class CfgVehicles {
    #define BASE_LAAT_TEXTURES \
        QPATHTOF(data\laat\v_laat_hull_co.paa), \
        QPATHTOF(data\laat\v_laat_wings_co.paa), \
        QPATHTOF(data\laat\v_laat_weapons_co.paa), \
        QPATHTOF(data\laat\v_laat_details_co.paa), \
        QPATHTOF(data\laat\v_laat_interior_co.paa)
    
    class 3as_LAAT_Mk2;
    class 3as_LAAT_Mk2Lights;
    class 3as_LAAT_Mk1;
    class 3as_LAAT_Mk1Lights;

    #define ADD_LAAT_LIVERY(className) \
        class className##: Default { \
            displayname = QUOTE(className); \
            textures[] = { \
                QPATHTOF(data\laat\livery\v_laat_hull_##className##_co.paa), \
                QPATHTOF(data\laat\v_laat_wings_co.paa), \
                QPATHTOF(data\laat\v_laat_weapons_co.paa), \
                QPATHTOF(data\laat\v_laat_details_co.paa), \
                QPATHTOF(data\laat\v_laat_interior_co.paa) \
            }; \
        }
    #define ADD_LAAT_LIVERY_ALT(className) \
        class className##: Default { \
            displayname = QUOTE(className); \
            textures[] = { \
                QPATHTOF(data\laat\livery\v_laat_hull_##className##_co.paa), \
                QPATHTOF(data\laat\v_laat_wings_alt_co.paa), \
                QPATHTOF(data\laat\v_laat_weapons_co.paa), \
                QPATHTOF(data\laat\v_laat_details_co.paa), \
                QPATHTOF(data\laat\v_laat_interior_co.paa) \
            }; \
        }

    #define SET_LAAT_LIVERIES \
        class TextureSources { \
            textureList[]= \
            { \
                QUOTE(Default), 1, \
                QUOTE(ARC), 0, \
                QUOTE(Purrgil), 0, \
                QUOTE(Medic), 0, \
                QUOTE(Odds), 0, \
                QUOTE(Padme), 0, \
                QUOTE(Texan), 0 \
            }; \
            \
            class Default { \
                displayName = QUOTE(Default); \
                textures[]= \
                { \
                    BASE_LAAT_TEXTURES \
                }; \
            }; \
            \
            ADD_LAAT_LIVERY_ALT(ARC); \
            ADD_LAAT_LIVERY(Purrgil); \
            ADD_LAAT_LIVERY(Medic); \
            ADD_LAAT_LIVERY(Odds); \
            ADD_LAAT_LIVERY(Padme); \
            ADD_LAAT_LIVERY_ALT(Texan); \
        }
    
    SUBCLASS(B_Heli_LAAT_mk2,3as_LAAT_Mk2)
    {
        displayName = TAG_NAME(LAAT Mk.II);
        editorPreview = QPATHTOF(data\ui\editorPreviews\##TAG##_B_Heli_LAAT_mk2.jpg);
        editorSubcategory = CLASS(EdSubcat_Helicopters);
        faction = CLASS(BLU_Krayt_F);
        hiddenSelectionsTextures[]=
        {
            BASE_LAAT_TEXTURES
        };
        SET_LAAT_LIVERIES;
    };

    SUBCLASS(B_Heli_LAAT_mk2_lamps,3as_LAAT_Mk2Lights)
    {
        displayName = TAG_NAME(LAAT Mk.II (Lamps));
        editorPreview = QPATHTOF(data\ui\editorPreviews\##TAG##_B_Heli_LAAT_mk2_lamps.jpg);
        editorSubcategory = CLASS(EdSubcat_Helicopters);
        faction = CLASS(BLU_Krayt_F);
        hiddenSelectionsTextures[]=
        {
            BASE_LAAT_TEXTURES
        };
        SET_LAAT_LIVERIES;
    };

    SUBCLASS(B_Heli_LAAT_mk1_balls,3as_LAAT_Mk1)
    {
        displayName = TAG_NAME(LAAT Mk.I (Balls));
        editorPreview = QPATHTOF(data\ui\editorPreviews\##TAG##_B_Heli_LAAT_mk1.jpg);
        editorSubcategory = CLASS(EdSubcat_Helicopters);
        faction = CLASS(BLU_Krayt_F);
        hiddenSelectionsTextures[]=
        {
            BASE_LAAT_TEXTURES
        };
        SET_LAAT_LIVERIES;
    };

    SUBCLASS(B_Heli_LAAT_mk1_lamps,3as_LAAT_Mk1Lights)
    {
        displayName = TAG_NAME(LAAT Mk.I (Lamps));
        editorPreview = QPATHTOF(data\ui\editorPreviews\##TAG##_B_Heli_LAAT_mk1_lamps.jpg);
        editorSubcategory = CLASS(EdSubcat_Helicopters);
        faction = CLASS(BLU_Krayt_F);
        hiddenSelectionsTextures[]=
        {
            BASE_LAAT_TEXTURES
        };
        SET_LAAT_LIVERIES;
    };
};