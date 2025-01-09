#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int roll_dice();
bool play_game();

int main()
{
    int wins = 0, loses = 0;
    char pg;

    do
    {
        if (play_game() == true)
        {
            printf("\nYou Won!");
            wins++;
        }
        else
        {
            printf("\nYou Lost!");
            loses++;
        }

        printf("\nPlay again?");
        pg = tolower(getchar());
    } while (pg == 'y' || pg == 'Y');

    printf("Wins: %d\n Loses: %d", wins, loses);

    return 0;
}

bool play_game()
{
    int firstRoll, currentRoll;
    firstRoll = roll_dice();
    printf("\nYou rolled: %d", firstRoll);

    if (firstRoll == 7 || firstRoll == 11)
    {
        return true;
    }
    else if (firstRoll == 2 || firstRoll == 3 || firstRoll == 12)
    {
        return false;
    }
    else
    {
        printf("\nYour point is %d\n", firstRoll);
        do
        {
            getchar();
            currentRoll = roll_dice();
            printf("\nYou rolled: %d", currentRoll);

        } while (currentRoll == firstRoll || currentRoll == 7);

        if (currentRoll == firstRoll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int roll_dice()
{
    srand(time(NULL));
    return rand() % 12 + 1;
}