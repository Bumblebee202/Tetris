#pragma once
#include "FigureCreatorBase.h"
#include "../Figures/FigureT.h"

class TCreator : public FigureCreatorBase
{
public:
	TCreator();
	~TCreator();

	virtual FigureBase * Create(wchar_t symbol) override;
};

