#include <iostream>
int main()
{
	int x = 1;
	int* xAddr = &x;
	std::cout << "Value of x is: " << x << std::endl;
	*xAddr = x + 1;
	std::cout << "Value of x is: " << *xAddr << std::endl;
	return 0;
}
