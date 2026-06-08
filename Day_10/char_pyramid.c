#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("%c", 'A' + j);
        for (int j = i-2; j >= 0; j--)
            printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}