#include <iostream>
#include "Emerald.h"
using namespace std;

Emerald::Emerald()
{
	name = "에메랄드";
	weight = 1.75f;
	transparency = 5.5f;
}

void Emerald::Describe()
{
	cout << "이름 : " << name << endl << "무게 : " << weight << endl << "저항력 : " << transparency << endl;
}
