#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char dept[30];
    float salary;
};

struct Employee e[50];
int n = 0;

void addEmployee() {
    printf("Enter employee id: ");
    scanf("%d", &e[n].id);
    fflush(stdin);
    printf("Enter name: ");
    gets(e[n].name);
    printf("Enter department: ");
    gets(e[n].dept);
    printf("Enter salary: ");
    scanf("%f", &e[n].salary);
    n++;
    printf("Employee added.\n");
}

void displayEmployees() {
    if (n == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\nID\tName\t\tDept\t\tSalary\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", e[i].id, e[i].name, e[i].dept, e[i].salary);
    }
}

void updateEmployee() {
    int id;
    printf("Enter employee id to update: ");
    scanf("%d", &id);
    for (int i = 0; i < n; i++) {
        if (e[i].id == id) {
            fflush(stdin);
            printf("Enter new salary: ");
            scanf("%f", &e[i].salary);
            printf("Salary updated.\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

void deleteEmployee() {
    int id;
    printf("Enter employee id to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < n; i++) {
        if (e[i].id == id) {
            for (int j = i; j < n - 1; j++) {
                e[j] = e[j + 1];
            }
            n--;
            printf("Employee deleted.\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

int main() {
    int ch;
    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Update Salary\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        fflush(stdin);

        switch (ch) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: updateEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 5);

    return 0;
}