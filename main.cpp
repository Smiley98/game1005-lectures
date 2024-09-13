#include <iostream>
#define MAKE_STRING(x) #x
#define CONCAT(x, y) x ## y

int main()
{
	int x = 1;
	int* xAddr = &x;
	std::cout << "Value of x is: " << x << std::endl;

	x++;
	std::cout << "Value of x is: " << x << std::endl;

	*xAddr = x + 1;
	std::cout << "Value of x is: " << x << std::endl;

	// Bonus points: print the names of your variables rawr xD :p
	printf("%s\n", MAKE_STRING(xAddr));
	return 0;
}
