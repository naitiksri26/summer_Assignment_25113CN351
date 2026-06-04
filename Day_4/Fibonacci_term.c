#include <stdio.h>

int main() {
    int n, i, z;
    long long a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Enter the term to be searched: ");
    scanf("%d", &z);

    for (i = 1; i <= n; i++) {
        if (z == i)
            printf("Term %d in Fibonacci series is: %lld\n", z, a);

        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}