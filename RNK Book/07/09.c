#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int user_time,
        hour,
        minute;

    char format;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d%c", &hour, &minute, &format);
    
    if ((toupper(format)) == 'P' && hour != 12)
    {
        hour += 12;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);


}