#include <iostream>
#include <vector>

int main()
{
	int value{}, total{};
	std::vector<int> scores;

	std::cout << "�л��� ������ �Է��ϼ���. : ";
	while (std::cin >> value)
	{
		scores.push_back(value);
	}

	for (int e : scores)
	{
		total += e;
	}

	std::cout << scores.size() << "���� �л����� �� ������ " << total << "�� �Դϴ�." << std::endl;
	std::cout << scores.size() << "���� �л����� ��� ������ " << total / scores.size() << "�� �Դϴ�." << std::endl;
}