#include<stdio.h>
#include<string.h>

int main()
{
    char names[20][50];
    char temp[50];
    int n,i,j;

    printf("Enter number of names: ");
    scanf("%d",&n);
    getchar();

    for(i=0;i<n;i++)
    {
        printf("Enter name %d: ",i+1);
        gets(names[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(names[j],names[j+1])>0)
            {
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for(i=0;i<n;i++)
        printf("%s\n",names[i]);

    return 0;
}