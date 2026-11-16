#include "player.h"
#include "Ray.h"
#include "debug.h"
#include "raylib.h"
#include <math.h>

Player newPlayer = {
    {SCREEN_WIDTH / 4.0f, SCREEN_HEIGHT / 2.0f + 15.0f},
    0,
};

void drawPlayer() {

  newPlayer.lookAtVec =
      (Vector2){cos(newPlayer.lookAtAngle) + newPlayer.playerCoord.x,
                sin(newPlayer.lookAtAngle) + newPlayer.playerCoord.y};

  // Inital Player is in the middle
  DrawCircleV(newPlayer.playerCoord, 10.0f, RED);
  DrawLineV(newPlayer.playerCoord, newPlayer.lookAtVec, DARKPURPLE);

  movePlayer();
  drawDebugPlayer(&newPlayer);
}

void movePlayer() {
  if (IsKeyDown(KEY_W)) {
    newPlayer.playerCoord.x += (0.9 * cos(newPlayer.lookAtAngle));
    newPlayer.playerCoord.y += (0.9 * sin(newPlayer.lookAtAngle));
  }

  if (IsKeyDown(KEY_S)) {
    newPlayer.playerCoord.x -= (0.9 * cos(newPlayer.lookAtAngle));
    newPlayer.playerCoord.y -= (0.9 * sin(newPlayer.lookAtAngle));
  }

  if (IsKeyDown(KEY_A)) {
    newPlayer.playerCoord.x -= (0.9 * cos(newPlayer.lookAtAngle + (PI / 2.f)));
    newPlayer.playerCoord.y -= (0.9 * sin(newPlayer.lookAtAngle + (PI / 2.f)));
  }

  if (IsKeyDown(KEY_D)) {
    newPlayer.playerCoord.x += (0.9 * cos(newPlayer.lookAtAngle + (PI / 2.f)));
    newPlayer.playerCoord.y += (0.9 * sin(newPlayer.lookAtAngle + (PI / 2.f)));
  }

  if (IsKeyDown(KEY_J)) {
    newPlayer.lookAtAngle -= (PI / 180) * 0.9;
    if (newPlayer.lookAtAngle < -(2 * PI)) {
      newPlayer.lookAtAngle = 0;
    };
  }

  if (IsKeyDown(KEY_L)) {
    newPlayer.lookAtAngle += (PI / 180) * 0.9;
    if (newPlayer.lookAtAngle > (2 * PI)) {
      newPlayer.lookAtAngle = 0;
    };
  }
}
