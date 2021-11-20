// Practice problem 7.

#include <stdio.h>

int main() {
	float c, f;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &c);

	f = ((c*9)/5) + 32;

	printf("temperature in Fahrenheit: %f", f);

	return 0;
}