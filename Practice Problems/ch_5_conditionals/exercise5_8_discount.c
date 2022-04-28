#include <stdio.h>

int main()
{
    int purchase_amount, type;
    float payment;

    printf("Enter purchase amount: \n");
    scanf("%d", &purchase_amount);

    printf("Select type: \n");
    printf("\t 1. Mill cloth \n");
    printf("\t 2. Handloom items \n");
    scanf("%d", &type);

    if (purchase_amount < 0 || type < 1 || type > 2)
    {
        printf("Invalid input.");
    }
    else
    {
        switch (type)
        {
        case 1:
            if (purchase_amount <= 100)
            {
                payment = purchase_amount;
            }
            else if (purchase_amount <= 200)
            {
                payment = purchase_amount - purchase_amount * 0.05;
            }
            else if (purchase_amount <= 300)
            {
                payment = purchase_amount - purchase_amount * 0.075;
            }
            else
            {
                payment = purchase_amount - purchase_amount * 0.10;
            }
            break;

        case 2:
            if (purchase_amount <= 100)
            {
                payment = purchase_amount - purchase_amount * 0.05;
            }
            else if (purchase_amount <= 200)
            {
                payment = purchase_amount - purchase_amount * 0.075;
            }
            else if (purchase_amount <= 300)
            {
                payment = purchase_amount - purchase_amount * 0.10;
            }
            else
            {
                payment = purchase_amount - purchase_amount * 0.15;
            }
            break;
        }
        printf("%.2f", payment);
    }

    return 0;
}