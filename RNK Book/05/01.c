#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,d;
    scanf("%d", &n);
    
    if (n >= 0 && n <= 9)
        d = 1;
    else if (n >= 10 && n <= 99)
        d = 2;
    else if (n >= 100 && n <= 999)
        d = 3;
    else if (n >= 1000 && n <= 9999)
        d = 4;

    printf("%d digits", d);
    return 0;
}
