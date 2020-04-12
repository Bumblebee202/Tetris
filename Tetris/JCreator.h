#pragma once
#include "FigureCreatorBase.h"
#include "FigureJ.h"

class JCreator : public FigureCreatorBase
{
public:
	JCreator();
	~JCreator();

	FigureBase* Create(wchar_t symbol);
};

