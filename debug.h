#ifndef DEBUG_H
#define DEBUG_H

#include "raylib.h"

// If we compile with 'make debug', this macro calls the drawing function
#ifdef VISUAL_DEBUG
    #define DRAW_DEBUG_MAP() drawDebugMap()
    #define DRAW_DEBUG_PLAYER() drawDebugPlayer()
// If we compile normally, this macro does absolutely nothing
#else
    #define DRAW_DEBUG_MAP() 
#endif

// Function prototype so other files know this function exists
void drawDebugMap();
void drawDebugPlayer();

#endif