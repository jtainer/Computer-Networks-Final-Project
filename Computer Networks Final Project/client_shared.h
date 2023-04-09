#ifndef CLIENT_SHARED_H
#define CLIENT_SHARED_H

#include "types.h"
#include <mutex>

extern TileMap tileMap;
extern std::mutex tileMapMutex;

extern PlayerInput playerInput;
extern std::mutex playerInputMutex;

#endif