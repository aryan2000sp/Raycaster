#ifndef PLAYER_H
#define PLAYER_H

#include "config.h"
#include "raylib.h"
#include <math.h>

struct PLAYER {
  Vector2 playerCoord;
  Vector2 lookAtVec;
  float lookAtAngle;
};

typedef struct PLAYER Player;

void drawPlayer();
void movePlayer();

#endif
