// Practice problem 9.
// Takes two numbers, stores in a & b variable &
// swaps value of a & b variable.

#include <stdio.h>

int main() {
	int a,b,temp;

	printf("Enter value of first number (a): ");
	scanf("%d", &a);

	printf("Enter value of second number (b): ");
	scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("After swapping, value of a is %d & value of b is %d. \n", a ,b);

	return 0;
}