// a, b, c, d, m, n are four constants of two different linear equations.
// Find solution: x1 & x2.

#include <stdio.h>

int main()
{
    int a, b, c, d, m, n, denominator, x1, x2;

    printf("Enter values of constants a, b, c, d, m, n: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);

    denominator = a * d - c * b;

    if (denominator != 0)
    {
        x1 = (m * d - b * n) / (a * d - c * b);
        x2 = (n * a - m * c) / (a * d - c * b);
        printf("Solution is x1 = %d & x2 = %d", x1, x2);
    }
    else
    {
        printf("The set doesn't have a unique solution.");
    }

    return 0;
}