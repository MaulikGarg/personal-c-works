#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char sign;
    double current = 0.0, result;
    printf("Enter an expression: ");
    scanf("%lf", &result);

    while ((sign = getchar()) != '\n')
    {
        switch (sign)
        {
        case '+':
            scanf("%lf", &current);
            result += current;
            break;
        case '-':
            scanf("%lf", &current);
            result -= current;
            break;
        case '*':
            scanf("%lf", &current);
            result *= current;
            break;
        case '/':
            scanf("%lf", &current);
            result /= current;
            break;

        default:
            break;
        }
    }

    printf("%f", result);
}
