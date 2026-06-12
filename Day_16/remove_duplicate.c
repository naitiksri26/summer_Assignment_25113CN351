#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int res[n], size = 0;
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int j = 0; j < size; j++)
            if (res[j] == arr[i]) { dup = 1; break; }
        if (!dup)
            res[size++] = arr[i];
    }

    printf("After removing duplicates: ");
    for (int i = 0; i < size; i++)
        printf("%d ", res[i]);
    printf("\n");

    return 0;
}