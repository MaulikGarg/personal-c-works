#include <stdio.h>

int main(void)
{
  long i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    printf("%10d%10d\n", i, i * i);

  return 0;
}

/* int: 46341
short: 182
long: 3037000500
*/