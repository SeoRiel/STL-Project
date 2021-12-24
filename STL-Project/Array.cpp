#include <iostream>
#include <array>

int main()
{
	std::array<int, 4> intArray{ 0, 1, 2, 3 };

	for (auto& e : intArray)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;

	for (std::array<int, 4>::iterator iter = intArray.begin(); iter != intArray.end(); ++iter)
	{
		std::cout << *iter << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < intArray.size(); ++i)
	{
		std::cout << intArray[i] << std::endl;
	}
}