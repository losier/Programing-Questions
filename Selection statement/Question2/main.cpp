#include <iostream>

int Eligiblity(int age)
{
    if (age >= 18)
    {
        std::cout << "Eligible to vote" << std::endl;
    }
    else
    {
        std::cout << "Please come back in " << 18 - age << "year" << std::endl;
    }
}

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    Eligiblity(age);
    return 0;
}