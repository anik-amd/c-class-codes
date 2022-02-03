#include <stdio.h>

int main()
{
    int level, basic_pay, perks;
    float gross_salary, net_pay;

    printf("Enter level & basic pay: ");
    scanf("%d %d", &level, &basic_pay);

    if (level < 1 || level > 4 || basic_pay < 0)
    {
        printf("Invlid input.");
    }
    else
    {
        switch (level)
        {
        case 1:
            perks = 1000 + 500;
            break;
        case 2:
            perks = 750 + 200;
            break;
        case 3:
            perks = 500 + 100;
            break;
        case 4:
            perks = 250;
            break;
        }

        gross_salary = basic_pay + basic_pay * 0.25 + perks;

        if (gross_salary <= 2000)
        {
            net_pay = gross_salary;
        }
        else if (gross_salary <= 4000)
        {
            net_pay = gross_salary - gross_salary * 0.03;
        }
        else if (gross_salary <= 5000)
        {
            net_pay = gross_salary - gross_salary * 0.05;
        }
        else
        {
            net_pay = gross_salary - gross_salary * 0.08;
        }

        printf("Net pay: %.2f", net_pay);
    }

    return 0;
}