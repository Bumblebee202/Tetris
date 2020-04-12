#include "pch.h"
#include "FigureI.h"


FigureI::FigureI()
{
}

FigureI::FigureI(wchar_t symbol, Coordinate * coordArray, int arraySize) : FigureBase(symbol, coordArray, arraySize)
{ }


FigureI::~FigureI()
{
}

void FigureI::Turn()
{
	if (_dir == Direction::Top)
	{
		_dir = Direction::Right;
		int y = _coordArray[1].y;
		int x = _coordArray[1].x;
		for (int i = 0; i < _arraySize; i++)
		{
			_coordArray[i].x = x + i - 1;
			_coordArray[i].y = y;
		}
	}
	else
	{
		_dir = Direction::Top;
		Coordinate temp;
		int y = _coordArray[0].y;
		int x = _coordArray[0].x;
		for (int i = 0; i < _arraySize; i++)
		{
			_coordArray[i].x = x + 1;
			_coordArray[i].y = y + i - 1;
		}
	}
}
