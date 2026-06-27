#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[40];
    int issued; // 0 = available, 1 = issued
};

struct Book b[50];
int n = 0;

void addBook() {
    printf("Enter book id: ");
    scanf("%d", &b[n].id);
    fflush(stdin);
    printf("Enter title: ");
    gets(b[n].title);
    printf("Enter author: ");
    gets(b[n].author);
    b[n].issued = 0;
    n++;
    printf("Book added.\n");
}

void displayBooks() {
    if (n == 0) {
        printf("No books found.\n");
        return;
    }
    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n", b[i].id, b[i].title, b[i].author,
               b[i].issued ? "Issued" : "Available");
    }
}

void issueBook() {
    int id;
    printf("Enter book id to issue: ");
    scanf("%d", &id);
    for (int i = 0; i < n; i++) {
        if (b[i].id == id) {
            if (b[i].issued == 1) {
                printf("Book already issued.\n");
            } else {
                b[i].issued = 1;
                printf("Book issued.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

void returnBook() {
    int id;
    printf("Enter book id to return: ");
    scanf("%d", &id);
    for (int i = 0; i < n; i++) {
        if (b[i].id == id) {
            if (b[i].issued == 0) {
                printf("Book was not issued.\n");
            } else {
                b[i].issued = 0;
                printf("Book returned.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    int ch;
    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        fflush(stdin);

        switch (ch) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 5);

    return 0;
}