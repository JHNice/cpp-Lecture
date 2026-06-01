#include "stdafx.h"
#include "Image.h"

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를 해주며,
	// 경계 확인과 같은 추가 기능을 제고해주는 포인터입니다.

	int* p = nullptr;
	{
		int* r = new int;
		p = r;
	}
	delete p;

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수
	// 있도록 되어 있는 포인터입니다.

	unique_ptr<Image> image = make_unique<Image>();

	unique_ptr<Image> sprite = std::move(image); // 유니크는 하나만 가리킬 수 있음, std::move로 소유권 이전

#pragma endregion


#pragma endregion

	return 0;
}