#include <iostream>

int SquareAndCube()
{
    float num, square, cude;
    std::cout << "Enter a number: ";
    std::cin >> num;

    square = num * num;
    cude = num * num * num;

    std::cout << "Square of " << num << " is " << square << std::endl;
    std::cout << "Cube of " << num << " is " << cude << std::endl;
    return 0;
}

int Leap()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << year << " is a leap year" << std::endl;
            }
            else
            {
                std::cout << year << " is not a leap year" << std::endl;
            }
        }
        else
        {
            std::cout << year << " is a leap year" << std::endl;
        }
    }
    else
    {
        std::cout << year << " is not a leap year" << std::endl;
    }
    return 0;
}

int main()
{
    int choice;

    std::cout << "Choose an option: \n"
              << std::endl;
    std::cout << "1. Square and cube of a number\n"
              << std::endl;
    std::cout << "2. Leap year\n"
              << std::endl;
    std::cin >> choice;

    if (choice == 1)
    {
        SquareAndCube();
    }
    else if (choice == 2)
    {
        Leap();
    }
    else
    {
        std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}