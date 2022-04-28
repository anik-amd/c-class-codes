#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (i * (i + 1));
    }

    printf("%d", sum);

    return 0;
}