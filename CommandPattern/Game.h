#pragma once
//#include "stdafx.h"
#include "Player.h"
#include "InputManager.h"

class Game
{
private:
	SDL_Renderer *m_renderer;
	SDL_Window *m_window;
	InputManager m_inputManager;
	Player m_player;
	
	
public:
	Game();
	~Game();

	void update();
	void render();
};

