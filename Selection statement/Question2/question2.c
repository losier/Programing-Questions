#include <stdio.h>

int Eligiblity(int age)
{
    if (age >= 18)
    {
        printf("You are eligible to vote\n");
    }
    else
    {
        printf("Please come back in %d yaer", 18 - age);
    }
}

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    Eligiblity(age);
    return 0;
}