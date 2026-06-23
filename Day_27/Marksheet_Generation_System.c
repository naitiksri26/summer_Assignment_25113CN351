#include<stdio.h>
#include<string.h>

struct marksheet
{
    int roll;
    char name[50];
    int sub1,sub2,sub3,sub4,sub5;
    int total;
    float percentage;
    char grade;
};

struct marksheet m[100];
int n=0;

void calculate(int i)
{
    m[i].total=m[i].sub1+m[i].sub2+m[i].sub3+m[i].sub4+m[i].sub5;
    m[i].percentage=(float)m[i].total/5;

    if(m[i].percentage>=90)
        m[i].grade='A';
    else if(m[i].percentage>=75)
        m[i].grade='B';
    else if(m[i].percentage>=60)
        m[i].grade='C';
    else if(m[i].percentage>=40)
        m[i].grade='D';
    else
        m[i].grade='F';
}

void addstudent()
{
    printf("Enter roll number: ");
    scanf("%d",&m[n].roll);
    printf("Enter name: ");
    scanf(" ");
    gets(m[n].name);
    printf("Enter marks of 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%d",&m[n].sub1);
    printf("Subject 2: ");
    scanf("%d",&m[n].sub2);
    printf("Subject 3: ");
    scanf("%d",&m[n].sub3);
    printf("Subject 4: ");
    scanf("%d",&m[n].sub4);
    printf("Subject 5: ");
    scanf("%d",&m[n].sub5);

    calculate(n);
    n++;
    printf("Marksheet record added.\n");
}

void showmarksheet(int i)
{
    printf("\n----- Marksheet -----\n");
    printf("Roll No: %d\n",m[i].roll);
    printf("Name: %s\n",m[i].name);
    printf("Subject 1: %d\n",m[i].sub1);
    printf("Subject 2: %d\n",m[i].sub2);
    printf("Subject 3: %d\n",m[i].sub3);
    printf("Subject 4: %d\n",m[i].sub4);
    printf("Subject 5: %d\n",m[i].sub5);
    printf("Total: %d\n",m[i].total);
    printf("Percentage: %.2f\n",m[i].percentage);
    printf("Grade: %c\n",m[i].grade);
}

void displayall()
{
    int i;
    if(n==0)
    {
        printf("No records found.\n");
        return;
    }
    for(i=0;i<n;i++)
    {
        showmarksheet(i);
    }
}

void searchstudent()
{
    int r,i,found=0;
    printf("Enter roll number to search: ");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(m[i].roll==r)
        {
            showmarksheet(i);
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
        if(m[i].roll==r)
        {
            for(j=i;j<n-1;j++)
            {
                m[j]=m[j+1];
            }
            n--;
            found=1;
            printf("Marksheet record deleted.\n");
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
        printf("\n----- Marksheet Generation System -----\n");
        printf("1. Add Student Marks\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet\n");
        printf("4. Delete Marksheet\n");
        printf("5. Exit\n");
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
                deletestudent();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }while(choice!=5);

    return 0;
}