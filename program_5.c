#include <stdio.h>

int main()
{
    int age, income, credit_score;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%d", &income);

    printf("Enter credit score: ");
    scanf("%d", &credit_score);

    if (age < 21 || age > 60)
    {
        printf("Loan rejected: age not in 21 to 60");
    }
    else if (income < 25000)
    {
        printf("Loan rejected: income below Rs.25000");
    }
    else if (credit_score < 700)
    {
        printf("Loan rejected: credit score below 700");
    }
    else
    {
        printf("Loan approved");
    }

    return 0;
}
