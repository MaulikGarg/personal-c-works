/* for visualization:
    -y
    |
    |
    |
    0------x
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("This program creates a magic square of a\
            specified size.\n The size must be an odd number between 1 and 99.\nEnter size of magic square: ");

    scanf("%d", &n);

    int square[n][n], x, y, count = 1;

    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            square[x][y] = 0;
        }
    }

    x = n / 2;
    y = 0;

    square[x][y] = count++;

    if ((n % 2 != 0) && n > 1 && n < 100)
    {
        int xlast = x, ylast = y;
        while (count <= n * n)
        {
            xlast = x;
            ylast = y;

            if (xlast + 1 >= n)
                x = 0;
            else
                x++;

            if (ylast - 1 < 0)
                y = n - 1;
            else
                y--;

            if (square[x][y] == 0)
                square[xlast = x][ylast = y] = count++;
            else
            {
                if (ylast + 1 < n)
                {
                    square[x = xlast][y = ylast + 1] = count++;
                }
                else
                {
                    square[x = xlast][y = 0] = count++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", square[j][i]);
            }
            printf("\n"); 
        }
        
    }
    else
    {
        printf("Invalid input.");
    }

    return 0;
}
