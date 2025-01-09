#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grp1, grp2, grp3;
    printf("Enter phone number [(xxx) xxx-xxxx]");
    scanf("(%d) %3d-%d", &grp1, &grp2, &grp3);
    printf("you entered %d.%d.%d", grp1, grp2, grp3);
    return 0;
}
