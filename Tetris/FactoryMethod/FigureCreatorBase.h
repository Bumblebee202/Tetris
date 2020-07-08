#pragma once
#include"../Figures/FigureBase.h"

class FigureCreatorBase
{
public:
	FigureCreatorBase();
	virtual	~FigureCreatorBase();

	virtual FigureBase* Create(wchar_t symbol) = 0;
};

