#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("enter four integers: ");
    int i1,i2,i3,i4;
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 > i2 && i1> i3 && i1 > i4)
    {
        printf("i1");
    }
    if (i2 > i1 && i2> i3 && i2 > i4)
    {
        printf("i2");
    }
    if (i3 > i2 && i3> i1 && i3 > i4)
    {
        printf("i3");
    }
    if (i4 > i2 && i4> i1 && i4 > i1)
    {
        printf("i4");
    }
    
    return 0;
}
