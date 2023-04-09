#include "client.h"
#include "client_io.h"
#include "client_network.h"
#include "types.h"
#include <thread>
#include <mutex>

// Data shared between networking and IO client modules
// 
// Always lock mutex before accessing the corresponding object,
// and unlock after. Only lock one object at a time.
TileMap tileMap;
std::mutex tileMapMutex;

PlayerInput playerInput;
std::mutex playerInputMutex;

int RunClient(uint32_t address, uint32_t port) {
	// Create threads for io and networking modules
	// and wait for both threads to terminate.

	// Test
	ClientIOThread();
	// End test


	return 0;
}