#include "pch.h"
#include "TCreator.h"


TCreator::TCreator()
{
}


TCreator::~TCreator()
{
}

FigureBase * TCreator::Create(wchar_t symbol)
{
	Coordinate coords[4] = { {7, 1}, {6, 2}, {7, 2}, {8, 2} };
	return new FigureT(symbol, coords, 4);
}
