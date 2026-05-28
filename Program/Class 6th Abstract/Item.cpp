#include "../Program/stdafx.h"
#include "Item.h"

Item::Item()
{
	name = "Item";

	cout << name << "생성됨." << endl;
}

Item::~Item()
{
	cout << name << "제거됨." << endl;
}
