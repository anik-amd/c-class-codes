#include <stdio.h>

int main() {
    int i, n, digit = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    while(n != 0) {
        n = n / 10;
        digit++;
    }

    printf("%d", digit);

    return 0;
}