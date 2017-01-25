#include "stdafx.h"
#include "InputManager.h"




InputManager::InputManager()
{
	m_jump = new Jump;
	m_left = new Left;
	m_right = new Right;
}


InputManager::~InputManager()
{
}

void InputManager::manageInput(SDL_Event & event)
{
	if (event.key.keysym.sym == SDLK_SPACE)
	{
		m_jump->command();
	}
	else if (event.key.keysym.sym == SDLK_d)
	{
		m_right->command();
	}
	else if (event.key.keysym.sym == SDLK_a)
	{
		m_left->command();
	}
}