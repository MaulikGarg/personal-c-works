#include <stdio.h>

float taxdue(int income)
{
    float tax;
    if (income < 750)
    {
        tax = 0.01 * income;
    }
    else if (income < 2251)
    {
        tax = 7.50 + (2.0 / 100 * (income - 750));
    }
    else if (income < 3751)
    {
        tax = 37.50 + (3.0 / 100 * (income - 2250));
    }
    else if (income < 5251)
    {
        tax = 82.50 + (4.0 / 100 * (income - 3750));
    }
    else if (income < 7001)
    {
        tax = 142.50 + (5.0 / 100 * (income - 5250));
    }
    else
    {
        tax = 230 + (6.0 / 100 * (income - 7000));
    }
    return tax;
}

int main(int argc, char const *argv[])
{
    int income;
    float tax;
    printf("enter your income: ");
    scanf("%d", &income);
    tax = taxdue(income);
    printf("your tax is: %.2f", tax);

    return 0;
}
