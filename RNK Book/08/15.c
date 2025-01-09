#include <stdio.h>

int main(int argc, char const *argv[])
{
    char sentence[80] = {0}, currentChar;
    short shift, length = 0;

    printf("Enter message to be encrypted: ");

    for (int i = 0; (currentChar = getchar()) != '\n' && i < 80; i++)
    {
        sentence[i] = currentChar;
        length++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    printf("Encrypted message: ");

    for (int i = 0; i < length; i++)
    {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
            sentence[i] = ((sentence[i] - 'A') + shift) % 26 + 'A';

        if (sentence[i] >= 'a' && sentence[i] <= 'z')
            sentence[i] = ((sentence[i] - 'a') + shift) % 26 + 'a';

        putchar(sentence[i]);
    }

    return 0;
}
