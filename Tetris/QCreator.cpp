#include "pch.h"
#include "QCreator.h"


QCreator::QCreator()
{
}


QCreator::~QCreator()
{
}

FigureBase* QCreator::Create(wchar_t symbol)
{
	Coordinate coords[4] = { {7, 1}, {8, 1}, {7, 2}, {8, 2} };
	return new FigureQ(symbol, coords, 4);
}
