#include "pch.h"
#include "CheckBottomBlock.h"


CheckBottomBlock::CheckBottomBlock()
{
}


CheckBottomBlock::~CheckBottomBlock()
{
}

bool CheckBottomBlock::CheckBlock(wchar_t ** arr, FigureBase * figure)
{
	Coordinate coord1;
	for (int i = 0; i < figure->GetArraySize(); i++)
	{
		Coordinate coord1 = figure->GetCoordinates(i);
		for (int j = 0; j < figure->GetArraySize(); j++)
		{
			if (i == j)
				continue;
			else if (coord1.y + 1 == 21)
				return true;
			else if (arr[coord1.x][coord1.y + 1] != L' ')
				return true;
		}
	}
	return false;
}
