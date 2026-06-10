#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is not a Palindrome\n", n);
    return 0;
}