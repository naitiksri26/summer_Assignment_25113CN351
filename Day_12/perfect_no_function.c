#include <stdio.h>

int isPerfect(int n) {
    if (n <= 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPerfect(n))
        printf("%d is a Perfect number\n", n);
    else
        printf("%d is not a Perfect number\n", n);
    return 0;
}