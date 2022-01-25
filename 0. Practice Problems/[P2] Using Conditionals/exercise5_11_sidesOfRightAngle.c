// Takes theree sides of an triangle & checks if it's a right angle.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter values of three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    // First check if its a triangle.
    if (a + b > c && a + c > b && b + c > a)
    {
        // Now check if its a right angle.
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            printf("It is a right angled triangle.");
        }
        else
        {
            printf("It is not a right angled triangle.");
        }
    }
    else
    {
        printf("It is not a triangle.");
    }

    return 0;
}