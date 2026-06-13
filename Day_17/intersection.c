#include <stdio.h>

int main() {
    int a[50], b[50];
    int n1, n2;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    printf("Intersection: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                // Check if already printed
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++) {
                    if (a[k] == a[i]) { alreadyPrinted = 1; break; }
                }
                if (!alreadyPrinted) printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}