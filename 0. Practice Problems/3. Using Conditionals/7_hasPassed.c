// Practice problem 7.
// Checks whether a student is passed or failed.

#include <stdio.h>

int main() {
	float mark;

	printf("Enter mark: ");
	scanf("%f", &mark);

	if(mark >= 40) {
		printf("Passed!\n");
	} else {
		printf("Failed!\n");
	}

	return 0;
}