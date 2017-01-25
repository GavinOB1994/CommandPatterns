#include "stdafx.h"
#include "Commands.h"

using namespace std;

void Commands::command()
{;
}

Commands::Commands()
{
}
Commands::~Commands()
{
}

void Jump::command()
{
	cout << "Jumping" << endl;
}
void Right::command()
{
	cout << "Moving Left" << endl;
}
void Left::command()
{
	cout << "Moving Right" << endl;
}