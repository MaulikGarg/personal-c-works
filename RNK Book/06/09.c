#include <stdio.h>

int main(void) {

    float loan = 0.0f, rate = 0.0f, payment = 0.0f;
    int numOfPays;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of payments completed: ");
    scanf("%d", &numOfPays);


  for (int i = 1; i <= numOfPays; i++)
  {
    loan = loan - payment + (loan * rate / 100.0 / 12.0);
    printf("Balance remaining after payment number %d: $%.2f\n", i, loan);
  }

    return 0;
}