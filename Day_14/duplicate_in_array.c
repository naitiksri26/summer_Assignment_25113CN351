#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Duplicates: ");
    int found = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j]) { printf("%d ", arr[i]); found = 1; break; }
    if (!found) printf("None");
    printf("\n");
    return 0;
}