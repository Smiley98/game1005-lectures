#include <iostream>
#include <vector>
#include <limits>

void HurtMyComputer()
{
	int* numbers = new int[INT_MAX];
}

int* PotentiallyHurtMyComputer()
{
	int* numbers = new int[INT_MAX];
	return numbers;
}

int main()
{
	// "Leak" 8 gigabytes
	HurtMyComputer();

	// Store the address of our 8 gigabyte allocation so we can (ideally) delete it later!
	int* memory = PotentiallyHurtMyComputer();
	delete[] memory;
	return 0;
}
