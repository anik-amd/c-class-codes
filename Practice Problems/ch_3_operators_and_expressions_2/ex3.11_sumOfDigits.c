// Exercise 3.11
// from chapter 3
// of Programming in ANSI C, Balagurusamy (4th edition).

#include <stdio.h>

int main () {
    int number, firstDigit, secondDigit, thirdDigit, fourthDigit, sum;

    printf("Enter a four digit number: "); // 1234
    scanf("%d", &number);

    fourthDigit = number % 10;
    thirdDigit = (number / 10) % 10;
    secondDigit = (number / 100) % 10;
    firstDigit = (number / 1000) % 10;

    sum = firstDigit + secondDigit + thirdDigit + fourthDigit;

    printf("Sum is %d", sum);

    return 0;
}