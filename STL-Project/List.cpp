#include <iostream>
#include <algorithm>
#include <list>

int main()
{
	std::list<int> list1{ 1, 3, 2, 4 };
	std::list<int> list2{ 5, 7, 6, 1 };

	// list1.splice(list1.end(), list2);

	// 정렬 필수
	list1.sort();
	list2.sort();
	//list1.unique();

	list1.merge(list2);

	for (auto e : list1)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;

	//auto iter = std::find(list1.begin(), list1.end(), 4);
	//std::list<int>::iterator iterator = std::find(list1.begin(), list1.end(), 4);

	//std::cout << *iter << std::endl;

	//for (auto& e : list1)
	//{
	//	std::cout << e << " ";
	//}
}