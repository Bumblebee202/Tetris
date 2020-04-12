#pragma once
#include "FigureBase.h"

class FigureT :	public FigureBase
{
public:
	FigureT();
	FigureT(wchar_t symbol, Coordinate* coordArray, int arraySize);
	~FigureT();

	virtual void Turn() override;
};

