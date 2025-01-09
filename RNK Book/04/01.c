#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("\nThe reversal is: %d%d", num%10, num/10);
    return 0;
}
