#include <stdio.h>

int main(int argc, char const *argv[])
{
    int windSpeed;
    printf("please enter the wind speed");
    scanf("%d", &windSpeed);

    if (windSpeed < 1)
    {
        printf("calm");
    }
    else if (windSpeed < 4)
    {
        printf("light air");
    }
    else if (windSpeed < 28)
    {
        printf("breeze");
    }
    else if (windSpeed < 48)
    {
        printf("gale");
    }
    else if (windSpeed < 64)
    {
        printf("storm");
    }
    else
    {
        printf("hurricane");
    }

    return 0;
}
