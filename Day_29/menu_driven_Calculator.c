#include <stdio.h>

int main()
{
    int ch;
    float a, b, r;

    do
    {
        printf("\n----- MENU DRIVEN CALCULATOR -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 4)
        {
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
        }

        switch (ch)
        {
            case 1:
                r = a + b;
                printf("Result = %.2f\n", r);
                break;
            case 2:
                r = a - b;
                printf("Result = %.2f\n", r);
                break;
            case 3:
                r = a * b;
                printf("Result = %.2f\n", r);
                break;
            case 4:
                if (b == 0)
                    printf("Error: Division by zero not allowed.\n");
                else
                {
                    r = a / b;
                    printf("Result = %.2f\n", r);
                }
                break;
            case 5:
                printf("Exiting Calculator...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (ch != 5);

    return 0;
}