#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void generatewalk(char[10][10]);
void printarray(char [][10]);
int main()
{
    char walk[10][10] = {0};
    generatewalk(walk);
    printarray(walk);

    return 0;
}

void generatewalk(char walk[10][10])
{
    srand((unsigned) time(NULL));
    char letter = 'A';
    int x = 0, y = 0;
    bool up, down, right, left;
    int move;

    walk[x][y] = letter++;

    while (letter != 'Z')
    {
        up = down = left = right = move = 0;

        if (x + 1 < 10 && walk[x + 1][y] == 0)
        {
            down = true;
        }
        if (y + 1 < 10 && walk[x][y + 1] == 0)
        {
            right = true;
        }
        if (x - 1 >= 0 && walk[x - 1][y] == 0)
        {
            up = true;
        }
        if (y - 1 >= 0 && walk[x][y - 1] == 0)
        {
            left = true;
        }

        if (up + down + left + right == 0)
            break;

        move = rand() % 4;

        /* 0= left 1= right 2= top 3= bottom*/

        switch (move)
        {
        case 0:
            if (left)
                walk[x][--y] = letter++;
            break;
        case 1:
            if (right)
                walk[x][++y] = letter++;
            break;
        case 2:
            if (up)
                walk[--x][y] = letter++;
            break;
        case 3:
            if (down)
                walk[++x][y] = letter++;
            break;
        default:
            break;
        }
    }
}

void printarray(char walk[][10]){
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (walk[i][j] == 0) 
                walk[i][j] = '.';
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}