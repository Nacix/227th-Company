#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Creates an event handler that fires when the player's weapon muzzle changes. Used to change optics when the player changes muzzles.
 *
 * Arguments:
 * 1: Player <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * NONE
 *
 * Public: No
*/

if (isServer && !hasInterface) exitWith {}; // Only run on clients

params ["_unit"];

TRACE_1("handleMuzzleSwitch",_unit);

// Add EH to wait for muzzle switch events
private _muzzleChangeHandler = ["muzzle", {
	params ["_unit", "_weapon", "_muzzle"];
	TRACE_3("muzzleEH",_unit,_weapon,_muzzle);

	// Runs muzzle-specific code on supported weapons
	switch _weapon do {
		case CLASS(sgun_DP23_F): {
			 // Set the DP-23 optic to shotgun mode
			 LOG_1("Resetting DP-23 optic on unit [%1]",_unit);
			_unit removePrimaryWeaponItem CLASS(optic_Holo_DP23);
		};
		case CLASS(Blaster_F): {
			// Set the DP-23 optic to blaster mode
			LOG_2("Setting DP-23 optic to [%1] on unit [%2]",CLASS(optic_Holo_DP23),_unit);
			_unit addPrimaryWeaponItem CLASS(optic_Holo_DP23);
		};
	};
}] call CBA_fnc_addPlayerEventHandler;

SETVAR(_unit,GVAR(muzzleEH),_muzzleChangeHandler);