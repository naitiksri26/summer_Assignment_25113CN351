#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int visited[256] = {0};
    int i, j = 0;
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        unsigned char ch = str[i];

        if (visited[ch] == 0)
        {
            str[j++] = str[i];
            visited[ch] = 1;
        }
    }

    str[j] = '\0';

    printf("String after removing duplicates: %s\n", str);

    return 0;
}