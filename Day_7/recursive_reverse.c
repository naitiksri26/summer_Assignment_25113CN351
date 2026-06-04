#include <stdio.h>

int rev = 0, base = 1;

void reverseNum(int n) {
    if (n == 0)
        return;
    rev += (n % 10) * base;
    base *= 10;
    reverseNum(n / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    reverseNum(n);

    printf("Reversed number = %d\n", rev);

    return 0;
}