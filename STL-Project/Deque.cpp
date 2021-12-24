#include <iostream>
#include <algorithm>
#include <deque>

int main()
{
	std::deque<int> deq{ 1, 3, 5, 7, 9 };
	std::deque<int> queue(10);

	deq.pop_back();
	deq.pop_front();

	std::deque<int>::iterator iter = deq.end();

	queue.insert(deq.end(), 1);

	for (auto& e : deq)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;
} 