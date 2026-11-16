#include "config.h"
#include "player.h"
#include "raylib.h"
#include "world.h"

int main() {
  // const int screenWidth = 800;
  // const int screenHeight = 450;

  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "raylib basic window");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(BLACK);
    drawTileWorld();
    drawPlayer();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
