#pragma once
#include "FigureCreatorBase.h"
#include"../Figures/FigureQ.h"

class QCreator : public FigureCreatorBase
{
public:
	QCreator();
	~QCreator();

	virtual FigureBase* Create(wchar_t symbol) override;
};

