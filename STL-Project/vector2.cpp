#include <iostream>
#include <vector>

// Vector
// - 연속된 n개의 값
// - 원소의 타입을 지정해서 특수화시켜줘야함
// - 객체는 원소의 크기와 원소들의 시퀀스에 대한 포인터를 가지고 있음
// - 시퀀스는 인덱스[]로 접근 : 0부터 시작
// - 인덱스 접근 [] (subscript operator)
// - 벡터의 선언 - STL -> #include <vector>

int main()
{
	std::vector<int> v{ 2, 3, 1, 5, 6 };

	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << std::endl;
	}

	// Range-based loop : 범위 기반 반복문
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