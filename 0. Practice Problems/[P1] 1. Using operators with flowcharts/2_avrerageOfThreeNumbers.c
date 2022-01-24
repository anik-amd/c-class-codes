// Practice Problem 2.
// Takes three numbers as input & prints the average.
#include <stdio.h>

int main() {
	int n1, n2, n3;
	float average;

	printf("Enter three numbers: \n");
	scanf("%d %d %d", &n1, &n2, &n3);

	// (n1 + n2 + n3)/3 will always return integer.
	// But average could be float.
	// So to make the statement return float
	// we write 3.0 instead of 3.
	// It converts the whole expression into float.
	// This problem can also be solved
	// by taking all the values (n1,n2,n3,average) as float.
	average = (n1+n2+n3)/3.0;

	printf("Average: %f", average);

	return 0;
}