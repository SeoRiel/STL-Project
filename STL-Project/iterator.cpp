#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int>			v{ 1, 2, 3 };

	// Ÿ�� �߷�
	// auto itr = v.begin();
	// ���� : iterator�� vector�� index ���� ��
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