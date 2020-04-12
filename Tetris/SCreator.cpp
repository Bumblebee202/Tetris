#include "pch.h"
#include "SCreator.h"


SCreator::SCreator()
{
}


SCreator::~SCreator()
{
}

FigureBase * SCreator::Create(wchar_t symbol)
{
	Coordinate coords[4] = { {6, 2}, {7, 2}, {7, 1}, {8, 1} };
	return new FigureS(symbol, coords, 4);
}
