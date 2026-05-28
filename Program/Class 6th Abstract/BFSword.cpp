#include "../Program/stdafx.h"
#include "BFSword.h"

BFSword::BFSword()
{
	name = "B.F.Sword";
	AttackDamage = 40;
	cout << name << endl << "공격력 : " << AttackDamage << endl;
}

BFSword::~BFSword()
{
	cout << name << "제거됨." << endl;
}

void BFSword::Use()
{
	cout << name << "을(를) 장착하여 공격력이 " << AttackDamage << "만큼 증가했습니다." << endl;
}
