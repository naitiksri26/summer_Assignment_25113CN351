#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[50];
    char branch[30];
    float marks;
};

struct student s[100];
int n=0;

void addstudent()
{
    printf("Enter roll number: ");
    scanf("%d",&s[n].roll);
    printf("Enter name: ");
    scanf(" ");
    gets(s[n].name);
    printf("Enter branch: ");
    scanf(" ");
    gets(s[n].branch);
    printf("Enter marks: ");
    scanf("%f",&s[n].marks);
    n++;
    printf("Student record added.\n");
}

void displayall()
{
    int i;
    if(n==0)
    {
        printf("No records found.\n");
        return;
    }
    printf("\nRoll\tName\t\tBranch\t\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",s[i].roll,s[i].name,s[i].branch,s[i].marks);
    }
}

void searchstudent()
{
    int r,i,found=0;
    printf("Enter roll number to search: ");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==r)
        {
            printf("Roll: %d\n",s[i].roll);
            printf("Name: %s\n",s[i].name);
            printf("Branch: %s\n",s[i].branch);
            printf("Marks: %.2f\n",s[i].marks);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Student not found.\n");
}

void deletestudent()
{
    int r,i,j,found=0;
    printf("Enter roll number to delete: ");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==r)
        {
            for(j=i;j<n-1;j++)
            {
                s[j]=s[j+1];
            }
            n--;
            found=1;
            printf("Student record deleted.\n");
            break;
        }
    }
    if(found==0)
        printf("Student not found.\n");
}

void updatestudent()
{
    int r,i,found=0;
    printf("Enter roll number to update: ");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==r)
        {
            printf("Enter new name: ");
            scanf(" ");
            gets(s[i].name);
            printf("Enter new branch: ");
            scanf(" ");
            gets(s[i].branch);
            printf("Enter new marks: ");
            scanf("%f",&s[i].marks);
            found=1;
            printf("Student record updated.\n");
            break;
        }
    }
    if(found==0)
        printf("Student not found.\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n----- Student Record Management System -----\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addstudent();
                break;
            case 2:
                displayall();
                break;
            case 3:
                searchstudent();
                break;
            case 4:
                updatestudent();
                break;
            case 5:
                deletestudent();
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