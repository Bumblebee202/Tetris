#include "pch.h"
#include "ZCreator.h"


ZCreator::ZCreator()
{
}


ZCreator::~ZCreator()
{
}

FigureBase * ZCreator::Create(wchar_t symbol)
{
	Coordinate coords[4] = { {6, 1}, {7, 1}, {7, 2}, {8, 2} };
	return new FigureZ(symbol, coords, 4);
}
