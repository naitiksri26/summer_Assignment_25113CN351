#include <stdio.h>
#include <math.h>

int main() {
    int low, high, n, d, sum, num, digits, temp;

    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Armstrong numbers between %d and %d are:\n", low, high);

    for (n = low; n <= high; n++) {
        num = n;
        temp = n;
        digits = 0;
        sum = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        // Sum of digits^power
        temp = n;
        while (temp > 0) {
            d = temp % 10;
            sum += pow(d, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d\n", num);
    }

    return 0;
}