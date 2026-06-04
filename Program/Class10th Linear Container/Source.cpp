#include "stdafx.h"
#include <vector>
#include <list>
#include <deque>

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
	//	std::list<int> a;
	//	
	//	a.push_front(10);
	//	a.push_back(20);
	//	a.push_back(30);
	//	
	//	a.pop_front();
	//	
	//	a.push_front(1);
	//	
	//	a.remove(20);
	//	
	//	for (const int & n : a)
	//	{
	//		cout << n << endl;
	//	}
	//	
	//	a.assign(3, 5);
	//	
	//	cout << "a size : " << a.size() << endl;
	//	
	//	for (const int& n : a)
	//	{
	//		cout << n << endl;
	//	}

#pragma endregion
#pragma region deque container
	//	std::deque<int> a;
	//	
	//	a.push_back(10);
	//	a.push_back(20);
	//	a.push_back(30);
	//	a.push_front(5);
	//	a.push_front(1);
	//	
	//	a.pop_back();
	//	a.pop_front();
	//	
	//	for (const int& n : a)
	//	{
	//		cout << n << endl;
	//	}
	//	
	//	for (int i = 0;i < a.size();i++)
	//	{
	//		cout << a[i] << endl;
	//	}
	//	
	//	for (int i = 0;i < a.size();i++)
	//	{
	//		cout << a.at(i) << endl; // 범위 검사
	//	}
#pragma endregion
#pragma endregion


	return 0;
}