#include <stdio.h>

int main(int argc, char const *argv[])
{
    int y1, y2, m1, m2, d1, d2;
    printf("enter the two dates dd/mm/yy dd/mm/yy: ");
    scanf("%d/%d/%d %d/%d/%d", &d1,&m1,&y1,&d2,&m2,&y2);

    if (y1 < y2)
    {
        printf("first date comes early!");
    } else if (m1 < m2 && y1==y2){
        printf("first date comes early!");
    } else if(d1 < d2 && y1==y2 && m1==m2){
        printf("first date comes early!");
    } else {
        printf("second date comes early!");
    }
    return 0;
}
