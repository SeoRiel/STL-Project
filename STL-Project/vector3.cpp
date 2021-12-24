#include <iostream>
#include <vector>

// std::vector
// - 동적 크기의 순차 컨테이너
// - Random Access
//   => 가장 마지막에 추가/제거가 효율적임

int main()
{
	std::vector<int> v;

	// 끝에서 삽입/삭제
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