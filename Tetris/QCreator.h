#pragma once
#include "FigureCreatorBase.h"
#include"FigureQ.h"

class QCreator : public FigureCreatorBase
{
public:
	QCreator();
	~QCreator();

	virtual FigureBase* Create(wchar_t symbol) override;
};

