#include <stdio.h>

int main() {
    int n, i, temp, last_digit, fact, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0) {
        last_digit = temp % 10;

        fact = 1;
        for (i = last_digit; i != 1; i--) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n) {
        printf("Strong number.");
    } else {
        printf("Not a strong number.");
    }

    return 0;
}