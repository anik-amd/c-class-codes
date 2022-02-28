#include <stdio.h>

int main() {
    int n;
    float i, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (1 / i);
    }

    printf("%f", sum);

    return 0;
}