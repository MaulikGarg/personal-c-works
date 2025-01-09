#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num1, num2, den1, den2, resultNum, resultDen;
    char sign;

    printf("Enter two fractions seperated by a plus sign: ");

    scanf("%d/%d%c%d/%d", &num1, &den1, &sign, &num2, &den2);

    if (sign == '+')
    {
        resultNum = (num1 * den2) + (num2 * den1);
        resultDen = den1 * den2;
        printf("Sum of the fractions is: %d/%d", resultNum, resultDen);
    }
    else if (sign == '-')
    {
        resultNum = (num1 * den2) - (num2 * den1);
        resultDen = den1 * den2;
        printf("Sum of the fractions is: %d/%d", resultNum, resultDen);
    }
    else if (sign == '*')
    {
        printf("Sum of the fractions is: %d/%d", num1 * num2, den1 * den2);
    }
    else if (sign == '/')
    {
        printf("Sum of the fractions is: %d/%d", num1 * den2, den1 * num2);
    }

    return 0;
}