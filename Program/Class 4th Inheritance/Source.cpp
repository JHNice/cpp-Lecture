#include <iostream>
using namespace std;

class Consumable
{
private:
	const char* name = nullptr;

public:
	Consumable()
	{
		cout << "Consumable 생성됨" << endl;
	}

	~Consumable()
	{
		cout << "Consumable 소멸됨" << endl;
	}
};

class Potion : public Consumable
{
private:
	int stamina;

public:
	Potion()
	{
		cout << "Potion 생성됨" << endl;
	}
	~Potion()
	{
		cout << "Potion 소멸됨" << endl;
	}
};

int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정하는 기능입니다.

	Consumable consumable;

	Potion potion;
	cout << "Size of Consumable : " << sizeof(Consumable) << endl;
	cout << "Size of Potion : " << sizeof(Potion) << endl;

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을
	// 사용할 수 없으며, 하위 클래스는 상위 클래스의 메모리가 포함
	// 된 상태로 메모리의 크기가 결정됩니다.

#pragma endregion
	// 260519 숙제 공백 기본 클래스 최적화
	return 0;
}