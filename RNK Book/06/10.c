#include <stdio.h>

int main(int argc, char const *argv[])
{
  int year, month, date, smallYear = 9999, smallMonth = 99, smallDate = 99;

  do
  {
    printf("Enter a date: dd/mm/yyyy : ");
    scanf("%d/%d/%d", &date, &month, &year);

    if (year == 0 && month == 0 && date == 0)
    {
      break;
    }
    
    if (year < smallYear)
    {
      smallYear = year;
      smallMonth = month;
      smallDate = date;
    }
    else if (month < smallMonth && year == smallYear)
    {
      smallMonth = month;
      smallDate = date;
    }
    else if (date < smallDate && month == smallMonth && year == smallYear)
    {
      smallDate = date;
    }

  } while (year != 0 && month != 0 && date != 0);

  printf("Earliest date is: %d/%d/%d", smallDate, smallMonth, smallYear);

  return 0;
}
