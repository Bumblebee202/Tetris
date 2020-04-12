#include "pch.h"
#include "FigureT.h"


FigureT::FigureT()
{
}

FigureT::FigureT(wchar_t symbol, Coordinate * coordArray, int arraySize) : FigureBase(symbol, coordArray, arraySize)
{
	_dir = Direction::Down;
}


FigureT::~FigureT()
{
}

void FigureT::Turn()
{
	int px = _coordArray[2].x;
	int py = _coordArray[2].y;
	if (_dir == Direction::Top)
	{
		_dir = Direction::Left;
	}
	else if (_dir == Direction::Left)
	{
		_dir = Direction::Down;
	}
	else if (_dir == Direction::Down)
	{
		_dir = Direction::Right;
	}
	else if (_dir == Direction::Right)
	{
		_dir = Direction::Top;
	}
	for (int i = 0; i < _arraySize; i++)
	{
		int newX = (_coordArray[i].y + px - py);
		int	newY = (px + py - _coordArray[i].x);
		_coordArray[i].x = newX;
		_coordArray[i].y = newY;
	}
}
