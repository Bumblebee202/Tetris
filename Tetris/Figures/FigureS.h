#pragma once
#include "FigureBase.h"

class FigureS :	public FigureBase
{
	void Turn(int px, int py);
public:
	FigureS();
	FigureS(wchar_t symbol, Coordinate* coordArray, int arraySize);
	~FigureS();

	virtual void Turn() override;
};

