#ifndef TYPES_H
#define TYPES_H

#include "config.h"
#include <cstdint>

struct TileMap {
	// This is what the server sends to each client after each update.
	// Each byte indicates the state of a tile in the tilemap, e.g. empty, occupied by player 1, occupied by
	// a fruit, etc. When rendering the tilemap this can be used as an index for a lookup table, to select a
	// color or texture for each tile.
	uint8_t tile[tileMapCount];

	TileMap();
	void setTile(int x, int y, uint8_t val);
	uint8_t getTile(int x, int y);
};

// This is what the server receives from each client before calculating the new state.
struct PlayerInput {
	// These are just booleans, they could be packed into a single byte but for now this is easier.
	// Zero if the key is up, nonzero if the key is down.
	uint8_t w, a, s, d;

	PlayerInput();
};

#endif