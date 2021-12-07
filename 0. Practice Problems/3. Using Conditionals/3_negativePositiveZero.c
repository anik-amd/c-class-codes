// Practice problem 2.
// Checks whether a number is negative, positive or equal to zero.

#include <stdio.h>

int main() {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number > 0) {
		printf("%d is positive.\n", number);
	} else if(number < 0) {
		printf("%d is negative.\n", number);
	} else {
		printf("The number is zero.\n");
	}

	return 0;
}