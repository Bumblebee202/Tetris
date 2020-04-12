#pragma once
#include "FigureCreatorBase.h"
#include "FigureT.h"

class TCreator : public FigureCreatorBase
{
public:
	TCreator();
	~TCreator();

	virtual FigureBase * Create(wchar_t symbol) override;
};

