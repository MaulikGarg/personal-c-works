#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, sum1, sum2;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11); 

    sum1 = d1+ d3+ d5+ d7+ d9+ d11;
    sum2 = d2+ d4+ d6+ d8+ d10;

    printf("Check digit: %d\n", 10 - ((3*sum1)+sum2) % 10);

    return 0;
}

//to check: 01380015173  expected: 5