#include <stdio.h>

int main(void)
{
    //   float commission, value;

    //   printf("Enter value of trade: ");
    //   scanf("%f", &value);

    //   if (value < 2500.00f)
    //     commission = 30.00f + .017f * value;
    //   else if (value < 6250.00f)
    //     commission = 56.00f + .0066f * value;
    //   else if (value < 20000.00f)
    //     commission = 76.00f + .0034f * value;
    //   else if (value < 50000.00f)
    //     commission = 100.00f + .0022f * value;
    //   else if (value < 500000.00f)
    //     commission = 155.00f + .0011f * value;
    //   else
    //     commission = 255.00f + .0009f * value;

    //   if (commission < 39.00f)
    //     commission = 39.00f;

    //   printf("Commission: $%.2f\n", commission);

    float nShare, pricePerShare, value, commission, com2;
    printf("enter no. of shares and the price per share: ");
    scanf("%f %f", &nShare, &pricePerShare);

    value = nShare * pricePerShare;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if(nShare <= 2000){
        com2 =  33.00f + .03f * value;
    } else if (nShare > 2000)
    {
        com2 =  33.00f + .02f * value;
    }
    
    printf("First broker: %f", commission);
    printf("\n Second broker: %f", com2);

    return 0;
}