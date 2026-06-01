#include "../Program/stdafx.h"
#include "Factorial.h"

Factorial::Factorial(int n) : value(1)
{
	for (int i = 0;i < n;i++)
	{
		value *= i + 1;
	}
	cout << "[" << n << "]" << "Factorial = " << value << endl;
}

long long Factorial::Result() const
{
	return value;
}
