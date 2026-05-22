#include <iostream>
#include "Platinum.h"
using namespace std;
Platinum::Platinum()
{
	tier = 3;
}

void Platinum::Promote()
{
	cout << name << "(으)로 승급했습니다." << endl;
}
