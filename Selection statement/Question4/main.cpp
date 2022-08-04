#include <iostream>

int main()
{
    int num;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;

    if (num > 0)
    {
        std::cout << num << " is a positive number." << std::endl;
    }
    else if (num < 0)
    {
        std::cout << num << " is a negative number." << std::endl;
    }
    else
    {
        std::cout << num << " is zero." << std::endl;
    }
}