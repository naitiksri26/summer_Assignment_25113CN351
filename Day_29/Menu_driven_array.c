#include <stdio.h>

int arr[50];
int n = 0;

void display()
{
    int i;
    if (n == 0)
    {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insert()
{
    if (n >= 50)
    {
        printf("Array is full.\n");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d", &arr[n]);
    n++;
    printf("Inserted successfully.\n");
}

void deleteElem()
{
    int pos, i;
    if (n == 0)
    {
        printf("Array is empty.\n");
        return;
    }
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n)
    {
        printf("Invalid position.\n");
        return;
    }
    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("Deleted successfully.\n");
}

void search()
{
    int key, i, found = 0;
    printf("Enter value to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element not found.\n");
}

void sortArr()
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    printf("Array sorted successfully.\n");
}

int main()
{
    int ch;

    do
    {
        printf("\n----- ARRAY OPERATIONS MENU -----\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Search\n");
        printf("5. Sort\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                insert();
                break;
            case 2:
                deleteElem();
                break;
            case 3:
                display();
                break;
            case 4:
                search();
                break;
            case 5:
                sortArr();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (ch != 6);

    return 0;
}