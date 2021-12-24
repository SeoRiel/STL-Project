#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int>			v{ 1, 2, 3 };

	// 타입 추론
	// auto itr = v.begin();
	// 주의 : iterator는 vector의 index 값을 모름
	//std::vector<int>::iterator  itr = v.begin();
	//while (itr != v.end())
	//{
	//	std::cout << *itr << std::endl;
	//	itr++;
	//}

	//for (auto itr = v.begin(); itr != v.end(); itr++)
	//{
	//	std::cout << *itr;
	//}

	for (auto& e : v)
	{
		e = 0;
	}

	for (int e : v)
	{
		std::cout << e << " ";
	}
}