#include <stdio.h>

int main() {
    int n1, n2, gcd, lcm, i, min;

    printf("Enter value of n1 & n2: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2) {
        min = n2;
    } else {
        min = n1;
    }

    for(i = 1; i <= min; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    lcm = n1 * n2 / gcd;

    printf("GCD: %d & LCM: %d", gcd, lcm);

    return 0;
}