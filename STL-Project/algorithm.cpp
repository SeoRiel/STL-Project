#include <iostream>
#include <vector>
#include <algorithm>

// 컨테이너 (Container)
// 1. 순차 (Sequence Container)
// - std::array
// - std::vector			array의 동적 버전
// - std::list				Double Linked List
// - std::forward_list		Single Linked List
// - std::deque				양방향 Queue

// 2. 보조 (Container Adaptor)
// - std::stack				Stack
// - std::queue				Queue
// - std::priority_queue	우선 순위 Queue

// 3. 연관 (Associative Container)
// - std::set
// - std::multiset
// - std::map
// - std::multimap

// Overhead
// - 계산을 하는 것 이외에 추가로 발생하는 공간/시간복잡도

// Memory Access
// - Random Access	   : (Direct Access) Memory
// - Sequential Access : 카세트 테이프


// 내림차순 (Descending)
int IntCompare(const void* a, const void* b)
{
	int left = *static_cast<const int*>(a);
	int right = *static_cast<const int*>(b);

	// -1 : a > b
	if (left > right)
	{
		return 1;
	}
	// 1 : a < b
	else if (left < right)
	{
		return -1;
	}
	// 0 : a == b
	return 0;

	// return left - right;
}

int main()
{
	std::vector<int> v{ 4, 5, 1, 2, 3 };

	std::for_each(v.begin(), v.end(),
		[](int value)
		{
			std::cout << value << " ";
		});

	// 람다식
	//qsort(v.data(), v.size(), sizeof(int), 
	//	[](const void* a, const void* b)
	//{
	//		return *((int*)b) - *((int*)a);
	//});
	// qsort(v.data(), v.size(), sizeof(int), IntCompare);

	//for (const auto& e : v)
	//{
	//	std::cout << e << " ";
	//}
}