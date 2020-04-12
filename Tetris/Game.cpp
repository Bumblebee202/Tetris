#include "pch.h"
#include "Game.h"

Game::Game() : BaseApp(25, 26)
{
	_minTime = 0.45f; 
	_maxTime = 0.55f;
	_second = 0;
	_score = 0;
	_move = true;

	_creators.push_back(new ICreator);
	_creators.push_back(new JCreator);
	_creators.push_back(new LCreator);
	_creators.push_back(new QCreator);
	_creators.push_back(new SCreator);
	_creators.push_back(new ZCreator);
	_creators.push_back(new TCreator);

	_checks.push_back(new CheckLeftBlock());
	_checks.push_back(new CheckRightBlock());
	_checks.push_back(new CheckBottomBlock());

	_figure = FigureGeneration();
	_nextFigure = FigureGeneration();

	_field = new wchar_t*[X_SIZE];
	for (int count = 0; count < X_SIZE; count++)
		_field[count] = new wchar_t[Y_SIZE];

	ArrayInitialization();
	SetFigurePosition(_figure);
	SetFigurePosition(_nextFigure, 13, 1);
	
	ShowField();
}

Game::~Game()
{
	delete _figure;
	delete _figure;
	for (auto&& elem : _creators)
		delete elem;
	for (auto&& elem : _checks)
		delete elem;
	for (int count = 0; count < X_SIZE; count++)
		delete[]_field[count];
}

void Game::ArrayInitialization()
{
	for (int x = 0; x < X_SIZE; x++)
	{
		for (int y = 0; y < Y_SIZE; y++)
		{
			if ((x >= 1 && x < X_SIZE - 1) && (y >= 1 && y < Y_SIZE - 1))
			{
				if (x == 16 && (y >= 1 && y < 21))
					_field[x][y] = L'█';
				else if (y == 21)
					_field[x][y] = L'█';
				else
					_field[x][y] = L' ';
			}
			else
				_field[x][y] = L'█';
		}
	}
	DrawScore();
}

void Game::ShowField()
{
	for (int x = 0; x < X_SIZE; x++)
		for (int y = 0; y < Y_SIZE; y++)
			SetChar(x, y, _field[x][y]);
}

void Game::Clear(FigureBase* figure, int x, int y)
{
	for (int i = 0; i < _figure->GetArraySize(); i++)
	{
		Coordinate coord = figure->GetCoordinates(i);
		_field[coord.x + x][coord.y + y] = L' ';
		SetChar(coord.x + x, coord.y + y, _field[coord.x + x][coord.y + y]);
	}
}

void Game::SetFigurePosition(FigureBase* figure, int x, int y)
{
	for (int i = 0; i < figure->GetArraySize(); i++)
	{
		Coordinate coord = figure->GetCoordinates(i);
		_field[coord.x + x][coord.y + y] = figure->GetSymbol();
		SetChar(coord.x + x, coord.y + y, _field[coord.x + x][coord.y + y]);
	}
}

void Game::CheckHorizontalLine()
{
	Coordinate coord;
	bool isLine = false;
	for (int i = 0; i < _figure->GetArraySize(); i++)
	{
		if (isLine)
			i = 0;
		coord = _figure->GetCoordinates(i);
		for (int x = 1; x < 16; x++)
		{
			if (_field[x][coord.y] == L'◙')
				isLine = true;
			else
			{
				isLine = false;
				break;
			}
		}
		if (isLine)
		{
			for (int x = 1; x < 16; x++)
				for (int y = 19; y > 1; y--)
					_field[x][y + 1] = _field[x][y];
			_score += 100;
		}
	}
	DrawScore();
}

void Game::CheckVerticalLine()
{
	Coordinate coord;
	bool isLine = false;
	for (int i = 0; i < _figure->GetArraySize(); i++)
	{
		coord = _figure->GetCoordinates(i);
		for (int y = 1; y < 20; y++)
		{
			if (_field[coord.x][y] == L'◙')
				isLine = true;
			else
			{
				isLine = false;
				break;
			}
		}
		if (isLine)
			exit(0);
	}
}

void Game::DrawScore()
{
	std::wstring str = L"Score: " + std::to_wstring(_score);
	for (int i = 0; i < str.length(); i++)
		_field[i + 3][23] = str[i];
}

FigureBase * Game::FigureGeneration()
{
	int index = std::rand() % _creators.size();
	return _creators[index]->Create(L'◙');
}

void Game::KeyPressed(int btnCode)
{
	if (btnCode == 224)
		btnCode = _getch();

	if (_move)
	{
		switch (btnCode)
		{
		case 75:
			Clear(_figure);
			_checBlock = _checks[0];
			if (_checBlock->CheckBlock(_field, _figure))
			{
				SetFigurePosition(_figure);
				break;
			}
			_figure->MoveLeft();
			SetFigurePosition(_figure);
			ShowField();
			break;
		case 77:
			Clear(_figure);
			_checBlock = _checks[1];
			if (_checBlock->CheckBlock(_field, _figure))
			{
				SetFigurePosition(_figure);
				break;
			}
			_figure->MoveRight();
			SetFigurePosition(_figure);
			ShowField();
			break;
		case 80:
			_move = false;
			_minTime = 0.05f;
			_maxTime = 0.15f;
			_second = 0;
			break;
		case 32:
			Clear(_figure);
			Coordinate oldCoord[4];
			for (int i = 0; i < _figure->GetArraySize(); i++)
				oldCoord[i] = _figure->GetCoordinates(i);

			_checBlock = _checks[0];
			if (_checBlock->CheckBlock(_field, _figure))
			{
				_figure->SetCoordinates(oldCoord, 4);
				SetFigurePosition(_figure);
				ShowField();
				break;
			}
			_checBlock = _checks[1];
			if (_checBlock->CheckBlock(_field, _figure))
			{
				_figure->SetCoordinates(oldCoord, 4);
				SetFigurePosition(_figure);
				ShowField();
				break;
			}
			_checBlock = _checks[2];
			if (_checBlock->CheckBlock(_field, _figure))
			{
				_figure->SetCoordinates(oldCoord, 4);
				SetFigurePosition(_figure);
				ShowField();
				break;
			}

			_figure->Turn();
			SetFigurePosition(_figure);
			ShowField();
			break;
		}
	}
}

void Game::UpdateF(float deltaTime)
{
	_second += deltaTime;
	if (_second >= _minTime && _second <= _maxTime)
	{
		Clear(_figure);
		_checBlock = _checks[2];
		if (_checBlock->CheckBlock(_field, _figure))
		{
			SetFigurePosition(_figure);
			Clear(_nextFigure, 13, 1);
			CheckHorizontalLine();
			CheckVerticalLine();
			delete _figure;
			_figure = _nextFigure;
			for (int i = 0; i < _figure->GetArraySize(); i++)
			{
				Coordinate coord = _figure->GetCoordinates(i);
				if (_field[coord.x][coord.y] == L'◙')
					exit(0);
			}
			_nextFigure = FigureGeneration();
			SetFigurePosition(_figure);
			SetFigurePosition(_nextFigure, 13, 1);
			_second = 0;
			_minTime = 0.45f;
			_maxTime = 0.55f;
			_move = true;
			return;
		}
		_figure->MoveDown();
		SetFigurePosition(_figure);
		ShowField();
		_second = 0;
	}
}


