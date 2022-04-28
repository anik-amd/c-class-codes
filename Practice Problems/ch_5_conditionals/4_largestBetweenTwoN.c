// Practice problem 4.
// Finds the largest number between two numbers.

#include <stdio.h>

int main() {
	int n1, n2;

	printf("Enter two numbers: ");
	scanf("%d %d",&n1, &n2);

	if (n1 > n2) {
		printf("%d is the largest number.\n", n1);
	} else {
		printf("%d is the largest number.\n", n2);
	}

	return 0;
}