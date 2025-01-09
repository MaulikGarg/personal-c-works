#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    printf("\nThe reversal is: %d%d%d", num%10, (num/10)%10, (num/100)%10);
    return 0;
}
