#include <stdio.h>

int SquareAndCude()
{
    float num, square, cube;
    printf("Enter a number: ");
    scanf("%f", &num);
    square = num * num;
    cube = square * num;
    printf("Square of %f is %f\n", num, square);
    printf("Cube of %f is %f\n", num, cube);
    return 0;
}

int Leap()
{
    int year;
    printf("Enter a year: ");
    scanf("%u", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%u is a leap year\n", year);
            }
            else
            {
                printf("%u is not a leap year\n", year);
            }
        }
        else
        {
            printf("%u is a leap year\n", year);
        }
    }
    else
    {
        printf("%u is not a leap year\n", year);
    }
    return 0;
}

int main()
{
    int choice;
    printf("Enter your choice:\n");
    printf("1. Square and cube\n");
    printf("2. Leap year\n");
    scanf("%u", &choice);

    if (choice == 1)
    {
        SquareAndCude();
    }
    else if (choice == 2)
    {
        Leap();
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}