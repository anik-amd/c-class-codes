// Practice problem 4.
// Takes three sides of a triangle & calculates the area.

#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3, s, t, area;

    printf("Enter three sides of the triangle with space: \n");
    scanf("%f %f %f", &side1, &side2, &side3);

    s = (side1 + side2 + side3) / 2;
    t = s * (s - side1) * (s - side2) * (s - side3);
    area = sqrt(t);

    printf("Area of the triangle is: \n %f", area);

    return 0;
}