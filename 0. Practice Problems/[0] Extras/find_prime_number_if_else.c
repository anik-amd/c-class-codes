// Find prime number using if else statement.
// Be prepared! Loops ahead!

#include <stdio.h>
int main() {
    int n, d = 2;

    scanf("%d", &n);

do_div:
    // If the divider is equal to the number,
    // increment the divider by 1 then continue.
    if (n == d) {
        d = d + 1;
    }

    // When the divider is less then 9.
    if(d <= 9) {
        // When number modulas divider is 0.
        if(n % d != 0) {
            d = d + 1;
            goto do_div;
        } else {
            printf("Prime!");
        }
    } else {
        printf("Not prime!");
    }

    return 0;
}