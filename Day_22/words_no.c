#include <stdio.h>

int main() {
    char str[200];
    int i, wordCount = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            wordCount++;
    }
    wordCount++; // last word

    printf("Number of words: %d\n", wordCount);

    return 0;
}