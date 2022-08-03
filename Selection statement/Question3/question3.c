#include <stdio.h>

int StudentDiscount(int n)
{
    float discount;

    if (n <= 500)
    {
        discount = (5 / n) * 100;
        printf("Discount is %d\n", discount);
    }
    else
    {
        discount = (10 / n) * 100;
        printf("Discount is %d\n", discount);
    }
}

int NonStudentDiscount(int n)
{
    float discount;

    if (n <= 500)
    {
        discount = (2 / n) * 100;
        printf("Discount is %d\n", discount);
    }
    else
    {
        discount = (8 / n) * 100;
        printf("Discount is %d\n", discount);
    }
}

int main()
{
    char response;

    printf("Are you a student? (y/n)\n");
    scanf(" %c", &response);

    if (response == 'Y' || response == 'y')
    {
        int n;
        printf("Enter the bill amount: \n");
        scanf("%d", &n);
        StudentDiscount(n);
    }
    else if (response == 'N' || response == 'n')
    {
        int n;
        printf("Enter the bill amount: \n");
        scanf("%d", &n);
        NonStudentDiscount(n);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}