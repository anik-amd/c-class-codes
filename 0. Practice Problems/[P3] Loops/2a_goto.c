#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

do_sum:
    sum = sum + i;
    i++;

    if(i <= n) {
        goto do_sum;
    }

    printf("%d", sum);

    return 0;

}