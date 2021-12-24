#include <iostream>
#include <algorithm>
#include <forward_list>

// 동적크기의 순차 컨테이너
// - Sequential Access (Single Linked List)


int main()
{
	std::forward_list<int> list1{ 10, 10, 11, 15, 32 };
	std::forward_list<int> list2{ 100, 200, 300 };

	list1.splice_after(std::find(list1.begin(), list1.end(), 32), list2);

	for (auto e : list1)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;
	
	// C++14 : perdicate
	list1.sort(std::greater<int>());

	for (auto e : list1)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;

	list1.unique();
	for (auto e : list1)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;

	std::forward_list<int> list3{ 10, 30, 10, 30, 50, 30 };
	list3.unique();
	for (auto e : list3)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}