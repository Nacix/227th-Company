class CfgVehicles
{
    class Launcher_Base_F;
    class Weapon_Base_F;

    #define ADD_WEAPON_OBJECT(namePretty,weaponClass,magazineClass,subcat,weaponType) \
        class TAG##_Weapon_##weaponClass: Weapon_Base_F \
        { \
            author = "Anorexican"; \
            scope = 2; \
            scopeCurator = 2; \
            \
            displayName = TAG_NAME(namePretty); \
            editorCategory = CLASS(EdCat_Weapons); \
            editorSubcategory = CLASS(subcat); \
            vehicleClass = QUOTE(weaponType); \
            \
            class TransportWeapons \
            { \
                NEW_CLASS(weaponClass) \
                { \
                    weapon = CLASS(weaponClass); \
                    count = 1; \
                }; \
            }; \
            class TransportMagazines \
            { \
                NEW_CLASS(magazineClass) \
                { \
                    magazine = CLASS(magazineClass); \
                    count = 1; \
                }; \
            }; \
        }

    #define ADD_LAUNCHER_OBJECT(namePretty,weaponClass,magazineClass) \
        class TAG##_Weapon_##weaponClass: Launcher_Base_F \
        { \
            author = "Anorexican"; \
            scope = 2; \
            scopeCurator = 2; \
            \
            displayName = TAG_NAME(namePretty); \
            editorCategory = CLASS(EdCat_Weapons); \
            editorSubcategory = CLASS(EdSubcat_Launchers); \
            vehicleClass = QUOTE(WeaponsSecondary); \
            \
            class TransportWeapons \
            { \
                NEW_CLASS(weaponClass) \
                { \
                    weapon = CLASS(weaponClass); \
                    count = 1; \
                }; \
            }; \
            class TransportMagazines \
            { \
                NEW_CLASS(magazineClass) \
                { \
                    magazine = CLASS(magazineClass); \
                    count = 1; \
                }; \
            }; \
        }

    #define ADD_LMG_OBJECT(namePretty,weaponClass,magazineClass) ADD_WEAPON_OBJECT(namePretty,weaponClass,magazineClass,EdSubcat_LightMachineGuns,WeaponsPrimary)
    #define ADD_SNIPER_OBJECT(namePretty,weaponClass,magazineClass) ADD_WEAPON_OBJECT(namePretty,weaponClass,magazineClass,EdSubcat_SniperRifles,WeaponsPrimary)
    #define ADD_RIFLE_OBJECT(namePretty,weaponClass,magazineClass) ADD_WEAPON_OBJECT(namePretty,weaponClass,magazineClass,EdSubcat_AssaultRifles,WeaponsPrimary)
    #define ADD_SMG_OBJECT(namePretty,weaponClass,magazineClass) ADD_WEAPON_OBJECT(namePretty,weaponClass,magazineClass,EdSubcat_SubMachineGuns,WeaponsPrimary)
    #define ADD_HANDGUN_OBJECT(namePretty,weaponClass,magazineClass) ADD_WEAPON_OBJECT(namePretty,weaponClass,magazineClass,EdSubcat_Pistols,WeaponsHandguns)

    // ############################################################ Sidearms ############################################################

    ADD_HANDGUN_OBJECT(DC-17SA,hgun_DC17SA_F,DC17SA_mag_F);
    ADD_HANDGUN_OBJECT(DC-17SA (Pointer),hgun_DC17SA_pointer_F,DC17SA_mag_F);

    // ############################################################ SMGs ############################################################

    ADD_SMG_OBJECT(DC-15S,SMG_DC15S_F,60Rnd_EC30_Mag_F);

    // ############################################################ Rifles ############################################################
    
    ADD_RIFLE_OBJECT(Westar M5,arifle_WestarM5_F,60Rnd_EC40_Mag_F);
    ADD_RIFLE_OBJECT(Westar M5 (Scope),arifle_WestarM5_scope_F,60Rnd_EC40_Mag_F);
    ADD_RIFLE_OBJECT(Westar M5 (UGL),arifle_WestarM5_UGL_F,60Rnd_EC40_Mag_F);

    ADD_RIFLE_OBJECT(DC-15C,arifle_DC15C_F,36Rnd_EC50_Mag_F);
    ADD_RIFLE_OBJECT(DC-15C (Scope),arifle_DC15C_scope_F,36Rnd_EC50_Mag_F);
    ADD_RIFLE_OBJECT(DC-15C (UGL),arifle_DC15C_UGL_F,36Rnd_EC50_Mag_F);

    ADD_RIFLE_OBJECT(DC-17M,arifle_DC17M_F,100Rnd_EC40_Mag_F);
    ADD_RIFLE_OBJECT(DC-17M (Pointer),arifle_DC17M_pointer_F,100Rnd_EC40_Mag_F);

    ADD_RIFLE_OBJECT(DC-15HX,arifle_DC15HX_F,45Rnd_EC40_Mag_F);

    ADD_RIFLE_OBJECT(DP-23,sgun_DP23_F,15Rnd_EC20_Mag_F);
    ADD_RIFLE_OBJECT(DP-23 (Pointer),sgun_DP23_pointer_F,15Rnd_EC20_Mag_F);

    ADD_RIFLE_OBJECT(DC-15A,arifle_DC15A_F,45Rnd_EC40_Mag_F);
    ADD_RIFLE_OBJECT(DC-15A (UGL),arifle_DC15A_UGL_F,45Rnd_EC40_Mag_F);

    // ############################################################ Snipers ############################################################

    ADD_SNIPER_OBJECT(DC-15X,srifle_DC15X_F,15Rnd_EC80_Mag_F);
    ADD_SNIPER_OBJECT(DC-15X (Scope),srifle_DC15X_scope_F,15Rnd_EC80_Mag_F);
    
    ADD_SNIPER_OBJECT(DW-32S,srifle_DW32S_F,21Rnd_EC60_Mag_F);
    ADD_SNIPER_OBJECT(DW-32S (Pointer),srifle_DW32S_pointer_F,21Rnd_EC60_Mag_F);

    ADD_SNIPER_OBJECT(Firepuncher,srifle_Firepuncher_F,15Rnd_EC80_Mag_F);
    ADD_SNIPER_OBJECT(Firepuncher (Scope),srifle_Firepuncher_scope_F,15Rnd_EC80_Mag_F);
    ADD_SNIPER_OBJECT(Firepuncher (Suppressor),srifle_Firepuncher_suppressor_F,15Rnd_EC80_Mag_F);

    // ############################################################ LMGs ############################################################

    ADD_LMG_OBJECT(DC-15LE,LMG_DC15LE_F,100Rnd_EC40_Mag_F);
    ADD_LMG_OBJECT(DC-15LE (Scope),LMG_DC15LE_scope_F,100Rnd_EC40_Mag_F);

    // ############################################################ Launchers ############################################################

    ADD_LAUNCHER_OBJECT(RPS-6X,launch_RPS6X_F,RPS6X_THEAT_SACLOS_F);
};