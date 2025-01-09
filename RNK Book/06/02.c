#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("enter num1: ");
    scanf("%d", &n1);
    printf("enter num2: ");
    scanf("%d", &n2);

    while (n2 != 0)
    {
        int remainder = n1%n2;
        n1 = n2;
        n2 = remainder;

    }

    printf("%d", n1);
    
    return 0;
}
