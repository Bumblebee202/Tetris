#include "pch.h"
#include "FigureL.h"


FigureL::FigureL()
{
}

FigureL::FigureL(wchar_t symbol, Coordinate * coordArray, int arraySize) : FigureBase(symbol, coordArray, arraySize)
{
}


FigureL::~FigureL()
{
}

void FigureL::Turn(int px, int py, int x, int y)
{
	for (int i = 0; i < _arraySize; i++)
	{
		int newX = (_coordArray[i].y + px - py);
		int	newY = (px + py - _coordArray[i].x);
		_coordArray[i].x = newX - x;
		_coordArray[i].y = newY - y;
	}
}

void FigureL::Turn()
{
	int px = _coordArray[1].x;
	int py = _coordArray[1].y;
	int x = 0;
	int y = 0;
	if (_dir == Direction::Top)
	{
		_dir = Direction::Left;
		y--;
	}
	else if (_dir == Direction::Left)
	{
		_dir = Direction::Down;
		y++;
		x--;
	}
	else if (_dir == Direction::Down)
	{
		_dir = Direction::Right;
		x++;
	}
	else if (_dir == Direction::Right)
	{
		_dir = Direction::Top;
	}
	Turn(px, py, x, y);
}
