#include <stdio.h>

int EvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    EvenOrOdd(n);
    return 0;
}