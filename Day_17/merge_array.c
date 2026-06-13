#include <stdio.h>

int main() {
    int a[50], b[50], merged[100];
    int n1, n2;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Copy both arrays into merged
    for (int i = 0; i < n1; i++) merged[i] = a[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    printf("\n");

    return 0;
}