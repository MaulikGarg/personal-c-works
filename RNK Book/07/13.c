#include <stdio.h>

int main(int argc, char const *argv[])
{
    double total = 1, count;
    char input;
    printf("enter the sentence: ");

    while ((input = getchar()) != '\n')
    {
        if (input == ' ')
            count++;
        else
            total++;
    }

    printf("Average word length: %f", total / count);
    return 0;
}
