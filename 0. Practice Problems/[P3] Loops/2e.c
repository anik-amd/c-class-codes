#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum = sum - i;
        } else {
            sum = sum + i;
        }
    }

    printf("%d", sum);

    return 0;
}