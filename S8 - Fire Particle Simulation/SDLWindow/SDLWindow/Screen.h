#pragma once
#include "SDL.h"
#include <iostream>

namespace caveofprograming {

	class Screen
	{
	public:
		static const int SCREEN_WIDTH = 800;
		static const int SCREEN_HEIGHT = 600;

	private:
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		SDL_Texture* m_texture;
		Uint32* m_buffer;
	
	public:
		Screen();
		bool init();
		bool processEvents();
		void close();

	};
}

