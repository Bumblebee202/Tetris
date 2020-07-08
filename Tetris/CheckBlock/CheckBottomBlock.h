#pragma once
#include "CheckBlockBase.h"

class CheckBottomBlock : public CheckBlockBase
{
public:
	CheckBottomBlock();
	~CheckBottomBlock();

	virtual bool CheckBlock(wchar_t ** arr, FigureBase * figure) override;
};

