#include "pch.h"
#include "FigureS.h"


FigureS::FigureS()
{
}

FigureS::FigureS(wchar_t symbol, Coordinate * coordArray, int arraySize) : FigureBase(symbol, coordArray, arraySize)
{
	_dir = Direction::Right;
}


FigureS::~FigureS()
{
}

void FigureS::Turn(int px, int py)
{
	for (int i = 0; i < _arraySize; i++)
	{
		int newX = (_coordArray[i].y + px - py);
		int	newY = (px + py - _coordArray[i].x);
		_coordArray[i].x = newX;
		_coordArray[i].y = newY;
	}
}

void FigureS::Turn()
{
	int px = _coordArray[1].x;
	int py = _coordArray[1].y;
	if (_dir == Direction::Right)
	{
		_dir = Direction::Down;
		Turn(px, py);
	}
	else if (_dir == Direction::Down)
	{
		_dir = Direction::Right;
		Turn(px, py);
		Turn(px, py);
		Turn(px, py);
	}
}
