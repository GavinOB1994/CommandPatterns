#include "stdafx.h"
#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

void Player::render(SDL_Renderer * renderer)
{
	SDL_Rect _rect;
	_rect.h = 50;
	_rect.w = 25;
	_rect.x = m_xPos;
	_rect.y = m_yPos;


	SDL_SetRenderDrawColor(renderer, 255,0,0,255); //Sets colour to red
	SDL_RenderFillRect(renderer, &_rect);
}
