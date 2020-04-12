#include "pch.h"
#include "JCreator.h"


JCreator::JCreator()
{
}


JCreator::~JCreator()
{
}

FigureBase * JCreator::Create(wchar_t symbol)
{
	Coordinate coords[4] = { {7, 1}, {7, 2}, {7, 3}, {6, 3} };
	return new FigureJ(symbol, coords, 4);
}
