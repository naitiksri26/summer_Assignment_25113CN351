
#include<stdio.h>

int main()
{
    int age;
    char name[50];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("%s, you are eligible to vote\n", name);
    }
    else
    {
        printf("%s, you are not eligible to vote\n", name);
        printf("You need %d more year(s) to vote\n", 18 - age);
    }

    return 0;
}