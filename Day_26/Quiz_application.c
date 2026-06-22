
#include<stdio.h>

int main()
{
    int ans, score;

    score = 0;

    printf("----- QUIZ APPLICATION -----\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Chennai  4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if(ans == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Delhi\n\n");
    }

    printf("Q2. Which language is known as the mother of all languages?\n");
    printf("1. Java  2. Python  3. C  4. C++\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if(ans == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C\n\n");
    }

    printf("Q3. How many continents are there?\n");
    printf("1. 5  2. 6  3. 7  4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if(ans == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 7\n\n");
    }

    printf("Q4. What is 5 + 3 * 2?\n");
    printf("1. 16  2. 11  3. 13  4. 10\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if(ans == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 11\n\n");
    }

    printf("Quiz Over!\n");
    printf("Your score is: %d out of 4\n", score);

    return 0;
}