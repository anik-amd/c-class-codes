// Practice problem 10.
// Takes a floating-point number &
// outputs ceil, round & floor of the number.

#include <stdio.h>
#include <math.h>

int main() {
    float a;
    int ce, ro, fl;

    printf("Enter a floating-point number: ");
    scanf("%f", &a);

    ce = ceil(a);
    ro = round(a);
    fl = floor(a);

    printf("Ceil of %f: %d \n", a, ce);
    printf("Round of %f: %d \n", a, ro);
    printf("Floor of %f: %d \n", a, fl);

    return 0;
}