#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int word[26] = {0}, notsame = 0;
    char currentChar;

    printf("Enter first word: ");

    while ((currentChar=getchar()) != '\n')
    {
        if (isalpha(currentChar))
        {
            int alphanum = tolower(currentChar) - 'a';
            word[alphanum]++;
        }
    }

    printf("Enter second word: ");

    while ((currentChar=getchar()) != '\n')
    {
        if (isalpha(currentChar))
        {
            int alphanum = tolower(currentChar) - 'a';
            word[alphanum]--;
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (word[i])
        {
            notsame = 1;
            break;
        }
        
    }

    notsame?printf("The words are not anagrams."):printf("The words are anagrams.");
    
    
    return 0;
}
