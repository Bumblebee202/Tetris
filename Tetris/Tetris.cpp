// Tetris.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "BaseApp.h"
#include "Game.h"

int main()
{
	//system("chcp 1251");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	std::srand(unsigned(std::time(0)));
	Game game;
	game.Run();
}
