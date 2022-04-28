// Check if the entered number is armstrong or not.

// 1. Take the number.
// 2. Find number of digits.
// 3. Check if it's armstrong.

#include <stdio.h>
#include <math.h>

int main() {
    int n, i, temp, digits = 0, sum = 0, last_digit;

    printf("Enter value of N: ");
    scanf("%d", &n);

    // Find number of digits.
    temp = n;
    while(temp != 0) {
        temp = temp / 10;
        digits++;
    }

    // printf("%d \n", digits);

    // Check if it's armstrong.
    temp = n;
    while(temp != 0) {
        last_digit = temp % 10;
        sum = sum + round(pow(last_digit, digits));
        temp = temp / 10;
    }

    // printf("%d \n", sum);

    if(n == sum) {
        printf("Armstrong number.");
    } else {
        printf("Not Armstrong number :(");
    }

    return 0;
}