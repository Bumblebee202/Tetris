// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#include <algorithm>
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

#include"Figures/FigureBase.h"
#include"Figures/FigureI.h"
#include"Figures/FigureJ.h"
#include"Figures/FigureL.h"
#include"Figures/FigureQ.h"
#include"Figures/FigureS.h"
#include"Figures/FigureT.h"
#include"Figures/FigureZ.h"
#include"FactoryMethod/FigureCreatorBase.h"
#include"FactoryMethod/ICreator.h"
#include"FactoryMethod/JCreator.h"
#include"FactoryMethod/LCreator.h"
#include"FactoryMethod/TCreator.h"
#include"FactoryMethod/QCreator.h"
#include"FactoryMethod/SCreator.h"
#include"FactoryMethod/ZCreator.h"
#include"CheckBlock/CheckBlockBase.h"
#include"CheckBlock/CheckBottomBlock.h"
#include"CheckBlock/CheckLeftBlock.h"
#include"CheckBlock/CheckRightBlock.h"

// TODO: add headers that you want to pre-compile here

#endif //PCH_H
