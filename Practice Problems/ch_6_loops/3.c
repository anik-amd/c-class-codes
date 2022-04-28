#include <stdio.h>

int main() {
    int term, nth_term, temp, current_term_value = 0, next_term_value = 1, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &nth_term);

    for(term = 1; term <= nth_term; term++) {
        sum = sum + current_term_value;

        // for the next loop.
        temp = current_term_value;
        current_term_value = next_term_value;
        next_term_value = next_term_value + temp;
    }

    printf("%d", sum);

    return 0;
}