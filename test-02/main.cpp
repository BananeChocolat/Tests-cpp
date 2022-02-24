#include <iostream>
#include "fonction.hpp"

int main()
{
	std::cout << addition(5, 10) << std::endl;
	std::cout << addition(5.0f, 10.0f) << std::endl;
	std::cin.ignore();

	return 0;
}