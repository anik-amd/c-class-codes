#include <stdio.h>

int main() {
    int i, j, n1, n2, is_prime, count = 0;

    printf("Enter value of n1 & n2: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == 1 || n1 == 0) {
        n1 = 2;
    }

    for(i = n1; i <= n2; i++) {
        is_prime = 0;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                is_prime = 1;
                break;
            }
        }

        if(!is_prime) {
            printf("%d \n", i);
            count += 1;
        }
    }

    if(count == 0) {
        printf("No prime number found within range :(");
    }

    return 0;
}