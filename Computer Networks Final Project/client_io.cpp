// This module handles rendering and polling for keyboard inputs.

#include "client.h"
#include "client_shared.h"
#include "client_io.h"
#include <raylib.h>

int ClientIOThread() {
	
	// Test code
	InitWindow(1920, 1080, "TEST");
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		DrawText("Hello world!", 20, 20, 40, WHITE);
		EndDrawing();
	}
	CloseWindow();
	// End test code

	return 0;
}