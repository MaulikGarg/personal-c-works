#include <stdio.h>

#define NUM_COUNT (int) (sizeof(a) / sizeof(a[0]))

int main(void)
{
  int a[10], i;

  printf("Enter %d numbers: ", NUM_COUNT);
  for (i = 0; i < NUM_COUNT; i++)
    scanf("%d", &a[i]);

  printf("In reverse order:");
  for (i = NUM_COUNT - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}