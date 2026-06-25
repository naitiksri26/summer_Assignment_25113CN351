#include <stdio.h>
#include <string.h>

struct account
{
    int accno;
    char name[30];
    char type[10];
    float balance;
};

int main()
{
    struct account a[50];
    int n = 0, ch, i, accno;
    float amt;

    do
    {
        printf("\n----- BANK ACCOUNT SYSTEM -----\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter account number: ");
            scanf("%d", &a[n].accno);
            printf("Enter name: ");
            scanf(" %[^\n]", a[n].name);
            printf("Enter account type (Saving/Current): ");
            scanf(" %[^\n]", a[n].type);
            printf("Enter initial deposit: ");
            scanf("%f", &a[n].balance);
            n++;
            printf("Account created successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No accounts available.\n");
                break;
            }
            printf("\nAccNo\tName\t\tType\t\tBalance\n");
            for (i = 0; i < n; i++)
                printf("%d\t%s\t\t%s\t\t%.2f\n", a[i].accno, a[i].name, a[i].type, a[i].balance);
            break;

        case 3:
            printf("Enter account number: ");
            scanf("%d", &accno);
            for (i = 0; i < n; i++)
            {
                if (a[i].accno == accno)
                {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amt);
                    a[i].balance += amt;
                    printf("Amount deposited successfully.\n");
                    break;
                }
            }
            if (i == n)
                printf("Account not found.\n");
            break;

        case 4:
            printf("Enter account number: ");
            scanf("%d", &accno);
            for (i = 0; i < n; i++)
            {
                if (a[i].accno == accno)
                {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amt);
                    if (amt <= a[i].balance)
                    {
                        a[i].balance -= amt;
                        printf("Amount withdrawn successfully.\n");
                    }
                    else
                        printf("Insufficient balance.\n");
                    break;
                }
            }
            if (i == n)
                printf("Account not found.\n");
            break;

        case 5:
            printf("Enter account number: ");
            scanf("%d", &accno);
            for (i = 0; i < n; i++)
            {
                if (a[i].accno == accno)
                {
                    printf("Name: %s\nBalance: %.2f\n", a[i].name, a[i].balance);
                    break;
                }
            }
            if (i == n)
                printf("Account not found.\n");
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }
    } while (ch != 6);

    return 0;
}