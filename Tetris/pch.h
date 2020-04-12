// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#include<algorithm>
#include <ctime>

struct Coordinate
{
	int x;
	int y;
};

enum Direction
{
	Top,
	Right,
	Down,
	Left
};

#include"FigureBase.h"
#include"FigureI.h"
#include"FigureJ.h"
#include"FigureL.h"
#include"FigureQ.h"
#include"FigureS.h"
#include"FigureT.h"
#include"FigureZ.h"
#include"QCreator.h"
#include"ICreator.h"
#include"JCreator.h"
#include"LCreator.h"
#include"TCreator.h"
#include"SCreator.h"
#include"ZCreator.h"
#include"CheckBlockBase.h"
#include"CheckLeftBlock.h"
#include"CheckRightBlock.h"
#include"CheckBottomBlock.h"

// TODO: add headers that you want to pre-compile here

#endif //PCH_H
