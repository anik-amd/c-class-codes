#include <stdio.h>

int main() {
    int i, n, sum = 1;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2) {
        sum = sum * (i * i);
    }

    printf("%d", sum);

    return 0;
}