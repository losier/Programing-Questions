#include <iostream>

int grade(int score)
{
    if (score > 70)
    {
        std::cout << "You got an A!" << std::endl;
    }
    else if (score >= 60 && score < 70)
    {
        std::cout << "You got a B+!" << std::endl;
    }
    else if (score >= 45 && score < 60)
    {
        std::cout << "You got a B!" << std::endl;
    }
    else if (score >= 35 && score < 45)
    {
        std::cout << "You got a C!" << std::endl;
    }
    else
    {
        std::cout << "You are fail!" << std::endl;
    }
}

int main()
{
    int score;
    std::cout << "Enter your score: ";
    std::cin >> score;
    grade(score);
    return 0;
}