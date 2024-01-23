#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Sets the skills of a given unit and applies any special attributes
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Face selection preset or custom face list <STRING|ARRAY>
 *      1.1: Face ID <STRING>
 *      1.2: RNG Weight <NUMBER>
 * 2: Unit designation <STRING> (Optional | default="CT")
 *
 * Examples:
 * NONE - Script calls are passed via CfgEventHandlers.hpp
 *
 * Return Value:
 * NONE
 *
 * Public: No
*/

params ["_unit", "_faceProfile", "_designation", "_skillLevel"];

if (isPlayer _unit) exitWith {};

// Call the paradrop script if our unit is the leader of a drop group
switch (typeOf _unit) do {
	case CLASS(B_Krayt_Jet_NCO_1_F): { [_unit, 250] call EFUNC(common,paradrop) };
	case CLASS(B_Krayt_Jet_NCO_2_F): { [_unit, 500] call EFUNC(common,paradrop) };
	case CLASS(B_Krayt_Jet_NCO_3_F): { [_unit, 750, 65] call EFUNC(common,paradrop) };
	case CLASS(B_Krayt_Jet_NCO_4_F): { [_unit, 1000, 70] call EFUNC(common,paradrop) };
};

// Grabs our unit's skills from the skillTable (if available)
private _unitSkills = GVAR(skillTable) getOrDefault [_skillLevel, []];

[_unit, _faceProfile, _designation] call FUNC(setIdentity);

if (_unitSkills isEqualTo []) exitWith {};

{
	_unit setSkill [_x, _unitSkills select _forEachIndex];
} forEach SKILLTYPES;
