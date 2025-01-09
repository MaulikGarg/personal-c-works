#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i*i <= num; i++)
    {
        printf("%d\n", i*i);
    }
    
    return 0;
}
