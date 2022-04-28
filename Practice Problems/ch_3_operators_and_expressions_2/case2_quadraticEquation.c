// Case study 2
// from chapter 3
// of Programming in ANSI C, Balagurusamy (4th edition).

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter value of a, b & c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = ((-b) + sqrt(discriminant)) / (2 * a);
        root2 = ((-b) - sqrt(discriminant)) / (2 * a);

        printf("Root 1: %f. \n", root1);
        printf("Root 2: %f. \n", root2);
    } else {
        printf ("Roots are imaginary.");
    }

    return 0;
}