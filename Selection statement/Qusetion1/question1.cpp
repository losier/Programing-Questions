#include <iostream>

int EvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        std::cout << n << " is Even" << std::endl;
    }
    else
    {
        std::cout << n << " is Odd" << std::endl;
    }
}

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;
    EvenOrOdd(num);
    return 0;
}