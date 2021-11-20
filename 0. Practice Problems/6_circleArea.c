// Practice problem 6.

#include <stdio.h>
#include <conio.h>

#define PI 3.141

int main() {
	float radius, area, pi;

	printf("Enter radius of the circle: ");
	scanf("%f", &radius);

	area = PI * radius * radius;

	printf("The area of the circle is: %f", area);

	return 0;
}