#include "stdafx.h"
#include "Item.h"
#include "BFSword.h"
#include "Pickaxe.h"

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부에 있는 세부 사항을 숨기고,
	// 필요한 부분만 외부에서 사용할 수 있도록 단순화시키는 작업입니다.

	// Item* item = new BFSword();
	// 
	// item->Use();
	// 
	// delete item;
	// 
	// item = new Pickaxe();
	// 
	// item->Use();
	// 
	// delete item;

	Item* Inventory[5] = {nullptr, };

	Inventory[0] = new BFSword();
	Inventory[1] = new Pickaxe();
	Inventory[0]->Use();
	Inventory[1]->Use();

	for (int i = 0; i < 5;i++)
	{
		cout << "[" << i << "]번 슬롯";

		if (Inventory[i] != nullptr)
		{
			Inventory[i]->Use();
		}
		else
		{
			cout << "아이템이 존재하지 않습니다." << endl;
		}
	}

	for (int i = 0;i < 5;i++)
	{
		if (Inventory[i] != nullptr)
		{
			delete Inventory[i];
		}
	}

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.


#pragma endregion



	return 0;
}