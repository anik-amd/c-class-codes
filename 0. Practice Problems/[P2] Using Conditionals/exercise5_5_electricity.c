#include <stdio.h>

int main()
{
    char name[30];
    int units;
    float charge, subcharge;

    printf("Enter user name & units consumed: \n");
    scanf("%[^\n]s", &name);
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid input.");
    }
    else
    {
        if (units < 100)
        {
            charge = 100;
        }
        else if (units <= 200)
        {
            charge = units * 0.80;
        }
        else if (units <= 300)
        {
            charge = (200 * 0.80) + (units - 200) * 0.90;
        }
        else
        {
            charge = units * 1;
        }

        if (charge > 400)
        {
            subcharge = charge * 0.15;
            charge = charge + subcharge;
        }

        printf("%s is charged %.2f.", name, charge);
    }

    return 0;
}