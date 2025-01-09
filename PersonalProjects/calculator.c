#include <stdio.h>
#include <ctype.h>

// prototype function
double getNumber();

int main()
{

    while (1)
    {
        // gain input from user
        char operator;
        double result;
        printf("Enter an operator (+, -, *, /): ");
        scanf("%c", &operator);

        double num1 = getNumber();
        double num2 = getNumber();

        // switch statement to call functions based on operator
        switch (operator)
        {
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;

        default:
            break;
        }

        printf("Result: %.2f\n", result);

        // ask user if they want to continue
        printf("Do you want to terminate? (Enter n): ");
        char choice;
        scanf("%c", &choice);
        if(tolower(choice) != 'n')
            break;
    }

    return 0;
}

// get number from user
double getNumber(){
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    return num;
}
