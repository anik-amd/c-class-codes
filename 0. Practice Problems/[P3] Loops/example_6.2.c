#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter value of Row & Column: ");
    scanf("%d %d", &r, &c);

    for(i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            printf("%d \t", j * i);
        }
        printf("\n");
    }

    return 0;
}

// 01 02 03 04 05
// 02 04 06 08 10
// 03 06 09 12 15