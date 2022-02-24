#include <iostream>

void DisplayArray(int* array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << std::endl;
	}
}


int main()
{
	int number = 0;
	std::cin >> number;
	std::cin.ignore();
	
	int* array = new int[number];

	for (int i = 0; i < number; ++i)
	{
		array[i] = i;
	}
	
	DisplayArray(array, number);
	
	std::cin.ignore();
	
	delete[] array;


	return 0;
}