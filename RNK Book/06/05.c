#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, revnum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        revnum = (num%10) + (revnum * 10);
        num/=10;
    }

    printf("revnum is: %d", revnum);
    
    return 0;
}
