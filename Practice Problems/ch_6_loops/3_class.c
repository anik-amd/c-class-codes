#include <stdio.h>

int main() {
    int a = 0, b = 1, c, sum = 0, i, n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        c = a + b;
        sum = sum + a;
        a = b;
        b = c;
    }

    printf("Sum: %d", sum);

    return 0;
}