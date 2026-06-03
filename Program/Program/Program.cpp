#include "stdafx.h"
#include <vector>
#include <list>

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나
	// 규칙이 없는 컨테이너입니다.

#pragma region vector container
	//	std::vector<int> a; // 메모리 크기가 부족하면 1.5배씩 늘어남
	//	a.reserve(5); // 메모리 크기 미리 정하기
	//	
	//	for (int i = 1;i <= 5;i++)
	//	{
	//		a.push_back(i * 10);
	//		cout << a[i - 1] << endl;
	//		cout << a.capacity() << endl;
	//	}
	//	
	//	a.pop_back();
	//	cout << endl;
	//	
	//	for (int i = 1;i <= a.size();i++)
	//	{
	//		cout << a[i - 1] << endl;
	//	}
	//	cout << a.capacity() << endl;
	//	
	//	a.clear();
	//	
	//	cout << "vector size : " << a.size() << endl;
	//	cout << "vector capacity : " << a.capacity() << endl;
#pragma endregion
#pragma region list container
	std::list<int> a;

	a.push_front(10);
	a.push_back(20);
	a.push_front(5);
	a.push_back(40);

	a.pop_front();

	a.push_front(1);

	a.remove(30);

	for (const elem : a)
	{
		cout << elem << endl;
	}

#pragma endregion


#pragma endregion


	return 0;
}