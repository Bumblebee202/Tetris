#pragma once
class CheckBlockBase
{
public:
	CheckBlockBase();
	~CheckBlockBase();

	virtual bool CheckBlock(wchar_t** arr, FigureBase* figure) = 0;
};

