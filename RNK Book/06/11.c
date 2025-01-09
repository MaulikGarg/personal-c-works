#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num;
  float e = 1;
  printf("enter the num: ");
  scanf("%d", &num);

  for (int i = 1, den = 1; i <= num; i++)
  {
    e += 1.0 / (den * i);
    den *= i;
  }
  printf("e : %f", e);
  return 0;
}
