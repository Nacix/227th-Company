#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Initializes global variables for our republic units
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Public: No
*/

if (!isServer) exitWith {};

// FACE PROFILES BASED ON UNIT ROLE TAG
GVAR(faceProfileMap) = createHashMapFromArray [
    ["CT", [
		"lsd_gar_cloneA_head", 0.8,
		"lsd_gar_cloneC_head", 0.2
    ]],
    ["SPC", [
        "lsd_gar_cloneA_head", 0.65,
        "lsd_gar_cloneC_head", 0.15,
        "lsd_gar_cloneG_head", 0.15,
        "lsd_developer_cloneGambit_head", 0.05
    ]],
    ["NCO", [
        "lsd_gar_cloneA_head", 0.35,
        "lsd_gar_cloneC_head", 0.20,
        "lsd_gar_cloneG_head", 0.25,
        "lsd_developer_cloneGambit_head", 0.20
    ]],
    ["SNCO", [
        "lsd_gar_cloneA_head", 0.35,
        "lsd_gar_cloneG_head", 0.30,
        "lsd_developer_cloneGambit_head", 0.35
    ]],
    ["JCO", [
        "lsd_gar_cloneA_head", 0.6,
        "lsd_gar_cloneC_head", 0.25,
        "lsd_developer_cloneGambit_head", 0.15
    ]],
    ["SCO", [
        "lsd_gar_cloneA_head", 0.3,
        "lsd_gar_cloneG_head", 0.4,
        "lsd_developer_cloneGambit_head", 0.2,
        "lsd_community_cloneVaelin_head", 0.1
    ]],
    ["CC", [
        "lsd_developer_cloneMarco_head", 0.5,
		"lsd_community_cloneVaelin_head", 0.5
    ]]
];

/* KRT_skillTable
* 
* Defines the skills of a given unit
* 
* Arguments:
* [0] aimingAccuracy - how accurate the unit is when firing
* [1] aimingShake - dispersion in the unit's shots (precision)
* [2] spotDistance - how far the unit can effectively spot targets
* [3] spotTime - how quickly the unit can spot a target
* [4] courage - how likely the unit is to hold their ground
* [5] commanding - how well the unit can command subordinates
* [6] aimingSpeed - how quickly the unit can adjust its aim
* [7] general - overall unit performance (manuevers, response times, etc.)
* [8] endurance - overall stamina of the unit
* [9] reloadSpeed - how quickly the unit can reload
*/

GVAR(skillTable) = createHashMapFromArray [
	["elite", [1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00]],
	["sniper", [0.90, 0.90, 1.00, 1.00, 1.00, 1.00, 0.85, 0.80, 1.00, 1.00]],
	["scout", [0.80, 0.80, 0.80, 0.80, 1.00, 1.00, 0.80, 0.80, 1.00, 1.00]],
	["leader", [0.75, 0.75, 0.65, 0.75, 1.00, 1.00, 0.65, 0.75, 0.75, 0.80]],
	["basic", [0.65, 0.65, 0.65, 0.65, 1.00, 1.00, 0.65, 0.65, 0.70, 0.75]]
];