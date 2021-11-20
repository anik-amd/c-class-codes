// Practice Problem 1.
// Takes two numbers as input & prints the sum.
#include <stdio.h>

int main() {
	int a,b,c;

	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);

	c = a + b;

	printf("Result: %d \n", c);
	return 0;
}