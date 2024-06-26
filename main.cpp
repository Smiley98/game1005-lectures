#include <iostream>
void PrintNumbers(int numbers[])
{
	for (int i = 0; i < 3; i++)
		std::cout << numbers[i] << std::endl;
}

void PrintNumbers(int* numbers)
{
	for (int i = 0; i < 3; i++)
		std::cout << numbers[i] << std::endl;
}

int main()
{
	int numbers[]{ 1, 2, 3 };
	PrintNumbers(numbers);
	return 0;
}
