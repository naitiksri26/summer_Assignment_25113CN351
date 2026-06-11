#include <stdio.h>
int main() {
    int n, a[100], even = 0, odd = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d\nOdd = %d\n", even, odd);
    return 0;
}