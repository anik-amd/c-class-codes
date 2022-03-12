#include <stdio.h>

int main() {
    int n1, n2, i, last_digit, rev = 0, temp;

    printf("Enter value of n1 & n2: ");
    scanf("%d %d", &n1, &n2);

    for(i = n1; i <= n2; i++) {
        if (i == 0) continue;
        temp = i;

        while(i != 0) {
            last_digit = i % 10;
            rev = rev * 10 + last_digit;
            i = i / 10;
        }

        if(temp == rev) {
            printf("%d \n", temp);
        }

        i = temp;
        rev = 0;
    }

    return 0;
}