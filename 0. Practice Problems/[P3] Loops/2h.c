#include <stdio.h>

int main() {
    int i, n, sum = 0, term = 1, next_term = 5;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + term;
        term = next_term;
        next_term = next_term + 4;
    }

    printf("%d", sum);

    return 0;
}

// 1,