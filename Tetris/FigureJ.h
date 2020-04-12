#pragma once
#include "FigureBase.h"

class FigureJ :	public FigureBase
{
	void Turn(int px, int py, int x, int y);
public:
	FigureJ();
	FigureJ(wchar_t symbol, Coordinate* coordArray, int arraySize);
	~FigureJ();

	virtual void Turn() override;
};

