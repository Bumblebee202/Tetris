#pragma once
#include <Windows.h>

class FigureBase
{
protected:
	wchar_t _symbol;
	Coordinate* _coordArray;
	int _arraySize;
	Direction _dir;
public:
	FigureBase();
	FigureBase(wchar_t symbol, Coordinate* coordArray, int arraySize);
	virtual	~FigureBase();

	void SetCoordinates(Coordinate coords[], int size);
	Coordinate GetCoordinates(int index) const;
	wchar_t GetSymbol() const;
	int GetArraySize() const;
    virtual void Turn() = 0;
	void MoveRight();
	void MoveLeft();
	void MoveDown();
};

