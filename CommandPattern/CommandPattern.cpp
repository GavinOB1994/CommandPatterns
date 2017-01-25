// CommandPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"
#undef main

void main()
{
	Game game = Game();
	SDL_Init(SDL_INIT_VIDEO);

	while (true)
	{
		game.update();
		game.render();
	}
}
