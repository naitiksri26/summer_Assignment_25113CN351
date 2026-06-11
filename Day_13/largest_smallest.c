#include <stdio.h>
int main() {
    int n, a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Largest = %d\nSmallest = %d\n", max, min);
    return 0;
}