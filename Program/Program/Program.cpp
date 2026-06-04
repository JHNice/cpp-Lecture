#include "stdafx.h"
#include <stack>
#include <queue>

int main()
{
#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여 만든 기능이
	// 제한되거나 변경된 컨테이너입니다.

#pragma region stack container
	//	stack<int> a;
	//	
	//	a.push(10);
	//	a.push(20);
	//	a.push(30);
	//	a.push(40);
	//	a.push(50);
	//	
	//	int aSize = a.size();
	//	
	//	for (int i = 0;i < aSize;i++)
	//	{
	//		cout << a.top() << endl;
	//		a.pop();
	//	}

#pragma endregion
#pragma region queue container
	//	queue<int> a;
	//	
	//	a.push(10);
	//	a.push(20);
	//	a.push(30);
	//	a.push(40);
	//	a.push(50);
	//	
	//	int aSize = a.size();
	//	
	//	for (int i = 0;i < aSize;i++)
	//	{
	//		cout << a.front() << endl;
	//		a.pop();
	//	}
#pragma endregion

#pragma endregion

	return 0;
}