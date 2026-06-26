#include <stdio.h>
#include <string.h>

char str1[100], str2[100];

void length()
{
    printf("Enter a string: ");
    gets(str1);
    printf("Length of string = %d\n", (int)strlen(str1));
}

void concat()
{
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);
}

void reverse()
{
    int i, len;
    char rev[100];
    printf("Enter a string: ");
    gets(str1);
    len = strlen(str1);
    for (i = 0; i < len; i++)
        rev[i] = str1[len - 1 - i];
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);
}

void palindrome()
{
    int i, len, flag = 1;
    printf("Enter a string: ");
    gets(str1);
    len = strlen(str1);
    for (i = 0; i < len / 2; i++)
    {
        if (str1[i] != str1[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

void compare()
{
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
}

int main()
{
    int ch;

    do
    {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Concatenate\n");
        printf("3. Reverse\n");
        printf("4. Check Palindrome\n");
        printf("5. Compare Two Strings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();

        switch (ch)
        {
            case 1:
                length();
                break;
            case 2:
                concat();
                break;
            case 3:
                reverse();
                break;
            case 4:
                palindrome();
                break;
            case 5:
                compare();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (ch != 6);

    return 0;
}