#include <stdio.h>
#include <string.h>

struct book
{
    int id;
    char title[50];
    char author[30];
    int qty;
    int issued;
};

int main()
{
    struct book b[50];
    int n = 0, ch, i, id;

    do
    {
        printf("\n----- LIBRARY MANAGEMENT SYSTEM -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter book id: ");
            scanf("%d", &b[n].id);
            printf("Enter title: ");
            scanf(" %[^\n]", b[n].title);
            printf("Enter author: ");
            scanf(" %[^\n]", b[n].author);
            printf("Enter quantity: ");
            scanf("%d", &b[n].qty);
            b[n].issued = 0;
            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
                break;
            }
            printf("\nID\tTitle\t\tAuthor\t\tQty\tIssued\n");
            for (i = 0; i < n; i++)
                printf("%d\t%s\t\t%s\t\t%d\t%d\n", b[i].id, b[i].title, b[i].author, b[i].qty, b[i].issued);
            break;

        case 3:
            printf("Enter book id to issue: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].qty - b[i].issued > 0)
                    {
                        b[i].issued++;
                        printf("Book issued successfully.\n");
                    }
                    else
                        printf("No copies available.\n");
                    break;
                }
            }
            if (i == n)
                printf("Book not found.\n");
            break;

        case 4:
            printf("Enter book id to return: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].issued > 0)
                    {
                        b[i].issued--;
                        printf("Book returned successfully.\n");
                    }
                    else
                        printf("No issued copies for this book.\n");
                    break;
                }
            }
            if (i == n)
                printf("Book not found.\n");
            break;

        case 5:
            printf("Enter book id to search: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    printf("ID: %d\nTitle: %s\nAuthor: %s\nQty: %d\nIssued: %d\n", b[i].id, b[i].title, b[i].author, b[i].qty, b[i].issued);
                    break;
                }
            }
            if (i == n)
                printf("Book not found.\n");
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