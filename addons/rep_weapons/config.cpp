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
			"A3_weapons_F_Items",
			"A3_characters_F",
            "3AS_Main",
			"3AS_Weapons",
			"3AS_Weapons_RPS6",
			"3AS_ATRT",
			"442_weapons",
			"442_weapons_773",
			"442_weapons_explosives",
			"71st_Weapons_DC15A",
			"71st_Weapons_DC15A_LE",
			"71st_Weapons_DC15S",
			"71st_Weapons_acc",
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
			CLASS(optic_Holo),
			CLASS(optic_DC15X_scope),
			CLASS(optic_Firepuncher_scope),
			CLASS(optic_Firepuncher_scope_off),
			CLASS(acc_flashlight),
            CLASS(acc_pointer_Borange),
            CLASS(acc_pointer_Borange_IR),
			CLASS(acc_pointer_Borange_DC17M),
			CLASS(acc_pointer_Borange_DC17M_IR),
            CLASS(acc_pointer_Borange_short),
            CLASS(acc_pointer_Borange_short_IR),
			CLASS(acc_pointer_Borange_DP23),
			CLASS(acc_pointer_Borange_DP23_IR),
            CLASS(acc_pointer_Borange_long),
            CLASS(acc_pointer_Borange_long_IR),
			CLASS(acc_pointer_Borange_Firepuncher),
			CLASS(acc_pointer_Borange_Firepuncher_IR),
			CLASS(hgun_DC17SA_F),
			CLASS(SMG_DC15S_F),
			CLASS(arifle_DC15A_F),
			CLASS(arifle_DC15A_UGL_F),
			CLASS(arifle_DC15C_F),
			CLASS(arifle_DC15C_UGL_F),
			CLASS(arifle_WestarM5_F),
			CLASS(arifle_WestarM5_GL_F),
			CLASS(srifle_DW32S_F),
			CLASS(srifle_DC15X_F),
			CLASS(srifle_Firepuncher_F),
			CLASS(LMG_DC15LE_F),
			CLASS(sgun_DP23_F),
			CLASS(arifle_DC15L_F),
			CLASS(arifle_DC17M_F),
			CLASS(launch_RPS6_F)
        };
        units[]=
		{
			CLASS(Weapon_arifle_DC15A_F),
			CLASS(Weapon_arifle_DC15A_UGL_F),
			CLASS(Weapon_arifle_DC15C_F),
			CLASS(Weapon_arifle_DC15C_UGL_F),
			CLASS(Weapon_arifle_DC15L_F),
			CLASS(Weapon_arifle_DC17M_F),
			CLASS(Weapon_arifle_WestarM5_F),
			CLASS(Weapon_arifle_WestarM5_GL_F),
			CLASS(Weapon_hgun_DC17SA_F),
			CLASS(Weapon_LMG_DC15LE_F),
			CLASS(Weapon_sgun_DP23_F),
			CLASS(Weapon_SMG_DC15S_F),
			CLASS(Weapon_srifle_DC15X_F),
			CLASS(Weapon_srifle_DW32S_F),
			CLASS(Weapon_srifle_Firepuncher_F),
			CLASS(Weapon_launch_RPS6_F),
		};
        magazines[]=
		{
			CLASS(15Rnd_EC20_Mag_F),
			CLASS(24Rnd_EC30_Mag_F),
			CLASS(60Rnd_EC30_Mag_F),
			CLASS(45Rnd_EC40_Mag_F),
			CLASS(60Rnd_EC40_Mag_F),
			CLASS(100Rnd_EC40_Mag_F),
			CLASS(30Rnd_EC50_Mag_F),
			CLASS(36Rnd_EC50_Mag_F),
			CLASS(21Rnd_EC60_Mag_F),
			CLASS(5Rnd_EC80_Mag_F),
			CLASS(15Rnd_EC80_Mag_F),
			CLASS(12Rnd_EC90_Mag_F),
			CLASS(1Rnd_ECX1000_Mag_F),
			CLASS(RPS6X_THEAT_SACLOS_F),
			CLASS(RPS6X_HE_SACLOS_F)
		};
        ammo[]=
		{
			CLASS(B_EC20_Pellets_Submunition_Deploy),
			CLASS(B_EC20_Pellets_Submunition),
			CLASS(B_ECX130_147x114_AT),
			CLASS(ammo_Penetrator_ECP600),
			CLASS(M_ECX780_THEAT),
			CLASS(M_ECX100_HE)
		};
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class PointerSlot: SlotInfo
{
	compatibleItems[] += {
		CLASS(acc_pointer_Borange),
		CLASS(acc_pointer_Borange_IR),
		CLASS(acc_pointer_Borange_DC17M),
		CLASS(acc_pointer_Borange_DC17M_IR),
		CLASS(acc_pointer_Borange_short),
		CLASS(acc_pointer_Borange_short_IR),
		CLASS(acc_pointer_Borange_DP23),
		CLASS(acc_pointer_Borange_DP23_IR),
		CLASS(acc_pointer_Borange_long),
		CLASS(acc_pointer_Borange_long_IR),
		CLASS(acc_pointer_Borange_Firepuncher),
		CLASS(acc_pointer_Borange_Firepuncher_IR),
	};
};

#include <CfgAmmo.hpp>
#include <CfgMagazines.hpp>
#include <CfgWeapons.hpp>
#include <CfgVehicles.hpp>