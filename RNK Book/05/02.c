#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h,m;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);
    if (h>12)
    {
        h = h - 12;
    }
    if (h == 24){
        h = 12;
    }
    printf("Equivalent 12-hour time: %d:%d", h,m);
    
    return 0;
}
