#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    printf("Row totals: ");

    for (int i = 0; i < 5; i++)
    {
        int rowsum = 0;

        for (int j = 0; j < 5; j++)
        {
            rowsum += num[i][j];
        }

        printf("%d ", rowsum);
    }

    printf("\nColumn totals: ");

    for (int j = 0; j < 5; j++)
    {
        int rowsum = 0;

        for (int i = 0; i < 5; i++)
        {
            rowsum += num[i][j];
        }

        printf("%d ", rowsum);
    }

    return 0;
}
