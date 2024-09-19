#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers;

	for (int i = 0; i < 3000000; i++)
		numbers.push_back(i);

	int front = numbers.front();
	int back = numbers.back();

	for (int i = 0; i < 3000000; i++)
		numbers.pop_back();

	return 0;
}
