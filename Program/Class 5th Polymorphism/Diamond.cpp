#include <iostream>
#include "Diamond.h"
using namespace std;

Diamond::Diamond()
{
	name = "다이아몬드";
	weight = 3.33f;
	hardness = 9.0f;
	tier = 1;
}

void Diamond::Describe()
{
	cout << "이름 : " << name << endl << "무게 : " << weight << endl << "경도 : " << hardness << endl;
}

void Diamond::Promote()
{
	cout << name << "(으)로 승급했습니다." << endl;
}

Diamond::~Diamond()
{
	cout << "Realease Diamond" << endl;
}
