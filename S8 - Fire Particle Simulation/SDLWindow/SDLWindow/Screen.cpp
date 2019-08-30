#include "Screen.h"

namespace caveofprogramming {

	Screen::Screen() :m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL)
	{
		
	}

	bool Screen::init()
	{
		if (SDL_Init(SDL_INIT_VIDEO) < 0)
		{
			return false;
		}

		m_window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		if (m_window == NULL)
		{
			SDL_Quit();
			return false;
		}

		m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC); // tworzenie renderera
		m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT); // tworzenie texture na podstawie rendera, foramtu, dostepu statycznego i wymiarow okna

		if (m_renderer == NULL)
		{
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}

		if (m_texture == NULL)
		{
			SDL_DestroyRenderer(m_renderer);
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}

		m_buffer = new Uint32[SCREEN_HEIGHT * SCREEN_WIDTH]; // tworzenie buffora
		memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32)); // wpisanie wartosci w adresy pamieci

		//// wpisywanie w pamiec
		//m_buffer[30000] = 0xFFFFFFFF;

		//for (size_t i = 0; i < SCREEN_HEIGHT * SCREEN_WIDTH; i++)
		//{
		//	m_buffer[i] = 0x000000FF; // alpha, blue, green, red
		//}

		//SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH * sizeof(Uint32));
		//SDL_RenderClear(m_renderer);
		//SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
		//SDL_RenderPresent(m_renderer); // kolejny kurs, setting colors, zabawa tym kodem, nie tworze nowych rozwiazan dla kazdego kursu
		return true;
	}

	void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue)
	{
		Uint32 color=0;
		if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT) { return; }

		
		color = 0xFF;
		color <<= 8;
		color += blue;
		color <<= 8;
		color += green;
		color <<= 8;
		color += red;
		

		m_buffer[(y * SCREEN_WIDTH) + x] = color;
	}

	bool Screen::processEvents()
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				return false;
			}
		}
		return true;
	}

	void Screen::close()
	{
		delete[] m_buffer;
		SDL_DestroyTexture(m_texture);
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
	}

	void Screen::update()
	{
		SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH * sizeof(Uint32));
		SDL_RenderClear(m_renderer);
		SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
		SDL_RenderPresent(m_renderer);
	}

};