#include "../Program/stdafx.h"
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
	else if (clone.x == 0 || clone.y == 0)
	{
		cout << "무한" << endl;
	}
}

const Position& Position::operator++()
{
	this->x++;
	this->y++;

	return *this;
}

const Position& Position::operator--()
{
	this->x--;
	this->y--;

	return *this;
}

const Position& Position::operator++(int)
{
	Position clone(this->x,this->y);
	this->x++;
	this->y++;
	return clone;
}

const Position& Position::operator--(int)
{
	Position clone(this->x, this->y);
	this->x--;
	this->y--;
	return clone;
}

