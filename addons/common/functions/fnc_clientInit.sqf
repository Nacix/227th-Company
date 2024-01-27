#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Initializes clientside variables and calls handlers for weapon scripts at postInit.
 *
 * Arguments:
 * NONE
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

TRACE_1("clientInit",player);

player call FUNC(handleMuzzleSwitch);