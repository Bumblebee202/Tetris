#pragma once
#include "FigureBase.h"

class FigureQ :	public FigureBase
{
public:
	FigureQ();
	FigureQ(wchar_t symbol, Coordinate* coordArray, int arraySize);
	~FigureQ();

	virtual void Turn() override
	{ }
};

