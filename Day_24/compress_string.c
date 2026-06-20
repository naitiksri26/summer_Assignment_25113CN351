#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], compressed[100];
    int i = 0, j = 0, count;
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    while (i < len)
    {
        char current = str[i];
        count = 1;

        while (i + 1 < len && str[i + 1] == current)
        {
            count++;
            i++;
        }

        compressed[j++] = current;
        char countStr[10];
        sprintf(countStr, "%d", count);

        int k = 0;
        while (countStr[k] != '\0')
        {
            compressed[j++] = countStr[k];
            k++;
        }

        i++;
    }

    compressed[j] = '\0';

    printf("Original string : %s\n", str);
    printf("Compressed string: %s\n", compressed);

    return 0;
}