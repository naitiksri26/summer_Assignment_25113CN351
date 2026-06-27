#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char branch[30];
    float marks;
};

struct Student s[50];
int n = 0;

void addStudent() {
    printf("Enter roll no: ");
    scanf("%d", &s[n].roll);
    fflush(stdin);
    printf("Enter name: ");
    gets(s[n].name);
    printf("Enter branch: ");
    gets(s[n].branch);
    printf("Enter marks: ");
    scanf("%f", &s[n].marks);
    n++;
    printf("Student added.\n");
}

void displayStudents() {
    if (n == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\nRoll\tName\t\tBranch\t\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].branch, s[i].marks);
    }
}

void searchStudent() {
    int r;
    printf("Enter roll no to search: ");
    scanf("%d", &r);
    for (int i = 0; i < n; i++) {
        if (s[i].roll == r) {
            printf("Found: %s, %s, %.2f\n", s[i].name, s[i].branch, s[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

void deleteStudent() {
    int r;
    printf("Enter roll no to delete: ");
    scanf("%d", &r);
    for (int i = 0; i < n; i++) {
        if (s[i].roll == r) {
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            printf("Student deleted.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    int ch;
    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        fflush(stdin);

        switch (ch) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 5);

    return 0;
}