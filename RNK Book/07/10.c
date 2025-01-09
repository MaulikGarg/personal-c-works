#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowelCount = 0;
    char sentence;

    printf("Enter a sentence: ");

    while ((sentence = getchar()) != '\n')
    {
        switch (toupper(sentence))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowelCount++;
            break;
        default:
            break;
        }
    }
    printf("%d", vowelCount);
}
