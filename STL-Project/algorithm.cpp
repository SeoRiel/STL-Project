#include <iostream>
#include <vector>
#include <algorithm>

// �����̳� (Container)
// 1. ���� (Sequence Container)
// - std::array
// - std::vector			array�� ���� ����
// - std::list				Double Linked List
// - std::forward_list		Single Linked List
// - std::deque				����� Queue

// 2. ���� (Container Adaptor)
// - std::stack				Stack
// - std::queue				Queue
// - std::priority_queue	�켱 ���� Queue

// 3. ���� (Associative Container)
// - std::set
// - std::multiset
// - std::map
// - std::multimap

// Overhead
// - ����� �ϴ� �� �̿ܿ� �߰��� �߻��ϴ� ����/�ð����⵵

// Memory Access
// - Random Access	   : (Direct Access) Memory
// - Sequential Access : ī��Ʈ ������


// �������� (Descending)
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

	// ���ٽ�
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