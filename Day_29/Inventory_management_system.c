#include <stdio.h>
#include <string.h>

struct Item
{
    int code;
    char name[30];
    int qty;
    float price;
};

struct Item item[50];
int n = 0;

void addItem()
{
    if (n >= 50)
    {
        printf("Inventory is full.\n");
        return;
    }
    printf("Enter item code: ");
    scanf("%d", &item[n].code);
    printf("Enter item name: ");
    scanf("%s", item[n].name);
    printf("Enter quantity: ");
    scanf("%d", &item[n].qty);
    printf("Enter price: ");
    scanf("%f", &item[n].price);
    n++;
    printf("Item added successfully.\n");
}

int findIndex(int code)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (item[i].code == code)
            return i;
    }
    return -1;
}

void displayItems()
{
    int i;
    if (n == 0)
    {
        printf("Inventory is empty.\n");
        return;
    }
    printf("\n%-10s%-20s%-10s%-10s\n", "Code", "Name", "Qty", "Price");
    for (i = 0; i < n; i++)
        printf("%-10d%-20s%-10d%-10.2f\n", item[i].code, item[i].name, item[i].qty, item[i].price);
}

void updateItem()
{
    int code, idx;
    printf("Enter item code to update: ");
    scanf("%d", &code);
    idx = findIndex(code);
    if (idx == -1)
    {
        printf("Item not found.\n");
        return;
    }
    printf("Enter new quantity: ");
    scanf("%d", &item[idx].qty);
    printf("Enter new price: ");
    scanf("%f", &item[idx].price);
    printf("Item updated successfully.\n");
}

void deleteItem()
{
    int code, idx, i;
    printf("Enter item code to delete: ");
    scanf("%d", &code);
    idx = findIndex(code);
    if (idx == -1)
    {
        printf("Item not found.\n");
        return;
    }
    for (i = idx; i < n - 1; i++)
        item[i] = item[i + 1];
    n--;
    printf("Item deleted successfully.\n");
}

void searchItem()
{
    int code, idx;
    printf("Enter item code to search: ");
    scanf("%d", &code);
    idx = findIndex(code);
    if (idx == -1)
    {
        printf("Item not found.\n");
        return;
    }
    printf("Code: %d\nName: %s\nQty: %d\nPrice: %.2f\n", item[idx].code, item[idx].name, item[idx].qty, item[idx].price);
}

int main()
{
    int ch;

    do
    {
        printf("\n----- INVENTORY MANAGEMENT SYSTEM -----\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Update Item\n");
        printf("4. Delete Item\n");
        printf("5. Search Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                updateItem();
                break;
            case 4:
                deleteItem();
                break;
            case 5:
                searchItem();
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