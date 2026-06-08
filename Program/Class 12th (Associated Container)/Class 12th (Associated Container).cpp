#include "../Program/stdafx.h"
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.
#pragma region set
	//	set<const char*> a;
	//	
	//	a.insert("메이플스토리");
	//	a.insert("로스트아크");
	//	a.insert("던전앤파이터");
	//	a.insert("아이온2");
	//	a.insert("스타크래프트");
	//	a.insert("명조");
	//	a.insert("이환");
	//	a.insert("워크래프트3");
	//	a.insert("마비노기");
	//	
	//	for (const auto& n : a)
	//	{
	//		cout << n << endl;
	//	}
	//	
	//	cout << "set empty : " << a.empty() << endl;
	//	a.clear();
	//	
	//	cout << "set size : " << a.size() << endl;
	//	cout << "set max size : " << a.max_size() << endl;

#pragma endregion
#pragma region map
	//	map<string, int> npc;
	//	
	//	npc.insert({ "NPC1", 75 });
	//	npc.insert({ "NPC2", 25 });
	//	npc.insert({ "NPC3", 30 });
	//	npc.insert({ "NPC4", 50 });
	//	
	//	string name;
	//	
	//	cout << "--현재 호감도--" << endl;
	//	
	//	for (auto& pair : npc)
	//	{
	//		cout << pair.first << "의 호감도 : " << pair.second << endl;
	//	}
	//	
	//	cout << "[NPC1, NPC2, NPC3, NPC4]중에 입력해주세요." << endl;
	//	cin >> name;
	//	
	//	if (npc.count(name) > 0)
	//	{
	//		npc[name] += 20;
	//		for (auto & pair :npc)
	//		{
	//			pair.second -= 10;
	//		}
	//		cout << "--현재 호감도--" << endl;
	//	
	//		for (auto& pair : npc)
	//		{
	//			cout << pair.first << "의 호감도 : " << pair.second << endl;
	//		}
	//	}
	//	else
	//	{
	//		cout << name << "does not exist in the data." << endl;
	//	}

#pragma endregion
#pragma region unordered set
	//	unordered_set<const char*> a;
	//	
	//	a.reserve(4);
	//	
	//	a.max_load_factor(2.0f);
	//	
	//	a.insert("도란의 반지");
	//	a.insert("도란의 검");
	//	a.insert("도란의 방패");
	//	a.insert("도란의 빤스");
	//	a.insert("도란의 안경");
	//	a.insert("도란의 상의");
	//	
	//	cout << "Load Factor : " << a.load_factor() << endl;
	//	cout << "Bucket Count : " << a.bucket_count() << endl;
	//	
	//	if (a.find("도란의 빤스") != a.end())
	//	{
	//		cout << "the data exits..." << endl;
	//	}
	//	else
	//	{
	//		cout << "the data does not exits...";
	//	}
	//	
	//	a.erase("도란의 안경");
	//	
	//	for(const char* element : a)
	//	{
	//		cout << element << endl;
	//	}

#pragma region unordered map

	//	unordered_map<std::string, int> unordered_map;
	//	
	//	unordered_map["Potion"] = 2;
	//	unordered_map["Elixir"] = 1;
	//	unordered_map["Antidote"] = 2;
	//	unordered_map["Oil"] = 3;
	//	
	//	string name;
	//	
	//	std::cin >> name;
	//	
	//	if (unordered_map.find(name) != unordered_map.end() && unordered_map[name] > 0)
	//	{
	//	    unordered_map[name]--;
	//	
	//	    cout << name << " use " << endl;
	//	
	//	    if (unordered_map[name] <= 0)
	//	    {
	//	        unordered_map.erase(name);
	//	
	//	        cout << name << "All the " << name << " has been used" << endl;
	//	    }
	//	}
	//	else
	//	{
	//	    cout << "Doesn't Exist." << endl;
	//	}
	//	
	//	for (const auto & element : unordered_map)
	//	{
	//	    cout << "Name : " << element.first << " - Quantity : " << element.second << endl;
	//	}

#pragma endregion
#pragma endregion

#pragma endregion
	// 숙제 : 다중 상속 알아오기, 문제점 다이아몬드 상속, 가상 상속
	return 0;
}