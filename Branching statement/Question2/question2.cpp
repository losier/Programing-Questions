#include <iostream>

int main()
{
    int num1, num2, sum, sub, mul, div, choice;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        sum = num1 + num2;
        std::cout << "Sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
        break;
    case 2:
        sub = num1 - num2;
        std::cout << "Subtraction of " << num1 << " and " << num2 << " is " << sub << std::endl;
        break;
    case 3:
        mul = num1 * num2;
        std::cout << "Multiplication of " << num1 << " and " << num2 << " is " << mul << std::endl;
        break;
    case 4:
        div = num1 / num2;
        std::cout << "Division of " << num1 << " and " << num2 << " is " << div << std::endl;
        break;
    case 5:
        std::cout << "Exiting..." << std::endl;
        break;
    default:
        std::cout << "Invalid choice" << std::endl;
        break;
    }
    return 0;
}