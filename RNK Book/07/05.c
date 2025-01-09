#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char word;
    short points;

    printf("Enter a word: ");

    while ((word = getchar()) != '\n')
    {
        switch (toupper(word))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            points++;
            break;
        case 'D':
        case 'G':
            points += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            points += 3;
            break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            points += 4;
            break;
        case 'K':
            points += 5;
            break;
        case 'J':
        case 'X':
            points += 8;
            break;
        case 'Q':
        case 'Z':
            points += 10;
            break;
        default:
            break;
        }
    }

    printf("Scrabble value: %d\n", points);
    return 0;
}
