/* 0= left 1= right 2= top 3= bottom*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    srand((unsigned)time(NULL));

    char walk[10][10] = {0};
    int x = 0, y = 0;
    int num, flag = 0;
    char letter = 'A';
    walk[x][y] = letter++;

    while (letter <= 'Z')
    {
        num = rand() % 4;

        switch (num)
        {
        case 0:
            if (x - 1 >= 0 && walk[x - 1][y] == 0)
            {
                x--;
                walk[x][y] = letter++;
            }
            break;

        case 1:
            if (x + 1 < 10 && walk[x + 1][y] == 0)
            {
                x++;
                walk[x][y] = letter++;
            }
            break;

        case 2:
            if (y - 1 >= 0 && walk[x][y - 1] == 0)
            {
                y--;
                walk[x][y] = letter++;
            }
            break;

        case 3:
            if (y + 1 < 10 && walk[x][y + 1] == 0)
            {
                y++;
                walk[x][y] = letter++;
            }
            break;

        default:
            letter = 'Z' + 1;
            flag = 1;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (walk[i][j] == 0)
            {
                printf("%c ", '.');
            }
            else
            {
                printf("%c ", walk[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
