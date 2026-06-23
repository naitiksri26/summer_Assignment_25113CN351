#include<stdio.h>
#include<string.h>

struct salary
{
    int empid;
    char name[50];
    float basic;
    float hra;
    float da;
    float deduction;
    float netsalary;
};

struct salary sal[100];
int n=0;

void addsalary()
{
    printf("Enter employee id: ");
    scanf("%d",&sal[n].empid);
    printf("Enter name: ");
    scanf(" ");
    gets(sal[n].name);
    printf("Enter basic salary: ");
    scanf("%f",&sal[n].basic);
    printf("Enter HRA: ");
    scanf("%f",&sal[n].hra);
    printf("Enter DA: ");
    scanf("%f",&sal[n].da);
    printf("Enter deduction: ");
    scanf("%f",&sal[n].deduction);

    sal[n].netsalary=sal[n].basic+sal[n].hra+sal[n].da-sal[n].deduction;
    n++;
    printf("Salary record added.\n");
}

void displayall()
{
    int i;
    if(n==0)
    {
        printf("No records found.\n");
        return;
    }
    printf("\nID\tName\t\tBasic\tHRA\tDA\tDeduction\tNet Salary\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t\t%.2f\n",sal[i].empid,sal[i].name,sal[i].basic,sal[i].hra,sal[i].da,sal[i].deduction,sal[i].netsalary);
    }
}

void searchsalary()
{
    int id,i,found=0;
    printf("Enter employee id to search: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(sal[i].empid==id)
        {
            printf("ID: %d\n",sal[i].empid);
            printf("Name: %s\n",sal[i].name);
            printf("Basic: %.2f\n",sal[i].basic);
            printf("HRA: %.2f\n",sal[i].hra);
            printf("DA: %.2f\n",sal[i].da);
            printf("Deduction: %.2f\n",sal[i].deduction);
            printf("Net Salary: %.2f\n",sal[i].netsalary);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Record not found.\n");
}

void deletesalary()
{
    int id,i,j,found=0;
    printf("Enter employee id to delete: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(sal[i].empid==id)
        {
            for(j=i;j<n-1;j++)
            {
                sal[j]=sal[j+1];
            }
            n--;
            found=1;
            printf("Salary record deleted.\n");
            break;
        }
    }
    if(found==0)
        printf("Record not found.\n");
}

void updatesalary()
{
    int id,i,found=0;
    printf("Enter employee id to update: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(sal[i].empid==id)
        {
            printf("Enter new basic salary: ");
            scanf("%f",&sal[i].basic);
            printf("Enter new HRA: ");
            scanf("%f",&sal[i].hra);
            printf("Enter new DA: ");
            scanf("%f",&sal[i].da);
            printf("Enter new deduction: ");
            scanf("%f",&sal[i].deduction);

            sal[i].netsalary=sal[i].basic+sal[i].hra+sal[i].da-sal[i].deduction;
            found=1;
            printf("Salary record updated.\n");
            break;
        }
    }
    if(found==0)
        printf("Record not found.\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n----- Salary Management System -----\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Record\n");
        printf("4. Update Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addsalary();
                break;
            case 2:
                displayall();
                break;
            case 3:
                searchsalary();
                break;
            case 4:
                updatesalary();
                break;
            case 5:
                deletesalary();
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