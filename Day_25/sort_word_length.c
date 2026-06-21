#include<stdio.h>
#include<string.h>

int main()
{
    char words[20][50];
    char temp[50];
    int n,i,j;

    printf("Enter number of words: ");
    scanf("%d",&n);
    getchar();

    for(i=0;i<n;i++)
    {
        printf("Enter word %d: ",i+1);
        gets(words[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strlen(words[j])>strlen(words[j+1]))
            {
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(i=0;i<n;i++)
        printf("%s\n",words[i]);

    return 0;
}