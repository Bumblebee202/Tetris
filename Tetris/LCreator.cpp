#include "pch.h"
#include "LCreator.h"


LCreator::LCreator()
{
}


LCreator::~LCreator()
{
}

FigureBase * LCreator::Create(wchar_t symbol)
{
	Coordinate coords[4] = { {7, 1}, {7, 2}, {7, 3}, {8, 3} };
	return new FigureL(symbol, coords, 4);
}
