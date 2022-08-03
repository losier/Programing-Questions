#include <stdio.h>

int grade(int score)
{
    if (score >= 70)
    {
        printf("You got an A.\n");
    }
    else if (score >= 60 && score < 70)
    {
        printf("You got a B+.\n");
    }
    else if (score >= 45 && score < 60)
    {
        printf("You got a B.\n");
    }
    else if (score >= 35 && score < 45)
    {
        printf("You got a C.\n");
    }
    else
    {
        printf("You are fail.\n");
    }
}

int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    grade(score);
}