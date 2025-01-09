#include <stdio.h>
int main(int argc, char const *argv[])
{
    int gsi, lang, publ, book, check;
    printf("Enter the ISBN number: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &lang, &publ, &book, &check);
    printf("GSI: %d\n", gsi);
    printf("Group Identifier: %d\n", lang);
    printf("Publ: %d\n", publ);
    printf("Item Num: %d\n", book);
    printf("check: %d\n", check);
    return 0;
}
