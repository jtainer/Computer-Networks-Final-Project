#include "types.h"
#include <cstring>

TileMap::TileMap() {
	memset(tile, 0, tileMapCount);
}
void TileMap::setTile(int x, int y, uint8_t val) {
	tile[x + y * tileMapWidth] = val;
}
uint8_t TileMap::getTile(int x, int y) {
	return tile[x + y * tileMapWidth];
}

PlayerInput::PlayerInput() {
	w = 0; a = 0; s = 0; d = 0;
}