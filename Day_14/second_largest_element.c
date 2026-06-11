#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int first = -1e9, second = -1e9;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) { second = first; first = arr[i]; }
        else if (arr[i] > second && arr[i] != first) second = arr[i];
    }
    if (second == -1e9) printf("No second largest\n");
    else printf("Second largest = %d\n", second);
    return 0;
}