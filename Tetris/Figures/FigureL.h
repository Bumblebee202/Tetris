#pragma once
#include "FigureBase.h"

class FigureL :	public FigureBase
{
	void Turn(int px, int py, int x, int y);
public:
	FigureL();
	FigureL(wchar_t symbol, Coordinate* coordArray, int arraySize);
	~FigureL();

	virtual void Turn() override;
};

