#include "../Program/stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Character 생성됨" << endl;
}

void Character::RecruitTeammate(const weak_ptr<Character> & sharedPointer)
{
	character = sharedPointer;
}

Character::~Character()
{
	cout << "Character 제거됨" << endl;
}
