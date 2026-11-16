#include "config.h"
#include "player.h"
#include "raylib.h"
#include <stdint.h>

// This is ray Vector has start and end position

struct RAY_VECTOR {
  Vector2 startPosition;
  Vector2 endPosition;
};
typedef struct RAY_VECTOR RayVector;

uint32_t getRowNum(Vector2 playerCoord);
uint32_t getColNum(Vector2 playerCoord);

void drawRay(Vector2 startPosition, Vector2 direction);
void castRay(Vector2 startPosition, Vector2 direction);
