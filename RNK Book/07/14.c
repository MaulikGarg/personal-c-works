#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num, root = 1.0;

    printf("Enter the number: ");
    scanf("%lf", &num);

    while (fabs((root + num / root) / 2 - root) > root*0.00001)
    {
        root = ( (root + num / root) / 2);
    }
    printf("%lf", root);
    
    return 0;
}
