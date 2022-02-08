#include <stdio.h>

int main() {
    int input;
    int term = 1, next_term = 2, old_term, sum = 0;

    scanf("%d", &input);

do_sum:
    if (next_term % 2 == 0) {
        sum = sum + next_term;
    }
    old_term = term;
    term = next_term;
    next_term = next_term + old_term;
    if (next_term <= input) {
        goto do_sum;
    } else {
        printf("%d", sum);
    }

    return 0;
}