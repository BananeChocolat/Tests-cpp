#include <iostream>

void ComputeTable(int table, int output[11])
{
	for (int i = 0; i <= 10; ++i)
	{
		output[i] = i * table;

	}
}

void DisplayTable(int output[11])
{
	for (int i = 0; i <= 10; ++i)
	{
		std::cout << output[i] << std::endl;
	}
	std::cin.ignore();
}

int main()
{
	int table[11] = {0};
	ComputeTable(5, table);
	DisplayTable(table);

	return 0;
}