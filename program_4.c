#include <stdio.h>

int main()
{
    float amount, discount, finalAmount;

    printf("Enter order amount: ");
    scanf("%f", &amount);

    if (amount >= 1000)
    {
        discount = amount * 0.10;
    }
    else
    {
        discount = 0;
    }

    finalAmount = amount - discount;

    printf("Final amount = %.2f", finalAmount);

    return 0;
}
