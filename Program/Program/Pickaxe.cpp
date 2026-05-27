#include "stdafx.h"
#include "Pickaxe.h"

Pickaxe::Pickaxe()
{
	name = "Pickaxe";
	AttackDamage = 25;
	cout << name << endl << "공격력 : " << AttackDamage << endl;
}

Pickaxe::~Pickaxe()
{
	cout << name << "제거됨." << endl;
}

void Pickaxe::Use()
{
	cout << name << "을(를) 장착하여 공격력이 " << AttackDamage << "만큼 증가했습니다." << endl;
}
