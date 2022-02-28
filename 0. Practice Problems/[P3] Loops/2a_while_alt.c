#include <stdio.h>

int main() {
    int i = 1, j, n, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    while(i <= n) {
        j = i;
        i++;
        sum = sum + j;
    }

    printf("%d", sum);

    return 0;
}