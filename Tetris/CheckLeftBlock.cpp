#include "pch.h"
#include "CheckLeftBlock.h"


CheckLeftBlock::CheckLeftBlock()
{
}


CheckLeftBlock::~CheckLeftBlock()
{
}

bool CheckLeftBlock::CheckBlock(wchar_t** arr, FigureBase* figure)
{
	Coordinate coord1;
	for (int i = 0; i < figure->GetArraySize(); i++)
	{
		coord1 = figure->GetCoordinates(i);
		for (int j = 0; j < figure->GetArraySize(); j++)
		{
			if (i == j)
				continue;
			else if (coord1.x - 1 == 0)
				return true;
			else if (arr[coord1.x - 1][coord1.y] != L' ')
				return true;
		}
	}
	return false;
}
