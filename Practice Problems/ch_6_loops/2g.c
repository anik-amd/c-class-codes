#include <stdio.h>

int main() {
    int i, j, k, n, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1, j = 3, k = 4; i <= n; i++) {
        sum = sum + i * j * k;
        j += 2;
        k += 2;
    }

    printf("%d", sum);

    return 0;
}