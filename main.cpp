#include <iostream>
#include <vector>

void PushBack(int*& numbers, int number, int& size, int& capacity)
{
	if (size + 1 >= capacity)
	{
		// Perform reallocation
	}
	// Add number to the back of numbers
}

void PopBack(int& size)
{
	// Implementation is up to you. Modify function parameters as you see fit!
	// I recommend you simply decrement size (since size is independent of capacity).
}

int main()
{
	int size = 0;
	int capacity = 3;
	int* numbers = new int[capacity];
	for (int i = 0; i < capacity; i++)
	{
		numbers[i] = i;
		size++;
	}

	// Should print "1, 2, 3, 420"
	PushBack(numbers, 420, size, capacity);
	for (int i = 0; i < size; i++)
		std::cout << numbers[i] << std::endl;

	// Should print "1, 2, 3"
	PopBack(size);
	for (int i = 0; i < size; i++)
		std::cout << numbers[i] << std::endl;

	// Tip: use the debugger to inspect local variables and memory!
	// Tip: if you don't have any code, you don't have any bugs. ;)
	return 0;
}
