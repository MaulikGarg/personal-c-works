#include <stdio.h>
#define TESTS 5
#define STUDENTS 5

int main(int argc, char const *argv[])
{
    int num[5][5] = {0};

    for (int i = 0; i < TESTS; i++)
    {
        printf("Enter for quiz %d: ", i + 1);

        for (int j = 0; j < STUDENTS; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    

    printf("\n\tTotal And Average Scores\n\n ");

    for (int j = 0; j < STUDENTS; j++)
    {
        int score = 0;

        for (int i = 0; i < TESTS; i++)
        {
            score += num[i][j];
        }

        printf("\nFor student %d, Total = %d and average = %d ", j+1, score, score/TESTS);
    }

    printf("Average, High and Low Scores: ");

    for (int i = 0; i < TESTS; i++)
    {
        int score_total = 0, high = 0, low = 0;

        for (int j = 0; j < STUDENTS; j++)
        {
            score_total += num[i][j];
            if(num[i][j] > high) high = num[i][j];
            if(num[i][j] < low) low = num[i][j];
  
        }

        printf("\nThe average score for test %d is: %d, High is: %d and Low is %d"
                  , i+1, score_total/STUDENTS, high, low);
    }

    return 0;
}
