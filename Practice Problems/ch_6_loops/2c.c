#include <stdio.h>

int main() {
    int i, n, prod = 1;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2) {
        prod = prod * (i * i);
    }

    printf("%d", prod);

    return 0;
}