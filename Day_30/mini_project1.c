#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[40];
};

struct Contact c[50];
int n = 0;

int findIndex(int id) {
    for (int i = 0; i < n; i++) {
        if (c[i].id == id) {
            return i;
        }
    }
    return -1;
}

void addContact() {
    printf("Enter contact id: ");
    scanf("%d", &c[n].id);
    fflush(stdin);
    printf("Enter name: ");
    gets(c[n].name);
    printf("Enter phone: ");
    gets(c[n].phone);
    printf("Enter email: ");
    gets(c[n].email);
    n++;
    printf("Contact added.\n");
}

void displayContacts() {
    if (n == 0) {
        printf("No contacts found.\n");
        return;
    }
    printf("\nID\tName\t\tPhone\t\tEmail\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n", c[i].id, c[i].name, c[i].phone, c[i].email);
    }
}

void searchContact() {
    int id;
    printf("Enter id to search: ");
    scanf("%d", &id);
    int idx = findIndex(id);
    if (idx == -1) {
        printf("Contact not found.\n");
    } else {
        printf("Found: %s, %s, %s\n", c[idx].name, c[idx].phone, c[idx].email);
    }
}

void updateContact() {
    int id;
    printf("Enter id to update: ");
    scanf("%d", &id);
    int idx = findIndex(id);
    if (idx == -1) {
        printf("Contact not found.\n");
        return;
    }
    fflush(stdin);
    printf("Enter new phone: ");
    gets(c[idx].phone);
    printf("Enter new email: ");
    gets(c[idx].email);
    printf("Contact updated.\n");
}

void deleteContact() {
    int id;
    printf("Enter id to delete: ");
    scanf("%d", &id);
    int idx = findIndex(id);
    if (idx == -1) {
        printf("Contact not found.\n");
        return;
    }
    for (int j = idx; j < n - 1; j++) {
        c[j] = c[j + 1];
    }
    n--;
    printf("Contact deleted.\n");
}

int main() {
    int ch;
    do {
        printf("\n--- Mini Contact Book Project ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        fflush(stdin);

        switch (ch) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: updateContact(); break;
            case 5: deleteContact(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 6);

    return 0;
}