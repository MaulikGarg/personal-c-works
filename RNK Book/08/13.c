#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name, lastname[20];
    int i = 0;
    printf("Enter a first and last name: ");
    
    char firstname = getchar();

    while (getchar () != ' ')
    ;

    while ((name = getchar()) != '\n')
    {
        lastname[i++] = name;
    }

    for (int j = 0; lastname[j] != '\0'; j++)
    {
        printf("%c", lastname[j]);
    }
    
    printf(", %c.", firstname);
    
}
