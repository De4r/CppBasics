#include <iostream>
#include "SDL.h"
#include <stdio.h>
#include "Screen.h"

using namespace caveofprograming;
using namespace std;

int main(int argc, char* argv[]) {

	
	Screen screen;
	if (screen.init() == false)
	{
		cout << "Error initialising SDL." << endl;
	}

	bool quit = false;
	
	while (!quit)
	{
		// Update the position of particle
		// Draws particles
		// Waits for events/messages
		if (screen.processEvents() == false) {
			break;
		}
					
	}
	
	
	screen.close();
	return 0;
}