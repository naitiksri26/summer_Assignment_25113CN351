#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxFreq = 0, maxElem = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0, visited = 0;
        for (int j = 0; j < i; j++)
            if (arr[j] == arr[i]) { visited = 1; break; }
        if (visited) continue;
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i]) count++;
        if (count > maxFreq) {
            maxFreq = count;
            maxElem = arr[i];
        }
    }

    printf("Max frequency element: %d (frequency: %d)\n", maxElem, maxFreq);
    return 0;
}