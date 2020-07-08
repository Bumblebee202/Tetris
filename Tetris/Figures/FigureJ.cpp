#include "pch.h"
#include "FigureJ.h"
#include<cmath>

FigureJ::FigureJ()
{
}

FigureJ::FigureJ(wchar_t symbol, Coordinate * coordArray, int arraySize) : FigureBase(symbol, coordArray, arraySize)
{ }


FigureJ::~FigureJ()
{
}

void FigureJ::Turn(int px, int py, int x, int y)
{
	for (int i = 0; i < _arraySize; i++)
	{
		int newX = (_coordArray[i].y + px - py);
		int	newY = (px + py - _coordArray[i].x);
		_coordArray[i].x = newX - x;
		_coordArray[i].y = newY - y;
	}
}

void FigureJ::Turn()
{
	int px = _coordArray[1].x;
	int py = _coordArray[1].y;
	int x = 0;
	int y = 0;
	if (_dir == Direction::Top)
	{
		_dir = Direction::Left;
	}
	else if (_dir == Direction::Left)
	{
		_dir = Direction::Down;
		x++;
	}
	else if (_dir == Direction::Down)
	{
		_dir = Direction::Right;
		x--;
		y--;
	}
	else if (_dir == Direction::Right)
	{
		_dir = Direction::Top;
		y++;
	}
	Turn(px, py, x, y);
}
