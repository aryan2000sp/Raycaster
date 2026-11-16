#include "world.h"

int map[TILE_ROW][TILE_COL] = {
    {1, 1, 1, 1, 1, 1, 1, 1}, {1, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 1}, {1, 0, 0, 0, 0, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 1}, {1, 0, 0, 0, 1, 1, 0, 1},
    {1, 1, 1, 0, 0, 0, 0, 1}, {1, 1, 1, 1, 1, 1, 1, 1},
};

void drawTileWorld() {

  Vector2 tileSize = {TILE_SIZE, TILE_SIZE};
  Vector2 rectCoordinate;
  for (int i = 0; i < TILE_ROW; i++) {
    for (int j = 0; j < TILE_COL; j++) {
      rectCoordinate.x = i * tileSize.x;
      rectCoordinate.y = j * tileSize.y;

      DrawRectangleV(rectCoordinate,
                     (Vector2){TILE_SIZE - 0.8f, TILE_SIZE - 0.8f},
                     (map[i][j]) ? DARKGRAY : WHITE);
    }
  }
}
