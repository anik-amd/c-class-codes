// Exercise 3.1
// from chapter 3
// of Programming in ANSI C, Balagurusamy (4th edition).

#include <stdio.h>

int main() {
    int x, y, z, temp;

    printf("Enter value of x, y & z: ");
    scanf("%d %d %d", &x, &y, &z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("Value of x, y & z after rotating: %d %d %d", x, y, z);

    return 0;
}