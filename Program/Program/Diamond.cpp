#include <iostream>
#include "Diamond.h"
using namespace std;

Diamond::Diamond()
{
	name = "다이아몬드";
	weight = 3.33f;
	hardness = 9.0f;
}

void Diamond::Describe()
{
	cout << "이름 : " << name << endl << "무게 : " << weight << endl << "경도 : " << hardness << endl;
}
