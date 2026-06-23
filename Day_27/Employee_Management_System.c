#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[50];
    char dept[30];
    float salary;
};

struct employee e[100];
int n=0;

void addemployee()
{
    printf("Enter employee id: ");
    scanf("%d",&e[n].id);
    printf("Enter name: ");
    scanf(" ");
    gets(e[n].name);
    printf("Enter department: ");
    scanf(" ");
    gets(e[n].dept);
    printf("Enter salary: ");
    scanf("%f",&e[n].salary);
    n++;
    printf("Employee record added.\n");
}

void displayall()
{
    int i;
    if(n==0)
    {
        printf("No records found.\n");
        return;
    }
    printf("\nID\tName\t\tDepartment\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",e[i].id,e[i].name,e[i].dept,e[i].salary);
    }
}

void searchemployee()
{
    int id,i,found=0;
    printf("Enter employee id to search: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(e[i].id==id)
        {
            printf("ID: %d\n",e[i].id);
            printf("Name: %s\n",e[i].name);
            printf("Department: %s\n",e[i].dept);
            printf("Salary: %.2f\n",e[i].salary);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Employee not found.\n");
}

void deleteemployee()
{
    int id,i,j,found=0;
    printf("Enter employee id to delete: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(e[i].id==id)
        {
            for(j=i;j<n-1;j++)
            {
                e[j]=e[j+1];
            }
            n--;
            found=1;
            printf("Employee record deleted.\n");
            break;
        }
    }
    if(found==0)
        printf("Employee not found.\n");
}

void updateemployee()
{
    int id,i,found=0;
    printf("Enter employee id to update: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(e[i].id==id)
        {
            printf("Enter new name: ");
            scanf(" ");
            gets(e[i].name);
            printf("Enter new department: ");
            scanf(" ");
            gets(e[i].dept);
            printf("Enter new salary: ");
            scanf("%f",&e[i].salary);
            found=1;
            printf("Employee record updated.\n");
            break;
        }
    }
    if(found==0)
        printf("Employee not found.\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n----- Employee Management System -----\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addemployee();
                break;
            case 2:
                displayall();
                break;
            case 3:
                searchemployee();
                break;
            case 4:
                updateemployee();
                break;
            case 5:
                deleteemployee();
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }while(choice!=6);

    return 0;
}