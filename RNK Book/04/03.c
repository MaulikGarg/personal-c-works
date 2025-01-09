#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d1,d2, d3;
    printf("Enter a 3-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("\nThe reversal is: %d%d%d", d3,d2,d1);
    return 0;
}
