#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    bool repeated_digit[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digits:");

    while (n > 0)
    {
        digit = n % 10;

        if (digit_seen[digit])
        {
            repeated_digit[digit] = true;
        }

        digit_seen[digit] = true;

        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (repeated_digit[i])
        {
            printf("%d ", i);
        }
    }

    return 0;
}