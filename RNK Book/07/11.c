#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name;
    printf("Enter a first and last name: ");
    
    char firstname = getchar();

    while (getchar () != ' ')
    ;

    while ((name = getchar()) != '\n')
    {
        putchar(name);
    }

    printf(", %c.", firstname);
    
}
