#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while (temp != 0) { digits++; temp /= 10; }
    temp = n;
    while (temp != 0) {
        sum += power(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}