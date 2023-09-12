#include <stdio.h>

void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    printf("\n");
    while (start < end)
    {
        // Swap the values pointed to by start and end
        int temp = *start;
        *start = *end;
        *end = temp;
        printf("%x ", start);
        // Move the pointers towards the center
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);
    reverseArray(&arr[0], size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
