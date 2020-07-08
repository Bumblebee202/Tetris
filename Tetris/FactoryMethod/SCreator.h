#pragma once
#include "FigureCreatorBase.h"
#include"../Figures/FigureS.h"

class SCreator : public FigureCreatorBase
{
public:
	SCreator();
	~SCreator();

	virtual FigureBase * Create(wchar_t symbol) override;
};

