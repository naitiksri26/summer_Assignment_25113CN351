#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    int freq1[256]={0},freq2[256]={0};
    int i;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    for(i=0;s1[i]!='\0';i++)
        freq1[(int)s1[i]]++;
    for(i=0;s2[i]!='\0';i++)
        freq2[(int)s2[i]]++;

    printf("Common characters: ");
    for(i=0;i<256;i++)
    {
        if(freq1[i]>0 && freq2[i]>0)
            printf("%c ",i);
    }

    return 0;
}