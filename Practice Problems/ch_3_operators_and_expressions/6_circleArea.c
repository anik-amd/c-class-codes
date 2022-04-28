// Practice problem 6.
// Takes radius of a circle as input & prints area of the circle.

#include <stdio.h>

#define PI 3.141

int main() {
    float radius, area;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle is: %f", area);

    return 0;
}