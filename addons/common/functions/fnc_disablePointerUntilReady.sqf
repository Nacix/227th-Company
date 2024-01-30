#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Used to prevent visible laser pointers from enabling prematurely on weapon switch.
 *
 * If the specified unit is switching from a launcher and tries to enable their laser, the pointer will be disabled until the switch animation completes.
 * This is a workaround for a base game bug that causes visible lasers to displace when switching off a launcher.
 * More detail on the bug can be found in the documentation for fnc_init.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: The unit's weapon <STRING>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [player, currentWeapon player] call krt_common_fnc_disablePointerUntilReady;
 *
 * Public: No
*/

params ["_unit", "_weapon"];

if (!hasInterface || !local _unit) exitWith {}; // Only executes on player client

TRACE_2("disablePointerUntilReady",_unit,_weapon);

LOG_1("Disabling laser pointer on unit [%1]",_unit);
_unit action ["IRLaserOff", _unit];

// True if unit is playing a launcher animation or has a launcher equipped
if ("Launcher" in ([_unit, false] call BIS_fnc_moveAction) && {_weapon isNotEqualTo secondaryWeapon _unit}) then {
	LOG_1("Unit [%1] is switching from launcher; disabling pointer until complete.",_unit);

	// Blocks the player from enabling their laser until terminated
	private _disableLaserPFH = [{ _this#0 action ["IRLaserOff", _this#0] }, 0, _unit] call CBA_fnc_addPerFrameHandler;

	// Waits for the player to finish switching weapons, then re-enables laser usage. Automatically times-out if hanging.
	[
		{ (currentWeapon _this#0) isEqualTo (secondaryWeapon _this#0) || !("Launcher" in ([_this#0, false] call BIS_fnc_moveAction)) }, 
		{ _this#2 call CBA_fnc_removePerFrameHandler }, 
		[_unit, _weapon, _disableLaserPFH],
		8,
		{ 
			LOG_1("Weapon switch completed on unit [%1]",_this#0);
			_this#2 call CBA_fnc_removePerFrameHandler;
		}
	] call CBA_fnc_waitUntilAndExecute;
};