#include <stdio.h>

int main(int argc, char const *argv[])
{
    int date, month, year, itemNumber;
    float unitPrice;
    printf("enter the item number: ");
    scanf("%d", &itemNumber);
    printf("\n enter the unit price: ");
    scanf("%f", &unitPrice);
    printf("\n enter mm/dd/yyyy: ");
    scanf("%2d/%2d/%d", &month, &date, &year);

    printf("\n Item \t\t Unit price \t\t Purchase date");
    printf("\n %d \t\t $%7.2f \t\t %.2d/%.2d/%.4d", itemNumber, unitPrice, month, date, year);
    return 0;
}
