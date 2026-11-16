#include "Ray.h"
#include "raylib.h"
#include <stdint.h>

uint32_t getRowNum(Vector2 playerCoord) { return playerCoord.y / TILE_SIZE; }

uint32_t getColNum(Vector2 playerCoord) { return playerCoord.x / TILE_SIZE; }

void drawRay(Vector2 startPosition, Vector2 direction) {
  DrawLineV(startPosition, direction, DARKPURPLE);
}

void castRay(Vector2 startPosition, Vector2 direction) {
  uint32_t rowNum = getRowNum(startPosition);
  uint32_t colNum = getColNum(startPosition);
}
