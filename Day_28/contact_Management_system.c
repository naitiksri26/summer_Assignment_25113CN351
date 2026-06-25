#include <stdio.h>
#include <string.h>

struct contact
{
    char name[30];
    char phone[15];
    char email[30];
};

int main()
{
    struct contact c[50];
    int n = 0, ch, i;
    char key[30];

    do
    {
        printf("\n----- CONTACT MANAGEMENT SYSTEM -----\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter name: ");
            scanf(" %[^\n]", c[n].name);
            printf("Enter phone number: ");
            scanf(" %[^\n]", c[n].phone);
            printf("Enter email: ");
            scanf(" %[^\n]", c[n].email);
            n++;
            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No contacts available.\n");
                break;
            }
            printf("\nName\t\tPhone\t\tEmail\n");
            for (i = 0; i < n; i++)
                printf("%s\t\t%s\t\t%s\n", c[i].name, c[i].phone, c[i].email);
            break;

        case 3:
            printf("Enter name to search: ");
            scanf(" %[^\n]", key);
            for (i = 0; i < n; i++)
            {
                if (strcmp(c[i].name, key) == 0)
                {
                    printf("Name: %s\nPhone: %s\nEmail: %s\n", c[i].name, c[i].phone, c[i].email);
                    break;
                }
            }
            if (i == n)
                printf("Contact not found.\n");
            break;

        case 4:
            printf("Enter name to delete: ");
            scanf(" %[^\n]", key);
            for (i = 0; i < n; i++)
            {
                if (strcmp(c[i].name, key) == 0)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                        c[j] = c[j + 1];
                    n--;
                    printf("Contact deleted successfully.\n");
                    break;
                }
            }
            if (i == n)
                printf("Contact not found.\n");
            break;

        case 5:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }
    } while (ch != 5);

    return 0;
}