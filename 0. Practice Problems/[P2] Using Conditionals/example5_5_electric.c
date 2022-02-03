#include <stdio.h>

int main()
{
    int units;
    float charge;

    printf("Enter unit: ");
    scanf("%d", &units);

    if (units >= 0)
    {
        if (units <= 200)
        {
            charge = 200 * 0.50;
        }
        else if (units <= 400)
        {
            charge = 100 + (units - 200) * 0.65;
        }
        else if (units <= 600)
        {
            charge = 230 + (units - 400) * 0.80;
        }
        else
        {
            charge = 390 + (units - 600) * 1;
        }
        printf("Charge: %.2f", charge);
    }
    else
    {
        printf("Invalid input.");
    }

    return 0;
}