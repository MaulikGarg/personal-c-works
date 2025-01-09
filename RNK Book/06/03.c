#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, den, n1,n2;

    printf("enter the fraction a/b: ");
    scanf("%d/%d", &num, &den);

    n1 = num;
    n2 = den;

    while (n2 != 0) //n1 is the gcd
    {
        int remainder = n1%n2;
        n1 = n2;
        n2 = remainder;

    }

    printf("in lowest terms: %d/%d", num/n1, den/n1);


    return 0;
}
