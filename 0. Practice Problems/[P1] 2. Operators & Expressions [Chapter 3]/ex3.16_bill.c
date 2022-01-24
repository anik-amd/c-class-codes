#include <stdio.h>

int main() {
	float bill;
	int numberOfCalls;

	printf("Enter number of calls: \n");
	scanf("%d", &numberOfCalls);

	if (numberOfCalls > 100) {
		bill = 250 + numberOfCalls * 1.25;
	} else {
		bill = 250;
	}

	printf("Bill is %f \n", bill);

	return 0;
}