#pragma once
#include "FigureCreatorBase.h"
#include "FigureZ.h"

class ZCreator : public FigureCreatorBase
{
public:
	ZCreator();
	~ZCreator();

	virtual FigureBase * Create(wchar_t symbol) override;
};

