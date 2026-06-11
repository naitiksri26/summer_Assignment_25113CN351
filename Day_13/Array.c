#include <stdio.h>
int main() {
    int n, a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}