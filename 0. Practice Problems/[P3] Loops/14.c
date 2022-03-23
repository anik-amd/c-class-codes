// Print Armstrong number within range.

// 1. Take n.
// 2. Start a natural number series to n.
//  2.1. Take m of series n.
//  2.2. Find the number of digits of m.
//  2.3. Check if m is armstrong.

#include <stdio.h>
#include <math.h>

int main() {
    int n, m, temp, digits, sum, last_digit;

    printf("Enter value of N: ");
    scanf("%d", &n);

    // Start the series to n.
    for(m = 1; m != n; m++) {
        sum = 0;
        digits = 0;

        // Find number of digits in m.
        temp = m;
        while(temp != 0) {
            temp = temp / 10;
            digits++;
        }

        // Check if it's armstrong.
        temp = m;
        while(temp != 0) {
            last_digit = temp % 10;
            sum = sum + round(pow(last_digit, digits));
            temp = temp / 10;
        }

        // printf("%d \n", sum);

        if(m == sum) printf("%d \n", m);
    }

    return 0;
}