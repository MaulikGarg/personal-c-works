#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int score1 = 0, score2 = 0;

void guide();
void rockpaperscissors();
char getturninput();
void wincalc(char in1, char in2);

int main()
{

    char input;
    printf("---------------\n");
    printf("Rock, Paper, Scissors\n");
    printf("---------------\n");

    do
    {
        printf("Type ? to get a how to play. Type 1 to play. Type 0 to terminate.\n");
        printf("Input: ");

        scanf(" %c", &input);
        if (input == '?')

        {
            guide();
            continue;
        }
        else if (input == '1')
        {
            rockpaperscissors();
            continue;
        }
        else if (input == '0')
        {
            return 0;
        }
        else
        {
            printf("Invalid Input.\n");
            printf("---------------\n");
            continue;
        }
        break;
    } while (1);
}

void guide()
{
    printf("How to Play:\n");
    printf("- (R) Rock beats Scissors\n");
    printf("- (S) Scissors beats Paper\n");
    printf("- (P) Paper beats Rock\n");
    printf("\nPress any key to return to the main menu...\n");
    while (getchar() != '\n')
        ;
    getchar();
}
void rockpaperscissors()
{
    char in1, in2;
    printf("---------------\n");
    printf("Type R/S/P to play");
    printf("\nPlayer 1 input: ");
    in1 = getturninput();
    printf("Player 2 input: ");
    in2 = getturninput();

    wincalc(in1, in2);

    printf("----Score----\n");
    printf("Player 1: %d\n", score1);
    printf("Player 2: %d\n", score2);
    printf("---------------\n");
}

char getturninput()
{
    char input;
    while (1)
    {
        scanf(" %c", &input);
        input = toupper(input);
        if (input == 'R' || input == 'S' || input == 'P')
            return input;
        else if(input == '0'){
            exit(0);
        } else
            printf("Please enter a valid input (R, S, or P).\nOR type 0 to terminate.\n");
    };
}

void wincalc(char in1, char in2)
{
    if (in1 == in2)
    {
        printf("\nIt's a tie!\n");
    }
    else
    {
        if ((in1 == 'R' && in2 == 'S') || (in1 == 'S' && in2 == 'P') || (in1 == 'P' && in2 == 'R'))
        {
            printf("Player 1 wins!\n");
            score1++;
        }
        else
        {
            printf("Player 2 wins!\n");
            score2++;
        }
    }
}
