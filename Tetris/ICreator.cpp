#include "pch.h"
#include "ICreator.h"


ICreator::ICreator()
{
}


ICreator::~ICreator()
{
}


FigureBase* ICreator::Create(wchar_t symbol)
{
	Coordinate coords[4] = { {7, 1}, {7, 2}, {7, 3}, {7, 4} };
	return new FigureI(symbol, coords, 4);
}