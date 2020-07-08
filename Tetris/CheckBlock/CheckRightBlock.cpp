#include "pch.h"
#include "CheckRightBlock.h"


CheckRightBlock::CheckRightBlock()
{
}


CheckRightBlock::~CheckRightBlock()
{
}

bool CheckRightBlock::CheckBlock(wchar_t** arr, FigureBase* figure)
{
	Coordinate coord1;
	for (int i = 0; i < figure->GetArraySize(); i++)
	{
		coord1 = figure->GetCoordinates(i);
		for (int j = 0; j < figure->GetArraySize(); j++)
		{
			if (i == j)
				continue;
			else if (coord1.x + 1 == 16)
				return true;
			else if (arr[coord1.x + 1][coord1.y] != L' ')
				return true;
		}
	}
	return false;
}
