// Practice problem 1.
// Checks whether a number is even or odd.

#include <stdio.h>

int main() {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number % 2 == 0) {
		printf("%d is even.", number);
	} else {
		printf("%d is odd.", number);
	}

	return 0;
}