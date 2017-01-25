#pragma once
#include "stdafx.h"
#include <iostream>
#include "SDL.h"

class Player
{
private:
	int m_xPos;
	int m_yPos;
public:
	Player();
	~Player();

	void render(SDL_Renderer * renderer);
};

