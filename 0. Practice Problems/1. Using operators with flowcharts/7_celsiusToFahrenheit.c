// Practice problem 7.
// Takes temperature in Celsius as input &
// prints temperature in Fahrenheit.

#include <stdio.h>

int main() {
	float c, f;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &c);

	f = ((c*9)/5) + 32;

	printf("Temperature in Fahrenheit: %f", f);

	return 0;
}