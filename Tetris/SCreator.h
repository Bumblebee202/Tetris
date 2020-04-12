#pragma once
#include "FigureCreatorBase.h"
#include"FigureS.h"

class SCreator : public FigureCreatorBase
{
public:
	SCreator();
	~SCreator();

	virtual FigureBase * Create(wchar_t symbol) override;
};

