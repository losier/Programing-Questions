#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mul, div, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("Choose an option: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Sum: %d\n", sum);
        break;
    case 2:
        printf("Subtraction: %d\n", sub);
        break;
    case 3:
        printf("Multiplication: %d\n", mul);
        break;
    case 4:
        printf("Division: %d\n", div);
        break;
    case 5:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}