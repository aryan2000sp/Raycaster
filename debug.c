#include "debug.h"
#include "Ray.h"
#include "player.h"
#include "raylib.h"
void drawDebugMap() {}

void drawDebugPlayer(Player *newPlayer) {

  DrawText(TextFormat("Player LookAt:%f", newPlayer->lookAtAngle), 10, 10, 15,
           RED);
  DrawText(TextFormat("Player LookAtX:%f", 50.f * cos(newPlayer->lookAtAngle) +
                                               newPlayer->playerCoord.x),
           10, 25, 15, RED);
  DrawText(TextFormat("Player LookAtY:%f", 50.f * sin(newPlayer->lookAtAngle) +
                                               newPlayer->playerCoord.y),
           10, 40, 15, RED);

  DrawText(TextFormat("Player ROW_NO: %d", getRowNum(newPlayer->playerCoord)),
           10, 55, 20, RED);

  DrawText(TextFormat("Player COL_NO: %d", getColNum(newPlayer->playerCoord)),
           10, 75, 20, RED);
}
