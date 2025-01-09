#include <stdio.h>

int main(int argc, char const *argv[])
{
   int date, month, year;
   printf("enter mm/dd/yyyy: ");
   scanf("%2d/%2d/%d", &month, &date, &year);
   printf("You entered the date %.4d/%.2d/%.2d", year, month, date);

}
