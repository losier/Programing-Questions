#include <iostream>

int StudentDiscount(int n)
{
    float discount;

    if (n <= 500)
    {
        discount = (5 * n) / 100;
        std::cout << "Your discount amount is: " << discount << std::endl;
    }
    else
    {
        discount = (10 * n) / 100;
        std::cout << "Your discount amount is: " << discount << std::endl;
    }
}

int NonStudentDiscount(int n)
{
    float discount;

    if (n <= 500)
    {
        discount = (2 * n) / 100;
        std::cout << "Your discount amount is: " << discount << std::endl;
    }
    else
    {
        discount = (8 * n) / 100;
        std::cout << "Your discount amount is: " << discount << std::endl;
    }
}

int main()
{
    char response;

    std::cout << "Are you a student? (y/n): ";
    std::cin >> response;

    if (response == 'y' || response == 'Y')
    {
        int n;
        std::cout << "Enter your bill amount: ";
        std::cin >> n;
        StudentDiscount(n);
    }
    else if (response == 'n' || response == 'N')
    {
        int n;
        std::cout << "Enter your bill amount: ";
        std::cin >> n;
        NonStudentDiscount(n);
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}