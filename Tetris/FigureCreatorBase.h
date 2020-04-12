#pragma once
#include"FigureBase.h"

class FigureCreatorBase
{
public:
	FigureCreatorBase();
	virtual	~FigureCreatorBase();

	virtual FigureBase* Create(wchar_t symbol) = 0;
};

