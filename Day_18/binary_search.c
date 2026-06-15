#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in SORTED order: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;  // safer than (low+high)/2 to avoid overflow
        if (arr[mid] == key) {
            printf("Element found at index %d (position %d)\n", mid, mid + 1);
            return 0;
        }
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    printf("Element not found.\n");
    return 0;
}