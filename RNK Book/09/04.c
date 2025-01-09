#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int word[26]);
bool equal_array(int word[26], int word2[26]);

int main(int argc, char const *argv[])
{
    int word1[26] = {0}, word2[26] = {0};

    printf("Enter first word: ");
    read_word(word1);

    printf("Enter second word: ");
    read_word(word2);

    printf("The words are");
    equal_array(word1, word2)? printf(" anagrams."): printf(" not anagrams.");

    return 0;
}

void read_word(int word[26])
{
    char currentChar;
    while ((currentChar = getchar()) != '\n')
    {
        if (isalpha(currentChar))
        {
            int alphanum = tolower(currentChar) - 'a';
            word[alphanum]++;
        }
    }
}

bool equal_array(int word[26], int word2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (word[i] != word2[i])
        {
            return false;
        }
    }

    return true;
}