#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char result[200];
    int i, j = 0, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("String without spaces: %s\n", result);

    return 0;
}