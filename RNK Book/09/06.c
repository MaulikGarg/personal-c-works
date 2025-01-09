#include<stdio.h>

int polynomial(int x);

int main()
{
    int x;
    printf("enter x: ");
    scanf("%d", &x);
    printf("result is %d", polynomial(x));

    return 0;
}

int polynomial(int x){
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x 
           + 7 * x - 6;
}