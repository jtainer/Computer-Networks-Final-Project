// Entry point for the application.

#include "client.h"
#include "server.h"

int main() {
	// Ask user to run as server or as client.
	// 
	// If server, run server loop.
	// 
	// If client, ask what server IP and port to connect to,
	// then run client.

	// Testing to make sure everything is building correctly so far
	RunClient(0, 0);
	// End test

	return 0;
}