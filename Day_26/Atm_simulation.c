
#include<stdio.h>

int main()
{
    int pin, actualpin, choice;
    float balance, amount;

    actualpin = 1234;
    balance = 5000.0;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if(pin != actualpin)
    {
        printf("Invalid PIN\n");
        return 0;
    }

    while(1)
    {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Your balance is: %.2f\n", balance);
        }
        else if(choice == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Amount deposited. New balance: %.2f\n", balance);
        }
        else if(choice == 3)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount > balance)
            {
                printf("Insufficient balance\n");
            }
            else
            {
                balance = balance - amount;
                printf("Amount withdrawn. New balance: %.2f\n", balance);
            }
        }
        else if(choice == 4)
        {
            printf("Thank you for using ATM\n");
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}