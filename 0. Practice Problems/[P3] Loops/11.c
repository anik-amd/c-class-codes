#include <stdio.h>

int main() {
    int n, last_digit, rev = 0, temp;

    printf("Enter value of N: ");
    scanf("%d", &n);

    temp = n;
    while(n != 0) {
        last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }

    if(temp == rev) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}