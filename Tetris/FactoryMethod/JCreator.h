#pragma once
#include "FigureCreatorBase.h"
#include "../Figures/FigureJ.h"

class JCreator : public FigureCreatorBase
{
public:
	JCreator();
	~JCreator();

	FigureBase* Create(wchar_t symbol);
};

