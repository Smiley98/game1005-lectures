#include <iostream>
#include <vector>

// *Note that size and capacity are passed by reference*
void PushBack(int* numbers, int number, int& size, int& capacity)
{
	if (size + 1 >= capacity)
	{
		// Perform reallocation!
	}
	// Add number to the back of numbers.
}

int main()
{
	// 1. resize(5) called -- allocates memory for 5 ints
	int* numbers = new int[5];

	// 2. resize(10) called -- reallocation occurs (10 > 5)
	// 2a -- alloacte new memory for 10 ints
	// 2b -- copy previous 5 integers to new memory
	// 2c -- delete old memory
	// 2d -- point to new memory

	int* newNumbers = new int[10];	// 2a

	for (int i = 0; i < 5; i++)
		newNumbers[i] = numbers[i];	// 2b

	delete[] numbers;				// 2c
	numbers = newNumbers;			// 2d

	return 0;
}

// Pro tip: if you delete all your code, you won't have any bugs!