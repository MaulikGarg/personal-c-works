#include <stdio.h>

int main(int argc, char const *argv[])
{
    int days, weekstart;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &weekstart);
    printf("  M  T  W  T  F  S  S\n");

    for (int i = 1, day = 1; i < days + weekstart; i++)
    {
        if (i < weekstart)
        {
            printf("   ");
        }
        else
        {
            printf("%3d", day);
            day++;
        }

        if (i % 7 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
