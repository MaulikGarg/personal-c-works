#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char word;
    short points;
    int scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
                        5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
                        1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");

    while ((word = getchar()) != '\n')
    {
       points += scrabble[toupper(word) - 'A'];
    }

    printf("Scrabble value: %d\n", points);
    return 0;
}
