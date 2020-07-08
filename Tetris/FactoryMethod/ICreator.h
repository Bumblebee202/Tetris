#pragma once
#include"FigureCreatorBase.h"
#include"../Figures/FigureI.h"

class ICreator : public FigureCreatorBase
{
public:
	ICreator();
	~ICreator();

	virtual FigureBase* Create(wchar_t symbol) override;
};

