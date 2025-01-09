#include <stdio.h>

int main(int argc, char const *argv[])
{
    long double factorial = 1.0;
    int i = 1, num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = num; i > 1; i--)
    {
        factorial *= i;
    }

    printf("Factorial of %d is: %Lf", num, factorial);
    
    return 0;
}

//short: 7;
