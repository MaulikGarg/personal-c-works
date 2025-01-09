#include<stdio.h>

int power(int x, int n);

int main()
{

    int num,pow;
    printf("enter a number then its power. (ex: 3 5):\t");
    scanf("%d %d", &num, &pow);
    printf("result: %d", power(num, pow));
    return 0;
}

int power(int x, int n){
    if (n < 1) return 1;

    if(n%2 == 0){
        int i = power(x, n/2);
        return i * i;
    } else {
        return x * power(x, n-1);
    }
    
}