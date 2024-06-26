#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers;
	for (int i = 0; i < 3000000; i++)
		numbers.push_back(i);
	
	for (int i = 0; i < 3000000; i++)
		numbers.pop_back();

	// Much better!
	return 0;
}

//numbers.clear();
//std::cout << numbers.size() << std::endl;		// 0
//std::cout << numbers.capacity() << std::endl;	// 3,543,306
// Pro tip: if you delete all your code, you won't have any bugs!