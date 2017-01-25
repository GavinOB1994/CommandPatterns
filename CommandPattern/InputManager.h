#pragma once

//#include "stdafx.h"
#include "Commands.h"
#include "SDL.h"

class InputManager
{
private:
	Commands* m_jump;
	Commands* m_left;
	Commands* m_right;
	
public:
	InputManager();
	~InputManager();
	void manageInput(SDL_Event & event);
};

