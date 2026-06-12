#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int pos = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != 0) arr[pos++] = arr[i];
    while (pos < n) arr[pos++] = 0;

    printf("Result: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}