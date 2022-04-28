#include <stdio.h>
#include <math.h>

int main()
{
    // Angle & result.
    double x, result;

    // Trigonometric function.
    char T;

    printf("Enter value of the angle in radians and trigonometric function. \n");
    printf("Trigonometric functions: \n");
    printf("\t s/S for sin(). \n\tc/C for cos(). \n\tt/T for tan().\n");
    scanf("%lf %c", &x, &T);

    switch (T)
    {
    case 's':
    case 'S':
        result = sin(x);
        printf("%lf", result);
        break;

    case 'c':
    case 'C':
        result = cos(x);
        printf("%lf", result);
        break;

    case 't':
    case 'T':
        result = tan(x);
        printf("%lf", result);
        break;

    default:
        printf("Invalid input.");
        break;
    }

    return 0;
}