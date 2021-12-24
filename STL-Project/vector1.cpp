#include <iostream>
#include <vector>

int main()
{
	int value{}, total{};
	std::vector<int> scores;

	std::cout << "학생의 점수를 입력하세요. : ";
	while (std::cin >> value)
	{
		scores.push_back(value);
	}

	for (int e : scores)
	{
		total += e;
	}

	std::cout << scores.size() << "명의 학생들의 총 점수는 " << total << "점 입니다." << std::endl;
	std::cout << scores.size() << "명의 학생들의 평균 점수는 " << total / scores.size() << "점 입니다." << std::endl;
}