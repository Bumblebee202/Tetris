#pragma once
#include "CheckBlockBase.h"

class CheckLeftBlock :	public CheckBlockBase
{
public:
	CheckLeftBlock();
	~CheckLeftBlock();

	virtual bool CheckBlock(wchar_t ** arr, FigureBase* figure) override;
};

