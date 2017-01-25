#pragma once

#include "stdafx.h"
#include <iostream>


class Commands
{
public:
	Commands();
	~Commands();
	virtual void command();
};

class Jump : public Commands{
public:
	virtual void command();
};

class Left : public Commands{
public:
	void command();
};

class Right : public Commands{
public:
	void command();
};
