#include <stdio.h>

int main(void)
{

  int user_time,
      hour,
      minute,
      dep[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
      arr[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438}, found = 0;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hour, &minute);
  user_time = hour * 60 + minute;

  if (user_time <= dep[0] + (dep[1] - dep[0]) / 2)
  {
    printf("8:00 a.m., arriving at 10:16 a.m.\n");
    found++;
  }
  else if (user_time <= dep[6] + (dep[7] - dep[6]) / 2)
  {
    for (int i = 1; found == 0; i++)
    {
      if (user_time <= dep[i] + (dep[i + 1] - dep[i]) / 2)
      {
        printf("Closest departure time is %d:%d", dep[i] / 60, dep[i] % 60);
        if (dep[i] < 720)
        {
          printf("a.m., ");
        }
        else
        {
          printf("p.m., ");
        }
        printf("arriving at %d:%d", arr[i] / 60, arr[i] % 60);
        if (arr[i] < 720)
        {
          printf("a.m.");
        }
        else
        {
          printf("p.m.");
        }
        found++;
      }
    }
  }
  else
  {
    printf("9:45 p.m., arriving at 11:58 p.m.\n");
  }

  return 0;
}