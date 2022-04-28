#include <stdio.h>

int main() {
    int i, fact = 1, n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = n; i >= 2; i--) {
        fact = fact * i;
    }

    printf("%d", fact);

    return 0;
}