#include <stdio.h>
int main() {
    int n, a[100], sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) sum += a[i];
    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / n);
    return 0;
}