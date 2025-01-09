#include <stdio.h>

int main(int argc, char const *argv[])
{
    char sentence[100] = {' '}, specialchar = '.', ch;
    int i = 0;

    printf("Enter a sentence: ");

    for (; (ch = getchar()) != '\n' && i < 100; i++)
    {
        if (ch == '.' || ch == '?' || ch == '!')
        {
            specialchar = ch;
            break;
        }
        sentence[i] = ch;
    }

    ;

    while (i >= 0)
    {
        while (sentence[--i] != ' ' && i >= 0)
            ;

        int j = (i == 0) ? 0 : i + 1; // j =4

        while (sentence[j] != ' ' && sentence[j] != '\0')
        {
            putchar(sentence[j++]);
        }

        if (i >= 0)
        {
            putchar(' ');
        }
    }

    putchar(specialchar);

    return 0;
}
