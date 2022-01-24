// Practice problem 5.
// Takes width & length of rectangle & calculates the area.

#include <stdio.h>

int main() {
	float width, length, area;

	printf("Enter width & length of the rectangle with space: \n");
	scanf("%f %f", &width, &length);

	area = width*length;

	printf("Area of the rectangle: \n %f", area);

	return 0;
}