#include <iostream>
#include "SDL.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"

using namespace caveofprogramming;
using namespace std;

int main(int argc, char* argv[]) {

	srand(time(NULL));
	
	Screen screen;
	if (screen.init() == false)
	{
		cout << "Error initialising SDL." << endl;
	}

	Swarm swarm;

	bool quit = false;
	
	while (!quit)
	{
		// Update the position of particle
		// Draws particles
		// Waits for events/messages

		int elapsed = SDL_GetTicks();
		//screen.clear();
		swarm.update(elapsed);

		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.001)) * 255 / 2);
		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.002)) * 255 / 2);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.003)) * 255 / 2);

		const Particle* const pParticles = swarm.getParticles();
		for (int i = 0; i < Swarm::NPARTICLES; i++)
		{
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = particle.m_y * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}
		
		screen.boxBlur();
		
		screen.update();

		if (screen.processEvents() == false) 
		{
			break;
		}
					
	}
	
	
	screen.close();
	return 0;
}