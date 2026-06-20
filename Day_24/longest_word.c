#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[100], longestWord[100];
    int i = 0, j = 0;
    int len;

    printf("Enter a sentence: ");
    gets(str);

    len = strlen(str);
    longestWord[0] = '\0';
    j = 0;

    for (i = 0; i <= len; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';

            if (strlen(word) > strlen(longestWord))
            {
                strcpy(longestWord, word);
            }

            j = 0;
        }
    }

    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", (int)strlen(longestWord));

    return 0;
}