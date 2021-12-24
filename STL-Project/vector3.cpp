#include <iostream>
#include <vector>

// std::vector
// - ���� ũ���� ���� �����̳�
// - Random Access
//   => ���� �������� �߰�/���Ű� ȿ������

int main()
{
	std::vector<int> v;

	// ������ ����/����
	v.push_back(3);
	v.push_back(10);
	v.push_back(20);

	for (auto e : v)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;

	std::cout << v[v.size()-1] << std::endl;
	v.pop_back();


	for (auto e : v)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}