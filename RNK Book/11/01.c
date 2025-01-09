#include <stdio.h>

void pay_amount(int money, int *twenties, int *tens, int *fives, int *ones);

int main(void) {

    int money = 0, twenties, tens, fives, ones;
    twenties = tens = fives = ones = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &money);

    pay_amount(money, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);

    printf("$10 bills: %d\n", tens);

    printf(" $5 bills: %d\n", fives);

    printf(" $1 bills: %d\n", ones);


    return 0;
}

void pay_amount(int money, int *twenties, int *tens, int *fives, int *ones){

    *twenties = money/20;
    money -= 20 * (*twenties);

    *tens = money/10;
    money -= 10 * (*tens);

    *fives = money/5;
    money -= 5 * (*fives);

    *ones = money;
}