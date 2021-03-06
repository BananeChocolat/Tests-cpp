#include <iostream>

int pow_custom(int number, int n);
int addition(int a, int b);

int main()
{
    std::cout << pow_custom(2, 2) << std::endl; // 2^2
    std::cout << pow_custom(3, 3) << std::endl; // 3^3
    std::cout << addition(5, 10) << std::endl;  // 5+10
    std::cin.ignore();

    return 0;
}

int addition(int a, int b)
{
    return a + b;
}

int pow_custom(int number, int n)
{
    int result = 1;

    for (int i = 0; i < n; ++i)
    {
        result *= number;
    }

    return result;
}