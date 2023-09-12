#include <stdio.h>

int calculateSum(int *arr, int rows, int cols)
{
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += *ptr;
            ptr++;
        }
    }

    return sum;
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int sum = calculateSum(&arr[0][0], rows, cols);
    // int sum1 = calculateSum(arr, rows, cols);

    printf("Sum of the 2D array: %d\n", sum);
    printf("arr: %d\n", arr);
    printf("arr: %d\n", &arr);
    printf("arr: %d\n", &arr[0][0]);

    return 0;
}
