#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int pDiag = 0, sDiag = 0;
    for (int i = 0; i < n; i++) {
        pDiag += a[i][i];
        sDiag += a[i][n - 1 - i];
    }
    printf("Primary Diagonal Sum: %d\n", pDiag);
    printf("Secondary Diagonal Sum: %d\n", sDiag);
    return 0;
}