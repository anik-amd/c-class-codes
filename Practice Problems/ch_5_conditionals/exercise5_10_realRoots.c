// Constants of quadratic equation are a, b, c.
// Find the real roots of the equation.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, x1, x2;

    printf("Enter constants a, b, c of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (a == 0 && b == 0)
    {
        printf("No solution.");
    }
    else if (discriminant < 0)
    {
        printf("There are no real roots.");
    }
    else if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real roots are x1: %f & x2: %f.", x1, x2);
    }
    else if (discriminant == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("Only one root. x1 = x2 = %f.", x1);
    }

    return 0;
}