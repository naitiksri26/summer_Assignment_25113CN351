#include <stdio.h>
#include <math.h>

int main() {
    int n, i, d, sum = 0, num, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;

    // Count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits^power
    while (n > 0) {
        d = n % 10;
        sum += pow(d, digits);
        n /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}