#include "stdafx.h"
#include "Game.h"


Game::Game()
{
	m_window = SDL_CreateWindow("Command Pattern", 
								SDL_WINDOWPOS_UNDEFINED, 
								SDL_WINDOWPOS_UNDEFINED, 
								800, 
								800, 
								SDL_WINDOW_SHOWN);

	m_renderer = SDL_CreateRenderer(m_window, 
								 -1, 
								 SDL_RENDERER_ACCELERATED);

}


Game::~Game()
{
}

void Game::update()
{
	SDL_Event event;
	while (SDL_PollEvent(&event)){
		switch (event.type){
		case SDL_KEYDOWN:
			m_inputManager.manageInput(event);
			break;
		}
	}
}

void Game::render()
{
	SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
	SDL_RenderClear(m_renderer);
	//////////////////////////// Render code in here

	m_player.render(m_renderer);

	////////////////////////////
	SDL_RenderPresent(m_renderer);
}
