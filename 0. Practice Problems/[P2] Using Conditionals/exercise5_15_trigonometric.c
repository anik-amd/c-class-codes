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

    if (T == 'S' || T == 's')
    {
        result = sin(x);
    }
    else if (T == 'C' || T == 'c')
    {
        result = cos(x);
    }
    else if (T == 'T' || T == 't')
    {
        result = tan(x);
    }

    printf("%lf", result);

    return 0;
}