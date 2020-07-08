#pragma once
#include "FigureCreatorBase.h"
#include "LCreator.h"

class LCreator : public FigureCreatorBase
{
public:
	LCreator();
	~LCreator();

	virtual FigureBase * Create(wchar_t symbol) override;

};

