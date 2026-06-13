#include <stdio.h>

int main() {
    int a[50], b[50], uni[100];
    int n1, n2, size = 0;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for (int i = 0; i < n1; i++) { scanf("%d", &a[i]); uni[size++] = a[i]; }

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (b[i] == uni[j]) { found = 1; break; }
        }
        if (!found) uni[size++] = b[i];
    }

    printf("Union: ");
    for (int i = 0; i < size; i++) printf("%d ", uni[i]);
    printf("\n");

    return 0;
}