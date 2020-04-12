#include "pch.h"
#include "FigureZ.h"


FigureZ::FigureZ()
{
}

FigureZ::FigureZ(wchar_t symbol, Coordinate * coordArray, int arraySize) : FigureBase(symbol, coordArray, arraySize)
{
	_dir = Direction::Left;
}


FigureZ::~FigureZ()
{
}

void FigureZ::Turn(int px, int py, int x, int y)
{
	for (int i = 0; i < _arraySize; i++)
	{
		int newX = (_coordArray[i].y + px - py);
		int	newY = (px + py - _coordArray[i].x);
		_coordArray[i].x = newX - x;
		_coordArray[i].y = newY - y;
	}
}

void FigureZ::Turn()
{
	int px = _coordArray[1].x;
	int py = _coordArray[1].y;
	if (_dir == Direction::Left)
	{
		_dir = Direction::Down;
		Turn(px, py, 0, -1);
	}
	else if (_dir == Direction::Down)
	{
		_dir = Direction::Left;
		Turn(px, py, 0, -1);
		Turn(px, py, 0, 0);
		Turn(px, py, 0, 0);
	}
}
