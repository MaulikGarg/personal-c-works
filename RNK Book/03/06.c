#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, den1, den2, resultNum, resultDen;
    printf("Enter two fractions seperated by a plus sign:");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);
    resultNum = (num1*den2) + (num2 * den1);
    resultDen = den1  * den2;
    printf("\nSum of the fractions is: %d/%d", resultNum, resultDen);
    return 0;
}