#include "stdafx.h"
#include "Position.h"

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;

	cout << "X : " << x << "Y : " << y << endl;
}

const Position& Position::operator+(const Position& clone)
{
	return Position(this->x + clone.x, this->y + clone.y);
}

const Position& Position::operator-(const Position& clone)
{
	return Position(this->x - clone.x, this->y - clone.y);
}

const Position& Position::operator*(const Position& clone)
{
	return Position(this->x * clone.x, this->y * clone.y);
}

const Position& Position::operator/(const Position& clone)
{
	if (clone.x != 0 && clone.y != 0)
	{
		return Position(this->x / clone.x, this->y / clone.y);
	}
	else
	{
		cout << "무한, 무한" << endl;
	}
}
