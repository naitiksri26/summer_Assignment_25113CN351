
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess, chance;

    srand(time(0));
    num = rand() % 100 + 1;
    chance = 0;

    printf("Guess the number between 1 and 100\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        chance++;

        if(guess == num)
        {
            printf("Correct! You guessed it in %d chances\n", chance);
            break;
        }
        else if(guess < num)
        {
            printf("Too low! Try again\n");
        }
        else
        {
            printf("Too high! Try again\n");
        }
    }

    return 0;
}