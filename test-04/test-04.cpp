#include <iostream>

void foo(int* a)
{
	if (a != nullptr)
	{
		*a = 50;
	}
}

int main()
{
	int a = 0;
	float b = 0;
	
	int* p_int = &a;
	float* p_float = &b;

	foo(nullptr);

	std::cout << "Valeur de a = " << a << std::endl;
	std::cout << "Valeur de b = " << b << std::endl;

	std::cout << "Adresse de a = " << p_int << std::endl;
	std::cout << "Adresse de b = " << p_float << std::endl;

	std::cout << "Value de b = " << *p_int << std::endl;
	std::cout << "Value de b = " << *p_float << std::endl;


	std::cin.ignore();
	return 0;
}