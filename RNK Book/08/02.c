#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  int digit_count[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  printf("Digit:        0 1 2 3 4 5 6 7 8 9");
  printf("\nOccurrences:  ");

  while (n > 0)
  {
    digit = n % 10;

    digit_count[digit]++;

    n /= 10;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", digit_count[i]);
  }

  return 0;
}