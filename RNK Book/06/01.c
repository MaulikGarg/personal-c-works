#include <stdio.h>

int main(int argc, char const *argv[])
{
    float current, largest = 0;
    for (; ;)
    {
        printf("enter a number: ");
        scanf("%f", &current);

        if (current > largest)
        {
            largest = current;
        }
        if (current == 0)
        {
            break;
        }
        
    }
    
    printf("largest number was: %.2f", largest);
    
    return 0;
}
