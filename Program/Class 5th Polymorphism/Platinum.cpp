#include <iostream>
#include "Platinum.h"
using namespace std;
Platinum::Platinum()
{
	name = "플레티넘";
	weight = 1.5f;
	tier = 3;
}

void Platinum::Describe()
{
	cout << "이름 : " << name << endl << "무게 : " << weight << endl;
}

void Platinum::Promote()
{
	cout << name << "(으)로 승급했습니다." << endl;
}
