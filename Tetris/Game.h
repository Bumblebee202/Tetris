#pragma once
#include"pch.h"
#include"BaseApp.h"
#include<conio.h>

class Game : public BaseApp
{
	int _score;
	float _minTime;
	float _maxTime;
	wchar_t** _field;
	FigureBase* _figure;
	FigureBase* _nextFigure;
	CheckBlockBase* _checBlock;
	std::vector<CheckBlockBase*> _checks;
	std::vector<FigureCreatorBase*> _creators;
	float _second;
	bool _move;

	void ArrayInitialization();
	void ShowField();
	void Clear(FigureBase* figure, int x = 0, int y = 0);
	void SetFigurePosition(FigureBase* figure, int x = 0, int y = 0);
	void CheckHorizontalLine();
	void CheckVerticalLine();
	void DrawScore();
	FigureBase* FigureGeneration();
public:
	Game();
	~Game();

	virtual void KeyPressed(int btnCode);
	virtual void UpdateF(float deltaTime);
};

