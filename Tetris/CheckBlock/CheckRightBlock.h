#pragma once
#include "CheckBlockBase.h"

class CheckRightBlock :	public CheckBlockBase
{
public:
	CheckRightBlock();
	~CheckRightBlock();

	// Inherited via CheckBlockBase
	virtual bool CheckBlock(wchar_t** arr, FigureBase* figure) override;
};

