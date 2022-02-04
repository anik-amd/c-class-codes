// Practice Problem 3.
// Takes base & height as input & prints the area of the triangle.

#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of the triangle: \n");
    scanf("%f", &base);

    printf("Enter height of the triangle: \n");
    scanf("%f", &height);

    area = (base * height) / 2;

    // %0.2f to print two digits only after the floating point.
    printf("Area of the triangle is: \n%0.2f", area);

    return 0;
}