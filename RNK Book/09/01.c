#include <stdio.h>
#include <stdbool.h>
#define MAXLENGTH 3

void selection_sort(int[], int);

int main()
{
    int c, nums[MAXLENGTH], i = 0;

    printf("Enter %d nums: ", MAXLENGTH);
    for (i; i < MAXLENGTH; i++)
    {
        scanf("%d", &nums[i]);
    }

    selection_sort(nums, i + 1);

    printf("Sorted list:");
    for (int j = 0; j < i; j++)
    {
        printf(" %d", nums[j]);
    }
    printf("\n");
}

void selection_sort(int nums[], int elements)
{

    if (elements == 0)
        return;

    int largestelement = nums[0], indexoflargest = 0;
    for (int i = 0; i < elements; i++)
    {
        if (nums[i] > largestelement)
        {
            indexoflargest = i;
            largestelement = nums[i];
        }
    }

    int temp = nums[elements - 1];
    nums[elements - 1] = nums[indexoflargest];
    nums[indexoflargest] = temp;

    selection_sort(nums, elements - 1);
}
