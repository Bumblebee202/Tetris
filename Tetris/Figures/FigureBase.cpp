#include "pch.h"
#include "FigureBase.h"


FigureBase::FigureBase()
{
	_symbol = 0;
	_coordArray = nullptr;
	_arraySize = 0;
	_dir = Direction::Top;
}

FigureBase::FigureBase(wchar_t symbol, Coordinate* coordArray, int arraySize)
{
	_symbol = symbol;
	_arraySize = arraySize;
	_coordArray = new Coordinate[_arraySize];
	_dir = Direction::Top;
	for (int i = 0; i < _arraySize; i++)
		_coordArray[i] = coordArray[i];
}

FigureBase::~FigureBase()
{
	delete[] _coordArray;
}

wchar_t FigureBase::GetSymbol() const
{
	return _symbol;
}

int FigureBase::GetArraySize() const
{
	return _arraySize;
}

void FigureBase::MoveRight()
{
	for (int i = 0; i < _arraySize; i++)
		_coordArray[i].x++;
}

void FigureBase::MoveLeft()
{
	for (int i = 0; i < _arraySize; i++)
		_coordArray[i].x--;
}

void FigureBase::MoveDown()
{
	for (int i = 0; i < _arraySize; i++)
		_coordArray[i].y++;
}

void FigureBase::SetCoordinates(Coordinate coords[], int size)
{
	for (size_t i = 0; i < size; i++)
		if (_arraySize > i)
			_coordArray[i] = coords[i];
}

Coordinate FigureBase::GetCoordinates(int index) const
{
	return _coordArray[index];
}