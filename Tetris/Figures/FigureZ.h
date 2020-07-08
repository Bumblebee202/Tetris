#pragma once
#include "FigureBase.h"

class FigureZ :	public FigureBase
{
	void Turn(int px, int py, int x, int y);
public:
	FigureZ();
	FigureZ(wchar_t symbol, Coordinate* coordArray, int arraySize);
	~FigureZ();

	virtual void Turn() override;
};

