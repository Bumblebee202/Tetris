#pragma once
#include "FigureBase.h"

class FigureI :	public FigureBase
{
public:
	FigureI();
	FigureI(wchar_t symbol, Coordinate* coordArray, int arraySize);
	~FigureI();

	virtual void Turn() override;
};

