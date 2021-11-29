// Practice problem 8.
// Takes temperature in Fahrenheit as input &
// prints temperature in Celsius.

#include <stdio.h>

int main() {
	float c, f;

	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &f);

	c = ((f - 32) * 5) / 9;

	printf("Temperature in  Celsius: %f", c);
	
	return 0;
}