#include <iostream>
#include <vector>

// Vector
// - ���ӵ� n���� ��
// - ������ Ÿ���� �����ؼ� Ư��ȭ���������
// - ��ü�� ������ ũ��� ���ҵ��� �������� ���� �����͸� ������ ����
// - �������� �ε���[]�� ���� : 0���� ����
// - �ε��� ���� [] (subscript operator)
// - ������ ���� - STL -> #include <vector>

int main()
{
	std::vector<int> v{ 2, 3, 1, 5, 6 };

	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << std::endl;
	}

	// Range-based loop : ���� ��� �ݺ���
	for (int x : v)		// [ 0 : size() )
	{
		std::cout << x << std::endl;
	}

	std::vector<int> v1;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.pop_back();

	std::cout << std::endl;

	for (int e : v1)
	{
		std::cout << e << std::endl;
	}
}